void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16D21 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__, method, v2);
    byte_4B16D21 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    395,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SvtMultiPortraitEntity__o *__fastcall SvtMultiPortraitMaster__GetEntityListOrderBy(
        SvtMultiPortraitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteType,
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
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  int64_t v59; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Collections_Generic_List_object__o *v64; // x19
  __int64 v65; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v68; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  __int64 v72; // x9
  int32_t *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x8
  SvtMultiPortraitEntity_c *v83; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v86; // x10
  __int64 size; // x11
  Il2CppClass **v88; // x0
  System_Collections_Generic_IEnumerator_T__c *v89; // x8
  __int64 v90; // x9
  int32_t *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  SvtMultiPortraitMaster___c_c *v96; // x0
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v98; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  SvtMultiPortraitMaster___c_c *v109; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v111; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v112; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x0
  System_Func_TSource__TKey__o *v120; // x1
  System_Collections_Generic_List_object__o *v122; // x21
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x22
  __int64 v127; // x0
  __int64 v128; // x1
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  __int64 v135; // x24
  Il2CppObject *current; // x1
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  __int64 v143; // x0
  __int64 v144; // x1
  int64_t v145; // x2
  __int64 v146; // x3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x8
  int v152; // w9
  struct System_Object_array *v153; // x9
  _QWORD *v154; // x10
  __int64 v155; // x11
  Il2CppClass **v156; // x0
  System_Func_object__bool__o *v157; // x24
  _BOOL8 v158; // x0
  __int64 v159; // x1
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  Il2CppObject *v166; // x1
  struct System_Object_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  Il2CppClass **v170; // x0
  __int64 v171; // x1
  __int64 v172; // x2
  __int64 v173; // x3
  SvtMultiPortraitMaster___c_c *v174; // x0
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v176; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v177; // x0
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v184; // x0
  System_Collections_Generic_List_Enumerator_object__o v185; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v186; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B16D22 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_SvtMultiPortraitEntity___, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v23, v24);
    sub_1BCA7E0(&System_Func_SvtMultiPortraitEntity__int__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__, v39, v40);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo, v41, v42);
    sub_1BCA7E0(&SvtMultiPortraitEntity_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, v45, v46);
    sub_1BCA7E0(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, v47, v48);
    sub_1BCA7E0(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__, v49, v50);
    sub_1BCA7E0(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo, v51, v52);
    sub_1BCA7E0(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__, v53, v54);
    sub_1BCA7E0(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo, v55, v56);
    sub_1BCA7E0(&SvtMultiPortraitMaster___c_TypeInfo, v57, v58);
    byte_4B16D22 = 1;
  }
  memset(&v186, 0, sizeof(v186));
  v59 = sub_1BCAA2C(
          SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limitCount,
          *(_QWORD *)&overwriteType);
  System_Object___ctor((Il2CppObject *)v59, 0LL);
  if ( !v59 )
    goto LABEL_86;
  *(_DWORD *)(v59 + 16) = overwriteType;
  v64 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo,
                                                       v61,
                                                       v62,
                                                       v63);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_86;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v65);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v68;
        p_offset += 4;
        if ( !v68 )
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
    v71 = Enumerator->klass;
    v72 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v73 = &v71->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v73 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v72;
        v73 += 4;
        if ( !v72 )
          goto LABEL_17;
      }
      v74 = (__int64)&v71->vtable[*v73].method;
    }
    else
    {
LABEL_17:
      v74 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v75 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(
            Enumerator,
            *(_QWORD *)(v74 + 8));
    v82 = v75;
    if ( v75 )
    {
      v83 = SvtMultiPortraitEntity_TypeInfo;
      methodPtr_low = LOBYTE(SvtMultiPortraitEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v75 + 304LL) < (unsigned int)methodPtr_low
        || *(SvtMultiPortraitEntity_c **)(*(_QWORD *)(*(_QWORD *)v75 + 200LL) + 8 * methodPtr_low - 8) != SvtMultiPortraitEntity_TypeInfo )
      {
        sub_1BCACFC(v75);
LABEL_79:
        sub_1BCAA3C(v143, v144);
      }
      if ( *(_DWORD *)(v75 + 16) == svtId && *(_DWORD *)(v75 + 20) == limitCount )
      {
        if ( !v64 )
          sub_1BCAA3C(v75, SvtMultiPortraitEntity_TypeInfo);
        items = v64->fields._items;
        v86 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
        ++v64->fields._version;
        if ( !items )
          sub_1BCAA3C(v75, v83);
        size = v64->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v64,
            (Il2CppObject *)v75,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v88 = &items->obj.klass + size;
          v64->fields._size = size + 1;
          v88[4] = (Il2CppClass *)v82;
          sub_1BCA784((PartyOrganizationUtility_o *)(v88 + 4), v82, v76, v77, v78, v79, v80, v81);
        }
      }
    }
  }
  v89 = Enumerator->klass;
  v90 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v91 = &v89->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
    {
      --v90;
      v91 += 4;
      if ( !v90 )
        goto LABEL_33;
    }
    v92 = (__int64)&v89->vtable[*v91].method;
  }
  else
  {
LABEL_33:
    v92 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v92)(Enumerator, *(_QWORD *)(v92 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v64,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v96 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo, v93);
    v96 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v96->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v96->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v96, v93);
      v96 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v98 = (Il2CppObject *)v96->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_SvtMultiPortraitEntity__bool__TypeInfo,
                                               v93,
                                               v94,
                                               v95);
    System_Func_object__bool____ctor(
      _9__1_0,
      v98,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      0LL);
    static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__1_0,
      (int64_t)_9__1_0,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
  }
  if ( !System_Linq_Enumerable__All_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v64,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v122 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo,
                                                          v106,
                                                          v107,
                                                          v108);
    System_Collections_Generic_List_object____ctor(
      v122,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    if ( v64 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v185,
        v64,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
      v186 = v185;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v186,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
      {
        v126 = sub_1BCAA2C(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo, v123, v124, v125);
        System_Object___ctor((Il2CppObject *)v126, 0LL);
        if ( !v126 )
          sub_1BCAA3C(v127, v128);
        *(_QWORD *)(v126 + 24) = v59;
        v135 = v126 + 24;
        sub_1BCA784((PartyOrganizationUtility_o *)(v126 + 24), v59, v129, v130, v131, v132, v133, v134);
        current = v186.fields._current;
        *(_QWORD *)(v126 + 16) = v186.fields._current;
        sub_1BCA784((PartyOrganizationUtility_o *)(v126 + 16), (int64_t)current, v137, v138, v139, v140, v141, v142);
        v151 = *(_QWORD *)(v126 + 16);
        if ( !v151 )
          sub_1BCAA3C(v143, v144);
        if ( !*(_QWORD *)v135 )
          goto LABEL_79;
        v152 = *(_DWORD *)(v151 + 28);
        if ( v152 == *(_DWORD *)(*(_QWORD *)v135 + 16LL) )
        {
          if ( !v122 )
            sub_1BCAA3C(v143, v144);
          v153 = v122->fields._items;
          v154 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
          ++v122->fields._version;
          if ( !v153 )
            sub_1BCAA3C(v143, v144);
          v155 = v122->fields._size;
          if ( (unsigned int)v155 >= v153->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v122,
              (Il2CppObject *)v151,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
          }
          else
          {
            v156 = &v153->obj.klass + v155;
            v122->fields._size = v155 + 1;
            v156[4] = (Il2CppClass *)v151;
            sub_1BCA784((PartyOrganizationUtility_o *)(v156 + 4), v151, v145, v146, v147, v148, v149, v150);
          }
        }
        else if ( !v152 )
        {
          v157 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_SvtMultiPortraitEntity__bool__TypeInfo,
                                                  v144,
                                                  v145,
                                                  v146);
          System_Func_object__bool____ctor(
            v157,
            (Il2CppObject *)v126,
            Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
            0LL);
          v158 = BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)v64,
                   (System_Func_T__bool__o *)v157,
                   (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
          if ( !v158 )
          {
            if ( !v122 )
              sub_1BCAA3C(v158, v159);
            v166 = *(Il2CppObject **)(v126 + 16);
            v167 = v122->fields._items;
            v168 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
            ++v122->fields._version;
            if ( !v167 )
              sub_1BCAA3C(v158, v166);
            v169 = v122->fields._size;
            if ( (unsigned int)v169 >= v167->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v122,
                v166,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
            }
            else
            {
              v170 = &v167->obj.klass + v169;
              v122->fields._size = v169 + 1;
              v170[4] = (Il2CppClass *)v166;
              sub_1BCA784((PartyOrganizationUtility_o *)(v170 + 4), (int64_t)v166, v160, v161, v162, v163, v164, v165);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v186,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      v174 = SvtMultiPortraitMaster___c_TypeInfo;
      if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo, v171);
        v174 = SvtMultiPortraitMaster___c_TypeInfo;
      }
      _9__1_2 = (System_Func_object__int__o *)v174->static_fields->__9__1_2;
      if ( !_9__1_2 )
      {
        if ( !v174->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v174, v171);
          v174 = SvtMultiPortraitMaster___c_TypeInfo;
        }
        v176 = (Il2CppObject *)v174->static_fields->__9;
        _9__1_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                  System_Func_SvtMultiPortraitEntity__int__TypeInfo,
                                                  v171,
                                                  v172,
                                                  v173);
        System_Func_object__int____ctor(
          _9__1_2,
          v176,
          Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__,
          0LL);
        v177 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
        v177->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
        sub_1BCA784((PartyOrganizationUtility_o *)&v177->__9__1_2, (int64_t)_9__1_2, v178, v179, v180, v181, v182, v183);
      }
      v119 = (System_Collections_Generic_IEnumerable_TSource__o *)v122;
      v120 = (System_Func_TSource__TKey__o *)_9__1_2;
      goto LABEL_77;
    }
