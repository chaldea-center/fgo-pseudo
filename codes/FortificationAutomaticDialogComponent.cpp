void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BE058D & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BE058D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__AutoSet(
        FortificationAutomaticDialogComponent_o *this,
        bool isSet,
        const MethodInfo *method)
{
  int64_t v5; // x26
  EventFortificationMaster_o *Master_object; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  const MethodInfo *v15; // x3
  int64_t v16; // x24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_HashSet_int__o *v23; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v31; // x25
  FortificationAutomaticDialogComponent___c_c *v32; // x8
  System_Func_object__int__o *_9__18_1; // x26
  Il2CppObject *v34; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  Il2CppObject *v43; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x23
  System_Func_object__int__o *v45; // x25
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  Il2CppObject *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  FortificationAutomaticDialogComponent_o *v59; // x26
  _BOOL8 v60; // x0
  __int64 v61; // x1
  int32_t v62; // w23
  int32_t klass_high; // w24
  EnterUserSvtInfo_o *v64; // x22
  __int64 v65; // x0
  __int64 v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  __int64 v77; // x1
  __int64 v78; // x23
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x27
  __int64 v84; // x0
  __int64 v85; // x1
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  int64_t v96; // x0
  __int64 *v97; // x26
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  System_Func_object__bool__o *v104; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x0
  System_Collections_Generic_List_TSource__o *v106; // x0
  FortificationAutomaticDialogComponent___c_c *v107; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x27
  System_Func_object__int__o *_9__18_4; // x28
  Il2CppObject *v110; // x29
  struct FortificationAutomaticDialogComponent___c_StaticFields *v111; // x0
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x0
  Il2CppObject *v119; // x0
  Il2CppObject *v120; // x27
  Il2CppClass *v121; // x19
  void *monitor; // x29
  System_Collections_Generic_HashSet_int__o *v123; // x28
  __int64 v124; // x0
  _BOOL8 v125; // x0
  __int64 v126; // x1
  __int64 v127; // x8
  Il2CppObject v128; // q0
  Il2CppObject v129; // q1
  int32_t v130; // w27
  int32_t v131; // w28
  int64_t v132; // x29
  EnterUserSvtInfo_o *v133; // x26
  __int64 v134; // x0
  __int64 v135; // x1
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct System_Object_array *items; // x8
  _QWORD *v143; // x9
  __int64 size; // x10
  Il2CppClass **v145; // x0
  __int64 v146; // x8
  __int64 v147; // x9
  int *v148; // x10
  __int64 v149; // x0
  _QWORD *v150; // x0
  System_Reflection_MethodBase_o *v151; // x0
  NetworkManager_ResultCallbackFunc_o *v152; // x22
  int32_t eventId; // w19
  EventFortificationRequest_o *v154; // x21
  const MethodInfo *v155; // x3
  FortificationAutomaticDialogComponent_o *v156; // [xsp+8h] [xbp-D8h]
  Il2CppObject *object; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v159; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v161; // [xsp+60h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v163; // 0:x0.16

  if ( (byte_4BE0588 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&EnterUserSvtInfo_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__);
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent_AutoSet__);
    sub_1C21E38(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
    sub_1C21E38(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__);
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__);
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__);
    sub_1C21E38(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
    sub_1C21E38(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__);
    sub_1C21E38(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
    sub_1C21E38(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_4BE0588 = 1;
  }
  entities = 0LL;
  memset(&v161, 0, sizeof(v161));
  v5 = sub_1C22084(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_93;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 32) = isSet;
  v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v5 + 16) = 0x800000000LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_93;
  if ( !EventFortificationMaster__TryGetEntityList(Master_object, &entities, this->fields.eventId, 0LL) )
    return;
  object = (Il2CppObject *)v5;
  if ( *(_BYTE *)(v5 + 32) )
  {
    v16 = sub_1C22084(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v16, 0LL);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 24) = v5;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 24), v5, v17, v18, v19, v20, v21, v22);
      v23 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v23,
        (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      this->fields.setSvtIdList = v23;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.setSvtIdList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
      v156 = this;
      v31 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v30);
      v32 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v32 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__int__o *)v32->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v32->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v32);
          v32 = FortificationAutomaticDialogComponent___c_TypeInfo;
        }
        v34 = (Il2CppObject *)v32->static_fields->__9;
        _9__18_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__18_1,
          v34,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          0LL);
        static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__18_1,
          (int64_t)_9__18_1,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      v42 = System_Linq_Enumerable__OrderBy_object__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v31,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v43 = *(Il2CppObject **)(v16 + 24);
      v44 = v42;
      v45 = (System_Func_object__int__o *)sub_1C22084(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_object__int____ctor(
        v45,
        v43,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        0LL);
      v46 = System_Linq_Enumerable__ThenByDescending_object__int_(
              v44,
              (System_Func_TSource__TKey__o *)v45,
              (const MethodInfo_2FE9074 *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_object )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_object,
                                                                                  0LL);
        v48 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v16 + 16) = v48;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)v48, v49, v50, v51, v52, v53, v54);
        if ( v46 )
        {
          klass = v46->klass;
          v56 = *(unsigned __int16 *)(&v46->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v46->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              --v56;
              p_offset += 4;
              if ( !v56 )
                goto LABEL_24;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_24:
            p_method = sub_1C73E18(
                         v46,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v78 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                  v46,
                  *(_QWORD *)(p_method + 8));
          if ( !v78 )
            sub_1C22094(0LL, v77);
          while ( 1 )
          {
            v79 = *(_QWORD *)v78;
            v80 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
            {
              v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v81 - 1) != System_Collections_IEnumerator_TypeInfo )
              {
                --v80;
                v81 += 4;
                if ( !v80 )
                  goto LABEL_41;
              }
              v82 = v79 + 16LL * *v81 + 312;
            }
            else
            {
LABEL_41:
              v82 = sub_1C73E18(v78, System_Collections_IEnumerator_TypeInfo, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8)) & 1) == 0 )
              break;
            v83 = sub_1C22084(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            System_Object___ctor((Il2CppObject *)v83, 0LL);
            if ( !v83 )
              sub_1C22094(v84, v85);
            *(_QWORD *)(v83 + 24) = v16;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v83 + 24), v16, v86, v87, v88, v89, v90, v91);
            v92 = *(_QWORD *)v78;
            v93 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
            if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
            {
              v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v94
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                --v93;
                v94 += 4;
                if ( !v93 )
                  goto LABEL_49;
              }
              v95 = v92 + 16LL * *v94 + 312;
            }
            else
            {
LABEL_49:
              v95 = sub_1C73E18(
                      v78,
                      System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                      0LL);
            }
            v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v78, *(_QWORD *)(v95 + 8));
            *(_QWORD *)(v83 + 16) = v96;
            v97 = (__int64 *)(v83 + 16);
            sub_1C21DDC((PartyOrganizationUtility_o *)(v83 + 16), v96, v98, v99, v100, v101, v102, v103);
            v104 = (System_Func_object__bool__o *)sub_1C22084(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v104,
              (Il2CppObject *)v83,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              0LL);
            v105 = System_Linq_Enumerable__Where_object_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v104,
                     (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v106 = System_Linq_Enumerable__ToList_object_(
                     v105,
                     (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v107 = FortificationAutomaticDialogComponent___c_TypeInfo;
            v108 = (System_Collections_Generic_IEnumerable_TSource__o *)v106;
            if ( !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
              v107 = FortificationAutomaticDialogComponent___c_TypeInfo;
            }
            _9__18_4 = (System_Func_object__int__o *)v107->static_fields->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( !v107->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v107);
                v107 = FortificationAutomaticDialogComponent___c_TypeInfo;
              }
              v110 = (Il2CppObject *)v107->static_fields->__9;
              _9__18_4 = (System_Func_object__int__o *)sub_1C22084(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_object__int____ctor(
                _9__18_4,
                v110,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                0LL);
              v111 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
              v111->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&v111->__9__18_4,
                (int64_t)_9__18_4,
                v112,
                v113,
                v114,
                v115,
                v116,
                v117);
            }
            v118 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                          v108,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v119 = System_Linq_Enumerable__FirstOrDefault_object_(
                     v118,
                     (const MethodInfo_2FD26B0 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v120 = v119;
            if ( v119 )
            {
              v121 = v119[5].klass;
              monitor = v119[5].monitor;
              v123 = *p_setSvtIdList;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v163.fields.currentCryptoKey = v121;
              *(_QWORD *)&v163.fields.fakeValue = monitor;
              v124 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v163, 0LL);
              if ( !v123 )
                sub_1C22094(v124, (unsigned int)v124);
              v125 = System_Collections_Generic_HashSet_int___Add(
                       v123,
                       v124,
                       (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v127 = *v97;
              if ( !*v97 )
                sub_1C22094(v125, v126);
              v128 = v120[1];
              v129 = v120[2];
              v131 = *(_DWORD *)(v127 + 16);
              v130 = *(_DWORD *)(v127 + 20);
              *(Il2CppObject *)&v160.fields.currentCryptoKey = v128;
              *(Il2CppObject *)&v160.fields.fakeValue = v129;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v159 = v160;
              v132 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v159, 0LL);
              v133 = (EnterUserSvtInfo_o *)sub_1C22084(EnterUserSvtInfo_TypeInfo);
              EnterUserSvtInfo___ctor(v133, v131, v130, v132, 0LL);
              if ( !v14 )
                sub_1C22094(v134, v135);
              items = v14->fields._items;
              v143 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
              ++v14->fields._version;
              if ( !items )
                sub_1C22094(v134, v135);
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)v133,
                  *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
              }
              else
              {
                v145 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v145[4] = (Il2CppClass *)v133;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v145 + 4), (int64_t)v133, v136, v137, v138, v139, v140, v141);
              }
            }
          }
          v146 = *(_QWORD *)v78;
          v147 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
          {
            v148 = (int *)(*(_QWORD *)(v146 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v148 - 1) != System_IDisposable_TypeInfo )
            {
              --v147;
              v148 += 4;
              if ( !v147 )
                goto LABEL_73;
            }
            v149 = v146 + 16LL * *v148 + 312;
          }
          else
          {
LABEL_73:
            v149 = sub_1C73E18(v78, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v149)(v78, *(_QWORD *)(v149 + 8));
          Master_object = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_object,
              (const MethodInfo_3502E14 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            v59 = v156;
            goto LABEL_77;
          }
        }
      }
    }
