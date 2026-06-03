void OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E77C6C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
    byte_4E77C6C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    317,
    (const MethodInfo_3533604 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


OpeningMovieEntity_array *OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        int32_t timing,
        System_String_o *afterTransitionParam,
        bool timingOnly,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  void *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  bool v16; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  OpeningMovieEntity_o *v25; // x0
  const MethodInfo *v26; // x1
  OpeningMovieEntity_o *v27; // x25
  int32_t TargetTiming; // w0
  BalanceConfig_c *v29; // x0
  const MethodInfo *v30; // x3
  _BOOL8 IsEnable; // x0
  const MethodInfo *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_String_o *TransitionParam; // x0
  _BOOL8 v40; // x0
  __int64 v41; // x1
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  System_Comparison_T__o *v50; // x20
  Il2CppObject *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w1
  struct OpeningMovieMaster___c_StaticFields *v59; // x0
  GrandQuestFolderBoardItem_o *p__9__2_0; // x0
  Il2CppObject *v61; // x21
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4E77C61 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_IndexOf_int___);
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_1D0F0B4(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_1D0F0B4(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__);
    sub_1D0F0B4(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__);
    sub_1D0F0B4(&OpeningMovieMaster___c_TypeInfo);
    byte_4E77C61 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v14);
  v16 = !timingOnly;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8))
        & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_17:
      v24 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0);
    }
    v25 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                    Enumerator,
                                    *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      sub_1D0F30C(0, v26);
    TargetTiming = OpeningMovieEntity__GetTargetTiming(v25, v26);
    if ( TargetTiming == timing || TargetTiming == 0 && v16 )
    {
      v29 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v29 = BalanceConfig_TypeInfo;
      }
      if ( System_Array__IndexOf_int_(
             v29->static_fields->InvalidOpeningMovieIds,
             v27->fields.id,
             (const MethodInfo_33590E4 *)Method_System_Array_IndexOf_int___) == -1 )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v27, nowTime, 0, v30);
        if ( IsEnable )
        {
          if ( (timing & 0xFFFFFFFE) == 4 )
          {
            TransitionParam = OpeningMovieEntity__GetTransitionParam(v27, v32);
            v40 = System_String__op_Equality(TransitionParam, afterTransitionParam, 0);
            if ( v40 )
            {
              if ( !v11 )
                sub_1D0F30C(v40, v41);
              items = v11->fields._items;
              v43 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v11->fields._version;
              if ( !items )
                sub_1D0F30C(v40, v41);
              size = v11->fields._size;
              if ( (unsigned int)size < LODWORD(items->max_length) )
                goto LABEL_31;
LABEL_35:
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)v27,
                *(const MethodInfo_395C410 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
          }
          else
          {
            if ( !v11 )
              sub_1D0F30C(IsEnable, v32);
            items = v11->fields._items;
            v43 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              sub_1D0F30C(IsEnable, v32);
            size = v11->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
              goto LABEL_35;
LABEL_31:
            v45 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v27;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v27, v33, v34, v35, v36, v37, v38);
          }
        }
      }
    }
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_41;
    }
    v49 = (__int64)&v46->vtable[*v48];
  }
  else
  {
LABEL_41:
    v49 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                   Enumerator,
                   *(_QWORD *)(v49 + 8));
  if ( !sortType )
  {
    list = OpeningMovieMaster___c_TypeInfo;
    if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v50 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v50 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      v61 = (Il2CppObject *)**((_QWORD **)list + 23);
      v50 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_OpeningMovieEntity__TypeInfo);
      System_Comparison_object____ctor(v50, v61, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, 0);
      v58 = (int)v50;
      static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)v50;
      p__9__2_0 = (GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0;
LABEL_57:
      sub_1D0F058(p__9__2_0, v58, v52, v53, v54, v55, v56, v57);
    }
