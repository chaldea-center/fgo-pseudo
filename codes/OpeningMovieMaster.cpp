void OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37F5A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
    byte_4C37F5A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    317,
    (const MethodInfo_3394514 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


OpeningMovieEntity_array *OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        int32_t timing,
        System_String_o *afterTransitionParam,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v10; // x19
  void *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  OpeningMovieEntity_o *v21; // x0
  const MethodInfo *v22; // x1
  OpeningMovieEntity_o *v23; // x25
  int32_t TargetTiming; // w0
  BalanceConfig_c *v25; // x0
  const MethodInfo *v26; // x3
  _BOOL8 IsEnable; // x0
  const MethodInfo *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_String_o *TransitionParam; // x0
  _BOOL8 v32; // x0
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  System_Comparison_T__o *v41; // x20
  Il2CppObject *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  struct OpeningMovieMaster___c_StaticFields *v46; // x0
  CGThumbnailListItem_o *p__9__2_0; // x0
  Il2CppObject *v48; // x21
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4C37F50 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_1C32C20(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_1C32C20(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__);
    sub_1C32C20(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__);
    sub_1C32C20(&OpeningMovieMaster___c_TypeInfo);
    byte_4C37F50 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_62;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v16 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_16:
      v20 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0);
    }
    v21 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                    Enumerator,
                                    *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_1C32E7C(0);
    TargetTiming = OpeningMovieEntity__GetTargetTiming(v21, v22);
    if ( !TargetTiming || TargetTiming == timing )
    {
      v25 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v25 = BalanceConfig_TypeInfo;
      }
      if ( System_Array__IndexOf_int_(
             v25->static_fields->InvalidOpeningMovieIds,
             v23->fields.id,
             (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___) == -1 )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v23, nowTime, 0, v26);
        if ( IsEnable )
        {
          if ( (timing & 0xFFFFFFFE) == 4 )
          {
            TransitionParam = OpeningMovieEntity__GetTransitionParam(v23, v28);
            v32 = System_String__op_Equality(TransitionParam, afterTransitionParam, 0);
            if ( v32 )
            {
              if ( !v10 )
                sub_1C32E7C(v32);
              items = v10->fields._items;
              v34 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v10->fields._version;
              if ( !items )
                sub_1C32E7C(v32);
              size = v10->fields._size;
              if ( (unsigned int)size < LODWORD(items->max_length) )
                goto LABEL_30;
LABEL_34:
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)v23,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
          }
          else
          {
            if ( !v10 )
              sub_1C32E7C(IsEnable);
            items = v10->fields._items;
            v34 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              sub_1C32E7C(IsEnable);
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
              goto LABEL_34;
LABEL_30:
            v36 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v23;
            sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v23, v29, v30);
          }
        }
      }
    }
  }
  v37 = Enumerator->klass;
  v38 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_40;
    }
    v40 = (__int64)&v37->vtable[*v39];
  }
  else
  {
LABEL_40:
    v40 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                   Enumerator,
                   *(_QWORD *)(v40 + 8));
  if ( !sortType )
  {
    list = OpeningMovieMaster___c_TypeInfo;
    if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v41 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v41 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      v48 = (Il2CppObject *)**((_QWORD **)list + 23);
      v41 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_OpeningMovieEntity__TypeInfo);
      System_Comparison_object____ctor(v41, v48, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, 0);
      v45 = (int)v41;
      static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)v41;
      p__9__2_0 = (CGThumbnailListItem_o *)&static_fields->__9__2_0;
LABEL_56:
      sub_1C32BC4(p__9__2_0, v45, v43, v44);
    }
