void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F7F5D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__, method);
    byte_40F7F5D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    309,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
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
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  OpeningMovieMaster___c_c *v47; // x0
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  struct OpeningMovieMaster___c_StaticFields *v58; // x0
  BattleServantConfConponent_o *p__9__2_0; // x0
  OpeningMovieMaster___c_c *v60; // x0
  struct OpeningMovieMaster___c_StaticFields *v61; // x8
  Il2CppObject *v62; // x21
  struct OpeningMovieMaster___c_StaticFields *v63; // x0

  if ( (byte_40F7F5E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, nowTime);
    sub_B16FFC(&Method_System_Comparison_OpeningMovieEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_OpeningMovieEntity__TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v18);
    sub_B16FFC(&OpeningMovieEntity_TypeInfo, v19);
    sub_B16FFC(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, v20);
    sub_B16FFC(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, v21);
    sub_B16FFC(&OpeningMovieMaster___c_TypeInfo, v22);
    byte_40F7F5E = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_OpeningMovieEntity__TypeInfo,
                                                                                                  nowTime,
                                                                                                  *(_QWORD *)&sortType,
                                                                                                  isMaterial,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v34 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_B173C8(v35);
LABEL_55:
      sub_B170D4();
    }
    if ( OpeningMovieEntity__IsEnable(v35, nowTime, v26, v36) )
    {
      if ( !v23 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        v37,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    }
  }
  v39 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_29:
    v42 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  if ( sortType != 1 )
  {
    if ( !sortType )
    {
      v47 = OpeningMovieMaster___c_TypeInfo;
      if ( (BYTE3(OpeningMovieMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
        v47 = OpeningMovieMaster___c_TypeInfo;
      }
      static_fields = v47->static_fields;
      _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
      if ( !_9__2_0 )
      {
        if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47);
          static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
        }
        v50 = (Il2CppObject *)static_fields->__9;
        _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                              System_Comparison_OpeningMovieEntity__TypeInfo,
                                                                              v43,
                                                                              v44,
                                                                              v45,
                                                                              v46);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__2_0,
          v50,
          Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
        v57 = (System_Int32_array **)_9__2_0;
        v58 = OpeningMovieMaster___c_TypeInfo->static_fields;
        v58->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
        p__9__2_0 = (BattleServantConfConponent_o *)&v58->__9__2_0;
LABEL_49:
        sub_B16F98(p__9__2_0, v57, v51, v52, v53, v54, v55, v56);
        goto LABEL_50;
      }
      goto LABEL_50;
    }
    if ( v23 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_57:
    sub_B170D4();
  }
  v60 = OpeningMovieMaster___c_TypeInfo;
  if ( (BYTE3(OpeningMovieMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    v60 = OpeningMovieMaster___c_TypeInfo;
  }
  v61 = v60->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v61->__9__2_1;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v61 = OpeningMovieMaster___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)v61->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_OpeningMovieEntity__TypeInfo,
                                                                          v43,
                                                                          v44,
                                                                          v45,
                                                                          v46);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v62,
      Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    v57 = (System_Int32_array **)_9__2_0;
    v63 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v63->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
    p__9__2_0 = (BattleServantConfConponent_o *)&v63->__9__2_1;
    goto LABEL_49;
  }
LABEL_50:
  if ( !v23 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  OpeningMovieEntity_o *v41; // x0
  const MethodInfo *v42; // x3
  OpeningMovieEntity_o *v43; // x25
  __int64 v44; // x10
  int32_t v45; // w8
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v54; // x0
  __int64 *v55; // x8
  System_Comparison_T__o *v56; // x19

  if ( (byte_40F7F60 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Comparison_OpeningMovieEntity___ctor__, v11);
    sub_B16FFC(&System_Comparison_OpeningMovieEntity__TypeInfo, v12);
    sub_B16FFC(&System_IDisposable_TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v19);
    sub_B16FFC(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v20);
    sub_B16FFC(&OpeningMovieEntity_TypeInfo, v21);
    sub_B16FFC(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__, v22);
    sub_B16FFC(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__, v23);
    sub_B16FFC(&OpeningMovieMaster___c__DisplayClass4_0_TypeInfo, v24);
    byte_40F7F60 = 1;
  }
  v25 = (OpeningMovieMaster___c__DisplayClass4_0_o *)sub_B170CC(
                                                       OpeningMovieMaster___c__DisplayClass4_0_TypeInfo,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&value,
                                                       nowTime,
                                                       *(_QWORD *)&sortType);
  OpeningMovieMaster___c__DisplayClass4_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_45;
  v25->fields.type = type;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_OpeningMovieEntity__TypeInfo,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v40 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v41 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                    Enumerator,
                                    *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( v41 )
    {
      v44 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41->klass->_2.bitflags2 + 1) >= (unsigned int)v44
        && (OpeningMovieEntity_c *)v41->klass->_2.typeHierarchy[v44 - 1] == OpeningMovieEntity_TypeInfo
        && OpeningMovieEntity__IsEnable(v41, nowTime, 1, v42) )
      {
        v45 = v25->fields.type;
        if ( v45 == v43->fields.materialPosType )
        {
          if ( v45 == 2 )
          {
            if ( !v30 )
              sub_B170D4();
LABEL_28:
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v30,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
          }
          else if ( v45 == 1 && v43->fields.materialPosValue == value )
          {
            if ( !v30 )
              sub_B170D4();
            goto LABEL_28;
          }
        }
      }
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
        goto LABEL_35;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_35:
    v49 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  if ( sortType == 1 )
  {
    v54 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                      System_Comparison_OpeningMovieEntity__TypeInfo,
                                                                      v50,
                                                                      v51,
                                                                      v52,
                                                                      v53);
    v55 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