LABEL_58:
    if ( v11 )
    {
      System_Collections_Generic_List_object___Sort_60153556(
        v11,
        v50,
        (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v11,
                                           (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_63:
    sub_1D0F30C(list, v12);
  }
  if ( sortType == 1 )
  {
    list = OpeningMovieMaster___c_TypeInfo;
    if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v50 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
    if ( !v50 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      v51 = (Il2CppObject *)**((_QWORD **)list + 23);
      v50 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_OpeningMovieEntity__TypeInfo);
      System_Comparison_object____ctor(v50, v51, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, 0);
      v58 = (int)v50;
      v59 = OpeningMovieMaster___c_TypeInfo->static_fields;
      v59->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)v50;
      p__9__2_0 = (GrandQuestFolderBoardItem_o *)&v59->__9__2_1;
      goto LABEL_57;
    }
    goto LABEL_58;
  }
  if ( !v11 )
    goto LABEL_63;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_array *OpeningMovieMaster__GetEnableOpeningMoviesAndMaterialPos(
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
  __int64 v20; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  OpeningMovieEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  OpeningMovieEntity_o *v27; // x25
  _BOOL8 IsEnable; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
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
  intptr_t *v46; // x8
  System_Comparison_T__o *v47; // x19

  if ( (byte_4E77C64 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_1D0F0B4(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_1D0F0B4(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__);
    sub_1D0F0B4(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__);
    sub_1D0F0B4(&OpeningMovieMaster___c__DisplayClass5_0_TypeInfo);
    byte_4E77C64 = 1;
  }
  v11 = sub_1D0F300(OpeningMovieMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_50;
  *(_DWORD *)(v11 + 16) = type;
  v14 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8))
        & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_17:
      v24 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0);
    }
    v25 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                    Enumerator,
                                    *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( v25 )
    {
      IsEnable = OpeningMovieEntity__IsEnable(v25, nowTime, 1, v26);
      if ( IsEnable )
      {
        v36 = *(_DWORD *)(v11 + 16);
        if ( v36 == v27->fields.materialPosType )
        {
          switch ( v36 )
          {
            case 3:
LABEL_25:
              if ( v27->fields.materialPosValue == value )
              {
                if ( !v14 )
                  sub_1D0F30C(IsEnable, v29);
                items = v14->fields._items;
                v38 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
                ++v14->fields._version;
                if ( !items )
                  sub_1D0F30C(IsEnable, v29);
                size = v14->fields._size;
                if ( (unsigned int)size < LODWORD(items->max_length) )
                  goto LABEL_29;
LABEL_34:
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)v27,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              break;
            case 2:
              if ( !v14 )
                sub_1D0F30C(IsEnable, v29);
              items = v14->fields._items;
              v38 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v14->fields._version;
              if ( !items )
                sub_1D0F30C(IsEnable, v29);
              size = v14->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
                goto LABEL_34;
LABEL_29:
              v40 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v40[4] = (Il2CppClass *)v27;
              sub_1D0F058((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v27, v30, v31, v32, v33, v34, v35);
              break;
            case 1:
              goto LABEL_25;
          }
        }
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_40;
    }
    v44 = (__int64)&v41->vtable[*v43];
  }
  else
  {
LABEL_40:
    v44 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                             Enumerator,
                                                             *(_QWORD *)(v44 + 8));
  if ( !sortType )
  {
    v45 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_OpeningMovieEntity__TypeInfo);
    v46 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
LABEL_46:
    v47 = v45;
    System_Comparison_object____ctor(v45, (Il2CppObject *)v11, *v46, 0);
    if ( v14 )
    {
      System_Collections_Generic_List_object___Sort_60153556(
        v14,
        v47,
        (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v14,
                                           (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_50:
    sub_1D0F30C(list, v13);
  }
  if ( sortType == 1 )
  {
    v45 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_OpeningMovieEntity__TypeInfo);
    v46 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
    goto LABEL_46;
  }
  if ( !v14 )
    goto LABEL_50;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v14,
                                       (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


System_Collections_Generic_List_OpeningMovieEntity__o *OpeningMovieMaster__GetGrandOpeningMovieList(
        OpeningMovieMaster_o *this,
        const MethodInfo *method)
{
  OpeningMovieMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *_9__4_0; // x20
  Il2CppObject *v6; // x21
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4E77C63 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__getEntityList__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_OpeningMovieEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_OpeningMovieEntity___);
    sub_1D0F0B4(&System_Func_OpeningMovieEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_OpeningMovieMaster___c__GetGrandOpeningMovieList_b__4_0__);
    sub_1D0F0B4(&OpeningMovieMaster___c_TypeInfo);
    byte_4E77C63 = 1;
  }
  v3 = OpeningMovieMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    v3 = OpeningMovieMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__bool__o *)v3->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = OpeningMovieMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__4_0 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_OpeningMovieEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_0, v6, Method_OpeningMovieMaster___c__GetGrandOpeningMovieList_b__4_0__, 0);
    static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_OpeningMovieEntity__bool__o *)_9__4_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_OpeningMovieEntity___);
  return (System_Collections_Generic_List_OpeningMovieEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v14,
                                                                    (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_OpeningMovieEntity___);
}


