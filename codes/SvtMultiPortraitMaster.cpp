void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67715 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__, method);
    byte_4B67715 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    399,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  int64_t v34; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_object__o *v37; // x19
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
  __int64 v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x8
  SvtMultiPortraitEntity_c *v56; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v59; // x10
  __int64 size; // x11
  Il2CppClass **v61; // x0
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  SvtMultiPortraitMaster___c_c *v66; // x0
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v68; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  SvtMultiPortraitMaster___c_c *v76; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v78; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Func_TSource__TKey__o *v87; // x1
  System_Collections_Generic_List_object__o *v89; // x21
  __int64 v90; // x22
  __int64 v91; // x0
  __int64 v92; // x1
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  __int64 v99; // x24
  Il2CppObject *current; // x1
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x0
  __int64 v108; // x1
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x8
  int v116; // w9
  struct System_Object_array *v117; // x9
  _QWORD *v118; // x10
  __int64 v119; // x11
  Il2CppClass **v120; // x0
  System_Func_object__bool__o *v121; // x24
  _BOOL8 v122; // x0
  __int64 v123; // x1
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  Il2CppObject *v130; // x1
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  Il2CppClass **v134; // x0
  SvtMultiPortraitMaster___c_c *v135; // x0
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v137; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x0
  System_Collections_Generic_List_Enumerator_object__o v146; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v147; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B67716 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_SvtMultiPortraitEntity___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___, v10);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___, v12);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v16);
    sub_1BE4ACC(&System_Func_SvtMultiPortraitEntity__int__TypeInfo, v17);
    sub_1BE4ACC(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo, v18);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v19);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v20);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__, v24);
    sub_1BE4ACC(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo, v25);
    sub_1BE4ACC(&SvtMultiPortraitEntity_TypeInfo, v26);
    sub_1BE4ACC(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, v27);
    sub_1BE4ACC(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, v28);
    sub_1BE4ACC(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__, v29);
    sub_1BE4ACC(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo, v30);
    sub_1BE4ACC(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__, v31);
    sub_1BE4ACC(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo, v32);
    sub_1BE4ACC(&SvtMultiPortraitMaster___c_TypeInfo, v33);
    byte_4B67716 = 1;
  }
  memset(&v147, 0, sizeof(v147));
  v34 = sub_1BE4D18(SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_86;
  *(_DWORD *)(v34 + 16) = overwriteType;
  v37 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_86;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v38);
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
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          goto LABEL_17;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_17:
      v47 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v48 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
            Enumerator,
            *(_QWORD *)(v47 + 8));
    v55 = v48;
    if ( v48 )
    {
      v56 = SvtMultiPortraitEntity_TypeInfo;
      methodPtr_low = LOBYTE(SvtMultiPortraitEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v48 + 304LL) < (unsigned int)methodPtr_low
        || *(SvtMultiPortraitEntity_c **)(*(_QWORD *)(*(_QWORD *)v48 + 200LL) + 8 * methodPtr_low - 8) != SvtMultiPortraitEntity_TypeInfo )
      {
        sub_1BE4FE8(v48);
LABEL_79:
        sub_1BE4D28(v107, v108);
      }
      if ( *(_DWORD *)(v48 + 16) == svtId && *(_DWORD *)(v48 + 20) == limitCount )
      {
        if ( !v37 )
          sub_1BE4D28(v48, SvtMultiPortraitEntity_TypeInfo);
        items = v37->fields._items;
        v59 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
        ++v37->fields._version;
        if ( !items )
          sub_1BE4D28(v48, v56);
        size = v37->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v37,
            (Il2CppObject *)v48,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          v37->fields._size = size + 1;
          v61[4] = (Il2CppClass *)v55;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v61 + 4), v55, v49, v50, v51, v52, v53, v54);
        }
      }
    }
  }
  v62 = Enumerator->klass;
  v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_33;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_33:
    v65 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(Enumerator, *(_QWORD *)(v65 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v66 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v66 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v66->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v68 = (Il2CppObject *)v66->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v68,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      0LL);
    static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v70, v71, v72, v73, v74, v75);
  }
  if ( !System_Linq_Enumerable__All_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2F63894 *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v89 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v89,
      (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    if ( v37 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v146,
        v37,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
      v147 = v146;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v147,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
      {
        v90 = sub_1BE4D18(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v90, 0LL);
        if ( !v90 )
          sub_1BE4D28(v91, v92);
        *(_QWORD *)(v90 + 24) = v34;
        v99 = v90 + 24;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v90 + 24), v34, v93, v94, v95, v96, v97, v98);
        current = v147.fields._current;
        *(_QWORD *)(v90 + 16) = v147.fields._current;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v90 + 16), (int64_t)current, v101, v102, v103, v104, v105, v106);
        v115 = *(_QWORD *)(v90 + 16);
        if ( !v115 )
          sub_1BE4D28(v107, v108);
        if ( !*(_QWORD *)v99 )
          goto LABEL_79;
        v116 = *(_DWORD *)(v115 + 28);
        if ( v116 == *(_DWORD *)(*(_QWORD *)v99 + 16LL) )
        {
          if ( !v89 )
            sub_1BE4D28(v107, v108);
          v117 = v89->fields._items;
          v118 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
          ++v89->fields._version;
          if ( !v117 )
            sub_1BE4D28(v107, v108);
          v119 = v89->fields._size;
          if ( (unsigned int)v119 >= v117->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v89,
              (Il2CppObject *)v115,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
          }
          else
          {
            v120 = &v117->obj.klass + v119;
            v89->fields._size = v119 + 1;
            v120[4] = (Il2CppClass *)v115;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v120 + 4), v115, v109, v110, v111, v112, v113, v114);
          }
        }
        else if ( !v116 )
        {
          v121 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v121,
            (Il2CppObject *)v90,
            Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
            0LL);
          v122 = BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)v37,
                   (System_Func_T__bool__o *)v121,
                   (const MethodInfo_2F4407C *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
          if ( !v122 )
          {
            if ( !v89 )
              sub_1BE4D28(v122, v123);
            v130 = *(Il2CppObject **)(v90 + 16);
            v131 = v89->fields._items;
            v132 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
            ++v89->fields._version;
            if ( !v131 )
              sub_1BE4D28(v122, v130);
            v133 = v89->fields._size;
            if ( (unsigned int)v133 >= v131->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v89,
                v130,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
            }
            else
            {
              v134 = &v131->obj.klass + v133;
              v89->fields._size = v133 + 1;
              v134[4] = (Il2CppClass *)v130;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v134 + 4), (int64_t)v130, v124, v125, v126, v127, v128, v129);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v147,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      v135 = SvtMultiPortraitMaster___c_TypeInfo;
      if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
        v135 = SvtMultiPortraitMaster___c_TypeInfo;
      }
      _9__1_2 = (System_Func_object__int__o *)v135->static_fields->__9__1_2;
      if ( !_9__1_2 )
      {
        if ( !v135->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v135);
          v135 = SvtMultiPortraitMaster___c_TypeInfo;
        }
        v137 = (Il2CppObject *)v135->static_fields->__9;
        _9__1_2 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__1_2,
          v137,
          Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__,
          0LL);
        v138 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
        v138->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v138->__9__1_2, (int64_t)_9__1_2, v139, v140, v141, v142, v143, v144);
      }
      v86 = (System_Collections_Generic_IEnumerable_TSource__o *)v89;
      v87 = (System_Func_TSource__TKey__o *)_9__1_2;
      goto LABEL_77;
    }
LABEL_86:
    sub_1BE4D28(list, v36);
  }
  v76 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v76 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v76->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      v76 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v76->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v78, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, 0LL);
    v79 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v79->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v79->__9__1_1, (int64_t)_9__1_1, v80, v81, v82, v83, v84, v85);
  }
  v86 = (System_Collections_Generic_IEnumerable_TSource__o *)v37;
  v87 = (System_Func_TSource__TKey__o *)_9__1_1;
LABEL_77:
  v145 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                v86,
                                                                v87,
                                                                (const MethodInfo_2F821CC *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v145,
                                                                        (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void __fastcall SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B67717 & 1) == 0 )
  {
    sub_1BE4ACC(&SvtMultiPortraitMaster___c_TypeInfo, v1);
    byte_4B67717 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)SvtMultiPortraitMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
  return entity->fields.type == 0;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, x);
  }
  return 0;
}