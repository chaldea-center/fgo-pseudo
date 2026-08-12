void OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970E48 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
    byte_5970E48 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    319,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
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
  __int64 list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *v16; // x25
  bool v17; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 v21; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  OpeningMovieEntity_o *v26; // x0
  const MethodInfo *v27; // x1
  OpeningMovieEntity_o *v28; // x24
  int32_t TargetTiming; // w0
  __int64 v30; // x1
  BalanceConfig_c *v31; // x0
  const MethodInfo *v32; // x3
  _BOOL8 IsEnable; // x0
  const MethodInfo *v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *TransitionParam; // x0
  _BOOL8 v42; // x0
  __int64 v43; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  System_Collections_Generic_IEnumerator_T__c *v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  struct OpeningMovieMaster___c_StaticFields *v52; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v54; // x21
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w1
  struct OpeningMovieMaster___c_StaticFields *v62; // x0
  MissionNaviTransitionBoardItem_o *p__9__2_0; // x0
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x8
  Il2CppObject *v65; // x21
  struct OpeningMovieMaster___c_StaticFields *v66; // x0
  System_Collections_Generic_IEnumerator_T__o *v70; // [xsp+28h] [xbp-68h]

  if ( (byte_5970E3D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_2213A60(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__);
    sub_2213A60(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__);
    sub_2213A60(&OpeningMovieMaster___c_TypeInfo);
    byte_5970E3D = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_69;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  v70 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v15);
  v16 = Enumerator;
  v17 = !timingOnly;
  while ( 1 )
  {
    klass = v16->klass;
    v19 = *(unsigned __int16 *)&v16->klass->_2.rank;
    if ( *(_WORD *)&v16->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_10;
      }
      v21 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v21 = sub_224BC3C(v16, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
             v16,
             *(_QWORD *)(v21 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v70 )
      sub_2213CDC(list, v12);
    v22 = v70->klass;
    v23 = *(unsigned __int16 *)&v70->klass->_2.rank;
    if ( *(_WORD *)&v70->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_18;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_18:
      v25 = sub_224BC3C(v70, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0);
    }
    v26 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                    v70,
                                    *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26 )
      sub_2213CDC(0, v27);
    TargetTiming = OpeningMovieEntity__GetTargetTiming(v26, v27);
    if ( v17 && TargetTiming == 0 || TargetTiming == timing )
    {
      v31 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v30);
        v31 = BalanceConfig_TypeInfo;
      }
      if ( System_Array__IndexOf_int_(
             v31->static_fields->InvalidOpeningMovieIds,
             v28->fields.id,
             (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___) == -1 )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v28, nowTime, 0, v32);
        if ( IsEnable )
        {
          if ( (timing & 0xFFFFFFFE) == 4 )
          {
            TransitionParam = OpeningMovieEntity__GetTransitionParam(v28, v34);
            v42 = System_String__op_Equality(TransitionParam, afterTransitionParam, 0);
            if ( !v42 )
              goto LABEL_37;
            if ( !v11
              || (items = v11->fields._items,
                  v45 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__,
                  ++v11->fields._version,
                  !items) )
            {
              sub_2213CDC(v42, v43);
            }
            size = v11->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
            {
LABEL_32:
              v47 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v28;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v47 + 4), (int32_t)v28, v35, v36, v37, v38, v39, v40);
              goto LABEL_37;
            }
          }
          else
          {
            if ( !v11
              || (items = v11->fields._items,
                  v45 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__,
                  ++v11->fields._version,
                  !items) )
            {
              sub_2213CDC(IsEnable, v34);
            }
            size = v11->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
              goto LABEL_32;
          }
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v28,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
      }
    }
LABEL_37:
    v16 = v70;
  }
  if ( v70 )
  {
    v48 = v70->klass;
    v49 = *(unsigned __int16 *)&v70->klass->_2.rank;
    if ( *(_WORD *)&v70->klass->_2.rank )
    {
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_44;
      }
      v51 = (__int64)&v48->vtable[*v50];
    }
    else
    {
LABEL_44:
      v51 = sub_224BC3C(v70, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v51)(
             v70,
             *(_QWORD *)(v51 + 8));
  }
  if ( !sortType )
  {
    list = (__int64)OpeningMovieMaster___c_TypeInfo;
    if ( !*(&OpeningMovieMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo, v12);
      list = (__int64)OpeningMovieMaster___c_TypeInfo;
    }
    static_fields = *(struct OpeningMovieMaster___c_StaticFields **)(list + 184);
    _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !*(_DWORD *)(list + 228) )
      {
        j_il2cpp_runtime_class_init_0(list, v12);
        static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_OpeningMovieEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v65, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_0__, 0);
      v61 = (int)_9__2_0;
      v66 = OpeningMovieMaster___c_TypeInfo->static_fields;
      v66->__9__2_0 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
      p__9__2_0 = (MissionNaviTransitionBoardItem_o *)&v66->__9__2_0;
