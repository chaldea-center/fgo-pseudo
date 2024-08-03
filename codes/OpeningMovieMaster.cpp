void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC7F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__, method);
    byte_49FC7F1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    311,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
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
  System_Collections_Generic_List_object__o *v22; // x19
  void *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  bool v25; // w23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  OpeningMovieEntity_o *v34; // x0
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x24
  __int64 methodPtr_low; // x9
  _BOOL8 IsEnable; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  System_Comparison_T__o *v51; // x20
  Il2CppObject *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w1
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__2_1; // x0
  Il2CppObject *v58; // x21
  struct OpeningMovieMaster___c_StaticFields *v59; // x0

  if ( (byte_49FC7F2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, nowTime);
    sub_1B640C8(&System_Comparison_OpeningMovieEntity__TypeInfo, v9);
    sub_1B640C8(&System_IDisposable_TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v17);
    sub_1B640C8(&OpeningMovieEntity_TypeInfo, v18);
    sub_1B640C8(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, v19);
    sub_1B640C8(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, v20);
    sub_1B640C8(&OpeningMovieMaster___c_TypeInfo, v21);
    byte_49FC7F2 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_OpeningMovieEntity__TypeInfo,
                                                       nowTime,
                                                       *(_QWORD *)&sortType);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  v25 = isMaterial;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_17;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_17:
      v33 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                    Enumerator,
                                    *(_QWORD *)(v33 + 8));
    v36 = (Il2CppObject *)v34;
    if ( !v34 )
      goto LABEL_54;
    methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v34->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (OpeningMovieEntity_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] != OpeningMovieEntity_TypeInfo )
    {
      sub_1B645E4(v34);
LABEL_54:
      sub_1B64324(v34);
    }
    IsEnable = OpeningMovieEntity__IsEnable(v34, nowTime, v25, v35);
    if ( IsEnable )
    {
      if ( !v22 )
        sub_1B64324(IsEnable);
      items = v22->fields._items;
      v42 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
      ++v22->fields._version;
      if ( !items )
        sub_1B64324(IsEnable);
      size = v22->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          v36,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v36;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v36, v39, v40);
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_32;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_32:
    v48 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                   Enumerator,
                   *(_QWORD *)(v48 + 8));
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
      v51 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
      if ( !v51 )
      {
        if ( !*((_DWORD *)list + 56) )
        {
          j_il2cpp_runtime_class_init_0(list);
          list = OpeningMovieMaster___c_TypeInfo;
        }
        v52 = (Il2CppObject *)**((_QWORD **)list + 23);
        v51 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_OpeningMovieEntity__TypeInfo, v49, v50);
        System_Comparison_object____ctor(v51, v52, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, 0LL);
        v55 = (int)v51;
        static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
        static_fields->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)v51;
        p__9__2_1 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__2_1;
LABEL_48:
        sub_1B6406C(p__9__2_1, v55, v53, v54);
        goto LABEL_49;
      }
      goto LABEL_49;
    }
    if ( v22 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v22,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_57:
    sub_1B64324(list);
  }
  list = OpeningMovieMaster___c_TypeInfo;
  if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    list = OpeningMovieMaster___c_TypeInfo;
  }
  v51 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v51 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v58 = (Il2CppObject *)**((_QWORD **)list + 23);
    v51 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_OpeningMovieEntity__TypeInfo, v49, v50);
    System_Comparison_object____ctor(v51, v58, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, 0LL);
    v55 = (int)v51;
    v59 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v59->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)v51;
    p__9__2_1 = (ServantStatusBattleListViewItem_o *)&v59->__9__2_0;
    goto LABEL_48;
  }