LABEL_93:
    sub_1C22094(Master_object, v7);
  }
  v59 = this;
  Master_object = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                  this,
                                                  entities,
                                                  0,
                                                  v15);
  if ( !Master_object )
    goto LABEL_93;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v160,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  *(_OWORD *)&v161.fields._list = *(_OWORD *)&v160.fields.currentCryptoKey;
  v161.fields._current = (Il2CppObject *)v160.fields.fakeValue;
  while ( 1 )
  {
    v60 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v161,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v60 )
      break;
    if ( !v161.fields._current )
      sub_1C22094(v60, v61);
    v62 = (int32_t)v161.fields._current[1].klass;
    klass_high = HIDWORD(v161.fields._current[1].klass);
    v64 = (EnterUserSvtInfo_o *)sub_1C22084(EnterUserSvtInfo_TypeInfo);
    EnterUserSvtInfo___ctor(v64, v62, klass_high, 0LL, 0LL);
    if ( !v14 )
      sub_1C22094(v65, v66);
    v73 = v14->fields._items;
    v74 = Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__;
    ++v14->fields._version;
    if ( !v73 )
      sub_1C22094(v65, v66);
    v75 = v14->fields._size;
    if ( (unsigned int)v75 >= v73->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)v64,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
    }
    else
    {
      v76 = &v73->obj.klass + v75;
      v14->fields._size = v75 + 1;
      v76[4] = (Il2CppClass *)v64;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v76 + 4), (int64_t)v64, v67, v68, v69, v70, v71, v72);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v161,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
