void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC973 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
    byte_4BDC973 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    315,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        int32_t timing,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  void *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  OpeningMovieEntity_o *v22; // x0
  const MethodInfo *v23; // x1
  OpeningMovieEntity_o *v24; // x24
  int32_t TargetTiming; // w0
  const MethodInfo *v26; // x3
  _BOOL8 IsEnable; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  System_Comparison_T__o *v43; // x20
  Il2CppObject *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__3_1; // x0
  Il2CppObject *v54; // x21
  struct OpeningMovieMaster___c_StaticFields *v55; // x0

  if ( (byte_4BDC974 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_1C21E38(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_1C21E38(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_0__);
    sub_1C21E38(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_1__);
    sub_1C21E38(&OpeningMovieMaster___c_TypeInfo);
    byte_4BDC974 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_55;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0LL);
    }
    v22 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                    Enumerator,
                                    *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      sub_1C22094(0LL, v23);
    TargetTiming = OpeningMovieEntity__GetTargetTiming(v22, v23);
    if ( !TargetTiming || TargetTiming == timing )
    {
      IsEnable = OpeningMovieEntity__IsEnable(v24, nowTime, 0, v26);
      if ( IsEnable )
      {
        if ( !v9 )
          sub_1C22094(IsEnable, v28);
        items = v9->fields._items;
        v36 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          sub_1C22094(IsEnable, v28);
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v24,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v24;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v24, v29, v30, v31, v32, v33, v34);
        }
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_31;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_31:
    v42 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
                   Enumerator,
                   *(_QWORD *)(v42 + 8));
  if ( sortType )
  {
    if ( sortType == 1 )
    {
      list = OpeningMovieMaster___c_TypeInfo;
      if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
      if ( !v43 )
      {
        if ( !*((_DWORD *)list + 56) )
        {
          j_il2cpp_runtime_class_init_0(list);
          list = OpeningMovieMaster___c_TypeInfo;
        }
        v44 = (Il2CppObject *)**((_QWORD **)list + 23);
        v43 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_OpeningMovieEntity__TypeInfo);
        System_Comparison_object____ctor(v43, v44, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_1__, 0LL);
        v51 = (int64_t)v43;
        static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
        static_fields->__9__3_1 = (struct System_Comparison_OpeningMovieEntity__o *)v43;
        p__9__3_1 = (PartyOrganizationUtility_o *)&static_fields->__9__3_1;
LABEL_47:
        sub_1C21DDC(p__9__3_1, v51, v45, v46, v47, v48, v49, v50);
        goto LABEL_48;
      }
      goto LABEL_48;
    }
    if ( v9 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_55:
    sub_1C22094(list, v10);
  }
  list = OpeningMovieMaster___c_TypeInfo;
  if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    list = OpeningMovieMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v54 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_OpeningMovieEntity__TypeInfo);
    System_Comparison_object____ctor(v43, v54, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_0__, 0LL);
    v51 = (int64_t)v43;
    v55 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v55->__9__3_0 = (struct System_Comparison_OpeningMovieEntity__o *)v43;
    p__9__3_1 = (PartyOrganizationUtility_o *)&v55->__9__3_0;
    goto LABEL_47;
  }