OpeningMovieEntity_o *OpeningMovieMaster__GetOpeningMovie(
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
  __int64 v11; // x0
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

  if ( (byte_4E77C62 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    byte_4E77C62 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1D0F30C(0, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_34CD418 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1D0F30C(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1CE5430(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1CE5430(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v18 = (OpeningMovieEntity_o *)v16;
    if ( !v16 )
      sub_1D0F30C(0, v17);
    v19 = *(System_String_o **)(v16 + 32);
    if ( !v19 )
      sub_1D0F30C(0, v17);
    if ( System_String__Equals_65598092(v19, movieFileName, 0) )
      goto LABEL_23;
  }
  v18 = 0;
LABEL_23:
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_27;
    }
    v23 = (__int64)&v20->vtable[*v22];
  }
  else
  {
LABEL_27:
    v23 = sub_1CE5430(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
  return v18;
}


System_Collections_Generic_List_OpeningMovieEntity__o *OpeningMovieMaster__GetPreCheckEffectMovieList(
        OpeningMovieMaster_o *this,
        int32_t timing,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Collections_Generic_List_TSource__o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  OpeningMovieMaster___c_c *v19; // x8
  System_Collections_Generic_List_object__o *v20; // x19
  System_Comparison_T__o *_9__13_1; // x20
  Il2CppObject *v22; // x21
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4E77C6B & 1) == 0 )
  {
    sub_1D0F0B4(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__getEntityList__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_OpeningMovieEntity___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_OpeningMovieEntity___);
    sub_1D0F0B4(&System_Func_OpeningMovieEntity__bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_1D0F0B4(&Method_OpeningMovieMaster___c__GetPreCheckEffectMovieList_b__13_1__);
    sub_1D0F0B4(&Method_OpeningMovieMaster___c__DisplayClass13_0__GetPreCheckEffectMovieList_b__0__);
    sub_1D0F0B4(&OpeningMovieMaster___c__DisplayClass13_0_TypeInfo);
    sub_1D0F0B4(&OpeningMovieMaster___c_TypeInfo);
    byte_4E77C6B = 1;
  }
  v7 = sub_1D0F300(OpeningMovieMaster___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = timing;
  *(_QWORD *)(v7 + 32) = nowTime;
  list = this->fields.list;
  v17 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_OpeningMovieEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_OpeningMovieMaster___c__DisplayClass13_0__GetPreCheckEffectMovieList_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_OpeningMovieEntity___);
  v8 = System_Linq_Enumerable__ToList_object_(
         v18,
         (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_OpeningMovieEntity___);
  v19 = OpeningMovieMaster___c_TypeInfo;
  v20 = (System_Collections_Generic_List_object__o *)v8;
  if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    v19 = OpeningMovieMaster___c_TypeInfo;
  }
  _9__13_1 = (System_Comparison_T__o *)v19->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = OpeningMovieMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__13_1 = (System_Comparison_T__o *)sub_1D0F300(System_Comparison_OpeningMovieEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__13_1,
      v22,
      Method_OpeningMovieMaster___c__GetPreCheckEffectMovieList_b__13_1__,
      0);
    static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_1 = (struct System_Comparison_OpeningMovieEntity__o *)_9__13_1;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_1,
      (int32_t)_9__13_1,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v20 )
LABEL_12:
    sub_1D0F30C(v8, v9);
  System_Collections_Generic_List_object___Sort_60153556(
    v20,
    _9__13_1,
    (const MethodInfo_395DED4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (System_Collections_Generic_List_OpeningMovieEntity__o *)v20;
}


bool OpeningMovieMaster__IsEndedGrandOpeningMovie(
        OpeningMovieEntity_o *openingMovieEnt,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E77C6A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4E77C6A = 1;
  }
  entity = 0;
  if ( !openingMovieEnt
    || !OpeningMovieEntity__IsGrand(openingMovieEnt, (const MethodInfo *)nowTime)
    || OpeningMovieMaster__IsPlayedOpeningMovie_43816156(openingMovieEnt, 1, v5) )
  {
    return 0;
  }
  if ( OpeningMovieEntity__GetTargetTiming(openingMovieEnt, v6) == 6 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_16:
    sub_1D0F30C(Master_object, v10);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         openingMovieEnt->fields.eventId,
         (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    Master_object = entity;
    if ( entity )
      return EventEntity__IsEventEnded((EventEntity_o *)entity, nowTime, 0);
    goto LABEL_16;
  }
  return 0;
}


bool OpeningMovieMaster__IsPlayedOpeningMovie(int32_t id, bool isParentIdCheckValid, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E77C67 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    byte_4E77C67 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v6);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           id,
           (const MethodInfo_3535BC8 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__)
      && OpeningMovieMaster__IsPlayedOpeningMovie_43816156((OpeningMovieEntity_o *)entity, isParentIdCheckValid, v7);
}


bool OpeningMovieMaster__IsPlayedOpeningMovie_43816156(
        OpeningMovieEntity_o *openingMovieEnt,
        bool isParentIdCheckValid,
        const MethodInfo *method)
{
  TitleRootComponent_c *v5; // x0
  System_String_o *String_73317788; // x21
  Il2CppObject *IsNullOrEmpty; // x0
  const MethodInfo *v8; // x1
  System_String_array *v9; // x21
  const MethodInfo *v10; // x1
  int32_t GroupId; // w22
  const MethodInfo *v12; // x1
  int32_t GrandPvParentId; // w23
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x24
  unsigned __int64 v16; // x25
  bool v17; // w20
  int32_t v18; // w2
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4E77C68 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    sub_1D0F0B4(&TitleRootComponent_TypeInfo);
    byte_4E77C68 = 1;
  }
  entity = 0;
  if ( !openingMovieEnt )
    goto LABEL_22;
  v5 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v5 = TitleRootComponent_TypeInfo;
  }
  String_73317788 = UnityEngine_PlayerPrefs__GetString_73317788(v5->static_fields->SAVE_KEY_PLAYED_MOVIE, 0);
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(String_73317788, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_22;
  if ( !String_73317788 )
    goto LABEL_25;
  v9 = System_String__Split(String_73317788, 0x2Cu, 0, 0);
  GroupId = OpeningMovieEntity__GetGroupId(openingMovieEnt, v10);
  GrandPvParentId = OpeningMovieEntity__GetGrandPvParentId(openingMovieEnt, v12);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !v9 )
LABEL_25:
    sub_1D0F30C(IsNullOrEmpty, v8);
  max_length = v9->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_22:
    LOBYTE(IsNullOrEmpty) = 0;
  }
  else
  {
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
    v16 = 0;
    v17 = GrandPvParentId != 0 && isParentIdCheckValid;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1D0F314(IsNullOrEmpty);
      v18 = System_Int32__Parse(v9->m_Items[v16], 0);
      IsNullOrEmpty = (Il2CppObject *)(&dword_0 + 1);
      if ( openingMovieEnt->fields.id == v18 || v17 && v18 == GrandPvParentId )
        break;
      if ( GroupId )
      {
        if ( !v15 )
          goto LABEL_25;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v15,
                                          &entity,
                                          v18,
                                          (const MethodInfo_3535BC8 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          IsNullOrEmpty = entity;
          if ( !entity )
            goto LABEL_25;
          IsNullOrEmpty = (Il2CppObject *)OpeningMovieEntity__GetGroupId((OpeningMovieEntity_o *)entity, v8);
          if ( (_DWORD)IsNullOrEmpty == GroupId )
          {
            LOBYTE(IsNullOrEmpty) = 1;
            return (char)IsNullOrEmpty;
          }
        }
      }
      LODWORD(max_length) = v9->max_length;
      if ( (__int64)++v16 >= (int)max_length )
        goto LABEL_22;
    }
  }
  return (char)IsNullOrEmpty;
}


