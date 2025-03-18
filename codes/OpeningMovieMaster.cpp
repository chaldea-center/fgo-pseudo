void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22393 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__, method);
    byte_4C22393 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    317,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        int32_t timing,
        System_String_o *afterTransitionParam,
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
  System_Collections_Generic_List_object__o *v23; // x19
  __int64 v24; // x1
  void *list; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  OpeningMovieEntity_o *v36; // x0
  const MethodInfo *v37; // x1
  OpeningMovieEntity_o *v38; // x25
  int32_t TargetTiming; // w0
  const MethodInfo *v40; // x3
  _BOOL8 IsEnable; // x0
  const MethodInfo *v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *TransitionParam; // x0
  _BOOL8 v50; // x0
  __int64 v51; // x1
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  System_Comparison_T__o *v60; // x20
  Il2CppObject *v61; // x21
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  struct OpeningMovieMaster___c_StaticFields *v69; // x0
  PartyOrganizationUtility_o *p__9__3_0; // x0
  Il2CppObject *v71; // x21
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4C22394 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__, nowTime);
    sub_1C3B764(&System_Comparison_OpeningMovieEntity__TypeInfo, v11);
    sub_1C3B764(&System_IDisposable_TypeInfo, v12);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, v13);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v18);
    sub_1C3B764(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v19);
    sub_1C3B764(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_0__, v20);
    sub_1C3B764(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_1__, v21);
    sub_1C3B764(&OpeningMovieMaster___c_TypeInfo, v22);
    byte_4C22394 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_63;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0LL);
    }
    v36 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                    Enumerator,
                                    *(_QWORD *)(v35 + 8));
    v38 = v36;
    if ( !v36 )
      sub_1C3B9C0(0LL, v37);
    TargetTiming = OpeningMovieEntity__GetTargetTiming(v36, v37);
    if ( !TargetTiming || TargetTiming == timing )
    {
      IsEnable = OpeningMovieEntity__IsEnable(v38, nowTime, 0, v40);
      if ( IsEnable )
      {
        if ( (timing & 0xFFFFFFFE) == 4 )
        {
          TransitionParam = OpeningMovieEntity__GetTransitionParam(v38, v42);
          v50 = System_String__op_Equality(TransitionParam, afterTransitionParam, 0LL);
          if ( v50 )
          {
            if ( !v23 )
              sub_1C3B9C0(v50, v51);
            items = v23->fields._items;
            v53 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1C3B9C0(v50, v51);
            size = v23->fields._size;
            if ( (unsigned int)size < items->max_length )
              goto LABEL_27;
LABEL_31:
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)v38,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
        }
        else
        {
          if ( !v23 )
            sub_1C3B9C0(IsEnable, v42);
          items = v23->fields._items;
          v53 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            sub_1C3B9C0(IsEnable, v42);
          size = v23->fields._size;
          if ( (unsigned int)size >= items->max_length )
            goto LABEL_31;
LABEL_27:
          v55 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v55[4] = (Il2CppClass *)v38;
          sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 4), (int64_t)v38, v43, v44, v45, v46, v47, v48);
        }
      }
    }
  }
  v56 = Enumerator->klass;
  v57 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_37;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_37:
    v59 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
                   Enumerator,
                   *(_QWORD *)(v59 + 8));
  if ( !sortType )
  {
    list = OpeningMovieMaster___c_TypeInfo;
    if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v60 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v60 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      v71 = (Il2CppObject *)**((_QWORD **)list + 23);
      v60 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_OpeningMovieEntity__TypeInfo);
      System_Comparison_object____ctor(v60, v71, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_0__, 0LL);
      v68 = (int64_t)v60;
      static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
      static_fields->__9__3_0 = (struct System_Comparison_OpeningMovieEntity__o *)v60;
      p__9__3_0 = (PartyOrganizationUtility_o *)&static_fields->__9__3_0;
LABEL_53:
      sub_1C3B708(p__9__3_0, v68, v62, v63, v64, v65, v66, v67);
    }