LABEL_77:
  v150 = Method_FortificationAutomaticDialogComponent_AutoSet__;
  if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_AutoSet__ + 83) & 2) != 0 )
    v150 = (_QWORD *)sub_1C21E50(Method_FortificationAutomaticDialogComponent_AutoSet__);
  v151 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v150, v150[4]);
  OverwriteAssetSoundName__PlaySystemSe(v151, 8, 0, 0LL);
  v152 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v152,
    object,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Master_object = (EventFortificationMaster_o *)NetworkManager__getRequest_object_(
                                                  v152,
                                                  (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v14 )
    goto LABEL_93;
  eventId = v59->fields.eventId;
  v154 = (EventFortificationRequest_o *)Master_object;
  Master_object = (EventFortificationMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                  v14,
                                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v154 )
    goto LABEL_93;
  EventFortificationRequest__beginRequest(v154, eventId, (EnterUserSvtInfo_array *)Master_object, v155);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BE058B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__);
    byte_4BE058B = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Close_b__23_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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
    sub_1C22094(0LL, v6);
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

  if ( (byte_4BE058A & 1) == 0 )
  {
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    byte_4BE058A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UILabel_o *titleLb; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v24; // x20

  if ( (byte_4BE0587 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_6614/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/);
    sub_1C21E38(&StringLiteral_6615/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_6616/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/);
    sub_1C21E38(&StringLiteral_6617/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/);
    byte_4BE0587 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.onDecide,
      (int64_t)onDecide,
      (int64_t)closeCallBack,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.closeCallBack = closeCallBack;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.closeCallBack,
      (int64_t)closeCallBack,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6617/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v18, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6614/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v18, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6616/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v18, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6615/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v18, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_1C22094(v18, v19);
    }
    UILabel__set_text(cancelButtonLb, v18, 0LL);
    this->fields.state = 1;
    v24 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_FortificationAutomaticDialogComponent__Open_b__16_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
  }
}