bool OpeningMovieMaster__IsValidGrandOpeningMovie(OpeningMovieEntity_o *openingMovieEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E77C69 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4E77C69 = 1;
  }
  entity = 0;
  if ( !openingMovieEnt
    || !OpeningMovieEntity__IsGrand(openingMovieEnt, method)
    || OpeningMovieMaster__IsPlayedOpeningMovie_43816156(openingMovieEnt, 1, v3) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1D0F30C(Master_object, v5);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          openingMovieEnt->fields.eventId,
          (const MethodInfo_3535BC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return EventEntity__IsEventPeriod((EventEntity_o *)entity, 0, 0);
}


bool OpeningMovieMaster__IsValidPreCheckEffectMovie(
        OpeningMovieMaster_o *this,
        OpeningMovieEntity_o *openingMovieEntity,
        int32_t timing,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  return openingMovieEntity
      && OpeningMovieEntity__GetTargetTiming(openingMovieEntity, (const MethodInfo *)openingMovieEntity) == timing
      && OpeningMovieEntity__IsValidPeriod(openingMovieEntity, nowTime, v7)
      && !OpeningMovieMaster__IsPlayedOpeningMovie_43816156(openingMovieEntity, 1, v8);
}


void OpeningMovieMaster__RequestPlayedOpeningMovieFlagSet(
        OpeningMovieEntity_o *openingMovieEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 GrandPvParentId; // x0
  const MethodInfo *v5; // x1
  int32_t eventId; // w19
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  if ( (byte_4E77C66 & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_OpeningMovieMaster___c__DisplayClass8_0__RequestPlayedOpeningMovieFlagSet_b__0__);
    sub_1D0F0B4(&OpeningMovieMaster___c__DisplayClass8_0_TypeInfo);
    byte_4E77C66 = 1;
  }
  v3 = sub_1D0F300(OpeningMovieMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !openingMovieEntity || (GrandPvParentId = OpeningMovieEntity__GetGrandPvParentId(openingMovieEntity, v5), !v3) )
    sub_1D0F30C(GrandPvParentId, v5);
  *(_DWORD *)(v3 + 16) = GrandPvParentId;
  eventId = openingMovieEntity->fields.eventId;
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)v3,
    Method_OpeningMovieMaster___c__DisplayClass8_0__RequestPlayedOpeningMovieFlagSet_b__0__,
    0);
  EventTutorialMaster__RequestTutorialEventSet(eventId, 65, v7, 0);
}