LABEL_86:
    sub_1BCAA3C(list, v61);
  }
  v109 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo, v106);
    v109 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v109->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v109->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v109, v106);
      v109 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v111 = (Il2CppObject *)v109->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_SvtMultiPortraitEntity__int__TypeInfo,
                                              v106,
                                              v107,
                                              v108);
    System_Func_object__int____ctor(
      _9__1_1,
      v111,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__,
      0LL);
    v112 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v112->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v112->__9__1_1, (int64_t)_9__1_1, v113, v114, v115, v116, v117, v118);
  }
  v119 = (System_Collections_Generic_IEnumerable_TSource__o *)v64;
  v120 = (System_Func_TSource__TKey__o *)_9__1_1;
LABEL_77:
  v184 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                v119,
                                                                v120,
                                                                (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v184,
                                                                        (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void __fastcall SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16D23 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtMultiPortraitMaster___c_TypeInfo, v1, v2);
    byte_4B16D23 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SvtMultiPortraitMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SvtMultiPortraitMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SvtMultiPortraitMaster___c___ctor(SvtMultiPortraitMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_0(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.type == 0;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.idx;
}


void __fastcall SvtMultiPortraitMaster___c__DisplayClass1_0___ctor(
        SvtMultiPortraitMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SvtMultiPortraitMaster___c__DisplayClass1_1___ctor(
        SvtMultiPortraitMaster___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SvtMultiPortraitMaster___c__DisplayClass1_1___GetEntityListOrderBy_b__3(
        SvtMultiPortraitMaster___c__DisplayClass1_1_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  struct SvtMultiPortraitEntity_o *entity; // x8
  struct SvtMultiPortraitMaster___c__DisplayClass1_0_o *CS___8__locals1; // x8

  if ( !x )
    goto LABEL_9;
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_9;
  if ( x->fields.svtId == entity->fields.svtId
    && x->fields.limitCount == entity->fields.limitCount
    && x->fields.idx == entity->fields.idx )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( CS___8__locals1 )
      return x->fields.type == CS___8__locals1->fields.overwriteType;
LABEL_9:
    sub_1BCAA3C(this, x);
  }
  return 0;
}