LABEL_48:
  if ( !v9 )
    goto LABEL_55;
  System_Collections_Generic_List_object___Sort_56953720(
    v9,
    v43,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v9,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMoviesAndMaterialPos(
        OpeningMovieMaster_o *this,
        int32_t type,
        int32_t value,
        int64_t nowTime,
        int32_t sortType,
        const MethodInfo *method)
{
  __int64 v11; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  OpeningMovieEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  int64_t v27; // x25
  _BOOL8 IsEnable; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int v36; // w8
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  System_Comparison_T__o *v45; // x0
  __int64 *v46; // x8
  System_Comparison_T__o *v47; // x19

  if ( (byte_4BDC976 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_1C21E38(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_1C21E38(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__);
    sub_1C21E38(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__);
    sub_1C21E38(&OpeningMovieMaster___c__DisplayClass5_0_TypeInfo);
    byte_4BDC976 = 1;
  }
  v11 = sub_1C22084(OpeningMovieMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_48;
  *(_DWORD *)(v11 + 16) = type;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_17:
      v24 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0LL);
    }
    v25 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                    Enumerator,
                                    *(_QWORD *)(v24 + 8));
    v27 = (int64_t)v25;
    if ( v25 )
    {
      IsEnable = OpeningMovieEntity__IsEnable(v25, nowTime, 1, v26);
      if ( IsEnable )
      {
        v36 = *(_DWORD *)(v11 + 16);
        if ( v36 == *(_DWORD *)(v27 + 48) )
        {
          if ( v36 == 2 )
          {
            if ( !v14 )
              sub_1C22094(IsEnable, v29);
            items = v14->fields._items;
            v38 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              sub_1C22094(IsEnable, v29);
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_32;
LABEL_28:
            v40 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v27;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 4), v27, v30, v31, v32, v33, v34, v35);
          }
          else if ( v36 == 1 && *(_DWORD *)(v27 + 52) == value )
          {
            if ( !v14 )
              sub_1C22094(IsEnable, v29);
            items = v14->fields._items;
            v38 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              sub_1C22094(IsEnable, v29);
            size = v14->fields._size;
            if ( (unsigned int)size < items->max_length )
              goto LABEL_28;
LABEL_32:
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)v27,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
        }
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_38;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_38:
    v44 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                             Enumerator,
                                                             *(_QWORD *)(v44 + 8));
  if ( !sortType )
  {
    v45 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_OpeningMovieEntity__TypeInfo);
    v46 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
LABEL_44:
    v47 = v45;
    System_Comparison_object____ctor(v45, (Il2CppObject *)v11, *v46, 0LL);
    if ( v14 )
    {
      System_Collections_Generic_List_object___Sort_56953720(
        v14,
        v47,
        (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v14,
                                           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_48:
    sub_1C22094(list, v13);
  }
  if ( sortType == 1 )
  {
    v45 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_OpeningMovieEntity__TypeInfo);
    v46 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
    goto LABEL_44;
  }
  if ( !v14 )
    goto LABEL_48;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v14,
                                       (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_o *__fastcall OpeningMovieMaster__GetOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  OpeningMovieEntity_o *v18; // x21
  System_String_o *v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  if ( (byte_4BDC975 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    byte_4BDC975 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C22094(0LL, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v18 = (OpeningMovieEntity_o *)v16;
    if ( !v16 )
      sub_1C22094(0LL, v17);
    v19 = *(System_String_o **)(v16 + 32);
    if ( !v19 )
      sub_1C22094(0LL, v17);
    if ( System_String__Equals_63123792(v19, movieFileName, 0LL) )
      goto LABEL_23;
  }
  v18 = 0LL;
LABEL_23:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_27;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_27:
    v23 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
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
  System_String_o *String_70827888; // x0
  __int64 v9; // x1
  System_String_o *v10; // x19
  System_String_c *klass; // x8
  System_String_o *v12; // x21
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

  if ( (byte_4BDC977 & 1) == 0 )
  {
    sub_1C21E38(&TitleRootComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BDC977 = 1;
  }
  OpeningMovie = OpeningMovieMaster__GetOpeningMovie(this, movieFileName, method);
  if ( !OpeningMovie )
    return;
  v6 = OpeningMovie;
  v7 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v7 = TitleRootComponent_TypeInfo;
  }
  String_70827888 = UnityEngine_PlayerPrefs__GetString_70827888(v7->static_fields->SAVE_KEY_PLAYED_MOVIE, 0LL);
  if ( !String_70827888 )
    goto LABEL_23;
  v10 = String_70827888;
  if ( String_70827888->fields._stringLength < 1 )
  {
    v21 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v21 = TitleRootComponent_TypeInfo;
    }
    SAVE_KEY_PLAYED_MOVIE = v21->static_fields->SAVE_KEY_PLAYED_MOVIE;
    v19 = System_Int32__ToString((int)v6 + 16, 0LL);
    v20 = SAVE_KEY_PLAYED_MOVIE;
    goto LABEL_21;
  }
  String_70827888 = (System_String_o *)System_String__Split(String_70827888, 0x2Cu, 0, 0LL);
  if ( !String_70827888 )
LABEL_23:
    sub_1C22094(String_70827888, v9);
  klass = String_70827888[1].klass;
  v12 = String_70827888;
  p_fields = &v6->fields;
  if ( (int)klass < 1 )
  {
LABEL_14:
    v16 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v16 = TitleRootComponent_TypeInfo;
    }
    v17 = v16->static_fields->SAVE_KEY_PLAYED_MOVIE;
    v18 = System_Int32__ToString((int32_t)p_fields, 0LL);
    v19 = System_String__Concat_63126736(v10, (System_String_o *)StringLiteral_866/*","*/, v18, 0LL);
    v20 = v17;
LABEL_21:
    UnityEngine_PlayerPrefs__SetString(v20, v19, 0LL);
    return;
  }
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)klass )
      sub_1C2209C(String_70827888, v9);
    id = p_fields->id;
    String_70827888 = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v12[1].monitor + v14), 0LL);
    if ( id == (_DWORD)String_70827888 )
      break;
    LODWORD(klass) = v12[1].klass;
    if ( (__int64)++v14 >= (int)klass )
      goto LABEL_14;
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC978 & 1) == 0 )
  {
    sub_1C21E38(&OpeningMovieMaster___c_TypeInfo);
    byte_4BDC978 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  OpeningMovieMaster___c_TypeInfo->static_fields->__9 = (struct OpeningMovieMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)OpeningMovieMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall OpeningMovieMaster___c___ctor(OpeningMovieMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall OpeningMovieMaster___c___GetEnableOpeningMovies_b__3_0(
        OpeningMovieMaster___c_o *this,
        OpeningMovieEntity_o *a,
        OpeningMovieEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C22094(this, a);
  return a->fields.id - b->fields.id;
}


int32_t __fastcall OpeningMovieMaster___c___GetEnableOpeningMovies_b__3_1(
        OpeningMovieMaster___c_o *this,
        OpeningMovieEntity_o *a,
        OpeningMovieEntity_o *b,
        const MethodInfo *method)
{
  int32_t priority; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !b || !a )
    sub_1C22094(this, a);
  priority = b->fields.priority;
  v5 = a->fields.priority;
  result = priority - v5;
  if ( priority == v5 )
    return a->fields.id - b->fields.id;
  return result;
}


void __fastcall OpeningMovieMaster___c__DisplayClass5_0___ctor(
        OpeningMovieMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall OpeningMovieMaster___c__DisplayClass5_0___GetEnableOpeningMoviesAndMaterialPos_b__0(
        OpeningMovieMaster___c__DisplayClass5_0_o *this,
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
    sub_1C22094(this, a);
  }
  if ( !b )
    goto LABEL_9;
  return a->fields.id - b->fields.id;
}


int32_t __fastcall OpeningMovieMaster___c__DisplayClass5_0___GetEnableOpeningMoviesAndMaterialPos_b__1(
        OpeningMovieMaster___c__DisplayClass5_0_o *this,
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
    sub_1C22094(this, a);
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