LABEL_49:
  if ( !v22 )
    goto LABEL_57;
  System_Collections_Generic_List_object___Sort_55243320(
    v22,
    v51,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v22,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  __int64 v24; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  OpeningMovieEntity_o *v38; // x0
  const MethodInfo *v39; // x3
  OpeningMovieEntity_o *v40; // x25
  __int64 methodPtr_low; // x10
  _BOOL8 IsEnable; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  int v45; // w8
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  System_Comparison_T__o *v56; // x0
  __int64 *v57; // x8
  System_Comparison_T__o *v58; // x19

  if ( (byte_49FC7F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1B640C8(&System_Comparison_OpeningMovieEntity__TypeInfo, v11);
    sub_1B640C8(&System_IDisposable_TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v18);
    sub_1B640C8(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v19);
    sub_1B640C8(&OpeningMovieEntity_TypeInfo, v20);
    sub_1B640C8(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__, v21);
    sub_1B640C8(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__, v22);
    sub_1B640C8(&OpeningMovieMaster___c__DisplayClass4_0_TypeInfo, v23);
    byte_49FC7F4 = 1;
  }
  v24 = sub_1B64314(OpeningMovieMaster___c__DisplayClass4_0_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&value);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_50;
  *(_DWORD *)(v24 + 16) = type;
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_OpeningMovieEntity__TypeInfo,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        p_offset += 4;
        if ( !v31 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_17;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_17:
      v37 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v38 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                    Enumerator,
                                    *(_QWORD *)(v37 + 8));
    v40 = v38;
    if ( v38 )
    {
      methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v38->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (OpeningMovieEntity_c *)v38->klass->_2.typeHierarchy[methodPtr_low - 1] == OpeningMovieEntity_TypeInfo )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v38, nowTime, 1, v39);
        if ( IsEnable )
        {
          v45 = *(_DWORD *)(v24 + 16);
          if ( v45 == v40->fields.materialPosType )
          {
            if ( v45 == 2 )
            {
              if ( !v28 )
                sub_1B64324(IsEnable);
              items = v28->fields._items;
              v47 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v28->fields._version;
              if ( !items )
                sub_1B64324(IsEnable);
              size = v28->fields._size;
              if ( (unsigned int)size >= items->max_length )
                goto LABEL_34;
LABEL_30:
              v49 = &items->obj.klass + size;
              v28->fields._size = size + 1;
              v49[4] = (Il2CppClass *)v40;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v40, v43, v44);
            }
            else if ( v45 == 1 && v40->fields.materialPosValue == value )
            {
              if ( !v28 )
                sub_1B64324(IsEnable);
              items = v28->fields._items;
              v47 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v28->fields._version;
              if ( !items )
                sub_1B64324(IsEnable);
              size = v28->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_30;
LABEL_34:
              System_Collections_Generic_List_object___AddWithResize(
                v28,
                (Il2CppObject *)v40,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
          }
        }
      }
    }
  }
  v50 = Enumerator->klass;
  v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v52 = &v50->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_40;
    }
    v53 = (__int64)&v50->vtable[*v52].method;
  }
  else
  {
LABEL_40:
    v53 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                                                             Enumerator,
                                                             *(_QWORD *)(v53 + 8));
  if ( !sortType )
  {
    v56 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_OpeningMovieEntity__TypeInfo, v54, v55);
    v57 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
LABEL_46:
    v58 = v56;
    System_Comparison_object____ctor(v56, (Il2CppObject *)v24, *v57, 0LL);
    if ( v28 )
    {
      System_Collections_Generic_List_object___Sort_55243320(
        v28,
        v58,
        (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v28,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_50:
    sub_1B64324(list);
  }
  if ( sortType == 1 )
  {
    v56 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_OpeningMovieEntity__TypeInfo, v54, v55);
    v57 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
    goto LABEL_46;
  }
  if ( !v28 )
    goto LABEL_50;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v28,
                                       (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  OpeningMovieEntity_o *v19; // x0
  OpeningMovieEntity_o *v20; // x21
  __int64 methodPtr_low; // x9
  System_String_o *movieName; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_49FC7F3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, movieFileName);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&OpeningMovieEntity_TypeInfo, v8);
    byte_49FC7F3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                    Enumerator,
                                    *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( !v19 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (OpeningMovieEntity_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != OpeningMovieEntity_TypeInfo )
    {
      sub_1B645E4(v19);
LABEL_33:
      sub_1B64324(v19);
    }
    movieName = v19->fields.movieName;
    if ( !movieName )
      sub_1B64324(0LL);
    if ( System_String__Equals_61383712(movieName, movieFileName, 0LL) )
      goto LABEL_25;
  }
  v20 = 0LL;