LABEL_61:
      sub_2213A04(p__9__2_0, v61, v55, v56, v57, v58, v59, v60);
    }
LABEL_62:
    if ( v11 )
    {
      System_Collections_Generic_List_object___Sort_71849708(
        v11,
        _9__2_0,
        (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v11,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_69:
    sub_2213CDC(list, v12);
  }
  if ( sortType == 1 )
  {
    list = (__int64)OpeningMovieMaster___c_TypeInfo;
    if ( !*(&OpeningMovieMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo, v12);
      list = (__int64)OpeningMovieMaster___c_TypeInfo;
    }
    v52 = *(struct OpeningMovieMaster___c_StaticFields **)(list + 184);
    _9__2_0 = (System_Comparison_T__o *)v52->__9__2_1;
    if ( !_9__2_0 )
    {
      if ( !*(_DWORD *)(list + 228) )
      {
        j_il2cpp_runtime_class_init_0(list, v12);
        v52 = OpeningMovieMaster___c_TypeInfo->static_fields;
      }
      v54 = (Il2CppObject *)v52->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_OpeningMovieEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v54, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__2_1__, 0);
      v61 = (int)_9__2_0;
      v62 = OpeningMovieMaster___c_TypeInfo->static_fields;
      v62->__9__2_1 = (struct System_Comparison_OpeningMovieEntity__o *)_9__2_0;
      p__9__2_0 = (MissionNaviTransitionBoardItem_o *)&v62->__9__2_1;
      goto LABEL_61;
    }
    goto LABEL_62;
  }
  if ( !v11 )
    goto LABEL_69;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v11,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  __int64 list; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 v21; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  OpeningMovieEntity_o *v26; // x0
  const MethodInfo *v27; // x3
  OpeningMovieEntity_o *v28; // x24
  _BOOL8 IsEnable; // x0
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int v37; // w8
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  System_Comparison_T__o *v46; // x0
  intptr_t *v47; // x8
  System_Comparison_T__o *v48; // x19
  System_Collections_Generic_IEnumerator_T__o *v50; // [xsp+18h] [xbp-58h]

  if ( (byte_5970E40 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
    sub_2213A60(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__);
    sub_2213A60(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__);
    sub_2213A60(&OpeningMovieMaster___c__DisplayClass5_0_TypeInfo);
    byte_5970E40 = 1;
  }
  v11 = sub_2213CCC(OpeningMovieMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_57;
  *(_DWORD *)(v11 + 16) = type;
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_OpeningMovieEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (__int64)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  v50 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v16);
  for ( i = Enumerator; ; i = v50 )
  {
    klass = i->klass;
    v19 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_11;
      }
      v21 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v21 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
             i,
             *(_QWORD *)(v21 + 8));
    if ( (list & 1) == 0 )
      break;
    if ( !v50 )
      sub_2213CDC(list, v13);
    v22 = v50->klass;
    v23 = *(unsigned __int16 *)&v50->klass->_2.rank;
    if ( *(_WORD *)&v50->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v24 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_19;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_19:
      v25 = sub_224BC3C(v50, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0);
    }
    v26 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                    v50,
                                    *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( v26 )
    {
      IsEnable = OpeningMovieEntity__IsEnable(v26, nowTime, 1, v27);
      if ( IsEnable )
      {
        v37 = *(_DWORD *)(v11 + 16);
        if ( v37 == v28->fields.materialPosType )
        {
          if ( v37 != 3 )
          {
            if ( v37 == 2 )
            {
              if ( !v14
                || (items = v14->fields._items,
                    v39 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__,
                    ++v14->fields._version,
                    !items) )
              {
                sub_2213CDC(IsEnable, v30);
              }
              size = v14->fields._size;
              if ( (unsigned int)size < LODWORD(items->max_length) )
              {
LABEL_31:
                v41 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v41[4] = (Il2CppClass *)v28;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v28, v31, v32, v33, v34, v35, v36);
                continue;
              }
              goto LABEL_36;
            }
            if ( v37 != 1 )
              continue;
          }
          if ( v28->fields.materialPosValue == value )
          {
            if ( !v14
              || (items = v14->fields._items,
                  v39 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__,
                  ++v14->fields._version,
                  !items) )
            {
              sub_2213CDC(IsEnable, v30);
            }
            size = v14->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
              goto LABEL_31;
LABEL_36:
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)v28,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            continue;
          }
        }
      }
    }
  }
  if ( v50 )
  {
    v42 = v50->klass;
    v43 = *(unsigned __int16 *)&v50->klass->_2.rank;
    if ( *(_WORD *)&v50->klass->_2.rank )
    {
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_44;
      }
      v45 = (__int64)&v42->vtable[*v44];
    }
    else
    {
LABEL_44:
      v45 = sub_224BC3C(v50, System_IDisposable_TypeInfo, 0);
    }
    list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
             v50,
             *(_QWORD *)(v45 + 8));
  }
  if ( !sortType )
  {
    v46 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_OpeningMovieEntity__TypeInfo);
    v47 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
