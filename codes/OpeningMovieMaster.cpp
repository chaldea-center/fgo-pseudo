void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B54F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
    byte_4A5B54F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    311,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        bool isMaterial,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  __int64 v10; // x1
  void *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  bool v14; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  OpeningMovieEntity_o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x24
  __int64 methodPtr_low; // x9
  _BOOL8 IsEnable; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  System_Comparison_T__o *v40; // x20
  Il2CppObject *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w1
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__2_1; // x0
  Il2CppObject *v47; // x21
  struct OpeningMovieMaster___c_StaticFields *v48; // x0

  if ( (byte_4A5B550 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_1B885B0(&OpeningMovieEntity_TypeInfo);
    sub_1B885B0(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__);
    sub_1B885B0(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__);
    sub_1B885B0(&OpeningMovieMaster___c_TypeInfo);
    byte_4A5B550 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v12);
  v14 = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_17:
      v22 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                    Enumerator,
                                    *(_QWORD *)(v22 + 8));
    v26 = (Il2CppObject *)v23;
    if ( !v23 )
      goto LABEL_54;
    methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (OpeningMovieEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != OpeningMovieEntity_TypeInfo )
    {
      sub_1B88ACC(v23);
LABEL_54:
      sub_1B8880C(v23, v24);
    }
    IsEnable = OpeningMovieEntity__IsEnable(v23, nowTime, v14, v25);
    if ( IsEnable )
    {
      if ( !v9 )
        sub_1B8880C(IsEnable, v29);
      items = v9->fields._items;
      v33 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1B8880C(IsEnable, v29);
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v26,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v26;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v26, v30, v31);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_32;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_32:
    v39 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                   Enumerator,
                   *(_QWORD *)(v39 + 8));
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
      v40 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
      if ( !v40 )
      {
        if ( !*((_DWORD *)list + 56) )
        {
          j_il2cpp_runtime_class_init_0(list);
          list = OpeningMovieMaster___c_TypeInfo;
        }
        v41 = (Il2CppObject *)**((_QWORD **)list + 23);
        v40 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_OpeningMovieEntity__TypeInfo);
        System_Comparison_object____ctor(v40, v41, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, 0LL);
        v44 = (int)v40;
        static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
        static_fields->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)v40;
        p__9__2_1 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__2_1;
LABEL_48:
        sub_1B88554(p__9__2_1, v44, v42, v43);
        goto LABEL_49;
      }
      goto LABEL_49;
    }
    if ( v9 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v9,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_57:
    sub_1B8880C(list, v10);
  }
  list = OpeningMovieMaster___c_TypeInfo;
  if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    list = OpeningMovieMaster___c_TypeInfo;
  }
  v40 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v40 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v47 = (Il2CppObject *)**((_QWORD **)list + 23);
    v40 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_OpeningMovieEntity__TypeInfo);
    System_Comparison_object____ctor(v40, v47, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, 0LL);
    v44 = (int)v40;
    v48 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v48->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)v40;
    p__9__2_1 = (ServantStatusBattleListViewItem_o *)&v48->__9__2_0;
    goto LABEL_48;
  }
LABEL_49:
  if ( !v9 )
    goto LABEL_57;
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    v40,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v9,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  OpeningMovieEntity_o *v27; // x25
  __int64 methodPtr_low; // x10
  _BOOL8 IsEnable; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  int v33; // w8
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  System_Comparison_T__o *v42; // x0
  __int64 *v43; // x8
  System_Comparison_T__o *v44; // x19

  if ( (byte_4A5B552 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_1B885B0(&OpeningMovieEntity_TypeInfo);
    sub_1B885B0(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__);
    sub_1B885B0(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__);
    sub_1B885B0(&OpeningMovieMaster___c__DisplayClass4_0_TypeInfo);
    byte_4A5B552 = 1;
  }
  v11 = sub_1B887FC(OpeningMovieMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_50;
  *(_DWORD *)(v11 + 16) = type;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v15);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v24 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                                    Enumerator,
                                    *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( v25 )
    {
      methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v25->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (OpeningMovieEntity_c *)v25->klass->_2.typeHierarchy[methodPtr_low - 1] == OpeningMovieEntity_TypeInfo )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v25, nowTime, 1, v26);
        if ( IsEnable )
        {
          v33 = *(_DWORD *)(v11 + 16);
          if ( v33 == v27->fields.materialPosType )
          {
            if ( v33 == 2 )
            {
              if ( !v14 )
                sub_1B8880C(IsEnable, v30);
              items = v14->fields._items;
              v35 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v14->fields._version;
              if ( !items )
                sub_1B8880C(IsEnable, v30);
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
                goto LABEL_34;
LABEL_30:
              v37 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v27;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v27, v31, v32);
            }
            else if ( v33 == 1 && v27->fields.materialPosValue == value )
            {
              if ( !v14 )
                sub_1B8880C(IsEnable, v30);
              items = v14->fields._items;
              v35 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v14->fields._version;
              if ( !items )
                sub_1B8880C(IsEnable, v30);
              size = v14->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_30;
LABEL_34:
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v27,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
          }
        }
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_40;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_40:
    v41 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                             Enumerator,
                                                             *(_QWORD *)(v41 + 8));
  if ( !sortType )
  {
    v42 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_OpeningMovieEntity__TypeInfo);
    v43 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
