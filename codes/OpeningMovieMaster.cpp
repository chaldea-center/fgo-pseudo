void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B024A4 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__, method);
    byte_4B024A4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    317,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        int32_t timing,
        System_String_o *afterTransitionParam,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x19
  __int64 v25; // x1
  void *list; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  OpeningMovieEntity_o *v37; // x0
  const MethodInfo *v38; // x1
  OpeningMovieEntity_o *v39; // x25
  int32_t TargetTiming; // w0
  BalanceConfig_c *v41; // x0
  const MethodInfo *v42; // x3
  _BOOL8 IsEnable; // x0
  const MethodInfo *v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_String_o *TransitionParam; // x0
  _BOOL8 v48; // x0
  __int64 v49; // x1
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  System_Comparison_T__o *v58; // x20
  Il2CppObject *v59; // x21
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w1
  struct OpeningMovieMaster___c_StaticFields *v63; // x0
  CGThumbnailListItem_o *p__9__2_0; // x0
  Il2CppObject *v65; // x21
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4B0249C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_IndexOf_int___, nowTime);
    sub_1BC3008(&BalanceConfig_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__, v11);
    sub_1BC3008(&System_Comparison_OpeningMovieEntity__TypeInfo, v12);
    sub_1BC3008(&System_IDisposable_TypeInfo, v13);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, v14);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v19);
    sub_1BC3008(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v20);
    sub_1BC3008(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, v21);
    sub_1BC3008(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, v22);
    sub_1BC3008(&OpeningMovieMaster___c_TypeInfo, v23);
    byte_4B0249C = 1;
  }
  v24 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_62;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v27);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_16;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_16:
      v36 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0LL);
    }
    v37 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                    Enumerator,
                                    *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( !v37 )
      sub_1BC3264(0LL, v38);
    TargetTiming = OpeningMovieEntity__GetTargetTiming(v37, v38);
    if ( !TargetTiming || TargetTiming == timing )
    {
      v41 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v41 = BalanceConfig_TypeInfo;
      }
      if ( System_Array__IndexOf_int_(
             v41->static_fields->InvalidOpeningMovieIds,
             v39->fields.id,
             (const MethodInfo_31002A8 *)Method_System_Array_IndexOf_int___) == -1 )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v39, nowTime, 0, v42);
        if ( IsEnable )
        {
          if ( (timing & 0xFFFFFFFE) == 4 )
          {
            TransitionParam = OpeningMovieEntity__GetTransitionParam(v39, v44);
            v48 = System_String__op_Equality(TransitionParam, afterTransitionParam, 0LL);
            if ( v48 )
            {
              if ( !v24 )
                sub_1BC3264(v48, v49);
              items = v24->fields._items;
              v51 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v24->fields._version;
              if ( !items )
                sub_1BC3264(v48, v49);
              size = v24->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_30;
LABEL_34:
              System_Collections_Generic_List_object___AddWithResize(
                v24,
                (Il2CppObject *)v39,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
          }
          else
          {
            if ( !v24 )
              sub_1BC3264(IsEnable, v44);
            items = v24->fields._items;
            v51 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
            ++v24->fields._version;
            if ( !items )
              sub_1BC3264(IsEnable, v44);
            size = v24->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_34;
LABEL_30:
            v53 = &items->obj.klass + size;
            v24->fields._size = size + 1;
            v53[4] = (Il2CppClass *)v39;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v39, v45, v46);
          }
        }
      }
    }
  }
  v54 = Enumerator->klass;
  v55 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_40;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_40:
    v57 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(
                   Enumerator,
                   *(_QWORD *)(v57 + 8));
  if ( !sortType )
  {
    list = OpeningMovieMaster___c_TypeInfo;
    if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v58 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
    if ( !v58 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      v65 = (Il2CppObject *)**((_QWORD **)list + 23);
      v58 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_OpeningMovieEntity__TypeInfo);
      System_Comparison_object____ctor(v58, v65, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, 0LL);
      v62 = (int)v58;
      static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
      static_fields->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)v58;
      p__9__2_0 = (CGThumbnailListItem_o *)&static_fields->__9__2_0;
LABEL_56:
      sub_1BC2FAC(p__9__2_0, v62, v60, v61);
    }