LABEL_57:
    if ( v10 )
    {
      System_Collections_Generic_List_object___Sort_58303104(
        v10,
        v41,
        (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v10,
                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_62:
    sub_1C32E7C(list);
  }
  if ( sortType == 1 )
  {
    list = OpeningMovieMaster___c_TypeInfo;
    if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v41 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
    if ( !v41 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      v42 = (Il2CppObject *)**((_QWORD **)list + 23);
      v41 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_OpeningMovieEntity__TypeInfo);
      System_Comparison_object____ctor(v41, v42, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, 0);
      v45 = (int)v41;
      v46 = OpeningMovieMaster___c_TypeInfo->static_fields;
      v46->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)v41;
      p__9__2_0 = (CGThumbnailListItem_o *)&v46->__9__2_1;
      goto LABEL_56;
    }
    goto LABEL_57;
  }
  if ( !v10 )
    goto LABEL_62;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v10,
                                       (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  OpeningMovieEntity_o *v23; // x0
  const MethodInfo *v24; // x3
  OpeningMovieEntity_o *v25; // x25
  _BOOL8 IsEnable; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int v29; // w8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  System_Comparison_T__o *v38; // x0
  intptr_t *v39; // x8
  System_Comparison_T__o *v40; // x19

  if ( (byte_4C37F53 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_1C32C20(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_1C32C20(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__);
    sub_1C32C20(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__);
    sub_1C32C20(&OpeningMovieMaster___c__DisplayClass5_0_TypeInfo);
    byte_4C37F53 = 1;
  }
  v11 = sub_1C32E6C(OpeningMovieMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_50;
  *(_DWORD *)(v11 + 16) = type;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v18 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_17:
      v22 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0);
    }
    v23 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                    Enumerator,
                                    *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( v23 )
    {
      IsEnable = OpeningMovieEntity__IsEnable(v23, nowTime, 1, v24);
      if ( IsEnable )
      {
        v29 = *(_DWORD *)(v11 + 16);
        if ( v29 == v25->fields.materialPosType )
        {
          switch ( v29 )
          {
            case 3:
LABEL_25:
              if ( v25->fields.materialPosValue == value )
              {
                if ( !v13 )
                  sub_1C32E7C(IsEnable);
                items = v13->fields._items;
                v31 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
                ++v13->fields._version;
                if ( !items )
                  sub_1C32E7C(IsEnable);
                size = v13->fields._size;
                if ( (unsigned int)size < LODWORD(items->max_length) )
                  goto LABEL_29;
LABEL_34:
                System_Collections_Generic_List_object___AddWithResize(
                  v13,
                  (Il2CppObject *)v25,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              break;
            case 2:
              if ( !v13 )
                sub_1C32E7C(IsEnable);
              items = v13->fields._items;
              v31 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v13->fields._version;
              if ( !items )
                sub_1C32E7C(IsEnable);
              size = v13->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
                goto LABEL_34;
LABEL_29:
              v33 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v25;
              sub_1C32BC4((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v25, v27, v28);
              break;
            case 1:
              goto LABEL_25;
          }
        }
      }
    }
  }
  v34 = Enumerator->klass;
  v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_40;
    }
    v37 = (__int64)&v34->vtable[*v36];
  }
  else
  {
LABEL_40:
    v37 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                                             Enumerator,
                                                             *(_QWORD *)(v37 + 8));
  if ( !sortType )
  {
    v38 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_OpeningMovieEntity__TypeInfo);
    v39 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
LABEL_46:
    v40 = v38;
    System_Comparison_object____ctor(v38, (Il2CppObject *)v11, *v39, 0);
    if ( v13 )
    {
      System_Collections_Generic_List_object___Sort_58303104(
        v13,
        v40,
        (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v13,
                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_50:
    sub_1C32E7C(list);
  }
  if ( sortType == 1 )
  {
    v38 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_OpeningMovieEntity__TypeInfo);
    v39 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
    goto LABEL_46;
  }
  if ( !v13 )
    goto LABEL_50;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v13,
                                       (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C37F52 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__getEntityList__);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_OpeningMovieEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_OpeningMovieEntity___);
    sub_1C32C20(&System_Func_OpeningMovieEntity__bool__TypeInfo);
    sub_1C32C20(&Method_OpeningMovieMaster___c__GetGrandOpeningMovieList_b__4_0__);
    sub_1C32C20(&OpeningMovieMaster___c_TypeInfo);
    byte_4C37F52 = 1;
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
    _9__4_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_OpeningMovieEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_0, v6, Method_OpeningMovieMaster___c__GetGrandOpeningMovieList_b__4_0__, 0);
    static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_OpeningMovieEntity__bool__o *)_9__4_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_OpeningMovieEntity___);
  return (System_Collections_Generic_List_OpeningMovieEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v10,
                                                                    (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_OpeningMovieEntity___);
}