void OpeningMovieMaster__SavePlayedOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  OpeningMovieEntity_o *OpeningMovie; // x0
  const MethodInfo *v4; // x1

  OpeningMovie = OpeningMovieMaster__GetOpeningMovie(this, movieFileName, method);
  OpeningMovieMaster__SavePlayedOpeningMovie_43814860(OpeningMovie, v4);
}


void OpeningMovieMaster__SavePlayedOpeningMovie_43814860(OpeningMovieEntity_o *openingEntity, const MethodInfo *method)
{
  __int64 v3; // x22
  void *IsNullOrEmpty; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  _QWORD *v12; // x23
  const MethodInfo *v13; // x1
  OpeningMovieEntity_o *v14; // x0
  int *v15; // x19
  TitleRootComponent_c *v16; // x0
  System_String_o *String_73317788; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  TitleRootComponent_c *v22; // x0
  System_String_o *v23; // x1
  System_String_o *SAVE_KEY_PLAYED_MOVIE; // x0
  System_Text_StringBuilder_o *v25; // x21
  System_String_array *v26; // x24
  System_Func_object__bool__o *v27; // x25
  System_String_o *v28; // x0
  System_Func_object__bool__o *v29; // x23
  System_String_o *v30; // x0
  TitleRootComponent_c *v31; // x0
  System_String_o *v32; // x19
  System_String_o *v33; // x0

  if ( (byte_4E77C65 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_Find_string___);
    sub_1D0F0B4(&System_Func_string__bool__TypeInfo);
    sub_1D0F0B4(&System_Text_StringBuilder_TypeInfo);
    sub_1D0F0B4(&TitleRootComponent_TypeInfo);
    sub_1D0F0B4(&Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__0__);
    sub_1D0F0B4(&Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__1__);
    sub_1D0F0B4(&OpeningMovieMaster___c__DisplayClass7_0_TypeInfo);
    sub_1D0F0B4(&StringLiteral_810/*","*/);
    byte_4E77C65 = 1;
  }
  v3 = sub_1D0F300(OpeningMovieMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_31;
  *(_QWORD *)(v3 + 16) = openingEntity;
  v12 = (_QWORD *)(v3 + 16);
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)openingEntity, v6, v7, v8, v9, v10, v11);
  v14 = *(OpeningMovieEntity_o **)(v3 + 16);
  if ( v14 )
  {
    *(_DWORD *)(v3 + 24) = OpeningMovieEntity__GetGrandPvParentId(v14, v13);
    v15 = (int *)(v3 + 24);
    v16 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v16 = TitleRootComponent_TypeInfo;
    }
    String_73317788 = UnityEngine_PlayerPrefs__GetString_73317788(v16->static_fields->SAVE_KEY_PLAYED_MOVIE, 0);
    IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String_73317788, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( *v12 )
      {
        v18 = System_Int32__ToString((unsigned int)*v12 + 16, 0);
        v19 = v18;
        if ( *v15 >= 1 )
        {
          v20 = System_String__Concat_65562772(v18, (System_String_o *)StringLiteral_810/*","*/, 0);
          v21 = System_Int32__ToString((int)v3 + 24, 0);
          v19 = System_String__Concat_65562772(v20, v21, 0);
        }
        v22 = TitleRootComponent_TypeInfo;
        if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
          v22 = TitleRootComponent_TypeInfo;
        }
        v23 = v19;
        SAVE_KEY_PLAYED_MOVIE = v22->static_fields->SAVE_KEY_PLAYED_MOVIE;