LABEL_57:
    if ( v24 )
    {
      System_Collections_Generic_List_object___Sort_57288964(
        v24,
        v58,
        (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v24,
                                           (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_62:
    sub_1BC3264(list, v25);
  }
  if ( sortType == 1 )
  {
    list = OpeningMovieMaster___c_TypeInfo;
    if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v58 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
    if ( !v58 )
    {
      if ( !*((_DWORD *)list + 56) )
      {
        j_il2cpp_runtime_class_init_0(list);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      v59 = (Il2CppObject *)**((_QWORD **)list + 23);
      v58 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_OpeningMovieEntity__TypeInfo);
      System_Comparison_object____ctor(v58, v59, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, 0LL);
      v62 = (int)v58;
      v63 = OpeningMovieMaster___c_TypeInfo->static_fields;
      v63->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)v58;
      p__9__2_0 = (CGThumbnailListItem_o *)&v63->__9__2_1;
      goto LABEL_56;
    }
    goto LABEL_57;
  }
  if ( !v24 )
    goto LABEL_62;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v24,
                                       (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  OpeningMovieEntity_o *v39; // x25
  _BOOL8 IsEnable; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int v44; // w8
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  System_Comparison_T__o *v53; // x0
  __int64 *v54; // x8
  System_Comparison_T__o *v55; // x19

  if ( (byte_4B0249E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__, *(_QWORD *)&type);
    sub_1BC3008(&System_Comparison_OpeningMovieEntity__TypeInfo, v11);
    sub_1BC3008(&System_IDisposable_TypeInfo, v12);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, v13);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v18);
    sub_1BC3008(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v19);
    sub_1BC3008(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__, v20);
    sub_1BC3008(&Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__, v21);
    sub_1BC3008(&OpeningMovieMaster___c__DisplayClass4_0_TypeInfo, v22);
    byte_4B0249E = 1;
  }
  v23 = sub_1BC3254(OpeningMovieMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_50;
  *(_DWORD *)(v23 + 16) = type;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v27);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v36 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0LL);
    }
    v37 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
                                    Enumerator,
                                    *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( v37 )
    {
      IsEnable = OpeningMovieEntity__IsEnable(v37, nowTime, 1, v38);
      if ( IsEnable )
      {
        v44 = *(_DWORD *)(v23 + 16);
        if ( v44 == v39->fields.materialPosType )
        {
          switch ( v44 )
          {
            case 3:
LABEL_25:
              if ( v39->fields.materialPosValue == value )
              {
                if ( !v26 )
                  sub_1BC3264(IsEnable, v41);
                items = v26->fields._items;
                v46 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
                ++v26->fields._version;
                if ( !items )
                  sub_1BC3264(IsEnable, v41);
                size = v26->fields._size;
                if ( (unsigned int)size < items->max_length )
                  goto LABEL_29;
LABEL_34:
                System_Collections_Generic_List_object___AddWithResize(
                  v26,
                  (Il2CppObject *)v39,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              }
              break;
            case 2:
              if ( !v26 )
                sub_1BC3264(IsEnable, v41);
              items = v26->fields._items;
              v46 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v26->fields._version;
              if ( !items )
                sub_1BC3264(IsEnable, v41);
              size = v26->fields._size;
              if ( (unsigned int)size >= items->max_length )
                goto LABEL_34;
LABEL_29:
              v48 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v48[4] = (Il2CppClass *)v39;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v39, v42, v43);
              break;
            case 1:
              goto LABEL_25;
          }
        }
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_40;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_40:
    v52 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
                                                             Enumerator,
                                                             *(_QWORD *)(v52 + 8));
  if ( !sortType )
  {
    v53 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_OpeningMovieEntity__TypeInfo);
    v54 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
LABEL_46:
    v55 = v53;
    System_Comparison_object____ctor(v53, (Il2CppObject *)v23, *v54, 0LL);
    if ( v26 )
    {
      System_Collections_Generic_List_object___Sort_57288964(
        v26,
        v55,
        (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v26,
                                           (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_50:
    sub_1BC3264(list, v25);
  }
  if ( sortType == 1 )
  {
    v53 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_OpeningMovieEntity__TypeInfo);
    v54 = &Method_OpeningMovieMaster___c__DisplayClass4_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
    goto LABEL_46;
  }
  if ( !v26 )
    goto LABEL_50;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v26,
                                       (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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

  if ( (byte_4B0249D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__, movieFileName);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4B0249D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v9);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v18 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v21 = (OpeningMovieEntity_o *)v19;
    if ( !v19 )
      sub_1BC3264(0LL, v20);
    v22 = *(System_String_o **)(v19 + 32);
    if ( !v22 )
      sub_1BC3264(0LL, v20);
    if ( System_String__Equals_62383952(v22, movieFileName, 0LL) )
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
    v26 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v21;
}


bool __fastcall OpeningMovieMaster__IsEndedGrandOpeningMovie(
        OpeningMovieEntity_o *openingMovieEnt,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B024A3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, nowTime);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    byte_4B024A3 = 1;
  }
  entity = 0LL;
  if ( !openingMovieEnt
    || !OpeningMovieEntity__IsGrand(openingMovieEnt, (const MethodInfo *)nowTime)
    || OpeningMovieMaster__IsPlayedOpeningMovie_41339680(openingMovieEnt, v7) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1BC3264(Master_object, v9);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          openingMovieEnt->fields.eventId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return EventEntity__IsEventEnded((EventEntity_o *)entity, nowTime, 0LL);
}


bool __fastcall OpeningMovieMaster__IsPlayedOpeningMovie(int32_t id, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B024A0 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_OpeningMovieMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__, v4);
    byte_4B024A0 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v6);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           id,
           (const MethodInfo_32AF0BC *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__)
      && OpeningMovieMaster__IsPlayedOpeningMovie_41339680((OpeningMovieEntity_o *)entity, v7);
}


