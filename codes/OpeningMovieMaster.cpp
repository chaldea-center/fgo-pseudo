void __fastcall OpeningMovieMaster___ctor(OpeningMovieMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__, method, v2);
    byte_4B165FB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    311,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_OpeningMovieMaster__OpeningMovieEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
OpeningMovieEntity_array *__fastcall OpeningMovieMaster__GetEnableOpeningMovies(
        OpeningMovieMaster_o *this,
        int64_t nowTime,
        int32_t sortType,
        int32_t timing,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x19
  __int64 v36; // x1
  void *list; // x0
  __int64 v38; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  OpeningMovieEntity_o *v48; // x0
  __int64 v49; // x1
  OpeningMovieEntity_o *v50; // x24
  __int64 methodPtr_low; // x9
  int32_t TargetTiming; // w0
  const MethodInfo *v53; // x3
  _BOOL8 IsEnable; // x0
  __int64 v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x2
  __int64 v71; // x3
  System_Comparison_T__o *v72; // x20
  Il2CppObject *v73; // x21
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x1
  struct OpeningMovieMaster___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__3_1; // x0
  Il2CppObject *v83; // x21
  struct OpeningMovieMaster___c_StaticFields *v84; // x0

  if ( (byte_4B165FC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      nowTime,
      *(_QWORD *)&sortType);
    sub_1BCA7E0(&System_Comparison_OpeningMovieEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&OpeningMovieEntity_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_0__, v29, v30);
    sub_1BCA7E0(&Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_1__, v31, v32);
    sub_1BCA7E0(&OpeningMovieMaster___c_TypeInfo, v33, v34);
    byte_4B165FC = 1;
  }
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_OpeningMovieEntity__TypeInfo,
                                                       nowTime,
                                                       *(_QWORD *)&sortType,
                                                       *(_QWORD *)&timing);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v38);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v41;
        p_offset += 4;
        if ( !v41 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v44 = Enumerator->klass;
    v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v46 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_16;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_16:
      v47 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v48 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
                                    Enumerator,
                                    *(_QWORD *)(v47 + 8));
    v50 = v48;
    if ( !v48 )
      goto LABEL_55;
    methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v48->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (OpeningMovieEntity_c *)v48->klass->_2.typeHierarchy[methodPtr_low - 1] != OpeningMovieEntity_TypeInfo )
    {
      sub_1BCACFC(v48);
LABEL_55:
      sub_1BCAA3C(v48, v49);
    }
    TargetTiming = OpeningMovieEntity__GetTargetTiming(v48, (const MethodInfo *)OpeningMovieEntity_TypeInfo);
    if ( !TargetTiming || TargetTiming == timing )
    {
      IsEnable = OpeningMovieEntity__IsEnable(v50, nowTime, 0, v53);
      if ( IsEnable )
      {
        if ( !v35 )
          sub_1BCAA3C(IsEnable, v55);
        items = v35->fields._items;
        v63 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
        ++v35->fields._version;
        if ( !items )
          sub_1BCAA3C(IsEnable, v55);
        size = v35->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            (Il2CppObject *)v50,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &items->obj.klass + size;
          v35->fields._size = size + 1;
          v65[4] = (Il2CppClass *)v50;
          sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 4), (int64_t)v50, v56, v57, v58, v59, v60, v61);
        }
      }
    }
  }
  v66 = Enumerator->klass;
  v67 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_33;
    }
    v69 = (__int64)&v66->vtable[*v68].method;
  }
  else
  {
LABEL_33:
    v69 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (void *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(
                   Enumerator,
                   *(_QWORD *)(v69 + 8));
  if ( sortType )
  {
    if ( sortType == 1 )
    {
      list = OpeningMovieMaster___c_TypeInfo;
      if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo, v36);
        list = OpeningMovieMaster___c_TypeInfo;
      }
      v72 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 16LL);
      if ( !v72 )
      {
        if ( !*((_DWORD *)list + 56) )
        {
          j_il2cpp_runtime_class_init_0(list, v36);
          list = OpeningMovieMaster___c_TypeInfo;
        }
        v73 = (Il2CppObject *)**((_QWORD **)list + 23);
        v72 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_OpeningMovieEntity__TypeInfo, v36, v70, v71);
        System_Comparison_object____ctor(v72, v73, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_1__, 0LL);
        v80 = (int64_t)v72;
        static_fields = OpeningMovieMaster___c_TypeInfo->static_fields;
        static_fields->__9__3_1 = (struct System_Comparison_OpeningMovieEntity__o *)v72;
        p__9__3_1 = (PartyOrganizationUtility_o *)&static_fields->__9__3_1;
LABEL_49:
        sub_1BCA784(p__9__3_1, v80, v74, v75, v76, v77, v78, v79);
        goto LABEL_50;
      }
      goto LABEL_50;
    }
    if ( v35 )
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v35,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
LABEL_58:
    sub_1BCAA3C(list, v36);
  }
  list = OpeningMovieMaster___c_TypeInfo;
  if ( !OpeningMovieMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OpeningMovieMaster___c_TypeInfo, v36);
    list = OpeningMovieMaster___c_TypeInfo;
  }
  v72 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v72 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v36);
      list = OpeningMovieMaster___c_TypeInfo;
    }
    v83 = (Il2CppObject *)**((_QWORD **)list + 23);
    v72 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_OpeningMovieEntity__TypeInfo, v36, v70, v71);
    System_Comparison_object____ctor(v72, v83, Method_OpeningMovieMaster___c__GetEnableOpeningMovies_b__3_0__, 0LL);
    v80 = (int64_t)v72;
    v84 = OpeningMovieMaster___c_TypeInfo->static_fields;
    v84->__9__3_0 = (struct System_Comparison_OpeningMovieEntity__o *)v72;
    p__9__3_1 = (PartyOrganizationUtility_o *)&v84->__9__3_0;
    goto LABEL_49;
  }