LABEL_51:
    v48 = v46;
    System_Comparison_object____ctor(v46, (Il2CppObject *)v11, *v47, 0);
    if ( v14 )
    {
      System_Collections_Generic_List_object___Sort_71849708(
        v14,
        v48,
        (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v14,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_57:
    sub_2213CDC(list, v13);
  }
  if ( sortType == 1 )
  {
    v46 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_OpeningMovieEntity__TypeInfo);
    v47 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
    goto LABEL_51;
  }
  if ( !v14 )
    goto LABEL_57;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v14,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


System_Collections_Generic_List_OpeningMovieEntity__o *OpeningMovieMaster__GetGrandOpeningMovieList(
        OpeningMovieMaster_o *this,
        const MethodInfo *method)
{
  OpeningMovieMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__4_0; // x20
  Il2CppObject *v7; // x21
  struct OpeningMovieMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_5970E3F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_OpeningMovieEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_OpeningMovieEntity___);
    sub_2213A60(&System_Func_OpeningMovieEntity__bool__TypeInfo);
    sub_2213A60(&Method_OpeningMovieMaster___c__GetGrandOpeningMovieList_b__4_0__);
    sub_2213A60(&OpeningMovieMaster___c_TypeInfo);
    byte_5970E3F = 1;
  }
  v3 = OpeningMovieMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !*(&OpeningMovieMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo, method);
    v3 = OpeningMovieMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__4_0 = (System_Func_object__bool__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_OpeningMovieEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__4_0, v7, Method_OpeningMovieMaster___c__GetGrandOpeningMovieList_b__4_0__, 0);
    v8 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v8->__9__4_0 = (struct System_Func_OpeningMovieEntity__bool__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__4_0, (int32_t)_9__4_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)_9__4_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_OpeningMovieEntity___);
  return (System_Collections_Generic_List_OpeningMovieEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v15,
                                                                    (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_OpeningMovieEntity___);
}