OpeningMovieEntity_o *OpeningMovieMaster__GetOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  OpeningMovieEntity_o *v16; // x21
  System_String_o *v17; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  if ( (byte_4C37F51 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C37F51 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_9;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v10 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_16:
      v14 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v16 = (OpeningMovieEntity_o *)v15;
    if ( !v15 )
      sub_1C32E7C(0);
    v17 = *(System_String_o **)(v15 + 32);
    if ( !v17 )
      sub_1C32E7C(0);
    if ( System_String__Equals_63553848(v17, movieFileName, 0) )
      goto LABEL_23;
  }
  v16 = 0;
LABEL_23:
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_27;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_27:
    v21 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  return v16;
}


bool OpeningMovieMaster__IsEndedGrandOpeningMovie(
        OpeningMovieEntity_o *openingMovieEnt,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37F59 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4C37F59 = 1;
  }
  entity = 0;
  if ( !openingMovieEnt
    || !OpeningMovieEntity__IsGrand(openingMovieEnt, (const MethodInfo *)nowTime)
    || OpeningMovieMaster__IsPlayedOpeningMovie_42332112(openingMovieEnt, 1, v5) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C32E7C(Master_object);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          openingMovieEnt->fields.eventId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return EventEntity__IsEventEnded((EventEntity_o *)entity, nowTime, 0);
}


bool OpeningMovieMaster__IsPlayedOpeningMovie(int32_t id, bool isParentIdCheckValid, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37F56 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    byte_4C37F56 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           id,
           (const MethodInfo_3396884 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__)
      && OpeningMovieMaster__IsPlayedOpeningMovie_42332112((OpeningMovieEntity_o *)entity, isParentIdCheckValid, v6);
}


bool OpeningMovieMaster__IsPlayedOpeningMovie_42332112(
        OpeningMovieEntity_o *openingMovieEnt,
        bool isParentIdCheckValid,
        const MethodInfo *method)
{
  TitleRootComponent_c *v5; // x0
  System_String_o *String_71182452; // x21
  Il2CppObject *IsNullOrEmpty; // x0
  System_String_array *v8; // x21
  const MethodInfo *v9; // x1
  int32_t GroupId; // w22
  const MethodInfo *v11; // x1
  int32_t GrandPvParentId; // w23
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x24
  unsigned __int64 v15; // x25
  bool v16; // w20
  int32_t v17; // w2
  const MethodInfo *v18; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C37F57 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    byte_4C37F57 = 1;
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
  String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(v5->static_fields->SAVE_KEY_PLAYED_MOVIE, 0);
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(String_71182452, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_22;
  if ( !String_71182452 )
    goto LABEL_25;
  v8 = System_String__Split(String_71182452, 0x2Cu, 0, 0);
  GroupId = OpeningMovieEntity__GetGroupId(openingMovieEnt, v9);
  GrandPvParentId = OpeningMovieEntity__GetGrandPvParentId(openingMovieEnt, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !v8 )
LABEL_25:
    sub_1C32E7C(IsNullOrEmpty);
  max_length = v8->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_22:
    LOBYTE(IsNullOrEmpty) = 0;
  }
  else
  {
    v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
    v15 = 0;
    v16 = GrandPvParentId != 0 && isParentIdCheckValid;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        sub_1C32E84(IsNullOrEmpty);
      v17 = System_Int32__Parse(v8->m_Items[v15], 0);
      IsNullOrEmpty = (Il2CppObject *)(&dword_0 + 1);
      if ( openingMovieEnt->fields.id == v17 || v16 && v17 == GrandPvParentId )
        break;
      if ( GroupId )
      {
        if ( !v14 )
          goto LABEL_25;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v14,
                                          &entity,
                                          v17,
                                          (const MethodInfo_3396884 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          IsNullOrEmpty = entity;
          if ( !entity )
            goto LABEL_25;
          IsNullOrEmpty = (Il2CppObject *)OpeningMovieEntity__GetGroupId((OpeningMovieEntity_o *)entity, v18);
          if ( (_DWORD)IsNullOrEmpty == GroupId )
          {
            LOBYTE(IsNullOrEmpty) = 1;
            return (char)IsNullOrEmpty;
          }
        }
      }
      LODWORD(max_length) = v8->max_length;
      if ( (__int64)++v15 >= (int)max_length )
        goto LABEL_22;
    }
  }
  return (char)IsNullOrEmpty;
}


