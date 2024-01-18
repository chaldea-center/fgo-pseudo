void __fastcall FortificationAutomaticDialogComponent___ctor(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AAA3 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AAA3 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x22
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x20
  const MethodInfo *v62; // x3
  __int64 v63; // x24
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_HashSet_int__o *v70; // x19
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  const MethodInfo *v77; // x3
  FortificationAutomaticDialogComponent___c_c **v78; // x22
  System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *v79; // x25
  FortificationAutomaticDialogComponent___c_c *v80; // x8
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__18_1; // x26
  Il2CppObject *v83; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v91; // x0
  Il2CppObject *v92; // x19
  System_Linq_IOrderedEnumerable_TSource__o *v93; // x21
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *v94; // x23
  System_Linq_IOrderedEnumerable_TSource__o *v95; // x23
  System_Collections_Generic_IEnumerable_TSource__o *OrganizationList; // x25
  System_Int32_array **v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  unsigned __int64 v106; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *v109; // x27
  FortificationAutomaticDialogComponent_o *v110; // x26
  _BOOL8 v111; // x0
  __int64 v112; // x1
  int32_t v113; // w19
  int32_t klass_high; // w21
  EnterUserSvtInfo_o *v115; // x22
  __int64 v116; // x0
  __int64 v117; // x1
  FortificationAutomaticDialogComponent_o *v118; // x21
  Il2CppObject *v119; // x25
  __int64 v120; // x1
  __int64 v121; // x3
  __int64 v122; // x23
  System_Collections_IEnumerator_c **v123; // x21
  __int64 v124; // x8
  System_Collections_IEnumerator_c *v125; // x1
  unsigned __int64 v126; // x10
  int *v127; // x11
  __int64 v128; // x0
  __int64 v129; // x3
  __int64 v130; // x27
  __int64 v131; // x0
  __int64 v132; // x1
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  __int64 v139; // x3
  __int64 v140; // x8
  unsigned __int64 v141; // x10
  int *v142; // x11
  __int64 v143; // x0
  System_Int32_array **v144; // x0
  __int64 *v145; // x26
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v152; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v153; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v154; // x27
  FortificationAutomaticDialogComponent___c_c *v155; // x0
  struct FortificationAutomaticDialogComponent___c_StaticFields *v156; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__18_4; // x28
  Il2CppObject *v158; // x19
  struct FortificationAutomaticDialogComponent___c_StaticFields *v159; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v166; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v167; // x0
  PurchaseByBank_UnityIap_Request_PurchaseResult_o *v168; // x27
  FortificationAutomaticDialogComponent___c_c **v169; // x20
  System_Collections_IEnumerator_c **v170; // x22
  __int64 v171; // x19
  __int64 v172; // x21
  System_Collections_Generic_HashSet_int__o *v173; // x28
  __int64 v174; // x0
  _BOOL8 v175; // x0
  __int64 v176; // x1
  __int64 v177; // x8
  __int128 v178; // q0
  __int128 v179; // q1
  int32_t v180; // w26
  int32_t v181; // w27
  int64_t v182; // x19
  EnterUserSvtInfo_o *v183; // x28
  __int64 v184; // x0
  __int64 v185; // x1
  __int64 v186; // x8
  unsigned __int64 v187; // x10
  int *v188; // x11
  __int64 v189; // x0
  NetworkManager_ResultCallbackFunc_o *v190; // x22
  int32_t eventId; // w21
  EventFortificationRequest_o *v192; // x19
  Il2CppObject *v193; // [xsp+0h] [xbp-E0h]
  FortificationAutomaticDialogComponent_o *v194; // [xsp+8h] [xbp-D8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v195; // [xsp+10h] [xbp-D0h]
  struct System_Collections_Generic_HashSet_int__o **p_setSvtIdList; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v197; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v198; // [xsp+40h] [xbp-A0h] BYREF
  int v199; // [xsp+60h] [xbp-80h]
  int v200; // [xsp+68h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v201; // [xsp+70h] [xbp-70h] BYREF
  System_Collections_Generic_List_EventFortificationEntity__o *entities; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v203; // 0:x0.16

  if ( (byte_418AA9E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventFortificationMaster___, isSet);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantClassMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&EnterUserSvtInfo_TypeInfo, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___, v11);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___,
      v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_UserServantEntity___, v13);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_UserServantEntity___, v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__,
      v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__,
      v16);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__get_Current__,
      v17);
    sub_B2C35C(&Method_System_Func_UserServantEntity__int___ctor__, v18);
    sub_B2C35C(&Method_System_Func_UserServantEntity__bool___ctor__, v19);
    sub_B2C35C(&Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__, v20);
    sub_B2C35C(&System_Func_UserServantEntity__bool__TypeInfo, v21);
    sub_B2C35C(&System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo, v22);
    sub_B2C35C(&System_Func_UserServantEntity__int__TypeInfo, v23);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Clear__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v26);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v27);
    sub_B2C35C(&System_IDisposable_TypeInfo, v28);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v29);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v30);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__, v32);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__,
      v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__, v35);
    sub_B2C35C(&System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo, v36);
    sub_B2C35C(&Method_NetworkManager_getRequest_EventFortificationRequest___, v37);
    sub_B2C35C(&NetworkManager_TypeInfo, v38);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v41);
    sub_B2C35C(&SoundManager_TypeInfo, v42);
    sub_B2C35C(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__, v43);
    sub_B2C35C(&Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__, v44);
    sub_B2C35C(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, v45);
    sub_B2C35C(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__, v46);
    sub_B2C35C(&FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo, v47);
    sub_B2C35C(&FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo, v48);
    sub_B2C35C(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__, v49);
    sub_B2C35C(&FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo, v50);
    sub_B2C35C(&FortificationAutomaticDialogComponent___c_TypeInfo, v51);
    byte_418AA9E = 1;
  }
  entities = 0LL;
  memset(&v201, 0, sizeof(v201));
  v200 = 0;
  v52 = sub_B2C42C(FortificationAutomaticDialogComponent___c__DisplayClass18_0_TypeInfo);
  FortificationAutomaticDialogComponent___c__DisplayClass18_0___ctor(
    (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v52,
    0LL);
  if ( !v52 )
    goto LABEL_100;
  *(_QWORD *)(v52 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v52 + 24), (System_Int32_array **)this, v55, v56, v57, v58, v59, v60);
  *(_BYTE *)(v52 + 32) = isSet;
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EnterUserSvtInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EnterUserSvtInfo___ctor__);
  *(_QWORD *)(v52 + 16) = 0x800000000LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_100;
  if ( !EventFortificationMaster__TryGetEntityList(Master_WarQuestSelectionMaster, &entities, this->fields.eventId, 0LL) )
    return;
  v195 = v61;
  if ( *(_BYTE *)(v52 + 32) )
  {
    v63 = sub_B2C42C(FortificationAutomaticDialogComponent___c__DisplayClass18_1_TypeInfo);
    FortificationAutomaticDialogComponent___c__DisplayClass18_1___ctor(
      (FortificationAutomaticDialogComponent___c__DisplayClass18_1_o *)v63,
      0LL);
    if ( v63 )
    {
      *(_QWORD *)(v63 + 24) = v52;
      v193 = (Il2CppObject *)v52;
      sub_B2C2F8((BattleServantConfConponent_o *)(v63 + 24), (System_Int32_array **)v52, v64, v65, v66, v67, v68, v69);
      v70 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v70,
        (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
      this->fields.setSvtIdList = v70;
      p_setSvtIdList = &this->fields.setSvtIdList;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.setSvtIdList,
        (System_Int32_array **)v70,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      v194 = this;
      v78 = &FortificationAutomaticDialogComponent___c_TypeInfo;
      v79 = FortificationAutomaticDialogComponent__ReferenceDetailList(this, entities, 1, v77);
      v80 = FortificationAutomaticDialogComponent___c_TypeInfo;
      if ( (BYTE3(FortificationAutomaticDialogComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FortificationAutomaticDialogComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FortificationAutomaticDialogComponent___c_TypeInfo);
        v80 = FortificationAutomaticDialogComponent___c_TypeInfo;
      }
      static_fields = v80->static_fields;
      _9__18_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v80);
          static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        }
        v83 = (Il2CppObject *)static_fields->__9;
        _9__18_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__18_1,
          v83,
          Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_1__,
          (const MethodInfo_27127B0 *)Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
        v84 = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
        v84->__9__18_1 = (struct System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__o *)_9__18_1;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v84->__9__18_1,
          (System_Int32_array **)_9__18_1,
          v85,
          v86,
          v87,
          v88,
          v89,
          v90);
      }
      v91 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v79,
              (System_Func_TSource__TKey__o *)_9__18_1,
              (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_FortificationAutomaticDialogComponent_DetailInfo__int___);
      v92 = *(Il2CppObject **)(v63 + 24);
      v93 = v91;
      v94 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_FortificationAutomaticDialogComponent_DetailInfo__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        v94,
        v92,
        Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__2__,
        (const MethodInfo_27127B0 *)Method_System_Func_FortificationAutomaticDialogComponent_DetailInfo__int___ctor__);
      v95 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
              v93,
              (System_Func_TSource__TKey__o *)v94,
              (const MethodInfo_1A9AAC0 *)Method_System_Linq_Enumerable_ThenByDescending_FortificationAutomaticDialogComponent_DetailInfo__int___);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        OrganizationList = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__getOrganizationList(
                                                                                  (UserServantMaster_o *)Master_WarQuestSelectionMaster,
                                                                                  0LL);
        v97 = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantClassMaster___);
        *(_QWORD *)(v63 + 16) = v97;
        sub_B2C2F8((BattleServantConfConponent_o *)(v63 + 16), v97, v98, v99, v100, v101, v102, v103);
        if ( v95 )
        {
          klass = v95->klass;
          if ( *(_WORD *)&v95->klass->_2.bitflags1 )
          {
            v106 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__c **)p_offset
                    - 1) != System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
            {
              ++v106;
              p_offset += 4;
              if ( v106 >= *(unsigned __int16 *)&v95->klass->_2.bitflags1 )
                goto LABEL_28;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_28:
            p_method = sub_AC5258(
                         v95,
                         System_Collections_Generic_IEnumerable_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                         0LL,
                         v104);
          }
          v122 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
                   v95,
                   *(_QWORD *)(p_method + 8));
          if ( !v122 )
            sub_B2C434(0LL, v120);
          v123 = &System_Collections_IEnumerator_TypeInfo;
          while ( 1 )
          {
            v124 = *(_QWORD *)v122;
            v125 = *v123;
            if ( *(_WORD *)(*(_QWORD *)v122 + 298LL) )
            {
              v126 = 0LL;
              v127 = (int *)(*(_QWORD *)(v124 + 176) + 8LL);
              while ( *((System_Collections_IEnumerator_c **)v127 - 1) != v125 )
              {
                ++v126;
                v127 += 4;
                if ( v126 >= *(unsigned __int16 *)(*(_QWORD *)v122 + 298LL) )
                  goto LABEL_43;
              }
              v128 = v124 + 16LL * *v127 + 312;
            }
            else
            {
LABEL_43:
              v128 = sub_AC5258(v122, v125, 0LL, v121);
            }
            if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v128)(v122, *(_QWORD *)(v128 + 8)) & 1) == 0 )
              break;
            v130 = sub_B2C42C(FortificationAutomaticDialogComponent___c__DisplayClass18_2_TypeInfo);
            FortificationAutomaticDialogComponent___c__DisplayClass18_2___ctor(
              (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)v130,
              0LL);
            if ( !v130 )
              sub_B2C434(v131, v132);
            *(_QWORD *)(v130 + 24) = v63;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v130 + 24),
              (System_Int32_array **)v63,
              v133,
              v134,
              v135,
              v136,
              v137,
              v138);
            v140 = *(_QWORD *)v122;
            if ( *(_WORD *)(*(_QWORD *)v122 + 298LL) )
            {
              v141 = 0LL;
              v142 = (int *)(*(_QWORD *)(v140 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__c **)v142
                      - 1) != System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo )
              {
                ++v141;
                v142 += 4;
                if ( v141 >= *(unsigned __int16 *)(*(_QWORD *)v122 + 298LL) )
                  goto LABEL_51;
              }
              v143 = v140 + 16LL * *v142 + 312;
            }
            else
            {
LABEL_51:
              v143 = sub_AC5258(
                       v122,
                       System_Collections_Generic_IEnumerator_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo,
                       0LL,
                       v139);
            }
            v144 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v143)(v122, *(_QWORD *)(v143 + 8));
            *(_QWORD *)(v130 + 16) = v144;
            v145 = (__int64 *)(v130 + 16);
            sub_B2C2F8((BattleServantConfConponent_o *)(v130 + 16), v144, v146, v147, v148, v149, v150, v151);
            v152 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v152,
              (Il2CppObject *)v130,
              Method_FortificationAutomaticDialogComponent___c__DisplayClass18_2__AutoSet_b__3__,
              (const MethodInfo_2711C04 *)Method_System_Func_UserServantEntity__bool___ctor__);
            v153 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                     OrganizationList,
                     (System_Func_TSource__bool__o *)v152,
                     (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_UserServantEntity___);
            v154 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v153,
                                                                          (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_UserServantEntity___);
            v155 = *v78;
            if ( (BYTE3((*v78)->vtable._0_Equals.methodPtr) & 4) != 0 && !v155->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v155);
              v155 = *v78;
            }
            v156 = v155->static_fields;
            _9__18_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v156->__9__18_4;
            if ( !_9__18_4 )
            {
              if ( (BYTE3(v155->vtable._0_Equals.methodPtr) & 4) != 0 && !v155->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v155);
                v156 = (*v78)->static_fields;
              }
              v158 = (Il2CppObject *)v156->__9;
              _9__18_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantEntity__int__TypeInfo);
              System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
                _9__18_4,
                v158,
                Method_FortificationAutomaticDialogComponent___c__AutoSet_b__18_4__,
                (const MethodInfo_27127B0 *)Method_System_Func_UserServantEntity__int___ctor__);
              v159 = (*v78)->static_fields;
              v159->__9__18_4 = (struct System_Func_UserServantEntity__int__o *)_9__18_4;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v159->__9__18_4,
                (System_Int32_array **)_9__18_4,
                v160,
                v161,
                v162,
                v163,
                v164,
                v165);
            }
            v166 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                                          v154,
                                                                          (System_Func_TSource__TKey__o *)_9__18_4,
                                                                          (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_UserServantEntity__int___);
            v167 = System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                     v166,
                     (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_UserServantEntity___);
            v168 = v167;
            if ( v167 )
            {
              v169 = v78;
              v170 = v123;
              v172 = *(_QWORD *)&v167[1].fields.freeStoneNum;
              v171 = *(_QWORD *)&v167[1].fields.isCommitedAlready;
              v173 = *p_setSvtIdList;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v203.fields.currentCryptoKey = v172;
              *(_QWORD *)&v203.fields.fakeValue = v171;
              v174 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v203, 0LL);
              if ( !v173 )
                sub_B2C434(v174, (unsigned int)v174);
              v123 = v170;
              v175 = System_Collections_Generic_HashSet_int___Add(
                       v173,
                       v174,
                       (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
              v177 = *v145;
              if ( !*v145 )
                sub_B2C434(v175, v176);
              v178 = *(_OWORD *)&v168->fields.purchasedBankShopId;
              v179 = *(_OWORD *)&v168->fields.freeStoneNum;
              v181 = *(_DWORD *)(v177 + 16);
              v180 = *(_DWORD *)(v177 + 20);
              v78 = v169;
              *(_OWORD *)&v198.fields.currentCryptoKey = v178;
              *(_OWORD *)&v198.fields.fakeValue = v179;
              v61 = v195;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v197 = v198;
              v182 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v197, 0LL);
              v183 = (EnterUserSvtInfo_o *)sub_B2C42C(EnterUserSvtInfo_TypeInfo);
              EnterUserSvtInfo___ctor(v183, v181, v180, v182, 0LL);
              if ( !v195 )
                sub_B2C434(v184, v185);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v195,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v183,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
            }
          }
          v119 = v193;
          v118 = v194;
          v199 = 399;
          v200 = 1;
          v186 = *(_QWORD *)v122;
          if ( *(_WORD *)(*(_QWORD *)v122 + 298LL) )
          {
            v187 = 0LL;
            v188 = (int *)(*(_QWORD *)(v186 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v188 - 1) != System_IDisposable_TypeInfo )
            {
              ++v187;
              v188 += 4;
              if ( v187 >= *(unsigned __int16 *)(*(_QWORD *)v122 + 298LL) )
                goto LABEL_77;
            }
            v189 = v186 + 16LL * *v188 + 312;
          }
          else
          {
LABEL_77:
            v189 = sub_AC5258(v122, System_IDisposable_TypeInfo, 0LL, v129);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v189)(v122, *(_QWORD *)(v189 + 8));
          if ( v199 == 399 )
            v200 = 0;
          Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)*p_setSvtIdList;
          if ( *p_setSvtIdList )
          {
            System_Collections_Generic_HashSet_int___Clear(
              (System_Collections_Generic_HashSet_int__o *)Master_WarQuestSelectionMaster,
              (const MethodInfo_2D85698 *)Method_System_Collections_Generic_HashSet_int__Clear__);
            goto LABEL_84;
          }
        }
      }
    }