OpeningMovieEntity_o *OpeningMovieMaster__GetOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  OpeningMovieEntity_o *v18; // x20
  System_String_o *v19; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_T__o *v25; // [xsp+18h] [xbp-38h]

  if ( (byte_5970E3E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970E3E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_OpeningMovieEntity__GetEnumerator__);
  v25 = Enumerator;
  while ( 1 )
  {
    if ( !v25 )
      sub_2213CDC(Enumerator, v7);
    klass = v25->klass;
    v9 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_224BC3C(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            v25,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = v25->klass;
    v13 = *(unsigned __int16 *)&v25->klass->_2.rank;
    if ( *(_WORD *)&v25->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_OpeningMovieEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_17:
      v15 = sub_224BC3C(v25, System_Collections_Generic_IEnumerator_OpeningMovieEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v25,
            *(_QWORD *)(v15 + 8));
    v18 = (OpeningMovieEntity_o *)v16;
    if ( !v16 )
      sub_2213CDC(0, v17);
    v19 = *(System_String_o **)(v16 + 32);
    if ( !v19 )
      sub_2213CDC(0, v17);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)System_String__Equals_75686512(v19, movieFileName, 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
      goto LABEL_24;
  }
  v18 = 0;
LABEL_24:
  v20 = v25->klass;
  v21 = *(unsigned __int16 *)&v25->klass->_2.rank;
  if ( *(_WORD *)&v25->klass->_2.rank )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_28;
    }
    v23 = (__int64)&v20->vtable[*v22];
  }
  else
  {
LABEL_28:
    v23 = sub_224BC3C(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(v25, *(_QWORD *)(v23 + 8));
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Func_OpeningMovieEntity__bool__c *v16; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v18; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  OpeningMovieMaster___c_c *v20; // x8
  System_Collections_Generic_List_object__o *v21; // x19
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__13_1; // x20
  Il2CppObject *v24; // x21
  struct OpeningMovieMaster___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5970E47 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_OpeningMovieEntity__TypeInfo);
    sub_2213A60(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_OpeningMovieEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_OpeningMovieEntity___);
    sub_2213A60(&System_Func_OpeningMovieEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
    sub_2213A60(&Method_OpeningMovieMaster___c__GetPreCheckEffectMovieList_b__13_1__);
    sub_2213A60(&Method_OpeningMovieMaster___c__DisplayClass13_0__GetPreCheckEffectMovieList_b__0__);
    sub_2213A60(&OpeningMovieMaster___c__DisplayClass13_0_TypeInfo);
    sub_2213A60(&OpeningMovieMaster___c_TypeInfo);
    byte_5970E47 = 1;
  }
  v7 = sub_2213CCC(OpeningMovieMaster___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v16 = System_Func_OpeningMovieEntity__bool__TypeInfo;
  *(_DWORD *)(v7 + 24) = timing;
  list = this->fields.list;
  *(_QWORD *)(v7 + 32) = nowTime;
  v18 = (System_Func_object__bool__o *)sub_2213CCC(v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_OpeningMovieMaster___c__DisplayClass13_0__GetPreCheckEffectMovieList_b__0__,
    0);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_OpeningMovieEntity___);
  v8 = System_Linq_Enumerable__ToList_object_(
         v19,
         (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_OpeningMovieEntity___);
  v20 = OpeningMovieMaster___c_TypeInfo;
  v21 = (System_Collections_Generic_List_object__o *)v8;
  if ( !*(&OpeningMovieMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo, v9);
    v20 = OpeningMovieMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__13_1 = (System_Comparison_T__o *)static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v9);
      static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__13_1 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_OpeningMovieEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__13_1,
      v24,
      Method_OpeningMovieMaster___c__GetPreCheckEffectMovieList_b__13_1__,
      0);
    v25 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v25->__9__13_1 = (struct System_Comparison_OpeningMovieEntity__o *)_9__13_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__13_1, (int32_t)_9__13_1, v26, v27, v28, v29, v30, v31);
  }
  if ( !v21 )
LABEL_12:
    sub_2213CDC(v8, v9);
  System_Collections_Generic_List_object___Sort_71849708(
    v21,
    _9__13_1,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (System_Collections_Generic_List_OpeningMovieEntity__o *)v21;
}


bool OpeningMovieMaster__IsEndedGrandOpeningMovie(
        OpeningMovieEntity_o *openingMovieEnt,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970E46 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_5970E46 = 1;
  }
  entity = 0;
  if ( !openingMovieEnt
    || !OpeningMovieEntity__IsGrand(openingMovieEnt, (const MethodInfo *)nowTime)
    || OpeningMovieMaster__IsPlayedOpeningMovie_49461968(openingMovieEnt, 1, v5) )
  {
    return 0;
  }
  if ( OpeningMovieEntity__GetTargetTiming(openingMovieEnt, v6) == 6 )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_16:
    sub_2213CDC(Master_object, v11);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         openingMovieEnt->fields.eventId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    Master_object = entity;
    if ( entity )
      return EventEntity__IsEventEnded((EventEntity_o *)entity, nowTime, 0);
    goto LABEL_16;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool OpeningMovieMaster__IsPlayedOpeningMovie(int32_t id, bool isParentIdCheckValid, const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970E43 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    byte_5970E43 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isParentIdCheckValid);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v7);
  return DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           id,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__)
      && OpeningMovieMaster__IsPlayedOpeningMovie_49461968((OpeningMovieEntity_o *)entity, isParentIdCheckValid, v8);
}