bool OpeningMovieMaster__IsValidGrandOpeningMovie(OpeningMovieEntity_o *openingMovieEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C37F58 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4C37F58 = 1;
  }
  entity = 0;
  if ( !openingMovieEnt
    || !OpeningMovieEntity__IsGrand(openingMovieEnt, method)
    || OpeningMovieMaster__IsPlayedOpeningMovie_42332112(openingMovieEnt, 1, v3) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1C32E7C(Master_object);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          openingMovieEnt->fields.eventId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return EventEntity__IsEventPeriod((EventEntity_o *)entity, 0, 0);
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

  if ( (byte_4C37F55 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_OpeningMovieMaster___c__DisplayClass8_0__RequestPlayedOpeningMovieFlagSet_b__0__);
    sub_1C32C20(&OpeningMovieMaster___c__DisplayClass8_0_TypeInfo);
    byte_4C37F55 = 1;
  }
  v3 = sub_1C32E6C(OpeningMovieMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !openingMovieEntity || (GrandPvParentId = OpeningMovieEntity__GetGrandPvParentId(openingMovieEntity, v5), !v3) )
    sub_1C32E7C(GrandPvParentId);
  *(_DWORD *)(v3 + 16) = GrandPvParentId;
  eventId = openingMovieEntity->fields.eventId;
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
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
  OpeningMovieMaster__SavePlayedOpeningMovie_42330816(OpeningMovie, v4);
}


void OpeningMovieMaster__SavePlayedOpeningMovie_42330816(OpeningMovieEntity_o *openingEntity, const MethodInfo *method)
{
  __int64 v3; // x22
  void *IsNullOrEmpty; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  _QWORD *v7; // x23
  const MethodInfo *v8; // x1
  OpeningMovieEntity_o *v9; // x0
  int *v10; // x19
  TitleRootComponent_c *v11; // x0
  System_String_o *String_71182452; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  TitleRootComponent_c *v17; // x0
  System_String_o *v18; // x1
  System_String_o *SAVE_KEY_PLAYED_MOVIE; // x0
  System_Text_StringBuilder_o *v20; // x21
  System_String_array *v21; // x24
  System_Func_object__bool__o *v22; // x25
  System_String_o *v23; // x0
  System_Func_object__bool__o *v24; // x23
  System_String_o *v25; // x0
  TitleRootComponent_c *v26; // x0
  System_String_o *v27; // x19
  System_String_o *v28; // x0

  if ( (byte_4C37F54 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_string___);
    sub_1C32C20(&System_Func_string__bool__TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&TitleRootComponent_TypeInfo);
    sub_1C32C20(&Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__0__);
    sub_1C32C20(&Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__1__);
    sub_1C32C20(&OpeningMovieMaster___c__DisplayClass7_0_TypeInfo);
    sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C37F54 = 1;
  }
  v3 = sub_1C32E6C(OpeningMovieMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_31;
  *(_QWORD *)(v3 + 16) = openingEntity;
  v7 = (_QWORD *)(v3 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)openingEntity, v5, v6);
  v9 = *(OpeningMovieEntity_o **)(v3 + 16);
  if ( v9 )
  {
    *(_DWORD *)(v3 + 24) = OpeningMovieEntity__GetGrandPvParentId(v9, v8);
    v10 = (int *)(v3 + 24);
    v11 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v11 = TitleRootComponent_TypeInfo;
    }
    String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(v11->static_fields->SAVE_KEY_PLAYED_MOVIE, 0);
    IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String_71182452, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( *v7 )
      {
        v13 = System_Int32__ToString((unsigned int)*v7 + 16, 0);
        v14 = v13;
        if ( *v10 >= 1 )
        {
          v15 = System_String__Concat_63518544(v13, (System_String_o *)StringLiteral_811/*","*/, 0);
          v16 = System_Int32__ToString((int)v3 + 24, 0);
          v14 = System_String__Concat_63518544(v15, v16, 0);
        }
        v17 = TitleRootComponent_TypeInfo;
        if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
          v17 = TitleRootComponent_TypeInfo;
        }
        v18 = v14;
        SAVE_KEY_PLAYED_MOVIE = v17->static_fields->SAVE_KEY_PLAYED_MOVIE;
LABEL_29:
        UnityEngine_PlayerPrefs__SetString(SAVE_KEY_PLAYED_MOVIE, v18, 0);
        return;
      }
