void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C0182C & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4C0182C = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FortificationAutomaticDialogComponent__AutoSet(
        FortificationAutomaticDialogComponent_o *this,
        bool isSet,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  int64_t v49; // x26
  EventFortificationMaster_o *Master_object; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_List_object__o *v58; // x20
  const MethodInfo *v59; // x3
  int64_t v60; // x24
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_HashSet_int__o *v67; // x19
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  const MethodInfo *v74; // x3
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v75; // x25
  FortificationAutomaticDialogComponent___c_c *v76; // x8
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v78; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v86; // x0
  Il2CppObject *v87; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v88; // x23
  System_Func_object__int__o *v89; // x25
  System_Linq_IOrderedEnumerable_TSource__o *v90; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  Il2CppObject *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v100; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  FortificationAutomaticDialogComponent_o *v103; // x26
  _BOOL8 v104; // x0
  __int64 v105; // x1
  int32_t v106; // w23
  int32_t klass_high; // w24
  EnterUserSvtInfo_o *v108; // x22
  __int64 v109; // x0
  __int64 v110; // x1
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  struct System_Object_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  __int64 v121; // x1
  __int64 v122; // x23
  __int64 v123; // x8
  __int64 v124; // x9
  int *v125; // x10
  __int64 v126; // x0
  __int64 v127; // x27
  __int64 v128; // x0
  __int64 v129; // x1
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  __int64 v136; // x8
  __int64 v137; // x9
  int *v138; // x10
  __int64 v139; // x0
  int64_t v140; // x0
  __int64 *v141; // x26
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  System_Func_object__bool__o *v148; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x0
  System_Collections_Generic_List_TSource__o *v150; // x0
  FortificationAutomaticDialogComponent___c_c *v151; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v152; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v154; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v155; // x0
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v162; // x0
  Il2CppObject *v163; // x0
  Il2CppObject *v164; // x27
  Il2CppClass *v165; // x19
  void *monitor; // x29
  System_Collections_Generic_HashSet_int__o *v167; // x28
  __int64 v168; // x0
  _BOOL8 v169; // x0
  __int64 v170; // x1
  __int64 v171; // x8
  Il2CppObject v172; // q0
  Il2CppObject v173; // q1
  int32_t v174; // w27
  int32_t v175; // w28
  int64_t v176; // x29
  EnterUserSvtInfo_o *v177; // x26
  __int64 v178; // x0
  __int64 v179; // x1
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  struct System_Object_array *items; // x8
  _QWORD *v187; // x9
  __int64 size; // x10
  Il2CppClass **v189; // x0
  __int64 v190; // x8
  __int64 v191; // x9
  int *v192; // x10
  __int64 v193; // x0
  _QWORD *v194; // x0
  System_Reflection_MethodBase_o *v195; // x0
  NetworkManager_ResultCallbackFunc_o *v196; // x22
  int32_t eventId; // w19
  EventFortificationRequest_o *v198; // x21
  const MethodInfo *v199; // x3
  FortificationAutomaticDialogComponent_o *v200; // [xsp+8h] [xbp-D8h]
  Il2CppObject *object; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v203; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v204; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v205; // [xsp+60h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v207; // 0:x0.16

  if ( (byte_4C01827 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_EventFortificationMaster___, isSet);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantClassMaster___, v5);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1C2E12C(&DataManager_TypeInfo, v7);
    sub_1C2E12C(&EnterUserSvtInfo_TypeInfo, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___, v11);
    sub_1C2E12C(
      &Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v12);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v13);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v14);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__,
      v15);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__,
      v16);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__,
      v17);
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent_AutoSet__, v18);
    sub_1C2E12C(&System_Func_UserServantEntity__bool__TypeInfo, v19);
    sub_1C2E12C(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo, v20);
    sub_1C2E12C(&System_Func_UserServantEntity__int__TypeInfo, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__Add__, v22);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__Clear__, v23);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int___ctor__, v24);
    sub_1C2E12C(&System_Collections_Generic_HashSet_int__TypeInfo, v25);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v26);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v27);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v28);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v29);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v30);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__,
      v31);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v32);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v33);
    sub_1C2E12C(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v34);
    sub_1C2E12C(&Method_NetworkManager_getRequest_EventFortificationRequest___, v35);
    sub_1C2E12C(&NetworkManager_TypeInfo, v36);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v37);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v38);
    sub_1C2E12C(&NetworkManager_ResultCallbackFunc_TypeInfo, v39);
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__, v40);
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__, v41);
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, v42);
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__, v43);
    sub_1C2E12C(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, v44);
    sub_1C2E12C(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v45);
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__, v46);
    sub_1C2E12C(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v47);
    sub_1C2E12C(&FortificationAutomaticDialogComponent___c_TypeInfo, v48);
    byte_4C01827 = 1;
  }
  entities = 0LL;
  memset(&v205, 0, sizeof(v205));
  v49 = sub_1C2E378(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_93;
  *(_QWORD *)(v49 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v49 + 24), (int64_t)this, v52, v53, v54, v55, v56, v57);
  *(_BYTE *)(v49 + 32) = isSet;
  v58 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v49 + 16) = 0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0LL) )
    return;
  object = (Il2CppObject *)v49;
  if ( *(_BYTE *)(v49 + 32) )
  {
    v60 = sub_1C2E378(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v60, 0LL);
    if ( v60 )
    {
      *(_QWORD *)(v60 + 24) = v49;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v60 + 24), v49, v61, v62, v63, v64, v65, v66);
      v67 = (System_Collections_Generic_HashSet_int__o *)sub_1C2E378(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v67,
        (const MethodInfo_35213FC *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v67;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.setSvtIdList, (int64_t)v67, v68, v69, v70, v71, v72, v73);
      v200 = this;
      v75 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v74);
      v76 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v76 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__int__o *)v76->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v76->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v76);
          v76 = FortificationAutomaticDialogComponent___c_TypeInfo;
        }
        v78 = (Il2CppObject *)v76->static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_1C2E378(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__18_1,
          v78,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0LL);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&static_fields->__9__18_1,
          (int64_t)_9__18_1,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
      }
      v86 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v75,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_2FFB4B4 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v87 = *(Il2CppObject **)(v60 + 24);
      v88 = v86;
      v89 = (System_Func_object__int__o *)sub_1C2E378(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_object__int____ctor(
        v89,
        v87,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0LL);
      v90 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v88,
              (System_Func_TSource__TKey__o *)v89,
              (const MethodInfo_300B64C *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0LL);
        v92 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v60 + 16) = v92;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v60 + 16), (int64_t)v92, v93, v94, v95, v96, v97, v98);
        if ( v90 )
        {
          klass = v90->klass;
          v100 = *(unsigned __int16 *)(&v90->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v90->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              --v100;
              p_offset += 4;
              if ( !v100 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_24:
            p_method = sub_1C8010C(
                         v90,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v122 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                   v90,
                   *(_QWORD *)(p_method + 8));
          if ( !v122 )
            sub_1C2E388(0LL, v121);
          while ( 1 )
          {
            v123 = *(_QWORD *)v122;
            v124 = *(unsigned __int16 *)(*(_QWORD *)v122 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v122 + 302LL) )
            {
              v125 = (int *)(*(_QWORD *)(v123 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v125 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v124;
                v125 += 4;
                if ( !v124 )
                  goto LABEL_41;
              }
              v126 = v123 + 16LL * *v125 + 312;
            }
            else
            {
LABEL_41:
              v126 = sub_1C8010C(v122, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v126)(v122, *(_QWORD *)(v126 + 8)) & 1) == 0 )
              break;
            v127 = sub_1C2E378(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v127, 0LL);
            if ( !v127 )
              sub_1C2E388(v128, v129);
            *(_QWORD *)(v127 + 24) = v60;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v127 + 24), v60, v130, v131, v132, v133, v134, v135);
            v136 = *(_QWORD *)v122;
            v137 = *(unsigned __int16 *)(*(_QWORD *)v122 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v122 + 302LL) )
            {
              v138 = (int *)(*(_QWORD *)(v136 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v138
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v137;
                v138 += 4;
                if ( !v137 )
                  goto LABEL_49;
              }
              v139 = v136 + 16LL * *v138 + 312;
            }
            else
            {
LABEL_49:
              v139 = sub_1C8010C(
                       v122,
                       System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                       0LL);
            }
            v140 = (*(__int64 (__fastcall **)(__int64, _QWORD))v139)(v122, *(_QWORD *)(v139 + 8));
            *(_QWORD *)(v127 + 16) = v140;
            v141 = (__int64 *)(v127 + 16);
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v127 + 16), v140, v142, v143, v144, v145, v146, v147);
            v148 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v148,
              (Il2CppObject *)v127,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0LL);
            v149 = System_Linq_Enumerable__Where_object_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v148,
                     (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v150 = System_Linq_Enumerable__ToList_object_(
                     v149,
                     (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v151 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v152 = (System_Collections_Generic_IEnumerable_TSource__o *)v150;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
              v151 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v151->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v151->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v151);
                v151 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v154 = (Il2CppObject *)v151->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1C2E378(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__18_4,
                v154,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0LL);
              v155 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v155->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1C2E0D0(
                (PartyOrganizationUtility_o *)&v155->__9__18_4,
                (int64_t)_9__18_4,
                v156,
                v157,
                v158,
                v159,
                v160,
                v161);
            }
            v162 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                          v152,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_2FFB9E4 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v163 = System_Linq_Enumerable__FirstOrDefault_object_(
                     v162,
                     (const MethodInfo_2FF4638 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v164 = v163;
            if ( v163 )
            {
              v165 = v163[5].klass;
              monitor = v163[5].monitor;
              v167 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v207.fields.currentCryptoKey = v165;
              *(_QWORD *)&v207.fields.fakeValue = monitor;
              v168 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v207, 0LL);
              if ( !v167 )
                sub_1C2E388(v168, (unsigned int)v168);
              v169 = System_Collections_Generic_HashSet_int___Add(
                       v167,
                       v168,
                       (const MethodInfo_3522600 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v171 = *v141;
              if ( !*v141 )
                sub_1C2E388(v169, v170);
              v172 = v164[1];
              v173 = v164[2];
              v175 = *(_DWORD *)(v171 + 16);
              v174 = *(_DWORD *)(v171 + 20);
              *(Il2CppObject *)&v204.fields.currentCryptoKey = v172;
              *(Il2CppObject *)&v204.fields.fakeValue = v173;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v203 = v204;
              v176 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v203, 0LL);
              v177 = (EnterUserSvtInfo_o *)sub_1C2E378(EnterUserSvtInfo_TypeInfo);
              EnterUserSvtInfo___ctor(v177, v175, v174, v176, 0LL);
              if ( !v58 )
                sub_1C2E388(v178, v179);
              items = v58->fields._items;
              v187 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v58->fields._version;
              if ( !items )
                sub_1C2E388(v178, v179);
              size = v58->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v58,
                  (Il2CppObject *)v177,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
              }
              else
              {
                v189 = &items->obj.klass + size;
                v58->fields._size = size + 1;
                v189[4] = (Il2CppClass *)v177;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v189 + 4), (int64_t)v177, v180, v181, v182, v183, v184, v185);
              }
            }
          }
          v190 = *(_QWORD *)v122;
          v191 = *(unsigned __int16 *)(*(_QWORD *)v122 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v122 + 302LL) )
          {
            v192 = (int *)(*(_QWORD *)(v190 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v192 - 1) != System_IDisposable_TypeInfo )
            {
              --v191;
              v192 += 4;
              if ( !v191 )
                goto LABEL_73;
            }
            v193 = v190 + 16LL * *v192 + 312;
          }
          else
          {
LABEL_73:
            v193 = sub_1C8010C(v122, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v193)(v122, *(_QWORD *)(v193 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_3521A90 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            v103 = v200;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1C2E388(Master_object, v51);
  }
  v103 = this;
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v59);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v204,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v205.fields._list = *(_OWORD *)&v204.fields.currentCryptoKey;
  v205.fields._current = (Il2CppObject *)v204.fields.fakeValue;
  while ( 1 )
  {
    v104 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v205,
             (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v104 )
      break;
    if ( !v205.fields._current )
      sub_1C2E388(v104, v105);
    v106 = (int32_t)v205.fields._current[1].klass;
    klass_high = HIDWORD(v205.fields._current[1].klass);
    v108 = (EnterUserSvtInfo_o *)sub_1C2E378(EnterUserSvtInfo_TypeInfo);
    EnterUserSvtInfo___ctor(v108, v106, klass_high, 0LL, 0LL);
    if ( !v58 )
      sub_1C2E388(v109, v110);
    v117 = v58->fields._items;
    v118 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v58->fields._version;
    if ( !v117 )
      sub_1C2E388(v109, v110);
    v119 = v58->fields._size;
    if ( (unsigned int)v119 >= v117->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v58,
        (Il2CppObject *)v108,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
    }
    else
    {
      v120 = &v117->obj.klass + v119;
      v58->fields._size = v119 + 1;
      v120[4] = (Il2CppClass *)v108;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v120 + 4), (int64_t)v108, v111, v112, v113, v114, v115, v116);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v205,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v194 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v194 = (_QWORD *)sub_1C2E144(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v195 = (System_Reflection_MethodBase_o *)sub_1C2E110(v194, v194[4]);
  OverwriteAssetSoundName__PlaySystemSe(v195, 8, 0, 0LL);
  v196 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2E378(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v196,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v196,
                                                  (const MethodInfo_3056BC4 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v58 )
    goto LABEL_93;
  eventId = v103->fields.eventId;
  v198 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v58,
                                                  (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v198 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v198, eventId, (EnterUserSvtInfo_array *)Master_object, v199);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4C0182A & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__, v3);
    byte_4C0182A = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Init(
        FortificationAutomaticDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C2E388(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.eventId = eventId;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__OnClickCancel(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C01829 & 1) == 0 )
  {
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent_OnClickCancel__, method);
    byte_4C01829 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    FortificationAutomaticDialogComponent__Close(this, v5);
  }
}


void __fastcall FortificationAutomaticDialogComponent__OnClickRemove(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    FortificationAutomaticDialogComponent__AutoSet(this, 0, v2);
  }
}