bool __fastcall OpeningMovieMaster__IsPlayedOpeningMovie_41339680(
        OpeningMovieEntity_o *openingMovieEnt,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TitleRootComponent_c *v6; // x0
  System_String_o *String_69993112; // x20
  Il2CppObject *IsNullOrEmpty; // x0
  const MethodInfo *v9; // x1
  System_String_array *v10; // x20
  const MethodInfo *v11; // x1
  int32_t GroupId; // w21
  __int64 v13; // x2
  __int64 v14; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  unsigned __int64 v16; // x23
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B024A1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_OpeningMovieMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__, v4);
    sub_1BC3008(&TitleRootComponent_TypeInfo, v5);
    byte_4B024A1 = 1;
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
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112(v6->static_fields->SAVE_KEY_PLAYED_MOVIE, 0LL);
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(String_69993112, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  if ( !String_69993112 )
    goto LABEL_24;
  v10 = System_String__Split(String_69993112, 0x2Cu, 0, 0LL);
  GroupId = OpeningMovieEntity__GetGroupId(openingMovieEnt, v11);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !v10 )
LABEL_24:
    sub_1BC3264(IsNullOrEmpty, v9);
  v14 = *(_QWORD *)&v10->max_length;
  if ( (int)v14 < 1 )
    return 0;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
  v16 = 0LL;
  while ( 1 )
  {
    if ( v16 >= (unsigned int)v14 )
      sub_1BC326C(IsNullOrEmpty, v9, v13);
    IsNullOrEmpty = (Il2CppObject *)System_Int32__Parse(v10->m_Items[v16], 0LL);
    if ( openingMovieEnt->fields.id == (_DWORD)IsNullOrEmpty )
      return 1;
    if ( GroupId )
    {
      if ( !v15 )
        goto LABEL_24;
      IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v15,
                                        &entity,
                                        (int32_t)IsNullOrEmpty,
                                        (const MethodInfo_32AF0BC *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
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
    LODWORD(v14) = v10->max_length;
    if ( (__int64)++v16 >= (int)v14 )
      return 0;
  }
}


bool __fastcall OpeningMovieMaster__IsValidGrandOpeningMovie(
        OpeningMovieEntity_o *openingMovieEnt,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B024A2 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4);
    byte_4B024A2 = 1;
  }
  entity = 0LL;
  if ( !openingMovieEnt
    || !OpeningMovieEntity__IsGrand(openingMovieEnt, method)
    || OpeningMovieMaster__IsPlayedOpeningMovie_41339680(openingMovieEnt, v5) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_1BC3264(Master_object, v7);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          openingMovieEnt->fields.eventId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_14;
  return EventEntity__IsEventPeriod((EventEntity_o *)entity, 0LL, 0LL);
}