LABEL_50:
  if ( !v35 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_56244000(
    v35,
    v72,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v35,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_List_object__o *v42; // x20
  __int64 v43; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v46; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  OpeningMovieEntity_o *v53; // x0
  const MethodInfo *v54; // x3
  int64_t v55; // x25
  __int64 methodPtr_low; // x10
  _BOOL8 IsEnable; // x0
  __int64 v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int v65; // w8
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  System_Collections_Generic_IEnumerator_T__c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x2
  __int64 v75; // x3
  System_Comparison_T__o *v76; // x0
  __int64 *v77; // x8
  System_Comparison_T__o *v78; // x19

  if ( (byte_4B165FE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&type,
      *(_QWORD *)&value);
    sub_1BCA7E0(&System_Comparison_OpeningMovieEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OpeningMovieEntity__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_OpeningMovieEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&OpeningMovieEntity_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__, v31, v32);
    sub_1BCA7E0(&Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__, v33, v34);
    sub_1BCA7E0(&OpeningMovieMaster___c__DisplayClass5_0_TypeInfo, v35, v36);
    byte_4B165FE = 1;
  }
  v37 = sub_1BCAA2C(OpeningMovieMaster___c__DisplayClass5_0_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&value, nowTime);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
    goto LABEL_50;
  *(_DWORD *)(v37 + 16) = type;
  v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_OpeningMovieEntity__TypeInfo,
                                                       v39,
                                                       v40,
                                                       v41);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_OpeningMovieEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_50;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v43);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v46;
        p_offset += 4;
        if ( !v46 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v49 = Enumerator->klass;
    v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v51 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_17;
      }
      v52 = (__int64)&v49->vtable[*v51].method;
    }
    else
    {
LABEL_17:
      v52 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v53 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
                                    Enumerator,
                                    *(_QWORD *)(v52 + 8));
    v55 = (int64_t)v53;
    if ( v53 )
    {
      methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v53->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (OpeningMovieEntity_c *)v53->klass->_2.typeHierarchy[methodPtr_low - 1] == OpeningMovieEntity_TypeInfo )
      {
        IsEnable = OpeningMovieEntity__IsEnable(v53, nowTime, 1, v54);
        if ( IsEnable )
        {
          v65 = *(_DWORD *)(v37 + 16);
          if ( v65 == *(_DWORD *)(v55 + 48) )
          {
            if ( v65 == 2 )
            {
              if ( !v42 )
                sub_1BCAA3C(IsEnable, v58);
              items = v42->fields._items;
              v67 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v42->fields._version;
              if ( !items )
                sub_1BCAA3C(IsEnable, v58);
              size = v42->fields._size;
              if ( (unsigned int)size >= items->max_length )
                goto LABEL_34;
LABEL_30:
              v69 = &items->obj.klass + size;
              v42->fields._size = size + 1;
              v69[4] = (Il2CppClass *)v55;
              sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), v55, v59, v60, v61, v62, v63, v64);
            }
            else if ( v65 == 1 && *(_DWORD *)(v55 + 52) == value )
            {
              if ( !v42 )
                sub_1BCAA3C(IsEnable, v58);
              items = v42->fields._items;
              v67 = Method_System_Collections_Generic_List_OpeningMovieEntity__Add__;
              ++v42->fields._version;
              if ( !items )
                sub_1BCAA3C(IsEnable, v58);
              size = v42->fields._size;
              if ( (unsigned int)size < items->max_length )
                goto LABEL_30;
LABEL_34:
              System_Collections_Generic_List_object___AddWithResize(
                v42,
                (Il2CppObject *)v55,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
            }
          }
        }
      }
    }
  }
  v70 = Enumerator->klass;
  v71 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v72 = &v70->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_40;
    }
    v73 = (__int64)&v70->vtable[*v72].method;
  }
  else
  {
LABEL_40:
    v73 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v73)(
                                                             Enumerator,
                                                             *(_QWORD *)(v73 + 8));
  if ( !sortType )
  {
    v76 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_OpeningMovieEntity__TypeInfo, v39, v74, v75);
    v77 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__0__;