LABEL_41:
    v56 = (System_Comparison_T__o *)v54;
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v54,
      (Il2CppObject *)v25,
      *v55,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    if ( v30 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v30,
        v56,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_45:
    sub_B170D4();
  }
  if ( !sortType )
  {
    v54 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                      System_Comparison_OpeningMovieEntity__TypeInfo,
                                                                      v50,
                                                                      v51,
                                                                      v52,
                                                                      v53);
    v55 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
    goto LABEL_41;
  }
  if ( !v30 )
    goto LABEL_45;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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

  if ( (byte_40F7F5F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, movieFileName);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&OpeningMovieEntity_TypeInfo, v8);
    byte_40F7F5F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v18 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_B173C8(v19);
LABEL_35:
      sub_B170D4();
    }
    movieName = v19->fields.movieName;
    if ( !movieName )
      sub_B170D4();
    if ( System_String__Equals_43731072(movieName, movieFileName, 0LL) )
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
    v27 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  System_String_o *String_34837456; // x0
  __int64 v11; // x2
  System_String_o *v12; // x19
  System_String_array *v13; // x0
  __int64 v14; // x2
  System_String_array *v15; // x1
  __int64 v16; // x8
  System_String_array *v17; // x21
  OpeningMovieEntity_Fields *p_fields; // x20
  unsigned __int64 v19; // x23
  int32_t id; // w25
  TitleRootComponent_c *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  TitleRootComponent_c *v26; // x0
  System_String_o *SAVE_KEY_PLAYED_MOVIE; // x19

  if ( (byte_40F7F61 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, movieFileName);
    sub_B16FFC(&TitleRootComponent_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_698, v6);
    byte_40F7F61 = 1;
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
    String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456(v9->static_fields->SAVE_KEY_PLAYED_MOVIE, 0LL);
    if ( String_34837456 )
    {
      v12 = String_34837456;
      if ( String_34837456->fields.m_stringLength < 1 )
      {
        v26 = TitleRootComponent_TypeInfo;
        if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
          v26 = TitleRootComponent_TypeInfo;
        }
        SAVE_KEY_PLAYED_MOVIE = v26->static_fields->SAVE_KEY_PLAYED_MOVIE;
        v24 = System_Int32__ToString((int)v8 + 16, 0LL);
        v25 = SAVE_KEY_PLAYED_MOVIE;
LABEL_26:
        UnityEngine_PlayerPrefs__SetString(v25, v24, 0LL);
        return;
      }
      v13 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v11);
      if ( v13 )
      {
        v15 = v13;
        if ( !v13->max_length )
          goto LABEL_27;
        LOWORD(v13->m_Items[0]) = 44;
        v13 = System_String__Split(v12, (System_Char_array *)v13, 0LL);
        if ( v13 )
        {
          v16 = *(_QWORD *)&v13->max_length;
          v17 = v13;
          p_fields = &v8->fields;
          if ( (int)v16 >= 1 )
          {
            v19 = 0LL;
            while ( v19 < (unsigned int)v16 )
            {
              id = p_fields->id;
              v13 = (System_String_array *)System_Int32__Parse(v17->m_Items[v19], 0LL);
              if ( id == (_DWORD)v13 )
                return;
              LODWORD(v16) = v17->max_length;
              if ( (__int64)++v19 >= (int)v16 )
                goto LABEL_17;
            }
LABEL_27:
            sub_B17100(v13, v15, v14);
            sub_B170A0();
          }
LABEL_17:
          v21 = TitleRootComponent_TypeInfo;
          if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
            v21 = TitleRootComponent_TypeInfo;
          }
          v22 = v21->static_fields->SAVE_KEY_PLAYED_MOVIE;
          v23 = System_Int32__ToString((int32_t)p_fields, 0LL);
          v24 = System_String__Concat_43746016(v12, (System_String_o *)StringLiteral_698, v23, 0LL);
          v25 = v22;
          goto LABEL_26;
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8360 & 1) == 0 )
  {
    sub_B16FFC(&OpeningMovieMaster___c_TypeInfo, v1);
    byte_40F8360 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(OpeningMovieMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)OpeningMovieMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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