LABEL_29:
        UnityEngine_PlayerPrefs__SetString(SAVE_KEY_PLAYED_MOVIE, v23, 0);
        return;
      }
LABEL_31:
      sub_1D0F30C(IsNullOrEmpty, v5);
    }
    v25 = (System_Text_StringBuilder_o *)sub_1D0F300(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v25, 0);
    if ( !String_73317788 )
      goto LABEL_31;
    v26 = System_String__Split(String_73317788, 0x2Cu, 0, 0);
    v27 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v27,
      (Il2CppObject *)v3,
      Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__0__,
      0);
    IsNullOrEmpty = BasicHelper__Find_object_(
                      (System_Object_array *)v26,
                      (System_Func_T__bool__o *)v27,
                      (const MethodInfo_3238EB8 *)Method_BasicHelper_Find_string___);
    if ( !IsNullOrEmpty )
    {
      if ( !v25 )
        goto LABEL_31;
      IsNullOrEmpty = System_Text_StringBuilder__Append_65646732(v25, (System_String_o *)StringLiteral_810/*","*/, 0);
      if ( !*v12 )
        goto LABEL_31;
      v28 = System_Int32__ToString((unsigned int)*v12 + 16, 0);
      IsNullOrEmpty = System_Text_StringBuilder__Append_65646732(v25, v28, 0);
    }
    if ( *v15 < 1
      || (v29 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_string__bool__TypeInfo),
          System_Func_object__bool____ctor(
            v29,
            (Il2CppObject *)v3,
            Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__1__,
            0),
          (IsNullOrEmpty = BasicHelper__Find_object_(
                             (System_Object_array *)v26,
                             (System_Func_T__bool__o *)v29,
                             (const MethodInfo_3238EB8 *)Method_BasicHelper_Find_string___)) != 0) )
    {
      if ( !v25 )
        goto LABEL_31;
    }
    else
    {
      if ( !v25 )
        goto LABEL_31;
      System_Text_StringBuilder__Append_65646732(v25, (System_String_o *)StringLiteral_810/*","*/, 0);
      v30 = System_Int32__ToString((int)v3 + 24, 0);
      System_Text_StringBuilder__Append_65646732(v25, v30, 0);
    }
    if ( System_Text_StringBuilder__get_Length(v25, 0) >= 1 )
    {
      v31 = TitleRootComponent_TypeInfo;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
        v31 = TitleRootComponent_TypeInfo;
      }
      v32 = v31->static_fields->SAVE_KEY_PLAYED_MOVIE;
      v33 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v25->klass->vtable._3_ToString.methodPtr)(
                                 v25,
                                 v25->klass->vtable._3_ToString.method);
      v23 = System_String__Concat_65562772(String_73317788, v33, 0);
      SAVE_KEY_PLAYED_MOVIE = v32;
      goto LABEL_29;
    }
  }
}


void OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E77C6D & 1) == 0 )
  {
    sub_1D0F0B4(&OpeningMovieMaster___c_TypeInfo);
    byte_4E77C6D = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  OpeningMovieMaster___c_TypeInfo->static_fields->__9 = (struct OpeningMovieMaster___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)OpeningMovieMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void OpeningMovieMaster___c___ctor(OpeningMovieMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t OpeningMovieMaster___c___GetEnableOpeningMovies_b__2_0(
        OpeningMovieMaster___c_o *this,
        OpeningMovieEntity_o *a,
        OpeningMovieEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1D0F30C(this, a);
  return a->fields.id - b->fields.id;
}


int32_t OpeningMovieMaster___c___GetEnableOpeningMovies_b__2_1(
        OpeningMovieMaster___c_o *this,
        OpeningMovieEntity_o *a,
        OpeningMovieEntity_o *b,
        const MethodInfo *method)
{
  int32_t priority; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !b || !a )
    sub_1D0F30C(this, a);
  priority = b->fields.priority;
  v5 = a->fields.priority;
  result = priority - v5;
  if ( priority == v5 )
    return a->fields.id - b->fields.id;
  return result;
}


bool OpeningMovieMaster___c___GetGrandOpeningMovieList_b__4_0(
        OpeningMovieMaster___c_o *this,
        OpeningMovieEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1D0F30C(this, 0);
  return OpeningMovieEntity__IsGrand(n, (const MethodInfo *)n);
}


int32_t OpeningMovieMaster___c___GetPreCheckEffectMovieList_b__13_1(
        OpeningMovieMaster___c_o *this,
        OpeningMovieEntity_o *a,
        OpeningMovieEntity_o *b,
        const MethodInfo *method)
{
  int32_t priority; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !b || !a )
    sub_1D0F30C(this, a);
  priority = b->fields.priority;
  v5 = a->fields.priority;
  result = priority - v5;
  if ( priority == v5 )
    return a->fields.id - b->fields.id;
  return result;
}


void OpeningMovieMaster___c__DisplayClass13_0___ctor(
        OpeningMovieMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool OpeningMovieMaster___c__DisplayClass13_0___GetPreCheckEffectMovieList_b__0(
        OpeningMovieMaster___c__DisplayClass13_0_o *this,
        OpeningMovieEntity_o *n,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_1D0F30C(this, n);
  return OpeningMovieMaster__IsValidPreCheckEffectMovie(
           (OpeningMovieMaster_o *)this,
           n,
           this->fields.timing,
           this->fields.nowTime,
           v3);
}


void OpeningMovieMaster___c__DisplayClass5_0___ctor(
        OpeningMovieMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t OpeningMovieMaster___c__DisplayClass5_0___GetEnableOpeningMoviesAndMaterialPos_b__0(
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
    sub_1D0F30C(this, a);
  }
  if ( !b )
    goto LABEL_9;
  return a->fields.id - b->fields.id;
}


int32_t OpeningMovieMaster___c__DisplayClass5_0___GetEnableOpeningMoviesAndMaterialPos_b__1(
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
    sub_1D0F30C(this, a);
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


void OpeningMovieMaster___c__DisplayClass7_0___ctor(
        OpeningMovieMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool OpeningMovieMaster___c__DisplayClass7_0___SavePlayedOpeningMovie_b__0(
        OpeningMovieMaster___c__DisplayClass7_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  struct OpeningMovieEntity_o *openingEntity; // x8

  v4 = System_Int32__Parse(id, 0);
  openingEntity = this->fields.openingEntity;
  if ( !openingEntity )
    sub_1D0F30C(v4, v5);
  return (_DWORD)v4 == openingEntity->fields.id;
}


bool OpeningMovieMaster___c__DisplayClass7_0___SavePlayedOpeningMovie_b__1(
        OpeningMovieMaster___c__DisplayClass7_0_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  return System_Int32__Parse(id, 0) == this->fields.parentId;
}


void OpeningMovieMaster___c__DisplayClass8_0___ctor(
        OpeningMovieMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void OpeningMovieMaster___c__DisplayClass8_0___RequestPlayedOpeningMovieFlagSet_b__0(
        OpeningMovieMaster___c__DisplayClass8_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  int32_t monitor; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E77C6E & 1) == 0 )
  {
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    byte_4E77C6E = 1;
  }
  entity = 0;
  if ( this->fields.parentId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
    if ( !Master_object )
      goto LABEL_15;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields.parentId,
                                      (const MethodInfo_3535BC8 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return;
    if ( !entity )
      goto LABEL_15;
    monitor = (int32_t)entity[3].monitor;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    Master_object = (Il2CppObject *)CondType__IsEventTutorialFlagOn(monitor, 65, 0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( entity )
      {
        EventTutorialMaster__RequestTutorialEventSet((int32_t)entity[3].monitor, 65, 0, 0);
        return;
      }
LABEL_15:
      sub_1D0F30C(Master_object, v5);
    }
  }
}