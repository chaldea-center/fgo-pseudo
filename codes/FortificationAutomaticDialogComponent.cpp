void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_43553DE & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_43553DE = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__AutoSet(
        FortificationAutomaticDialogComponent_o *this,
        bool isSet,
        const MethodInfo *method)
{
  __int64 v5; // x22
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  const MethodInfo *v15; // x3
  __int64 v16; // x24
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_HashSet_int__o *v23; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x3
  FortificationAutomaticDialogComponent___c_c **v31; // x22
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v32; // x25
  FortificationAutomaticDialogComponent___c_c *v33; // x8
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__18_1; // x26
  Il2CppObject *v36; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x0
  Il2CppObject *v45; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x21
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v47; // x23
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  unsigned __int64 v58; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *v61; // x27
  FortificationAutomaticDialogComponent_o *v62; // x26
  _BOOL8 v63; // x0
  __int64 v64; // x1
  int32_t v65; // w19
  int32_t klass_high; // w21
  EnterUserSvtInfo_o *v67; // x22
  __int64 v68; // x0
  __int64 v69; // x1
  FortificationAutomaticDialogComponent_o *v70; // x21
  Il2CppObject *v71; // x25
  __int64 v72; // x1
  __int64 v73; // x23
  System_Collections_IEnumerator_c **v74; // x21
  __int64 v75; // x8
  System_Collections_IEnumerator_c *v76; // x1
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  __int64 v80; // x27
  __int64 v81; // x0
  __int64 v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x8
  unsigned __int64 v90; // x10
  int *v91; // x11
  __int64 v92; // x0
  System_Int32_array **v93; // x0
  __int64 *v94; // x26
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v101; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x27
  FortificationAutomaticDialogComponent___c_c *v104; // x0
  struct FortificationAutomaticDialogComponent___c_StaticFields *v105; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__18_4; // x28
  Il2CppObject *v107; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v115; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v116; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v117; // x27
  FortificationAutomaticDialogComponent___c_c **v118; // x20
  System_Collections_IEnumerator_c **v119; // x22
  __int64 v120; // x19
  __int64 v121; // x21
  System_Collections_Generic_HashSet_int__o *v122; // x28
  __int64 v123; // x0
  _BOOL8 v124; // x0
  __int64 v125; // x1
  __int64 v126; // x8
  __int128 v127; // q0
  __int128 v128; // q1
  int32_t v129; // w26
  int32_t v130; // w27
  int64_t v131; // x19
  EnterUserSvtInfo_o *v132; // x28
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x8
  unsigned __int64 v136; // x10
  int *v137; // x11
  __int64 v138; // x0
  NetworkManager_ResultCallbackFunc_o *v139; // x22
  int32_t eventId; // w21
  EventFortificationRequest_o *v141; // x19
  Il2CppObject *v142; // [xsp+0h] [xbp-E0h]
  FortificationAutomaticDialogComponent_o *v143; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v144; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v146; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v147; // [xsp+40h] [xbp-A0h] BYREF
  int v148; // [xsp+60h] [xbp-80h]
  int v149; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v150; // [xsp+70h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16

  if ( (byte_43553D9 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&EnterUserSvtInfo_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
    sub_B70694(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_UserServantEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_UserServantEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__);
    sub_B70694(&Method_System_Func_UserServantEntity__int___ctor__);
    sub_B70694(&Method_System_Func_UserServantEntity__bool___ctor__);
    sub_B70694(&Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
    sub_B70694(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_B70694(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
    sub_B70694(&System_Func_UserServantEntity__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_EventFortificationRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__);
    sub_B70694(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__);
    sub_B70694(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_B70694(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__);
    sub_B70694(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
    sub_B70694(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    sub_B70694(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__);
    sub_B70694(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
    sub_B70694(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_43553D9 = 1;
  }
  entities = 0LL;
  memset(&v150, 0, sizeof(v150));
  v149 = 0;
  v5 = sub_B70764(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  FortificationAutomaticDialogComponent___c__DisplayClass18_0___ctor(
    (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_100;
  *(_QWORD *)(v5 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 32) = isSet;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v5 + 16) = 0x800000000LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_100;
  if ( !EventFortificationMaster__TryGetEntityList(Master_WarQuestSelectionMaster, &entities, this->fields.eventId, 0LL) )
    return;
  v144 = v14;
  if ( *(_BYTE *)(v5 + 32) )
  {
    v16 = sub_B70764(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    FortificationAutomaticDialogComponent___c__DisplayClass18_1___ctor(
      (FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *)v16,
      0LL);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 24) = v5;
      v142 = (Il2CppObject *)v5;
      sub_B70630((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)v5, v17, v18, v19, v20, v21, v22);
      v23 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v23,
        (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
      this->fields.setSvtIdList = v23;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.setSvtIdList,
        (System_Int32_array **)v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v143 = this;
      v31 = &FortificationAutomaticDialogComponent___c_TypeInfo;
      v32 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v30);
      v33 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( (BYTE3(FortificationAutomaticDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v33 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      static_fields = v33->static_fields;
      _9__18_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        }
        v36 = (Il2CppObject *)static_fields->__9;
        _9__18_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__18_1,
          v36,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          (const MethodInfo_29AD124 *)Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
        v37 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        v37->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_B70630(
          (BattleServantConfConponent_o *)&v37->__9__18_1,
          (System_Int32_array **)_9__18_1,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
      }
      v44 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v32,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_1CBFB4C *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v45 = *(Il2CppObject **)(v16 + 24);
      v46 = v44;
      v47 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        v47,
        v45,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        (const MethodInfo_29AD124 *)Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
      v48 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
              v46,
              (System_Func_TSource__TKey__o *)v47,
              (const MethodInfo_1CC8200 *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                                                                  0LL);
        v50 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v16 + 16) = v50;
        sub_B70630((BattleServantConfConponent_o *)(v16 + 16), v50, v51, v52, v53, v54, v55, v56);
        if ( v48 )
        {
          klass = v48->klass;
          if ( *(_WORD *)&v48->klass->_2.bitflags1 )
          {
            v58 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              ++v58;
              p_offset += 4;
              if ( v58 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
                goto LABEL_28;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_28:
            p_method = sub_B08590(
                         v48,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL);
          }
          v73 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                  v48,
                  *(_QWORD *)(p_method + 8));
          if ( !v73 )
            sub_B7076C(0LL, v72);
          v74 = &System_Collections_IEnumerator_TypeInfo;
          while ( 1 )
          {
            v75 = *(_QWORD *)v73;
            v76 = *v74;
            if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
            {
              v77 = 0LL;
              v78 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v78 - 1) != v76 )
              {
                ++v77;
                v78 += 4;
                if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
                  goto LABEL_43;
              }
              v79 = v75 + 16LL * *v78 + 312;
            }
            else
            {
LABEL_43:
              v79 = sub_B08590(v73, v76, 0LL);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v73, *(_QWORD *)(v79 + 8)) & 1) == 0 )
              break;
            v80 = sub_B70764(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            FortificationAutomaticDialogComponent___c__DisplayClass18_2___ctor(
              (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)v80,
              0LL);
            if ( !v80 )
              sub_B7076C(v81, v82);
            *(_QWORD *)(v80 + 24) = v16;
            sub_B70630(
              (BattleServantConfConponent_o *)(v80 + 24),
              (System_Int32_array **)v16,
              v83,
              v84,
              v85,
              v86,
              v87,
              v88);
            v89 = *(_QWORD *)v73;
            if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
            {
              v90 = 0LL;
              v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v91
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                ++v90;
                v91 += 4;
                if ( v90 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
                  goto LABEL_51;
              }
              v92 = v89 + 16LL * *v91 + 312;
            }
            else
            {
LABEL_51:
              v92 = sub_B08590(
                      v73,
                      System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                      0LL);
            }
            v93 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v73, *(_QWORD *)(v92 + 8));
            *(_QWORD *)(v80 + 16) = v93;
            v94 = (__int64 *)(v80 + 16);
            sub_B70630((BattleServantConfConponent_o *)(v80 + 16), v93, v95, v96, v97, v98, v99, v100);
            v101 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v101,
              (Il2CppObject *)v80,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              (const MethodInfo_29AC578 *)Method_System_Func_UserServantEntity__bool___ctor__);
            v102 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v101,
                     (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v103 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v102,
                                                                          (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v104 = *v31;
            if ( (BYTE3((*v31)->vtable._0_Equals.methodPtr) & 4) != 0 && !v104->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v104);
              v104 = *v31;
            }
            v105 = v104->static_fields;
            _9__18_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v105->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( (BYTE3(v104->vtable._0_Equals.methodPtr) & 4) != 0 && !v104->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v104);
                v105 = (*v31)->static_fields;
              }
              v107 = (Il2CppObject *)v105->__9;
              _9__18_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__18_4,
                v107,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                (const MethodInfo_29AD124 *)Method_System_Func_UserServantEntity__int___ctor__);
              v108 = (*v31)->static_fields;
              v108->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_B70630(
                (BattleServantConfConponent_o *)&v108->__9__18_4,
                (System_Int32_array **)_9__18_4,
                v109,
                v110,
                v111,
                v112,
                v113,
                v114);
            }
            v115 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                          v103,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_1CBFF6C *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v116 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                     v115,
                     (const MethodInfo_1CBC6C4 *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v117 = v116;
            if ( v116 )
            {
              v118 = v31;
              v119 = v74;
              v121 = *(_QWORD *)&v116[1].fields.freeStoneNum;
              v120 = *(_QWORD *)&v116[1].fields.isCommitedAlready;
              v122 = *p_setSvtIdList;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v152.fields.currentCryptoKey = v121;
              *(_QWORD *)&v152.fields.fakeValue = v120;
              v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v152, 0LL);
              if ( !v122 )
                sub_B7076C(v123, (unsigned int)v123);
              v74 = v119;
              v124 = System_Collections_Generic_HashSet_int___Add(
                       v122,
                       v123,
                       (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
              v126 = *v94;
              if ( !*v94 )
                sub_B7076C(v124, v125);
              v127 = *(_OWORD *)&v117->fields.purchasedBankShopId;
              v128 = *(_OWORD *)&v117->fields.freeStoneNum;
              v130 = *(_DWORD *)(v126 + 16);
              v129 = *(_DWORD *)(v126 + 20);
              v31 = v118;
              *(_OWORD *)&v147.fields.currentCryptoKey = v127;
              *(_OWORD *)&v147.fields.fakeValue = v128;
              v14 = v144;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v146 = v147;
              v131 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v146, 0LL);
              v132 = (EnterUserSvtInfo_o *)sub_B70764(EnterUserSvtInfo_TypeInfo);
              EnterUserSvtInfo___ctor(v132, v130, v129, v131, 0LL);
              if ( !v144 )
                sub_B7076C(v133, v134);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v144,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v132,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
            }
          }
          v71 = v142;
          v70 = v143;
          v148 = 399;
          v149 = 1;
          v135 = *(_QWORD *)v73;
          if ( *(_WORD *)(*(_QWORD *)v73 + 298LL) )
          {
            v136 = 0LL;
            v137 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v137 - 1) != System_IDisposable_TypeInfo )
            {
              ++v136;
              v137 += 4;
              if ( v136 >= *(unsigned __int16 *)(*(_QWORD *)v73 + 298LL) )
                goto LABEL_77;
            }
            v138 = v135 + 16LL * *v137 + 312;
          }
          else
          {
LABEL_77:
            v138 = sub_B08590(v73, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v138)(v73, *(_QWORD *)(v138 + 8));
          if ( v148 == 399 )
            v149 = 0;
          Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
              (const MethodInfo_2EAE48C *)Method_System_Collections_Generic_HashSet_int__Clear__);
            goto LABEL_84;
          }
        }
      }
    }
LABEL_100:
    sub_B7076C(Master_WarQuestSelectionMaster, v7);
  }
  v61 = (Il2CppObject *)v5;
  v62 = this;
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                                   this,
                                                                   entities,
                                                                   0,
                                                                   v15);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_100;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v147,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  v150.fields.current = (Il2CppObject *)v147.fields.fakeValue;
  *(_OWORD *)&v150.fields.list = *(_OWORD *)&v147.fields.currentCryptoKey;
  while ( 1 )
  {
    v63 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v150,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v63 )
      break;
    if ( !v150.fields.current )
      sub_B7076C(v63, v64);
    v65 = (int32_t)v150.fields.current[1].klass;
    klass_high = HIDWORD(v150.fields.current[1].klass);
    v67 = (EnterUserSvtInfo_o *)sub_B70764(EnterUserSvtInfo_TypeInfo);
    EnterUserSvtInfo___ctor(v67, v65, klass_high, 0LL, 0LL);
    if ( !v14 )
      sub_B7076C(v68, v69);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v14,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
  }
  v148 = 494;
  v149 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v150,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
  v149 = 0;
  v70 = v62;
  v71 = v61;