LABEL_100:
    sub_B2C434(Master_WarQuestSelectionMaster, v54);
  }
  v109 = (Il2CppObject *)v52;
  v110 = this;
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)FortificationAutomaticDialogComponent__ReferenceDetailList(
                                                                   this,
                                                                   entities,
                                                                   0,
                                                                   v62);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_100;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v198,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__GetEnumerator__);
  v201.fields.current = (Il2CppObject *)v198.fields.fakeValue;
  *(_OWORD *)&v201.fields.list = *(_OWORD *)&v198.fields.currentCryptoKey;
  while ( 1 )
  {
    v111 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v201,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__MoveNext__);
    if ( !v111 )
      break;
    if ( !v201.fields.current )
      sub_B2C434(v111, v112);
    v113 = (int32_t)v201.fields.current[1].klass;
    klass_high = HIDWORD(v201.fields.current[1].klass);
    v115 = (EnterUserSvtInfo_o *)sub_B2C42C(EnterUserSvtInfo_TypeInfo);
    EnterUserSvtInfo___ctor(v115, v113, klass_high, 0LL, 0LL);
    if ( !v61 )
      sub_B2C434(v116, v117);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v61,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v115,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EnterUserSvtInfo__Add__);
  }
  v199 = 494;
  v200 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v201,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_FortificationAutomaticDialogComponent_DetailInfo__Dispose__);
  v200 = 0;
  v118 = v110;
  v119 = v109;