void __fastcall FortificationAutomaticDialogComponent__OnClickSet(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    FortificationAutomaticDialogComponent__AutoSet(this, 1, v2);
  }
}


void __fastcall FortificationAutomaticDialogComponent__Open(
        FortificationAutomaticDialogComponent_o *this,
        System_Action_o *onDecide,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UILabel_o *titleLb; // x20
  System_String_o *v25; // x0
  __int64 v26; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v31; // x20

  if ( (byte_4C01826 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, onDecide);
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__, v11);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_6605/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, v13);
    sub_1C2E12C(&StringLiteral_6606/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, v14);
    sub_1C2E12C(&StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, v15);
    sub_1C2E12C(&StringLiteral_6607/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, v16);
    sub_1C2E12C(&StringLiteral_6608/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, v17);
    byte_4C01826 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.onDecide,
      (int64_t)onDecide,
      (int64_t)closeCallBack,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.closeCallBack = closeCallBack;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.closeCallBack,
      (int64_t)closeCallBack,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6608/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v25, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6605/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v25, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6607/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v25, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6606/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v25, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1C2E388(v25, v26);
    }
    UILabel__set_text(cancelButtonLb, v25, 0LL);
    this->fields.state = 1;
    v31 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
  }
}


System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *__fastcall FortificationAutomaticDialogComponent__ReferenceDetailList(
        FortificationAutomaticDialogComponent_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o *teamList,
        bool isSet,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  System_Collections_Generic_List_object__o *v27; // x19
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  EventFortificationSvtMaster_o *v30; // x24
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x22
  __int64 v34; // x1
  NetworkManager_c *v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x26
  int v41; // w27
  int monitor; // w28
  int v43; // w29
  int64_t v44; // x26
  __int64 v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  __int64 v57; // x27
  __int64 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *v66; // x1
  __int64 v67; // x26
  __int64 v68; // x0
  __int64 v69; // x1
  System_Object_array *setSvtInfos; // x28
  System_Func_object__bool__o *v71; // x29
  Il2CppObject *object; // x0
  __int64 v73; // x1
  Il2CppObject *v74; // x27
  __int64 monitor_low; // x1
  int v76; // w29
  int v77; // w28
  int v78; // w27
  int64_t v79; // x26
  __int64 v80; // x0
  __int64 v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  __int64 v91; // x8
  int v92; // w28
  int v93; // w29
  int klass_high; // w27
  __int64 v95; // x0
  __int64 v96; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v98; // x0
  __int64 v99; // x1
  int v100; // w29
  int v101; // w28
  int klass; // w27
  __int64 v103; // x0
  __int64 v104; // x1
  Il2CppClass **v105; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+0h] [xbp-F0h]
  EventFortificationDetailMaster_o *v108; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+18h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v111; // [xsp+30h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v112; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+40h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+70h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_4C01828 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_Find_SetSvtInfo___, teamList);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v6);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, v7);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v8);
    sub_1C2E12C(&DataManager_TypeInfo, v9);
    sub_1C2E12C(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v14);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__, v16);
    sub_1C2E12C(&System_Func_SetSvtInfo__bool__TypeInfo, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__Add__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v20);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__, v22);
    sub_1C2E12C(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v23);
    sub_1C2E12C(&NetworkManager_TypeInfo, v24);
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__, v25);
    sub_1C2E12C(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v26);
    byte_4C01828 = 1;
  }
  memset(&v116, 0, sizeof(v116));
  entity = 0LL;
  entities = 0LL;
  memset(&v113, 0, sizeof(v113));
  v111 = 0LL;
  v112 = 0LL;
  v27 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v108 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v28 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1C2E388(v28, v29);
  v30 = (EventFortificationSvtMaster_o *)v28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v110,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v116 = v110;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v116,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v31 )
      break;
    current = v116.fields._current;
    if ( !v116.fields._current )
      sub_1C2E388(v31, v32);
    if ( !v108 )
      sub_1C2E388(0LL, v32);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v108,
           &entities,
           (int32_t)v116.fields._current[1].klass,
           HIDWORD(v116.fields._current[1].klass),
           0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BF81D5 )
      {
        sub_1C2E12C(&NetworkManager_TypeInfo, v34);
        byte_4BF81D5 = 1;
      }
      v35 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v35 = NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        sub_1C2E388(v35, v34);
      v36 = UserEventFortificationMaster__TryGetEntity(
              Master_object,
              &entity,
              v35->static_fields->userIdNumber,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( v36 )
      {
        if ( !entity )
          sub_1C2E388(v36, v37);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1C2E388(0LL, v37);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v110,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v113 = v110;
          while ( 1 )
          {
LABEL_35:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v113,
                    (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_32;
            v57 = sub_1C2E378(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v57, 0LL);
            if ( !v57 )
              sub_1C2E388(v58, v59);
            v66 = v113.fields._current;
            *(_QWORD *)(v57 + 16) = v113.fields._current;
            v67 = v57 + 16;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v57 + 16), (int64_t)v66, v60, v61, v62, v63, v64, v65);
            if ( !entity )
              sub_1C2E388(v68, v69);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v71 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_SetSvtInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v71,
              (Il2CppObject *)v57,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0LL);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v71,
                       (const MethodInfo_2FBCE08 *)Method_BasicHelper_Find_SetSvtInfo___);
            v74 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              v91 = *(_QWORD *)v67;
              if ( !*(_QWORD *)v67 )
                sub_1C2E388(0LL, v73);
              v92 = *(_DWORD *)(v91 + 24);
              v93 = *(_DWORD *)(v91 + 40);
              klass_high = HIDWORD(current[1].klass);
              v79 = sub_1C2E378(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v79, 0LL);
              *(_DWORD *)(v79 + 16) = klass_high;
              *(_DWORD *)(v79 + 20) = v92;
              *(_DWORD *)(v79 + 24) = v93;
              if ( !v27 )
                sub_1C2E388(v95, v96);
              items = v27->fields._items;
              v89 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v27->fields._version;
              if ( !items )
                sub_1C2E388(v95, v96);
              size = v27->fields._size;
              if ( (unsigned int)size < items->max_length )
              {
LABEL_65:
                v105 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v105[4] = (Il2CppClass *)v79;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v105 + 4), v79, v82, v83, v84, v85, v86, v87);
                continue;
              }
              goto LABEL_66;
            }
            monitor_low = LODWORD(object[1].monitor);
            if ( !(_DWORD)monitor_low && v4 )
              break;
            if ( (_DWORD)monitor_low && !HIDWORD(object[1].klass) && v4 )
            {
              setSvtIdList = this->fields.setSvtIdList;
              if ( !setSvtIdList )
                sub_1C2E388(0LL, monitor_low);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_3522600 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v30 )
                sub_1C2E388(object, monitor_low);
              v98 = EventFortificationSvtMaster__TryGetEntity(
                      v30,
                      &v111,
                      (int32_t)current[1].klass,
                      HIDWORD(current[1].klass),
                      (int32_t)object[1].klass,
                      0LL);
              if ( !v98 )
              {
                if ( !*(_QWORD *)v67 )
                  sub_1C2E388(v98, v99);
                v100 = *(_DWORD *)(*(_QWORD *)v67 + 40LL);
                v101 = HIDWORD(current[1].klass);
                klass = (int)v74[1].klass;
                v79 = sub_1C2E378(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v79, 0LL);
                *(_DWORD *)(v79 + 16) = v101;
                *(_DWORD *)(v79 + 20) = klass;
                *(_DWORD *)(v79 + 24) = v100;
                if ( !v27 )
                  sub_1C2E388(v103, v104);
                items = v27->fields._items;
                v89 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v27->fields._version;
                if ( !items )
                  sub_1C2E388(v103, v104);
                size = v27->fields._size;
                if ( (unsigned int)size < items->max_length )
                  goto LABEL_65;
                goto LABEL_66;
              }
            }
          }
          if ( !*(_QWORD *)v67 )
            sub_1C2E388(object, monitor_low);
          v76 = *(_DWORD *)(*(_QWORD *)v67 + 40LL);
          v77 = HIDWORD(current[1].klass);
          v78 = (int)object[1].klass;
          v79 = sub_1C2E378(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v79, 0LL);
          *(_DWORD *)(v79 + 16) = v77;
          *(_DWORD *)(v79 + 20) = v78;
          *(_DWORD *)(v79 + 24) = v76;
          if ( !v27 )
            sub_1C2E388(v80, v81);
          items = v27->fields._items;
          v89 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v27->fields._version;
          if ( !items )
            sub_1C2E388(v80, v81);
          size = v27->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_65;