// local variable allocation has failed, the output may be wrong!
bool OpeningMovieMaster__IsPlayedOpeningMovie_49461968(
        OpeningMovieEntity_o *openingMovieEnt,
        bool isParentIdCheckValid,
        const MethodInfo *method)
{
  TitleRootComponent_c *v5; // x0
  System_String_o *String_83398240; // x21
  Il2CppObject *IsNullOrEmpty; // x0
  const MethodInfo *v8; // x1
  System_String_array *v9; // x21
  const MethodInfo *v10; // x1
  int32_t GroupId; // w22
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  int32_t GrandPvParentId; // w23
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  unsigned __int64 v17; // x25
  bool v18; // w20
  int32_t v19; // w0
  int32_t v20; // w2
  bool v21; // w8
  bool v22; // zf
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5970E44 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    sub_2213A60(&TitleRootComponent_TypeInfo);
    byte_5970E44 = 1;
  }
  entity = 0;
  if ( !openingMovieEnt )
    goto LABEL_25;
  v5 = TitleRootComponent_TypeInfo;
  if ( !*(&TitleRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo, isParentIdCheckValid);
    v5 = TitleRootComponent_TypeInfo;
  }
  String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240(v5->static_fields->SAVE_KEY_PLAYED_MOVIE, 0);
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(String_83398240, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_25;
  if ( !String_83398240 )
    goto LABEL_28;
  v9 = System_String__Split(String_83398240, 0x2Cu, 0, 0);
  GroupId = OpeningMovieEntity__GetGroupId(openingMovieEnt, v10);
  GrandPvParentId = OpeningMovieEntity__GetGrandPvParentId(openingMovieEnt, v12);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
  if ( !v9 )
LABEL_28:
    sub_2213CDC(IsNullOrEmpty, v8);
  max_length = v9->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_25:
    LOBYTE(IsNullOrEmpty) = 0;
  }
  else
  {
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)IsNullOrEmpty;
    v17 = 0;
    v18 = isParentIdCheckValid && GrandPvParentId != 0;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)max_length )
        sub_2213CE4(IsNullOrEmpty);
      v19 = System_Int32__Parse(v9->m_Items[v17], 0);
      v20 = v19;
      v21 = v19 == GrandPvParentId && v18;
      v22 = openingMovieEnt->fields.id == v19;
      IsNullOrEmpty = (Il2CppObject *)(&dword_0 + 1);
      if ( v22 || v21 )
        break;
      if ( GroupId )
      {
        if ( !v16 )
          goto LABEL_28;
        IsNullOrEmpty = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                          v16,
                                          &entity,
                                          v20,
                                          (const MethodInfo_3F10B80 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          IsNullOrEmpty = entity;
          if ( !entity )
            goto LABEL_28;
          IsNullOrEmpty = (Il2CppObject *)OpeningMovieEntity__GetGroupId((OpeningMovieEntity_o *)entity, v8);
          if ( (_DWORD)IsNullOrEmpty == GroupId )
          {
            LOBYTE(IsNullOrEmpty) = 1;
            return (char)IsNullOrEmpty;
          }
        }
      }
      LODWORD(max_length) = v9->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_25;
    }
  }
  return (char)IsNullOrEmpty;
}


bool OpeningMovieMaster__IsValidGrandOpeningMovie(OpeningMovieEntity_o *openingMovieEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5970E45 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_5970E45 = 1;
  }
  entity = 0;
  if ( !openingMovieEnt
    || !OpeningMovieEntity__IsGrand(openingMovieEnt, method)
    || OpeningMovieMaster__IsPlayedOpeningMovie_49461968(openingMovieEnt, 1, v3) )
  {
    return 0;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
LABEL_14:
    sub_2213CDC(Master_object, v6);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          openingMovieEnt->fields.eventId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
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

  if ( openingMovieEntity )
    return OpeningMovieEntity__GetTargetTiming(openingMovieEntity, (const MethodInfo *)openingMovieEntity) == timing
        && OpeningMovieEntity__IsValidPeriod(openingMovieEntity, nowTime, v7)
        && !OpeningMovieMaster__IsPlayedOpeningMovie_49461968(openingMovieEntity, 1, v8);
  else
    return 0;
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

  if ( (byte_5970E42 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_OpeningMovieMaster___c__DisplayClass8_0__RequestPlayedOpeningMovieFlagSet_b__0__);
    sub_2213A60(&OpeningMovieMaster___c__DisplayClass8_0_TypeInfo);
    byte_5970E42 = 1;
  }
  v3 = sub_2213CCC(OpeningMovieMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !openingMovieEntity || (GrandPvParentId = OpeningMovieEntity__GetGrandPvParentId(openingMovieEntity, v5), !v3) )
    sub_2213CDC(GrandPvParentId, v5);
  eventId = openingMovieEntity->fields.eventId;
  *(_DWORD *)(v3 + 16) = GrandPvParentId;
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
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
  OpeningMovieMaster__SavePlayedOpeningMovie_49460664(OpeningMovie, v4);
}