System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *__fastcall FortificationAutomaticDialogComponent__ReferenceDetailList(
        FortificationAutomaticDialogComponent_o *this,
        System_Collections_Generic_List_EventFortificationEntity__o *teamList,
        bool isSet,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  System_Collections_Generic_List_object__o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  EventFortificationSvtMaster_o *v9; // x24
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x22
  __int64 v13; // x1
  NetworkManager_c *v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x26
  int v20; // w27
  int monitor; // w28
  int v22; // w29
  int64_t v23; // x26
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  __int64 v36; // x27
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *v45; // x1
  __int64 v46; // x26
  __int64 v47; // x0
  __int64 v48; // x1
  System_Object_array *setSvtInfos; // x28
  System_Func_object__bool__o *v50; // x29
  Il2CppObject *object; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x27
  __int64 monitor_low; // x1
  int v55; // w29
  int v56; // w28
  int v57; // w27
  int64_t v58; // x26
  __int64 v59; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 size; // x10
  __int64 v70; // x8
  int v71; // w28
  int v72; // w29
  int klass_high; // w27
  __int64 v74; // x0
  __int64 v75; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v77; // x0
  __int64 v78; // x1
  int v79; // w29
  int v80; // w28
  int klass; // w27
  __int64 v82; // x0
  __int64 v83; // x1
  Il2CppClass **v84; // x0
  UserEventFortificationMaster_o *Master_object; // [xsp+0h] [xbp-F0h]
  EventFortificationDetailMaster_o *v87; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+18h] [xbp-D8h] BYREF
  EventFortificationSvtEntity_o *v90; // [xsp+30h] [xbp-C0h] BYREF
  EventFortificationSvtEntity_o *v91; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+40h] [xbp-B0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+60h] [xbp-90h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+70h] [xbp-80h] BYREF

  v4 = isSet;
  if ( (byte_4BE0589 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Find_SetSvtInfo___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__);
    sub_1C21E38(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__);
    sub_1C21E38(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
    byte_4BE0589 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  entity = 0LL;
  entities = 0LL;
  memset(&v92, 0, sizeof(v92));
  v90 = 0LL;
  v91 = 0LL;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventFortificationMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v87 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v7 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_1C22094(v7, v8);
  v9 = (EventFortificationSvtMaster_o *)v7;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    (System_Collections_Generic_List_object__o *)teamList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v95 = v89;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v95,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v10 )
      break;
    current = v95.fields._current;
    if ( !v95.fields._current )
      sub_1C22094(v10, v11);
    if ( !v87 )
      sub_1C22094(0LL, v11);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v87,
           &entities,
           (int32_t)v95.fields._current[1].klass,
           HIDWORD(v95.fields._current[1].klass),
           0LL) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      v14 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v14 = NetworkManager_TypeInfo;
      }
      if ( !Master_object )
        sub_1C22094(v14, v13);
      v15 = UserEventFortificationMaster__TryGetEntity(
              Master_object,
              &entity,
              v14->static_fields->userIdNumber,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( v15 )
      {
        if ( !entity )
          sub_1C22094(v15, v16);
        if ( entity->fields.setSvtInfos )
        {
          if ( !entities )
            sub_1C22094(0LL, v16);
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v89,
            (System_Collections_Generic_List_object__o *)entities,
            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
          v92 = v89;
          while ( 1 )
          {
LABEL_35:
            if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v92,
                    (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
              goto LABEL_32;
            v36 = sub_1C22084(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v36, 0LL);
            if ( !v36 )
              sub_1C22094(v37, v38);
            v45 = v92.fields._current;
            *(_QWORD *)(v36 + 16) = v92.fields._current;
            v46 = v36 + 16;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)v45, v39, v40, v41, v42, v43, v44);
            if ( !entity )
              sub_1C22094(v47, v48);
            setSvtInfos = (System_Object_array *)entity->fields.setSvtInfos;
            v50 = (System_Func_object__bool__o *)sub_1C22084(System_Func_SetSvtInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v50,
              (Il2CppObject *)v36,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
              0LL);
            object = BasicHelper__Find_object_(
                       setSvtInfos,
                       (System_Func_T__bool__o *)v50,
                       (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_SetSvtInfo___);
            v53 = object;
            if ( !object )
            {
              if ( !v4 )
                continue;
              v70 = *(_QWORD *)v46;
              if ( !*(_QWORD *)v46 )
                sub_1C22094(0LL, v52);
              v71 = *(_DWORD *)(v70 + 24);
              v72 = *(_DWORD *)(v70 + 40);
              klass_high = HIDWORD(current[1].klass);
              v58 = sub_1C22084(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v58, 0LL);
              *(_DWORD *)(v58 + 16) = klass_high;
              *(_DWORD *)(v58 + 20) = v71;
              *(_DWORD *)(v58 + 24) = v72;
              if ( !v6 )
                sub_1C22094(v74, v75);
              items = v6->fields._items;
              v68 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
              ++v6->fields._version;
              if ( !items )
                sub_1C22094(v74, v75);
              size = v6->fields._size;
              if ( (unsigned int)size < items->max_length )
              {
LABEL_65:
                v84 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v84[4] = (Il2CppClass *)v58;
                sub_1C21DDC((PartyOrganizationUtility_o *)(v84 + 4), v58, v61, v62, v63, v64, v65, v66);
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
                sub_1C22094(0LL, monitor_low);
              System_Collections_Generic_HashSet_int___Add(
                setSvtIdList,
                monitor_low,
                (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
            }
            else if ( (_DWORD)monitor_low && !v4 )
            {
              if ( !v9 )
                sub_1C22094(object, monitor_low);
              v77 = EventFortificationSvtMaster__TryGetEntity(
                      v9,
                      &v90,
                      (int32_t)current[1].klass,
                      HIDWORD(current[1].klass),
                      (int32_t)object[1].klass,
                      0LL);
              if ( !v77 )
              {
                if ( !*(_QWORD *)v46 )
                  sub_1C22094(v77, v78);
                v79 = *(_DWORD *)(*(_QWORD *)v46 + 40LL);
                v80 = HIDWORD(current[1].klass);
                klass = (int)v53[1].klass;
                v58 = sub_1C22084(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
                System_Object___ctor((Il2CppObject *)v58, 0LL);
                *(_DWORD *)(v58 + 16) = v80;
                *(_DWORD *)(v58 + 20) = klass;
                *(_DWORD *)(v58 + 24) = v79;
                if ( !v6 )
                  sub_1C22094(v82, v83);
                items = v6->fields._items;
                v68 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
                ++v6->fields._version;
                if ( !items )
                  sub_1C22094(v82, v83);
                size = v6->fields._size;
                if ( (unsigned int)size < items->max_length )
                  goto LABEL_65;
                goto LABEL_66;
              }
            }
          }
          if ( !*(_QWORD *)v46 )
            sub_1C22094(object, monitor_low);
          v55 = *(_DWORD *)(*(_QWORD *)v46 + 40LL);
          v56 = HIDWORD(current[1].klass);
          v57 = (int)object[1].klass;
          v58 = sub_1C22084(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v58, 0LL);
          *(_DWORD *)(v58 + 16) = v56;
          *(_DWORD *)(v58 + 20) = v57;
          *(_DWORD *)(v58 + 24) = v55;
          if ( !v6 )
            sub_1C22094(v59, v60);
          items = v6->fields._items;
          v68 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1C22094(v59, v60);
          size = v6->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_65;
LABEL_66:
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v58,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
          goto LABEL_35;
        }
      }
      if ( !entities )
        sub_1C22094(0LL, v16);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v89,
        (System_Collections_Generic_List_object__o *)entities,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v92 = v89;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v92,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
        if ( !v17 )
          break;
        v19 = v92.fields._current;
        if ( !v92.fields._current )
          sub_1C22094(v17, v18);
        if ( !v9 )
          sub_1C22094(v17, v18);
        if ( !EventFortificationSvtMaster__TryGetEntity(
                v9,
                &v91,
                (int32_t)current[1].klass,
                HIDWORD(current[1].klass),
                (int32_t)v92.fields._current[1].monitor,
                0LL)
          && v4 )
        {
          v20 = HIDWORD(current[1].klass);
          monitor = (int)v19[1].monitor;
          v22 = (int)v19[2].monitor;
          v23 = sub_1C22084(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v23, 0LL);
          *(_DWORD *)(v23 + 16) = v20;
          *(_DWORD *)(v23 + 20) = monitor;
          *(_DWORD *)(v23 + 24) = v22;
          if ( !v6 )
            sub_1C22094(v24, v25);
          v32 = v6->fields._items;
          v33 = Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__;
          ++v6->fields._version;
          if ( !v32 )
            sub_1C22094(v24, v25);
          v34 = v6->fields._size;
          if ( (unsigned int)v34 >= v32->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v23,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &v32->obj.klass + v34;
            v6->fields._size = v34 + 1;
            v35[4] = (Il2CppClass *)v23;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), v23, v26, v27, v28, v29, v30, v31);
          }
        }
      }
LABEL_32:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v92,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v95,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  return (System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *)v6;
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

  if ( (byte_4BE058C & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE058C = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BE058E & 1) == 0 )
  {
    sub_1C21E38(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_4BE058E = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FortificationAutomaticDialogComponent___c_TypeInfo->static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)FortificationAutomaticDialogComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4BE058F & 1) == 0 )
  {
    sub_1C21E38(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_1C21E38(&StringLiteral_17161/*"ar200"*/);
    byte_4BE058F = 1;
  }
  if ( v4->fields.isSet )
  {
    v5 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v6,
                                                                              (System_String_o *)StringLiteral_17161/*"ar200"*/,
                                                                              0,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_63123792(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_1C22094(this, result);
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
    sub_1C22094(this, 0LL);
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
  struct FortificationAutomaticDialogComponent_DetailInfo_o *detail; // x9
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *CS___8__locals2; // x8
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *CS___8__locals1; // x10
  int32_t classId; // w22
  ServantClassMaster_o *svtClassMst; // x21
  struct FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *v10; // x8
  struct FortificationAutomaticDialogComponent_o *_4__this; // x8
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x20
  __int64 v13; // x19
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = this;
  if ( (byte_4BE0590 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BE0590 = 1;
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
  v10 = CS___8__locals2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_20;
  _4__this = v10->fields.__4__this;
  if ( !_4__this || !x )
    goto LABEL_20;
  setSvtIdList = _4__this->fields.setSvtIdList;
  v14 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                                                            v17,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_20:
    sub_1C22094(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_1C22094(this, info);
  return info->fields.position == detail->fields.position;
}