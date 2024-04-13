void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E62C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E62C7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    310,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        bool isMaterial,
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
  __int64 v52; // x1
  void *list; // x0
  __int64 v54; // x1
  __int64 v55; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  bool v57; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v59; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v62; // x3
  System_Collections_Generic_IEnumerator_T__c *v63; // x8
  unsigned __int64 v64; // x10
  int32_t *v65; // x11
  __int64 v66; // x0
  OpeningMovieEntity_o *v67; // x0
  __int64 v68; // x1
  const MethodInfo *v69; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v70; // x24
  __int64 v71; // x9
  _BOOL8 IsEnable; // x0
  __int64 v73; // x1
  System_Collections_Generic_IEnumerator_T__c *v74; // x8
  unsigned __int64 v75; // x10
  int32_t *v76; // x11
  __int64 v77; // x0
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v80; // x21
  struct OpeningMovieMaster___c_StaticFields *v81; // x0
  struct System_Comparison_OpeningMovieEntity__o **p__9__2_0; // x0
  struct OpeningMovieMaster___c_StaticFields *v83; // x8
  Il2CppObject *v84; // x21
  struct OpeningMovieMaster___c_StaticFields *v85; // x0

  if ( (byte_42E62C8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      nowTime,
      sortType,
      isMaterial);
    sub_B5D5C4(&Method_System_Comparison_OpeningMovieEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_OpeningMovieEntity__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&OpeningMovieEntity_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, v42, v43, v44);
    sub_B5D5C4(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, v45, v46, v47);
    sub_B5D5C4(&OpeningMovieMaster___c_TypeInfo, v48, v49, v50);
    byte_42E62C8 = 1;
  }
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v54);
  v57 = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v59 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v59;
        p_offset += 4;
        if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v55);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v63 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v64 = 0LL;
      v65 = &v63->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v65 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v64;
        v65 += 4;
        if ( v64 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v66 = (__int64)&v63->vtable[*v65].method;
    }
    else
    {
LABEL_17:
      v66 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v62);
    }
    v67 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v66)(
                                    Enumerator,
                                    *(_QWORD *)(v66 + 8));
    v70 = (EventMissionProgressRequest_Argument_ProgressData_o *)v67;
    if ( !v67 )
      goto LABEL_55;
    v71 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v67->klass->_2.bitflags2 + 1) < (unsigned int)v71
      || (OpeningMovieEntity_c *)v67->klass->_2.typeHierarchy[v71 - 1] != OpeningMovieEntity_TypeInfo )
    {
      v67 = (OpeningMovieEntity_o *)sub_B5D990(v67);
LABEL_55:
      sub_B5D69C(v67, v68);
    }
    IsEnable = OpeningMovieEntity__IsEnable(v67, nowTime, v57, v69);
    if ( IsEnable )
    {
      if ( !v51 )
        sub_B5D69C(IsEnable, v73);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v51,
        v70,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    }
  }
  v74 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v75 = 0LL;
    v76 = &v74->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      ++v75;
      v76 += 4;
      if ( v75 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v77 = (__int64)&v74->vtable[*v76].method;
  }
  else
  {
LABEL_29:
    v77 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v62);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v77)(
                   Enumerator,
                   *(_QWORD *)(v77 + 8));
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
        v80 = (Il2CppObject *)static_fields->__9;
        _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_OpeningMovieEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__2_0,
          v80,
          Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__,
          (const MethodInfo_249B1FC *)Method_System_Comparison_OpeningMovieEntity___ctor__);
        v81 = OpeningMovieMaster___c_TypeInfo->static_fields;
        v81->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
        p__9__2_0 = &v81->__9__2_0;