LABEL_84:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  v190 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v190,
    v119,
    (intptr_t)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v190,
                                                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_EventFortificationRequest___);
  if ( !v61 )
    goto LABEL_100;
  eventId = v118->fields.eventId;
  v192 = (EventFortificationRequest_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v61,
                                                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EnterUserSvtInfo__ToArray__);
  if ( !v192 )
    goto LABEL_100;
  EventFortificationRequest__beginRequest(v192, eventId, (EnterUserSvtInfo_array *)Master_WarQuestSelectionMaster, 0LL);
}


void __fastcall FortificationAutomaticDialogComponent__Close(
        FortificationAutomaticDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_418AAA1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_FortificationAutomaticDialogComponent__Close_b__23_0__, v3);
    byte_418AAA1 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
    sub_B2C434(0LL, v6);
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

  if ( (byte_418AAA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_FortificationAutomaticDialogComponent_OnClickCancel__, method);
    byte_418AAA0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationAutomaticDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_FortificationAutomaticDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UILabel_o *titleLb; // x20
  System_String_o *v25; // x0
  __int64 v26; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *setButtonLb; // x20
  UILabel_o *removeButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v31; // x20

  if ( (byte_418AA9D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, onDecide);
    sub_B2C35C(&Method_FortificationAutomaticDialogComponent__Open_b__16_0__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_6414/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, v13);
    sub_B2C35C(&StringLiteral_6415/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, v14);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v15);
    sub_B2C35C(&StringLiteral_6416/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, v16);
    sub_B2C35C(&StringLiteral_6417/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, v17);
    byte_418AA9D = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      (System_String_array **)closeCallBack,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.closeCallBack = closeCallBack;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.closeCallBack,
      (System_Int32_array **)closeCallBack,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    titleLb = this->fields.titleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6417/*"FORTIFICATION_AUTOMATIC_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_13;
    UILabel__set_text(titleLb, v25, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6414/*"FORTIFICATION_AUTOMATIC_DIALOG_DESCRIPTION"*/, 0LL);
    if ( !descriptionLb )
      goto LABEL_13;
    UILabel__set_text(descriptionLb, v25, 0LL);
    setButtonLb = this->fields.setButtonLb;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6416/*"FORTIFICATION_AUTOMATIC_DIALOG_SET_BUTTON"*/, 0LL);
    if ( !setButtonLb
      || (UILabel__set_text(setButtonLb, v25, 0LL),
          removeButtonLb = this->fields.removeButtonLb,
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6415/*"FORTIFICATION_AUTOMATIC_DIALOG_REMOVE_BUTTON"*/, 0LL),
          !removeButtonLb)
      || (UILabel__set_text(removeButtonLb, v25, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_13:
      sub_B2C434(v25, v26);
    }
    UILabel__set_text(cancelButtonLb, v25, 0LL);
    this->fields.state = 1;
    v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  __int64 v27; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  EventFortificationDetailMaster_o *v29; // x23
  WarQuestSelectionMaster_o *v30; // x0
  __int64 v31; // x1
  EventFortificationSvtMaster_o *v32; // x24
  int v33; // w10
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x21
  __int64 v37; // x1
  int64_t UserId; // x2
  _BOOL8 v39; // x0
  __int64 v40; // x1
  int v41; // w9
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *v44; // x25
  int32_t klass_high; // w26
  int32_t monitor; // w27
  int32_t v47; // w28
  FortificationAutomaticDialogComponent_DetailInfo_o *v48; // x25
  __int64 v49; // x0
  __int64 v50; // x1
  int v51; // w26
  int v52; // w8
  __int64 v53; // x26
  __int64 v54; // x0
  __int64 v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  __int64 v63; // x25
  __int64 v64; // x0
  __int64 v65; // x1
  struct SetSvtInfo_array *setSvtInfos; // x27
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v67; // x28
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  __int64 v69; // x1
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v70; // x26
  __int64 v71; // x1
  int32_t v72; // w28
  int32_t v73; // w27
  int32_t v74; // w26
  FortificationAutomaticDialogComponent_DetailInfo_o *v75; // x25
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x8
  int32_t v79; // w27
  int32_t v80; // w28
  int32_t v81; // w26
  __int64 v82; // x0
  __int64 v83; // x1
  System_Collections_Generic_HashSet_int__o *setSvtIdList; // x0
  _BOOL8 v85; // x0
  __int64 v86; // x1
  int32_t v87; // w28
  int32_t v88; // w27
  int32_t treasureDeviceIds; // w26
  __int64 v90; // x0
  __int64 v91; // x1
  int v92; // w26
  int v93; // w21
  int v95; // [xsp+Ch] [xbp-F4h]
  UserEventFortificationMaster_o *Master_WarQuestSelectionMaster; // [xsp+10h] [xbp-F0h]
  int v98; // [xsp+20h] [xbp-E0h]
  _BYTE v99[36]; // [xsp+28h] [xbp-D8h] BYREF
  int v100; // [xsp+4Ch] [xbp-B4h]
  EventFortificationSvtEntity_o *v101; // [xsp+50h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v102; // [xsp+58h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v103; // [xsp+60h] [xbp-A0h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+80h] [xbp-80h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+88h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v106; // [xsp+90h] [xbp-70h] BYREF

  v4 = isSet;
  if ( (byte_418AA9F & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_SetSvtInfo___, teamList);
    sub_B2C35C(&Method_DataManager_GetMaster_EventFortificationDetailMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_EventFortificationSvtMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventFortificationMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&FortificationAutomaticDialogComponent_DetailInfo_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__get_Current__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__get_Current__, v16);
    sub_B2C35C(&Method_System_Func_SetSvtInfo__bool___ctor__, v17);
    sub_B2C35C(&System_Func_SetSvtInfo__bool__TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__, v23);
    sub_B2C35C(&System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo, v24);
    sub_B2C35C(&NetworkManager_TypeInfo, v25);
    sub_B2C35C(&Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__, v26);
    sub_B2C35C(&FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo, v27);
    byte_418AA9F = 1;
  }
  memset(&v106, 0, sizeof(v106));
  entities = 0LL;
  entity = 0LL;
  memset(&v103, 0, sizeof(v103));
  v101 = 0LL;
  v102 = 0LL;
  v100 = 0;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventFortificationMaster___);
  v29 = (EventFortificationDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventFortificationDetailMaster___);
  v30 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventFortificationSvtMaster___);
  if ( !teamList )
    sub_B2C434(v30, v31);
  v32 = (EventFortificationSvtMaster_o *)v30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v99,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)teamList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventFortificationEntity__GetEnumerator__);
  v33 = 0;
  v106 = *(System_Collections_Generic_List_Enumerator_T__o *)v99;