LABEL_66:
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            (Il2CppObject *)v79,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
          goto LABEL_35;
        }
      }
      if ( !entities )
        sub_1C2E388(0LL, v37);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v110,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v113 = v110;
      while ( 1 )
      {
        v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v113,
                (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v38 )
          break;
        v40 = v113.fields._current;
        if ( !v113.fields._current )
          sub_1C2E388(v38, v39);
        if ( !v30 )
          sub_1C2E388(v38, v39);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v30,
                &v112,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v113.fields._current[1].monitor,
                0LL)
          && v4 )
        {
          v41 = HIDWORD(current[1].klass);
          monitor = (int)v40[1].monitor;
          v43 = (int)v40[2].monitor;
          v44 = sub_1C2E378(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v44, 0LL);
          *(_DWORD *)(v44 + 16) = v41;
          *(_DWORD *)(v44 + 20) = monitor;
          *(_DWORD *)(v44 + 24) = v43;
          if ( !v27 )
            sub_1C2E388(v45, v46);
          v53 = v27->fields._items;
          v54 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v27->fields._version;
          if ( !v53 )
            sub_1C2E388(v45, v46);
          v55 = v27->fields._size;
          if ( (unsigned int)v55 >= v53->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)v44,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = &v53->obj.klass + v55;
            v27->fields._size = v55 + 1;
            v56[4] = (Il2CppClass *)v44;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v56 + 4), v44, v47, v48, v49, v50, v51, v52);
          }
        }
      }