LABEL_84:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v139 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v139,
    v71,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v139,
                                                                   (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v14 )
    goto LABEL_100;
  eventId = v70->fields.eventId;
  v141 = (EventFortificationRequest_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                                                   (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v141 )
    goto LABEL_100;
  EventFortificationRequest__beginRequest(v141, eventId, (EnterUserSvtInfo_array *)Master_WarQuestSelectionMaster, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_43553DC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__);
    byte_43553DC = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
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
    sub_B7076C(0LL, v6);
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

  if ( (byte_43553DB & 1) == 0 )
  {
    sub_B70694(&Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    byte_43553DB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UILabel_o *titleLb; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v24; // x20

  if ( (byte_43553D8 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_6506/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_6507/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_6508/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/);
    sub_B70694(&StringLiteral_6509/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/);
    byte_43553D8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      (System_String_array **)closeCallBack,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.closeCallBack = closeCallBack;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.closeCallBack,
      (System_Int32_array **)closeCallBack,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6509/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_13;
    UILabel__set_text(titleLb, v18, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6506/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_13;
    UILabel__set_text(descriptionLb, v18, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6508/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v18, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6507/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v18, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_13:
      sub_B7076C(v18, v19);
    }
    UILabel__set_text(cancelButtonLb, v18, 0LL);
    this->fields.state = 1;
    v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  EventFortificationDetailMaster_o *v7; // x23
  WarQuestSelectionMaster_o *v8; // x0
  __int64 v9; // x1
  EventFortificationSvtMaster_o *v10; // x24
  int v11; // w10
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  __int64 v15; // x1
  int64_t UserId; // x2
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int v19; // w9
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x25
  int32_t klass_high; // w26
  int32_t monitor; // w27
  int32_t v25; // w28
  FortificationAutomaticDialogComponent_DetailInfo_o *v26; // x25
  __int64 v27; // x0
  __int64 v28; // x1
  int v29; // w26
  int v30; // w8
  __int64 v31; // x26
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  __int64 v41; // x25
  __int64 v42; // x0
  __int64 v43; // x1
  struct SetSvtInfo_array *setSvtInfos; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v45; // x28
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  __int64 v47; // x1
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v48; // x26
  __int64 v49; // x1
  int32_t v50; // w28
  int32_t v51; // w27
  int32_t v52; // w26
  FortificationAutomaticDialogComponent_DetailInfo_o *v53; // x25
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x8
  int32_t v57; // w27
  int32_t v58; // w28
  int32_t v59; // w26
  __int64 v60; // x0
  __int64 v61; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v63; // x0
  __int64 v64; // x1
  int32_t v65; // w28
  int32_t v66; // w27
  int32_t treasureDeviceIds; // w26
  __int64 v68; // x0
  __int64 v69; // x1
  int v70; // w26
  int v71; // w21
  int v73; // [xsp+Ch] [xbp-F4h]
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-F0h]
  int v76; // [xsp+20h] [xbp-E0h]
  _BYTE v77[36]; // [xsp+28h] [xbp-D8h] BYREF
  int v78; // [xsp+4Ch] [xbp-B4h]
  EventFortificationSvtEntity_o *v79; // [xsp+50h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v80; // [xsp+58h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+60h] [xbp-A0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+80h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+88h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+90h] [xbp-70h] BYREF

  v4 = isSet;
  if ( (byte_43553DA & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Find_SetSvtInfo___);
    sub_B70694(&Method_DataManager_GetMaster_EventFortificationDetailMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventFortificationSvtMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserEventFortificationMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__);
    sub_B70694(&Method_System_Func_SetSvtInfo__bool___ctor__);
    sub_B70694(&System_Func_SetSvtInfo__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__);
    sub_B70694(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
    byte_43553DA = 1;
  }
  memset(&v84, 0, sizeof(v84));
  entities = 0LL;
  entity = 0LL;
  memset(&v81, 0, sizeof(v81));
  v79 = 0LL;
  v80 = 0LL;
  v78 = 0;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v7 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v8 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_B7076C(v8, v9);
  v10 = (EventFortificationSvtMaster_o *)v8;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v77,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)teamList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v11 = 0;
  v84 = *(System_Collections_Generic_List_Enumerator_T__o *)v77;
LABEL_8:
  v76 = v11;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v84,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v12 )
      break;
    current = v84.fields.current;
    if ( !v84.fields.current )
      sub_B7076C(v12, v13);
    if ( !v7 )
      sub_B7076C(v12, v13);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v7,
           &entities,
           (int32_t)v84.fields.current[1].klass,
           HIDWORD(v84.fields.current[1].klass),
           0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B7076C(0LL, v15);
      v17 = UserEventFortificationMaster__TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              UserId,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( !v17 )
        goto LABEL_21;
      if ( !entity )
        sub_B7076C(v17, v18);
      if ( entity->fields.setSvtInfos )
      {
        v19 = v76;
      }
      else
      {
LABEL_21:
        if ( !entities )
          sub_B7076C(0LL, v18);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v77,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
        v81 = *(System_Collections_Generic_List_Enumerator_T__o *)v77;
        while ( 1 )
        {
          v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v81,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
          if ( !v20 )
            break;
          v22 = v81.fields.current;
          if ( !v81.fields.current )
            sub_B7076C(v20, v21);
          if ( !v10 )
            sub_B7076C(v20, v21);
          if ( !EventFortificationSvtMaster__TryGetEntity(
                  v10,
                  &v80,
                  (int32_t)current[1].klass,
                  HIDWORD(current[1].klass),
                  (int32_t)v81.fields.current[1].monitor,
                  0LL)
            && v4 )
          {
            klass_high = HIDWORD(current[1].klass);
            monitor = (int32_t)v22[1].monitor;
            v25 = (int32_t)v22[2].monitor;
            v26 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B70764(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
            FortificationAutomaticDialogComponent_DetailInfo___ctor(v26, klass_high, monitor, v25, 0LL);
            if ( !v6 )
              sub_B7076C(v27, v28);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v6,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
          }
        }
        *(_DWORD *)&v77[4 * v76 + 24] = 551;
        v29 = ++v78;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v81,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
        if ( v29 )
        {
          v30 = v29 - 1;
          v19 = v29;
          if ( *(_DWORD *)&v77[4 * v29 + 20] == 551 )
            goto LABEL_62;
        }
        else
        {
          v19 = 0;
        }
      }
      v73 = v19;
      if ( !entities )
        sub_B7076C(0LL, v18);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v77,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v81 = *(System_Collections_Generic_List_Enumerator_T__o *)v77;
      while ( 1 )
      {
LABEL_35:
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v81,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
        {
          *(_DWORD *)&v77[4 * v73 + 24] = 551;
          v70 = ++v78;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v81,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
          v11 = 0;
          if ( v70 )
          {
            v30 = v70 - 1;
            v11 = v70;
            if ( *(_DWORD *)&v77[4 * v70 + 20] == 551 )
            {
LABEL_62:
              v11 = v30;
              v78 = v30;
            }
          }
          goto LABEL_8;
        }
        v31 = sub_B70764(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
        FortificationAutomaticDialogComponent___c__DisplayClass19_0___ctor(
          (FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *)v31,
          0LL);
        if ( !v31 )
          sub_B7076C(v32, v33);
        v40 = (System_Int32_array **)v81.fields.current;
        *(_QWORD *)(v31 + 16) = v81.fields.current;
        v41 = v31 + 16;
        sub_B70630((BattleServantConfConponent_o *)(v31 + 16), v40, v34, v35, v36, v37, v38, v39);
        if ( !entity )
          sub_B7076C(v42, v43);
        setSvtInfos = entity->fields.setSvtInfos;
        v45 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_SetSvtInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v45,
          (Il2CppObject *)v31,
          Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
          (const MethodInfo_29AC578 *)Method_System_Func_SetSvtInfo__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)setSvtInfos,
                                                                           (System_Func_T__bool__o *)v45,
                                                                           (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_SetSvtInfo___);
        v48 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
        {
          if ( !v4 )
            continue;
          v56 = *(_QWORD *)v41;
          if ( !*(_QWORD *)v41 )
            sub_B7076C(0LL, v47);
          v57 = *(_DWORD *)(v56 + 24);
          v58 = *(_DWORD *)(v56 + 40);
          v59 = HIDWORD(current[1].klass);
          v53 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B70764(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          FortificationAutomaticDialogComponent_DetailInfo___ctor(v53, v59, v57, v58, 0LL);
          if ( !v6 )
            sub_B7076C(v60, v61);
          goto LABEL_59;
        }
        v49 = *(unsigned int *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
        if ( !(_DWORD)v49 && v4 )
          break;
        if ( (_DWORD)v49
          && !HIDWORD(USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds)
          && v4 )
        {
          setSvtIdList = this->fields.setSvtIdList;
          if ( !setSvtIdList )
            sub_B7076C(0LL, v49);
          System_Collections_Generic_HashSet_int___Add(
            setSvtIdList,
            v49,
            (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        else if ( (_DWORD)v49 && !v4 )
        {
          if ( !v10 )
            sub_B7076C(USFGOActorBattleActionEventConditional_OverwriteParamCondition, v49);
          v63 = EventFortificationSvtMaster__TryGetEntity(
                  v10,
                  &v79,
                  (int32_t)current[1].klass,
                  HIDWORD(current[1].klass),
                  (int32_t)USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds,
                  0LL);
          if ( !v63 )
          {
            if ( !*(_QWORD *)v41 )
              sub_B7076C(v63, v64);
            v65 = *(_DWORD *)(*(_QWORD *)v41 + 40LL);
            v66 = HIDWORD(current[1].klass);
            treasureDeviceIds = (int32_t)v48->fields.treasureDeviceIds;
            v53 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B70764(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
            FortificationAutomaticDialogComponent_DetailInfo___ctor(v53, v66, treasureDeviceIds, v65, 0LL);
            if ( !v6 )
              sub_B7076C(v68, v69);
            goto LABEL_59;
          }
        }
      }
      if ( !*(_QWORD *)v41 )
        sub_B7076C(USFGOActorBattleActionEventConditional_OverwriteParamCondition, v49);
      v50 = *(_DWORD *)(*(_QWORD *)v41 + 40LL);
      v51 = HIDWORD(current[1].klass);
      v52 = (int32_t)USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds;
      v53 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B70764(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
      FortificationAutomaticDialogComponent_DetailInfo___ctor(v53, v51, v52, v50, 0LL);
      if ( !v6 )
        sub_B7076C(v54, v55);
LABEL_59:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v53,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
      goto LABEL_35;
    }
  }
  *(_DWORD *)&v77[4 * v76 + 24] = 579;
  v71 = ++v78;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v84,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  if ( v71 && *(_DWORD *)&v77[4 * v71 + 20] == 579 )
    v78 = v71 - 1;
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

  if ( (byte_43553DD & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43553DD = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B7076C(0LL, v4);
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
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_434EAC3 & 1) == 0 )
  {
    sub_B70694(&FortificationAutomaticDialogComponent___c_TypeInfo);
    byte_434EAC3 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
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
  if ( (byte_434EAC4 & 1) == 0 )
  {
    sub_B70694(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_B70694(&StringLiteral_16681/*"ar200"*/);
    byte_434EAC4 = 1;
  }
  if ( v4->fields.isSet )
  {
    v5 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B7069C(Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__);
    v6 = (System_Reflection_MethodBase_o *)sub_B70678(v5, v5[3]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v6,
                                                                              (System_String_o *)StringLiteral_16681/*"ar200"*/,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_B7076C(this, result);
  FortificationAutomaticDialogComponent__Close((FortificationAutomaticDialogComponent_o *)this, 0LL);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_B7076C(this, 0LL);
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
  if ( (byte_434EAC5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434EAC5 = 1;
  }
  detail = v4->fields.detail;
  if ( !detail )
    goto LABEL_21;
  CS___8__locals2 = v4->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_21;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_21;
  classId = detail->fields.classId;
  if ( classId != CS___8__locals1->fields.typeAll )
  {
    if ( !x )
      goto LABEL_21;
    svtClassMst = CS___8__locals2->fields.svtClassMst;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)UserServantEntity__getSvtClassId(x, 0LL);
    if ( !svtClassMst )
      goto LABEL_21;
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)ServantClassMaster__getSupportGroupType(
                                                                              svtClassMst,
                                                                              (int32_t)this,
                                                                              0LL);
    if ( classId != (_DWORD)this )
      return 0;
    CS___8__locals2 = v4->fields.CS___8__locals2;
    if ( !CS___8__locals2 )
      goto LABEL_21;
  }
  v10 = CS___8__locals2->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_21;
  _4__this = v10->fields.__4__this;
  if ( !_4__this || !x )
    goto LABEL_21;
  setSvtIdList = _4__this->fields.setSvtIdList;
  v14 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                            v17,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_21:
    sub_B7076C(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_B7076C(this, info);
  return info->fields.position == detail->fields.position;
}