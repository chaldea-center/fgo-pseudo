void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B375A7 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__, method);
    byte_4B375A7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    311,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        int32_t timing,
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
  __int64 v23; // x1
  void *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  OpeningMovieEntity_o *v35; // x0
  __int64 v36; // x1
  OpeningMovieEntity_o *v37; // x24
  __int64 methodPtr_low; // x9
  int32_t TargetTiming; // w0
  const MethodInfo *v40; // x3
  _BOOL8 IsEnable; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  System_Comparison_T__o *v57; // x20
  Il2CppObject *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x1
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__3_1; // x0
  Il2CppObject *v68; // x21
  struct OpeningMovieMaster___c_StaticFields *v69; // x0

  if ( (byte_4B375A8 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, nowTime);
    sub_1BD3458(&System_Comparison_OpeningMovieEntity__TypeInfo, v9);
    sub_1BD3458(&System_IDisposable_TypeInfo, v10);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v16);
    sub_1BD3458(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v17);
    sub_1BD3458(&OpeningMovieEntity_TypeInfo, v18);
    sub_1BD3458(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_0__, v19);
    sub_1BD3458(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_1__, v20);
    sub_1BD3458(&OpeningMovieMaster___c_TypeInfo, v21);
    byte_4B375A8 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                    Enumerator,
                                    *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      goto LABEL_55;
    methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v35->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (OpeningMovieEntity_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != OpeningMovieEntity_TypeInfo )
    {
      sub_1BD3974(v35);
LABEL_55:
      sub_1BD36B4(v35, v36);
    }
    TargetTiming = OpeningMovieEntity__GetTargetTiming(v35, (const MethodInfo *)OpeningMovieEntity_TypeInfo);
    if ( !TargetTiming || TargetTiming == timing )
    {
      IsEnable = OpeningMovieEntity__IsEnable(v37, nowTime, 0, v40);
      if ( IsEnable )
      {
        if ( !v22 )
          sub_1BD36B4(IsEnable, v42);
        items = v22->fields._items;
        v50 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          sub_1BD36B4(IsEnable, v42);
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)v37,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v52[4] = (Il2CppClass *)v37;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v37, v43, v44, v45, v46, v47, v48);
        }
      }
    }
  }
  v53 = Enumerator->klass;
  v54 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_33;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_33:
    v56 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                   Enumerator,
                   *(_QWORD *)(v56 + 8));
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
      v57 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
      if ( !v57 )
      {
        if ( !*((_DWORD *)list + 56) )
        {
          j_il2cpp_runtime_class_init_0(list);
          list = OpeningMovieMaster___c_TypeInfo;
        }
        v58 = (Il2CppObject *)**((_QWORD **)list + 23);
        v57 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_OpeningMovieEntity__TypeInfo);
        System_Comparison_object____ctor(v57, v58, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_1__, 0LL);
        v65 = (int64_t)v57;
        static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
        static_fields->__9__3_1 = (struct System_Comparison_OpeningMovieEntity__o *)v57;
        p__9__3_1 = (PartyOrganizationUtility_o *)&static_fields->__9__3_1;
LABEL_49:
        sub_1BD33FC(p__9__3_1, v65, v59, v60, v61, v62, v63, v64);
        goto LABEL_50;
      }
      goto LABEL_50;
    }
    if ( v22 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v22,
                                           (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_58:
    sub_1BD36B4(list, v23);
  }
  list = OpeningMovieMaster___c_TypeInfo;
  if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
    list = OpeningMovieMaster___c_TypeInfo;
  }
  v57 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v57 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v68 = (Il2CppObject *)**((_QWORD **)list + 23);
    v57 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_OpeningMovieEntity__TypeInfo);
    System_Comparison_object____ctor(v57, v68, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_0__, 0LL);
    v65 = (int64_t)v57;
    v69 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v69->__9__3_0 = (struct System_Comparison_OpeningMovieEntity__o *)v57;
    p__9__3_1 = (PartyOrganizationUtility_o *)&v69->__9__3_0;
    goto LABEL_49;
  }