LABEL_54:
    if ( v23 )
    {
      System_Collections_Generic_List_object___Sort_57202480(
        v23,
        v60,
        (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v23,
                                           (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_63:
    sub_1C3B9C0(list, v24);
  }
  if ( sortType == 1 )
  {
    list = OpeningMovieMaster___c_TypeInfo;
    if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v60 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
    if ( !v60 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      v61 = (Il2CppObject *)**((_QWORD **)list + 23);
      v60 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_OpeningMovieEntity__TypeInfo);
      System_Comparison_object____ctor(v60, v61, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_1__, 0LL);
      v68 = (int64_t)v60;
      v69 = OpeningMovieMaster___c_TypeInfo->static_fields;
      v69->__9__3_1 = (struct System_Comparison_OpeningMovieEntity__o *)v60;
      p__9__3_0 = (PartyOrganizationUtility_o *)&v69->__9__3_1;
      goto LABEL_53;
    }
    goto LABEL_54;
  }
  if ( !v23 )
    goto LABEL_63;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v23,
                                       (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  __int64 v23; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *v26; // x20
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  OpeningMovieEntity_o *v37; // x0
  const MethodInfo *v38; // x3
  int64_t v39; // x25
  _BOOL8 IsEnable; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int v48; // w8
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  System_Comparison_T__o *v57; // x0
  __int64 *v58; // x8
  System_Comparison_T__o *v59; // x19

  if ( (byte_4C22396 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__, *(_QWORD *)&type);
    sub_1C3B764(&System_Comparison_OpeningMovieEntity__TypeInfo, v11);
    sub_1C3B764(&System_IDisposable_TypeInfo, v12);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, v13);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v18);
    sub_1C3B764(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v19);
    sub_1C3B764(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__, v20);
    sub_1C3B764(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__, v21);
    sub_1C3B764(&OpeningMovieMaster___c__DisplayClass5_0_TypeInfo, v22);
    byte_4C22396 = 1;
  }
  v23 = sub_1C3B9B0(OpeningMovieMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_48;
  *(_DWORD *)(v23 + 16) = type;
  v26 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_48;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        p_offset += 4;
        if ( !v30 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v35 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_17;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_17:
      v36 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0LL);
    }
    v37 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                    Enumerator,
                                    *(_QWORD *)(v36 + 8));
    v39 = (int64_t)v37;
    if ( v37 )
    {
      IsEnable = OpeningMovieEntity__IsEnable(v37, nowTime, 1, v38);
      if ( IsEnable )
      {
        v48 = *(_DWORD *)(v23 + 16);
        if ( v48 == *(_DWORD *)(v39 + 48) )
        {
          if ( v48 == 2 )
          {
            if ( !v26 )
              sub_1C3B9C0(IsEnable, v41);
            items = v26->fields._items;
            v50 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
            ++v26->fields._version;
            if ( !items )
              sub_1C3B9C0(IsEnable, v41);
            size = v26->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_32;
LABEL_28:
            v52 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v52[4] = (Il2CppClass *)v39;
            sub_1C3B708((PartyOrganizationUtility_o *)(v52 + 4), v39, v42, v43, v44, v45, v46, v47);
          }
          else if ( v48 == 1 && *(_DWORD *)(v39 + 52) == value )
          {
            if ( !v26 )
              sub_1C3B9C0(IsEnable, v41);
            items = v26->fields._items;
            v50 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
            ++v26->fields._version;
            if ( !items )
              sub_1C3B9C0(IsEnable, v41);
            size = v26->fields._size;
            if ( (unsigned int)size < items->max_length )
              goto LABEL_28;
LABEL_32:
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)v39,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
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
        goto LABEL_38;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_38:
    v56 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                                             Enumerator,
                                                             *(_QWORD *)(v56 + 8));
  if ( !sortType )
  {
    v57 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_OpeningMovieEntity__TypeInfo);
    v58 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
LABEL_44:
    v59 = v57;
    System_Comparison_object____ctor(v57, (Il2CppObject *)v23, *v58, 0LL);
    if ( v26 )
    {
      System_Collections_Generic_List_object___Sort_57202480(
        v26,
        v59,
        (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v26,
                                           (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_48:
    sub_1C3B9C0(list, v25);
  }
  if ( sortType == 1 )
  {
    v57 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_OpeningMovieEntity__TypeInfo);
    v58 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
    goto LABEL_44;
  }
  if ( !v26 )
    goto LABEL_48;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v26,
                                       (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_o *__fastcall OpeningMovieMaster__GetOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  OpeningMovieEntity_o *v21; // x21
  System_String_o *v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C22395 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__, movieFileName);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4C22395 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v9);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
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
      v18 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v21 = (OpeningMovieEntity_o *)v19;
    if ( !v19 )
      sub_1C3B9C0(0LL, v20);
    v22 = *(System_String_o **)(v19 + 32);
    if ( !v22 )
      sub_1C3B9C0(0LL, v20);
    if ( System_String__Equals_63376928(v22, movieFileName, 0LL) )
      goto LABEL_23;
  }
  v21 = 0LL;
LABEL_23:
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
        goto LABEL_27;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_27:
    v26 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v21;
}


bool __fastcall OpeningMovieMaster__IsPlayedOpeningMovie(
        OpeningMovieEntity_o *openingMovieEnt,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TitleRootComponent_c *v6; // x0
  System_String_o *String_71081024; // x20
  Il2CppObject *IsNullOrEmpty; // x0
  const MethodInfo *v9; // x1
  System_String_array *v10; // x20
  const MethodInfo *v11; // x1
  int32_t GroupId; // w21
  __int64 v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  unsigned __int64 v15; // x23
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C22398 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_OpeningMovieMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&TitleRootComponent_TypeInfo, v5);
    byte_4C22398 = 1;
  }
  entity = 0LL;
  if ( !openingMovieEnt )
    return 0;
  v6 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v6 = TitleRootComponent_TypeInfo;
  }
  String_71081024 = UnityEngine_PlayerPrefs__GetString_71081024(v6->static_fields->SAVE_KEY_PLAYED_MOVIE, 0LL);
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(String_71081024, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  if ( !String_71081024 )
    goto LABEL_24;
  v10 = System_String__Split(String_71081024, 0x2Cu, 0, 0LL);
  GroupId = OpeningMovieEntity__GetGroupId(openingMovieEnt, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !v10 )
LABEL_24:
    sub_1C3B9C0(IsNullOrEmpty, v9);
  v13 = *(_QWORD *)&v10->max_length;
  if ( (int)v13 < 1 )
    return 0;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)v13 )
      sub_1C3B9C8(IsNullOrEmpty, v9);
    IsNullOrEmpty = (Il2CppObject *)System_Int32__Parse(v10->m_Items[v15], 0LL);
    if ( openingMovieEnt->fields.id == (_DWORD)IsNullOrEmpty )
      return 1;
    if ( GroupId )
    {
      if ( !v14 )
        goto LABEL_24;
      IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v14,
                                        &entity,
                                        (int32_t)IsNullOrEmpty,
                                        (const MethodInfo_329AE94 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        IsNullOrEmpty = entity;
        if ( !entity )
          goto LABEL_24;
        IsNullOrEmpty = (Il2CppObject *)OpeningMovieEntity__GetGroupId((OpeningMovieEntity_o *)entity, v9);
        if ( (_DWORD)IsNullOrEmpty == GroupId )
          return 1;
      }
    }
    LODWORD(v13) = v10->max_length;
    if ( (__int64)++v15 >= (int)v13 )
      return 0;
  }
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
  System_String_o *String_71081024; // x0
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

  if ( (byte_4C22397 & 1) == 0 )
  {
    sub_1C3B764(&TitleRootComponent_TypeInfo, movieFileName);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v5);
    byte_4C22397 = 1;
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
  String_71081024 = UnityEngine_PlayerPrefs__GetString_71081024(v8->static_fields->SAVE_KEY_PLAYED_MOVIE, 0LL);
  if ( !String_71081024 )
    goto LABEL_23;
  v11 = String_71081024;
  if ( String_71081024->fields._stringLength < 1 )
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
  String_71081024 = (System_String_o *)System_String__Split(String_71081024, 0x2Cu, 0, 0LL);
  if ( !String_71081024 )
LABEL_23:
    sub_1C3B9C0(String_71081024, v10);
  klass = String_71081024[1].klass;
  v13 = String_71081024;
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
    v20 = System_String__Concat_63379872(v11, (System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, v19, 0LL);
    v21 = v18;
LABEL_21:
    UnityEngine_PlayerPrefs__SetString(v21, v20, 0LL);
    return;
  }
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)klass )
      sub_1C3B9C8(String_71081024, v10);
    id = p_fields->id;
    String_71081024 = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v13[1].monitor + v15), 0LL);
    if ( id == (_DWORD)String_71081024 )
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

  if ( (byte_4C22399 & 1) == 0 )
  {
    sub_1C3B764(&OpeningMovieMaster___c_TypeInfo, v1);
    byte_4C22399 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  OpeningMovieMaster___c_TypeInfo->static_fields->__9 = (struct OpeningMovieMaster___c_o *)v2;
  sub_1C3B708(
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(this, a);
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