LABEL_25:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_29;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_29:
    v26 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v20;
}


void __fastcall OpeningMovieMaster__SavePlayedOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  OpeningMovieEntity_o *OpeningMovie; // x0
  OpeningMovieEntity_o *v7; // x20
  TitleRootComponent_c *v8; // x0
  System_String_o *String_69086012; // x0
  System_String_o *v10; // x19
  __int64 v11; // x1
  System_String_c *klass; // x8
  System_String_o *v13; // x21
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

  if ( (byte_49FC7F5 & 1) == 0 )
  {
    sub_1B640C8(&TitleRootComponent_TypeInfo, movieFileName);
    sub_1B640C8(&StringLiteral_869/*","*/, v5);
    byte_49FC7F5 = 1;
  }
  OpeningMovie = OpeningMovieMaster__GetOpeningMovie(this, movieFileName, method);
  if ( !OpeningMovie )
    return;
  v7 = OpeningMovie;
  v8 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v8 = TitleRootComponent_TypeInfo;
  }
  String_69086012 = UnityEngine_PlayerPrefs__GetString_69086012(v8->static_fields->SAVE_KEY_PLAYED_MOVIE, 0LL);
  if ( !String_69086012 )
    goto LABEL_23;
  v10 = String_69086012;
  if ( String_69086012->fields._stringLength < 1 )
  {
    v22 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v22 = TitleRootComponent_TypeInfo;
    }
    SAVE_KEY_PLAYED_MOVIE = v22->static_fields->SAVE_KEY_PLAYED_MOVIE;
    v20 = System_Int32__ToString((int)v7 + 16, 0LL);
    v21 = SAVE_KEY_PLAYED_MOVIE;
    goto LABEL_21;
  }
  String_69086012 = (System_String_o *)System_String__Split(String_69086012, 0x2Cu, 0, 0LL);
  if ( !String_69086012 )
LABEL_23:
    sub_1B64324(String_69086012);
  klass = String_69086012[1].klass;
  v13 = String_69086012;
  p_fields = &v7->fields;
  if ( (int)klass < 1 )
  {
LABEL_14:
    v17 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v17 = TitleRootComponent_TypeInfo;
    }
    v18 = v17->static_fields->SAVE_KEY_PLAYED_MOVIE;
    v19 = System_Int32__ToString((int32_t)p_fields, 0LL);
    v20 = System_String__Concat_61386656(v10, (System_String_o *)StringLiteral_869/*","*/, v19, 0LL);
    v21 = v18;
LABEL_21:
    UnityEngine_PlayerPrefs__SetString(v21, v20, 0LL);
    return;
  }
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)klass )
      sub_1B6432C(String_69086012, v11);
    id = p_fields->id;
    String_69086012 = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v13[1].monitor + v15), 0LL);
    if ( id == (_DWORD)String_69086012 )
      break;
    LODWORD(klass) = v13[1].klass;
    if ( (__int64)++v15 >= (int)klass )
      goto LABEL_14;
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC7F6 & 1) == 0 )
  {
    sub_1B640C8(&OpeningMovieMaster___c_TypeInfo, v1);
    byte_49FC7F6 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(OpeningMovieMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  OpeningMovieMaster___c_TypeInfo->static_fields->__9 = (struct OpeningMovieMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)OpeningMovieMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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