LABEL_8:
  v98 = v33;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v106,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__MoveNext__);
    if ( !v34 )
      break;
    current = v106.fields.current;
    if ( !v106.fields.current )
      sub_B2C434(v34, v35);
    if ( !v29 )
      sub_B2C434(v34, v35);
    if ( EventFortificationDetailMaster__TryGetEntityList(
           v29,
           &entities,
           (int32_t)v106.fields.current[1].klass,
           HIDWORD(v106.fields.current[1].klass),
           0LL) )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !Master_WarQuestSelectionMaster )
        sub_B2C434(0LL, v37);
      v39 = UserEventFortificationMaster__TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              UserId,
              this->fields.eventId,
              HIDWORD(current[1].klass),
              0LL);
      if ( !v39 )
        goto LABEL_21;
      if ( !entity )
        sub_B2C434(v39, v40);
      if ( entity->fields.setSvtInfos )
      {
        v41 = v98;
      }
      else
      {
LABEL_21:
        if ( !entities )
          sub_B2C434(0LL, v40);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v99,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
        v103 = *(System_Collections_Generic_List_Enumerator_T__o *)v99;
        while ( 1 )
        {
          v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v103,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__);
          if ( !v42 )
            break;
          v44 = v103.fields.current;
          if ( !v103.fields.current )
            sub_B2C434(v42, v43);
          if ( !v32 )
            sub_B2C434(v42, v43);
          if ( !EventFortificationSvtMaster__TryGetEntity(
                  v32,
                  &v102,
                  (int32_t)current[1].klass,
                  HIDWORD(current[1].klass),
                  (int32_t)v103.fields.current[1].monitor,
                  0LL)
            && v4 )
          {
            klass_high = HIDWORD(current[1].klass);
            monitor = (int32_t)v44[1].monitor;
            v47 = (int32_t)v44[2].monitor;
            v48 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B2C42C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
            FortificationAutomaticDialogComponent_DetailInfo___ctor(v48, klass_high, monitor, v47, 0LL);
            if ( !v28 )
              sub_B2C434(v49, v50);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v28,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
          }
        }
        *(_DWORD *)&v99[4 * v98 + 24] = 551;
        v51 = ++v100;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v103,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
        if ( v51 )
        {
          v52 = v51 - 1;
          v41 = v51;
          if ( *(_DWORD *)&v99[4 * v51 + 20] == 551 )
            goto LABEL_62;
        }
        else
        {
          v41 = 0;
        }
      }
      v95 = v41;
      if ( !entities )
        sub_B2C434(0LL, v40);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v99,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entities,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__GetEnumerator__);
      v103 = *(System_Collections_Generic_List_Enumerator_T__o *)v99;
      while ( 1 )
      {
LABEL_35:
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v103,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__MoveNext__) )
        {
          *(_DWORD *)&v99[4 * v95 + 24] = 551;
          v92 = ++v100;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v103,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationDetailEntity__Dispose__);
          v33 = 0;
          if ( v92 )
          {
            v52 = v92 - 1;
            v33 = v92;
            if ( *(_DWORD *)&v99[4 * v92 + 20] == 551 )
            {
LABEL_62:
              v33 = v52;
              v100 = v52;
            }
          }
          goto LABEL_8;
        }
        v53 = sub_B2C42C(FortificationAutomaticDialogComponent___c__DisplayClass19_0_TypeInfo);
        FortificationAutomaticDialogComponent___c__DisplayClass19_0___ctor(
          (FortificationAutomaticDialogComponent___c__DisplayClass19_0_o *)v53,
          0LL);
        if ( !v53 )
          sub_B2C434(v54, v55);
        v62 = (System_Int32_array **)v103.fields.current;
        *(_QWORD *)(v53 + 16) = v103.fields.current;
        v63 = v53 + 16;
        sub_B2C2F8((BattleServantConfConponent_o *)(v53 + 16), v62, v56, v57, v58, v59, v60, v61);
        if ( !entity )
          sub_B2C434(v64, v65);
        setSvtInfos = entity->fields.setSvtInfos;
        v67 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_SetSvtInfo__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v67,
          (Il2CppObject *)v53,
          Method_FortificationAutomaticDialogComponent___c__DisplayClass19_0__ReferenceDetailList_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_SetSvtInfo__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)setSvtInfos,
                                                                           (System_Func_T__bool__o *)v67,
                                                                           (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_SetSvtInfo___);
        v70 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
        if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
        {
          if ( !v4 )
            continue;
          v78 = *(_QWORD *)v63;
          if ( !*(_QWORD *)v63 )
            sub_B2C434(0LL, v69);
          v79 = *(_DWORD *)(v78 + 24);
          v80 = *(_DWORD *)(v78 + 40);
          v81 = HIDWORD(current[1].klass);
          v75 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B2C42C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
          FortificationAutomaticDialogComponent_DetailInfo___ctor(v75, v81, v79, v80, 0LL);
          if ( !v28 )
            sub_B2C434(v82, v83);
          goto LABEL_59;
        }
        v71 = *(unsigned int *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
        if ( !(_DWORD)v71 && v4 )
          break;
        if ( (_DWORD)v71
          && !HIDWORD(USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds)
          && v4 )
        {
          setSvtIdList = this->fields.setSvtIdList;
          if ( !setSvtIdList )
            sub_B2C434(0LL, v71);
          System_Collections_Generic_HashSet_int___Add(
            setSvtIdList,
            v71,
            (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        else if ( (_DWORD)v71 && !v4 )
        {
          if ( !v32 )
            sub_B2C434(USFGOActorBattleActionEventConditional_OverwriteParamCondition, v71);
          v85 = EventFortificationSvtMaster__TryGetEntity(
                  v32,
                  &v101,
                  (int32_t)current[1].klass,
                  HIDWORD(current[1].klass),
                  (int32_t)USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds,
                  0LL);
          if ( !v85 )
          {
            if ( !*(_QWORD *)v63 )
              sub_B2C434(v85, v86);
            v87 = *(_DWORD *)(*(_QWORD *)v63 + 40LL);
            v88 = HIDWORD(current[1].klass);
            treasureDeviceIds = (int32_t)v70->fields.treasureDeviceIds;
            v75 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B2C42C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
            FortificationAutomaticDialogComponent_DetailInfo___ctor(v75, v88, treasureDeviceIds, v87, 0LL);
            if ( !v28 )
              sub_B2C434(v90, v91);
            goto LABEL_59;
          }
        }
      }
      if ( !*(_QWORD *)v63 )
        sub_B2C434(USFGOActorBattleActionEventConditional_OverwriteParamCondition, v71);
      v72 = *(_DWORD *)(*(_QWORD *)v63 + 40LL);
      v73 = HIDWORD(current[1].klass);
      v74 = (int32_t)USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.treasureDeviceIds;
      v75 = (FortificationAutomaticDialogComponent_DetailInfo_o *)sub_B2C42C(FortificationAutomaticDialogComponent_DetailInfo_TypeInfo);
      FortificationAutomaticDialogComponent_DetailInfo___ctor(v75, v73, v74, v72, 0LL);
      if ( !v28 )
        sub_B2C434(v76, v77);
LABEL_59:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__Add__);
      goto LABEL_35;
    }
  }
  *(_DWORD *)&v99[4 * v98 + 24] = 579;
  v93 = ++v100;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v106,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationEntity__Dispose__);
  if ( v93 && *(_DWORD *)&v99[4 * v93 + 20] == 579 )
    v100 = v93 - 1;
  return (System_Collections_Generic_List_FortificationAutomaticDialogComponent_DetailInfo__o *)v28;
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

  if ( (byte_418AAA2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418AAA2 = 1;
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
    sub_B2C434(0LL, v4);
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
  struct FortificationAutomaticDialogComponent___c_StaticFields *static_fields; // x0

  if ( (byte_41841D8 & 1) == 0 )
  {
    sub_B2C35C(&FortificationAutomaticDialogComponent___c_TypeInfo, v1);
    byte_41841D8 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(FortificationAutomaticDialogComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = FortificationAutomaticDialogComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FortificationAutomaticDialogComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall FortificationAutomaticDialogComponent___c___AutoSet_b__18_4(
        FortificationAutomaticDialogComponent___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
  if ( (byte_41841D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__, result);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v5);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)sub_B2C35C(&StringLiteral_16439/*"ar200"*/, v6);
    byte_41841D9 = 1;
  }
  if ( v4->fields.isSet )
  {
    v7 = Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__;
    if ( (*((_BYTE *)Method_FortificationAutomaticDialogComponent___c__DisplayClass18_0__AutoSet_b__0__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B2C364();
    v8 = (System_Reflection_MethodBase_o *)sub_B2C340(v7, v7[3]);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)OverwriteAssetSoundName__PlaySe(
                                                                              v8,
                                                                              (System_String_o *)StringLiteral_16439/*"ar200"*/,
                                                                              0LL);
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  ActionExtensions__Call(_4__this->fields.onDecide, 0LL);
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
    return;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_12:
    sub_B2C434(this, result);
  FortificationAutomaticDialogComponent__Close((FortificationAutomaticDialogComponent_o *)this, 0LL);
}


int32_t __fastcall FortificationAutomaticDialogComponent___c__DisplayClass18_0___AutoSet_b__2(
        FortificationAutomaticDialogComponent___c__DisplayClass18_0_o *this,
        FortificationAutomaticDialogComponent_DetailInfo_o *x,
        const MethodInfo *method)
{
  int32_t classId; // w8

  if ( !x )
    sub_B2C434(this, 0LL);
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
  if ( (byte_41841DA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, x);
    this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)sub_B2C35C(
                                                                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                              v5);
    byte_41841DA = 1;
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
  v11 = CS___8__locals2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_21;
  _4__this = v11->fields.__4__this;
  if ( !_4__this || !x )
    goto LABEL_21;
  setSvtIdList = _4__this->fields.setSvtIdList;
  v15 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v14;
  this = (FortificationAutomaticDialogComponent___c__DisplayClass18_2_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                            v18,
                                                                            0LL);
  if ( !setSvtIdList )
LABEL_21:
    sub_B2C434(this, x);
  return !System_Collections_Generic_HashSet_int___Contains(
            setSvtIdList,
            (int32_t)this,
            (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
    sub_B2C434(this, info);
  return info->fields.position == detail->fields.position;
}