void __fastcall OpeningMovieMaster__SavePlayedOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  OpeningMovieEntity_o *OpeningMovie; // x0
  const MethodInfo *v4; // x1

  OpeningMovie = OpeningMovieMaster__GetOpeningMovie(this, movieFileName, method);
  OpeningMovieMaster__SavePlayedOpeningMovie_41339076(OpeningMovie, v4);
}


void __fastcall OpeningMovieMaster__SavePlayedOpeningMovie_41339076(
        OpeningMovieEntity_o *openingEntity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleRootComponent_c *v4; // x0
  System_String_o *String_69993112; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  __int64 v8; // x2
  System_String_c *klass; // x8
  System_String_o *v10; // x21
  OpeningMovieEntity_Fields *p_fields; // x20
  unsigned __int64 v12; // x23
  int32_t id; // w25
  TitleRootComponent_c *v14; // x0
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x1
  System_String_o *v18; // x0
  TitleRootComponent_c *v19; // x0
  System_String_o *SAVE_KEY_PLAYED_MOVIE; // x19

  if ( (byte_4B0249F & 1) == 0 )
  {
    sub_1BC3008(&TitleRootComponent_TypeInfo, method);
    sub_1BC3008(&StringLiteral_806/*","*/, v3);
    byte_4B0249F = 1;
  }
  if ( !openingEntity )
    return;
  v4 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
    v4 = TitleRootComponent_TypeInfo;
  }
  String_69993112 = UnityEngine_PlayerPrefs__GetString_69993112(v4->static_fields->SAVE_KEY_PLAYED_MOVIE, 0LL);
  if ( !String_69993112 )
    goto LABEL_23;
  v7 = String_69993112;
  if ( String_69993112->fields._stringLength < 1 )
  {
    v19 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v19 = TitleRootComponent_TypeInfo;
    }
    SAVE_KEY_PLAYED_MOVIE = v19->static_fields->SAVE_KEY_PLAYED_MOVIE;
    v17 = System_Int32__ToString((int)openingEntity + 16, 0LL);
    v18 = SAVE_KEY_PLAYED_MOVIE;
    goto LABEL_21;
  }
  String_69993112 = (System_String_o *)System_String__Split(String_69993112, 0x2Cu, 0, 0LL);
  if ( !String_69993112 )
LABEL_23:
    sub_1BC3264(String_69993112, v6);
  klass = String_69993112[1].klass;
  v10 = String_69993112;
  p_fields = &openingEntity->fields;
  if ( (int)klass < 1 )
  {
LABEL_14:
    v14 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo);
      v14 = TitleRootComponent_TypeInfo;
    }
    v15 = v14->static_fields->SAVE_KEY_PLAYED_MOVIE;
    v16 = System_Int32__ToString((int32_t)p_fields, 0LL);
    v17 = System_String__Concat_62386896(v7, (System_String_o *)StringLiteral_806/*","*/, v16, 0LL);
    v18 = v15;
LABEL_21:
    UnityEngine_PlayerPrefs__SetString(v18, v17, 0LL);
    return;
  }
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)klass )
      sub_1BC326C(String_69993112, v6, v8);
    id = p_fields->id;
    String_69993112 = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v10[1].monitor + v12), 0LL);
    if ( id == (_DWORD)String_69993112 )
      break;
    LODWORD(klass) = v10[1].klass;
    if ( (__int64)++v12 >= (int)klass )
      goto LABEL_14;
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B024A5 & 1) == 0 )
  {
    sub_1BC3008(&OpeningMovieMaster___c_TypeInfo, v1);
    byte_4B024A5 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  OpeningMovieMaster___c_TypeInfo->static_fields->__9 = (struct OpeningMovieMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)OpeningMovieMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, a);
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
    sub_1BC3264(this, a);
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
    sub_1BC3264(this, a);
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
    sub_1BC3264(this, a);
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