LABEL_50:
  if ( !v22 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_56371284(
    v22,
    v57,
    (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v22,
                                       (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v27; // x20
  __int64 v28; // x1
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
  int64_t v40; // x25
  __int64 methodPtr_low; // x10
  _BOOL8 IsEnable; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int v50; // w8
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  System_Comparison_T__o *v59; // x0
  __int64 *v60; // x8
  System_Comparison_T__o *v61; // x19

  if ( (byte_4B375AA & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&type);
    sub_1BD3458(&System_Comparison_OpeningMovieEntity__TypeInfo, v11);
    sub_1BD3458(&System_IDisposable_TypeInfo, v12);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BD3458(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v17);
    sub_1BD3458(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v18);
    sub_1BD3458(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v19);
    sub_1BD3458(&OpeningMovieEntity_TypeInfo, v20);
    sub_1BD3458(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__, v21);
    sub_1BD3458(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__, v22);
    sub_1BD3458(&OpeningMovieMaster___c__DisplayClass5_0_TypeInfo, v23);
    byte_4B375AA = 1;
  }
  v24 = sub_1BD36A4(OpeningMovieMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_50;
  *(_DWORD *)(v24 + 16) = type;
  v27 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v28);
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
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v37 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v38 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                    Enumerator,
                                    *(_QWORD *)(v37 + 8));
    v40 = (int64_t)v38;
    if ( v38 )
    {
      methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v38->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (OpeningMovieEntity_c *)v38->klass->_2.typeHierarchy[methodPtr_low - 1] == OpeningMovieEntity_TypeInfo )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v38, nowTime, 1, v39);
        if ( IsEnable )
        {
          v50 = *(_DWORD *)(v24 + 16);
          if ( v50 == *(_DWORD *)(v40 + 48) )
          {
            if ( v50 == 2 )
            {
              if ( !v27 )
                sub_1BD36B4(IsEnable, v43);
              items = v27->fields._items;
              v52 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v27->fields._version;
              if ( !items )
                sub_1BD36B4(IsEnable, v43);
              size = v27->fields._size;
              if ( (unsigned int)size >= items->max_length )
                goto LABEL_34;
LABEL_30:
              v54 = &items->obj.klass + size;
              v27->fields._size = size + 1;
              v54[4] = (Il2CppClass *)v40;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v54 + 4), v40, v44, v45, v46, v47, v48, v49);
            }
            else if ( v50 == 1 && *(_DWORD *)(v40 + 52) == value )
            {
              if ( !v27 )
                sub_1BD36B4(IsEnable, v43);
              items = v27->fields._items;
              v52 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v27->fields._version;
              if ( !items )
                sub_1BD36B4(IsEnable, v43);
              size = v27->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_30;
LABEL_34:
              System_Collections_Generic_List_object___AddWithResize(
                v27,
                (Il2CppObject *)v40,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
          }
        }
      }
    }
  }
  v55 = Enumerator->klass;
  v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_40;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_40:
    v58 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                             Enumerator,
                                                             *(_QWORD *)(v58 + 8));
  if ( !sortType )
  {
    v59 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_OpeningMovieEntity__TypeInfo);
    v60 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
LABEL_46:
    v61 = v59;
    System_Comparison_object____ctor(v59, (Il2CppObject *)v24, *v60, 0LL);
    if ( v27 )
    {
      System_Collections_Generic_List_object___Sort_56371284(
        v27,
        v61,
        (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v27,
                                           (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_50:
    sub_1BD36B4(list, v26);
  }
  if ( sortType == 1 )
  {
    v59 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_OpeningMovieEntity__TypeInfo);
    v60 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
    goto LABEL_46;
  }
  if ( !v27 )
    goto LABEL_50;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v27,
                                       (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  OpeningMovieEntity_o *v20; // x0
  __int64 v21; // x1
  OpeningMovieEntity_o *v22; // x21
  __int64 methodPtr_low; // x9
  System_String_o *movieName; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4B375A9 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, movieFileName);
    sub_1BD3458(&System_IDisposable_TypeInfo, v5);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BD3458(&OpeningMovieEntity_TypeInfo, v8);
    byte_4B375A9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BD36B4(0LL, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_316EA98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BD36B4(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C25438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1C25438(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                    Enumerator,
                                    *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (OpeningMovieEntity_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != OpeningMovieEntity_TypeInfo )
    {
      sub_1BD3974(v20);
LABEL_33:
      sub_1BD36B4(v20, v21);
    }
    movieName = v20->fields.movieName;
    if ( !movieName )
      sub_1BD36B4(0LL, OpeningMovieEntity_TypeInfo);
    if ( System_String__Equals_62533564(movieName, movieFileName, 0LL) )
      goto LABEL_25;
  }
  v22 = 0LL;
LABEL_25:
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_29;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_29:
    v28 = sub_1C25438(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v22;
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
  System_String_o *String_70236548; // x0
  __int64 v10; // x1
  System_String_o *v11; // x19
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

  if ( (byte_4B375AB & 1) == 0 )
  {
    sub_1BD3458(&TitleRootComponent_TypeInfo, movieFileName);
    sub_1BD3458(&StringLiteral_863/*","*/, v5);
    byte_4B375AB = 1;
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
  String_70236548 = UnityEngine_PlayerPrefs__GetString_70236548(v8->static_fields->SAVE_KEY_PLAYED_MOVIE, 0LL);
  if ( !String_70236548 )
    goto LABEL_23;
  v11 = String_70236548;
  if ( String_70236548->fields._stringLength < 1 )
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
  String_70236548 = (System_String_o *)System_String__Split(String_70236548, 0x2Cu, 0, 0LL);
  if ( !String_70236548 )
LABEL_23:
    sub_1BD36B4(String_70236548, v10);
  klass = String_70236548[1].klass;
  v13 = String_70236548;
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
    v20 = System_String__Concat_62536508(v11, (System_String_o *)StringLiteral_863/*","*/, v19, 0LL);
    v21 = v18;
LABEL_21:
    UnityEngine_PlayerPrefs__SetString(v21, v20, 0LL);
    return;
  }
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)klass )
      sub_1BD36BC(String_70236548, v10);
    id = p_fields->id;
    String_70236548 = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v13[1].monitor + v15), 0LL);
    if ( id == (_DWORD)String_70236548 )
      break;
    LODWORD(klass) = v13[1].klass;
    if ( (__int64)++v15 >= (int)klass )
      goto LABEL_14;
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B375AC & 1) == 0 )
  {
    sub_1BD3458(&OpeningMovieMaster___c_TypeInfo, v1);
    byte_4B375AC = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  OpeningMovieMaster___c_TypeInfo->static_fields->__9 = (struct OpeningMovieMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)OpeningMovieMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, a);
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
    sub_1BD36B4(this, a);
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
    sub_1BD36B4(this, a);
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
    sub_1BD36B4(this, a);
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