LABEL_49:
        sub_B5D560(p__9__2_0);
        goto LABEL_50;
      }
      goto LABEL_50;
    }
    if ( v51 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_57:
    sub_B5D69C(list, v52);
  }
  list = OpeningMovieMaster___c_TypeInfo;
  if ( (BYTE3(OpeningMovieMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    list = OpeningMovieMaster___c_TypeInfo;
  }
  v83 = (struct OpeningMovieMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v83->__9__2_1;
  if ( !_9__2_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      v83 = OpeningMovieMaster___c_TypeInfo->static_fields;
    }
    v84 = (Il2CppObject *)v83->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_OpeningMovieEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v84,
      Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    v85 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v85->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
    p__9__2_0 = &v85->__9__2_1;
    goto LABEL_49;
  }
LABEL_50:
  if ( !v51 )
    goto LABEL_57;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v51,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMoviesAndMaterialPos(
        OpeningMovieMaster_o *this,
        int32_t type,
        int32_t value,
        int64_t nowTime,
        int32_t sortType,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  OpeningMovieMaster___c__DisplayClass4_0_o *v53; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v55; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x20
  __int64 v57; // x1
  const MethodInfo *v58; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v61; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v64; // x3
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  OpeningMovieEntity_o *v69; // x0
  OpeningMovieEntity_o *v70; // x25
  __int64 v71; // x10
  _BOOL8 IsEnable; // x0
  __int64 v73; // x1
  int32_t v74; // w8
  System_Collections_Generic_IEnumerator_T__c *v75; // x8
  unsigned __int64 v76; // x10
  int32_t *v77; // x11
  __int64 v78; // x0
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v79; // x0
  __int64 *v80; // x8
  System_Comparison_T__o *v81; // x19

  if ( (byte_42E62CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, type, value, nowTime);
    sub_B5D5C4(&Method_System_Comparison_OpeningMovieEntity___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Comparison_OpeningMovieEntity__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&OpeningMovieEntity_TypeInfo, v41, v42, v43);
    sub_B5D5C4(
      &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__,
      v44,
      v45,
      v46);
    sub_B5D5C4(
      &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__,
      v47,
      v48,
      v49);
    sub_B5D5C4(&OpeningMovieMaster___c__DisplayClass4_0_TypeInfo, v50, v51, v52);
    byte_42E62CA = 1;
  }
  v53 = (OpeningMovieMaster___c__DisplayClass4_0_o *)sub_B5D694(OpeningMovieMaster___c__DisplayClass4_0_TypeInfo);
  OpeningMovieMaster___c__DisplayClass4_0___ctor(v53, 0LL);
  if ( !v53 )
    goto LABEL_45;
  v53->fields.type = type;
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v57);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v61 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v61;
        p_offset += 4;
        if ( v61 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v58);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v65 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v66 = 0LL;
      v67 = &v65->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v67 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v66;
        v67 += 4;
        if ( v66 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v68 = (__int64)&v65->vtable[*v67].method;
    }
    else
    {
LABEL_17:
      v68 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v64);
    }
    v69 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(
                                    Enumerator,
                                    *(_QWORD *)(v68 + 8));
    v70 = v69;
    if ( v69 )
    {
      v71 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v69->klass->_2.bitflags2 + 1) >= (unsigned int)v71
        && (OpeningMovieEntity_c *)v69->klass->_2.typeHierarchy[v71 - 1] == OpeningMovieEntity_TypeInfo )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v69, nowTime, 1, v58);
        if ( IsEnable )
        {
          v74 = v53->fields.type;
          if ( v74 == v70->fields.materialPosType )
          {
            if ( v74 == 2 )
            {
              if ( !v56 )
                sub_B5D69C(IsEnable, v73);
LABEL_28:
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v56,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
            }
            else if ( v74 == 1 && v70->fields.materialPosValue == value )
            {
              if ( !v56 )
                sub_B5D69C(IsEnable, v73);
              goto LABEL_28;
            }
          }
        }
      }
    }
  }
  v75 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v76 = 0LL;
    v77 = &v75->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
    {
      ++v76;
      v77 += 4;
      if ( v76 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v78 = (__int64)&v75->vtable[*v77].method;
  }
  else
  {
LABEL_35:
    v78 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v64);
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v78)(
                                                                                       Enumerator,
                                                                                       *(_QWORD *)(v78 + 8));
  if ( sortType == 1 )
  {
    v79 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_OpeningMovieEntity__TypeInfo);
    v80 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
LABEL_41:
    v81 = (System_Comparison_T__o *)v79;
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      v79,
      (Il2CppObject *)v53,
      *v80,
      (const MethodInfo_249B1FC *)Method_System_Comparison_OpeningMovieEntity___ctor__);
    if ( v56 )
    {
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v56,
        v81,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v56,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_45:
    sub_B5D69C(list, v55);
  }
  if ( !sortType )
  {
    v79 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_OpeningMovieEntity__TypeInfo);
    v80 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
    goto LABEL_41;
  }
  if ( !v56 )
    goto LABEL_45;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v56,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_o *__fastcall OpeningMovieMaster__GetOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  OpeningMovieEntity_o *v30; // x0
  __int64 v31; // x1
  OpeningMovieEntity_o *v32; // x21
  __int64 v33; // x9
  System_String_o *movieName; // x0
  int v35; // w8
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  int v41; // [xsp+0h] [xbp-40h]

  if ( (byte_42E62C9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)movieFileName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&OpeningMovieEntity_TypeInfo, v15, v16, v17);
    byte_42E62C9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v19);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v20);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v30 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                    Enumerator,
                                    *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      goto LABEL_35;
    v33 = *(&OpeningMovieEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v33
      || (OpeningMovieEntity_c *)v30->klass->_2.typeHierarchy[v33 - 1] != OpeningMovieEntity_TypeInfo )
    {
      v30 = (OpeningMovieEntity_o *)sub_B5D990(v30);
LABEL_35:
      sub_B5D69C(v30, v31);
    }
    movieName = v30->fields.movieName;
    if ( !movieName )
      sub_B5D69C(0LL, OpeningMovieEntity_TypeInfo);
    if ( System_String__Equals_44565128(movieName, movieFileName, 0LL) )
    {
      v35 = 66;
      goto LABEL_25;
    }
  }
  v32 = 0LL;
  v35 = 64;