LABEL_46:
    v78 = v76;
    System_Comparison_object____ctor(v76, (Il2CppObject *)v37, *v77, 0LL);
    if ( v42 )
    {
      System_Collections_Generic_List_object___Sort_56244000(
        v42,
        v78,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_OpeningMovieEntity__Sort__);
      return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v42,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
    }
LABEL_50:
    sub_1BCAA3C(list, v39);
  }
  if ( sortType == 1 )
  {
    v76 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_OpeningMovieEntity__TypeInfo, v39, v74, v75);
    v77 = &Method_OpeningMovieMaster___c__DisplayClass5_0__GetEnableOpeningMoviesAndMaterialPos_b__1__;
    goto LABEL_46;
  }
  if ( !v42 )
    goto LABEL_50;
  return (OpeningMovieEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v42,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_OpeningMovieEntity__ToArray__);
}


OpeningMovieEntity_o *__fastcall OpeningMovieMaster__GetOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  OpeningMovieEntity_o *v24; // x0
  __int64 v25; // x1
  OpeningMovieEntity_o *v26; // x21
  __int64 methodPtr_low; // x9
  System_String_o *movieName; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4B165FD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      movieFileName,
      method);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v9, v10);
    sub_1BCA7E0(&OpeningMovieEntity_TypeInfo, v11, v12);
    byte_4B165FD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, movieFileName);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (OpeningMovieEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                    Enumerator,
                                    *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      goto LABEL_33;
    methodPtr_low = LOBYTE(OpeningMovieEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (OpeningMovieEntity_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != OpeningMovieEntity_TypeInfo )
    {
      sub_1BCACFC(v24);
LABEL_33:
      sub_1BCAA3C(v24, v25);
    }
    movieName = v24->fields.movieName;
    if ( !movieName )
      sub_1BCAA3C(0LL, OpeningMovieEntity_TypeInfo);
    if ( System_String__Equals_62409536(movieName, movieFileName, 0LL) )
      goto LABEL_25;
  }
  v26 = 0LL;
LABEL_25:
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_29;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_29:
    v32 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return v26;
}