LABEL_31:
      sub_1C32E7C(IsNullOrEmpty);
    }
    v20 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v20, 0);
    if ( !String_71182452 )
      goto LABEL_31;
    v21 = System_String__Split(String_71182452, 0x2Cu, 0, 0);
    v22 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v3,
      Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__0__,
      0);
    IsNullOrEmpty = BasicHelper__Find_object_(
                      (System_Object_array *)v21,
                      (System_Func_T__bool__o *)v22,
                      (const MethodInfo_30C735C *)Method_BasicHelper_Find_string___);
    if ( !IsNullOrEmpty )
    {
      if ( !v20 )
        goto LABEL_31;
      IsNullOrEmpty = System_Text_StringBuilder__Append_63603608(v20, (System_String_o *)StringLiteral_811/*","*/, 0);
      if ( !*v7 )
        goto LABEL_31;
      v23 = System_Int32__ToString((unsigned int)*v7 + 16, 0);
      IsNullOrEmpty = System_Text_StringBuilder__Append_63603608(v20, v23, 0);
    }
    if ( *v10 < 1
      || (v24 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo),
          System_Func_object__bool____ctor(
            v24,
            (Il2CppObject *)v3,
            Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__1__,
            0),
          (IsNullOrEmpty = BasicHelper__Find_object_(
                             (System_Object_array *)v21,
                             (System_Func_T__bool__o *)v24,
                             (const MethodInfo_30C735C *)Method_BasicHelper_Find_string___)) != 0) )
    {
      if ( !v20 )
        goto LABEL_31;
    }
    else
    {
      if ( !v20 )
        goto LABEL_31;
      System_Text_StringBuilder__Append_63603608(v20, (System_String_o *)StringLiteral_811/*","*/, 0);
      v25 = System_Int32__ToString((int)v3 + 24, 0);
      System_Text_StringBuilder__Append_63603608(v20, v25, 0);
    }
    if ( System_Text_StringBuilder__get_Length(v20, 0) >= 1 )
    {
      v26 = TitleRootComponent_TypeInfo;
      if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
        v26 = TitleRootComponent_TypeInfo;
      }
      v27 = v26->static_fields->SAVE_KEY_PLAYED_MOVIE;
      v28 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v20->klass->vtable._3_ToString.methodPtr)(
                                 v20,
                                 v20->klass->vtable._3_ToString.method);
      v18 = System_String__Concat_63518544(String_71182452, v28, 0);
      SAVE_KEY_PLAYED_MOVIE = v27;
      goto LABEL_29;
    }
  }
}


void OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37F5B & 1) == 0 )
  {
    sub_1C32C20(&OpeningMovieMaster___c_TypeInfo);
    byte_4C37F5B = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  OpeningMovieMaster___c_TypeInfo->static_fields->__9 = (struct OpeningMovieMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)OpeningMovieMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return OpeningMovieEntity__IsGrand(n, (const MethodInfo *)n);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  struct OpeningMovieEntity_o *openingEntity; // x8

  v4 = System_Int32__Parse(id, 0);
  openingEntity = this->fields.openingEntity;
  if ( !openingEntity )
    sub_1C32E7C(v4);
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
  int32_t monitor; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C37F5C & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    byte_4C37F5C = 1;
  }
  entity = 0;
  if ( this->fields.parentId >= 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_OpeningMovieMaster___);
    if ( !Master_object )
      goto LABEL_15;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields.parentId,
                                      (const MethodInfo_3396884 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
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
      sub_1C32E7C(Master_object);
    }
  }
}