LABEL_25:
  v41 = v35;
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_29:
    v39 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  if ( v41 == 64 )
    return 0LL;
  return v32;
}


void __fastcall OpeningMovieMaster__SavePlayedOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  OpeningMovieEntity_o *OpeningMovie; // x0
  OpeningMovieEntity_o *v13; // x20
  TitleRootComponent_c *v14; // x0
  __int64 String_35648228; // x0
  __int64 v16; // x1
  System_String_o *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x21
  OpeningMovieEntity_Fields *p_fields; // x20
  unsigned __int64 v21; // x23
  int32_t id; // w25
  TitleRootComponent_c *v23; // x0
  System_String_o *v24; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x1
  System_String_o *v27; // x0
  TitleRootComponent_c *v28; // x0
  System_String_o *SAVE_KEY_PLAYED_MOVIE; // x19
  __int64 v30; // x0

  if ( (byte_42E62CB & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)movieFileName, (_DWORD)method, v3);
    sub_B5D5C4(&TitleRootComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_707/*","*/, v9, v10, v11);
    byte_42E62CB = 1;
  }
  OpeningMovie = OpeningMovieMaster__GetOpeningMovie(this, movieFileName, method);
  if ( OpeningMovie )
  {
    v13 = OpeningMovie;
    v14 = TitleRootComponent_TypeInfo;
    if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v14 = TitleRootComponent_TypeInfo;
    }
    String_35648228 = (__int64)UnityEngine_PlayerPrefs__GetString_35648228(
                                 v14->static_fields->SAVE_KEY_PLAYED_MOVIE,
                                 0LL);
    if ( String_35648228 )
    {
      v17 = (System_String_o *)String_35648228;
      if ( *(int *)(String_35648228 + 16) < 1 )
      {
        v28 = TitleRootComponent_TypeInfo;
        if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
          v28 = TitleRootComponent_TypeInfo;
        }
        SAVE_KEY_PLAYED_MOVIE = v28->static_fields->SAVE_KEY_PLAYED_MOVIE;
        v26 = System_Int32__ToString((int)v13 + 16, 0LL);
        v27 = SAVE_KEY_PLAYED_MOVIE;
LABEL_26:
        UnityEngine_PlayerPrefs__SetString(v27, v26, 0LL);
        return;
      }
      String_35648228 = sub_B5D5DC(char___TypeInfo, 1LL);
      if ( String_35648228 )
      {
        if ( !*(_DWORD *)(String_35648228 + 24) )
          goto LABEL_27;
        *(_WORD *)(String_35648228 + 32) = 44;
        String_35648228 = (__int64)System_String__Split(v17, (System_Char_array *)String_35648228, 0LL);
        if ( String_35648228 )
        {
          v18 = *(_QWORD *)(String_35648228 + 24);
          v19 = String_35648228;
          p_fields = &v13->fields;
          if ( (int)v18 >= 1 )
          {
            v21 = 0LL;
            while ( v21 < (unsigned int)v18 )
            {
              id = p_fields->id;
              String_35648228 = System_Int32__Parse(*(System_String_o **)(v19 + 32 + 8 * v21), 0LL);
              if ( id == (_DWORD)String_35648228 )
                return;
              LODWORD(v18) = *(_DWORD *)(v19 + 24);
              if ( (__int64)++v21 >= (int)v18 )
                goto LABEL_17;
            }
LABEL_27:
            v30 = sub_B5D6C8(String_35648228);
            sub_B5D668(v30, 0LL);
          }
LABEL_17:
          v23 = TitleRootComponent_TypeInfo;
          if ( (BYTE3(TitleRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
            v23 = TitleRootComponent_TypeInfo;
          }
          v24 = v23->static_fields->SAVE_KEY_PLAYED_MOVIE;
          v25 = System_Int32__ToString((int32_t)p_fields, 0LL);
          v26 = System_String__Concat_44580072(v17, (System_String_o *)StringLiteral_707/*","*/, v25, 0LL);
          v27 = v24;
          goto LABEL_26;
        }
      }
    }
    sub_B5D69C(String_35648228, v16);
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5A69 & 1) == 0 )
  {
    sub_B5D5C4(&OpeningMovieMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5A69 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct OpeningMovieMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, a);
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