void __fastcall OpeningMovieMaster__SavePlayedOpeningMovie(
        OpeningMovieMaster_o *this,
        System_String_o *movieFileName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  OpeningMovieEntity_o *OpeningMovie; // x0
  __int64 v8; // x1
  OpeningMovieEntity_o *v9; // x20
  TitleRootComponent_c *v10; // x0
  System_String_o *String_70112520; // x0
  __int64 v12; // x1
  System_String_o *v13; // x19
  System_String_c *klass; // x8
  System_String_o *v15; // x21
  OpeningMovieEntity_Fields *p_fields; // x20
  unsigned __int64 v17; // x23
  int32_t id; // w25
  TitleRootComponent_c *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x1
  System_String_o *v23; // x0
  TitleRootComponent_c *v24; // x0
  System_String_o *SAVE_KEY_PLAYED_MOVIE; // x19

  if ( (byte_4B165FF & 1) == 0 )
  {
    sub_1BCA7E0(&TitleRootComponent_TypeInfo, movieFileName, method);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v5, v6);
    byte_4B165FF = 1;
  }
  OpeningMovie = OpeningMovieMaster__GetOpeningMovie(this, movieFileName, method);
  if ( !OpeningMovie )
    return;
  v9 = OpeningMovie;
  v10 = TitleRootComponent_TypeInfo;
  if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo, v8);
    v10 = TitleRootComponent_TypeInfo;
  }
  String_70112520 = UnityEngine_PlayerPrefs__GetString_70112520(v10->static_fields->SAVE_KEY_PLAYED_MOVIE, 0LL);
  if ( !String_70112520 )
    goto LABEL_23;
  v13 = String_70112520;
  if ( String_70112520->fields._stringLength < 1 )
  {
    v24 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo, v12);
      v24 = TitleRootComponent_TypeInfo;
    }
    SAVE_KEY_PLAYED_MOVIE = v24->static_fields->SAVE_KEY_PLAYED_MOVIE;
    v22 = System_Int32__ToString((int)v9 + 16, 0LL);
    v23 = SAVE_KEY_PLAYED_MOVIE;
    goto LABEL_21;
  }
  String_70112520 = (System_String_o *)System_String__Split(String_70112520, 0x2Cu, 0, 0LL);
  if ( !String_70112520 )
LABEL_23:
    sub_1BCAA3C(String_70112520, v12);
  klass = String_70112520[1].klass;
  v15 = String_70112520;
  p_fields = &v9->fields;
  if ( (int)klass < 1 )
  {
LABEL_14:
    v19 = TitleRootComponent_TypeInfo;
    if ( !TitleRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleRootComponent_TypeInfo, v12);
      v19 = TitleRootComponent_TypeInfo;
    }
    v20 = v19->static_fields->SAVE_KEY_PLAYED_MOVIE;
    v21 = System_Int32__ToString((int32_t)p_fields, 0LL);
    v22 = System_String__Concat_62412480(v13, (System_String_o *)StringLiteral_863/*","*/, v21, 0LL);
    v23 = v20;
LABEL_21:
    UnityEngine_PlayerPrefs__SetString(v23, v22, 0LL);
    return;
  }
  v17 = 0LL;
  while ( 1 )
  {
    if ( v17 >= (unsigned int)klass )
      sub_1BCAA44(String_70112520, v12);
    id = p_fields->id;
    String_70112520 = (System_String_o *)System_Int32__Parse(*((System_String_o **)&v15[1].monitor + v17), 0LL);
    if ( id == (_DWORD)String_70112520 )
      break;
    LODWORD(klass) = v15[1].klass;
    if ( (__int64)++v17 >= (int)klass )
      goto LABEL_14;
  }
}


void __fastcall OpeningMovieMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16600 & 1) == 0 )
  {
    sub_1BCA7E0(&OpeningMovieMaster___c_TypeInfo, v1, v2);
    byte_4B16600 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(OpeningMovieMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  OpeningMovieMaster___c_TypeInfo->static_fields->__9 = (struct OpeningMovieMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)OpeningMovieMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, a);
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