void OpeningMovieMaster__SavePlayedOpeningMovie_49460664(OpeningMovieEntity_o *openingEntity, const MethodInfo *method)
{
  __int64 v3; // x22
  void *IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  _QWORD *v12; // x23
  const MethodInfo *v13; // x1
  OpeningMovieEntity_o *v14; // x0
  __int64 v15; // x1
  int32_t GrandPvParentId; // w8
  TitleRootComponent_c *v17; // x0
  int *v18; // x20
  System_String_o *String_83398240; // x19
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x19
  System_String_o *v23; // x19
  System_String_o *v24; // x0
  TitleRootComponent_c *v25; // x0
  System_String_o *v26; // x1
  System_String_o *SAVE_KEY_PLAYED_MOVIE; // x0
  System_Text_StringBuilder_o *v28; // x21
  System_String_array *v29; // x24
  System_Func_object__bool__o *v30; // x25
  System_String_o *v31; // x0
  System_Func_object__bool__o *v32; // x23
  System_String_o *v33; // x0
  __int64 v34; // x1
  TitleRootComponent_c *v35; // x0
  System_String_o *v36; // x20
  System_String_o *v37; // x0

  if ( (byte_5970E41 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_string___);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&TitleRootComponent_TypeInfo);
    sub_2213A60(&Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__0__);
    sub_2213A60(&Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__1__);
    sub_2213A60(&OpeningMovieMaster___c__DisplayClass7_0_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_5970E41 = 1;
  }
  v3 = sub_2213CCC(OpeningMovieMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_31;
  *(_QWORD *)(v3 + 16) = openingEntity;
  v12 = (_QWORD *)(v3 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)openingEntity, v6, v7, v8, v9, v10, v11);
  v14 = *(OpeningMovieEntity_o **)(v3 + 16);
  if ( v14 )
  {
    GrandPvParentId = OpeningMovieEntity__GetGrandPvParentId(v14, v13);
    v17 = TitleRootComponent_TypeInfo;
    *(_DWORD *)(v3 + 24) = GrandPvParentId;
    v18 = (int *)(v3 + 24);
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v15);
      v17 = TitleRootComponent_TypeInfo;
    }
    String_83398240 = UnityEngine_PlayerPrefs__GetString_83398240(v17->static_fields->SAVE_KEY_PLAYED_MOVIE, 0);
    IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(String_83398240, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( *v12 )
      {
        v20 = System_Int32__ToString((unsigned int)*v12 + 16, 0);
        v22 = v20;
        if ( *v18 >= 1 )
        {
          v23 = System_String__Concat_75651716(v20, (System_String_o *)StringLiteral_869/*","*/, 0);
          v24 = System_Int32__ToString((int)v3 + 24, 0);
          v22 = System_String__Concat_75651716(v23, v24, 0);
        }
        v25 = TitleRootComponent_TypeInfo;
        if ( !*(&TitleRootComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo, v21);
          v25 = TitleRootComponent_TypeInfo;
        }
        v26 = v22;
        SAVE_KEY_PLAYED_MOVIE = v25->static_fields->SAVE_KEY_PLAYED_MOVIE;
LABEL_29:
        UnityEngine_PlayerPrefs__SetString(SAVE_KEY_PLAYED_MOVIE, v26, 0);
        return;
      }
LABEL_31:
      sub_2213CDC(IsNullOrEmpty, v5);
    }
    v28 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v28, 0);
    if ( !String_83398240 )
      goto LABEL_31;
    v29 = System_String__Split(String_83398240, 0x2Cu, 0, 0);
    v30 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v30,
      (Il2CppObject *)v3,
      Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__0__,
      0);
    IsNullOrEmpty = BasicHelper__Find_object_(
                      (System_Object_array *)v29,
                      (System_Func_T__bool__o *)v30,
                      (const MethodInfo_3810A1C *)Method_BasicHelper_Find_string___);
    if ( !IsNullOrEmpty )
    {
      if ( !v28 )
        goto LABEL_31;
      IsNullOrEmpty = System_Text_StringBuilder__Append_75735064(v28, (System_String_o *)StringLiteral_869/*","*/, 0);
      if ( !*v12 )
        goto LABEL_31;
      v31 = System_Int32__ToString((unsigned int)*v12 + 16, 0);
      IsNullOrEmpty = System_Text_StringBuilder__Append_75735064(v28, v31, 0);
    }
    if ( *v18 < 1
      || (v32 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo),
          System_Func_object__bool____ctor(
            v32,
            (Il2CppObject *)v3,
            Method_OpeningMovieMaster___c__DisplayClass7_0__SavePlayedOpeningMovie_b__1__,
            0),
          (IsNullOrEmpty = BasicHelper__Find_object_(
                             (System_Object_array *)v29,
                             (System_Func_T__bool__o *)v32,
                             (const MethodInfo_3810A1C *)Method_BasicHelper_Find_string___)) != 0) )
    {
      if ( !v28 )
        goto LABEL_31;
    }
    else
    {
      if ( !v28 )
        goto LABEL_31;
      System_Text_StringBuilder__Append_75735064(v28, (System_String_o *)StringLiteral_869/*","*/, 0);
      v33 = System_Int32__ToString((int)v3 + 24, 0);
      System_Text_StringBuilder__Append_75735064(v28, v33, 0);
    }
    if ( System_Text_StringBuilder__get_Length(v28, 0) >= 1 )
    {
      v35 = TitleRootComponent_TypeInfo;
      if ( !*(&TitleRootComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo, v34);
        v35 = TitleRootComponent_TypeInfo;
      }
      v36 = v35->static_fields->SAVE_KEY_PLAYED_MOVIE;
      v37 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v28->klass->vtable._3_ToString.methodPtr)(
                                 v28,
                                 v28->klass->vtable._3_ToString.method);
      v26 = System_String__Concat_75651716(String_83398240, v37, 0);
      SAVE_KEY_PLAYED_MOVIE = v36;
      goto LABEL_29;
    }
  }
}


void OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970E49 & 1) == 0 )
  {
    sub_2213A60(&OpeningMovieMaster___c_TypeInfo);
    byte_5970E49 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(OpeningMovieMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  OpeningMovieMaster___c_TypeInfo->static_fields->__9 = (struct OpeningMovieMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)OpeningMovieMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, a);
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
    sub_2213CDC(this, a);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, a);
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
    sub_2213CDC(this, n);
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

  if ( this->fields.type == 2 )
  {
    if ( a && b )
    {
      materialPosValue = a->fields.materialPosValue;
      v5 = b->fields.materialPosValue;
      result = materialPosValue - v5;
      if ( materialPosValue != v5 )
        return result;
      return a->fields.id - b->fields.id;
    }
LABEL_10:
    sub_2213CDC(this, a);
  }
  if ( !a || !b )
    goto LABEL_10;
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
    sub_2213CDC(this, a);
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
    sub_2213CDC(v4, v5);
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
  int32_t parentId; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int32_t monitor; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5970E4A & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_OpeningMovieMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    byte_5970E4A = 1;
  }
  parentId = this->fields.parentId;
  entity = 0;
  if ( parentId >= 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, result);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_OpeningMovieMaster___);
    if ( !Master_object )
      goto LABEL_15;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      &entity,
                                      this->fields.parentId,
                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
      return;
    if ( !entity )
      goto LABEL_15;
    monitor = (int32_t)entity[3].monitor;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
    Master_object = (Il2CppObject *)CondType__IsEventTutorialFlagOn(monitor, 65, 0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( entity )
      {
        EventTutorialMaster__RequestTutorialEventSet((int32_t)entity[3].monitor, 65, 0, 0);
        return;
      }
LABEL_15:
      sub_2213CDC(Master_object, v6);
    }
  }
}