LABEL_32:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v113,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v116,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  return (System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *)v27;
}


void __fastcall FortificationAutomaticDialogComponent__SerializeFieldNotNullCheck(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortificationAutomaticDialogComponent___Close_b__23_0(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  ActionExtensions__Call(this->fields.closeCallBack, 0LL);
  FortificationAutomaticDialogComponent__Init(this, this->fields.eventId, v3);
}


void __fastcall FortificationAutomaticDialogComponent___Open_b__16_0(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall FortificationAutomaticDialogComponent__get_closeBtnObject(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C0182B & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C0182B = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2E388(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent_DetailInfo___ctor(
        FortificationAutomaticDialogComponent_DetailInfo_o *this,
        int32_t idx,
        int32_t position,
        int32_t classId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.idx = idx;
  this->fields.position = position;
  this->fields.classId = classId;
}


void __fastcall FortificationAutomaticDialogComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C0182D & 1) == 0 )
  {
    sub_1C2E12C(&FortificationAutomaticDialogComponent___c_TypeInfo, v1);
    byte_4C0182D = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)FortificationAutomaticDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall FortificationAutomaticDialogComponent___c___ctor(
        FortificationAutomaticDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_1(
        FortificationAutomaticDialogComponent___c_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.lv;
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__0(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4C0182E & 1) == 0 )
  {
    sub_1C2E12C(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, result);
    sub_1C2E12C(&StringLiteral_22468/*"ng"*/, v5);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1C2E12C(&StringLiteral_17175/*"ar200"*/, v6);
    byte_4C0182E = 1;
  }
  if ( v4->fields.isSet )
  {
    v7 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C2E144(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C2E110(v7, v7[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v8,
                                                                              (System_String_o *)StringLiteral_17175/*"ar200"*/,
                                                                              0,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_63243900(result, (System_String_o *)StringLiteral_22468/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1C2E388(this, result);
  FortificationAutomaticDialogComponent__Close(
    (FortificationAutomaticDialogComponent_o *)this,
    (const MethodInfo *)result);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_1C2E388(this, 0LL);
  classId = x->fields.classId;
  if ( classId == this->fields.typeAll )
    return -1;
  if ( classId == this->fields.typeExtra )
    return 0;
  return x->fields.classId;
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_1___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_2___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_2___AutoSet_b__3(
        FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *v4; // x20
  __int64 v5; // x1
  struct FortificationAutomaticDialogComponent_DetailInfo_o *detail; // x9
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *CS___8__locals2; // x8
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *CS___8__locals1; // x10
  int32_t classId; // w22
  ServantClassMaster_o *svtClassMst; // x21
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v11; // x8
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x20
  __int64 v14; // x19
  __int64 v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_4C0182F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_HashSet_int__Contains__, x);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1C2E12C(
                                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                              v5);
    byte_4C0182F = 1;
  }
  detail = v4->fields.detail;
  if ( !detail )
    goto LABEL_20;
  CS___8__locals2 = v4->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_20;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_20;
  classId = detail->fields.classId;
  if ( classId != CS___8__locals1->fields.typeAll )
  {
    if ( !x )
      goto LABEL_20;
    svtClassMst = CS___8__locals2->fields.svtClassMst;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)UserServantEntity__getSvtClassId(x, 0, 0LL);
    if ( !svtClassMst )
      goto LABEL_20;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)ServantClassMaster__getSupportGroupType(
                                                                              svtClassMst,
                                                                              (int32_t)this,
                                                                              0LL);
    if ( classId != (_DWORD)this )
      return 0;
    CS___8__locals2 = v4->fields.CS___8__locals2;
    if ( !CS___8__locals2 )
      goto LABEL_20;
  }
  v11 = CS___8__locals2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_20;
  _4__this = v11->fields.__4__this;
  if ( !_4__this || !x )
    goto LABEL_20;
  setSvtIdList = _4__this->fields.setSvtIdList;
  v15 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
                                                                            v18,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_20:
    sub_1C2E388(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_3521AF0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall FortificationAutomaticDialogComponent___c__DisplayClass19_0___ctor(
        FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall FortificationAutomaticDialogComponent___c__DisplayClass19_0___ReferenceDetailList_b__0(
        FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *this,
        SetSvtInfo_o *info,
        const MethodInfo *method)
{
  struct EventFortificationDetailEntity_o *detail; // x8

  if ( !info || (detail = this->fields.detail) == 0LL )
    sub_1C2E388(this, info);
  return info->fields.position == detail->fields.position;
}