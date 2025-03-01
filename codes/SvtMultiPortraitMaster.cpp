void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE2F2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__, method);
    byte_4BFE2F2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    399,
    (const MethodInfo_327D914 *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
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
  int64_t v33; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_object__o *v36; // x19
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  SvtMultiPortraitMaster___c_c *v63; // x0
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v65; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  SvtMultiPortraitMaster___c_c *v73; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v75; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Func_TSource__TKey__o *v84; // x1
  System_Collections_Generic_List_object__o *v86; // x21
  __int64 v87; // x22
  __int64 v88; // x0
  __int64 v89; // x1
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x24
  Il2CppObject *current; // x1
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  __int64 v104; // x0
  __int64 v105; // x1
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x8
  int v113; // w9
  struct System_Object_array *v114; // x9
  _QWORD *v115; // x10
  __int64 v116; // x11
  Il2CppClass **v117; // x0
  System_Func_object__bool__o *v118; // x24
  _BOOL8 v119; // x0
  __int64 v120; // x1
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  Il2CppObject *v127; // x1
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  SvtMultiPortraitMaster___c_c *v132; // x0
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v134; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v135; // x0
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v142; // x0
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v144; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BFE2F3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Any_SvtMultiPortraitEntity___, *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__, v9);
    sub_1C2E12C(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___, v10);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___, v12);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v16);
    sub_1C2E12C(&System_Func_SvtMultiPortraitEntity__int__TypeInfo, v17);
    sub_1C2E12C(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo, v18);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v19);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo, v20);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__, v22);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v23);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__, v24);
    sub_1C2E12C(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo, v25);
    sub_1C2E12C(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, v26);
    sub_1C2E12C(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, v27);
    sub_1C2E12C(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__, v28);
    sub_1C2E12C(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo, v29);
    sub_1C2E12C(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__, v30);
    sub_1C2E12C(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo, v31);
    sub_1C2E12C(&SvtMultiPortraitMaster___c_TypeInfo, v32);
    byte_4BFE2F3 = 1;
  }
  memset(&v144, 0, sizeof(v144));
  v33 = sub_1C2E378(SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_83;
  *(_DWORD *)(v33 + 16) = overwriteType;
  v36 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3216144 *)Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2E388(0LL, v37);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        p_offset += 4;
        if ( !v40 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v43 = Enumerator->klass;
    v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__c **)v45 - 1) != System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_17;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_17:
      v46 = sub_1C8010C(Enumerator, System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo, 0LL);
    }
    v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
            Enumerator,
            *(_QWORD *)(v46 + 8));
    v54 = v47;
    if ( v47 && *(_DWORD *)(v47 + 16) == svtId && *(_DWORD *)(v47 + 20) == limitCount )
    {
      if ( !v36 )
        sub_1C2E388(v47, v47);
      items = v36->fields._items;
      v56 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
      ++v36->fields._version;
      if ( !items )
        sub_1C2E388(v47, v47);
      size = v36->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v47,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v54;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v58 + 4), v54, v48, v49, v50, v51, v52, v53);
      }
    }
  }
  v59 = Enumerator->klass;
  v60 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v61 = &v59->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_31;
    }
    v62 = (__int64)&v59->vtable[*v61].method;
  }
  else
  {
LABEL_31:
    v62 = sub_1C8010C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(Enumerator, *(_QWORD *)(v62 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v63 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v63 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v63->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v63->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v65,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      0LL);
    static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v67, v68, v69, v70, v71, v72);
  }
  if ( !System_Linq_Enumerable__All_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2FDBDFC *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v86 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v86,
      (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    if ( v36 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v143,
        v36,
        (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
      v144 = v143;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v144,
                (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
      {
        v87 = sub_1C2E378(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v87, 0LL);
        if ( !v87 )
          sub_1C2E388(v88, v89);
        *(_QWORD *)(v87 + 24) = v33;
        v96 = v87 + 24;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v87 + 24), v33, v90, v91, v92, v93, v94, v95);
        current = v144.fields._current;
        *(_QWORD *)(v87 + 16) = v144.fields._current;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v87 + 16), (int64_t)current, v98, v99, v100, v101, v102, v103);
        v112 = *(_QWORD *)(v87 + 16);
        if ( !v112 )
          sub_1C2E388(v104, v105);
        if ( !*(_QWORD *)v96 )
          sub_1C2E388(v104, v105);
        v113 = *(_DWORD *)(v112 + 28);
        if ( v113 == *(_DWORD *)(*(_QWORD *)v96 + 16LL) )
        {
          if ( !v86 )
            sub_1C2E388(v104, v105);
          v114 = v86->fields._items;
          v115 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
          ++v86->fields._version;
          if ( !v114 )
            sub_1C2E388(v104, v105);
          v116 = v86->fields._size;
          if ( (unsigned int)v116 >= v114->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v86,
              (Il2CppObject *)v112,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
          }
          else
          {
            v117 = &v114->obj.klass + v116;
            v86->fields._size = v116 + 1;
            v117[4] = (Il2CppClass *)v112;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v117 + 4), v112, v106, v107, v108, v109, v110, v111);
          }
        }
        else if ( !v113 )
        {
          v118 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v118,
            (Il2CppObject *)v87,
            Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
            0LL);
          v119 = BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)v36,
                   (System_Func_T__bool__o *)v118,
                   (const MethodInfo_2FBC23C *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
          if ( !v119 )
          {
            if ( !v86 )
              sub_1C2E388(v119, v120);
            v127 = *(Il2CppObject **)(v87 + 16);
            v128 = v86->fields._items;
            v129 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
            ++v86->fields._version;
            if ( !v128 )
              sub_1C2E388(v119, v127);
            v130 = v86->fields._size;
            if ( (unsigned int)v130 >= v128->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v86,
                v127,
                *(const MethodInfo_366B8AC **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
            }
            else
            {
              v131 = &v128->obj.klass + v130;
              v86->fields._size = v130 + 1;
              v131[4] = (Il2CppClass *)v127;
              sub_1C2E0D0((PartyOrganizationUtility_o *)(v131 + 4), (int64_t)v127, v121, v122, v123, v124, v125, v126);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v144,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      v132 = SvtMultiPortraitMaster___c_TypeInfo;
      if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
        v132 = SvtMultiPortraitMaster___c_TypeInfo;
      }
      _9__1_2 = (System_Func_object__int__o *)v132->static_fields->__9__1_2;
      if ( !_9__1_2 )
      {
        if ( !v132->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v132);
          v132 = SvtMultiPortraitMaster___c_TypeInfo;
        }
        v134 = (Il2CppObject *)v132->static_fields->__9;
        _9__1_2 = (System_Func_object__int__o *)sub_1C2E378(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__1_2,
          v134,
          Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__,
          0LL);
        v135 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
        v135->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&v135->__9__1_2, (int64_t)_9__1_2, v136, v137, v138, v139, v140, v141);
      }
      v83 = (System_Collections_Generic_IEnumerable_TSource__o *)v86;
      v84 = (System_Func_TSource__TKey__o *)_9__1_2;
      goto LABEL_75;
    }
LABEL_83:
    sub_1C2E388(list, v35);
  }
  v73 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v73 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v73->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v73 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v75 = (Il2CppObject *)v73->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C2E378(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v75, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, 0LL);
    v76 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v76->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v76->__9__1_1, (int64_t)_9__1_1, v77, v78, v79, v80, v81, v82);
  }
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
  v84 = (System_Func_TSource__TKey__o *)_9__1_1;
LABEL_75:
  v142 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                v83,
                                                                v84,
                                                                (const MethodInfo_2FFB4B4 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v142,
                                                                        (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
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

  if ( (byte_4BFE2F4 & 1) == 0 )
  {
    sub_1C2E12C(&SvtMultiPortraitMaster___c_TypeInfo, v1);
    byte_4BFE2F4 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v2;
  sub_1C2E0D0(
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
    sub_1C2E388(this, 0LL);
  return entity->fields.type == 0;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
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
    sub_1C2E388(this, x);
  }
  return 0;
}