LABEL_46:
    v44 = v42;
    System_Comparison_object____ctor(v42, (Il2CppObject *)v11, *v43, 0LL);
    if ( v14 )
    {
      System_Collections_Generic_List_object___Sort_55571192(
        v14,
        v44,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v14,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_50:
    sub_1B8880C(list, v13);
  }
  if ( sortType == 1 )
  {
    v42 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_OpeningMovieEntity__TypeInfo);
    v43 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
    goto LABEL_46;
  }
  if ( !v14 )
    goto LABEL_50;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v14,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  OpeningMovieEntity_o *v16; // x0
  __int64 v17; // x1
  OpeningMovieEntity_o *v18; // x21
  __int64 methodPtr_low; // x9
  System_String_o *movieName; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4A5B551 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&OpeningMovieEntity_TypeInfo);
    byte_4A5B551 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
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
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v15 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                    Enumerator,
                                    *(_QWORD *)(v15 + 8));
    v18 = v16;
    if ( !v16 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (OpeningMovieEntity_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != OpeningMovieEntity_TypeInfo )
    {
      sub_1B88ACC(v16);
LABEL_33:
      sub_1B8880C(v16, v17);
    }
    movieName = v16->fields.movieName;
    if ( !movieName )
      sub_1B8880C(0LL, OpeningMovieEntity_TypeInfo);
    if ( System_String__Equals_61715348(movieName, movieFileName, 0LL) )
      goto LABEL_25;
  }
  v18 = 0LL;
LABEL_25:
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_29:
    v24 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
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
  System_String_o *String_69417656; // x0
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

  if ( (byte_4A5B553 & 1) == 0 )
  {
    sub_1B885B0(&TitleRootComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5B553 = 1;
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
  String_69417656 = UnityEngine_PlayerPrefs__GetString_69417656(v7->static_fields->SAVE_KEY_PLAYED_MOVIE, 0LL);
  if ( !String_69417656 )
    goto LABEL_23;
  v10 = String_69417656;
  if ( String_69417656->fields._stringLength < 1 )
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
  String_69417656 = (System_String_o *)System_String__Split(String_69417656, 0x2Cu, 0, 0LL);
  if ( !String_69417656 )
LABEL_23:
    sub_1B8880C(String_69417656, v9);
  klass = String_69417656[1].klass;
  v12 = String_69417656;
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
    v19 = System_String__Concat_61718292(v10, (System_String_o *)StringLiteral_868/*","*/, v18, 0LL);
    v20 = v17;
LABEL_21:
    UnityEngine_PlayerPrefs__SetString(v20, v19, 0LL);
    return;
  }
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)klass )
      sub_1B88814(String_69417656, v9);
    id = p_fields->id;
    String_69417656 = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v12[1].monitor + v14), 0LL);
    if ( id == (_DWORD)String_69417656 )
      break;
    LODWORD(klass) = v12[1].klass;
    if ( (__int64)++v14 >= (int)klass )
      goto LABEL_14;
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B554 & 1) == 0 )
  {
    sub_1B885B0(&OpeningMovieMaster___c_TypeInfo);
    byte_4A5B554 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  OpeningMovieMaster___c_TypeInfo->static_fields->__9 = (struct OpeningMovieMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)OpeningMovieMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, a);
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
    sub_1B8880C(this, a);
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