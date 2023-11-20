void __fastcall BattleServantData___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData___ctor(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_LinkedList_WebOperation__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  AiState_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  ServantWaveTurnEventOwner_o *v63; // x20
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x20
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v92; // x20
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x2
  struct System_Int32_array *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7

  if ( (byte_40F8AEE & 1) == 0 )
  {
    sub_B16FFC(&AiState_TypeInfo, method);
    sub_B16FFC(&int___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v16);
    sub_B16FFC(&ServantWaveTurnEventOwner_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_1, v18);
    byte_40F8AEE = 1;
  }
  this->fields.deckIndex = -1;
  this->fields.transformUserSvtId = -1LL;
  this->fields.transformIndex = -1;
  this->fields.appearanceId = -1;
  *(int64_t *)((char *)&this->fields.beforeUserSvtId + 4) = -1LL;
  *(_QWORD *)&this->fields.shiftNpcId = -1LL;
  v19 = (System_Collections_Generic_LinkedList_WebOperation__o *)sub_B170CC(
                                                                   System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  System_Collections_Generic_LinkedList_WebOperation____ctor(
    v19,
    (const MethodInfo_23FD1A8 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__);
  this->fields.actionHistory = (struct System_Collections_Generic_LinkedList_BattleServantActionHistory__o *)v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actionHistory,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v30 = (AiState_o *)sub_B170CC(AiState_TypeInfo, v26, v27, v28, v29);
  AiState___ctor(v30, 0LL);
  this->fields.aiState = v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aiState,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.actorScale = 100;
  *(_QWORD *)&this->fields.nplineCount = 0x6400000003LL;
  *(_QWORD *)&this->fields.roleType = 0xFFFFFFFF00000001LL;
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  this->fields.skillInfoList = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillInfoList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v48,
                                                                                                  v49,
                                                                                                  v50,
                                                                                                  v51);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.tdErrorStatusVoiceSeList = (struct System_Collections_Generic_List_string__o *)v52;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tdErrorStatusVoiceSeList,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.deadTurn = 1;
  v63 = (ServantWaveTurnEventOwner_o *)sub_B170CC(ServantWaveTurnEventOwner_TypeInfo, v59, v60, v61, v62);
  ServantWaveTurnEventOwner___ctor(v63, 0LL);
  this->fields.waveTurnEventOwner = v63;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.waveTurnEventOwner,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v70,
                                                                                                  v71,
                                                                                                  v72,
                                                                                                  v73);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.paramobjelist = (struct System_Collections_Generic_List_GameObject__o *)v74;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.paramobjelist,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v81 = (System_Int32_array **)StringLiteral_1;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.statestring, v81, v82, v83, v84, v85, v86, v87);
  this->fields.isGutsSleepRelease = 1;
  this->fields.wasAttackTargetId = -1;
  this->fields.nextPossibleTimePopEffect = -1.0;
  *(_QWORD *)&this->fields.selectedTDCardId = -1LL;
  v92 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo,
                                                                                                  v88,
                                                                                                  v89,
                                                                                                  v90,
                                                                                                  v91);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v92,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
  this->fields.adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)v92;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.adjustmentList,
    (System_Int32_array **)v92,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  this->fields.tempTreasuredvcLv = 1;
  v100 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v99);
  this->fields.wkzero = v100;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.wkzero,
    (System_Int32_array **)v100,
    v101,
    v102,
    v103,
    v104,
    v105,
    v106);
  this->fields.tmpAppearanceId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_BattleSkillInfoData__o *__fastcall BattleServantData__AddClassBoardSkillInfo(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvtData,
        int32_t *skillIndex,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_Collections_ICollection_o *ClassBoardSkillArray; // x22
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  void *monitor; // x8
  unsigned __int64 v16; // x23
  int32_t *v17; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w4
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x0
  const MethodInfo *v23; // [xsp+0h] [xbp-50h]

  if ( (byte_40F8AED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, userSvtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v9);
    byte_40F8AED = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                                                                  userSvtData,
                                                                                                  skillIndex,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( !userSvtData )
    goto LABEL_12;
  ClassBoardSkillArray = (System_Collections_ICollection_o *)BattleUserServantData__GetClassBoardSkillArray(
                                                               userSvtData,
                                                               0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(ClassBoardSkillArray, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !ClassBoardSkillArray )
      goto LABEL_12;
    monitor = ClassBoardSkillArray[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( v16 >= (unsigned int)monitor )
        {
          sub_B17100(IsNullOrEmpty, v13, v14);
          sub_B170A0();
        }
        v17 = (int32_t *)(&ClassBoardSkillArray[2].klass + v16);
        v18 = *skillIndex;
        v19 = *v17;
        v20 = v17[1];
        ++*skillIndex;
        v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleServantData__addSkillInfo(
                                                                       this,
                                                                       10,
                                                                       v18,
                                                                       v19,
                                                                       v20,
                                                                       -1LL,
                                                                       -1,
                                                                       0LL,
                                                                       v23);
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          v21,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
        LODWORD(monitor) = ClassBoardSkillArray[1].monitor;
        if ( (__int64)++v16 >= (int)monitor )
          return (System_Collections_Generic_List_BattleSkillInfoData__o *)v10;
      }
LABEL_12:
      sub_B170D4();
    }
  }
  return (System_Collections_Generic_List_BattleSkillInfoData__o *)v10;
}


void __fastcall BattleServantData__AddTDErrorTouchCount(BattleServantData_o *this, const MethodInfo *method)
{
  ++this->fields.tdErrorTouchCount;
}


void __fastcall BattleServantData__AfterActorNoblePhantasm(
        BattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
double __fastcall BattleServantData__CalcHpRangeRatio(
        BattleServantData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  return (double)value / 1000.0 * (double)BattleServantData__getMaxHp(this, *(const MethodInfo **)&value);
}


void __fastcall BattleServantData__CalculateLimitCountWithSpoilerProtection(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t *p_afterLimitCount; // x24
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w22
  int32_t v17; // w0
  __int64 v18; // x22
  __int64 v19; // x23
  const MethodInfo *v20; // x2
  int32_t DispLimitCount; // w22
  __int64 v22; // x22
  __int64 v23; // x23
  const MethodInfo *v24; // x1
  int32_t CommandDispLimitCount; // w22
  __int64 v26; // x22
  __int64 v27; // x23
  __int64 v28; // x22
  __int64 v29; // x23
  int32_t v30; // w22
  int32_t v31; // w23
  int32_t CardImageLimitCount; // w0
  struct BattleDeckServantData_o *v33; // x8
  __int64 v34; // x22
  __int64 v35; // x23
  __int64 v36; // x22
  __int64 v37; // x23
  int32_t v38; // w22
  int32_t v39; // w23
  int32_t ImageLimitCount; // w0
  __int64 v41; // x22
  __int64 v42; // x23
  __int64 v43; // x22
  __int64 v44; // x23
  int32_t v45; // w22
  int32_t v46; // w23
  int32_t v47; // w0
  __int64 v48; // x22
  __int64 v49; // x23
  __int64 v50; // x22
  __int64 v51; // x23
  int32_t v52; // w22
  int32_t v53; // w23
  int32_t v54; // w0
  __int64 v55; // x22
  __int64 v56; // x23
  int32_t v57; // w22
  int32_t IconLimitCount; // w0
  int ServantImageLimitSealAfter; // w0
  __int64 v60; // x22
  __int64 v61; // x23
  int32_t v62; // w0
  int32_t v63; // w22
  int32_t v64; // w23
  struct BattleDeckServantData_o *v65; // x8
  WarQuestSelectionMaster_o *v66; // x0
  __int64 v67; // x22
  __int64 v68; // x23
  __int64 v69; // x24
  __int64 v70; // x25
  ServantLimitSpoilerProtectionMaster_o *v71; // x21
  int32_t v72; // w0
  int32_t v73; // w0
  __int64 v74; // x22
  __int64 v75; // x23
  int32_t v76; // w0
  int32_t v77; // w0
  int32_t v78; // w0
  int32_t v79; // w0
  __int64 v80; // x22
  __int64 v81; // x23
  int32_t v82; // w0
  int32_t v83; // w0
  int32_t v84; // w0
  int32_t v85; // w0
  __int64 v86; // x21
  __int64 v87; // x22
  int32_t v88; // w21
  BalanceConfig_c *v89; // x8
  __int64 v90; // x21
  __int64 v91; // x22
  __int64 v92; // x21
  __int64 v93; // x22
  __int64 v94; // x21
  __int64 v95; // x22
  __int64 v96; // x21
  __int64 v97; // x22
  __int64 v98; // x22
  __int64 v99; // x23
  int32_t v100; // w22
  int32_t v101; // w0
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v103; // w22
  int32_t v104; // w0
  int32_t v105; // w0
  int32_t v106; // w22
  int32_t v107; // w0
  int32_t v108; // w0
  struct BattleDeckServantData_o *v109; // x8
  __int64 v110; // x21
  __int64 v111; // x22
  __int64 v112; // x20
  __int64 v113; // x21
  __int64 v114; // x21
  __int64 v115; // x22
  int32_t v116; // w0
  __int64 v117; // x8
  int32_t v118; // w20
  int32_t v119; // w21
  int32_t v120; // w0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // kr00_16
  int32_t v122; // w0
  int32_t v123; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v134; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v143; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x1.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x1.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x1.16

  if ( (byte_40F8A39 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userSvt);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&OptionManager_TypeInfo, v10);
    byte_40F8A39 = 1;
  }
  if ( !userSvt )
    goto LABEL_184;
  p_afterLimitCount = &userSvt->fields.afterLimitCount;
  this->fields.limitcount = userSvt->fields.limitCount;
  this->fields._dispLimitCount_k__BackingField = userSvt->fields.dispLimitCount;
  this->fields._commandCardLimitCount_k__BackingField = userSvt->fields.commandCardLimitCount;
  this->fields._iconLimitCount_k__BackingField = userSvt->fields.iconLimitCount;
  *(_QWORD *)&userSvt->fields.afterLimitCount = -1LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Follower__IsNpc(this->fields.followerType, 0LL) )
  {
    deckSvt = this->fields.deckSvt;
    if ( !deckSvt )
      goto LABEL_184;
    if ( deckSvt->fields.npcId <= 0 )
    {
      v15 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v124.fields.currentCryptoKey = v15;
      *(_QWORD *)&v124.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v124, 0LL);
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitcount, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_184;
      if ( ServantLimitImageMaster__IsServantLimitCountSeal(Master_WarQuestSelectionMaster, v16, v17, 0LL) )
      {
        v19 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
        v18 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v125.fields.currentCryptoKey = v19;
        *(_QWORD *)&v125.fields.fakeValue = v18;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v125, 0LL) )
        {
          DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v20);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          this->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                           DispLimitCount,
                                                           0LL);
        }
        v23 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
        v22 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v126.fields.currentCryptoKey = v23;
        *(_QWORD *)&v126.fields.fakeValue = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v126, 0LL) )
        {
          CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(this, v24);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          this->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                  CommandDispLimitCount,
                                                                  0LL);
        }
        v27 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v26 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v127.fields.currentCryptoKey = v27;
        *(_QWORD *)&v127.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v127, 0LL) )
        {
          v29 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
          v28 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v128.fields.currentCryptoKey = v29;
          *(_QWORD *)&v128.fields.fakeValue = v28;
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v128, 0LL);
          v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvt->fields.limitCount, 0LL);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v30, v31, 1, 0, 0LL);
          this->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                           CardImageLimitCount + 1,
                                                           0LL);
        }
        v33 = this->fields.deckSvt;
        if ( v33 )
        {
          if ( v33->fields.isFollowerSvt && !Follower__IsNpc(this->fields.followerType, 0LL) )
          {
            if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !OptionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            }
            if ( !OptionManager__GetFriendCostume(0LL) )
            {
              v35 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
              v34 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v129.fields.currentCryptoKey = v35;
              *(_QWORD *)&v129.fields.fakeValue = v34;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v129, 0LL) >= 11 )
              {
                v37 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
                v36 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v130.fields.currentCryptoKey = v37;
                *(_QWORD *)&v130.fields.fakeValue = v36;
                v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v130, 0LL);
                v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                        userSvt->fields.limitCount,
                        0LL);
                if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                }
                ImageLimitCount = ImageLimitCount__GetImageLimitCount(v38, v39, 0LL);
                this->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                 ImageLimitCount,
                                                                 0LL);
              }
              v42 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
              v41 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v131.fields.currentCryptoKey = v42;
              *(_QWORD *)&v131.fields.fakeValue = v41;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v131, 0LL) >= 11 )
              {
                v44 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
                v43 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v132.fields.currentCryptoKey = v44;
                *(_QWORD *)&v132.fields.fakeValue = v43;
                v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v132, 0LL);
                v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                        userSvt->fields.limitCount,
                        0LL);
                if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                }
                v47 = ImageLimitCount__GetImageLimitCount(v45, v46, 0LL);
                this->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                        v47,
                                                                        0LL);
              }
              v49 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
              v48 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v133.fields.currentCryptoKey = v49;
              *(_QWORD *)&v133.fields.fakeValue = v48;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v133, 0LL) >= 11 )
              {
                v51 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
                v50 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v134.fields.currentCryptoKey = v51;
                *(_QWORD *)&v134.fields.fakeValue = v50;
                v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v134, 0LL);
                v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                        userSvt->fields.limitCount,
                        0LL);
                if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                }
                v54 = ImageLimitCount__GetCardImageLimitCount(v52, v53, 0, 0, 0LL);
                this->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                 v54 + 1,
                                                                 0LL);
              }
            }
          }
          v56 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
          v55 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v135.fields.currentCryptoKey = v56;
          *(_QWORD *)&v135.fields.fakeValue = v55;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v135, 0LL);
          IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvt, 0, 0LL);
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         Master_WarQuestSelectionMaster,
                                         v57,
                                         IconLimitCount,
                                         0LL);
          if ( ServantImageLimitSealAfter >= 11 )
          {
            *p_afterLimitCount = ServantImageLimitSealAfter;
          }
          else
          {
            userSvt->fields.afterLimitCount = 2 * ServantImageLimitSealAfter;
            v61 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
            v60 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v136.fields.currentCryptoKey = v61;
            *(_QWORD *)&v136.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v136, 0LL);
            v63 = *p_afterLimitCount;
            v64 = v62;
            if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ImageLimitCount_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            }
            ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v64, v63, 0LL);
          }
          userSvt->fields.afterIconLimitCount = ServantImageLimitSealAfter;
          v99 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
          v98 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v145.fields.currentCryptoKey = v99;
          *(_QWORD *)&v145.fields.fakeValue = v98;
          v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v145, 0LL);
          v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                   this->fields._iconLimitCount_k__BackingField,
                   0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         Master_WarQuestSelectionMaster,
                                         v100,
                                         v101,
                                         0LL);
          this->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                           ServantLimitCountSealAfter,
                                                           0LL);
          v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvt->fields.svtId, 0LL);
          v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                   this->fields._dispLimitCount_k__BackingField,
                   0LL);
          v105 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v103, v104, 0LL);
          this->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                           v105,
                                                           0LL);
          v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvt->fields.svtId, 0LL);
          v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                   this->fields._commandCardLimitCount_k__BackingField,
                   0LL);
          v108 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v106, v107, 0LL);
          this->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                  v108,
                                                                  0LL);
          goto LABEL_160;
        }
LABEL_184:
        sub_B170D4();
      }
    }
  }
  v65 = this->fields.deckSvt;
  if ( !v65 )
    goto LABEL_184;
  if ( v65->fields.isFollowerSvt && !Follower__IsNpc(this->fields.followerType, 0LL) )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( !OptionManager__GetSpoilerSetting(0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      v66 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
      v68 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
      v67 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
      v70 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
      v69 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
      v71 = (ServantLimitSpoilerProtectionMaster_o *)v66;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v137.fields.currentCryptoKey = v70;
      *(_QWORD *)&v137.fields.fakeValue = v69;
      v72 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v137, 0LL);
      if ( !v71 )
        goto LABEL_184;
      *(_QWORD *)&v150.fields.currentCryptoKey = v68;
      *(_QWORD *)&v150.fields.fakeValue = v67;
      v73 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v150, v72, 0LL);
      this->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v73,
                                                       0LL);
      v74 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
      v75 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
      v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
              this->fields._dispLimitCount_k__BackingField,
              0LL);
      *(_QWORD *)&v151.fields.currentCryptoKey = v74;
      *(_QWORD *)&v151.fields.fakeValue = v75;
      v77 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v151, v76, 0LL);
      v138 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v77, 0LL);
      this->fields._dispLimitCount_k__BackingField = v138;
      v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v138, 0LL);
      v79 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v71, v78, 0LL);
      this->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v79,
                                                       0LL);
      v80 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
      v81 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
      v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
              this->fields._commandCardLimitCount_k__BackingField,
              0LL);
      *(_QWORD *)&v152.fields.currentCryptoKey = v80;
      *(_QWORD *)&v152.fields.fakeValue = v81;
      v83 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v152, v82, 0LL);
      v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v83, 0LL);
      this->fields._commandCardLimitCount_k__BackingField = v139;
      v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v139, 0LL);
      v85 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v71, v84, 0LL);
      this->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                              v85,
                                                              0LL);
    }
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( !OptionManager__GetFriendImageLimitCount(0LL) )
    {
      v87 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
      v86 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v140.fields.currentCryptoKey = v87;
      *(_QWORD *)&v140.fields.fakeValue = v86;
      v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v140, 0LL);
      v89 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v89 = BalanceConfig_TypeInfo;
      }
      if ( v88 >= v89->static_fields->ServantLimitMax )
      {
        v91 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v90 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v141.fields.currentCryptoKey = v91;
        *(_QWORD *)&v141.fields.fakeValue = v90;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v141, 0LL) <= 10 )
        {
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          this->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                           0,
                                                           0LL);
        }
      }
    }
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( !OptionManager__GetFriendCostume(0LL) )
    {
      v93 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
      v92 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v142.fields.currentCryptoKey = v93;
      *(_QWORD *)&v142.fields.fakeValue = v92;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v142, 0LL) >= 11 )
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        this->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         0,
                                                         0LL);
      }
      v95 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
      v94 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v143.fields.currentCryptoKey = v95;
      *(_QWORD *)&v143.fields.fakeValue = v94;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v143, 0LL) >= 11 )
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        this->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                0,
                                                                0LL);
      }
      v97 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
      v96 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v144.fields.currentCryptoKey = v97;
      *(_QWORD *)&v144.fields.fakeValue = v96;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v144, 0LL) >= 11 )
      {
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        this->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         0,
                                                         0LL);
      }
    }
  }
LABEL_160:
  v109 = this->fields.deckSvt;
  if ( !v109 )
    goto LABEL_184;
  if ( v109->fields.isFollowerSvt && Follower__IsNpc(this->fields.followerType, 0LL) )
  {
    v111 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
    v110 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v146.fields.currentCryptoKey = v111;
    *(_QWORD *)&v146.fields.fakeValue = v110;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v146, 0LL) )
    {
      v112 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
      v113 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    }
    else
    {
      v115 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
      v114 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v147.fields.currentCryptoKey = v115;
      *(_QWORD *)&v147.fields.fakeValue = v114;
      v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v147, 0LL);
      v117 = *(_QWORD *)&userSvt->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v148.fields.fakeValue = *(_QWORD *)&userSvt->fields.limitCount.fields.fakeValue;
      v118 = v116;
      *(_QWORD *)&v148.fields.currentCryptoKey = v117;
      v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v148, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v120 = ImageLimitCount__GetCardImageLimitCount(v118, v119, 1, 0, 0LL);
      v121 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v120 + 1, 0LL);
      v113 = *(_QWORD *)&v121.fields.fakeValue;
      v112 = *(_QWORD *)&v121.fields.currentCryptoKey;
      this->fields._iconLimitCount_k__BackingField = v121;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v149.fields.currentCryptoKey = v112;
    *(_QWORD *)&v149.fields.fakeValue = v113;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v149, 0LL) <= 10 )
    {
      v122 = BasicHelper__DecryptValue_19259816(this->fields._iconLimitCount_k__BackingField, 0LL);
      v123 = UnityEngine_Mathf__Clamp_40670656(v122, 1, 3, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v123,
                                                       0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__ChangeBuffValue(
        BattleServantData_o *this,
        int32_t changeValue,
        System_Int32_array *targetIndivi,
        bool isTurn,
        bool isAny,
        bool isExcludeUnSubStateIndiv,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_array *ActiveList; // x25
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  WarEntity_o *Entity; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int max_length; // w8
  unsigned int v26; // w20
  bool v27; // w28
  BattleBuffData_o *v28; // x0
  BattleBuffData_BuffData_o *v29; // x27
  BuffMaster_o *buffMst; // x0
  int32_t v31; // w8
  int count; // w24
  int turn; // w26
  System_Int32_array *Individualty; // x0
  int v35; // w8
  _BOOL4 v36; // w8
  int v37; // w8
  BattleBuffData_o *v38; // x19
  BattleBuffData_BuffData_array *v39; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // [xsp+8h] [xbp-68h]
  bool isIgnoreIndivUnreleaseable; // [xsp+18h] [xbp-58h]

  if ( (byte_40F8A94 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, *(_QWORD *)&changeValue);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    byte_40F8A94 = 1;
  }
  if ( targetIndivi && *(_QWORD *)&targetIndivi->max_length )
  {
    buffData = this->fields.buffData;
    if ( !buffData )
      goto LABEL_52;
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
    v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                    v18,
                                                                                                    v19,
                                                                                                    v20,
                                                                                                    v21);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v41,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_52;
    max_length = ActiveList->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      v27 = 0;
      isIgnoreIndivUnreleaseable = isExcludeUnSubStateIndiv;
      while ( 1 )
      {
        if ( v26 >= max_length )
        {
          sub_B17100(Entity, v23, v24);
          sub_B170A0();
        }
        v28 = this->fields.buffData;
        if ( !v28 )
          goto LABEL_52;
        v29 = ActiveList->m_Items[v26];
        buffMst = BattleBuffData__get_buffMst(v28, 0LL);
        if ( !v29 || !buffMst )
          goto LABEL_52;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)buffMst,
                   v29->fields.buffId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( (changeValue & 0x80000000) == 0 )
          break;
        v31 = isTurn ? v29->fields.turn : v29->fields.count;
        if ( v31 != 1 )
          break;
LABEL_44:
        max_length = ActiveList->max_length;
        if ( (int)++v26 >= max_length )
          goto LABEL_48;
      }
      turn = v29->fields.turn;
      count = v29->fields.count;
      Individualty = BattleBuffData_BuffData__GetIndividualty(v29, 0, isIgnoreIndivUnreleaseable, 0, 0LL);
      if ( isAny )
      {
        if ( !Individuality__CheckIndividualities(Individualty, targetIndivi, 0LL) )
          goto LABEL_26;
      }
      else if ( !Individuality__ContainsIndividualities(Individualty, targetIndivi, 0LL) )
      {
        goto LABEL_26;
      }
      if ( turn >= 1 && isTurn )
      {
        v29->fields.turn += changeValue;
        if ( v27 )
        {
LABEL_27:
          v27 = 1;
          if ( !isTurn )
          {
LABEL_28:
            v35 = v29->fields.count;
            if ( v35 != count && v35 <= 0 )
              v29->fields.count = 1;
            goto LABEL_39;
          }
LABEL_36:
          v37 = v29->fields.turn;
          if ( v37 != turn && v37 <= 0 )
            v29->fields.turn = 1;
LABEL_39:
          Entity = (WarEntity_o *)BattleBuffData_BuffData__IslinkageTarget(v29, 0LL);
          if ( ((unsigned __int8)Entity & 1) != 0 && (v29->fields.turn != turn || v29->fields.count != count) )
          {
            if ( !v41 )
              goto LABEL_52;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v41,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
          goto LABEL_44;
        }
LABEL_32:
        v36 = v29->fields.turn != turn || v29->fields.count != count;
        v27 = v36;
        if ( !isTurn )
          goto LABEL_28;
        goto LABEL_36;
      }
      if ( count >= 1 && !isTurn )
        v29->fields.count += changeValue;
LABEL_26:
      if ( v27 )
        goto LABEL_27;
      goto LABEL_32;
    }
    v27 = 0;
LABEL_48:
    if ( !v41
      || (v38 = this->fields.buffData,
          v39 = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v41,
                                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
          !v38) )
    {
LABEL_52:
      sub_B170D4();
    }
    BattleBuffData__syncLinkageBuffChangeParam(v38, v39, 0LL);
  }
  else
  {
    return 0;
  }
  return v27;
}


bool __fastcall BattleServantData__ChangeSkillRemainingTurn(
        BattleServantData_o *this,
        BattleSkillInfoData_o *skillInfo,
        BattleSkillInfoData_o *beforeDeathSkillInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v9; // w0
  int32_t BattleStartRemainingTurn; // w0
  int32_t chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8A40 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, skillInfo);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    byte_40F8A40 = 1;
  }
  entity = 0LL;
  if ( this->fields.isEnemy )
    goto LABEL_16;
  if ( !skillInfo )
    goto LABEL_20;
  if ( skillInfo->fields.type != 11 )
    goto LABEL_16;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = 0LL;
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v9 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
         skillInfo,
         skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
LABEL_20:
    sub_B170D4();
  if ( !SkillLvMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v9, skillInfo->fields.skilllv, 0LL) )
  {
LABEL_16:
    LOBYTE(BattleStartRemainingTurn) = 0;
    return BattleStartRemainingTurn;
  }
  if ( !entity )
    goto LABEL_20;
  BattleStartRemainingTurn = SkillLvEntity__GetBattleStartRemainingTurn(entity, 0LL);
  if ( BattleStartRemainingTurn )
  {
    if ( beforeDeathSkillInfo
      && (chargeTurn = beforeDeathSkillInfo->fields.chargeTurn, chargeTurn < BattleStartRemainingTurn) )
    {
      skillInfo->fields.chargeTurn = chargeTurn;
    }
    else
    {
      skillInfo->fields.chargeTurn = BattleStartRemainingTurn;
    }
    LOBYTE(BattleStartRemainingTurn) = 1;
  }
  return BattleStartRemainingTurn;
}


bool __fastcall BattleServantData__CheckAvoidanceIndividuality(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        int32_t *targetBuffId,
        bool isSvtAction,
        System_Int32_array *notSvtIndivArray,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v9; // x0
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  int32_t buffId; // w8

  *targetBuffId = 0;
  buffData = this->fields.buffData;
  v9 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         (const MethodInfo *)notSvtIndivArray);
  if ( !buffData )
    sub_B170D4();
  FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 93, v9, 0, 0LL);
  if ( FirstMatchCondBuff )
  {
    buffId = FirstMatchCondBuff->fields.buffId;
    LOBYTE(FirstMatchCondBuff) = 1;
    *targetBuffId = buffId;
  }
  return (char)FirstMatchCondBuff;
}


bool __fastcall BattleServantData__CheckDisableForciblyAddStateBuffAvoid(
        BattleServantData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opponentSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_22775404; // x19
  BattleBuffData_o *buffData; // x21
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v8; // x2
  System_Int32_array *v9; // x0

  Individualities_22775404 = buffIndiv;
  if ( opponentSvt )
    Individualities_22775404 = BattleServantData__getIndividualities_22775404(
                                 opponentSvt,
                                 buffIndiv,
                                 (const MethodInfo *)opponentSvt);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  BuffIndividualities = BattleBuffData__getBuffIndividualities(this->fields.buffData, 0, 0, 0, 0, 0LL);
  v9 = BattleServantData__getIndividualities_22775404(this, BuffIndividualities, v8);
  return BattleBuffData__CheckDisableForciblyAddStateBuffAvoid(buffData, v9, Individualities_22775404, 0LL);
}


bool __fastcall BattleServantData__CheckEnemyOrFollower(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.isEnemy || this->fields.followerType != 0;
}


bool __fastcall BattleServantData__CheckFirstNpPlay(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0
  const MethodInfo *v6; // x1
  __int64 SelectedNobleSeqId; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct System_Int32_array *tdplayed; // x10
  int max_length; // w8
  __int64 v12; // x9
  int32_t *v13; // x10
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  System_String_o *v16; // x0
  char Int; // w0
  int32_t SelectedNobleGroupSeqId; // [xsp+Ch] [xbp-14h] BYREF

  SelectedNobleGroupSeqId = 0;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)data);
  if ( TreasureDevice )
  {
    SelectedNobleSeqId = BattleServantData__GetSelectedNobleSeqId(this, v6);
    tdplayed = this->fields.tdplayed;
    if ( tdplayed )
    {
      max_length = tdplayed->max_length;
      if ( max_length >= 1 )
      {
        v12 = 0LL;
        v13 = &tdplayed->m_Items[1];
        do
        {
          if ( (unsigned int)v12 >= max_length )
          {
            sub_B17100(SelectedNobleSeqId, v8, (unsigned int)SelectedNobleSeqId);
            sub_B170A0();
          }
          if ( v13[v12] == (_DWORD)SelectedNobleSeqId )
            goto LABEL_13;
        }
        while ( (int)++v12 < max_length );
      }
    }
    if ( !BattleServantData__IsContainsSeqId(this, data, SelectedNobleSeqId, v9) )
    {
      if ( BattleServantData__CheckSelectedNobleSeqIsGroup(this, v14) )
      {
        SelectedNobleGroupSeqId = BattleServantData__GetSelectedNobleGroupSeqId(this, v15);
        v16 = System_Int32__ToString((int32_t)&SelectedNobleGroupSeqId, 0LL);
        Int = UnityEngine_PlayerPrefs__GetInt(v16, 0, 0LL);
        if ( this->fields.isEnemy || this->fields.followerType )
        {
          if ( (Int & 3) != 0 )
            goto LABEL_13;
        }
        else if ( (Int & 1) != 0 )
        {
          goto LABEL_13;
        }
      }
      LOBYTE(TreasureDevice) = 1;
      return (char)TreasureDevice;
    }
LABEL_13:
    LOBYTE(TreasureDevice) = 0;
  }
  return (char)TreasureDevice;
}


void __fastcall BattleServantData__CheckInvincibleAvoidanceBuff(
        BattleServantData_o *this,
        BattleData_o *data,
        BattleServantData_o *actor,
        BattleCommandData_o *command,
        BattleActionData_DamageData_o *damageData,
        float *damage,
        bool *minimumDamageFlg,
        int32_t *hitStat,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  System_Int32_array *NotSvtActorIndividualityArray; // x0
  const MethodInfo *v18; // x6
  System_Int32_array *v19; // x25
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x5
  int32_t v25; // w8
  const MethodInfo *v26; // x5

  if ( !data
    || (NotSvtActorIndividualityArray = BattleData__GetNotSvtActorIndividualityArray(
                                          data,
                                          mainAction,
                                          actor != 0LL,
                                          0LL),
        !damageData) )
  {
    sub_B170D4();
  }
  v19 = NotSvtActorIndividualityArray;
  if ( BattleServantData__checkSpecialInvincible(
         this,
         command,
         actor,
         &damageData->fields.isSpecialInvincible,
         actor != 0LL,
         NotSvtActorIndividualityArray,
         v18) )
  {
    *damage = 0.0;
    *minimumDamageFlg = 0;
    *hitStat = 1;
    if ( actor && !BattleServantData__checkPierceInvincible(actor, command, this, v20) )
      goto LABEL_17;
    return;
  }
  if ( BattleServantData__CheckAvoidanceIndividuality(
         this,
         command,
         actor,
         &damageData->fields.defNoDamageBuffId,
         actor != 0LL,
         v19,
         v21) )
  {
    goto LABEL_8;
  }
  if ( actor && BattleServantData__checkPierceInvincible(actor, command, this, v23) )
  {
    if ( BattleServantData__checkInvincible(this, command, actor, 1, 0LL, v24) )
    {
      v25 = 3;
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  if ( !BattleServantData__checkInvincible(this, command, actor, actor != 0LL, v19, v24) )
  {
    if ( !actor || !BattleServantData__checkBreakAvoidance(actor, command, this, v22) )
    {
      if ( !BattleServantData__checkAvoidance(this, command, actor, actor != 0LL, v19, v26) )
        return;
LABEL_8:
      v25 = 2;
      *damage = 0.0;
      *minimumDamageFlg = 0;
      goto LABEL_9;
    }
LABEL_20:
    if ( !BattleServantData__checkAvoidance(this, command, actor, 1, 0LL, v26) )
      return;
    v25 = 4;
LABEL_9:
    *hitStat = v25;
    return;
  }
  *damage = 0.0;
  *minimumDamageFlg = 0;
  *hitStat = 1;
  if ( actor )
LABEL_17:
    BattleServantData__checkBreakAvoidance(actor, command, this, v22);
}


void __fastcall BattleServantData__CheckNoDamageBuff(
        BattleServantData_o *this,
        BattleData_o *data,
        BattleServantData_o *actor,
        BattleCommandData_o *command,
        BattleActionData_DamageData_o *damageData,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  struct BattleBuffData_o *buffData; // x8
  System_Int32_array *NotSvtActorIndividualityArray; // x0
  const MethodInfo *v13; // x6
  System_Int32_array *v14; // x22
  const MethodInfo *v15; // x6
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x5
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x5
  struct BattleBuffData_o *v20; // x8
  char v21; // w9

  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_18;
  buffData->fields.isNoDamage = 0;
  if ( !data )
    goto LABEL_18;
  NotSvtActorIndividualityArray = BattleData__GetNotSvtActorIndividualityArray(data, mainAction, actor != 0LL, 0LL);
  if ( !damageData )
    goto LABEL_18;
  v14 = NotSvtActorIndividualityArray;
  if ( BattleServantData__checkSpecialInvincible(
         this,
         command,
         actor,
         &damageData->fields.isSpecialInvincible,
         actor != 0LL,
         NotSvtActorIndividualityArray,
         v13)
    || BattleServantData__CheckAvoidanceIndividuality(
         this,
         command,
         actor,
         &damageData->fields.defNoDamageBuffId,
         actor != 0LL,
         v14,
         v15) )
  {
LABEL_14:
    v20 = this->fields.buffData;
    if ( v20 )
    {
      v21 = 1;
      goto LABEL_16;
    }
LABEL_18:
    sub_B170D4();
  }
  if ( !actor || !BattleServantData__checkPierceInvincible(actor, command, this, v16) )
  {
    if ( !BattleServantData__checkInvincible(this, command, actor, actor != 0LL, v14, v17) )
    {
      if ( actor && BattleServantData__checkBreakAvoidance(actor, command, this, v18) )
        goto LABEL_11;
      if ( !BattleServantData__checkAvoidance(this, command, actor, actor != 0LL, v14, v19) )
        return;
    }
    goto LABEL_14;
  }
LABEL_11:
  v20 = this->fields.buffData;
  if ( !v20 )
    goto LABEL_18;
  v21 = 0;
LABEL_16:
  v20->fields.isNoDamage = v21;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__CheckNotTargetSkill(
        BattleServantData_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x22
  System_Int32_array *NotTargetSkillIdArray; // x0

  if ( (byte_40F8AEA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&skillId);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    byte_40F8AEA = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&skillId,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  NotTargetSkillIdArray = BattleBuffData__GetNotTargetSkillIdArray(buffData, v9, 0LL);
  return System_Array__IndexOf_int_(
           NotTargetSkillIdArray,
           skillId,
           (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) != -1;
}


bool __fastcall BattleServantData__CheckSelectedNobleSeqIsGroup(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0

  if ( this->fields.groupSeqIdFromMstTDSeqWeight > 0 )
    return (unsigned __int8)&dword_0 + 1;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
  if ( !TreasureDevice )
    sub_B170D4();
  return TreasureDvcEntity__IsGroupId(TreasureDevice, 0LL);
}


bool __fastcall BattleServantData__CheckUpdateUpdownOnlyDisplayHp(
        BattleServantData_o *this,
        int32_t beforeMaxhp,
        bool isHeal,
        const MethodInfo *method)
{
  unsigned int v7; // w22
  unsigned int v8; // w23
  const MethodInfo *v9; // x3
  bool v10; // w19

  v7 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, bool, const MethodInfo *))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr,
         isHeal,
         method);
  v8 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._11_get_reducedhp.method)(
         this,
         this->klass->vtable._12_set_reducedhp.methodPtr);
  v10 = BattleServantData__checkUpdateUpdownHp(this, beforeMaxhp, isHeal, v9);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v7,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
    this,
    v8,
    this->klass->vtable._13_get_resultHp.methodPtr);
  return v10;
}


void __fastcall BattleServantData__ClearOverwriteServantName(BattleServantData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  this->fields.svtOverwriteName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.svtOverwriteName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.svtOverwriteBattleName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName, 0LL, v9, v10, v11, v12, v13, v14);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData__EnumerateIndividuality(
        BattleServantData_o *this,
        System_Collections_Generic_IEnumerable_int__o *externalIndiv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_List_int__o *v20; // x21
  System_Collections_Generic_IEnumerable_T__o *svtIndividuality; // x1
  ServantEntity_o *svtdata; // x23
  __int64 v23; // x24
  __int64 v24; // x25
  int32_t v25; // w24
  int32_t v26; // w0
  const MethodInfo *v27; // x1
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffParamList; // x0
  BattleBuffData_o *v31; // x0
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x8
  System_Func_int__bool__o *v44; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_40F8ACB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, externalIndiv);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass591_0__EnumerateIndividuality_b__0__, v13);
    sub_B16FFC(&BattleServantData___c__DisplayClass591_0_TypeInfo, v14);
    byte_40F8ACB = 1;
  }
  v15 = sub_B170CC(BattleServantData___c__DisplayClass591_0_TypeInfo, externalIndiv, method, v3, v4);
  BattleServantData___c__DisplayClass591_0___ctor((BattleServantData___c__DisplayClass591_0_o *)v15, 0LL);
  v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)this->fields.svtIndividuality;
  if ( !svtIndividuality )
  {
    svtdata = this->fields.svtdata;
    v24 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v46.fields.currentCryptoKey = v24;
    *(_QWORD *)&v46.fields.fakeValue = v23;
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v46, 0LL);
    v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
            this->fields._dispLimitCount_k__BackingField,
            0LL);
    if ( !svtdata )
LABEL_21:
      sub_B170D4();
    svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)ServantEntity__getIndividuality(
                                                                        svtdata,
                                                                        v25,
                                                                        v26,
                                                                        0LL);
  }
  if ( !v20 )
    goto LABEL_21;
  System_Collections_Generic_List_int___AddRange(
    v20,
    svtIndividuality,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( externalIndiv )
    System_Collections_Generic_List_int___AddRange(
      v20,
      (System_Collections_Generic_IEnumerable_T__o *)externalIndiv,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.commonAddIndividuality, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v20,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.commonAddIndividuality,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  v28 = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__EnumerateSkillIndividuality(this, v27);
  System_Collections_Generic_List_int___AddRange(
    v20,
    v28,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_21;
  BuffParamList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffParamList(
                                                                   buffData,
                                                                   43,
                                                                   0LL,
                                                                   0LL);
  System_Collections_Generic_List_int___AddRange(
    v20,
    BuffParamList,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  v31 = this->fields.buffData;
  if ( !v31 )
    goto LABEL_21;
  v32 = (System_Int32_array **)BattleBuffData__getBuffParamList(v31, 44, 0LL, 0LL);
  if ( !v15 )
    goto LABEL_21;
  *(_QWORD *)(v15 + 16) = v32;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), v32, v33, v34, v35, v36, v37, v38);
  v43 = *(_QWORD *)(v15 + 16);
  if ( !v43 )
    goto LABEL_21;
  if ( !*(_QWORD *)(v43 + 24) )
    return (System_Collections_Generic_IEnumerable_int__o *)v20;
  v44 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v39, v40, v41, v42);
  System_Func_int__bool____ctor(
    v44,
    (Il2CppObject *)v15,
    Method_BattleServantData___c__DisplayClass591_0__EnumerateIndividuality_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Where_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                                            (System_Func_TSource__bool__o *)v44,
                                                            (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData__EnumerateSkillIndividuality(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  BattleServantData___c_c *v15; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__594_0; // x20
  Il2CppObject *v18; // x21
  struct BattleServantData___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  BattleServantData___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  struct BattleServantData___c_StaticFields *v33; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__594_1; // x20
  Il2CppObject *v35; // x21
  struct BattleServantData___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40F8ACE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___, v6);
    sub_B16FFC(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v7);
    sub_B16FFC(&Method_System_Func_BattleSkillInfoData__IEnumerable_int____ctor__, v8);
    sub_B16FFC(&System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo, v9);
    sub_B16FFC(&System_Func_BattleSkillInfoData__bool__TypeInfo, v10);
    sub_B16FFC(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__594_0__, v11);
    sub_B16FFC(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__594_1__, v12);
    sub_B16FFC(&BattleServantData___c_TypeInfo, v13);
    byte_40F8ACE = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  v15 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v15 = BattleServantData___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__594_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__594_0;
  if ( !_9__594_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__594_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_BattleSkillInfoData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__594_0,
      v18,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__594_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v19 = BattleServantData___c_TypeInfo->static_fields;
    v19->__9__594_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__594_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__594_0,
      (System_Int32_array **)_9__594_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__594_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  v31 = BattleServantData___c_TypeInfo;
  v32 = v26;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v31 = BattleServantData___c_TypeInfo;
  }
  v33 = v31->static_fields;
  _9__594_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v33->__9__594_1;
  if ( !_9__594_1 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v33 = BattleServantData___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__594_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                  System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__594_1,
      v35,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__594_1__,
      (const MethodInfo_2B6C28C *)Method_System_Func_BattleSkillInfoData__IEnumerable_int____ctor__);
    v36 = BattleServantData___c_TypeInfo->static_fields;
    v36->__9__594_1 = (struct System_Func_BattleSkillInfoData__IEnumerable_int___o *)_9__594_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v36->__9__594_1,
      (System_Int32_array **)_9__594_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                            v32,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__594_1,
                                                            (const MethodInfo_19C1EA0 *)Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___);
}


bool __fastcall BattleServantData__ExistAiThinking(
        BattleServantData_o *this,
        BattleLogic_o *logic,
        int32_t procState,
        int32_t timingPriority,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v8; // x22
  const MethodInfo *v9; // x1
  AiStateManager_o *AiStateManager; // x0

  v8 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, Il2CppMethodPointer, int32_t, const MethodInfo *))this->klass->vtable._20_GetLogicServantAi.method)(
                                this,
                                logic,
                                this->klass->vtable._21_getThisTurnActCount.methodPtr,
                                timingPriority,
                                method);
  AiStateManager = BattleServantData__get_AiStateManager(this, v9);
  if ( !v8 || !AiStateManager )
    sub_B170D4();
  return AiStateManager__ExistAiThinking(AiStateManager, this, v8->fields.aiLogic, procState, v8, timingPriority, 0LL);
}


bool __fastcall BattleServantData__ExistsResurrection(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  if ( BattleServantData__isGuts(this, method) )
    return 1;
  shiftDeckList = this->fields.shiftDeckList;
  return shiftDeckList && this->fields.shiftDeckIndex < (signed int)shiftDeckList->max_length;
}


int32_t __fastcall BattleServantData__FixMaxActNum(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21

  if ( (byte_40F8A56 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A56 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return this->fields.maxActNum + BattleBuffData__getActValue_31051136(buffData, 110, v7, 0LL);
}


int32_t __fastcall BattleServantData__FixMinActNum(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21

  if ( (byte_40F8A57 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A57 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return this->fields._minActNum_k__BackingField + BattleBuffData__getActValue_31051136(buffData, 110, v7, 0LL);
}


BattleServantData_Adjustment_array *__fastcall BattleServantData__GetAdjustments(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0
  BattleServantConfConponent_o *p_adjustmentList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40F8A29 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v7);
    byte_40F8A29 = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (BattleServantConfConponent_o *)&this->fields.adjustmentList;
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (BattleServantConfConponent_c *)v10;
    sub_B16F98(p_adjustmentList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      sub_B170D4();
  }
  return (BattleServantData_Adjustment_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)adjustmentList,
                                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__);
}


int32_t __fastcall BattleServantData__GetBillBoardGroup(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__getBillBoardGroup(deckSvt, 0LL);
  else
    return -1;
}


int32_t __fastcall BattleServantData__GetCommandCardIndex(
        BattleServantData_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Int64_array *userCommandCodeIds; // x0

  if ( (byte_40F8AD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_long___, userCommandCodeId);
    byte_40F8AD9 = 1;
  }
  if ( userCommandCodeId >= 1 && (userCommandCodeIds = this->fields.userCommandCodeIds) != 0LL )
    return System_Array__IndexOf_long_(
             userCommandCodeIds,
             userCommandCodeId,
             (const MethodInfo_2045640 *)Method_System_Array_IndexOf_long___);
  else
    return -1;
}


System_Int32_array *__fastcall BattleServantData__GetCommandCodeIds(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int64_array *userCommandCodeIds; // x8
  CommandCodeInfo_o *CommandCodeInfo; // x0
  int64_t v6; // x1
  const MethodInfo *v7; // x2
  struct System_Int64_array *v8; // x8
  System_Int32_array *v9; // x20
  unsigned __int64 v10; // x21
  CommandCodeInfo_o *v11; // x22
  unsigned __int64 max_length; // x9

  if ( (byte_40F8AD7 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F8AD7 = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_B17014(int___TypeInfo, userCommandCodeIds->max_length, v2);
  v8 = this->fields.userCommandCodeIds;
  if ( !v8 )
LABEL_15:
    sub_B170D4();
  v9 = (System_Int32_array *)CommandCodeInfo;
  v10 = 0LL;
  v11 = CommandCodeInfo + 1;
  while ( 1 )
  {
    max_length = v8->max_length;
    if ( (__int64)v10 >= (int)max_length )
      return v9;
    if ( v10 >= max_length )
      goto LABEL_18;
    if ( v9 )
    {
      if ( v10 >= v9->max_length )
        goto LABEL_18;
      v6 = v8->m_Items[v10];
      *((_DWORD *)&v11->klass + v10) = -1;
      if ( (v6 & 0x8000000000000000LL) == 0 )
      {
        CommandCodeInfo = BattleServantData__GetCommandCodeInfo(this, v6, v7);
        if ( CommandCodeInfo )
        {
          if ( v10 >= v9->max_length )
          {
LABEL_18:
            sub_B17100(CommandCodeInfo, v6, v7);
            sub_B170A0();
          }
          *((_DWORD *)&v11->klass + v10) = CommandCodeInfo->fields.commandCodeId;
        }
      }
      v8 = this->fields.userCommandCodeIds;
      ++v10;
      if ( v8 )
        continue;
    }
    goto LABEL_15;
  }
}


System_Int32_array *__fastcall BattleServantData__GetCommandCodeIdsEX(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int64_array *userCommandCodeIds; // x8
  CommandCodeInfo_o *CommandCodeInfo; // x0
  int64_t v6; // x1
  const MethodInfo *v7; // x2
  struct System_Int64_array *v8; // x8
  System_Int32_array *v9; // x20
  unsigned __int64 v10; // x21
  CommandCodeInfo_o *v11; // x22
  unsigned __int64 max_length; // x9

  if ( (byte_40F8AD8 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F8AD8 = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_B17014(int___TypeInfo, userCommandCodeIds->max_length, v2);
  v8 = this->fields.userCommandCodeIds;
  if ( !v8 )
LABEL_15:
    sub_B170D4();
  v9 = (System_Int32_array *)CommandCodeInfo;
  v10 = 0LL;
  v11 = CommandCodeInfo + 1;
  while ( 1 )
  {
    max_length = v8->max_length;
    if ( (__int64)v10 >= (int)max_length )
      return v9;
    if ( v10 >= max_length )
      goto LABEL_18;
    if ( v9 )
    {
      if ( v10 >= v9->max_length )
        goto LABEL_18;
      v6 = v8->m_Items[v10];
      *((_DWORD *)&v11->klass + v10) = v6;
      if ( v6 >= 1 )
      {
        CommandCodeInfo = BattleServantData__GetCommandCodeInfo(this, v6, v7);
        if ( CommandCodeInfo )
        {
          if ( v10 >= v9->max_length )
          {
LABEL_18:
            sub_B17100(CommandCodeInfo, v6, v7);
            sub_B170A0();
          }
          *((_DWORD *)&v11->klass + v10) = CommandCodeInfo->fields.commandCodeId;
        }
      }
      v8 = this->fields.userCommandCodeIds;
      ++v10;
      if ( v8 )
        continue;
    }
    goto LABEL_15;
  }
}


CommandCodeInfo_o *__fastcall BattleServantData__GetCommandCodeInfo(
        BattleServantData_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantData___c__DisplayClass670_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_CommandCodeInfo__o *commandCodeList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F8AE4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeInfo__Find__, userCommandCodeId);
    sub_B16FFC(&Method_System_Predicate_CommandCodeInfo___ctor__, v7);
    sub_B16FFC(&System_Predicate_CommandCodeInfo__TypeInfo, v8);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass670_0__GetCommandCodeInfo_b__0__, v9);
    sub_B16FFC(&BattleServantData___c__DisplayClass670_0_TypeInfo, v10);
    byte_40F8AE4 = 1;
  }
  v11 = (BattleServantData___c__DisplayClass670_0_o *)sub_B170CC(
                                                        BattleServantData___c__DisplayClass670_0_TypeInfo,
                                                        userCommandCodeId,
                                                        method,
                                                        v3,
                                                        v4);
  BattleServantData___c__DisplayClass670_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.userCommandCodeId = userCommandCodeId,
        commandCodeList_k__BackingField = this->fields._commandCodeList_k__BackingField,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_CommandCodeInfo__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_BattleServantData___c__DisplayClass670_0__GetCommandCodeInfo_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_CommandCodeInfo___ctor__),
        !commandCodeList_k__BackingField) )
  {
    sub_B170D4();
  }
  return (CommandCodeInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)commandCodeList_k__BackingField,
                                (System_Predicate_T__o *)v17,
                                (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_CommandCodeInfo__Find__);
}


int32_t __fastcall BattleServantData__GetCurrentShiftPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B170D4();
  return shiftDeckList->max_length - this->fields.shiftDeckIndex;
}


System_String_o *__fastcall BattleServantData__GetCurrentTDErrorStatusVoiceSe(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  bool IsNullOrEmpty; // w8
  System_String_o *result; // x0
  struct System_Collections_Generic_List_string__o *tdErrorStatusVoiceSeList; // x20
  int32_t tdErrorTouchCount; // w8
  unsigned int size; // w9

  if ( (byte_40F8A20 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    byte_40F8A20 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.tdErrorStatusVoiceSeList,
                    0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    tdErrorStatusVoiceSeList = this->fields.tdErrorStatusVoiceSeList;
    if ( !tdErrorStatusVoiceSeList )
      sub_B170D4();
    tdErrorTouchCount = this->fields.tdErrorTouchCount;
    size = tdErrorStatusVoiceSeList->fields._size;
    if ( tdErrorTouchCount <= (int)size )
    {
      if ( size <= tdErrorTouchCount - 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      return tdErrorStatusVoiceSeList->fields._items->m_Items[tdErrorTouchCount - 1];
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


float __fastcall BattleServantData__GetFov(BattleServantData_o *this, float defFov, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0
  float result; // s0
  struct System_Int32_array *shiftDeckList; // x8
  float fov; // [xsp+Ch] [xbp-14h] BYREF

  fov = 0.0;
  deckSvt = this->fields.deckSvt;
  if ( deckSvt && BattleDeckServantData__TryGetOverwriteFov(deckSvt, &fov, 0LL) )
    return fov;
  if ( this->fields.isSystemAlive )
    return defFov;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr) > 0 )
    return defFov;
  shiftDeckList = this->fields.shiftDeckList;
  result = 0.0;
  if ( shiftDeckList )
  {
    if ( this->fields.shiftDeckIndex < (signed int)shiftDeckList->max_length )
      return defFov;
  }
  return result;
}


System_Int32_array *__fastcall BattleServantData__GetHasSideEffectSkillEffectIds(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_int__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_int__o **v38; // x27
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v41; // x0
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  WebViewManager_o *v49; // x0
  WebViewManager_o *v50; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v56; // x23
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  __int64 v58; // x26
  int size; // w8
  int32_t *v60; // x24
  int32_t v61; // w0
  System_Uri_o *v62; // x0
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *AllCommandCodeBuff; // x0
  BattleBuffData_o *v65; // x8
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v66; // x21
  System_Collections_Generic_IEnumerable_T__o *AllCommandAssistBuff; // x0
  int v68; // w8
  __int64 v69; // x24
  System_TimeZoneInfo_AdjustmentRule_o *v70; // x19
  BuffList_c *v71; // x0
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *CommandCodeBuffHash; // x0
  _BOOL8 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  _DWORD *dateData; // x8
  System_Uri_o *v77; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F8A44 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_SkillLvEntity__Invoke__, method);
    sub_B16FFC(&Method_System_Action_SkillLvEntity___ctor__, v6);
    sub_B16FFC(&System_Action_SkillLvEntity__TypeInfo, v7);
    sub_B16FFC(&BuffList_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v21);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass306_0__GetHasSideEffectSkillEffectIds_b__0__, v24);
    sub_B16FFC(&BattleServantData___c__DisplayClass306_0_TypeInfo, v25);
    byte_40F8A44 = 1;
  }
  entity = 0LL;
  v26 = sub_B170CC(BattleServantData___c__DisplayClass306_0_TypeInfo, method, v2, v3, v4);
  BattleServantData___c__DisplayClass306_0___ctor((BattleServantData___c__DisplayClass306_0_o *)v26, 0LL);
  v31 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29,
                                                    v30);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v26 )
    goto LABEL_46;
  *(_QWORD *)(v26 + 24) = v31;
  v38 = (System_Collections_Generic_List_int__o **)(v26 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 24), (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_46;
  v42 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v41,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
  *(_QWORD *)(v26 + 16) = v42;
  sub_B16F98((BattleServantConfConponent_o *)(v26 + 16), v42, v43, v44, v45, v46, v47, v48);
  v49 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v49 )
    goto LABEL_46;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)v49,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v50 )
    goto LABEL_46;
  v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v50,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  v56 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_SkillLvEntity__TypeInfo,
                                                                               v52,
                                                                               v53,
                                                                               v54,
                                                                               v55);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v56,
    (Il2CppObject *)v26,
    Method_BattleServantData___c__DisplayClass306_0__GetHasSideEffectSkillEffectIds_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_SkillLvEntity___ctor__);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_46;
  v58 = 0LL;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v58 >= size )
      break;
    if ( size <= (unsigned int)v58 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v60 = (int32_t *)skillInfoList->fields._items->m_Items[v58];
    if ( v60 )
    {
      if ( (*(unsigned int (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v60 + 392LL))(
             v60,
             *(_QWORD *)(*(_QWORD *)v60 + 400LL)) )
      {
        v61 = (*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v60 + 392LL))(
                v60,
                *(_QWORD *)(*(_QWORD *)v60 + 400LL));
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_46;
        v62 = (System_Uri_o *)SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v61, v60[9], 0LL);
        if ( v62 )
        {
          if ( !v56 )
            goto LABEL_46;
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)v56,
            v62,
            (const MethodInfo_24B7324 *)Method_System_Action_SkillLvEntity__Invoke__);
        }
      }
      skillInfoList = this->fields.skillInfoList;
      ++v58;
      if ( skillInfoList )
        continue;
    }
    goto LABEL_46;
  }
  buffData = this->fields.buffData;
  if ( !buffData
    || (AllCommandCodeBuff = BattleBuffData__GetAllCommandCodeBuff(buffData, 0LL), (v65 = this->fields.buffData) == 0LL)
    || (v66 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)AllCommandCodeBuff,
        AllCommandAssistBuff = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__GetAllCommandAssistBuff(
                                                                                v65,
                                                                                0LL),
        !v66) )
  {
LABEL_46:
    sub_B170D4();
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v66,
    AllCommandAssistBuff,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v68 = v66->fields._size;
  if ( v68 >= 1 )
  {
    v69 = 0LL;
    do
    {
      if ( v68 <= (unsigned int)v69 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v70 = v66->fields._items->m_Items[v69];
      entity = 0LL;
      if ( !v70 || !v51 )
        goto LABEL_46;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             v51,
             &entity,
             v70->fields.m_dateStart.fields.dateData,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
      {
        v71 = BuffList_TypeInfo;
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          v71 = BuffList_TypeInfo;
        }
        if ( !entity )
          goto LABEL_46;
        CommandCodeBuffHash = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)v71->static_fields->CommandCodeBuffHash;
        if ( !CommandCodeBuffHash )
          goto LABEL_46;
        v73 = System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
                CommandCodeBuffHash,
                *(&entity->fields.id + 1),
                (const MethodInfo_21DA97C *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__);
        if ( v73 )
        {
          dateData = (_DWORD *)v70->fields.m_daylightTransitionStart.fields.m_timeOfDay.fields.dateData;
          if ( !dateData )
            goto LABEL_46;
          if ( dateData[6] < 2u )
          {
            sub_B17100(v73, v74, v75);
            sub_B170A0();
          }
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_46;
          v77 = (System_Uri_o *)SkillLvMaster__GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  dateData[8],
                                  dateData[9],
                                  0LL);
          if ( v77 )
          {
            if ( !v56 )
              goto LABEL_46;
            System_Action_Uri___Invoke(
              (System_Action_Uri__o *)v56,
              v77,
              (const MethodInfo_24B7324 *)Method_System_Action_SkillLvEntity__Invoke__);
          }
        }
      }
      v68 = v66->fields._size;
    }
    while ( (int)++v69 < v68 );
  }
  if ( !*v38 )
    goto LABEL_46;
  return System_Collections_Generic_List_int___ToArray(
           *v38,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall BattleServantData__GetIconImageLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  __int64 v6; // x21
  int32_t v7; // w0
  __int64 v9; // x19
  __int64 v10; // x21
  int32_t v11; // w0
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t v13; // w19
  __int64 v14; // x20
  __int64 v15; // x21
  int32_t v16; // w20
  __int64 v17; // x20
  __int64 v18; // x21
  int32_t v19; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_40F8A52 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&OptionManager_TypeInfo, v4);
    byte_40F8A52 = 1;
  }
  v6 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v6;
  *(_QWORD *)&v20.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
  if ( v7 )
    return v7 - (v7 < 11);
  v10 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v10;
  *(_QWORD *)&v21.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B170D4();
  v13 = v11;
  if ( !deckSvt->fields.isFollowerSvt || Follower__IsNpc(this->fields.followerType, 0LL) )
    goto LABEL_18;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
LABEL_18:
    v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = v15;
    *(_QWORD *)&v22.fields.fakeValue = v14;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetCardImageLimitCount(v16, v13, 1, 0, 0LL);
  }
  else
  {
    v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v23.fields.currentCryptoKey = v18;
    *(_QWORD *)&v23.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetImageLimitCount(v19, v13, 0LL);
  }
}


int32_t __fastcall BattleServantData__GetImageSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  struct ServantEntity_o *svtdata; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_40F8A4A & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8A4A = 1;
  }
  result = this->fields._imageSvtId_k__BackingField;
  if ( result <= 0 )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_B170D4();
    v6 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
    v5 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v7.fields.currentCryptoKey = v6;
    *(_QWORD *)&v7.fields.fakeValue = v5;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL);
  }
  return result;
}


BattleLogicServantAi_o *__fastcall BattleServantData__GetLogicServantAi(
        BattleServantData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !logic )
    sub_B170D4();
  if ( this->fields.isEnemy )
    return (BattleLogicServantAi_o *)logic->fields.logicEnemyAi;
  else
    return (BattleLogicServantAi_o *)logic->fields.logicPlayerAi;
}


int32_t __fastcall BattleServantData__GetMaxShiftIconCount(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B170D4();
  return shiftDeckList->max_length - this->fields.shiftSubCount;
}


int32_t __fastcall BattleServantData__GetMaxShiftIconPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B170D4();
  return shiftDeckList->max_length - this->fields.shiftSubCount - this->fields.lowLimitShift;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
        BattleServantData_o *this,
        bool isSvtAction,
        BattleServantData_o *targetSvt,
        BattleCommandData_o *command,
        System_Int32_array *notSvtIndivArray,
        const MethodInfo *method)
{
  BattleBuffData_CheckIndividualitiesData_o *v11; // x0
  BattleBuffData_CheckIndividualitiesData_o *v12; // x22

  if ( (byte_40F8AEB & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, isSvtAction);
    byte_40F8AEB = 1;
  }
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       isSvtAction,
                                                       targetSvt,
                                                       command,
                                                       notSvtIndivArray);
  v12 = v11;
  if ( isSvtAction )
    BattleBuffData_CheckIndividualitiesData___ctor(v11, this, targetSvt, 0LL, command, 0LL, 0LL);
  else
    BattleBuffData_CheckIndividualitiesData___ctor_22056984(v11, this, 0LL, 0LL, notSvtIndivArray, 0LL, 0LL);
  return v12;
}


int32_t __fastcall BattleServantData__GetNoSkipDeadFirstId(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LODWORD(deckSvt) = BattleDeckServantData__GetNoSkipDeadFirstId(deckSvt, 0LL);
  return (int)deckSvt;
}


int32_t __fastcall BattleServantData__GetOriginalRemainingNeedActCount(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Mathf__Max_40727628(0, this->fields._minActNum_k__BackingField - this->fields.actionCount, 0LL);
}


int32_t __fastcall BattleServantData__GetRemainActionCount(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__FixMaxActNum(this, method) - this->fields.actionCount;
}


int32_t __fastcall BattleServantData__GetRemainingNeedActCount(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t v2; // w1

  v2 = BattleServantData__FixMinActNum(this, method) - this->fields.actionCount;
  return UnityEngine_Mathf__Max_40727628(0, v2, 0LL);
}


int32_t __fastcall BattleServantData__GetRevengeIdCheckOpponentOnly(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !buffData )
    sub_B170D4();
  if ( BattleBuffData_BuffData__checkState(buffData, 2048, 0LL) )
    return BattleServantData__getRevengeTargetUniqueIdFromOpponent(this, v4);
  else
    return BattleServantData__getRevengeTargetUniqueId(this, v4);
}


BattleServantData_SaveData_o *__fastcall BattleServantData__GetSaveDataFromJson(
        BattleServantData_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_40F8A2D & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_Deserialize_BattleServantData_SaveData___, str);
    sub_B16FFC(&JsonManager_TypeInfo, v4);
    byte_40F8A2D = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (BattleServantData_SaveData_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                           (Il2CppObject *)str,
                                           (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
}


int32_t __fastcall BattleServantData__GetSelectedNobleGroupSeqId(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  TreasureDvcEntity_o *TreasureDevice; // x0

  result = this->fields.groupSeqIdFromMstTDSeqWeight;
  if ( result <= 0 )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
    if ( !TreasureDevice )
      sub_B170D4();
    return TreasureDevice->fields.cacheGroupId;
  }
  return result;
}


int32_t __fastcall BattleServantData__GetSelectedNobleSeqId(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  TreasureDvcEntity_o *TreasureDevice; // x0
  bool IsRandomTD; // w21
  const MethodInfo *v6; // x1
  TreasureDvcEntity_o *v7; // x0
  const MethodInfo *v8; // x2
  TreasureDvcEntity_o *v9; // x20
  int32_t DispLimitCount; // w0

  result = this->fields.seqIdFromMstTDSeqWeight;
  if ( result <= 0 )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
    if ( TreasureDevice )
    {
      IsRandomTD = TreasureDvcEntity__IsRandomTD(TreasureDevice, 0LL);
      v7 = BattleServantData__get_TreasureDevice(this, v6);
      v9 = v7;
      if ( IsRandomTD )
      {
        if ( v7 )
          return v7->fields.cacheRandomSeqId;
      }
      else
      {
        DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v8);
        if ( v9 )
          return TreasureDvcEntity__getSeqId(v9, DispLimitCount, 0LL);
      }
    }
    sub_B170D4();
  }
  return result;
}


int32_t __fastcall BattleServantData__GetSkillChargeTurn(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *SelfSkillInfo; // x0

  SelfSkillInfo = BattleServantData__getSelfSkillInfo(this, index, method);
  if ( SelfSkillInfo )
    LODWORD(SelfSkillInfo) = BattleSkillInfoData__getChargeTurn(SelfSkillInfo, 0LL);
  return (int)SelfSkillInfo;
}


System_Int32_array *__fastcall BattleServantData__GetSubFieldIndividuality(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  BattleBuffData_CheckIndividualitiesData_o *v7; // x20
  const MethodInfo *v8; // x1
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_List_int__o *BuffGeneralParamList; // x0

  if ( (byte_40F8A6C & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    byte_40F8A6C = 1;
  }
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  BuffData = BattleServantData__get_BuffData(this, v8);
  if ( !v7
    || !BuffData
    || (BuffGeneralParamList = BattleBuffData__GetBuffGeneralParamList(
                                 BuffData,
                                 115,
                                 v7->fields._selfConcatSvtIndividualities_k__BackingField,
                                 0LL,
                                 1,
                                 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  return System_Collections_Generic_List_int___ToArray(
           BuffGeneralParamList,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleWarBoardInfo_WarBoardServantInfo_o *__fastcall BattleServantData__GetTakeoverServantData(
        BattleServantData_o *this,
        WarBoardBattleEvent_TakeoverSvtArg_o *arg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  const MethodInfo *v11; // x1
  bool isAction; // w22
  const MethodInfo *v13; // x1
  AiStateManager_o *AiStateManager; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  ServantAiResetChecker_o *v19; // x24
  System_Int32_array **TakeOverAiStateArray; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v29; // x1
  BattleBuffData_o *v30; // x0
  const MethodInfo *v31; // x1
  BattleBuffData_o *v32; // x0
  const MethodInfo *v33; // x1
  BattleBuffData_o *v34; // x23
  int32_t v35; // w24
  const MethodInfo *v36; // x1
  int32_t MaxHp; // w25
  const MethodInfo *v38; // x2
  System_Int32_array *Individualities; // x26
  const MethodInfo *v40; // x4
  System_Int32_array *BuffIndividualities; // x0
  System_Int32_array *fieldIndiv; // x27
  System_Int32_array *v43; // x28
  const MethodInfo *v44; // x4
  System_Int32_array *v45; // x0
  const MethodInfo *v46; // x1
  bool v47; // w8
  const MethodInfo *v48; // x1
  BattleBuffData_o *v49; // x0
  System_Int32_array **SaveData; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x1
  int32_t v61; // w0
  int32_t v62; // w22
  int32_t v63; // w23
  struct System_Collections_Generic_Dictionary_long__int__o *dicDistributeStar; // x22
  const MethodInfo *v65; // x1
  int64_t UserSvtId; // x0
  WarBoardBattleServantEvent_o *servantEvent; // x19
  const MethodInfo *v68; // x1
  int64_t v69; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  int64_t npcSvtEquipId; // x8

  if ( (byte_40F8A31 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_long__int___, arg);
    sub_B16FFC(&System_Math_TypeInfo, v7);
    sub_B16FFC(&ServantAiResetChecker_TypeInfo, v8);
    sub_B16FFC(&BattleWarBoardInfo_WarBoardServantInfo_TypeInfo, v9);
    byte_40F8A31 = 1;
  }
  v10 = sub_B170CC(BattleWarBoardInfo_WarBoardServantInfo_TypeInfo, arg, method, v3, v4);
  BattleWarBoardInfo_WarBoardServantInfo___ctor((BattleWarBoardInfo_WarBoardServantInfo_o *)v10, 0LL);
  isAction = BattleServantData__isAction(this, v11);
  AiStateManager = BattleServantData__get_AiStateManager(this, v13);
  v19 = (ServantAiResetChecker_o *)sub_B170CC(ServantAiResetChecker_TypeInfo, v15, v16, v17, v18);
  ServantAiResetChecker___ctor(v19, this, 0LL);
  if ( !AiStateManager )
    goto LABEL_22;
  TakeOverAiStateArray = (System_Int32_array **)AiStateManager__MakeTakeOverAiStateArray(
                                                  AiStateManager,
                                                  (AiResetChecker_o *)v19,
                                                  0LL);
  if ( !v10 )
    goto LABEL_22;
  *(_QWORD *)(v10 + 112) = TakeOverAiStateArray;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 112), TakeOverAiStateArray, v21, v22, v23, v24, v25, v26);
  BuffData = BattleServantData__get_BuffData(this, v27);
  if ( !BuffData )
    goto LABEL_22;
  BattleBuffData__ResetNotTakeOverBuff(BuffData, 0LL);
  v30 = BattleServantData__get_BuffData(this, v29);
  if ( !arg )
    goto LABEL_22;
  if ( !v30 )
    goto LABEL_22;
  BattleBuffData__RemoveNoTurnBuff(v30, arg->fields.logic, 0LL);
  v32 = BattleServantData__get_BuffData(this, v31);
  if ( !v32 )
    goto LABEL_22;
  BattleBuffData__UpdateForceNoField(v32, 0LL);
  v34 = BattleServantData__get_BuffData(this, v33);
  v35 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  MaxHp = BattleServantData__getMaxHp(this, v36);
  Individualities = BattleServantData__getIndividualities(this, 0LL, v38);
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 0, 0, 0, v40);
  fieldIndiv = arg->fields.fieldIndiv;
  v43 = BuffIndividualities;
  v45 = BattleServantData__getBuffIndividualities(this, 0, 0, 1, v44);
  if ( !v34 )
    goto LABEL_22;
  BattleBuffData__ChangeBuffState(v34, v35, MaxHp, Individualities, v43, fieldIndiv, v45, 0LL);
  v47 = !isAction && BattleServantData__isAction(this, v46);
  *(_BYTE *)(v10 + 85) = v47;
  *(_QWORD *)(v10 + 16) = BattleServantData__getUserSvtId(this, v46);
  *(_DWORD *)(v10 + 24) = this->fields.maxDefeatPoint;
  *(_DWORD *)(v10 + 28) = this->fields.defeatPoint;
  v49 = BattleServantData__get_BuffData(this, v48);
  if ( !v49 )
    goto LABEL_22;
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData(v49, 0LL);
  *(_QWORD *)(v10 + 48) = SaveData;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 48), SaveData, v51, v52, v53, v54, v55, v56);
  *(_DWORD *)(v10 + 56) = BattleServantData__GetSkillChargeTurn(this, 0, v57);
  *(_DWORD *)(v10 + 60) = BattleServantData__GetSkillChargeTurn(this, 1, v58);
  *(_DWORD *)(v10 + 64) = BattleServantData__GetSkillChargeTurn(this, 2, v59);
  *(_DWORD *)(v10 + 36) = BattleServantData__getMaxHp(this, v60);
  v61 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  v62 = *(_DWORD *)(v10 + 36);
  v63 = v61;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  *(_DWORD *)(v10 + 32) = System_Math__Min_44418752(v63, v62, 0LL);
  *(_DWORD *)(v10 + 40) = this->fields.np;
  *(_DWORD *)(v10 + 44) = this->fields.nexttpturn;
  *(_DWORD *)(v10 + 68) = this->fields.aftSquareIndex;
  *(_DWORD *)(v10 + 72) = this->fields.befSquareIndex;
  *(_DWORD *)(v10 + 76) = this->fields.transformIndex;
  *(_DWORD *)(v10 + 80) = this->fields.transformLimitCount;
  *(_BYTE *)(v10 + 84) = this->fields.isSleepWaitMode;
  dicDistributeStar = arg->fields.dicDistributeStar;
  UserSvtId = BattleServantData__getUserSvtId(this, v65);
  *(_DWORD *)(v10 + 88) = BasicHelper__GetValue_long__int_(
                            (System_Collections_Generic_Dictionary_K__V__o *)dicDistributeStar,
                            UserSvtId,
                            0,
                            (const MethodInfo_18B8018 *)Method_BasicHelper_GetValue_long__int___);
  *(_DWORD *)(v10 + 92) = this->fields.squareEffectSkillId;
  *(_DWORD *)(v10 + 96) = this->fields.squareEffectSkillLv;
  servantEvent = arg->fields.servantEvent;
  v69 = BattleServantData__getUserSvtId(this, v68);
  if ( !servantEvent )
LABEL_22:
    sub_B170D4();
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(servantEvent, v69, 0LL);
  if ( EventServantInfo )
    npcSvtEquipId = EventServantInfo->fields.npcSvtEquipId;
  else
    npcSvtEquipId = 0LL;
  *(_QWORD *)(v10 + 104) = npcSvtEquipId;
  return (BattleWarBoardInfo_WarBoardServantInfo_o *)v10;
}


int32_t __fastcall BattleServantData__GetUpDownCriticalRateDamageTaken(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23
  System_String_o *text; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8AA7 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AA7 = 1;
  }
  text = 0LL;
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActValue_31051172(buffData, 90, &text, v9, 0LL);
}


float __fastcall BattleServantData__GetUpDownDropStarDamageTaken(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8AA5 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AA5 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 91, v9, 0LL);
}


double __fastcall BattleServantData__GetWkHpRatio(BattleServantData_o *this, const MethodInfo *method)
{
  int v3; // w0
  const MethodInfo *v4; // x1
  int v5; // w20
  double result; // d0

  v3 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  if ( v3 == 1 )
    v5 = 0;
  else
    v5 = v3;
  result = (double)v5 / (double)BattleServantData__getMaxHp(this, v4);
  this->fields.wkHpRatio = result;
  return result;
}


bool __fastcall BattleServantData__HasAnyBuffByBuffTypes(
        BattleServantData_o *this,
        BuffList_TYPE_array *buffTypes,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v11; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  bool v13; // w1
  __int16 *v14; // x0
  __int16 v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8A84 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffTypes);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, v7);
    sub_B16FFC(&Method_System_Nullable_bool__GetValueOrDefault__, v8);
    sub_B16FFC(&Method_System_Nullable_bool___ctor__, v9);
    byte_40F8A84 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         buffTypes,
                                                         method,
                                                         v3,
                                                         v4);
    BattleBuffData_CheckIndividualitiesData___ctor(v11, this, 0LL, 0LL, 0LL, 0LL, 0LL);
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList(
                                                                      buffData,
                                                                      buffTypes,
                                                                      v11,
                                                                      0LL,
                                                                      0LL);
    if ( BuffList )
    {
      v13 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
              BuffList,
              (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
      v14 = &v16;
      v16 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v14,
        v13,
        (const MethodInfo_296535C *)Method_System_Nullable_bool___ctor__);
      LOBYTE(BuffList) = (_BYTE)v16 != 0;
    }
  }
  else
  {
    LOBYTE(BuffList) = 0;
  }
  return (char)BuffList;
}


bool __fastcall BattleServantData__HasAvailablePermanentSleepBuff(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21

  if ( (byte_40F8A83 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A83 = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return 0;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__IsPermanentSleep(buffData, v7, 0LL);
}


bool __fastcall BattleServantData__HasAvailableWarBoardNotAttackedBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( buffData )
    LOBYTE(buffData) = BattleBuffData__IsWarBoardNotAttacked(buffData, 0LL);
  return (char)buffData;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo_18BA2E0 *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  Il2CppClass *_0_BattleServantData___c__615_T; // x21
  __int16 v17; // w8
  Il2CppClass *v18; // x21
  Il2CppClass *v19; // x21
  Il2CppClass *v20; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21
  Il2CppClass *v22; // x21
  __int16 v23; // w8
  Il2CppClass *v24; // x21
  Il2CppClass *v25; // x21
  Il2CppClass *v26; // x21
  Il2CppObject *v27; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  Il2CppClass *v34; // x19
  char *static_fields; // x0

  if ( (byte_40FA64B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___, *(_QWORD *)&wave);
    sub_B16FFC(&Method_System_Func_ServantWaveTurnEvent__bool___ctor__, v8);
    sub_B16FFC(&System_Func_ServantWaveTurnEvent__bool__TypeInfo, v9);
    byte_40FA64B = 1;
  }
  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner )
    sub_B170D4();
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantWaveTurnEventOwner__EventEnumerator(
                                                               waveTurnEventOwner,
                                                               wave,
                                                               turn,
                                                               0LL);
  _0_BattleServantData___c__615_T = method->rgctx_data->_0_BattleServantData___c__615_T_;
  v17 = WORD1(_0_BattleServantData___c__615_T->vtable[0].methodPtr);
  if ( (v17 & 1) == 0 )
  {
    sub_AAFCFC(method->rgctx_data->_0_BattleServantData___c__615_T_);
    v17 = WORD1(_0_BattleServantData___c__615_T->vtable[0].methodPtr);
  }
  if ( (v17 & 0x400) != 0 )
  {
    v18 = method->rgctx_data->_0_BattleServantData___c__615_T_;
    if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_0_BattleServantData___c__615_T_);
    if ( !v18->_2.cctor_finished )
    {
      v19 = method->rgctx_data->_0_BattleServantData___c__615_T_;
      if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_0_BattleServantData___c__615_T_);
      j_il2cpp_runtime_class_init_0(v19);
    }
  }
  v20 = method->rgctx_data->_0_BattleServantData___c__615_T_;
  if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_BattleServantData___c__615_T_);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v20->static_fields + 1);
  if ( !v21 )
  {
    v22 = method->rgctx_data->_0_BattleServantData___c__615_T_;
    v23 = WORD1(v22->vtable[0].methodPtr);
    if ( (v23 & 1) == 0 )
    {
      sub_AAFCFC(method->rgctx_data->_0_BattleServantData___c__615_T_);
      v23 = WORD1(v22->vtable[0].methodPtr);
    }
    if ( (v23 & 0x400) != 0 )
    {
      v24 = method->rgctx_data->_0_BattleServantData___c__615_T_;
      if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(method->rgctx_data->_0_BattleServantData___c__615_T_);
      if ( !v24->_2.cctor_finished )
      {
        v25 = method->rgctx_data->_0_BattleServantData___c__615_T_;
        if ( (BYTE2(v25->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC(method->rgctx_data->_0_BattleServantData___c__615_T_);
        j_il2cpp_runtime_class_init_0(v25);
      }
    }
    v26 = method->rgctx_data->_0_BattleServantData___c__615_T_;
    if ( (BYTE2(v26->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(method->rgctx_data->_0_BattleServantData___c__615_T_);
    v27 = *(Il2CppObject **)v26->static_fields;
    v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_ServantWaveTurnEvent__bool__TypeInfo,
                                                                               v11,
                                                                               v12,
                                                                               v13,
                                                                               v14);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v21,
      v27,
      (intptr_t)method->rgctx_data->_1_BattleServantData___c__615_T___HasWaveTurnEvent_b__615_0,
      (const MethodInfo_2B6AB40 *)Method_System_Func_ServantWaveTurnEvent__bool___ctor__);
    v34 = method->rgctx_data->_0_BattleServantData___c__615_T_;
    if ( (BYTE2(v34->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(v34);
    static_fields = (char *)v34->static_fields;
    *((_QWORD *)static_fields + 1) = v21;
    sub_B16F98(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v21,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v15,
           (System_Func_TSource__bool__o *)v21,
           (const MethodInfo_18C9B90 *)Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___);
}


void __fastcall BattleServantData__InitCommonAddIndividuality(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t Value; // w0
  struct System_Int32_array *v19; // x1

  if ( (byte_40F8A36 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_7245, v10);
    byte_40F8A36 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Follower__IsAnySupport(this->fields.followerType, 0LL) )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_7245, 0LL);
    if ( v11 )
    {
      System_Collections_Generic_List_int___Add(
        v11,
        Value,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      goto LABEL_7;
    }
LABEL_11:
    sub_B170D4();
  }
  if ( !v11 )
    goto LABEL_11;
LABEL_7:
  if ( v11->fields._size < 1 )
    v19 = 0LL;
  else
    v19 = System_Collections_Generic_List_int___ToArray(
            v11,
            (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.commonAddIndividuality = v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commonAddIndividuality,
    (System_Int32_array **)v19,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall BattleServantData__InitializeBuff(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o **p_buffData; // x20
  int MaxHp; // w21
  BattleBuffData_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x3

  if ( (byte_40F8AC9 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_TypeInfo, method);
    byte_40F8AC9 = 1;
  }
  p_buffData = &this->fields.buffData;
  if ( this->fields.buffData )
  {
    MaxHp = BattleServantData__getMaxHp(this, method);
  }
  else
  {
    v8 = (BattleBuffData_o *)sub_B170CC(BattleBuffData_TypeInfo, method, v2, v3, v4);
    BattleBuffData___ctor(v8, 0LL);
    *p_buffData = v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.buffData,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    MaxHp = -1;
  }
  if ( !*p_buffData )
    sub_B170D4();
  BattleBuffData__Initialize(*p_buffData, 0LL);
  if ( MaxHp >= 1 )
    BattleServantData__checkUpdateUpdownHp(this, MaxHp, 0, v15);
}


bool __fastcall BattleServantData__IsAntiSmoothNpSeqIdLotteried(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_Int32_array *ValueAsIntArray; // x20
  const MethodInfo *v7; // x1
  int32_t SelectedNobleSeqId; // w0

  if ( (byte_40F8AE5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, data);
    sub_B16FFC(&StringLiteral_11616, v4);
    byte_40F8AE5 = 1;
  }
  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)data);
  if ( TreasureDevice )
  {
    ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray((System_String_o *)StringLiteral_11616, 0LL);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ValueAsIntArray, 0LL) )
    {
      LOBYTE(TreasureDevice) = 0;
    }
    else
    {
      SelectedNobleSeqId = BattleServantData__GetSelectedNobleSeqId(this, v7);
      LOBYTE(TreasureDevice) = System_Array__IndexOf_int_(
                                 ValueAsIntArray,
                                 SelectedNobleSeqId,
                                 (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___) >= 0;
    }
  }
  return (char)TreasureDevice;
}


bool __fastcall BattleServantData__IsContainsSeqId(
        BattleServantData_o *this,
        BattleData_o *data,
        int32_t seqId,
        const MethodInfo *method)
{
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
  struct System_Collections_Generic_List_Dictionary_string__object___o *firstNpPlayList; // x0
  System_Xml_XmlQualifiedName_o **v23; // x25
  System_Int32_c **v24; // x24
  System_Xml_XmlQualifiedName_o **v25; // x23
  Il2CppObject *current; // x22
  int64_t v27; // x21
  System_Xml_XmlQualifiedName_o **v28; // x28
  int32_t v29; // w27
  System_Int32_c **v30; // x19
  System_Xml_XmlQualifiedName_o **v31; // x25
  System_Xml_Schema_XmlSchemaObject_o *v32; // x22
  __int64 v33; // x23
  __int64 v34; // x24
  int32_t v35; // w0
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v38; // x21
  __int64 v39; // x22
  int32_t v40; // w21
  __int128 v41; // q0
  int v42; // w19
  int v43; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-B0h] BYREF
  UserServantEntity_o *entity; // [xsp+50h] [xbp-90h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *v49; // [xsp+58h] [xbp-88h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *v50; // [xsp+60h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_40F8AE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&long_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&string_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_22376, v19);
    sub_B16FFC(&StringLiteral_22973, v20);
    sub_B16FFC(&StringLiteral_21876, v21);
    byte_40F8AE6 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v50 = 0LL;
  value = 0LL;
  entity = 0LL;
  v49 = 0LL;
  if ( !data || (firstNpPlayList = data->fields.firstNpPlayList) == 0LL )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)firstNpPlayList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v23 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_21876;
  v24 = &int_TypeInfo;
  v25 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_22973;
  v52.fields.current = (Il2CppObject *)v47.fields.fakeValue;
  *(_OWORD *)&v52.fields.list = *(_OWORD *)&v47.fields.currentCryptoKey;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v52,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
        {
          v42 = 0;
          v43 = 1;
          goto LABEL_43;
        }
        current = v52.fields.current;
        if ( v52.fields.current
          && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v52.fields.current,
               *v23,
               &value,
               (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
        {
          if ( !value )
            sub_B170D4();
          if ( value->klass->_1.element_class != (*v24)->_1.element_class )
          {
            sub_B173C8(value);
LABEL_47:
            sub_B170D4();
          }
          if ( *(_DWORD *)j_il2cpp_object_unbox_0(value) == seqId )
            break;
        }
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
             *v25,
             &v50,
             (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
        && v50 )
      {
        if ( (System_String_c *)v50->klass == string_TypeInfo )
        {
          v27 = System_Int64__Parse((System_String_o *)v50, 0LL);
          goto LABEL_17;
        }
        if ( (System_Int64_c *)v50->klass == long_TypeInfo )
        {
          v27 = *(_QWORD *)j_il2cpp_object_unbox_0(v50);
          goto LABEL_17;
        }
      }
      v27 = 0LL;
LABEL_17:
      if ( this->fields.isEnemy || this->fields.followerType )
        break;
      v41 = *(_OWORD *)&this->fields.userSvtId.fields.fakeValue;
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey;
      *(_OWORD *)&v47.fields.fakeValue = v41;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v46 = v47;
      if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v46, 0LL) )
        goto LABEL_44;
    }
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_22376,
           &v49,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v28 = v23;
      v29 = seqId;
      v30 = v24;
      v31 = v25;
      v32 = v49;
      v34 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v53.fields.currentCryptoKey = v34;
      *(_QWORD *)&v53.fields.fakeValue = v33;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v53, 0LL);
      if ( !v32 )
        sub_B170D4();
      v24 = v30;
      if ( v32->klass->_1.element_class != (*v30)->_1.element_class )
      {
        sub_B173C8(v32);
LABEL_51:
        sub_B170D4();
      }
      seqId = v29;
      v25 = v31;
      v23 = v28;
      if ( *(_DWORD *)j_il2cpp_object_unbox_0(v32) == v35 )
        break;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_47;
    if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           v27,
           (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    {
      if ( !entity )
        goto LABEL_51;
      v39 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v54.fields.currentCryptoKey = v39;
      *(_QWORD *)&v54.fields.fakeValue = v38;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v54, 0LL);
      if ( v40 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL) )
        break;
    }
  }
LABEL_44:
  v42 = 1;
  v43 = 3;
LABEL_43:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  return v42 & ((unsigned int)(v43 + 1) >> 2);
}


bool __fastcall BattleServantData__IsCounterWaitMotion(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v4; // x1

  buffData = this->fields.buffData;
  return buffData && BattleBuffData__IsCounterFunc(buffData, this, 0LL, 0LL) && BattleServantData__isAction(this, v4);
}


bool __fastcall BattleServantData__IsDeadCrystal(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__get_FixDeadType(this, method) == 6;
}


bool __fastcall BattleServantData__IsDeadEnergy(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__get_FixDeadType(this, method) == 5;
}


bool __fastcall BattleServantData__IsDisplayDead(BattleServantData_o *this, const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
           this,
           this->klass->vtable._10_set_hp.methodPtr) < 1;
}


bool __fastcall BattleServantData__IsEnableNpInfo(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B170D4();
  return BattleDeckServantData__getEnableNpInfo(deckSvt, 0LL);
}


bool __fastcall BattleServantData__IsEquip(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v6; // x0
  BattleUserServantData_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleUserServantData_array *equipList; // x22
  __int64 v11; // x8
  SkillLvMaster_o *v12; // x19
  unsigned __int64 v13; // x23
  Il2CppClass **v14; // x21
  _QWORD *v15; // x21
  BattleUserServantData_o *v16; // t1
  BattleUserServantData_o *v17; // x20
  int64_t hiddenValue; // x8
  BattleUserServantData_o *v19; // x21
  unsigned __int64 v20; // x24
  int64_t *p_fakeValue; // x25

  if ( (byte_40F8AE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F8AE9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)Instance,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___),
        (v6 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (BattleUserServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)v6,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (equipList = this->fields.equipList) == 0LL) )
  {
LABEL_26:
    sub_B170D4();
  }
  v11 = *(_QWORD *)&equipList->max_length;
  if ( (int)v11 < 1 )
    return 0;
  v12 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)v11 )
    {
LABEL_25:
      sub_B17100(MasterData_WarQuestSelectionMaster, v8, v9);
      sub_B170A0();
    }
    v14 = &equipList->obj.klass + v13;
    v16 = (BattleUserServantData_o *)v14[4];
    v15 = v14 + 4;
    MasterData_WarQuestSelectionMaster = v16;
    if ( v16 )
    {
      MasterData_WarQuestSelectionMaster = (BattleUserServantData_o *)BattleUserServantData__getBattleSkillIdList(
                                                                        MasterData_WarQuestSelectionMaster,
                                                                        0LL);
      if ( v13 >= equipList->max_length )
        goto LABEL_25;
      v17 = MasterData_WarQuestSelectionMaster;
      if ( !*v15 )
        goto LABEL_26;
      MasterData_WarQuestSelectionMaster = (BattleUserServantData_o *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v15 + 408LL))(
                                                                        *v15,
                                                                        *(_QWORD *)(*(_QWORD *)*v15 + 416LL));
      if ( !v17 )
        goto LABEL_26;
      hiddenValue = v17->fields.id.fields.hiddenValue;
      if ( (int)hiddenValue >= 1 )
        break;
    }
LABEL_22:
    LODWORD(v11) = equipList->max_length;
    if ( (__int64)++v13 >= (int)v11 )
      return 0;
  }
  v19 = MasterData_WarQuestSelectionMaster;
  v20 = 0LL;
  p_fakeValue = &MasterData_WarQuestSelectionMaster->fields.id.fields.fakeValue;
  while ( 1 )
  {
    if ( v20 >= (unsigned int)hiddenValue )
      goto LABEL_25;
    if ( !v19 )
      goto LABEL_26;
    if ( v20 >= LODWORD(v19->fields.id.fields.hiddenValue) )
      goto LABEL_25;
    v8 = *((unsigned int *)&v17->fields.id.fields.fakeValue + v20);
    if ( (int)v8 >= 1 )
    {
      if ( !v12 )
        goto LABEL_26;
      MasterData_WarQuestSelectionMaster = (BattleUserServantData_o *)SkillLvMaster__GetEntity(
                                                                        v12,
                                                                        v8,
                                                                        *((_DWORD *)p_fakeValue + v20),
                                                                        0LL);
      if ( MasterData_WarQuestSelectionMaster )
        return 1;
    }
    LODWORD(hiddenValue) = v17->fields.id.fields.hiddenValue;
    if ( (__int64)++v20 >= (int)hiddenValue )
      goto LABEL_22;
  }
}


bool __fastcall BattleServantData__IsForceAppearance(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.isForceAppearance;
}


bool __fastcall BattleServantData__IsHideClassSkillNpcFollower(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  if ( !this->fields.deckSvt || !Follower__IsNpc(this->fields.followerType, 0LL) )
    return 0;
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B170D4();
  return BattleDeckServantData__IsHideClassSkillNpcFollower(deckSvt, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__IsMoveToSubMember(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_40F8AD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___, *(_QWORD *)&wave);
    byte_40F8AD5 = 1;
  }
  return BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(
           this,
           wave,
           turn,
           (const MethodInfo_18BA2E0 *)Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___);
}


bool __fastcall BattleServantData__IsNoAutoSkipDead(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__IsNoAutoSkipDead(deckSvt, 0LL);
  return (char)deckSvt;
}


bool __fastcall BattleServantData__IsNoSkipDead(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__IsNoSkipDead(deckSvt, 0LL);
  return (char)deckSvt;
}


bool __fastcall BattleServantData__IsNoVoice(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__IsNoVoice(deckSvt, 0LL);
  return (char)deckSvt;
}


bool __fastcall BattleServantData__IsNpDoubleSpeed(BattleServantData_o *this, const MethodInfo *method)
{
  return UserServantCollectionEntity__CheckSvtCommonFlag(this->fields.svtCommonFlag, 4, 0LL);
}


bool __fastcall BattleServantData__IsNpEffectSpeedFix(BattleServantData_o *this, const MethodInfo *method)
{
  struct BattleDeckServantData_o *deckSvt; // x8

  return !this->fields.isEnemy
      && ((deckSvt = this->fields.deckSvt) == 0LL || !deckSvt->fields.isFollowerSvt)
      && UserServantCollectionEntity__CheckSvtCommonFlag(this->fields.svtCommonFlag, 2, 0LL);
}


bool __fastcall BattleServantData__IsNpMax(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.lineMaxNp * this->fields.nplineCount <= this->fields.np;
}


bool __fastcall BattleServantData__IsNpc(BattleServantData_o *this, const MethodInfo *method)
{
  return Follower__IsNpc(this->fields.followerType, 0LL);
}


bool __fastcall BattleServantData__IsOnlyFirstForcedOneSpeed(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0

  if ( !BattleServantData__get_TreasureDevice(this, method) || this->fields.playedNPCount > 0 )
    return 0;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
  if ( !TreasureDevice )
    sub_B170D4();
  return TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDevice, 0LL);
}


bool __fastcall BattleServantData__IsTDAppearance(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x19
  const MethodInfo *v4; // x2
  int32_t DispLimitCount; // w0

  TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v4);
  if ( !TreasureDevice )
    sub_B170D4();
  return TreasureDvcEntity__getFixAppearanceInfoArray(TreasureDevice, DispLimitCount, 0LL) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_40F8AD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___, *(_QWORD *)&wave);
    byte_40F8AD6 = 1;
  }
  return BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(
           this,
           wave,
           turn,
           (const MethodInfo_18BA2E0 *)Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___);
}


BattleCommandData_o *__fastcall BattleServantData__MakeTreasureDvcCommand(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleCommandData_o *v6; // x20
  const MethodInfo *v7; // x1
  ServantTreasureDvcEntity_o *SvtTDvc; // x0
  const MethodInfo *v9; // x2

  if ( (byte_40F8A5F & 1) == 0 )
  {
    sub_B16FFC(&BattleCommandData_TypeInfo, method);
    byte_40F8A5F = 1;
  }
  if ( !this->fields.TDvc || !this->fields._SvtTDvc )
    return 0LL;
  v6 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, method, v2, v3, v4);
  BattleCommandData___ctor(v6, 0LL);
  SvtTDvc = BattleServantData__get_SvtTDvc(this, v7);
  if ( !SvtTDvc || !v6 )
    sub_B170D4();
  v6->fields._type = SvtTDvc->fields.cardId;
  v6->fields.treasureDvc = BattleServantData__getTreasureDvcId(this, 1, v9);
  return v6;
}


void __fastcall BattleServantData__OverwriteShiftDeckIndex(
        BattleServantData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  int32_t Param; // w0

  if ( !vals )
    sub_B170D4();
  Param = DataVals__GetParam(vals, 117, -1, 0LL);
  if ( (Param & 0x80000000) == 0 )
    this->fields.shiftDeckIndex = Param;
}


void __fastcall BattleServantData__OverwriteSkillsForTransformedServant(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvt,
        const MethodInfo *method)
{
  System_Int32_array *BattleSkillIdList; // x20
  __int64 v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x21
  unsigned __int64 v9; // x22
  __int64 v10; // x26
  BattleSkillInfoData_o *SelfSkillInfo; // x0
  __int64 v12; // x1
  int32_t v13; // w25
  int32_t v14; // w24
  BattleSkillInfoData_o *v15; // x23
  const MethodInfo *v16; // x4

  if ( !userSvt
    || (BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(userSvt, 0LL),
        v6 = ((__int64 (__fastcall *)(BattleUserServantData_o *, void *))userSvt->klass->vtable._6_getSkillLevelList.method)(
               userSvt,
               userSvt->klass[1]._1.image),
        !BattleSkillIdList) )
  {
LABEL_15:
    sub_B170D4();
  }
  if ( (int)BattleSkillIdList->max_length >= 1 )
  {
    v8 = v6;
    v9 = 0LL;
    v10 = v6 + 32;
    do
    {
      SelfSkillInfo = BattleServantData__getSelfSkillInfo(this, v9, v7);
      if ( SelfSkillInfo )
      {
        if ( v9 >= BattleSkillIdList->max_length )
          goto LABEL_14;
        if ( !v8 )
          goto LABEL_15;
        if ( v9 >= *(unsigned int *)(v8 + 24) )
        {
LABEL_14:
          sub_B17100(SelfSkillInfo, v12, v7);
          sub_B170A0();
        }
        v13 = BattleSkillIdList->m_Items[v9 + 1];
        v14 = *(_DWORD *)(v10 + 4 * v9);
        v15 = SelfSkillInfo;
        if ( ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SelfSkillInfo->klass->vtable._5_get_skillId.method)(
               SelfSkillInfo,
               SelfSkillInfo->klass->vtable._6_get_IndividualityArray.methodPtr) != v13
          || v15->fields.skilllv != v14 )
        {
          BattleServantData__ReplaceSelfSkillInfo(this, v9, v13, v14, v16);
        }
      }
      ++v9;
    }
    while ( (__int64)v9 < (int)BattleSkillIdList->max_length );
  }
}


void __fastcall BattleServantData__OverwriteTreasureDevice(
        BattleServantData_o *this,
        int32_t overWritetreasuredvcId,
        int32_t overWritetreasuredvcLv,
        const MethodInfo *method)
{
  if ( overWritetreasuredvcId )
  {
    *(_QWORD *)&this->fields.tempTreasuredvcId = *(_QWORD *)&this->fields.treasuredvcId;
    BattleServantData__UpdateTreasureDevice(this, overWritetreasuredvcId, overWritetreasuredvcLv, method);
  }
}


void __fastcall BattleServantData__PrevActorNoblePhantasm(
        BattleServantData_o *this,
        BattleSequenceManager_o *battleSeqManager,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData__RegisterWaveTurnEvent(
        BattleServantData_o *this,
        ServantWaveTurnEvent_o *ev,
        const MethodInfo *method)
{
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0

  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner )
    sub_B170D4();
  ServantWaveTurnEventOwner__Add(waveTurnEventOwner, ev, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__ReplaceSelfSkillInfo(
        BattleServantData_o *this,
        int32_t index,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleServantData___c__DisplayClass303_0_o *v15; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x24
  WarBoardData_SquareRangeSearch_o *v22; // x0
  WarBoardData_SquareRangeSearch_o *v23; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v24; // x0
  int32_t v25; // w24
  BattleSkillInfoData_o *SkillData; // x0
  BattleSkillInfoData_o *v27; // x0
  BattleSkillInfoData_o *v28; // x20
  const MethodInfo *v29; // [xsp+0h] [xbp-40h]

  if ( (byte_40F8A41 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v9);
    sub_B16FFC(&System_Func_BattleSkillInfoData__bool__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__, v12);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass303_0__ReplaceSelfSkillInfo_b__0__, v13);
    sub_B16FFC(&BattleServantData___c__DisplayClass303_0_TypeInfo, v14);
    byte_40F8A41 = 1;
  }
  v15 = (BattleServantData___c__DisplayClass303_0_o *)sub_B170CC(
                                                        BattleServantData___c__DisplayClass303_0_TypeInfo,
                                                        *(_QWORD *)&index,
                                                        *(_QWORD *)&skillId,
                                                        *(_QWORD *)&skillLv,
                                                        method);
  BattleServantData___c__DisplayClass303_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  v15->fields.skillInfoType = 11;
  v15->fields.index = index;
  skillInfoList = this->fields.skillInfoList;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleSkillInfoData__bool__TypeInfo,
                                                                             v16,
                                                                             v17,
                                                                             v18,
                                                                             v19);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_BattleServantData___c__DisplayClass303_0__ReplaceSelfSkillInfo_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
  v22 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___);
  if ( !v22 )
    return;
  v23 = v22;
  v24 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.skillInfoList;
  if ( !v24
    || (v25 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                v24,
                (WarBoardManager_TaskList_o *)v23,
                (const MethodInfo_2F26D88 *)Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__),
        SkillData = BattleSkillInfoData__MakeSkillData(v15->fields.skillInfoType, 0LL),
        v27 = BattleServantData__SetSkillInfo(
                this,
                SkillData,
                v15->fields.skillInfoType,
                v15->fields.index,
                skillId,
                skillLv,
                -1LL,
                -1,
                v29),
        !this->fields.skillInfoList)
    || (v28 = v27,
        System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.skillInfoList,
          v25,
          (WarBoardManager_TaskList_o *)v27,
          (const MethodInfo_2F25A30 *)Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__),
        !v28) )
  {
LABEL_10:
    sub_B170D4();
  }
  ((void (__fastcall *)(BattleSkillInfoData_o *, BattleServantData_o *, Il2CppMethodPointer))v28->klass->vtable._11_PreAddProcess.method)(
    v28,
    this,
    v28->klass->vtable._12_IsChangeable.methodPtr);
  v28->fields.sealedTurn = (int32_t)v23[2].klass;
  v28->fields.chargeTurn = v23[1].fields.squareIndex;
}


void __fastcall BattleServantData__ResetAdjustment(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0

  if ( (byte_40F8A2A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Clear__, method);
    byte_40F8A2A = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)adjustmentList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__Clear__);
}


void __fastcall BattleServantData__ResetOverwriteTreasureDevice(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t tempTreasuredvcId; // w1
  int32_t *p_tempTreasuredvcId; // x19

  tempTreasuredvcId = this->fields.tempTreasuredvcId;
  if ( tempTreasuredvcId )
  {
    p_tempTreasuredvcId = &this->fields.tempTreasuredvcId;
    BattleServantData__UpdateTreasureDevice(this, tempTreasuredvcId, this->fields.tempTreasuredvcLv, v2);
    *(_QWORD *)p_tempTreasuredvcId = 0x100000000LL;
  }
}


void __fastcall BattleServantData__ResetSelectedTreasureDevice(BattleServantData_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.selectedTDCardId = -1LL;
}


void __fastcall BattleServantData__ResetServantSelfSkill(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x20
  BattleServantData___c_c *v15; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__358_0; // x21
  Il2CppObject *v18; // x22
  struct BattleServantData___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x20
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  BattleSkillInfoData_o *v37; // x0
  const MethodInfo *v38; // x3
  BattleSkillInfoData_o *v39; // x21
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0

  if ( (byte_40F8A55 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___, method);
    sub_B16FFC(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v6);
    sub_B16FFC(&System_Func_BattleSkillInfoData__bool__TypeInfo, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&Method_BattleServantData___c__ResetServantSelfSkill_b__358_0__, v12);
    sub_B16FFC(&BattleServantData___c_TypeInfo, v13);
    byte_40F8A55 = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  v15 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v15 = BattleServantData___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__358_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__358_0;
  if ( !_9__358_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__358_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_BattleSkillInfoData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__358_0,
      v18,
      Method_BattleServantData___c__ResetServantSelfSkill_b__358_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v19 = BattleServantData___c_TypeInfo->static_fields;
    v19->__9__358_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__358_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__358_0,
      (System_Int32_array **)_9__358_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__358_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  if ( !v26 )
    sub_B170D4();
  klass = v26->klass;
  v28 = v26;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AAFEF8(v26, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_B170D4();
  while ( 1 )
  {
    v40 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_33;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_33:
      v43 = sub_AAFEF8(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v32, *(_QWORD *)(v43 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v32;
    if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v35 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
          goto LABEL_24;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_24:
      v36 = sub_AAFEF8(v32, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v37 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( !v37 )
      sub_B170D4();
    v37->fields.sealedTurn = 0;
    if ( !BattleServantData__ChangeSkillRemainingTurn(this, v37, v37, v38) )
      v39->fields.chargeTurn = 0;
  }
  v44 = *(_QWORD *)v32;
  if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
  {
    v45 = 0LL;
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      v46 += 4;
      if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
        goto LABEL_40;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_40:
    v47 = sub_AAFEF8(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v32, *(_QWORD *)(v47 + 8));
}


void __fastcall BattleServantData__SaveNpPlay(BattleServantData_o *this, BattleData_o *data, const MethodInfo *method)
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
  int32_t SelectedNobleSeqId; // w0
  int32_t v15; // w22
  PlayerServantNoblePhantasmUsageData_o *playerServantNoblePhantasmUsageData; // x21
  __int64 v17; // x23
  __int64 v18; // x24
  int32_t v19; // w0
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v25; // x21
  System_Xml_Schema_XmlSchemaObject_o *v26; // x0
  const MethodInfo *v27; // x1
  System_Xml_Schema_XmlSchemaObject_o *v28; // x0
  __int64 v29; // x22
  __int64 v30; // x23
  System_Int32_c *v31; // x0
  System_Xml_Schema_XmlSchemaObject_o *v32; // x0
  struct System_Collections_Generic_List_Dictionary_string__object___o *firstNpPlayList; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  System_String_o *v36; // x20
  int32_t Int; // w0
  int v38; // w8
  System_Xml_Schema_XmlSchemaObject_o *v39; // x0
  int32_t v40; // [xsp+Ch] [xbp-54h] BYREF
  int64_t UserSvtId; // [xsp+10h] [xbp-50h] BYREF
  int32_t SelectedNobleGroupSeqId; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_40F8AE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__Add__, data);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_22376, v11);
    sub_B16FFC(&StringLiteral_22973, v12);
    sub_B16FFC(&StringLiteral_21876, v13);
    byte_40F8AE7 = 1;
  }
  SelectedNobleGroupSeqId = 0;
  SelectedNobleSeqId = BattleServantData__GetSelectedNobleSeqId(this, (const MethodInfo *)data);
  if ( !data )
    goto LABEL_25;
  v15 = SelectedNobleSeqId;
  playerServantNoblePhantasmUsageData = data->fields.playerServantNoblePhantasmUsageData;
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v18;
  *(_QWORD *)&v43.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v43, 0LL);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_25;
  PlayerServantNoblePhantasmUsageData__AddNoblePhantasmUsage(
    playerServantNoblePhantasmUsageData,
    v19,
    v15,
    this->fields.followerType,
    this->fields.isEnemy,
    0LL);
  if ( !BattleServantData__CheckFirstNpPlay(this, data, v20) )
    return;
  v25 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        v21,
                                                                                        v22,
                                                                                        v23,
                                                                                        v24);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v25,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  LODWORD(UserSvtId) = v15;
  v26 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &UserSvtId);
  if ( !v25 )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v25,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21876,
    v26,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( this->fields.isEnemy || this->fields.followerType )
  {
    UserSvtId = 0LL;
    v28 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v25,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_22973,
      v28,
      (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v44.fields.currentCryptoKey = v30;
    *(_QWORD *)&v44.fields.fakeValue = v29;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v44, 0LL);
    v31 = int_TypeInfo;
  }
  else
  {
    UserSvtId = BattleServantData__getUserSvtId(this, v27);
    v39 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v25,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_22973,
      v39,
      (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v31 = int_TypeInfo;
    v40 = 0;
  }
  v32 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(v31, &v40);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v25,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22376,
    v32,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  firstNpPlayList = data->fields.firstNpPlayList;
  if ( !firstNpPlayList )
LABEL_25:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)firstNpPlayList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
  if ( BattleServantData__CheckSelectedNobleSeqIsGroup(this, v34) )
  {
    SelectedNobleGroupSeqId = BattleServantData__GetSelectedNobleGroupSeqId(this, v35);
    v36 = System_Int32__ToString((int32_t)&SelectedNobleGroupSeqId, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v36, 0, 0LL);
    if ( this->fields.isEnemy || this->fields.followerType )
      v38 = 2;
    else
      v38 = 1;
    UnityEngine_PlayerPrefs__SetInt(v36, v38 | Int, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__SetAdjustment(
        BattleServantData_o *this,
        bool isCritical,
        bool isWeak,
        bool isRegist,
        bool isNoDamage,
        UnityEngine_Vector3_o offSet,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v15; // x24
  const MethodInfo *v16; // x2

  z = offSet.fields.z;
  y = offSet.fields.y;
  x = offSet.fields.x;
  if ( (byte_40F8A27 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantData_Adjustment_TypeInfo, isCritical);
    byte_40F8A27 = 1;
  }
  v15 = sub_B170CC(BattleServantData_Adjustment_TypeInfo, isCritical, isWeak, isRegist, isNoDamage);
  BattleServantData_Adjustment___ctor((BattleServantData_Adjustment_o *)v15, 0LL);
  if ( !v15 )
    sub_B170D4();
  *(float *)(v15 + 20) = x;
  *(float *)(v15 + 24) = y;
  *(_BYTE *)(v15 + 16) = isCritical;
  *(_BYTE *)(v15 + 17) = isWeak;
  *(_BYTE *)(v15 + 18) = isRegist;
  *(_BYTE *)(v15 + 19) = isNoDamage;
  *(float *)(v15 + 28) = z;
  BattleServantData__SetAdjustment_22711472(this, (BattleServantData_Adjustment_o *)v15, v16);
}


void __fastcall BattleServantData__SetAdjustment_22711472(
        BattleServantData_o *this,
        BattleServantData_Adjustment_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0
  BattleServantConfConponent_o *p_adjustmentList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F8A28 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__, data);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v8);
    byte_40F8A28 = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (BattleServantConfConponent_o *)&this->fields.adjustmentList;
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo,
                                                                                                    data,
                                                                                                    method,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (BattleServantConfConponent_c *)v11;
    sub_B16F98(p_adjustmentList, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
    adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)adjustmentList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__SetCommandAssistSkill(
        BattleServantData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *commandAssistIds; // x8
  EventCommandAssistMaster_o *v10; // x21
  unsigned __int64 v11; // x22
  unsigned __int64 max_length; // x9
  const MethodInfo *v13; // [xsp+0h] [xbp-30h]

  if ( (byte_40F8A34 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventCommandAssistMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40F8A34 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int32_t *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  commandAssistIds = this->fields.commandAssistIds;
  if ( !commandAssistIds )
LABEL_14:
    sub_B170D4();
  v10 = (EventCommandAssistMaster_o *)Master_WarQuestSelectionMaster;
  v11 = 0LL;
  while ( 1 )
  {
    max_length = commandAssistIds->max_length;
    if ( (__int64)v11 >= (int)max_length )
      break;
    if ( v11 >= max_length )
    {
      sub_B17100(Master_WarQuestSelectionMaster, v7, v8);
      sub_B170A0();
    }
    if ( v10 )
    {
      Master_WarQuestSelectionMaster = (int32_t *)EventCommandAssistMaster__GetCurrentEntity(
                                                    v10,
                                                    eventId,
                                                    commandAssistIds->m_Items[v11 + 1],
                                                    -1,
                                                    0,
                                                    0LL);
      if ( Master_WarQuestSelectionMaster )
        Master_WarQuestSelectionMaster = (int32_t *)BattleServantData__addSkillInfo(
                                                      this,
                                                      23,
                                                      v11,
                                                      Master_WarQuestSelectionMaster[13],
                                                      Master_WarQuestSelectionMaster[14],
                                                      -1LL,
                                                      Master_WarQuestSelectionMaster[4],
                                                      0LL,
                                                      v13);
      commandAssistIds = this->fields.commandAssistIds;
      ++v11;
      if ( commandAssistIds )
        continue;
    }
    goto LABEL_14;
  }
}


void __fastcall BattleServantData__SetDeadType(BattleServantData_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.deadtype = type;
}


void __fastcall BattleServantData__SetFakeData(
        BattleServantData_o *this,
        System_Collections_Generic_Dictionary_string__int__o *fakeInfo,
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
  int32_t Item; // w21
  __int128 v18; // q1
  int32_t v19; // w21
  int32_t v20; // w0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v23; // x0
  ServantLimitAddMaster_o *v24; // x21
  int32_t v25; // w22
  int32_t v26; // w0
  struct ServantEntity_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WebViewManager_o *v41; // x0
  ServantLimitMaster_o *v42; // x0
  int32_t battleCharaLimitCount; // w2
  int32_t svtId; // w1
  __int64 v45; // x21
  __int64 v46; // x22
  int32_t v47; // w0
  struct ServantEntity_o *v48; // x0
  struct ServantEntity_o **p_svtdata; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  WebViewManager_o *v56; // x0
  WarQuestSelectionMaster_o *v57; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v58; // x8
  ServantLimitMaster_o *v59; // x20
  int32_t v60; // w21
  int32_t v61; // w0
  struct ServantLimitEntity_o *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+28h] [xbp-58h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_40F8A45 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, fakeInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_20138, v12);
    sub_B16FFC(&StringLiteral_22376, v13);
    sub_B16FFC(&StringLiteral_19700, v14);
    sub_B16FFC(&StringLiteral_22973, v15);
    sub_B16FFC(&StringLiteral_22811, v16);
    byte_40F8A45 = 1;
  }
  entity = 0LL;
  if ( !fakeInfo )
    goto LABEL_29;
  this->fields.index = System_Collections_Generic_Dictionary_string__int___get_Item(
                         fakeInfo,
                         (System_String_o *)StringLiteral_19700,
                         (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  this->fields.uniqueId = System_Collections_Generic_Dictionary_string__int___get_Item(
                            fakeInfo,
                            (System_String_o *)StringLiteral_22811,
                            (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  Item = System_Collections_Generic_Dictionary_string__int___get_Item(
           fakeInfo,
           (System_String_o *)StringLiteral_22973,
           (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v69, Item, 0LL);
  v18 = *(_OWORD *)&v69.fields.fakeValue;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)&v69.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = v18;
  v19 = System_Collections_Generic_Dictionary_string__int___get_Item(
          fakeInfo,
          (System_String_o *)StringLiteral_22376,
          (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v19, 0LL);
  v20 = System_Collections_Generic_Dictionary_string__int___get_Item(
          fakeInfo,
          (System_String_o *)StringLiteral_20138,
          (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  this->fields.limitcount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v20, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v23 )
    goto LABEL_29;
  v24 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v23,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.svtId, 0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitcount, 0LL);
  if ( !v24 )
    goto LABEL_29;
  if ( !ServantLimitAddMaster__TryGetEntity(v24, &entity, v25, v26, 0LL) )
  {
    v46 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v45 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v71.fields.currentCryptoKey = v46;
    *(_QWORD *)&v71.fields.fakeValue = v45;
    v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v71, 0LL);
    if ( MasterData_WarQuestSelectionMaster )
    {
      v48 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        v47,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.svtdata = v48;
      p_svtdata = &this->fields.svtdata;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.svtdata,
        (System_Int32_array **)v48,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
      v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v56 )
      {
        v57 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v56,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        v58 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)*p_svtdata;
        if ( *p_svtdata )
        {
          v59 = (ServantLimitMaster_o *)v57;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v58[1], 0LL);
          v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitcount, 0LL);
          if ( v59 )
          {
            battleCharaLimitCount = v61;
            v42 = v59;
            svtId = v60;
            goto LABEL_28;
          }
        }
      }
    }
LABEL_29:
    sub_B170D4();
  }
  if ( !entity )
    goto LABEL_29;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  v27 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    entity->fields.svtId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtdata,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Int32_array **)entity;
  this->fields.svtlimitaddent = entity;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.svtlimitaddent, v34, v35, v36, v37, v38, v39, v40);
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v41 )
    goto LABEL_29;
  v42 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v41,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !entity || !v42 )
    goto LABEL_29;
  battleCharaLimitCount = entity->fields.battleCharaLimitCount;
  svtId = entity->fields.svtId;
LABEL_28:
  v62 = ServantLimitMaster__GetEntity(v42, svtId, battleCharaLimitCount, 0LL);
  this->fields.svtlimitDispent = v62;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtlimitDispent,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
}


void __fastcall BattleServantData__SetForceAppearance(BattleServantData_o *this, bool flg, const MethodInfo *method)
{
  this->fields.isForceAppearance = flg;
}


void __fastcall BattleServantData__SetIsBattleShift(
        BattleServantData_o *this,
        bool isBattleShift,
        const MethodInfo *method)
{
  this->fields._IsBattleShift_k__BackingField = isBattleShift;
}


void __fastcall BattleServantData__SetIsSleepWaitMode(BattleServantData_o *this, bool value, const MethodInfo *method)
{
  this->fields.isSleepWaitModeReady = value;
  if ( !value )
    this->fields.isSleepWaitMode = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__SetRemainActionCount(
        BattleServantData_o *this,
        int32_t remainActCnt,
        const MethodInfo *method)
{
  this->fields.actionCount = BattleServantData__FixMaxActNum(this, *(const MethodInfo **)&remainActCnt) - remainActCnt;
}


void __fastcall BattleServantData__SetSelectedTreasureDevice(BattleServantData_o *this, const MethodInfo *method)
{
  ServantTreasureDvcEntity_o *SvtTDvc; // x0
  const MethodInfo *v4; // x2

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_B170D4();
  this->fields.selectedTDCardId = SvtTDvc->fields.cardId;
  this->fields.selectedTDId = BattleServantData__getTreasureDvcId(this, 1, v4);
}


void __fastcall BattleServantData__SetServantCommandCard(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Hashtable_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  WebViewManager_o *Instance; // x0
  ServantCardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v21; // x2
  __int64 v22; // x22
  unsigned __int64 v23; // x27
  __int64 v24; // x23
  __int64 v25; // x24
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  struct System_Collections_Hashtable_o *commandtable; // x23
  __int64 v30; // x0
  __int64 v31; // x25
  __int64 v32; // x26
  __int64 v33; // x24
  int32_t v34; // w0
  ServantCardEntity_o *v35; // x0
  int32_t cardId; // [xsp+14h] [xbp-5Ch] BYREF
  ServantCardEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v38; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_40F8A77 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCardMaster___, method);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A,
      v11);
    byte_40F8A77 = 1;
  }
  entity = 0LL;
  v12 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, method, v2, v3, v4);
  System_Collections_Hashtable___ctor_38240048(v12, 0LL);
  this->fields.commandtable = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandtable,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ServantCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v22 = sub_B17014(int___TypeInfo, 6LL, v21);
  v38.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164((System_Array_o *)v22, v38, 0LL);
  if ( !v22 )
    goto LABEL_22;
  if ( *(int *)(v22 + 24) >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = v25;
      *(_QWORD *)&v39.fields.fakeValue = v24;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v39, 0LL);
      if ( v23 >= *(unsigned int *)(v22 + 24) )
      {
        sub_B17100(v26, v27, v28);
        sub_B170A0();
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      if ( ServantCardMaster__TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &entity,
             v26,
             *(_DWORD *)(v22 + 32 + 4 * v23),
             0LL) )
      {
        if ( !entity )
          break;
        commandtable = this->fields.commandtable;
        cardId = entity->fields.cardId;
        v30 = j_il2cpp_value_box_0(int_TypeInfo, &cardId);
        v32 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v31 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v33 = v30;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v40.fields.currentCryptoKey = v32;
        *(_QWORD *)&v40.fields.fakeValue = v31;
        v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v40, 0LL);
        if ( !entity )
          break;
        v35 = ServantCardMaster__GetEntity(MasterData_WarQuestSelectionMaster, v34, entity->fields.cardId, 0LL);
        if ( !commandtable )
          break;
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, ServantCardEntity_o *, Il2CppMethodPointer))commandtable->klass->vtable._30_set_Item.method)(
          commandtable,
          v33,
          v35,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
      if ( (__int64)++v23 >= *(int *)(v22 + 24) )
        return;
    }
LABEL_22:
    sub_B170D4();
  }
}


void __fastcall BattleServantData__SetServantNPSpeedCommonFlag(
        BattleServantData_o *this,
        int32_t buttonIndex,
        const MethodInfo *method)
{
  int32_t v3; // w8

  if ( buttonIndex == 2 )
  {
    v3 = this->fields.svtCommonFlag | 6;
  }
  else if ( buttonIndex == 1 )
  {
    v3 = this->fields.svtCommonFlag & 0xFFFFFFF9 | 2;
  }
  else
  {
    if ( buttonIndex )
      return;
    v3 = this->fields.svtCommonFlag & 0xFFFFFFF9;
  }
  this->fields.svtCommonFlag = v3;
}


BattleDeckServantData_o *__fastcall BattleServantData__SetShiftDeckData(
        BattleServantData_o *this,
        BattleInfoData_o *battleInfo,
        BattleDeckServantData_o *inDeckSvt,
        int32_t npcId,
        const MethodInfo *method)
{
  BattleDeckServantData_o *result; // x0

  result = 0LL;
  if ( battleInfo && inDeckSvt && npcId >= 1 )
  {
    result = BattleInfoData__getShiftServantData(battleInfo, npcId, 0LL);
    if ( !result )
      sub_B170D4();
    result->fields.id = inDeckSvt->fields.id;
    result->fields.uniqueId = inDeckSvt->fields.uniqueId;
    result->fields.isFollowerSvt = inDeckSvt->fields.isFollowerSvt;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__SetShiftServantChange(
        BattleServantData_o *this,
        BattleData_o *data,
        EnemySimpleHpData_o *defHp,
        int32_t shiftValue,
        const MethodInfo *method)
{
  int v9; // w0
  int v10; // w21
  int32_t TotalDamage; // w20
  int32_t v12; // w1
  const MethodInfo *v13; // x3

  if ( (byte_40F8ADD & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, data);
    byte_40F8ADD = 1;
  }
  BattleServantData__setShiftServant(this, data, shiftValue, *(const MethodInfo **)&shiftValue);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  if ( !defHp )
    sub_B170D4();
  v10 = v9;
  TotalDamage = SimpleHpData__get_TotalDamage((SimpleHpData_o *)defHp, 0LL);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = System_Math__Max_44463768(1, v10 - TotalDamage, 0LL);
  BattleServantData__setHp(this, v12, 0, v13);
}


BattleSkillInfoData_o *__fastcall BattleServantData__SetSkillInfo(
        BattleServantData_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t type,
        int32_t index,
        int32_t skillId,
        int32_t skillLv,
        int64_t userCommandCodeId,
        int32_t commandAssistId,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  __int64 v24; // x25
  __int64 v25; // x25
  DataManager_o *v26; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *v28; // x0
  __int64 v29; // x25
  __int64 v30; // x25
  DataManager_o *v31; // x0
  SkillLvMaster_o *v32; // x0
  SkillLvEntity_o *v33; // x0
  int32_t priority; // w8
  __int64 v35; // x22
  __int64 v36; // x22
  DataManager_o *v37; // x0
  WarQuestSelectionMaster_o *v38; // x0
  __int64 v39; // x22
  __int64 v40; // x23
  ServantSkillMaster_o *v41; // x21
  int32_t v42; // w22
  int32_t v43; // w0
  ServantSkillEntity_o *EntityFromSkillId; // x0
  ServantSkillEntity_o *v45; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_40F8A42 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, skillInfo);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v18);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21);
    byte_40F8A42 = 1;
  }
  entity = 0LL;
  if ( !skillInfo )
    goto LABEL_33;
  skillInfo->fields.type = type;
  uniqueId = this->fields.uniqueId;
  klass = skillInfo->klass;
  skillInfo->fields.index = index;
  skillInfo->fields.svtUniqueId = uniqueId;
  ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
    skillInfo,
    (unsigned int)skillId,
    klass->vtable._5_get_skillId.methodPtr);
  skillInfo->fields.skilllv = skillLv;
  skillInfo->fields.userCommandCodeId = userCommandCodeId;
  skillInfo->fields.commandAssistId = commandAssistId;
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v25 = **(_QWORD **)(v24 + 192);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AAFCFC(v25);
  v26 = **(DataManager_o ***)(v25 + 184);
  if ( !v26 )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        v26,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  entity = 0LL;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    skillId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  v28 = (SkillEntity_o *)entity;
  if ( entity )
  {
    skillInfo->fields.isUseSkill = 1;
    skillInfo->fields.isPassive = SkillEntity__isPassive(v28, 0LL);
    v29 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v30 = **(_QWORD **)(v29 + 192);
    if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
      sub_AAFCFC(v30);
    v31 = **(DataManager_o ***)(v30 + 184);
    if ( !v31 )
      goto LABEL_33;
    v32 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               v31,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !v32 )
      goto LABEL_33;
    v33 = SkillLvMaster__GetEntity(v32, skillId, skillLv, 0LL);
    if ( !v33 )
      goto LABEL_33;
    priority = v33->fields.priority;
    skillInfo->fields.sealedTurn = 0;
    skillInfo->fields.chargeTurn = 0;
    skillInfo->fields.priority = priority;
  }
  else
  {
    skillInfo->fields.isUseSkill = 0;
  }
  if ( type != 11 )
    return skillInfo;
  v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v36 = **(_QWORD **)(v35 + 192);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AAFCFC(v36);
  v37 = **(DataManager_o ***)(v36 + 184);
  if ( !v37 )
    goto LABEL_33;
  v38 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          v37,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v40 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v41 = (ServantSkillMaster_o *)v38;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v40;
  *(_QWORD *)&v48.fields.fakeValue = v39;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v48, 0LL);
  v43 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v41 )
LABEL_33:
    sub_B170D4();
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v41, v42, index + 1, v43, 0LL);
  if ( EntityFromSkillId )
  {
    v45 = EntityFromSkillId;
    skillInfo->fields.strengthStatus = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
    skillInfo->fields.skillRecord = v45->fields.skillNum;
  }
  return skillInfo;
}


void __fastcall BattleServantData__SetSummonNpc(
        BattleServantData_o *this,
        BattleDeckServantData_o *inDeckSvt,
        const MethodInfo *method)
{
  if ( !inDeckSvt )
    sub_B170D4();
  this->fields.summonNpcId = inDeckSvt->fields.npcId;
}


void __fastcall BattleServantData__SetTakeoverServantData(
        BattleServantData_o *this,
        BattleWarBoardInfo_WarBoardServantInfo_o *takeoverData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Array_o *v6; // x21
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *SkillTypePassiveBuff; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v9; // x21
  BattleBuffData_o *v10; // x0
  BattleBuffData_o *v11; // x0
  BattleBuffData_o *v12; // x0
  const MethodInfo *v13; // x1
  BattleBuffData_o *v14; // x0
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_40F8A2F & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, takeoverData);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__DFFD09C996EDD2714178B1E2F5A21D0196F6DAE68A6E220DFDDFAD22DA6B6F1D,
      v5);
    byte_40F8A2F = 1;
  }
  if ( takeoverData )
  {
    this->fields.maxDefeatPoint = takeoverData->fields.maxDefeatPoint;
    this->fields.defeatPoint = takeoverData->fields.defeatPoint;
    if ( takeoverData->fields.buffDataSave )
    {
      v6 = (System_Array_o *)sub_B17014(int___TypeInfo, 3LL, method);
      v15.fields.value = Field__PrivateImplementationDetails__DFFD09C996EDD2714178B1E2F5A21D0196F6DAE68A6E220DFDDFAD22DA6B6F1D;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v6, v15, 0LL);
      buffData = this->fields.buffData;
      if ( !buffData )
        goto LABEL_14;
      SkillTypePassiveBuff = BattleBuffData__GetSkillTypePassiveBuff(buffData, (System_Int32_array *)v6, 0LL);
      if ( !this->fields.buffData )
        goto LABEL_14;
      v9 = SkillTypePassiveBuff;
      BattleBuffData__Initialize(this->fields.buffData, 0LL);
      v10 = this->fields.buffData;
      if ( !v10
        || (BattleBuffData__clearAuraBuff(v10, 0LL), (v11 = this->fields.buffData) == 0LL)
        || (BattleBuffData__setSaveData(v11, takeoverData->fields.buffDataSave, 0LL),
            (v12 = this->fields.buffData) == 0LL)
        || (BattleBuffData__AddGetSkillTypeBuff(v12, v9, 0LL), (v14 = BattleServantData__get_BuffData(this, v13)) == 0LL) )
      {
LABEL_14:
        sub_B170D4();
      }
      BattleBuffData__UpdateBaseAddOrder(v14, 0LL);
    }
    this->fields.isSleepWaitMode = takeoverData->fields.isSleepWaitMode;
    this->fields.aftSquareIndex = takeoverData->fields.aftSquareIndex;
    this->fields.befSquareIndex = takeoverData->fields.befSquareIndex;
    this->fields.squareEffectSkillId = takeoverData->fields.squareEffectSkillId;
    this->fields.squareEffectSkillLv = takeoverData->fields.squareEffectSkillLv;
  }
}


void __fastcall BattleServantData__SetTakeoverServantDataPrevAdd(
        BattleServantData_o *this,
        BattleWarBoardInfo_WarBoardServantInfo_o *takeoverData,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  BattleBuffData_o *v14; // x21
  BattleBuffData_BuffData_array *ActiveList; // x0
  const MethodInfo *v16; // x2
  int32_t tmpAppearanceId; // w8
  System_Int32_array *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  unsigned int max_length; // w8
  System_Int32_array *v22; // x21
  int32_t i; // w22
  BattleSkillInfoData_o *SelfSkillInfo; // x0
  BalanceConfig_c *v25; // x0
  __int64 currentHp; // x1
  int32_t currentNp; // w8
  int32_t nextNpTurn; // w8

  if ( (byte_40F8A30 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, takeoverData);
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, v7);
    sub_B16FFC(&BattleBuffData_TypeInfo, v8);
    sub_B16FFC(&int___TypeInfo, v9);
    byte_40F8A30 = 1;
  }
  if ( takeoverData )
  {
    this->fields.transformIndex = takeoverData->fields.transformIndex;
    this->fields.transformLimitCount = takeoverData->fields.transformLimitCount;
    BattleServantData__loadTransformServant(this, data, (const MethodInfo *)data);
    if ( takeoverData->fields.buffDataSave )
    {
      v14 = (BattleBuffData_o *)sub_B170CC(BattleBuffData_TypeInfo, v10, v11, v12, v13);
      BattleBuffData___ctor(v14, 0LL);
      if ( !v14 )
        goto LABEL_22;
      BattleBuffData__setSaveData(v14, takeoverData->fields.buffDataSave, 0LL);
      this->fields.tmpAppearanceId = -1;
      ActiveList = BattleBuffData__getActiveList(v14, 1, 0LL);
      if ( BattleServantData__isChangeAppearanceBuff(this, ActiveList, v16) )
      {
        tmpAppearanceId = this->fields.tmpAppearanceId;
        this->fields.tmpAppearanceId = -1;
        this->fields.appearanceId = tmpAppearanceId;
      }
    }
    v18 = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, v11);
    if ( !v18 )
LABEL_22:
      sub_B170D4();
    max_length = v18->max_length;
    v22 = v18;
    if ( !max_length
      || (v18->m_Items[1] = takeoverData->fields.skill1Ct, max_length == 1)
      || (v18->m_Items[2] = takeoverData->fields.skill2Ct, max_length <= 2) )
    {
      sub_B17100(v18, v19, v20);
      sub_B170A0();
    }
    v18->m_Items[3] = takeoverData->fields.skill3Ct;
    for ( i = 0; ; ++i )
    {
      v25 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v25 = BalanceConfig_TypeInfo;
      }
      if ( i >= v25->static_fields->SvtSkillListMax )
        break;
      SelfSkillInfo = BattleServantData__getSelfSkillInfo(this, i, v20);
      if ( SelfSkillInfo )
        SelfSkillInfo->fields.chargeTurn = BasicHelper__IndexValue_int_(
                                             v22,
                                             i,
                                             0,
                                             (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
    }
    currentHp = (unsigned int)takeoverData->fields.currentHp;
    if ( (_DWORD)currentHp == -1 )
    {
      currentHp = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                    this,
                    this->klass->vtable._10_set_hp.methodPtr);
    }
    else if ( !this )
    {
      goto LABEL_22;
    }
    ((void (__fastcall *)(BattleServantData_o *, __int64, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
      this,
      currentHp,
      this->klass->vtable._11_get_reducedhp.methodPtr);
    currentNp = takeoverData->fields.currentNp;
    if ( currentNp == -1 )
      currentNp = this->fields.np;
    this->fields.np = currentNp;
    nextNpTurn = takeoverData->fields.nextNpTurn;
    if ( nextNpTurn == -1 )
      nextNpTurn = this->fields.nexttpturn;
    this->fields.nexttpturn = nextNpTurn;
  }
}


void __fastcall BattleServantData__SetTransformSaveData(
        BattleServantData_o *this,
        BattleServantData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( save )
  {
    this->fields.shiftNpcId = save->fields.shiftNpcId;
    this->fields.beforeUserSvtId = save->fields.beforeUserSvtId;
    this->fields.transformIndex = save->fields.transformIndex;
    this->fields.transformLimitCount = save->fields.transformLimitCount;
  }
}


void __fastcall BattleServantData__UpdateAfterShowBuff(
        BattleServantData_o *this,
        BattleActionData_BuffData_o *actBuff,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  BattleBuffData_o *BuffData; // x0

  if ( !actBuff )
    goto LABEL_6;
  if ( BattleActionData_BuffData__IsUpdateBuffType(actBuff, 1, 0LL) )
  {
    BuffData = BattleServantData__get_BuffData(this, v4);
    if ( BuffData )
    {
      BattleBuffData__UpdateSkillRelationBuff(BuffData, 0LL);
      return;
    }
LABEL_6:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__UpdateClassBoardSkillBuff(
        BattleServantData_o *this,
        BattleUserServantData_o *afterUserSvtData,
        BattleData_o *data,
        bool fromLoad,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  struct System_Int32_array *classBoardSquareIds; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct AddSkillData_array *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  struct AddSkillData_array **v38; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  int32_t BattleSvtId; // w0
  WarEntity_o *Entity; // x0
  const MethodInfo *v42; // x1
  int32_t npcSvtClassId; // w19
  int32_t classId; // w20
  struct ServantEntity_o *svtdata; // x8
  BattleBuffData_o *BuffData; // x0
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x0
  int32_t klass_high; // w25
  __int64 v49; // x1
  __int64 v50; // x2
  const MethodInfo *v51; // x3
  __int64 v52; // x4
  BattleServantConfConponent_c *klass; // x28
  unsigned __int64 v54; // x22
  __int64 v55; // x24
  __int64 v56; // x0
  __int64 v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v65; // x25
  BattleServantData_o *v66; // x20
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v71; // x26
  System_Collections_Generic_List_BattleSkillInfoData__o *v72; // x24
  const MethodInfo *v73; // x1
  int v74; // w19
  BattleBuffData_o *v75; // x0
  const MethodInfo *v76; // x3
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct AddSkillData_array **p_classBoardAddCommandSpells; // [xsp+10h] [xbp-B0h]
  BattleServantConfConponent_o *p_classBoardAddPassiveSkills; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+28h] [xbp-98h] BYREF
  int v87[2]; // [xsp+40h] [xbp-80h]
  int v88; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v89; // [xsp+50h] [xbp-70h] BYREF
  int32_t skillIndex; // [xsp+6Ch] [xbp-54h] BYREF

  if ( (byte_40F8AEC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, afterUserSvtData);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__, v18);
    sub_B16FFC(&Method_System_Predicate_BattleSkillInfoData___ctor__, v19);
    sub_B16FFC(&System_Predicate_BattleSkillInfoData__TypeInfo, v20);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass707_0__UpdateClassBoardSkillBuff_b__0__, v21);
    sub_B16FFC(&BattleServantData___c__DisplayClass707_0_TypeInfo, v22);
    byte_40F8AEC = 1;
  }
  skillIndex = 0;
  memset(&v89, 0, sizeof(v89));
  v88 = 0;
  if ( !afterUserSvtData )
    goto LABEL_46;
  classBoardSquareIds = afterUserSvtData->fields.classBoardSquareIds;
  this->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._classBoardSquareIds_k__BackingField,
    (System_Int32_array **)classBoardSquareIds,
    (System_String_array **)data,
    (System_String_array **)fromLoad,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !fromLoad )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
    BattleSvtId = BattleUserServantData__getBattleSvtId(afterUserSvtData, 0LL);
    if ( Master_WarQuestSelectionMaster )
    {
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 Master_WarQuestSelectionMaster,
                 BattleSvtId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      npcSvtClassId = afterUserSvtData->fields.npcSvtClassId;
      if ( !npcSvtClassId )
      {
        if ( !Entity )
          goto LABEL_46;
        npcSvtClassId = Entity->fields.startType;
      }
      classId = this->fields.npcSvtClassId;
      if ( !classId )
      {
        svtdata = this->fields.svtdata;
        if ( !svtdata )
          goto LABEL_46;
        classId = svtdata->fields.classId;
      }
      BuffData = BattleServantData__get_BuffData(this, v42);
      if ( data )
      {
        if ( BuffData )
        {
          BattleBuffData__RemoveClassBoardSkillBuff(
            BuffData,
            this->fields.classBoardAddPassiveSkills,
            this->fields.classBoardAddCommandSpells,
            classId != npcSvtClassId,
            data->fields.logic,
            0LL);
          skillIndex = -1;
          skillInfoList = this->fields.skillInfoList;
          if ( skillInfoList )
          {
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              &v86,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)skillInfoList,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
            klass_high = -1;
            v89 = v86;
            p_classBoardAddCommandSpells = &this->fields.classBoardAddCommandSpells;
            while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v89,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
            {
              if ( !v89.fields.current )
              {
                skillIndex = klass_high;
                sub_B170D4();
              }
              if ( LODWORD(v89.fields.current[1].klass) == 10 && klass_high < SHIDWORD(v89.fields.current[1].klass) )
                klass_high = HIDWORD(v89.fields.current[1].klass);
            }
            skillIndex = klass_high;
            v87[0] = 203;
            v88 = 1;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v89,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
            v88 = 0;
            skillIndex = klass_high + 1;
            p_classBoardAddPassiveSkills = (BattleServantConfConponent_o *)&this->fields.classBoardAddPassiveSkills;
            if ( BasicHelper__IsNullOrEmpty(
                   (System_Collections_ICollection_o *)this->fields.classBoardAddPassiveSkills,
                   0LL) )
            {
              goto LABEL_33;
            }
            klass = p_classBoardAddPassiveSkills->klass;
            if ( !p_classBoardAddPassiveSkills->klass )
              goto LABEL_46;
            if ( SLODWORD(klass->_1.namespaze) < 1 )
            {
LABEL_33:
              v72 = BattleServantData__AddClassBoardSkillInfo(this, afterUserSvtData, &skillIndex, v51);
              if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v72, 0LL) )
              {
                if ( !v72 )
                  goto LABEL_46;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  &v86,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v72,
                  (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
                v89 = v86;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v89,
                          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
                {
                  if ( v89.fields.current )
                    BattleData__ActPassiveBuff(data, (BattleSkillInfoData_o *)v89.fields.current, 0, 0, 0LL);
                }
                v87[0] = 370;
                v74 = ++v88;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v89,
                  (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
                if ( v74 && v87[v74 - 1] == 370 )
                  v88 = v74 - 1;
              }
              v75 = BattleServantData__get_BuffData(this, v73);
              if ( v75 )
              {
                BattleBuffData__updateAuraBuffList(v75, 0LL);
                BattleServantData__updateBuff(this, 1, 1, v76);
                classBoardAddPassiveSkills = afterUserSvtData->fields.classBoardAddPassiveSkills;
                this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
                sub_B16F98(
                  p_classBoardAddPassiveSkills,
                  (System_Int32_array **)classBoardAddPassiveSkills,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82,
                  v83);
                classBoardAddCommandSpells = afterUserSvtData->fields.classBoardAddCommandSpells;
                v38 = p_classBoardAddCommandSpells;
                goto LABEL_44;
              }
            }
            else
            {
              v54 = 0LL;
              while ( 1 )
              {
                v55 = sub_B170CC(BattleServantData___c__DisplayClass707_0_TypeInfo, v49, v50, v51, v52);
                BattleServantData___c__DisplayClass707_0___ctor((BattleServantData___c__DisplayClass707_0_o *)v55, 0LL);
                if ( v54 >= LODWORD(klass->_1.namespaze) )
                {
                  sub_B17100(v56, v57, v58);
                  sub_B170A0();
                }
                if ( !v55 )
                  break;
                v64 = (System_Int32_array **)*((_QWORD *)&klass->_1.byval_arg.data + v54);
                *(_QWORD *)(v55 + 16) = v64;
                sub_B16F98((BattleServantConfConponent_o *)(v55 + 16), v64, v58, v59, v60, v61, v62, v63);
                v65 = this->fields.skillInfoList;
                v66 = this;
                v71 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                                 System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                                 v67,
                                                                                 v68,
                                                                                 v69,
                                                                                 v70);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v71,
                  (Il2CppObject *)v55,
                  Method_BattleServantData___c__DisplayClass707_0__UpdateClassBoardSkillBuff_b__0__,
                  (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
                if ( !v65 )
                  break;
                System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                  (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v65,
                  (System_Predicate_T__o *)v71,
                  (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
                ++v54;
                this = v66;
                if ( (__int64)v54 >= SLODWORD(klass->_1.namespaze) )
                  goto LABEL_33;
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_B170D4();
  }
  v30 = afterUserSvtData->fields.classBoardAddPassiveSkills;
  this->fields.classBoardAddPassiveSkills = v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddPassiveSkills,
    (System_Int32_array **)v30,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  classBoardAddCommandSpells = afterUserSvtData->fields.classBoardAddCommandSpells;
  v38 = &this->fields.classBoardAddCommandSpells;
LABEL_44:
  this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_B16F98(
    (BattleServantConfConponent_o *)v38,
    (System_Int32_array **)classBoardAddCommandSpells,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


ServantAssetArgs_o *__fastcall BattleServantData__UpdateLoadedAssetArgs(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  ServantAssetArgs_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8A26 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetArgs_TypeInfo, method);
    byte_40F8A26 = 1;
  }
  v6 = (ServantAssetArgs_o *)sub_B170CC(ServantAssetArgs_TypeInfo, method, v2, v3, v4);
  ServantAssetArgs___ctor(v6, this, 0LL);
  this->fields._LoadedAssetArgs_k__BackingField = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._LoadedAssetArgs_k__BackingField,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  return this->fields._LoadedAssetArgs_k__BackingField;
}


void __fastcall BattleServantData__UpdateStatusUIByTransform(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A89 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_15007, v7);
    byte_40F8A89 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_15007,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__UpdateTreasureDevice(
        BattleServantData_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  TreasureDvcMaster_o *TdDataMasterBase; // x0
  struct TreasureDvcEntity_o *Entity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  TreasureDvcLvMaster_o *TdLvDataMasterBase; // x0
  struct TreasureDvcLvEntity_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x20
  __int64 v30; // x21
  int32_t v31; // w0
  struct ServantTreasureDvcEntity_o *EntityFromIDID; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  TreasureDvcLvEntity_o *TDvcLv; // x0
  int32_t gaugeCount; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_40F8A3E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, *(_QWORD *)&id);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_40F8A3E = 1;
  }
  this->fields.treasuredvcId = id;
  this->fields.treasuredvcLevel = lv;
  if ( id < 1 )
  {
    this->fields.TDvc = 0LL;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.TDvc,
      0LL,
      *(System_String_array ***)&lv,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    gaugeCount = 0;
  }
  else
  {
    TdDataMasterBase = BattleServantData__get_TdDataMasterBase(this, *(const MethodInfo **)&id);
    if ( !TdDataMasterBase )
      goto LABEL_13;
    Entity = (struct TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)TdDataMasterBase,
                                             this->fields.treasuredvcId,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    this->fields.TDvc = Entity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.TDvc,
      (System_Int32_array **)Entity,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    TdLvDataMasterBase = BattleServantData__get_TdLvDataMasterBase(this, v20);
    if ( !TdLvDataMasterBase )
      goto LABEL_13;
    v22 = TreasureDvcLvMaster__GetEntity(
            TdLvDataMasterBase,
            this->fields.treasuredvcId,
            this->fields.treasuredvcLevel,
            0LL);
    this->fields._TDvcLv = v22;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._TDvcLv,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v30 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v43.fields.currentCryptoKey = v30;
    *(_QWORD *)&v43.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v43, 0LL);
    EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(v31, this->fields.treasuredvcId, 0LL);
    this->fields._SvtTDvc = EntityFromIDID;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._SvtTDvc,
      (System_Int32_array **)EntityFromIDID,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    BattleServantData__checkServantTreasureDvcEntity(this, v39);
    TDvcLv = BattleServantData__get_TDvcLv(this, v40);
    if ( !TDvcLv )
LABEL_13:
      sub_B170D4();
    gaugeCount = TDvcLv->fields.gaugeCount;
  }
  this->fields.nplineCount = gaugeCount;
}


void __fastcall BattleServantData__addBuff(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool fieldflg,
        bool changeMaxHpflg,
        bool unFix,
        const MethodInfo *method)
{
  int32_t MaxHp; // w0
  int32_t v12; // w21
  const MethodInfo *v13; // x3

  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)buff);
  if ( !this->fields.buffData )
    sub_B170D4();
  v12 = MaxHp;
  BattleBuffData__addBuff(this->fields.buffData, buff, fieldflg, unFix, 0LL);
  if ( changeMaxHpflg )
    BattleServantData__checkUpdateUpdownHp(this, v12, 1, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__addDamage(
        BattleServantData_o *this,
        int32_t damage,
        bool noAccumulation,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int v12; // w22
  int v13; // w0
  int v14; // w0
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A85 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&damage);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_17209, v11);
    byte_40F8A85 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v12 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, bool, const MethodInfo *))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr,
          noAccumulation,
          method);
  v13 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)(v13 - damage),
    this->klass->vtable._11_get_reducedhp.methodPtr);
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr) > 0 )
  {
    if ( noAccumulation )
      goto LABEL_6;
    goto LABEL_5;
  }
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    0LL,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  if ( !noAccumulation )
  {
LABEL_5:
    v14 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
            this,
            this->klass->vtable._10_set_hp.methodPtr);
    this->fields.accumulationDamage = (this->fields.accumulationDamage + v12 - v14) & ~((this->fields.accumulationDamage
                                                                                       + v12
                                                                                       - v14) >> 31);
  }
LABEL_6:
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17209,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__addNp(
        BattleServantData_o *this,
        int32_t intp,
        bool flg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  bool isUseTreasure; // w0
  int lineMaxNp; // w8
  int32_t v14; // w10
  int32_t v15; // w9
  int v16; // w8
  bool v17; // cc
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A90 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&intp);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_22847, v11);
    byte_40F8A90 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  isUseTreasure = Follower__isUseTreasure(this->fields.followerType, 0LL);
  lineMaxNp = this->fields.lineMaxNp;
  if ( isUseTreasure )
    v14 = intp;
  else
    v14 = 0;
  v15 = v14 + this->fields.np;
  this->fields.np = v15;
  if ( v14 >= 1 && v15 < lineMaxNp && (double)lineMaxNp * 0.99 <= (double)v15 )
  {
    v15 = lineMaxNp;
    this->fields.np = lineMaxNp;
  }
  v16 = lineMaxNp * this->fields.nplineCount;
  v17 = v16 < v15;
  if ( v16 >= v15 )
    v16 = v15;
  if ( v17 || v16 <= 0 )
  {
    this->fields.np = v16 & ~(v16 >> 31);
    if ( !flg )
      return this->fields.np;
  }
  else if ( !flg )
  {
    return this->fields.np;
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v21.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22847,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return this->fields.np;
}


void __fastcall BattleServantData__addNpPer(BattleServantData_o *this, float per, const MethodInfo *method)
{
  int32_t v4; // w1
  const MethodInfo *v5; // x3

  v4 = BattleUtility__FloorToInt((float)this->fields.lineMaxNp * per, 0LL);
  BattleServantData__addNp(this, v4, 1, v5);
}


void __fastcall BattleServantData__addParamObject(
        BattleServantData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *paramobjelist; // x0
  struct System_Collections_Generic_List_GameObject__o *v7; // x0

  if ( (byte_40F8A73 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    byte_40F8A73 = 1;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_7;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         paramobjelist,
         (WarBoardManager_TaskList_o *)obj,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    return;
  }
  v7 = this->fields.paramobjelist;
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v7,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


// local variable allocation has failed, the output may be wrong!
BattleSkillInfoData_o *__fastcall BattleServantData__addSkillInfo(
        BattleServantData_o *this,
        int32_t type,
        int32_t index,
        int32_t skillId,
        int32_t skillLv,
        int64_t userCommandCodeId,
        int32_t commandAssistId,
        BattleSkillInfoData_o *beforeDeathSkillInfo,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x0
  Il2CppObject *current; // x27
  int v23; // w27
  BattleSkillInfoData_o *v24; // x21
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v25; // x0
  Il2CppObject *v26; // x27
  int v27; // w21
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v28; // x0
  BattleSkillInfoData_o *SkillData; // x0
  BattleSkillInfoData_o *v30; // x0
  const MethodInfo *v31; // x3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v32; // x0
  const MethodInfo *v34; // [xsp+0h] [xbp-C0h]
  int32_t v36; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-A0h] BYREF
  int v38[4]; // [xsp+38h] [xbp-88h] BYREF
  int v39; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_40F8A3F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__, v20);
    byte_40F8A3F = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v39 = 0;
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_35;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)skillInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v40 = v37;
  v36 = commandAssistId;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
  {
    current = v40.fields.current;
    if ( !v40.fields.current )
      sub_B170D4();
    if ( LODWORD(v40.fields.current[1].klass) == type
      && HIDWORD(v40.fields.current[1].klass) == index
      && ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v40.fields.current->klass->vtable[5].method)(
           v40.fields.current,
           v40.fields.current->klass->vtable[6].methodPtr) == skillId
      && HIDWORD(current[2].klass) == skillLv )
    {
      v23 = 236;
      goto LABEL_13;
    }
  }
  v23 = 92;
LABEL_13:
  v38[0] = v23;
  v39 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  if ( v23 == 92 )
  {
    v39 = 0;
    v25 = this->fields.skillInfoList;
    if ( !v25 )
      goto LABEL_35;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v25,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    v40 = v37;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v40,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
    {
      v26 = v40.fields.current;
      if ( !v40.fields.current )
        sub_B170D4();
      if ( LODWORD(v40.fields.current[1].klass) == type && HIDWORD(v40.fields.current[1].klass) == index )
        goto LABEL_23;
    }
    v26 = 0LL;
LABEL_23:
    *(_DWORD *)((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFFBLL) = 167;
    v27 = ++v39;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v40,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    if ( v27 && v38[v27 - 1] == 167 )
      v39 = v27 - 1;
    if ( v26 )
    {
      v28 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.skillInfoList;
      if ( !v28 )
        goto LABEL_35;
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        v28,
        (WarBoardManager_TaskList_o *)v26,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__);
    }
    SkillData = BattleSkillInfoData__MakeSkillData(type, 0LL);
    v30 = BattleServantData__SetSkillInfo(this, SkillData, type, index, skillId, skillLv, userCommandCodeId, v36, v34);
    if ( v30 )
    {
      v24 = v30;
      ((void (__fastcall *)(BattleSkillInfoData_o *, BattleServantData_o *, Il2CppMethodPointer))v30->klass->vtable._11_PreAddProcess.method)(
        v30,
        this,
        v30->klass->vtable._12_IsChangeable.methodPtr);
      BattleServantData__ChangeSkillRemainingTurn(this, v24, beforeDeathSkillInfo, v31);
      v32 = this->fields.skillInfoList;
      if ( v32 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v32,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
        return v24;
      }
    }
LABEL_35:
    sub_B170D4();
  }
  v24 = 0LL;
  v39 = 0;
  return v24;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__canUseSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  System_Boolean_array *SkillSealSelect; // x0
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v12; // x21

  if ( (byte_40F8AC1 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&index);
    byte_40F8AC1 = 1;
  }
  if ( index != -1 )
  {
    SkillSealSelect = BattleServantData__getSkillSealSelect(this, *(const MethodInfo **)&index);
    if ( !SkillSealSelect )
      goto LABEL_12;
    if ( SkillSealSelect->max_length <= index )
    {
      sub_B17100(SkillSealSelect, *(_QWORD *)&index, v6);
      sub_B170A0();
    }
    if ( SkillSealSelect->m_Items[index + 4] )
      return 0;
  }
  if ( !BattleServantData__isAction(this, *(const MethodInfo **)&index) )
    return 0;
  buffData = this->fields.buffData;
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v7,
                                                       v8,
                                                       v9,
                                                       v10);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_12:
    sub_B170D4();
  return !BattleBuffData__isTurnBuff(buffData, 40, v12, 0, 0LL);
}


void __fastcall BattleServantData__changeAppearanceId(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t tmpAppearanceId; // w8

  tmpAppearanceId = this->fields.tmpAppearanceId;
  this->fields.tmpAppearanceId = -1;
  this->fields.appearanceId = tmpAppearanceId;
}


void __fastcall BattleServantData__changeBaseUpdateServant(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  int32_t v13; // w0
  struct ServantEntity_o *Entity; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WebViewManager_o *v21; // x0
  ServantLimitMaster_o *v22; // x20
  const MethodInfo *v23; // x1
  int32_t SvtId; // w22
  int32_t v25; // w0
  struct ServantLimitEntity_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WebViewManager_o *v33; // x0
  WarQuestSelectionMaster_o *v34; // x0
  struct ServantEntity_o *svtdata; // x8
  ServantLimitAddMaster_o *v36; // x21
  __int64 v37; // x22
  __int64 v38; // x23
  int32_t v39; // w23
  const MethodInfo *v40; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v42; // x1
  int32_t v43; // w23
  const MethodInfo *v44; // x2
  int32_t v45; // w0
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x3
  int32_t v48; // w0
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v51; // w1
  ServantLimitMaster_o *v52; // x0
  struct ServantLimitEntity_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_40F8A3C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F8A3C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v60.fields.currentCryptoKey = v11;
  *(_QWORD *)&v60.fields.fakeValue = v10;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v60, 0LL);
  if ( !v12 )
    goto LABEL_25;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v12,
                                       v13,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtdata,
    (System_Int32_array **)Entity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v21 )
    goto LABEL_25;
  v22 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v21,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v23);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitcount, 0LL);
  if ( !v22 )
    goto LABEL_25;
  if ( !ServantLimitMaster__TryGetEntity(v22, &this->fields.svtlimitent, SvtId, v25, 0LL) )
  {
    v26 = ServantLimitMaster__GetEntity(v22, 100100, 0, 0LL);
    this->fields.svtlimitent = v26;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.svtlimitent,
      (System_Int32_array **)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v33 )
    goto LABEL_25;
  v34 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v33,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_25;
  v36 = (ServantLimitAddMaster_o *)v34;
  v38 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v37 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v38;
  *(_QWORD *)&v61.fields.fakeValue = v37;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v40);
  if ( !v36 )
    goto LABEL_25;
  ServantLimitAddMaster__TryGetEntity(v36, &this->fields.svtlimitaddent, v39, DispLimitCount, 0LL);
  v43 = BattleServantData__getSvtId(this, v42);
  v45 = BattleServantData__getDispLimitCount(this, 1, v44);
  if ( !ServantLimitMaster__TryGetEntity(v22, &this->fields.svtlimitDispent, v43, v45, 0LL) )
  {
    if ( !this->fields.svtlimitaddent )
    {
      v51 = 100100;
      v52 = v22;
      battleCharaLimitCount = 0;
      goto LABEL_23;
    }
    v48 = BattleServantData__getSvtId(this, v46);
    svtlimitaddent = this->fields.svtlimitaddent;
    if ( svtlimitaddent )
    {
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v51 = v48;
      v52 = v22;
LABEL_23:
      v53 = ServantLimitMaster__GetEntity(v52, v51, battleCharaLimitCount, 0LL);
      this->fields.svtlimitDispent = v53;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.svtlimitDispent,
        (System_Int32_array **)v53,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      goto LABEL_24;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_24:
  BattleServantData__UpdateTreasureDevice(this, this->fields.treasuredvcId, this->fields.treasuredvcLevel, v47);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__changeNp(
        BattleServantData_o *this,
        int32_t intp,
        bool flg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w8
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A91 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&intp);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_17214, v11);
    byte_40F8A91 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v12 = this->fields.lineMaxNp * this->fields.nplineCount;
  if ( v12 >= intp )
    v12 = intp;
  this->fields.np = v12 & ~(v12 >> 31);
  if ( flg )
  {
    paramobjelist = this->fields.paramobjelist;
    if ( !paramobjelist )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !current )
          sub_B170D4();
        UnityEngine_GameObject__SendMessage_40692064(
          (UnityEngine_GameObject_o *)current,
          (System_String_o *)StringLiteral_17214,
          (Il2CppObject *)this,
          1,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall BattleServantData__changeTransformServant(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t transformSvtId; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v4; // kr00_16

  if ( (byte_40F8A3B & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8A3B = 1;
  }
  transformSvtId = this->fields.transformSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(transformSvtId, 0LL);
  this->fields.svtId = v4;
  BattleServantData__changeBaseUpdateServant(this, *(const MethodInfo **)&v4.fields.fakeValue);
}


void __fastcall BattleServantData__changeUpdateStatus(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F8A88 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17215, method);
    byte_40F8A88 = 1;
  }
  BattleServantData__sendParamMessage(this, (System_String_o *)StringLiteral_17215, v2);
}


bool __fastcall BattleServantData__checkAllIndividualities(
        BattleServantData_o *this,
        System_Int32_array *indv,
        const MethodInfo *method)
{
  System_Int32_array *Individualities; // x0

  Individualities = BattleServantData__getIndividualities(this, 0LL, method);
  return Individuality__CheckAllIndividualities(Individualities, indv, 0LL);
}


bool __fastcall BattleServantData__checkAvoidInstantDeath(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22

  if ( (byte_40F8AAF & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_40F8AAF = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__checkActBuff_31056148(buffData, 47, v8, 0LL);
}


bool __fastcall BattleServantData__checkAvoidance(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        bool isSvtAction,
        System_Int32_array *notSvtIndivArray,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x0

  buffData = this->fields.buffData;
  v7 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         method);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__checkActBuff_31056148(buffData, 18, v7, 0LL);
}


bool __fastcall BattleServantData__checkBreakAvoidance(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8AB8 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AB8 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__checkActBuff_31056148(buffData, 17, v9, 0LL);
}


bool __fastcall BattleServantData__checkBuffAvoid(
        BattleServantData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattleBuffData_o *buffData; // x19
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  System_Int32_array *Individualities_22775404; // x21
  System_Int32_array *v13; // x0

  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, v4);
  Individualities_22775404 = BattleServantData__getIndividualities_22775404(this, BuffIndividualities, v10);
  if ( !opSvt )
  {
    if ( buffData )
      return BattleBuffData__checkActBuff(buffData, 38, Individualities_22775404, buffIndiv, 0LL);
LABEL_6:
    sub_B170D4();
  }
  v13 = BattleServantData__getIndividualities_22775404(opSvt, buffIndiv, v11);
  if ( !buffData )
    goto LABEL_6;
  buffIndiv = v13;
  return BattleBuffData__checkActBuff(buffData, 38, Individualities_22775404, buffIndiv, 0LL);
}


bool __fastcall BattleServantData__checkBuffId(
        BattleServantData_o *this,
        System_Int32_array *buffIdlist,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__checkBuffId(buffData, buffIdlist, 0LL);
}


bool __fastcall BattleServantData__checkBuffIndividualities(
        BattleServantData_o *this,
        System_Int32_array *indv,
        bool isActiveOnly,
        bool IsIncludeIgnoreIndividuality,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__checkBuffIndividualities(
           buffData,
           indv,
           isActiveOnly,
           IsIncludeIgnoreIndividuality,
           isIgnoreIndivUnreleaseable,
           0LL);
}


bool __fastcall BattleServantData__checkDeadTurn(BattleServantData_o *this, int32_t turn, const MethodInfo *method)
{
  return this->fields.deadTurn == turn;
}


bool __fastcall BattleServantData__checkEnemy(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.isEnemy;
}


bool __fastcall BattleServantData__checkEntryIndex(
        BattleServantData_o *this,
        int32_t entryIndex,
        const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B170D4();
  return BattleDeckServantData__checkEntryIndex(deckSvt, entryIndex, 0LL);
}


void __fastcall BattleServantData__checkFieldBuff(
        BattleServantData_o *this,
        System_Int32_array *fieldList,
        FieldAliveServantData_o *aliveSvtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  int32_t MaxHp; // w0
  int32_t v10; // w23
  const MethodInfo *v11; // x3
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  __int64 v16; // x8
  unsigned __int64 v17; // x21
  BattleBuffData_BuffData_array *offList; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_array *onList; // [xsp+18h] [xbp-28h] BYREF

  offList = 0LL;
  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)fieldList);
  if ( !this->fields.buffData )
    goto LABEL_12;
  v10 = MaxHp;
  BattleBuffData__checkFieldBuff(this->fields.buffData, fieldList, aliveSvtData, &onList, &offList, logic, 0LL);
  v12 = BattleServantData__checkUpdateUpdownHp(this, v10, 1, v11);
  if ( !v12 )
    return;
  if ( !fieldList )
LABEL_12:
    sub_B170D4();
  v16 = *(_QWORD *)&fieldList->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v16 )
      {
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      if ( this->fields.uniqueId == fieldList->m_Items[v17 + 1] )
        v12 = BattleServantData__healHp(this, 0, 0, v15);
      LODWORD(v16) = fieldList->max_length;
      ++v17;
    }
    while ( (__int64)v17 < (int)v16 );
  }
}


bool __fastcall BattleServantData__checkID(BattleServantData_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.uniqueId == id;
}


bool __fastcall BattleServantData__checkIndividualities(
        BattleServantData_o *this,
        System_Int32_array *indv,
        const MethodInfo *method)
{
  System_Int32_array *Individualities; // x0

  Individualities = BattleServantData__getIndividualities(this, 0LL, method);
  return Individuality__CheckIndividualities(Individualities, indv, 0LL);
}


bool __fastcall BattleServantData__checkInvincible(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        bool isSvtAction,
        System_Int32_array *notSvtIndivArray,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x0

  buffData = this->fields.buffData;
  v7 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         method);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__checkActBuff_31056148(buffData, 16, v7, 0LL);
}


bool __fastcall BattleServantData__checkOverKill(BattleServantData_o *this, int32_t targetId, const MethodInfo *method)
{
  return this->fields.overkillTargetId == targetId;
}


bool __fastcall BattleServantData__checkPerHP(
        BattleServantData_o *this,
        int32_t val,
        bool flg,
        const MethodInfo *method)
{
  int v7; // w22
  const MethodInfo *v8; // x1
  int v9; // w8
  bool v10; // cc
  bool v11; // w8
  bool v12; // w9

  v7 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, bool, const MethodInfo *))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr,
         flg,
         method);
  v9 = 100 * v7 / BattleServantData__getMaxHp(this, v8);
  v10 = v9 < val;
  v11 = v9 <= val;
  v12 = !v10;
  if ( flg )
    return v12;
  else
    return v11;
}


bool __fastcall BattleServantData__checkPierceDefence(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8AB9 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AB9 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__checkActBuff_31056148(buffData, 69, v9, 0LL);
}


bool __fastcall BattleServantData__checkPierceInvincible(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8AB7 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AB7 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__checkActBuff_31056148(buffData, 15, v9, 0LL);
}


bool __fastcall BattleServantData__checkPlayer(BattleServantData_o *this, const MethodInfo *method)
{
  return !this->fields.isEnemy;
}


bool __fastcall BattleServantData__checkReadySpecail(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.reservationspecial;
}


bool __fastcall BattleServantData__checkRegainNPUsedNoble(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21
  int32_t ActValue_31051136; // w0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  int CorrectedValueFuncGainNp; // w20

  if ( (byte_40F8AC6 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8AC6 = 1;
  }
  if ( this->fields.isEnemy )
    return 0;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  ActValue_31051136 = BattleBuffData__getActValue_31051136(buffData, 50, v8, 0LL);
  CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(this, ActValue_31051136, v10);
  if ( CorrectedValueFuncGainNp >= 1 && !BattleServantData__isGainNp(this, 1, v11) )
    CorrectedValueFuncGainNp = 0;
  BattleServantData__addNp(this, CorrectedValueFuncGainNp, 0, v12);
  return 1;
}


bool __fastcall BattleServantData__checkScriptValue(
        BattleServantData_o *this,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__checkScript(deckSvt, key, value, 0LL);
  return (char)deckSvt;
}


void __fastcall BattleServantData__checkServantTreasureDvcEntity(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantTreasureDvcMaster_o *v9; // x20
  int32_t v10; // w0
  BattleServantConfConponent_o *p_SvtTDvc; // x19
  System_Int32_array **EntityFromSvtIdOnly; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_40F8AE8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F8AE8 = 1;
  }
  if ( !this->fields._SvtTDvc )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v9 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v19.fields.currentCryptoKey = v8;
    *(_QWORD *)&v19.fields.fakeValue = v7;
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v19, 0LL);
    if ( !v9 )
LABEL_10:
      sub_B170D4();
    p_SvtTDvc = (BattleServantConfConponent_o *)&this->fields._SvtTDvc;
    EntityFromSvtIdOnly = (System_Int32_array **)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v9, v10, 0, 0LL);
    p_SvtTDvc->klass = (BattleServantConfConponent_c *)EntityFromSvtIdOnly;
    sub_B16F98(p_SvtTDvc, EntityFromSvtIdOnly, v13, v14, v15, v16, v17, v18);
  }
}


bool __fastcall BattleServantData__checkSpecialInvincible(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        bool *isSpecialInvincible,
        bool isSvtAction,
        System_Int32_array *notSvtIndivArray,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v9; // x0
  bool result; // w0

  *isSpecialInvincible = 0;
  buffData = this->fields.buffData;
  v9 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         (const MethodInfo *)notSvtIndivArray);
  if ( !buffData )
    sub_B170D4();
  if ( !BattleBuffData__checkActBuff_31056148(buffData, 95, v9, 0LL) )
    return 0;
  result = 1;
  *isSpecialInvincible = 1;
  return result;
}


bool __fastcall BattleServantData__checkUpdateResumptionHpFromLossMaxHp(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  int32_t MaxHp; // w0
  int32_t v4; // w20
  BattleBuffData_o *buffData; // x0
  int32_t ResumptionHpFromLossMaxHp; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w0
  int32_t v10; // w20
  int v11; // w0
  int v12; // w0

  if ( (byte_40F8AC8 & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, method);
    byte_40F8AC8 = 1;
  }
  MaxHp = BattleServantData__getMaxHp(this, method);
  if ( !this->fields.buffData )
    goto LABEL_11;
  v4 = MaxHp;
  if ( BattleBuffData__getResumptionHpFromLossMaxHp(this->fields.buffData, 0, 0LL) < 1 )
    return 0;
  buffData = this->fields.buffData;
  if ( !buffData )
LABEL_11:
    sub_B170D4();
  ResumptionHpFromLossMaxHp = BattleBuffData__getResumptionHpFromLossMaxHp(buffData, 1, 0LL);
  v7 = this->fields.maxhp;
  v8 = ResumptionHpFromLossMaxHp;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = System_Math__Max_44463768(0, v4 - v7, 0LL);
  v10 = System_Math__Min_44418752(v9, v8, 0LL);
  v11 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)(v11 + v10),
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v12 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
          this,
          this->klass->vtable._14_set_resultHp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    (unsigned int)(v12 + v10),
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  return v10 > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__checkUpdateUpdownHp(
        BattleServantData_o *this,
        int32_t before_maxhp,
        bool isHeal,
        const MethodInfo *method)
{
  int32_t MaxHp; // w0
  const MethodInfo *v8; // x2
  unsigned int v9; // w20
  int v10; // w23
  int v11; // w22
  int v12; // w0
  BattleServantData_c *klass; // x8
  BattleServantData_o *v14; // x0
  __int64 v15; // x1
  int v16; // w0
  int v17; // w0

  MaxHp = BattleServantData__getMaxHp(this, *(const MethodInfo **)&before_maxhp);
  v9 = MaxHp;
  v10 = MaxHp - before_maxhp;
  if ( MaxHp >= before_maxhp )
  {
    if ( MaxHp > before_maxhp && isHeal && BattleServantData__isAlive(this, 0, v8) )
    {
      v16 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
              this,
              this->klass->vtable._10_set_hp.methodPtr);
      ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
        this,
        (unsigned int)(v16 + v10),
        this->klass->vtable._11_get_reducedhp.methodPtr);
      v17 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
              this,
              this->klass->vtable._14_set_resultHp.methodPtr);
      klass = this->klass;
      v15 = (unsigned int)(v17 + v10);
      v14 = this;
      goto LABEL_11;
    }
  }
  else
  {
    if ( MaxHp < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                   this,
                   this->klass->vtable._10_set_hp.methodPtr) )
    {
      v11 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
              this,
              this->klass->vtable._10_set_hp.methodPtr);
      ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
        this,
        v9,
        this->klass->vtable._11_get_reducedhp.methodPtr);
      v12 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._11_get_reducedhp.method)(
              this,
              this->klass->vtable._12_set_reducedhp.methodPtr);
      ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
        this,
        v9 - v11 + v12,
        this->klass->vtable._13_get_resultHp.methodPtr);
      if ( (((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._11_get_reducedhp.method)(
              this,
              this->klass->vtable._12_set_reducedhp.methodPtr) & 0x80000000) != 0 )
        ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
          this,
          0LL,
          this->klass->vtable._13_get_resultHp.methodPtr);
    }
    if ( (int)v9 < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                     this,
                     this->klass->vtable._14_set_resultHp.methodPtr) )
    {
      klass = this->klass;
      v14 = this;
      v15 = v9;
LABEL_11:
      ((void (__fastcall *)(BattleServantData_o *, __int64, Il2CppMethodPointer))klass->vtable._14_set_resultHp.method)(
        v14,
        v15,
        klass->vtable._15_get_IsAiNpc.methodPtr);
    }
  }
  return v9 != before_maxhp;
}


bool __fastcall BattleServantData__checkUseTDvc(
        BattleServantData_o *this,
        BattleData_o *battleData,
        bool flg,
        const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0
  const MethodInfo *v8; // x2
  bool isNobleAction_22765460; // w8
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)battleData);
  if ( TreasureDevice )
  {
    if ( !flg )
      goto LABEL_13;
    if ( !TreasureDeviceConditionUtil__IsSatisfyEachCondition(this, battleData, 0LL) )
      goto LABEL_9;
    invokeAct = 0;
    isNobleAction_22765460 = BattleServantData__isNobleAction_22765460(this, &invokeAct, v8);
    LOBYTE(TreasureDevice) = 0;
    if ( isNobleAction_22765460 )
    {
LABEL_13:
      if ( this->fields.isEnemy )
      {
        LOBYTE(TreasureDevice) = this->fields.nexttpturn < 1;
        return (char)TreasureDevice;
      }
      if ( Follower__isUseTreasure(this->fields.followerType, 0LL) )
      {
        LOBYTE(TreasureDevice) = this->fields.lineMaxNp <= this->fields.np;
        return (char)TreasureDevice;
      }
LABEL_9:
      LOBYTE(TreasureDevice) = 0;
    }
  }
  return (char)TreasureDevice;
}


System_Double_array *__fastcall BattleServantData__convertDouble(
        BattleServantData_o *this,
        System_Int32_array *param,
        const MethodInfo *method)
{
  System_Double_array *result; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned __int64 max_length; // x8
  unsigned __int64 v8; // x9

  if ( (byte_40F8AE1 & 1) == 0 )
  {
    sub_B16FFC(&double___TypeInfo, param);
    byte_40F8AE1 = 1;
  }
  if ( !param || (result = (System_Double_array *)sub_B17014(double___TypeInfo, param->max_length, method)) == 0LL )
    sub_B170D4();
  max_length = result->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= param->max_length || v8 >= max_length )
      {
        sub_B17100(result, v5, v6);
        sub_B170A0();
      }
      result->m_Items[v8] = (double)param->m_Items[v8 + 1];
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
  }
  return result;
}


System_Int64_array *__fastcall BattleServantData__convertLong(
        BattleServantData_o *this,
        System_Int32_array *param,
        const MethodInfo *method)
{
  System_Int64_array *result; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned __int64 max_length; // x8
  unsigned __int64 v8; // x9

  if ( (byte_40F8AE0 & 1) == 0 )
  {
    sub_B16FFC(&long___TypeInfo, param);
    byte_40F8AE0 = 1;
  }
  if ( !param || (result = (System_Int64_array *)sub_B17014(long___TypeInfo, param->max_length, method)) == 0LL )
    sub_B170D4();
  max_length = result->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= param->max_length || v8 >= max_length )
      {
        sub_B17100(result, v5, v6);
        sub_B170A0();
      }
      result->m_Items[v8] = param->m_Items[v8 + 1];
      ++v8;
    }
    while ( (__int64)v8 < (int)max_length );
  }
  return result;
}


void __fastcall BattleServantData__delParamObject(
        BattleServantData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *paramobjelist; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v7; // x0

  if ( (byte_40F8A75 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Contains__, obj);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Remove__, v5);
    byte_40F8A75 = 1;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_8;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         paramobjelist,
         (WarBoardManager_TaskList_o *)obj,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    v7 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
    if ( v7 )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        v7,
        (WarBoardManager_TaskList_o *)obj,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_GameObject__Remove__);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
}


void __fastcall BattleServantData__fixUpdateStatus(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A8A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_18680, v7);
    byte_40F8A8A = 1;
  }
  memset(&v10, 0, sizeof(v10));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_18680,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__forceDead(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_c *klass; // x8
  struct System_Int32_array *shiftDeckList; // x8

  klass = this->klass;
  this->fields.deadtype = 0;
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._10_set_hp.method)(
    this,
    0LL,
    klass->vtable._11_get_reducedhp.methodPtr);
  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B170D4();
  this->fields.shiftDeckIndex = *(_QWORD *)&shiftDeckList->max_length;
}


int32_t __fastcall BattleServantData__getAccumulationDamage(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( BattleServantData__getMaxHp(this, method) >= this->fields.accumulationDamage )
    return this->fields.accumulationDamage;
  else
    return BattleServantData__getMaxHp(this, v3);
}


int32_t __fastcall BattleServantData__getActiveBuffNum(
        BattleServantData_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActiveBuffNum(buffData, ids, 0LL);
}


int32_t __fastcall BattleServantData__getActiveIndividualitiesNum(
        BattleServantData_o *this,
        System_Int32_array *indv,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActiveIndividualitiesNum(buffData, indv, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleServantData__getActiveSkillInfos(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  BattleServantData___c_c *v12; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__384_0; // x20
  Il2CppObject *v15; // x21
  struct BattleServantData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_T__o *All; // x0

  if ( (byte_40F8A5C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, v6);
    sub_B16FFC(&Method_System_Predicate_BattleSkillInfoData___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleSkillInfoData__TypeInfo, v8);
    sub_B16FFC(&Method_BattleServantData___c__getActiveSkillInfos_b__384_0__, v9);
    sub_B16FFC(&BattleServantData___c_TypeInfo, v10);
    byte_40F8A5C = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  v12 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v12 = BattleServantData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__384_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__384_0;
  if ( !_9__384_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__384_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__384_0,
      v15,
      Method_BattleServantData___c__getActiveSkillInfos_b__384_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    v16 = BattleServantData___c_TypeInfo->static_fields;
    v16->__9__384_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__384_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__384_0,
      (System_Int32_array **)_9__384_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)skillInfoList,
                (System_Predicate_T__o *)_9__384_0,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_B170D4();
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


float __fastcall BattleServantData__getActorScale(BattleServantData_o *this, const MethodInfo *method)
{
  return (float)this->fields.actorScale / 100.0;
}


int32_t __fastcall BattleServantData__getActorSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_40F8A49 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8A49 = 1;
  }
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B170D4();
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Double_array *__fastcall BattleServantData__getAiParam(
        BattleServantData_o *this,
        BattleData_o *bData,
        int32_t param,
        int32_t turn,
        int32_t actCnt,
        System_Int64_array *checkParams,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 FieldSpace; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int v25; // w8
  System_Double_array *v26; // x19
  BattleRaidInfo_o *RaidInfo; // x20
  __int64 v28; // x2
  __int64 maxHp; // x8
  double v30; // d0
  double v31; // d1
  BattleBuffData_o *v32; // x19
  bool v33; // w0
  BattleServantData_o *BuffIDList; // x0
  const MethodInfo *v35; // x2
  struct BattleBuffData_o *v36; // x19
  bool v37; // w0
  bool v38; // w3
  bool v39; // w1
  BattleBuffData_o *v40; // x0
  BattleServantData___c_c *v41; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Converter_long__int__o *_9__646_0; // x22
  Il2CppObject *v44; // x23
  struct BattleServantData___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array *v52; // x0
  System_Int32_array *v53; // x21
  int32_t SameIndivualityBuffSum; // w22
  const MethodInfo *v55; // x2
  int32_t np; // w8
  BattleBuffData_o *buffData; // x19
  bool IsIncludeUnsubState; // w0
  System_Double_array *v59; // x0
  struct BattleBuffData_o *v60; // x19
  bool v61; // w0
  __int64 v62; // x8
  double v63; // d8
  struct System_Int32_array *shiftDeckList; // x8
  int v65; // w21
  const MethodInfo *v66; // x1
  double totalDamage; // d0
  BattleBuffData_o *v68; // x0
  BattleRaidInfo_o *v69; // x20
  __int64 v70; // x2
  int32_t targetIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F8ADF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_ConvertAll_long__int___, bData);
    sub_B16FFC(&Method_System_Converter_long__int___ctor__, v15);
    sub_B16FFC(&System_Converter_long__int__TypeInfo, v16);
    sub_B16FFC(&double___TypeInfo, v17);
    sub_B16FFC(&Method_BattleServantData___c__getAiParam_b__646_0__, v18);
    sub_B16FFC(&BattleServantData___c_TypeInfo, v19);
    byte_40F8ADF = 1;
  }
  targetIndex = 0;
  FieldSpace = sub_B17014(double___TypeInfo, 1LL, *(_QWORD *)&param);
  v25 = param - 2;
  v26 = (System_Double_array *)FieldSpace;
  switch ( v25 )
  {
    case 0:
      targetIndex = -1;
      if ( !bData )
        goto LABEL_104;
      FieldSpace = BattleData__getFieldSpace(bData, this->fields.uniqueId, &targetIndex, 0, 0LL);
      if ( !v26 )
        goto LABEL_104;
      goto LABEL_78;
    case 1:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v26 )
        goto LABEL_104;
      if ( !v26->max_length )
        goto LABEL_105;
      np = *(_DWORD *)(FieldSpace + 44);
      goto LABEL_101;
    case 2:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v26 )
        goto LABEL_104;
      if ( !v26->max_length )
        goto LABEL_105;
      np = *(_DWORD *)(FieldSpace + 40);
      goto LABEL_101;
    case 3:
      v65 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
              this,
              this->klass->vtable._10_set_hp.methodPtr);
      FieldSpace = BattleServantData__getMaxHp(this, v66);
      if ( !v26 )
        goto LABEL_104;
      if ( !v26->max_length )
        goto LABEL_105;
      v30 = (double)v65 * 1000.0;
      v31 = (double)(int)FieldSpace;
      goto LABEL_73;
    case 4:
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      np = this->fields.np;
      goto LABEL_101;
    case 5:
      FieldSpace = (__int64)BattleServantData__get_TreasureDevice(this, v21);
      if ( !FieldSpace )
        goto LABEL_41;
      if ( !v26 )
        goto LABEL_104;
      if ( !v26->max_length )
        goto LABEL_105;
      np = this->fields.nexttpturn;
      goto LABEL_101;
    case 6:
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      totalDamage = (double)actCnt;
      goto LABEL_102;
    case 7:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._21_getThisTurnActCount.method)(
                     this,
                     this->klass->vtable._22_getAiParam.methodPtr);
      if ( !v26 )
        goto LABEL_104;
LABEL_78:
      if ( !v26->max_length )
        goto LABEL_105;
      totalDamage = (double)(int)FieldSpace;
      goto LABEL_102;
    case 8:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v26 )
        goto LABEL_104;
      if ( !v26->max_length )
        goto LABEL_105;
      np = *(_DWORD *)(FieldSpace + 32);
      goto LABEL_101;
    case 9:
      FieldSpace = sub_B17014(double___TypeInfo, 2LL, v22);
      if ( !FieldSpace )
        goto LABEL_104;
      v26 = (System_Double_array *)FieldSpace;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      *(double *)(FieldSpace + 32) = (double)turn;
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._21_getThisTurnActCount.method)(
                     this,
                     this->klass->vtable._22_getAiParam.methodPtr);
      if ( v26->max_length <= 1 )
        goto LABEL_105;
      v26->m_Items[1] = (double)(int)FieldSpace;
      return v26;
    case 10:
      if ( !aiBaseEntity )
        goto LABEL_104;
      buffData = this->fields.buffData;
      IsIncludeUnsubState = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !buffData )
        goto LABEL_104;
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffIDList(buffData, IsIncludeUnsubState, 0LL);
      goto LABEL_47;
    case 11:
      BuffIDList = (BattleServantData_o *)BattleServantData__getIndividualities(this, 0LL, v22);
      goto LABEL_47;
    case 12:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v60 = this->fields.buffData;
      v61 = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v60 )
        goto LABEL_104;
      v38 = !v61;
      v40 = v60;
      v39 = 0;
      goto LABEL_46;
    case 13:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v36 = this->fields.buffData;
      v37 = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v36 )
        goto LABEL_104;
      v38 = !v37;
      v39 = 1;
      v40 = v36;
LABEL_46:
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffIndividualities(v40, v39, 0, v38, 1, 0LL);
      goto LABEL_47;
    case 14:
    case 15:
      if ( !bData )
        goto LABEL_104;
      RaidInfo = BattleData__getRaidInfo(bData, this->fields.raidId, 0LL);
      FieldSpace = sub_B17014(double___TypeInfo, 1LL, v28);
      if ( !RaidInfo )
        goto LABEL_104;
      v26 = (System_Double_array *)FieldSpace;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      maxHp = RaidInfo->fields.maxHp;
      v30 = (double)(maxHp - RaidInfo->fields.totalDamage) * 1000.0;
      v31 = (double)maxHp;
LABEL_73:
      totalDamage = v30 / v31;
      goto LABEL_102;
    case 16:
      if ( !bData )
        goto LABEL_104;
      v69 = BattleData__getRaidInfo(bData, this->fields.raidId, 0LL);
      FieldSpace = sub_B17014(double___TypeInfo, 1LL, v70);
      if ( !v69 )
        goto LABEL_104;
      v26 = (System_Double_array *)FieldSpace;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      totalDamage = (double)v69->fields.totalDamage;
      goto LABEL_102;
    case 20:
      v68 = this->fields.buffData;
      if ( !v68 )
        goto LABEL_104;
      FieldSpace = BattleBuffData__getMaxBuffCount(v68, checkParams, 0, 0LL);
      if ( !v26 )
        goto LABEL_104;
      if ( !v26->max_length )
        goto LABEL_105;
      totalDamage = (double)FieldSpace;
      goto LABEL_102;
    case 21:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v32 = this->fields.buffData;
      v33 = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v32 )
        goto LABEL_104;
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffActiveIDList(v32, v33, 0LL);
LABEL_47:
      v59 = BattleServantData__convertDouble(BuffIDList, (System_Int32_array *)BuffIDList, v35);
      goto LABEL_48;
    case 23:
      if ( !bData )
        goto LABEL_104;
      FieldSpace = BattleData__get_IsInTactical(bData, 0LL);
      v62 = 528LL;
      if ( (FieldSpace & 1) != 0 )
        v62 = 532LL;
      if ( !v26 )
        goto LABEL_104;
      if ( !v26->max_length )
        goto LABEL_105;
      np = *(_DWORD *)((char *)&bData->klass + v62);
      goto LABEL_101;
    case 24:
      np = this->fields.deckIndex;
      if ( (np & 0x80000000) != 0 )
        np = this->fields.index;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( *(_DWORD *)(FieldSpace + 24) )
        goto LABEL_101;
      goto LABEL_105;
    case 25:
      v41 = BattleServantData___c_TypeInfo;
      if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
        v41 = BattleServantData___c_TypeInfo;
      }
      static_fields = v41->static_fields;
      _9__646_0 = static_fields->__9__646_0;
      if ( !_9__646_0 )
      {
        if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          static_fields = BattleServantData___c_TypeInfo->static_fields;
        }
        v44 = (Il2CppObject *)static_fields->__9;
        _9__646_0 = (System_Converter_long__int__o *)sub_B170CC(
                                                       System_Converter_long__int__TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23,
                                                       v24);
        System_Converter_long__int____ctor(
          _9__646_0,
          v44,
          Method_BattleServantData___c__getAiParam_b__646_0__,
          (const MethodInfo_266B228 *)Method_System_Converter_long__int___ctor__);
        v45 = BattleServantData___c_TypeInfo->static_fields;
        v45->__9__646_0 = _9__646_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v45->__9__646_0,
          (System_Int32_array **)_9__646_0,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      v52 = System_Array__ConvertAll_long__int_(
              checkParams,
              (System_Converter_TInput__TOutput__o *)_9__646_0,
              (const MethodInfo_20430E8 *)Method_System_Array_ConvertAll_long__int___);
      if ( !this->fields.buffData )
        goto LABEL_104;
      v53 = v52;
      SameIndivualityBuffSum = BattleBuffData__getSameIndivualityBuffSum(this->fields.buffData, v52, 0, 0, 0, 0LL);
      FieldSpace = BattleServantData__getSameIndiualityServantSum(this, v53, v55);
      if ( !v26 )
        goto LABEL_104;
      if ( !v26->max_length )
        goto LABEL_105;
      np = FieldSpace + SameIndivualityBuffSum;
LABEL_101:
      totalDamage = (double)np;
LABEL_102:
      v26->m_Items[0] = totalDamage;
      break;
    case 26:
      v63 = 0.0;
      if ( !this->fields.isSystemAlive )
      {
        FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                       this,
                       this->klass->vtable._10_set_hp.methodPtr);
        if ( (int)FieldSpace <= 0 )
        {
          shiftDeckList = this->fields.shiftDeckList;
          if ( !shiftDeckList || this->fields.shiftDeckIndex >= (signed int)shiftDeckList->max_length )
            v63 = 1.0;
        }
      }
      if ( !v26 )
LABEL_104:
        sub_B170D4();
      if ( !v26->max_length )
      {
LABEL_105:
        sub_B17100(FieldSpace, v21, v22);
        sub_B170A0();
      }
      v26->m_Items[0] = v63;
      break;
    default:
LABEL_41:
      v59 = (System_Double_array *)sub_B17014(double___TypeInfo, 0LL, v22);
LABEL_48:
      v26 = v59;
      break;
  }
  return v26;
}


AiState_o *__fastcall BattleServantData__getAiState(BattleServantData_o *this, const MethodInfo *method)
{
  AiStateManager_o *AiStateManager; // x0
  AiState_o *result; // x0

  AiStateManager = BattleServantData__get_AiStateManager(this, method);
  if ( !AiStateManager )
    sub_B170D4();
  result = AiStateManager->fields._CurAiState_k__BackingField;
  if ( !result )
    return this->fields.aiState;
  return result;
}


int32_t __fastcall BattleServantData__getAppearanceId(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_40F8AE2 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8AE2 = 1;
  }
  result = this->fields.appearanceId;
  if ( result <= 0 )
  {
    v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v6.fields.currentCryptoKey = v5;
    *(_QWORD *)&v6.fields.fakeValue = v4;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL);
  }
  return result;
}


float __fastcall BattleServantData__getAtkTdRate(BattleServantData_o *this, const MethodInfo *method)
{
  return (float)this->fields.atktdrate / 1000.0;
}


int32_t __fastcall BattleServantData__getAttackBaseNp(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        bool isNoble,
        const MethodInfo *method)
{
  TreasureDvcLvEntity_o *TDvcLv; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  TDvcLv = BattleServantData__get_TDvcLv(this, (const MethodInfo *)command);
  if ( TDvcLv )
  {
    if ( isNoble )
    {
      TDvcLv = BattleServantData__get_TDvcLv(this, v8);
      if ( TDvcLv )
      {
        LODWORD(TDvcLv) = TDvcLv->fields.tdPoint;
        return (int)TDvcLv;
      }
    }
    else if ( command )
    {
      if ( BattleCommandData__isQuick(command, 0LL) )
      {
        TDvcLv = BattleServantData__get_TDvcLv(this, v9);
        if ( TDvcLv )
        {
          LODWORD(TDvcLv) = TDvcLv->fields.tdPointQ;
          return (int)TDvcLv;
        }
      }
      else if ( BattleCommandData__isArts(command, 0LL) )
      {
        TDvcLv = BattleServantData__get_TDvcLv(this, v10);
        if ( TDvcLv )
        {
          LODWORD(TDvcLv) = TDvcLv->fields.tdPointA;
          return (int)TDvcLv;
        }
      }
      else if ( BattleCommandData__isBuster(command, 0LL) )
      {
        TDvcLv = BattleServantData__get_TDvcLv(this, v11);
        if ( TDvcLv )
        {
          LODWORD(TDvcLv) = TDvcLv->fields.tdPointB;
          return (int)TDvcLv;
        }
      }
      else
      {
        if ( !BattleCommandData__isAddAttack(command, 0LL) )
        {
          LODWORD(TDvcLv) = 0;
          return (int)TDvcLv;
        }
        TDvcLv = BattleServantData__get_TDvcLv(this, v12);
        if ( TDvcLv )
        {
          LODWORD(TDvcLv) = TDvcLv->fields.tdPointEx;
          return (int)TDvcLv;
        }
      }
    }
    sub_B170D4();
  }
  return (int)TDvcLv;
}


System_Int32_array *__fastcall BattleServantData__getAttackRaito(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        int32_t *multiatk,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x23
  BattleBuffData_CheckIndividualitiesData_o *v10; // x24
  const MethodInfo *v11; // x2

  if ( (byte_40F8A7A & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8A7A = 1;
  }
  *multiatk = 1;
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt,
                                                       multiatk,
                                                       method);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  if ( !BattleBuffData__getActBuff(buffData, 66, v10, multiatk, 0LL) )
    *multiatk = 1;
  return BattleServantData__getAttackRaitoBase(this, command, v11);
}


System_Int32_array *__fastcall BattleServantData__getAttackRaitoBase(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Hashtable_o *commandtable; // x21
  __int64 v8; // x0
  __int64 v9; // x2
  struct System_Collections_Hashtable_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x0
  System_Int32_array **v13; // x20
  __int64 v14; // x9
  _BOOL4 flash; // w21
  bool isThree; // w0
  System_Int32_array *result; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  bool isPair; // w0
  int32_t v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8A7B & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, command);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&ServantCardEntity_TypeInfo, v6);
    byte_40F8A7B = 1;
  }
  if ( !command )
    goto LABEL_26;
  commandtable = this->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_26;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          v8,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
    result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v9);
    if ( !result )
      goto LABEL_26;
    if ( result->max_length )
    {
      result->m_Items[1] = 100;
      return result;
    }
LABEL_28:
    sub_B17100(result, v18, v19);
    sub_B170A0();
  }
  v10 = this->fields.commandtable;
  v21 = BattleCommandData__get_type(command, 0LL);
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v21);
  if ( !v10 )
    goto LABEL_26;
  v12 = ((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._29_get_Item.method)(
          v10,
          v11,
          v10->klass->vtable._30_set_Item.methodPtr);
  v13 = (System_Int32_array **)v12;
  if ( v12 )
  {
    v14 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v12 + 300LL) < (unsigned int)v14
      || *(ServantCardEntity_c **)(*(_QWORD *)(*(_QWORD *)v12 + 200LL) + 8 * v14 - 8) != ServantCardEntity_TypeInfo )
    {
      result = (System_Int32_array *)sub_B173C8(v12);
      goto LABEL_28;
    }
  }
  flash = command->fields.flash;
  isThree = BattleCommandData__isThree(command, 0LL);
  if ( flash )
  {
    if ( isThree )
    {
      if ( v13 )
        return v13[8];
LABEL_26:
      sub_B170D4();
    }
    isPair = BattleCommandData__isPair(command, 0LL);
    if ( !v13 )
      goto LABEL_26;
    if ( isPair )
      return v13[7];
    else
      return v13[6];
  }
  else
  {
    if ( !v13 )
      goto LABEL_26;
    if ( isThree )
      return v13[5];
    else
      return v13[4];
  }
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleServantData__getAttackSideEffectBuffList(
        BattleServantData_o *this,
        int32_t attackAct,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  BattleBuffData_o *buffData; // x24
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleBuffData_CheckIndividualitiesData_o *v19; // x25
  BattleBuffData_BuffData_array *BuffList_31040328; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v24; // x20
  unsigned int v25; // w22
  Il2CppClass **v26; // x8
  Il2CppClass *v27; // x21

  if ( (byte_40F8A70 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&attackAct);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    byte_40F8A70 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  *(_QWORD *)&attackAct,
                                                                                                  command,
                                                                                                  opSvt,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffData = this->fields.buffData;
  v19 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17,
                                                       v18);
  BattleBuffData_CheckIndividualitiesData___ctor(v19, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_22;
  BuffList_31040328 = BattleBuffData__getBuffList_31040328(buffData, attackAct, v19, 1, 0, 0LL);
  if ( !BuffList_31040328 )
    goto LABEL_22;
  max_length = BuffList_31040328->max_length;
  v24 = BuffList_31040328;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        sub_B17100(BuffList_31040328, v21, v22);
        sub_B170A0();
      }
      v26 = &v24->obj.klass + (int)v25;
      v27 = v26[4];
      if ( !v27 )
        break;
      if ( !BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)v26[4], 0LL)
        && !BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)v27, 0LL)
        && !BattleBuffData_BuffData__isCommandCardBuff((BattleBuffData_BuffData_o *)v27, 0LL)
        || BattleBuffData_BuffData__isActiveCommandCode((BattleBuffData_BuffData_o *)v27, 0LL)
        || BattleBuffData_BuffData__isCommandCardBuff((BattleBuffData_BuffData_o *)v27, 0LL)
        && LOBYTE(v27->_1.generic_class)
        || (BuffList_31040328 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                                   (BattleBuffData_BuffData_o *)v27,
                                                                   0LL),
            ((unsigned __int8)BuffList_31040328 & 1) != 0)
        && BYTE1(v27->vtable[4].methodPtr) )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      max_length = v24->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getAttackSideEffectBuffList_22759320(
        BattleServantData_o *this,
        BuffList_ACTION_array *attackActs,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  const MethodInfo *v22; // x4
  __int64 v23; // x8
  unsigned __int64 v24; // x24
  System_Collections_Generic_IEnumerable_T__o *AttackSideEffectBuffList; // x0
  BattleServantData___c_c *v26; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__423_0; // x20
  Il2CppObject *v29; // x21
  struct BattleServantData___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F8A72 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, attackActs);
    sub_B16FFC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    sub_B16FFC(&Method_BattleServantData___c__getAttackSideEffectBuffList_b__423_0__, v15);
    sub_B16FFC(&BattleServantData___c_TypeInfo, v16);
    byte_40F8A72 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  attackActs,
                                                                                                  command,
                                                                                                  opSvt,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !attackActs )
    goto LABEL_20;
  v23 = *(_QWORD *)&attackActs->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v23 )
      {
        sub_B17100(v18, v19, v20);
        sub_B170A0();
      }
      AttackSideEffectBuffList = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getAttackSideEffectBuffList(
                                                                                  this,
                                                                                  attackActs->m_Items[v24 + 1],
                                                                                  command,
                                                                                  opSvt,
                                                                                  v22);
      if ( !v17 )
        break;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
        AttackSideEffectBuffList,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      LODWORD(v23) = attackActs->max_length;
      if ( (__int64)++v24 >= (int)v23 )
        goto LABEL_9;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_9:
  v26 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v26 = BattleServantData___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__423_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__423_0;
  if ( !_9__423_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__423_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                            v19,
                                                                            v20,
                                                                            v21,
                                                                            v22);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__423_0,
      v29,
      Method_BattleServantData___c__getAttackSideEffectBuffList_b__423_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v30 = BattleServantData___c_TypeInfo->static_fields;
    v30->__9__423_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__423_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v30->__9__423_0,
      (System_Int32_array **)_9__423_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v17 )
    goto LABEL_20;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__423_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


int32_t __fastcall BattleServantData__getAttackType(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Hashtable_o *commandtable; // x21
  __int64 v7; // x0
  struct System_Collections_Hashtable_o *v8; // x20
  __int64 v9; // x0
  int32_t *v10; // x0
  __int64 v11; // x9
  BattleServantData_o *v13; // x0
  BattleCommandData_o *v14; // x1
  BattleServantData_o *v15; // x2
  int32_t *v16; // x3
  const MethodInfo *v17; // x4
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8A79 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, command);
    sub_B16FFC(&ServantCardEntity_TypeInfo, v5);
    byte_40F8A79 = 1;
  }
  if ( !command )
    goto LABEL_13;
  commandtable = this->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          v7,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return 1;
  v8 = this->fields.commandtable;
  v18 = BattleCommandData__get_type(command, 0LL);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v18);
  if ( !v8
    || (v10 = (int32_t *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._29_get_Item.method)(
                           v8,
                           v9,
                           v8->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  v11 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v10 + 300LL) >= (unsigned int)v11
    && *(ServantCardEntity_c **)(*(_QWORD *)(*(_QWORD *)v10 + 200LL) + 8 * v11 - 8) == ServantCardEntity_TypeInfo )
  {
    return v10[18];
  }
  v13 = (BattleServantData_o *)sub_B173C8(v10);
  return (unsigned int)BattleServantData__getAttackRaito(v13, v14, v15, v16, v17);
}


int32_t __fastcall BattleServantData__getAttri(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0
  int32_t result; // w0
  struct ServantEntity_o *svtdata; // x8

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt || (result = BattleDeckServantData__getChangeAttri(deckSvt, 0LL)) == 0 )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_B170D4();
    return svtdata->fields.attri;
  }
  return result;
}


System_Int32_array *__fastcall BattleServantData__getAuraIdList(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *AuraBuffList; // x0
  __int64 v7; // x2
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Int32_array *v12; // x19
  int32_t v13; // w21
  BattleBuffData_BuffData_o *v14; // x8
  __int64 v15; // x9

  if ( (byte_40F8ADC & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v4);
    byte_40F8ADC = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return this->fields.wkzero;
  AuraBuffList = BattleBuffData__getAuraBuffList(buffData, 0LL);
  if ( !AuraBuffList )
    goto LABEL_16;
  v8 = AuraBuffList;
  v9 = sub_B17014(int___TypeInfo, (unsigned int)AuraBuffList->fields._size, v7);
  if ( !v9 )
    goto LABEL_16;
  v12 = (System_Int32_array *)v9;
  if ( *(int *)(v9 + 24) >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v8->fields._size <= (unsigned int)v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v14 = v8->fields._items->m_Items[v13];
      if ( !v14 )
        break;
      if ( (unsigned int)v13 >= *(_DWORD *)(v9 + 24) )
      {
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      v15 = v9 + 4LL * v13++;
      *(_DWORD *)(v15 + 32) = v14->fields.auraEffectId;
      if ( v13 >= *(_DWORD *)(v9 + 24) )
        return v12;
    }
LABEL_16:
    sub_B170D4();
  }
  return v12;
}


int32_t __fastcall BattleServantData__getBaseATK(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.atk;
}


int32_t __fastcall BattleServantData__getBaseStarRate(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B170D4();
  return svtdata->fields.starRate;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getBattleClassId(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        bool isAct,
        bool isAttack,
        const MethodInfo *method)
{
  BattleCommandData_o *v9; // x23
  BattleBuffData_CheckIndividualitiesData_o *v11; // x21
  BattleBuffData_o *buffData; // x0
  int32_t result; // w0
  struct ServantEntity_o *svtdata; // x8
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  v9 = command;
  if ( (byte_40F8A4B & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8A4B = 1;
  }
  value = 0;
  if ( !isAttack )
    v9 = 0LL;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt,
                                                       isAct,
                                                       isAttack);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, v9, v9, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_14;
  if ( isAct )
  {
    if ( BattleBuffData__getActBuff(buffData, 19, v11, &value, 0LL) )
      return value;
  }
  else if ( BattleBuffData__getTestActBuff(buffData, 19, v11, &value, 0LL) )
  {
    return value;
  }
  result = this->fields.npcSvtClassId;
  if ( !result )
  {
    svtdata = this->fields.svtdata;
    if ( svtdata )
      return svtdata->fields.classId;
LABEL_14:
    sub_B170D4();
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantData__getBattleServantOverwriteName(
        BattleServantData_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v14; // x20
  const MethodInfo *v15; // x2
  int32_t DispLimitCount; // w0
  __int64 v17; // x22
  __int64 v18; // x23
  int32_t v19; // w21
  int32_t v20; // w22
  int32_t LimitCountByDispLimit; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_40F8A38 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&OptionManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F8A38 = 1;
  }
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_22;
  if ( !deckSvt->fields.isFollowerSvt )
    return 0LL;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetSpoilerSetting(0LL) || Follower__IsNpc(this->fields.followerType, 0LL) )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      svtId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_B170D4();
  }
  v14 = Entity;
  if ( !ServantEntity__get_IsServant(Entity, 0LL) )
    return 0LL;
  DispLimitCount = BattleServantData__getDispLimitCount(this, 0, v15);
  v18 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
  v19 = DispLimitCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v19, v20, 0LL);
  return ServantEntity__getBattleName(v14, this->fields.battleVoice != 0, LimitCountByDispLimit, 0LL);
}


float __fastcall BattleServantData__getBuffDamageValue(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8AB5 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AB5 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return (float)BattleBuffData__getActValue_31051136(buffData, 13, v9, 0LL);
}


BattleBuffData_o *__fastcall BattleServantData__getBuffData(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.buffData;
}


float __fastcall BattleServantData__getBuffGRANTSTATEMagnification(
        BattleServantData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        bool upOnly,
        const MethodInfo *method)
{
  __int64 v11; // x1
  bool v12; // zf
  BattleBuffData_o *buffData; // x22
  int32_t v14; // w23
  __int64 v15; // x2
  const MethodInfo *v16; // x4
  System_Int32_array *Individualities_22775404; // x24
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v19; // x2
  System_Int32_array *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Int32_array *v25; // x25
  BattleBuffData_CheckIndividualitiesData_o *v26; // x26

  if ( (byte_40F8ABA & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffIndiv);
    sub_B16FFC(&int___TypeInfo, v11);
    byte_40F8ABA = 1;
  }
  v12 = !upOnly;
  buffData = this->fields.buffData;
  if ( v12 )
    v14 = 36;
  else
    v14 = 106;
  Individualities_22775404 = BattleServantData__getIndividualities_22775404(this, buffIndiv, (const MethodInfo *)opSvt);
  if ( opSvt )
  {
    BuffIndividualities = BattleServantData__getBuffIndividualities(opSvt, 1, 0, 0, v16);
    v20 = BattleServantData__getIndividualities_22775404(opSvt, BuffIndividualities, v19);
  }
  else
  {
    v20 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v15);
  }
  v25 = v20;
  v26 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23,
                                                       v24);
  BattleBuffData_CheckIndividualitiesData___ctor(v26, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31051980(
           buffData,
           v14,
           Individualities_22775404,
           v25,
           missText,
           v26,
           (BuffInterface_o *)this,
           0LL);
}


float __fastcall BattleServantData__getBuffGRANTSUBSTATEMagnification(
        BattleServantData_o *this,
        System_Int32_array *indiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22

  if ( (byte_40F8ABC & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, indiv);
    byte_40F8ABC = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      indiv,
                                                      opSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 61, v8, 0LL);
}


System_Int32_array *__fastcall BattleServantData__getBuffIndividualities(
        BattleServantData_o *this,
        bool isActiveOnly,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffIndividualities(
           buffData,
           isActiveOnly,
           isIncludeIgnoreIndiv,
           isIgnoreIndivUnreleaseable,
           0,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleServantData__getBuffList(
        BattleServantData_o *this,
        int32_t buffAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21

  if ( (byte_40F8A62 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&buffAction);
    byte_40F8A62 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&buffAction,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, buffAction, v8, 1, 0, 0LL);
}


float __fastcall BattleServantData__getBuffNonResistInstantDeath(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22

  if ( (byte_40F8AAD & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_40F8AAD = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 49, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleServantData__getBuffOverwriteClassRelationArray(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        bool isAct,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v10; // x23

  if ( (byte_40F8AC0 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AC0 = 1;
  }
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt,
                                                       isAct,
                                                       method);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 87, v10, isAct, 0, 0LL);
}


int32_t __fastcall BattleServantData__getBuffRangeValue(
        BattleServantData_o *this,
        int32_t lowEffectValue,
        int32_t highEffectValue,
        int32_t lowRange,
        int32_t highRange,
        const MethodInfo *method)
{
  int v11; // w0
  const MethodInfo *v12; // x1
  int v13; // w24
  double v14; // d1
  int32_t result; // w0
  double v16; // d9
  int v17; // w0
  const MethodInfo *v18; // x1
  int v19; // w22
  double v20; // d10
  double v21; // d11
  const MethodInfo *v22; // x1
  double v23; // d8
  const MethodInfo *v24; // x1
  int32_t MaxHp; // w0

  v11 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, int32_t, int32_t, int32_t, const MethodInfo *))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr,
          highEffectValue,
          lowRange,
          highRange,
          method);
  if ( v11 == 1 )
    v13 = 0;
  else
    v13 = v11;
  v14 = (double)v13 / (double)BattleServantData__getMaxHp(this, v12);
  result = 0;
  this->fields.wkHpRatio = v14;
  if ( v14 * 1000.0 >= (double)lowRange )
  {
    v16 = (double)highRange;
    if ( v14 * 1000.0 <= (double)highRange )
    {
      v17 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
              this,
              this->klass->vtable._10_set_hp.methodPtr);
      if ( v17 == 1 )
        v19 = 0;
      else
        v19 = v17;
      v20 = (double)lowRange / 1000.0;
      v21 = v20 * (double)BattleServantData__getMaxHp(this, v18);
      v23 = v16 / 1000.0 * (double)BattleServantData__getMaxHp(this, v22);
      MaxHp = BattleServantData__getMaxHp(this, v24);
      return BattleUtility__FloorToInt_23374264(
               ((double)v19 - v21) / (v23 - v20 * (double)MaxHp) * (double)(highEffectValue - lowEffectValue),
               0LL)
           + lowEffectValue;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


float __fastcall BattleServantData__getBuffResistDelayNPTurn(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22

  if ( (byte_40F8AAE & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_40F8AAE = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 68, v8, 0LL);
}


float __fastcall BattleServantData__getBuffResistInstantDeath(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22

  if ( (byte_40F8AAC & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_40F8AAC = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 48, v8, 0LL);
}


float __fastcall BattleServantData__getBuffSelfDamageValue(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8AB6 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AB6 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return (float)BattleBuffData__getActValue_31051136(buffData, 14, v9, 0LL);
}


int32_t __fastcall BattleServantData__getBuffStateValue(
        BattleServantData_o *this,
        int32_t changeValue,
        int32_t ratioParam,
        const MethodInfo *method)
{
  int v6; // w0
  const MethodInfo *v7; // x1
  int v8; // w21
  double v9; // d0
  double v10; // d2
  int v11; // w0
  const MethodInfo *v12; // x1
  int v13; // w21
  double v14; // d0

  if ( changeValue == 1 )
  {
    v11 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, int32_t, const MethodInfo *))this->klass->vtable._9_get_hp.method)(
            this,
            this->klass->vtable._10_set_hp.methodPtr,
            ratioParam,
            method);
    if ( v11 == 1 )
      v13 = 0;
    else
      v13 = v11;
    v14 = (double)v13 / (double)BattleServantData__getMaxHp(this, v12);
    v10 = (double)ratioParam;
    this->fields.wkHpRatio = v14;
    v9 = 1.0 - v14;
    return BattleUtility__FloorToInt_23374264(v9 * v10, 0LL);
  }
  if ( !changeValue )
  {
    v6 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, int32_t, const MethodInfo *))this->klass->vtable._9_get_hp.method)(
           this,
           this->klass->vtable._10_set_hp.methodPtr,
           ratioParam,
           method);
    if ( v6 == 1 )
      v8 = 0;
    else
      v8 = v6;
    v9 = (double)v8 / (double)BattleServantData__getMaxHp(this, v7);
    v10 = (double)ratioParam;
    this->fields.wkHpRatio = v9;
    return BattleUtility__FloorToInt_23374264(v9 * v10, 0LL);
  }
  return 0;
}


float __fastcall BattleServantData__getBuffTOLERANCEMagnification(
        BattleServantData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x20
  BattleBuffData_o *buffData; // x22
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Int32_array *Individualities_22775404; // x24
  BattleBuffData_CheckIndividualitiesData_o *v17; // x25

  v7 = buffIndiv;
  if ( (byte_40F8ABB & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffIndiv);
    byte_40F8ABB = 1;
  }
  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, method);
  Individualities_22775404 = BattleServantData__getIndividualities_22775404(this, BuffIndividualities, v11);
  if ( opSvt )
    v7 = BattleServantData__getIndividualities_22775404(opSvt, v7, v13);
  v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14,
                                                       v15);
  BattleBuffData_CheckIndividualitiesData___ctor(v17, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31051980(buffData, 37, Individualities_22775404, v7, missText, v17, 0LL, 0LL);
}


float __fastcall BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
        BattleServantData_o *this,
        System_Int32_array *indiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  System_Int32_array *Individualities_22775404; // x21
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  Individualities_22775404 = indiv;
  if ( (byte_40F8ABD & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, indiv);
    byte_40F8ABD = 1;
  }
  buffData = this->fields.buffData;
  if ( opSvt )
    Individualities_22775404 = BattleServantData__getIndividualities_22775404(
                                 opSvt,
                                 Individualities_22775404,
                                 (const MethodInfo *)opSvt);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      indiv,
                                                      opSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor_22056984(v9, this, opSvt, 0LL, Individualities_22775404, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 62, v9, 0LL);
}


int32_t __fastcall BattleServantData__getCameraActionId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B170D4();
  return ServantEntity__getCameraActionId(svtdata, 0LL);
}


float __fastcall BattleServantData__getClassAtk(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t npcSvtClassId; // w0
  struct ServantEntity_o *svtdata; // x8

  npcSvtClassId = this->fields.npcSvtClassId;
  if ( !npcSvtClassId )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_B170D4();
    npcSvtClassId = svtdata->fields.classId;
  }
  return ServantClassMaster__getClassAtk(npcSvtClassId, 0LL);
}


int32_t __fastcall BattleServantData__getClassId(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  struct ServantEntity_o *svtdata; // x8

  result = this->fields.npcSvtClassId;
  if ( !result )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_B170D4();
    return svtdata->fields.classId;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleServantData__getCommandArray(
        BattleServantData_o *this,
        int32_t commandTypeBit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct ServantEntity_o *svtdata; // x8
  struct System_Int32_array *cardIds; // x22
  __int64 v17; // x8
  unsigned __int64 v18; // x23
  struct ServantEntity_o *v20; // x8

  if ( (byte_40F8A46 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&commandTypeBit);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_40F8A46 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&commandTypeBit,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_18;
  cardIds = svtdata->fields.cardIds;
  if ( !cardIds )
    goto LABEL_18;
  v17 = *(_QWORD *)&cardIds->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    do
    {
      if ( v18 >= (unsigned int)v17 )
      {
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      v13 = (unsigned int)cardIds->m_Items[v18 + 1];
      if ( ((1 << (v13 - 1)) & commandTypeBit) != 0 )
      {
        if ( !v11 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v11,
          v13,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v17) = cardIds->max_length;
      ++v18;
    }
    while ( (__int64)v18 < (int)v17 );
  }
  if ( !v11 )
    goto LABEL_18;
  if ( v11->fields._size > 0 )
    return System_Collections_Generic_List_int___ToArray(
             v11,
             (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v20 = this->fields.svtdata;
  if ( !v20 )
LABEL_18:
    sub_B170D4();
  return v20->fields.cardIds;
}


float __fastcall BattleServantData__getCommandCardATK(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t CommandType; // w0
  __int64 *v11; // x8
  int32_t v12; // w0
  int32_t v13; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  float Magnification; // s0
  float v19; // s8
  BattleBuffData_CheckIndividualitiesData_o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  BattleBuffData_CheckIndividualitiesData_o *v25; // x22
  BattleBuffData_o *buffData; // x0
  float ActMag_31052244; // s0
  BattleBuffData_o *v28; // x0
  float v29; // s9
  float v30; // s0

  if ( (byte_40F8A97 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    sub_B16FFC(&StringLiteral_5488, v7);
    sub_B16FFC(&StringLiteral_5489, v8);
    sub_B16FFC(&StringLiteral_5490, v9);
    byte_40F8A97 = 1;
  }
  if ( !this->fields.isEnemy )
    goto LABEL_12;
  if ( !command )
    goto LABEL_18;
  CommandType = BattleCommandData__getCommandType(command, 0LL);
  if ( !BattleCommand__isARTS(CommandType, 0LL) )
  {
    v12 = BattleCommandData__getCommandType(command, 0LL);
    if ( BattleCommand__isQUICK(v12, 0LL) )
    {
      v11 = &StringLiteral_5490;
      goto LABEL_11;
    }
    v13 = BattleCommandData__getCommandType(command, 0LL);
    if ( BattleCommand__isBUSTER(v13, 0LL) )
    {
      v11 = &StringLiteral_5489;
      goto LABEL_11;
    }
LABEL_12:
    Magnification = BattleCommand__getMagnification(command, 0LL);
    goto LABEL_13;
  }
  v11 = &StringLiteral_5488;
LABEL_11:
  Magnification = ConstantMaster__getRateValue((System_String_o *)*v11, 0LL);
LABEL_13:
  v19 = Magnification;
  v20 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16,
                                                       v17);
  BattleBuffData_CheckIndividualitiesData___ctor(v20, this, targetSvt, command, 0LL, 0LL, 0LL);
  v25 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v21,
                                                       v22,
                                                       v23,
                                                       v24);
  BattleBuffData_CheckIndividualitiesData___ctor(v25, targetSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_31052244 = BattleBuffData__getActMag_31052244(buffData, 1, v20, 0LL), !targetSvt)
    || (v28 = targetSvt->fields.buffData) == 0LL
    || (v29 = ActMag_31052244, v30 = BattleBuffData__getActMag_31052244(v28, 2, v25, 0LL), !command) )
  {
LABEL_18:
    sub_B170D4();
  }
  return (float)(v19 * fmaxf((float)(v29 + 1.0) - v30, 0.0)) + (float)((float)command->fields.addAtk / 1000.0);
}


float __fastcall BattleServantData__getCommandCardNP(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  float NpMagnification; // s8
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleBuffData_CheckIndividualitiesData_o *v12; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  BattleBuffData_CheckIndividualitiesData_o *v17; // x22
  BattleBuffData_o *buffData; // x0
  float ActMag_31052244; // s0
  BattleBuffData_o *v20; // x0
  float v21; // s9
  float v22; // s0

  if ( (byte_40F8A98 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8A98 = 1;
  }
  NpMagnification = BattleCommand__getNpMagnification(command, 0LL);
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v8,
                                                       v9,
                                                       v10,
                                                       v11);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, this, opSvt, command, 0LL, 0LL, 0LL);
  v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15,
                                                       v16);
  BattleBuffData_CheckIndividualitiesData___ctor(v17, opSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_31052244 = BattleBuffData__getActMag_31052244(buffData, 22, v12, 0LL), !opSvt)
    || (v20 = opSvt->fields.buffData) == 0LL
    || (v21 = ActMag_31052244, v22 = BattleBuffData__getActMag_31052244(v20, 23, v17, 0LL), !command) )
  {
    sub_B170D4();
  }
  return (float)(NpMagnification * fmaxf((float)(v21 + 1.0) - v22, 0.0))
       + (float)((float)command->fields.addTdGauge / 1000.0);
}


int32_t __fastcall BattleServantData__getCommandDispLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w0
  __int64 v7; // x20
  __int64 v8; // x21
  int32_t v9; // w19
  int32_t LimitCountByImageLimit; // w0
  __int64 v11; // x20
  __int64 v12; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x23
  __int64 v16; // x24
  ServantLimitAddMaster_o *v17; // x22
  int32_t v18; // w0
  __int64 v19; // x8
  int32_t v20; // w19
  int32_t v21; // w0
  int32_t battleCharaLimitCount; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // kr00_16
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_40F8A50 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8A50 = 1;
  }
  entity = 0LL;
  result = this->fields.dressDispId;
  if ( result <= 0 )
  {
    v8 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v25.fields.currentCryptoKey = v8;
    *(_QWORD *)&v25.fields.fakeValue = v7;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL) )
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v8;
      *(_QWORD *)&v26.fields.fakeValue = v7;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL) >= 11 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v30.fields.currentCryptoKey = v8;
        *(_QWORD *)&v30.fields.fakeValue = v7;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
      }
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v27.fields.currentCryptoKey = v8;
      *(_QWORD *)&v27.fields.fakeValue = v7;
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v9 - 1, 0LL);
      goto LABEL_31;
    }
    v11 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( this->fields.isEnemy )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_42;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v17 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v28.fields.currentCryptoKey = v16;
      *(_QWORD *)&v28.fields.fakeValue = v15;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28, 0LL);
      v19 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v29.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v20 = v18;
      *(_QWORD *)&v29.fields.currentCryptoKey = v19;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29, 0LL);
      if ( !v17 )
        goto LABEL_42;
      if ( ServantLimitAddMaster__TryGetEntity(v17, &entity, v20, v21, 0LL) )
      {
        if ( entity )
        {
          battleCharaLimitCount = entity->fields.battleCharaLimitCount;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          LimitCountByImageLimit = battleCharaLimitCount;
LABEL_31:
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
          v12 = *(_QWORD *)&v23.fields.fakeValue;
          v11 = *(_QWORD *)&v23.fields.currentCryptoKey;
          goto LABEL_32;
        }
LABEL_42:
        sub_B170D4();
      }
    }
LABEL_32:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v11;
    *(_QWORD *)&v30.fields.fakeValue = v12;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
  }
  return result;
}


System_Int32_array *__fastcall BattleServantData__getCommandList(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B170D4();
  return svtdata->fields.cardIds;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getCommandSideEffect(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v9; // x22

  if ( (byte_40F8A67 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8A67 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 57, v9, 1, 0, 0LL);
}


float __fastcall BattleServantData__getCommandStar(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  float CriticalMagnification; // s8
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleBuffData_CheckIndividualitiesData_o *v12; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  BattleBuffData_CheckIndividualitiesData_o *v17; // x22
  BattleBuffData_o *buffData; // x0
  float ActMag_31052244; // s0
  BattleBuffData_o *v20; // x0
  float v21; // s9
  float v22; // s0

  if ( (byte_40F8A99 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8A99 = 1;
  }
  CriticalMagnification = BattleCommand__getCriticalMagnification(command, 0LL);
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v8,
                                                       v9,
                                                       v10,
                                                       v11);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, this, opSvt, command, 0LL, 0LL, 0LL);
  v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15,
                                                       v16);
  BattleBuffData_CheckIndividualitiesData___ctor(v17, opSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_31052244 = BattleBuffData__getActMag_31052244(buffData, 26, v12, 0LL), !opSvt)
    || (v20 = opSvt->fields.buffData) == 0LL
    || (v21 = ActMag_31052244, v22 = BattleBuffData__getActMag_31052244(v20, 27, v17, 0LL), !command) )
  {
    sub_B170D4();
  }
  return (float)(CriticalMagnification * fmaxf((float)(v21 + 1.0) - v22, 0.0))
       + (float)((float)command->fields.addCritical / 1000.0);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleServantData__getConcatServantAndBuffIndividualityies(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        bool isActiveOnly,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x24
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *Individualities; // x0
  const MethodInfo *v17; // x4
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0

  if ( (byte_40F8AA1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, command);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_40F8AA1 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    command,
                                                    isIncludeIgnoreIndiv,
                                                    isIgnoreIndivUnreleaseable,
                                                    isActiveOnly);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getIndividualities(
                                                                     this,
                                                                     command,
                                                                     v15);
  if ( !v14 )
    sub_B170D4();
  System_Collections_Generic_List_int___AddRange(
    v14,
    Individualities,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                         this,
                                                                         isActiveOnly,
                                                                         isIncludeIgnoreIndiv,
                                                                         isIgnoreIndivUnreleaseable,
                                                                         v17);
  System_Collections_Generic_List_int___AddRange(
    v14,
    BuffIndividualities,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleServantData__getConcatSvtIndividualities(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Individualities; // x20
  const MethodInfo *v7; // x4
  System_Collections_Generic_IEnumerable_TSource__o *BuffIndividualities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_40F8AA0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Concat_int___, command);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_40F8AA0 = 1;
  }
  Individualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getIndividualities(
                                                                           this,
                                                                           command,
                                                                           method);
  BuffIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getBuffIndividualities(
                                                                               this,
                                                                               1,
                                                                               0,
                                                                               0,
                                                                               v7);
  v9 = System_Linq_Enumerable__Concat_int_(
         Individualities,
         BuffIndividualities,
         (const MethodInfo_18D16C4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v9,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleServantData_ConnectData_o *__fastcall BattleServantData__getConnenctData(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  int32_t uniqueId; // w20
  int32_t v4; // w0
  int32_t atk; // w19
  int32_t v6; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleServantData_ConnectData_o *v11; // x22

  if ( (byte_40F8ADA & 1) == 0 )
  {
    sub_B16FFC(&BattleServantData_ConnectData_TypeInfo, method);
    byte_40F8ADA = 1;
  }
  uniqueId = this->fields.uniqueId;
  v4 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  atk = this->fields.atk;
  v6 = v4;
  v11 = (BattleServantData_ConnectData_o *)sub_B170CC(BattleServantData_ConnectData_TypeInfo, v7, v8, v9, v10);
  BattleServantData_ConnectData___ctor(v11, uniqueId, v6, atk, 0LL);
  return v11;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getCorrectedValueFuncGainNp(
        BattleServantData_o *this,
        int32_t tmpVal,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22

  if ( (byte_40F8AAB & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&tmpVal);
    byte_40F8AAB = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&tmpVal,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActValue_31051136(buffData, 71, v8, 0LL) * tmpVal / 1000;
}


int32_t __fastcall BattleServantData__getCountMaxNp(BattleServantData_o *this, const MethodInfo *method)
{
  return 3 * this->fields.lineMaxNp;
}


int32_t __fastcall BattleServantData__getCriticalRate(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *optSvt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t UpDownCriticalRate; // w0
  const MethodInfo *v9; // x3
  System_String_o *missText; // [xsp+8h] [xbp-28h] BYREF

  missText = 0LL;
  UpDownCriticalRate = BattleServantData__getUpDownCriticalRate(this, command, optSvt, &missText, v4);
  if ( !optSvt )
    sub_B170D4();
  return BattleServantData__GetUpDownCriticalRateDamageTaken(optSvt, command, this, v9)
       + UpDownCriticalRate
       + this->fields.criticalRate;
}


int32_t __fastcall BattleServantData__getCriticalWeight(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  struct ServantLimitEntity_o *svtlimitent; // x8
  int criticalWeight; // w23
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v10; // x22
  float v11; // s0

  if ( (byte_40F8AC7 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AC7 = 1;
  }
  svtlimitent = this->fields.svtlimitent;
  if ( !svtlimitent
    || (criticalWeight = svtlimitent->fields.criticalWeight,
        buffData = this->fields.buffData,
        v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             command,
                                                             method,
                                                             v3,
                                                             v4),
        BattleBuffData_CheckIndividualitiesData___ctor(v10, this, 0LL, command, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_B170D4();
  }
  v11 = BattleBuffData__getActMag_31052244(buffData, 29, v10, 0LL) * (float)criticalWeight;
  return BattleUtility__FloorToInt(v11, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDamageSideEffect(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v9; // x22

  if ( (byte_40F8A6A & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8A6A = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 64, v9, 1, 0, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDeadAttackSideEffect(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        BattleCommandData_o *deadAttackcommand,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v9; // x22

  if ( (byte_40F8A68 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_40F8A68 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      deadAttackcommand,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, deadAttackcommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 58, v9, 1, 0, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDeadBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        bool isAllReturnDeadBuff,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BaseBattleEvent_o *battleEvent; // x0
  __int64 v12; // x2
  BattleBuffData_o *buffData; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleBuffData_BuffData_array *BuffListMatchingLastAttackOpponentIndividuality; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  const MethodInfo *v21; // x1
  int32_t RevengeTargetUniqueIdFromOpponent; // w22
  const MethodInfo *v23; // x1
  __int64 RevengeTargetUniqueId; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  int max_length; // w8
  int32_t v28; // w21
  unsigned int v29; // w24
  Il2CppClass **v30; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x23
  int32_t v32; // w8

  if ( (byte_40F8A63 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_BuffData___TypeInfo, data);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10);
    byte_40F8A63 = 1;
  }
  if ( !data )
    goto LABEL_26;
  battleEvent = data->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_26;
  if ( (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))battleEvent->klass->vtable._20_IsLogicEscape.method)(
          battleEvent,
          this,
          battleEvent->klass->vtable._21_IsTakeOverNextBattleBuff.methodPtr,
          method) & 1) != 0 )
    return (BattleBuffData_BuffData_array *)sub_B17014(BattleBuffData_BuffData___TypeInfo, 0LL, v12);
  buffData = this->fields.buffData;
  if ( !buffData )
LABEL_26:
    sub_B170D4();
  BuffListMatchingLastAttackOpponentIndividuality = BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(
                                                      buffData,
                                                      51,
                                                      data,
                                                      this,
                                                      1,
                                                      0LL);
  if ( !isAllReturnDeadBuff )
  {
    v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                    v15,
                                                                                                    v16,
                                                                                                    v17,
                                                                                                    v18);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v20,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    RevengeTargetUniqueIdFromOpponent = BattleServantData__getRevengeTargetUniqueIdFromOpponent(this, v21);
    RevengeTargetUniqueId = BattleServantData__getRevengeTargetUniqueId(this, v23);
    if ( BuffListMatchingLastAttackOpponentIndividuality )
    {
      max_length = BuffListMatchingLastAttackOpponentIndividuality->max_length;
      if ( max_length < 1 )
      {
LABEL_22:
        if ( v20 )
          return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
      }
      else
      {
        v28 = RevengeTargetUniqueId;
        v29 = 0;
        while ( 1 )
        {
          if ( v29 >= max_length )
          {
            sub_B17100(RevengeTargetUniqueId, v25, v26);
            sub_B170A0();
          }
          v30 = &BuffListMatchingLastAttackOpponentIndividuality->obj.klass + (int)v29;
          v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)v30[4];
          if ( !v31 )
            break;
          if ( BattleBuffData_BuffData__checkState((BattleBuffData_BuffData_o *)v30[4], 2048, 0LL) )
            v32 = RevengeTargetUniqueIdFromOpponent;
          else
            v32 = v28;
          if ( (v32 & 0x80000000) == 0
            || (RevengeTargetUniqueId = BattleBuffData_BuffData__checkState(
                                          (BattleBuffData_BuffData_o *)v31,
                                          0x40000,
                                          0LL),
                (RevengeTargetUniqueId & 1) == 0) )
          {
            if ( !v20 )
              goto LABEL_26;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              v31,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
          max_length = BuffListMatchingLastAttackOpponentIndividuality->max_length;
          if ( (int)++v29 >= max_length )
            goto LABEL_22;
        }
      }
    }
    goto LABEL_26;
  }
  return BuffListMatchingLastAttackOpponentIndividuality;
}


int32_t __fastcall BattleServantData__getDeadTargetUniqueId(BattleServantData_o *this, const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x8
  __int64 v7; // x8

  if ( (byte_40F8AD4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_40F8AD4 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_9;
  v6 = *(_QWORD *)&v3->max_length;
  if ( v6 )
  {
    if ( !(_DWORD)v6 )
    {
      sub_B17100(v3, v4, v5);
      sub_B170A0();
    }
    v7 = *(__int64 *)((char *)v3->m_Items + (((v6 << 32) - 0x100000000LL) >> 29));
    if ( v7 )
      return *(_DWORD *)(v7 + 20);
LABEL_9:
    sub_B170D4();
  }
  return -1;
}


float __fastcall BattleServantData__getDeathRate(BattleServantData_o *this, const MethodInfo *method)
{
  return (float)this->fields.deathRate / 1000.0;
}


int32_t __fastcall BattleServantData__getDeckIndex(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.deckIndex;
  if ( (result & 0x80000000) != 0 )
    return this->fields.index;
  return result;
}


int32_t __fastcall BattleServantData__getDefeatPoint(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  if ( BattleBuffData__isIgnoreDefeatPoint(buffData, 0LL) )
    return 0;
  else
    return this->fields.defeatPoint;
}


int32_t __fastcall BattleServantData__getDefenceBaseNp(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcLvEntity_o *TDvcLv; // x0
  const MethodInfo *v4; // x1

  TDvcLv = BattleServantData__get_TDvcLv(this, method);
  if ( TDvcLv )
  {
    TDvcLv = BattleServantData__get_TDvcLv(this, v4);
    if ( !TDvcLv )
      sub_B170D4();
    LODWORD(TDvcLv) = TDvcLv->fields.tdPointDef;
  }
  return (int)TDvcLv;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getDispLimitCount(
        BattleServantData_o *this,
        bool changeImageLimit,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t result; // w0
  __int64 v9; // x19
  __int64 v10; // x21
  int32_t v11; // w19
  int32_t LimitCountByImageLimit; // w0
  __int64 v13; // x19
  __int64 v14; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x23
  __int64 v18; // x24
  ServantLimitAddMaster_o *v19; // x22
  int32_t v20; // w0
  __int64 v21; // x8
  int32_t v22; // w20
  int32_t v23; // w0
  int32_t battleCharaLimitCount; // w19
  __int64 v25; // x0
  __int64 v26; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // kr10_16
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_40F8A51 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, changeImageLimit);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F8A51 = 1;
  }
  entity = 0LL;
  result = this->fields.dressDispId;
  if ( result <= 0 )
  {
    v10 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v10;
    *(_QWORD *)&v30.fields.fakeValue = v9;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL) )
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v10;
      *(_QWORD *)&v31.fields.fakeValue = v9;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31, 0LL) >= 11 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v35.fields.currentCryptoKey = v10;
        *(_QWORD *)&v35.fields.fakeValue = v9;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v35, 0LL);
      }
      if ( !changeImageLimit )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v36.fields.currentCryptoKey = v10;
        *(_QWORD *)&v36.fields.fakeValue = v9;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Decrement(v36, 0LL);
        v26 = *(_QWORD *)&v28.fields.fakeValue;
        v25 = *(_QWORD *)&v28.fields.currentCryptoKey;
        goto LABEL_41;
      }
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v32.fields.currentCryptoKey = v10;
      *(_QWORD *)&v32.fields.fakeValue = v9;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v11 - 1, 0LL);
LABEL_32:
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
      v26 = *(_QWORD *)&v27.fields.fakeValue;
      v25 = *(_QWORD *)&v27.fields.currentCryptoKey;
LABEL_41:
      v13 = v25;
      v14 = v26;
      goto LABEL_42;
    }
    v13 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( this->fields.isEnemy )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v19 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v33.fields.currentCryptoKey = v18;
      *(_QWORD *)&v33.fields.fakeValue = v17;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v33, 0LL);
      v21 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v34.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v22 = v20;
      *(_QWORD *)&v34.fields.currentCryptoKey = v21;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
      if ( !v19 )
        goto LABEL_48;
      if ( ServantLimitAddMaster__TryGetEntity(v19, &entity, v22, v23, 0LL) )
      {
        if ( entity )
        {
          battleCharaLimitCount = entity->fields.battleCharaLimitCount;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          LimitCountByImageLimit = battleCharaLimitCount;
          goto LABEL_32;
        }
LABEL_48:
        sub_B170D4();
      }
    }
LABEL_42:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v35.fields.currentCryptoKey = v13;
    *(_QWORD *)&v35.fields.fakeValue = v14;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v35, 0LL);
  }
  return result;
}


int32_t __fastcall BattleServantData__getDownBaseStarRate(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.downstarrate;
}


int32_t __fastcall BattleServantData__getDressId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B170D4();
  return ServantEntity__getDressId(svtdata, 0LL);
}


DropInfo_array *__fastcall BattleServantData__getDropItem(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.droplist;
}


int32_t __fastcall BattleServantData__getEffectFolder(BattleServantData_o *this, const MethodInfo *method)
{
  ServantLimitAddEntity_o *svtlimitaddent; // x20
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  if ( (byte_40F8A4E & 1) == 0 )
  {
    sub_B16FFC(&ServantLimitAddMaster_TypeInfo, method);
    byte_40F8A4E = 1;
  }
  svtlimitaddent = this->fields.svtlimitaddent;
  if ( (BYTE3(ServantLimitAddMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitAddMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddMaster_TypeInfo);
  }
  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B170D4();
  return ServantLimitAddMaster__getScriptIntValue(
           svtlimitaddent,
           ServantLimitAddMaster_TypeInfo->static_fields->KEY_SCRIPT_EFFECT_FOLDER,
           svtlimitDispent->fields.effectFolder,
           0LL);
}


int32_t __fastcall BattleServantData__getEnemyNameEffect(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0
  int32_t result; // w0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    return 0;
  result = BattleDeckServantData__getEnemyNameEffect(deckSvt, 0LL);
  if ( !result )
    return 0;
  return result;
}


BattleUserServantData_array *__fastcall BattleServantData__getEquipBattleUserServantList(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.equipList;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getFieldIndividualityBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x20

  if ( (byte_40F8A6B & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A6B = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 76, v7, 1, 0, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getFixCommandCardBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x20

  if ( (byte_40F8A66 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A66 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 74, v7, 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantData__getGrantInstantDeathMagnification(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        bool isTreasureDevice,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleCommandData_o *TreasureDvcCommand; // x23
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v10; // x22

  if ( (byte_40F8AB0 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_40F8AB0 = 1;
  }
  if ( isTreasureDevice )
    TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, (const MethodInfo *)opSvt);
  else
    TreasureDvcCommand = 0LL;
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       opSvt,
                                                       isTreasureDevice,
                                                       method,
                                                       v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, TreasureDvcCommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 63, v10, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getGutsBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(buffData, 89, data, this, 1, 0LL);
}


System_Int32_array *__fastcall BattleServantData__getIndividualities(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x21
  const MethodInfo *v13; // x2
  BattleServantData_c *inited; // x0
  BattleServantData_c *v15; // x0
  int32_t CriticalIndividuality; // w0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_Collections_Generic_IEnumerable_T__o *individuality; // x1
  const MethodInfo_2F10744 *v21; // x2
  System_Collections_Generic_IEnumerable_T__o *Individualities; // x0
  const MethodInfo *v23; // x2
  System_Int32_array *ServantCommandIndividuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_40F8ACC & 1) == 0 )
  {
    sub_B16FFC(&BattleServantData_TypeInfo, command);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_40F8ACC = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    command,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( command )
  {
    if ( command->fields.critical )
    {
      inited = BattleServantData_TypeInfo;
      if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantData_TypeInfo->_2.cctor_finished )
      {
        inited = (BattleServantData_c *)j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
      }
      if ( BattleServantData__get_CriticalIndividuality((const MethodInfo *)inited) != -1 )
      {
        v15 = BattleServantData_TypeInfo;
        if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleServantData_TypeInfo->_2.cctor_finished )
        {
          v15 = (BattleServantData_c *)j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
        }
        CriticalIndividuality = BattleServantData__get_CriticalIndividuality((const MethodInfo *)v15);
        if ( !v12 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v12,
          CriticalIndividuality,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    if ( !BattleCommandData__isTreasureDvc(command, 0LL) )
    {
      Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleCommandData__getIndividualities(
                                                                         command,
                                                                         0LL);
      if ( v12 )
      {
        System_Collections_Generic_List_int___AddRange(
          v12,
          Individualities,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
        ServantCommandIndividuality = BattleServantData__getServantCommandIndividuality(this, command, v23);
        v21 = (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__;
        individuality = (System_Collections_Generic_IEnumerable_T__o *)ServantCommandIndividuality;
        goto LABEL_21;
      }
LABEL_23:
      sub_B170D4();
    }
    if ( BattleServantData__get_TreasureDevice(this, v17) )
    {
      TreasureDevice = BattleServantData__get_TreasureDevice(this, v18);
      if ( TreasureDevice && v12 )
      {
        individuality = (System_Collections_Generic_IEnumerable_T__o *)TreasureDevice->fields.individuality;
        v21 = (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_21:
        System_Collections_Generic_List_int___AddRange(v12, individuality, v21);
        goto LABEL_22;
      }
      goto LABEL_23;
    }
  }
LABEL_22:
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__EnumerateIndividuality(
                                                               this,
                                                               (System_Collections_Generic_IEnumerable_int__o *)v12,
                                                               v13);
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleServantData__getIndividualities_22775404(
        BattleServantData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_40F8ACD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, addIndiv);
    byte_40F8ACD = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__EnumerateIndividuality(
                                                              this,
                                                              (System_Collections_Generic_IEnumerable_int__o *)addIndiv,
                                                              method);
  return System_Linq_Enumerable__ToArray_int_(
           v5,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleServantData__getLevel(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.level;
}


System_String_o *__fastcall BattleServantData__getLevelLabel(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t level; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F8A4D & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23445, v3);
    byte_40F8A4D = 1;
  }
  level = this->fields.level;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &level);
  return System_String__Format((System_String_o *)StringLiteral_23445, v4, 0LL);
}


int32_t __fastcall BattleServantData__getLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_40F8A4F & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8A4F = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v6, 0LL);
}


int32_t __fastcall BattleServantData__getLimitImageIndex(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t SvtId; // w19
  const MethodInfo *v4; // x2
  int32_t DispLimitCount; // w20

  if ( (byte_40F8A53 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, method);
    byte_40F8A53 = 1;
  }
  SvtId = BattleServantData__getSvtId(this, method);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v4);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__GetLimitImageIndex(SvtId, DispLimitCount, 0, 0LL);
}


int32_t __fastcall BattleServantData__getMaxHp(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  BattleBuffData_CheckIndividualitiesData_o *v8; // x20
  BattleBuffData_o *buffData; // x0
  CrashReporter_o *Instance; // x0
  __int64 maxhp; // x21
  int32_t ActValue_31051136; // w0
  BattleBuffData_o *v13; // x8
  __int64 v14; // x8

  if ( (byte_40F8A7E & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_15652, v7);
    byte_40F8A7E = 1;
  }
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    && ((Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0LL
     || (CrashReporter__SendReport_28515572(Instance, (System_String_o *)StringLiteral_15652, 0LL, 0LL, 0LL),
         (buffData = this->fields.buffData) == 0LL))
    || (maxhp = this->fields.maxhp,
        ActValue_31051136 = BattleBuffData__getActValue_31051136(buffData, 52, v8, 0LL),
        (v13 = this->fields.buffData) == 0LL) )
  {
    sub_B170D4();
  }
  v14 = ActValue_31051136 * maxhp / 1000 + maxhp + BattleBuffData__getActValue_31051136(v13, 53, v8, 0LL);
  if ( v14 <= 1 )
    v14 = 1LL;
  if ( v14 >= 0x7FFFFFFF )
    return 0x7FFFFFFF;
  else
    return v14;
}


int32_t __fastcall BattleServantData__getMaxLevel(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.maxleve;
}


int32_t __fastcall BattleServantData__getMaxNextTDTurn(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.maxtpturn;
}


int32_t __fastcall BattleServantData__getMaxNp(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.lineMaxNp * this->fields.nplineCount;
}


int32_t __fastcall BattleServantData__getMotionId(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Hashtable_o *commandtable; // x21
  __int64 v7; // x0
  struct System_Collections_Hashtable_o *v8; // x20
  __int64 v9; // x0
  int32_t *v10; // x0
  __int64 v11; // x9
  BattleServantData_o *v13; // x0
  BattleCommandData_o *v14; // x1
  const MethodInfo *v15; // x2
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8A78 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, command);
    sub_B16FFC(&ServantCardEntity_TypeInfo, v5);
    byte_40F8A78 = 1;
  }
  if ( !command )
    goto LABEL_13;
  commandtable = this->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          v7,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return 40;
  v8 = this->fields.commandtable;
  v16 = BattleCommandData__get_type(command, 0LL);
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  if ( !v8
    || (v10 = (int32_t *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._29_get_Item.method)(
                           v8,
                           v9,
                           v8->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  v11 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)v10 + 300LL) >= (unsigned int)v11
    && *(ServantCardEntity_c **)(*(_QWORD *)(*(_QWORD *)v10 + 200LL) + 8 * v11 - 8) == ServantCardEntity_TypeInfo )
  {
    return v10[6];
  }
  v13 = (BattleServantData_o *)sub_B173C8(v10);
  return BattleServantData__getAttackType(v13, v14, v15);
}


int32_t __fastcall BattleServantData__getMultiTargetBattleDeadChangePos(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__getMultiTargetBattleDeadChangePos(deckSvt, 0LL);
  else
    return -1;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getNPSideEffect(
        BattleServantData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 73, checkIndividualities, 1, 0, 0LL);
}


int32_t __fastcall BattleServantData__getNPVal(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleUtility__FloorToInt((float)((float)this->fields.np / (float)this->fields.lineMaxNp) * 100.0, 0LL);
}


int32_t __fastcall BattleServantData__getNextTDTurn(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.nexttpturn;
}


int32_t __fastcall BattleServantData__getNotActTurn(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21
  _BOOL4 isTurnBuff; // w0
  BattleBuffData_o *v9; // x20
  int v10; // w22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleBuffData_CheckIndividualitiesData_o *v15; // x21

  if ( (byte_40F8AC5 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8AC5 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 39, v7, 0, 0LL),
        v9 = this->fields.buffData,
        v10 = isTurnBuff,
        v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v11,
                                                             v12,
                                                             v13,
                                                             v14),
        BattleBuffData_CheckIndividualitiesData___ctor(v15, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v9) )
  {
    sub_B170D4();
  }
  return BattleBuffData__getMaxTurnBuff(v9, 39, v15, v10 << 31 >> 31, 0LL);
}


int32_t __fastcall BattleServantData__getNowHp(BattleServantData_o *this, const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
           this,
           this->klass->vtable._10_set_hp.methodPtr);
}


int32_t __fastcall BattleServantData__getNp(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.np;
}


int32_t __fastcall BattleServantData__getNpChargeStage(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t NpPer; // w0

  NpPer = BattleServantData__getNpPer(this, method);
  if ( NpPer >= -99 )
    return NpPer / 100;
  else
    return 0;
}


int32_t __fastcall BattleServantData__getNpPer(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0
  int32_t result; // w0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B170D4();
  result = BattleDeckServantData__getNpCharge(deckSvt, 0LL);
  if ( result <= 0 )
    return this->fields.tmp_npper;
  return result;
}


int32_t __fastcall BattleServantData__getOriginCriticalRate(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.criticalRate;
}


System_String_o *__fastcall BattleServantData__getOverrideTDName(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B170D4();
  return BattleDeckServantData__getTDName(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDRuby(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B170D4();
  return BattleDeckServantData__getTDRuby(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDVoice(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B170D4();
  return BattleDeckServantData__getEnemyTreasureDeviceVoiceId(deckSvt, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleServantData__getPassiveSkills(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  BattleServantData___c_c *v12; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__305_0; // x20
  Il2CppObject *v15; // x21
  struct BattleServantData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_T__o *All; // x0

  if ( (byte_40F8A43 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, v6);
    sub_B16FFC(&Method_System_Predicate_BattleSkillInfoData___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleSkillInfoData__TypeInfo, v8);
    sub_B16FFC(&Method_BattleServantData___c__getPassiveSkills_b__305_0__, v9);
    sub_B16FFC(&BattleServantData___c_TypeInfo, v10);
    byte_40F8A43 = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  v12 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v12 = BattleServantData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__305_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__305_0;
  if ( !_9__305_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__305_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__305_0,
      v15,
      Method_BattleServantData___c__getPassiveSkills_b__305_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    v16 = BattleServantData___c_TypeInfo->static_fields;
    v16->__9__305_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__305_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__305_0,
      (System_Int32_array **)_9__305_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)skillInfoList,
                (System_Predicate_T__o *)_9__305_0,
                (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_B170D4();
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


int32_t __fastcall BattleServantData__getRarity(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B170D4();
  return svtlimitDispent->fields.rarity;
}


BattleBuffData_ShowBuffData_array *__fastcall BattleServantData__getRecBuffList(
        BattleServantData_o *this,
        bool isAtkSide,
        bool isShowOverwriteClassRelation,
        bool isShowDarkClassRelation,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getRectBuffList(
           buffData,
           isAtkSide,
           isShowOverwriteClassRelation,
           isShowDarkClassRelation,
           0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getReflectionEffect(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x20

  if ( (byte_40F8A69 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A69 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 65, v7, 1, 0, 0LL);
}


int32_t __fastcall BattleServantData__getRevengeTargetUniqueId(BattleServantData_o *this, const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v7; // w10
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v8; // x8
  unsigned int groupId; // w13
  int32_t v10; // w8

  if ( (byte_40F8AD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_40F8AD2 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_14;
  max_length = v3->max_length;
  v7 = max_length - 1;
  if ( (int)(max_length - 1) >= 0 )
  {
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        sub_B17100(v3, v4, v5);
        sub_B170A0();
      }
      v8 = v3->m_Items[v7];
      if ( !v8 )
        break;
      groupId = v8->fields.groupId;
      if ( groupId <= 7 && ((1 << groupId) & 0xDE) != 0 )
      {
        v10 = *(&v8->fields.groupId + 1);
        if ( v10 != this->fields.uniqueId )
          return v10;
      }
      if ( (--v7 & 0x80000000) != 0 )
        return -1;
    }
LABEL_14:
    sub_B170D4();
  }
  return -1;
}


int32_t __fastcall BattleServantData__getRevengeTargetUniqueIdFromOpponent(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v7; // w10
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v8; // x8
  unsigned int groupId; // w13
  int32_t v10; // w8

  if ( (byte_40F8AD3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_40F8AD3 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_14;
  max_length = v3->max_length;
  v7 = max_length - 1;
  if ( (int)(max_length - 1) >= 0 )
  {
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        sub_B17100(v3, v4, v5);
        sub_B170A0();
      }
      v8 = v3->m_Items[v7];
      if ( !v8 )
        break;
      groupId = v8->fields.groupId;
      if ( groupId <= 7 && ((1 << groupId) & 0xDE) != 0 )
      {
        if ( BYTE4(v8->fields.msgIds) )
        {
          v10 = *(&v8->fields.groupId + 1);
          if ( v10 != this->fields.uniqueId )
            return v10;
        }
      }
      if ( (--v7 & 0x80000000) != 0 )
        return -1;
    }
LABEL_14:
    sub_B170D4();
  }
  return -1;
}


int32_t __fastcall BattleServantData__getSameIndiualityBuffSum(
        BattleServantData_o *this,
        System_Int32_array *indv,
        bool isActiveOnly,
        bool IsIncludeIgnoreIndividuality,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getSameIndivualityBuffSum(
           buffData,
           indv,
           isActiveOnly,
           IsIncludeIgnoreIndividuality,
           isIgnoreIndivUnreleaseable,
           0LL);
}


int32_t __fastcall BattleServantData__getSameIndiualityServantSum(
        BattleServantData_o *this,
        System_Int32_array *checkIndvArray,
        const MethodInfo *method)
{
  System_Int32_array *Individualities; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned __int64 max_length; // x9
  int32_t v8; // w8
  unsigned __int64 v9; // x10
  signed int v10; // w12
  unsigned int v11; // w14

  Individualities = BattleServantData__getIndividualities(this, 0LL, method);
  if ( !Individualities )
    goto LABEL_18;
  max_length = Individualities->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v8 = 0;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
LABEL_17:
        sub_B17100(Individualities, v5, v6);
        sub_B170A0();
      }
      if ( !checkIndvArray )
        break;
      v10 = checkIndvArray->max_length;
      if ( v10 >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          if ( v11 >= v10 )
            goto LABEL_17;
          if ( Individualities->m_Items[v9 + 1] == checkIndvArray->m_Items[v11 + 1] )
            break;
          if ( (int)++v11 >= v10 )
            goto LABEL_13;
        }
        ++v8;
      }
LABEL_13:
      if ( (__int64)++v9 >= (int)max_length )
        return v8;
    }
LABEL_18:
    sub_B170D4();
  }
  return 0;
}


BattleServantData_SaveData_o *__fastcall BattleServantData__getSaveData(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  AiState_o *aiState; // x0
  System_Int32_array **SaveData; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  AiStateManager_o *AiStateManager; // x0
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleBuffData_o *buffData; // x0
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x8
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v45; // x8
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v59; // x23
  __int64 v60; // x24
  int size; // w8
  __int64 v62; // x8
  BattleSkillInfoData_o *v63; // x23
  __int64 v64; // x25
  __int64 InfoId; // x0
  __int64 v66; // x1
  __int64 v67; // x25
  System_Int32_array **statestring; // x1
  System_Int32_array **commandAssistIds; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7

  if ( (byte_40F8A2B & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v7);
    sub_B16FFC(&BattleServantData_SaveData_TypeInfo, v8);
    byte_40F8A2B = 1;
  }
  v9 = sub_B170CC(BattleServantData_SaveData_TypeInfo, method, v2, v3, v4);
  BattleServantData_SaveData___ctor((BattleServantData_SaveData_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_20;
  *(_DWORD *)(v9 + 16) = this->fields.index;
  *(_DWORD *)(v9 + 20) = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                           this,
                           this->klass->vtable._10_set_hp.methodPtr);
  *(_DWORD *)(v9 + 72) = this->fields.deckIndex;
  *(_DWORD *)(v9 + 24) = this->fields.np;
  *(_DWORD *)(v9 + 28) = this->fields.nexttpturn;
  *(_DWORD *)(v9 + 32) = this->fields.isEntry;
  *(_DWORD *)(v9 + 36) = this->fields.isDeadAnime;
  aiState = this->fields.aiState;
  if ( !aiState )
    goto LABEL_20;
  SaveData = (System_Int32_array **)AiState__getSaveData(aiState, 0LL);
  *(_QWORD *)(v9 + 56) = SaveData;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 56), SaveData, v12, v13, v14, v15, v16, v17);
  AiStateManager = BattleServantData__get_AiStateManager(this, v18);
  if ( !AiStateManager )
    goto LABEL_20;
  v20 = (System_Int32_array **)AiStateManager__GetSaveData(AiStateManager, 0LL);
  *(_QWORD *)(v9 + 192) = v20;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 192), v20, v21, v22, v23, v24, v25, v26);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_20;
  v28 = (System_Int32_array **)BattleBuffData__getSaveData(buffData, 0LL);
  *(_QWORD *)(v9 + 64) = v28;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 64), v28, v29, v30, v31, v32, v33, v34);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_20;
  v37 = (System_Int32_array **)sub_B17014(int___TypeInfo, (unsigned int)skillInfoList->fields._size, v35);
  *(_QWORD *)(v9 + 40) = v37;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 40), v37, v38, v39, v40, v41, v42, v43);
  v45 = this->fields.skillInfoList;
  if ( !v45
    || (v46 = (System_Int32_array **)sub_B17014(int___TypeInfo, (unsigned int)v45->fields._size, v44),
        *(_QWORD *)(v9 + 48) = v46,
        sub_B16F98((BattleServantConfConponent_o *)(v9 + 48), v46, v47, v48, v49, v50, v51, v52),
        (v59 = this->fields.skillInfoList) == 0LL) )
  {
LABEL_20:
    sub_B170D4();
  }
  v60 = 0LL;
  while ( 1 )
  {
    size = v59->fields._size;
    if ( (int)v60 >= size )
      break;
    if ( size <= (unsigned int)v60 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v62 = (__int64)v59->fields._items + 8 * v60;
    v63 = *(BattleSkillInfoData_o **)(v62 + 32);
    if ( v63 )
    {
      v64 = *(_QWORD *)(v9 + 40);
      InfoId = BattleSkillInfoData__getInfoId(*(BattleSkillInfoData_o **)(v62 + 32), 0LL);
      if ( v64 )
      {
        if ( (unsigned int)v60 >= *(_DWORD *)(v64 + 24) )
          goto LABEL_22;
        *(_DWORD *)(v64 + 4 * v60 + 32) = InfoId;
        v67 = *(_QWORD *)(v9 + 48);
        InfoId = BattleSkillInfoData__getChargeTurn(v63, 0LL);
        if ( v67 )
        {
          if ( (unsigned int)v60 >= *(_DWORD *)(v67 + 24) )
          {
LABEL_22:
            sub_B17100(InfoId, v66, v53);
            sub_B170A0();
          }
          *(_DWORD *)(v67 + 4 * v60 + 32) = InfoId;
          v59 = this->fields.skillInfoList;
          ++v60;
          if ( v59 )
            continue;
        }
      }
    }
    goto LABEL_20;
  }
  *(_DWORD *)(v9 + 116) = this->fields.shiftNpcId;
  *(_QWORD *)(v9 + 120) = this->fields.beforeUserSvtId;
  *(_DWORD *)(v9 + 76) = this->fields.transformIndex;
  *(_DWORD *)(v9 + 172) = this->fields.transformLimitCount;
  *(_DWORD *)(v9 + 80) = this->fields.dressDispId;
  *(_DWORD *)(v9 + 84) = this->fields.accumulationDamage;
  statestring = (System_Int32_array **)this->fields.statestring;
  *(_QWORD *)(v9 + 88) = statestring;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 88), statestring, v53, v54, v55, v56, v57, v58);
  *(_DWORD *)(v9 + 96) = this->fields.summonNpcId;
  *(_DWORD *)(v9 + 100) = this->fields.uniqueId;
  *(_DWORD *)(v9 + 104) = this->fields.shiftDeckIndex;
  *(_DWORD *)(v9 + 108) = this->fields.changeSvtIndex;
  *(_DWORD *)(v9 + 132) = this->fields.lowLimitShift;
  *(_BYTE *)(v9 + 112) = this->fields.isSleepWaitMode;
  *(_BYTE *)(v9 + 128) = this->fields.IsAlreadyDrop;
  *(_DWORD *)(v9 + 136) = this->fields.playedNPCount;
  *(_DWORD *)(v9 + 156) = this->fields.maxDefeatPoint;
  *(_DWORD *)(v9 + 140) = this->fields.defeatPoint;
  *(_DWORD *)(v9 + 144) = this->fields.befSquareIndex;
  *(_DWORD *)(v9 + 148) = this->fields.aftSquareIndex;
  *(_BYTE *)(v9 + 152) = this->fields.isAppliedHaveStars;
  *(_DWORD *)(v9 + 160) = this->fields.squareEffectSkillId;
  *(_DWORD *)(v9 + 164) = this->fields.squareEffectSkillLv;
  *(_DWORD *)(v9 + 168) = this->fields.deadtype;
  *(_DWORD *)(v9 + 200) = this->fields.tdErrorTouchCount;
  *(_BYTE *)(v9 + 204) = this->fields.flgEntryFunction;
  commandAssistIds = (System_Int32_array **)this->fields.commandAssistIds;
  *(_QWORD *)(v9 + 208) = commandAssistIds;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 208), commandAssistIds, v70, v71, v72, v73, v74, v75);
  return (BattleServantData_SaveData_o *)v9;
}


System_String_o *__fastcall BattleServantData__getSaveDataToString(BattleServantData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x19

  if ( (byte_40F8A2C & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, method);
    byte_40F8A2C = 1;
  }
  v3 = (Il2CppObject *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._16_getSaveData.method)(
                         this,
                         this->klass->vtable._17_setSaveData.methodPtr);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(v3, 0, 0, 0LL);
}


int32_t __fastcall BattleServantData__getScriptValue(
        BattleServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LODWORD(deckSvt) = BattleDeckServantData__getScript(deckSvt, key, 0, 0LL);
  return (int)deckSvt;
}


// local variable allocation has failed, the output may be wrong!
BattleSkillInfoData_o *__fastcall BattleServantData__getSelfSkillInfo(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantData___c__DisplayClass382_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F8A5A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Predicate_BattleSkillInfoData___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleSkillInfoData__TypeInfo, v8);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass382_0__getSelfSkillInfo_b__0__, v9);
    sub_B16FFC(&BattleServantData___c__DisplayClass382_0_TypeInfo, v10);
    byte_40F8A5A = 1;
  }
  v11 = (BattleServantData___c__DisplayClass382_0_o *)sub_B170CC(
                                                        BattleServantData___c__DisplayClass382_0_TypeInfo,
                                                        *(_QWORD *)&index,
                                                        method,
                                                        v3,
                                                        v4);
  BattleServantData___c__DisplayClass382_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_BattleServantData___c__DisplayClass382_0__getSelfSkillInfo_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B170D4();
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
                                    (System_Predicate_T__o *)v17,
                                    (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
}


System_Int32_array *__fastcall BattleServantData__getServantCommandIndividuality(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Hashtable_o *commandtable; // x21
  __int64 v8; // x0
  __int64 v9; // x2
  struct System_Collections_Hashtable_o *v10; // x20
  __int64 v11; // x0
  System_Int32_array **v12; // x0
  __int64 v13; // x9
  BattleServantData_o *v15; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8A7C & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, command);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&ServantCardEntity_TypeInfo, v6);
    byte_40F8A7C = 1;
  }
  if ( !command )
    goto LABEL_13;
  commandtable = this->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          v8,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v9);
  v10 = this->fields.commandtable;
  v17 = BattleCommandData__get_type(command, 0LL);
  v11 = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  if ( !v10
    || (v12 = (System_Int32_array **)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._29_get_Item.method)(
                                       v10,
                                       v11,
                                       v10->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  v13 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( LOBYTE((*v12)->m_Items[68]) >= (unsigned int)v13
    && *(ServantCardEntity_c **)(*(_QWORD *)&(*v12)->m_Items[43] + 8 * v13 - 8) == ServantCardEntity_TypeInfo )
  {
    return v12[10];
  }
  v15 = (BattleServantData_o *)sub_B173C8(v12);
  return (System_Int32_array *)BattleServantData__getNPVal(v15, v16);
}


System_String_o *__fastcall BattleServantData__getServantName(BattleServantData_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  ServantEntity_o *svtdata; // x20
  __int64 v5; // x19
  __int64 v6; // x21
  int32_t v7; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_40F8A4C & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8A4C = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.svtOverwriteName, 0LL) )
    return this->fields.svtOverwriteName;
  result = this->fields.svtName;
  if ( !result )
  {
    svtdata = this->fields.svtdata;
    v6 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v8, 0LL);
    if ( !svtdata )
      sub_B170D4();
    return ServantEntity__getName(svtdata, v7, -1, 0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantData__getServantOverwriteName(
        BattleServantData_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v14; // x20
  const MethodInfo *v15; // x2
  int32_t DispLimitCount; // w0
  __int64 v17; // x21
  __int64 v18; // x22
  int32_t v19; // w19
  int32_t v20; // w21
  int32_t LimitCountByDispLimit; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_40F8A37 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&OptionManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F8A37 = 1;
  }
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_22;
  if ( !deckSvt->fields.isFollowerSvt )
    return 0LL;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetSpoilerSetting(0LL) || Follower__IsNpc(this->fields.followerType, 0LL) )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      svtId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_B170D4();
  }
  v14 = Entity;
  if ( !ServantEntity__get_IsServant(Entity, 0LL) )
    return 0LL;
  DispLimitCount = BattleServantData__getDispLimitCount(this, 0, v15);
  v18 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
  v19 = DispLimitCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v23, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v19, v20, 0LL);
  return ServantEntity__getName(v14, LimitCountByDispLimit, -1, 0LL);
}


System_String_o *__fastcall BattleServantData__getServantShortName(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  System_String_o *result; // x0
  ServantEntity_o *svtdata; // x20
  int32_t battleVoice; // w21
  int32_t DispLimitCount; // w0

  if ( !System_String__IsNullOrEmpty(this->fields.svtOverwriteBattleName, 0LL) )
    return this->fields.svtOverwriteBattleName;
  result = this->fields.svtName;
  if ( !result )
  {
    svtdata = this->fields.svtdata;
    battleVoice = this->fields.battleVoice;
    DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v3);
    if ( !svtdata )
      sub_B170D4();
    return ServantEntity__getBattleName(svtdata, battleVoice != 0, DispLimitCount, 0LL);
  }
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getShortenUserEquipSkill(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  bool IsConstantMasterIndvAddBuffActive; // w0
  BattleBuffData_o *buffData; // x20
  bool v6; // w22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleBuffData_CheckIndividualitiesData_o *v11; // x0
  BattleBuffData_CheckIndividualitiesData_o *v12; // x21
  BattleServantData_o *v13; // x1

  if ( (byte_40F8A6E & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, method);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    byte_40F8A6E = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  buffData = this->fields.buffData;
  v6 = IsConstantMasterIndvAddBuffActive;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v7,
                                                       v8,
                                                       v9,
                                                       v10);
  v12 = v11;
  if ( v6 )
    v13 = this;
  else
    v13 = 0LL;
  BattleBuffData_CheckIndividualitiesData___ctor(v11, v13, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 85, v12, 1, 0, 0LL);
}


SkillLvEntity_o *__fastcall BattleServantData__getSkillFromBuff(
        SkillLvMaster_o *skillLvMst,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  SkillLvMaster_o *v4; // x20
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  struct System_Int32_array *vals; // x8

  v4 = skillLvMst;
  if ( (byte_40F8A71 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, buff);
    skillLvMst = (SkillLvMaster_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F8A71 = 1;
  }
  if ( !v4 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    skillLvMst = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v4 = skillLvMst;
  }
  if ( !buff )
    goto LABEL_11;
  vals = buff->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( vals->max_length < 2 )
  {
    sub_B17100(skillLvMst, buff, method);
    sub_B170A0();
  }
  if ( !v4 )
LABEL_11:
    sub_B170D4();
  return SkillLvMaster__GetEntity(v4, vals->m_Items[1], vals->m_Items[2], 0LL);
}


BattleSkillInfoData_o *__fastcall BattleServantData__getSkillInfoDataByAiActType(
        BattleServantData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v3; // w1

  if ( type > 39 )
  {
    if ( (unsigned int)(type - 40) < 2 )
      return BattleServantData__getTempSkillInfo(this, 0, method);
  }
  else
  {
    switch ( type )
    {
      case 11:
        v3 = 0;
        return BattleServantData__getSelfSkillInfo(this, v3, method);
      case 12:
        v3 = 1;
        return BattleServantData__getSelfSkillInfo(this, v3, method);
      case 13:
        v3 = 2;
        return BattleServantData__getSelfSkillInfo(this, v3, method);
    }
  }
  return 0LL;
}


System_Boolean_array *__fastcall BattleServantData__getSkillSealSelect(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  System_Boolean_array *v5; // x20
  _QWORD *BuffParamList; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  _QWORD *v10; // x21
  unsigned __int64 v11; // x22
  BattleBuffData_o *buffData; // x0
  unsigned __int64 v13; // x8
  unsigned int v14; // w10

  if ( (byte_40F8AC3 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, method);
    byte_40F8AC3 = 1;
  }
  v4 = sub_B17014(bool___TypeInfo, 3LL, v2);
  if ( !this->fields.buffData
    || (v5 = (System_Boolean_array *)v4,
        (BuffParamList = BattleBuffData__getBuffParamList(this->fields.buffData, 99, this, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  v9 = BuffParamList[3];
  v10 = BuffParamList;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
        goto LABEL_20;
      buffData = this->fields.buffData;
      if ( !buffData )
        goto LABEL_21;
      BuffParamList = BattleBuffData__getSkillSealSelectListFromValue(buffData, *((_DWORD *)v10 + v11 + 8), 0LL);
      if ( !BuffParamList )
        goto LABEL_21;
      if ( (int)BuffParamList[3] >= 1 )
        break;
LABEL_18:
      LODWORD(v9) = *((_DWORD *)v10 + 6);
      if ( (__int64)++v11 >= (int)v9 )
        return v5;
    }
    v13 = 0LL;
    v14 = BuffParamList[3];
    while ( v13 < v14 )
    {
      if ( *((_BYTE *)BuffParamList + v13 + 32) )
      {
        if ( !v5 )
          goto LABEL_21;
        if ( v13 >= v5->max_length )
          break;
        v5->m_Items[v13 + 4] = 1;
      }
      v14 = *((_DWORD *)BuffParamList + 6);
      if ( (__int64)++v13 >= (int)v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B17100(BuffParamList, v7, v8);
    sub_B170A0();
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getSkillSealSelectTurn(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  System_Int32_array *SkillSealSelectTurnList; // x0
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_40F8AC4 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&index);
    byte_40F8AC4 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&index,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData || (SkillSealSelectTurnList = BattleBuffData__getSkillSealSelectTurnList(buffData, v8, 0LL)) == 0LL )
    sub_B170D4();
  if ( SkillSealSelectTurnList->max_length <= index )
  {
    sub_B17100(SkillSealSelectTurnList, v10, v11);
    sub_B170A0();
  }
  return SkillSealSelectTurnList->m_Items[index + 1];
}


int32_t __fastcall BattleServantData__getSkillSealTurn(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21
  _BOOL4 isTurnBuff; // w0
  BattleBuffData_o *v9; // x20
  int v10; // w22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleBuffData_CheckIndividualitiesData_o *v15; // x21

  if ( (byte_40F8AC2 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8AC2 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 40, v7, 0, 0LL),
        v9 = this->fields.buffData,
        v10 = isTurnBuff,
        v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v11,
                                                             v12,
                                                             v13,
                                                             v14),
        BattleBuffData_CheckIndividualitiesData___ctor(v15, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v9) )
  {
    sub_B170D4();
  }
  return BattleBuffData__getMaxTurnBuff(v9, 40, v15, v10 << 31 >> 31, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getStartWaveBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x20

  if ( (byte_40F8A65 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A65 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 54, v7, 1, 0, 0LL);
}


System_String_o *__fastcall BattleServantData__getStateString(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.statestring;
}


int32_t __fastcall BattleServantData__getStepRate(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B170D4();
  return svtlimitDispent->fields.stepProbability;
}


System_String_o *__fastcall BattleServantData__getStrParam(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B170D4();
  return svtlimitDispent->fields.strParam;
}


int32_t __fastcall BattleServantData__getSummonNpcId(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B170D4();
  return BattleDeckServantData__getSummonNpcId(deckSvt, index, 0LL);
}


int32_t __fastcall BattleServantData__getSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_40F8A48 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8A48 = 1;
  }
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B170D4();
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getTTurnEndBufflist(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x20

  if ( (byte_40F8A64 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A64 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 55, v7, 1, 0, 0LL);
}


float __fastcall BattleServantData__getTdRate(BattleServantData_o *this, const MethodInfo *method)
{
  return (float)this->fields.downtdrate / 1000.0;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getTdTypeChangeBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x20

  if ( (byte_40F8A6D & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A6D = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getBuffList_31040328(buffData, 86, v7, 1, 0, 0LL);
}


BattleBuffData_BuffData_o *__fastcall BattleServantData__getTdTypeChangeBuffSingle(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  BattleBuffData_BuffData_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  int v13; // w9
  BattleBuffData_BuffData_o *v14; // x10

  if ( (byte_40F8A6F & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_BuffData_TypeInfo, method);
    byte_40F8A6F = 1;
  }
  v3 = BattleServantData__getTdTypeChangeBuff(this, method);
  v8 = (BattleBuffData_BuffData_o *)sub_B170CC(BattleBuffData_BuffData_TypeInfo, v4, v5, v6, v7);
  BattleBuffData_BuffData___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_16;
  v8->fields.addOrder = -1;
  if ( !v3 )
    goto LABEL_16;
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
      {
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      v14 = v3->m_Items[v13];
      if ( !v14 )
        break;
      ++v13;
      if ( v14->fields.addOrder > v8->fields.addOrder )
        v8 = v14;
      if ( v13 >= max_length )
        goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_12:
  if ( v8->fields.addOrder == -1 )
    return 0LL;
  else
    return v8;
}


// local variable allocation has failed, the output may be wrong!
BattleSkillInfoData_o *__fastcall BattleServantData__getTempSkillInfo(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantData___c__DisplayClass383_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F8A5B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Predicate_BattleSkillInfoData___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleSkillInfoData__TypeInfo, v8);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass383_0__getTempSkillInfo_b__0__, v9);
    sub_B16FFC(&BattleServantData___c__DisplayClass383_0_TypeInfo, v10);
    byte_40F8A5B = 1;
  }
  v11 = (BattleServantData___c__DisplayClass383_0_o *)sub_B170CC(
                                                        BattleServantData___c__DisplayClass383_0_TypeInfo,
                                                        *(_QWORD *)&index,
                                                        method,
                                                        v3,
                                                        v4);
  BattleServantData___c__DisplayClass383_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_BattleServantData___c__DisplayClass383_0__getTempSkillInfo_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B170D4();
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
                                    (System_Predicate_T__o *)v17,
                                    (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
}


int32_t __fastcall BattleServantData__getThisTurnActCount(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.actionCount;
}


int32_t __fastcall BattleServantData__getTreasureDvcCardId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantTreasureDvcEntity_o *SvtTDvc; // x0

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_B170D4();
  return SvtTDvc->fields.cardId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getTreasureDvcCardId_22698344(
        BattleServantData_o *this,
        bool useTDTypeChangedValue,
        const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0
  BattleBuffData_o *buffData; // x0
  BattleBuffData_o *v6; // x0
  BattleBuffData_BuffData_o *v7; // x0
  int32_t result; // w0
  struct ServantTreasureDvcEntity_o *SvtTDvc; // x8

  if ( !useTDTypeChangedValue )
    goto LABEL_10;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)useTDTypeChangedValue);
  if ( !TreasureDevice )
    goto LABEL_13;
  if ( TreasureDvcEntity__IsTDTypeChange(TreasureDevice, 0LL) )
  {
    buffData = this->fields.buffData;
    if ( !buffData )
      goto LABEL_13;
    if ( BattleBuffData__isTDTypeChange(buffData, this, 0LL) )
    {
      v6 = this->fields.buffData;
      if ( v6 )
      {
        v7 = BattleBuffData__getTDTypeChangeBuffData(v6, this, 0LL);
        if ( v7 )
          return v7->fields.param;
      }
LABEL_13:
      sub_B170D4();
    }
  }
  result = this->fields.selectedTDCardId;
  if ( result == -1 )
  {
LABEL_10:
    SvtTDvc = this->fields._SvtTDvc;
    if ( !SvtTDvc )
      goto LABEL_13;
    return SvtTDvc->fields.cardId;
  }
  return result;
}


System_Int32_array *__fastcall BattleServantData__getTreasureDvcHitRaito(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  ServantTreasureDvcEntity_o *SvtTDvc; // x0

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_B170D4();
  return SvtTDvc->fields.damage;
}


int32_t __fastcall BattleServantData__getTreasureDvcId(
        BattleServantData_o *this,
        bool useTDTypeChangedValue,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v5; // x1
  TreasureDvcEntity_o *TDvc; // x20
  int32_t LimitCount; // w0
  int32_t v8; // w21
  BattleBuffData_BuffData_o *v9; // x0
  int32_t result; // w0

  if ( !useTDTypeChangedValue )
    return this->fields.treasuredvcId;
  buffData = this->fields.buffData;
  if ( !buffData || !BattleBuffData__isTDTypeChange(buffData, this, 0LL) )
  {
    result = this->fields.selectedTDId;
    if ( result != -1 )
      return result;
    return this->fields.treasuredvcId;
  }
  TDvc = this->fields.TDvc;
  LimitCount = BattleServantData__getLimitCount(this, v5);
  if ( !this->fields.buffData
    || (v8 = LimitCount, (v9 = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL)) == 0LL)
    || !TDvc )
  {
    sub_B170D4();
  }
  return TreasureDvcEntity__getTDTypeChangeIdEachLimit(TDvc, v8, v9->fields.param, 0LL);
}


int32_t __fastcall BattleServantData__getTreasureDvcLevel(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.treasuredvcLevel;
}


int32_t __fastcall BattleServantData__getTreasureDvcMotionId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantTreasureDvcEntity_o *SvtTDvc; // x0

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_B170D4();
  return SvtTDvc->fields.motion;
}


System_String_o *__fastcall BattleServantData__getTreasureDvcName(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_String_o **p_name; // x8

  if ( (byte_40F8A5D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F8A5D = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_B170D4();
    p_name = &TreasureDevice->fields.name;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1;
  }
  return *p_name;
}


System_String_o *__fastcall BattleServantData__getTreasureDvcRuby(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_String_o **p_ruby; // x8

  if ( (byte_40F8A5E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F8A5E = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_B170D4();
    p_ruby = &TreasureDevice->fields.ruby;
  }
  else
  {
    p_ruby = (System_String_o **)&StringLiteral_1;
  }
  return *p_ruby;
}


int32_t __fastcall BattleServantData__getUniqueID(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.uniqueId;
}


float __fastcall BattleServantData__getUpDownAtk(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8A9A & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8A9A = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 3, v9, 0LL);
}


int32_t __fastcall BattleServantData__getUpDownCriticalRate(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        const MethodInfo *method)
{
  __int64 v9; // x1
  BattleBuffData_o *buffData; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleServantData_o *v15; // x24
  BattleBuffData_CheckIndividualitiesData_o *v16; // x22

  if ( (byte_40F8AA6 & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, command);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    byte_40F8AA6 = 1;
  }
  buffData = this->fields.buffData;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
    v15 = opSvt;
  else
    v15 = 0LL;
  v16 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12,
                                                       v13,
                                                       v14);
  BattleBuffData_CheckIndividualitiesData___ctor(v16, this, v15, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActValue_31051172(buffData, 46, missText, v16, 0LL);
}


float __fastcall BattleServantData__getUpDownDamageDropNp(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8AB2 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AB2 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 25, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantData__getUpDownDef(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        bool pierce,
        const MethodInfo *method)
{
  bool v9; // w0
  BattleBuffData_o *buffData; // x23
  bool v11; // w25
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  BattleBuffData_CheckIndividualitiesData_o *v16; // x24
  int32_t v17; // w1

  if ( (byte_40F8A9B & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8A9B = 1;
  }
  if ( !targetSvt
    || (v9 = BattleServantData__checkPierceDefence(targetSvt, command, this, (const MethodInfo *)pierce),
        buffData = this->fields.buffData,
        v11 = v9,
        v16 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v12,
                                                             v13,
                                                             v14,
                                                             v15),
        BattleBuffData_CheckIndividualitiesData___ctor(v16, this, targetSvt, 0LL, command, 0LL, 0LL),
        !buffData) )
  {
    sub_B170D4();
  }
  if ( v11 || pierce )
    v17 = 5;
  else
    v17 = 4;
  return BattleBuffData__getActMag_31052244(buffData, v17, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantData__getUpDownDropNp(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        bool isAttack,
        const MethodInfo *method)
{
  BattleCommandData_o *v7; // x23
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v10; // x22

  v7 = command;
  if ( (byte_40F8AB1 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AB1 = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    v7 = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt,
                                                       isAttack,
                                                       method);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, v7, v7, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 24, v10, 0LL);
}


float __fastcall BattleServantData__getUpDownGiveHeal(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22

  if ( (byte_40F8AA9 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_40F8AA9 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 56, v8, 0LL);
}


float __fastcall BattleServantData__getUpDownGiveNp(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8AB4 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AB4 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 67, v9, 0LL);
}


int32_t __fastcall BattleServantData__getUpDownGutsHp(
        BattleServantData_o *this,
        int32_t *digit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21

  if ( (byte_40F8AAA & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, digit);
    byte_40F8AAA = 1;
  }
  *digit = 1000;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      digit,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActValue_31051136(buffData, 70, v8, 0LL);
}


int32_t __fastcall BattleServantData__getUpDownHeal(
        BattleServantData_o *this,
        int32_t *digit,
        const MethodInfo *method)
{
  int v5; // w0
  const MethodInfo *v6; // x1
  int v7; // w20
  BattleBuffData_o *buffData; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  BattleBuffData_CheckIndividualitiesData_o *v13; // x21

  if ( (byte_40F8AA8 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, digit);
    byte_40F8AA8 = 1;
  }
  *digit = 1000;
  v5 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr,
         method);
  if ( v5 == 1 )
    v7 = 0;
  else
    v7 = v5;
  this->fields.wkHpRatio = (double)v7 / (double)BattleServantData__getMaxHp(this, v6);
  buffData = this->fields.buffData;
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v9,
                                                       v10,
                                                       v11,
                                                       v12);
  BattleBuffData_CheckIndividualitiesData___ctor(v13, this, 0LL, 0LL, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActValue_31051136(buffData, 34, v13, 0LL);
}


float __fastcall BattleServantData__getUpDownSpecialDef(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8A9C & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8A9C = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 6, v9, 0LL);
}


float __fastcall BattleServantData__getUpdownCriticalAtk(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BuffList_ActInfo_o *ActInfo; // x0
  BattleBuffData_o *buffData; // x22
  BuffList_ActInfo_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  BattleBuffData_CheckIndividualitiesData_o *v15; // x24

  if ( (byte_40F8A9F & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, command);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    byte_40F8A9F = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(11, targetSvt, 0LL);
  buffData = this->fields.buffData;
  v10 = ActInfo;
  v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12,
                                                       v13,
                                                       v14);
  BattleBuffData_CheckIndividualitiesData___ctor(v15, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052184(buffData, v10, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantData__getUpdownDropStar(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        bool isAttack,
        const MethodInfo *method)
{
  BattleCommandData_o *v7; // x23
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v10; // x22

  v7 = command;
  if ( (byte_40F8AA4 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AA4 = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    v7 = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt,
                                                       isAttack,
                                                       method);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, v7, v7, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 28, v10, 0LL);
}


float __fastcall BattleServantData__getUpdownNpAtk(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8AA2 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AA2 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 12, v9, 0LL);
}


float __fastcall BattleServantData__getUpdownPower(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x20
  BattleBuffData_o *buffData; // x0
  int32_t ActValue_31051136; // w0
  const MethodInfo *v11; // x4
  int32_t v12; // w22
  System_Int32_array **BuffIndividualities; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleBuffData_o *v20; // x0
  int32_t v21; // w23
  const MethodInfo *v22; // x4
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BattleBuffData_o *v30; // x0
  int32_t v31; // w0
  BattleBuffData_o *v32; // x8

  if ( (byte_40F8A9D & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8A9D = 1;
  }
  v8 = sub_B170CC(BattleBuffData_CheckIndividualitiesData_TypeInfo, command, targetSvt, method, v4);
  BattleBuffData_CheckIndividualitiesData___ctor(
    (BattleBuffData_CheckIndividualitiesData_o *)v8,
    this,
    targetSvt,
    command,
    0LL,
    0LL,
    0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_10;
  ActValue_31051136 = BattleBuffData__getActValue_31051136(
                        buffData,
                        7,
                        (BattleBuffData_CheckIndividualitiesData_o *)v8,
                        0LL);
  if ( !targetSvt )
    goto LABEL_10;
  v12 = ActValue_31051136;
  BuffIndividualities = (System_Int32_array **)BattleServantData__getBuffIndividualities(targetSvt, 0, 0, 0, v11);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 56) = BuffIndividualities;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 56), BuffIndividualities, v14, v15, v16, v17, v18, v19);
  v20 = this->fields.buffData;
  if ( !v20
    || (v21 = BattleBuffData__getActValue_31051136(v20, 8, (BattleBuffData_CheckIndividualitiesData_o *)v8, 0LL),
        v23 = (System_Int32_array **)BattleServantData__getBuffIndividualities(targetSvt, 1, 0, 0, v22),
        *(_QWORD *)(v8 + 56) = v23,
        sub_B16F98((BattleServantConfConponent_o *)(v8 + 56), v23, v24, v25, v26, v27, v28, v29),
        (v30 = this->fields.buffData) == 0LL)
    || (v31 = BattleBuffData__getActValue_31051136(v30, 9, (BattleBuffData_CheckIndividualitiesData_o *)v8, 0LL),
        (v32 = this->fields.buffData) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  return (float)(v21
               + v12
               + v31
               + BattleBuffData__getActValue_31051136(v32, 78, (BattleBuffData_CheckIndividualitiesData_o *)v8, 0LL))
       / 1000.0;
}


float __fastcall BattleServantData__getUpdownPowerSpecial(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  bool IsConstantMasterIndvAddBuffActive; // w23
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x21
  const MethodInfo *v14; // x4
  System_Int32_array *BuffIndividualities; // x1
  MethodInfo *v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array *Individualities_22775404; // x0
  BattleBuffData_o *buffData; // x0

  if ( (byte_40F8A9E & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, command);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    byte_40F8A9E = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v13 = sub_B170CC(BattleBuffData_CheckIndividualitiesData_TypeInfo, v9, v10, v11, v12);
  BattleBuffData_CheckIndividualitiesData___ctor(
    (BattleBuffData_CheckIndividualitiesData_o *)v13,
    this,
    targetSvt,
    command,
    0LL,
    0LL,
    0LL);
  if ( !targetSvt )
    goto LABEL_13;
  BuffIndividualities = BattleServantData__getBuffIndividualities(targetSvt, 0, 0, 0, v14);
  if ( IsConstantMasterIndvAddBuffActive )
  {
    Individualities_22775404 = BattleServantData__getIndividualities_22775404(targetSvt, BuffIndividualities, v16);
    if ( !v13 )
      goto LABEL_13;
    BuffIndividualities = Individualities_22775404;
  }
  else if ( !v13 )
  {
    goto LABEL_13;
  }
  *(_QWORD *)(v13 + 56) = BuffIndividualities;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 56),
    (System_Int32_array **)BuffIndividualities,
    (System_String_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  buffData = this->fields.buffData;
  if ( !buffData )
LABEL_13:
    sub_B170D4();
  return (float)BattleBuffData__getActValue_31051136(
                  buffData,
                  79,
                  (BattleBuffData_CheckIndividualitiesData_o *)v13,
                  0LL)
       / 1000.0;
}


float __fastcall BattleServantData__getUpdownSelfDamage(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23

  if ( (byte_40F8AA3 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8AA3 = 1;
  }
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt,
                                                      method,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__getActMag_31052244(buffData, 10, v9, 0LL);
}


int64_t __fastcall BattleServantData__getUserSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_40F8A47 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40F8A47 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleServantData__getWeaponColor(BattleServantData_o *this, const MethodInfo *method)
{
  ServantLimitEntity_o *svtlimitDispent; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B170D4();
  *(UnityEngine_Color_o *)&v3 = ServantLimitEntity__getWeaponColor(svtlimitDispent, 0LL);
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
  return result;
}


int32_t __fastcall BattleServantData__getWeaponGroup(
        BattleServantData_o *this,
        bool isEffect,
        const MethodInfo *method)
{
  ServantLimitAddEntity_o *svtlimitaddent; // x0
  int32_t WeaponEfect; // w20
  int32_t WeaponGroup; // w0
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitaddent = this->fields.svtlimitaddent;
  if ( !svtlimitaddent )
    goto LABEL_7;
  if ( isEffect )
  {
    WeaponEfect = ServantLimitAddEntity__GetWeaponEfect(svtlimitaddent, 0LL);
    if ( WeaponEfect != -1 )
      return WeaponEfect;
    svtlimitaddent = this->fields.svtlimitaddent;
    if ( !svtlimitaddent )
      goto LABEL_10;
  }
  WeaponGroup = ServantLimitAddEntity__GetWeaponGroup(svtlimitaddent, 0LL);
  if ( !this->fields.svtlimitaddent )
    goto LABEL_10;
  WeaponEfect = WeaponGroup;
  if ( !ServantLimitAddEntity__IsValidWeaponGroup(this->fields.svtlimitaddent, WeaponGroup, 0LL) )
  {
LABEL_7:
    svtlimitDispent = this->fields.svtlimitDispent;
    if ( svtlimitDispent )
      return svtlimitDispent->fields.weaponGroup;
LABEL_10:
    sub_B170D4();
  }
  return WeaponEfect;
}


System_Int32_array *__fastcall BattleServantData__getWeaponIndividualities(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantEntity_o *svtdata; // x8

  if ( (byte_40F8ACF & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F8ACF = 1;
  }
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v2);
  svtdata = this->fields.svtdata;
  if ( !svtdata || !result )
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v5, v6);
    sub_B170A0();
  }
  result->m_Items[1] = svtdata->fields.attackAttri;
  return result;
}


int32_t __fastcall BattleServantData__getWeaponScale(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B170D4();
  return svtlimitDispent->fields.weaponScale;
}


AiStateManager_o *__fastcall BattleServantData__get_AiStateManager(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AiStateManager_o *aiStateManager; // x20
  AiState_o *aiState; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8A1F & 1) == 0 )
  {
    sub_B16FFC(&AiStateManager_TypeInfo, method);
    byte_40F8A1F = 1;
  }
  aiStateManager = this->fields._aiStateManager;
  if ( !aiStateManager )
  {
    aiState = this->fields.aiState;
    aiStateManager = (AiStateManager_o *)sub_B170CC(AiStateManager_TypeInfo, method, v2, v3, v4);
    AiStateManager___ctor(aiStateManager, aiState, 0LL);
    this->fields._aiStateManager = aiStateManager;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._aiStateManager,
      (System_Int32_array **)aiStateManager,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return aiStateManager;
}


int32_t __fastcall BattleServantData__get_BattleSize(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B170D4();
  return svtdata->fields.battleSize;
}


BattleBuffData_o *__fastcall BattleServantData__get_BuffData(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleServantConfConponent_o *p_buffData; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8A25 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_TypeInfo, method);
    byte_40F8A25 = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
  {
    p_buffData = (BattleServantConfConponent_o *)&this->fields.buffData;
    buffData = (BattleBuffData_o *)sub_B170CC(BattleBuffData_TypeInfo, method, v2, v3, v4);
    BattleBuffData___ctor(buffData, 0LL);
    p_buffData->klass = (BattleServantConfConponent_c *)buffData;
    sub_B16F98(p_buffData, (System_Int32_array **)buffData, v8, v9, v10, v11, v12, v13);
  }
  return buffData;
}


int32_t __fastcall BattleServantData__get_CriticalIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleServantData_c *v3; // x0
  int32_t Value; // w0
  BattleServantData_c *v5; // x8
  int32_t v6; // w19

  if ( (byte_40F8ACA & 1) == 0 )
  {
    sub_B16FFC(&BattleServantData_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_3426, v2);
    byte_40F8ACA = 1;
  }
  v3 = BattleServantData_TypeInfo;
  if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
    v3 = BattleServantData_TypeInfo;
  }
  if ( !v3->static_fields->_CriticalIndividuality )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3426, 0LL);
    v5 = BattleServantData_TypeInfo;
    v6 = Value;
    if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
      v5 = BattleServantData_TypeInfo;
    }
    v5->static_fields->_CriticalIndividuality = v6;
    v3 = BattleServantData_TypeInfo;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = BattleServantData_TypeInfo;
  }
  return v3->static_fields->_CriticalIndividuality;
}


BattleDeckServantData_o *__fastcall BattleServantData__get_DeckSvt(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.deckSvt;
}


int32_t __fastcall BattleServantData__get_FixDeadType(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  int32_t *p_param; // x8

  if ( (byte_40F8A58 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A58 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData
    && (v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            method,
                                                            v2,
                                                            v3,
                                                            v4),
        BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        (FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 109, v7, 1, 0LL)) != 0LL) )
  {
    p_param = &FirstMatchCondBuff->fields.param;
  }
  else
  {
    p_param = &this->fields.deadtype;
  }
  return *p_param;
}


bool __fastcall BattleServantData__get_IsAiNpc(BattleServantData_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleServantData__get_IsBattleShift(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._IsBattleShift_k__BackingField;
}


bool __fastcall BattleServantData__get_IsChangeDropItemByShift(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._IsChangeDropItemByShift_k__BackingField;
}


bool __fastcall BattleServantData__get_IsNormalStatus(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.status == 0;
}


bool __fastcall BattleServantData__get_IsRaidTypeBoss(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.isRaid || this->fields.isSuperBoss;
}


bool __fastcall BattleServantData__get_IsSilentDead(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.isSilnetDead;
}


bool __fastcall BattleServantData__get_IsSuperBossUi(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  if ( this->fields.isSuperBoss )
    return 1;
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B170D4();
  return BattleDeckServantData__isSuperBossUi(deckSvt, 0LL);
}


ServantAssetArgs_o *__fastcall BattleServantData__get_LoadedAssetArgs(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields._LoadedAssetArgs_k__BackingField;
}


int32_t __fastcall BattleServantData__get_ShuffleSeed(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( BattleServantData__isAlive(this, 0, v2) )
    return this->fields._shuffuleSeed;
  else
    return this->fields._shuffuleSeed + 10000;
}


ServantEntity_o *__fastcall BattleServantData__get_SvtEnt(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.svtdata;
}


ServantLimitAddEntity_o *__fastcall BattleServantData__get_SvtLimitAddEnt(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields.svtlimitaddent;
}


ServantTreasureDvcEntity_o *__fastcall BattleServantData__get_SvtTDvc(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  TreasureDvcEntity_o *TDvc; // x0
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v5; // x1
  TreasureDvcEntity_o *TreasureDevice; // x20
  const MethodInfo *v7; // x1
  int32_t LimitCount; // w0
  int32_t v9; // w21
  BattleBuffData_BuffData_o *v10; // x0
  int32_t v11; // w0
  __int64 v12; // x20
  __int64 v13; // x21
  int32_t v14; // w19
  int32_t v15; // w0
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v17; // x0
  __int64 v18; // x20
  __int64 v19; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40F8A21 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F8A21 = 1;
  }
  TDvc = this->fields.TDvc;
  if ( TDvc )
  {
    if ( TreasureDvcEntity__IsTDTypeChange(TDvc, 0LL) )
    {
      buffData = this->fields.buffData;
      if ( buffData )
      {
        if ( BattleBuffData__isTDTypeChange(buffData, this, 0LL) )
        {
          TreasureDevice = BattleServantData__get_TreasureDevice(this, v5);
          LimitCount = BattleServantData__getLimitCount(this, v7);
          if ( !this->fields.buffData
            || (v9 = LimitCount, (v10 = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL)) == 0LL)
            || !TreasureDevice )
          {
            sub_B170D4();
          }
          v11 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(TreasureDevice, v9, v10->fields.param, 0LL);
          v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          v14 = v11;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v21.fields.currentCryptoKey = v13;
          *(_QWORD *)&v21.fields.fakeValue = v12;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v21, 0LL);
          selectedTDId = v14;
          return ServantTreasureDvcMaster__getEntityFromIDID(v15, selectedTDId, 0LL);
        }
      }
    }
    v17 = this->fields.TDvc;
    if ( v17 && TreasureDvcEntity__IsTDTypeChange(v17, 0LL) && this->fields.selectedTDId != -1 )
    {
      v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v22.fields.currentCryptoKey = v19;
      *(_QWORD *)&v22.fields.fakeValue = v18;
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
      selectedTDId = this->fields.selectedTDId;
      return ServantTreasureDvcMaster__getEntityFromIDID(v15, selectedTDId, 0LL);
    }
  }
  return this->fields._SvtTDvc;
}


TreasureDvcLvEntity_o *__fastcall BattleServantData__get_TDvcLv(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TDvc; // x0
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v5; // x1
  TreasureDvcEntity_o *TreasureDevice; // x20
  const MethodInfo *v7; // x1
  int32_t LimitCount; // w0
  int32_t v9; // w21
  BattleBuffData_BuffData_o *v10; // x0
  int32_t v11; // w20
  const MethodInfo *v12; // x1
  TreasureDvcLvMaster_o *TdLvDataMasterBase; // x0
  int32_t treasuredvcLevel; // w2
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v16; // x0
  const MethodInfo *v17; // x1

  TDvc = this->fields.TDvc;
  if ( TDvc )
  {
    if ( TreasureDvcEntity__IsTDTypeChange(TDvc, 0LL) )
    {
      buffData = this->fields.buffData;
      if ( buffData )
      {
        if ( BattleBuffData__isTDTypeChange(buffData, this, 0LL) )
        {
          TreasureDevice = BattleServantData__get_TreasureDevice(this, v5);
          LimitCount = BattleServantData__getLimitCount(this, v7);
          if ( this->fields.buffData )
          {
            v9 = LimitCount;
            v10 = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL);
            if ( v10 )
            {
              if ( TreasureDevice )
              {
                v11 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(TreasureDevice, v9, v10->fields.param, 0LL);
                TdLvDataMasterBase = BattleServantData__get_TdLvDataMasterBase(this, v12);
                if ( TdLvDataMasterBase )
                {
                  treasuredvcLevel = this->fields.treasuredvcLevel;
                  selectedTDId = v11;
                  return TreasureDvcLvMaster__GetEntity(TdLvDataMasterBase, selectedTDId, treasuredvcLevel, 0LL);
                }
              }
            }
          }
          goto LABEL_17;
        }
      }
    }
    v16 = this->fields.TDvc;
    if ( v16 && TreasureDvcEntity__IsTDTypeChange(v16, 0LL) && this->fields.selectedTDId != -1 )
    {
      TdLvDataMasterBase = BattleServantData__get_TdLvDataMasterBase(this, v17);
      if ( TdLvDataMasterBase )
      {
        treasuredvcLevel = this->fields.treasuredvcLevel;
        selectedTDId = this->fields.selectedTDId;
        return TreasureDvcLvMaster__GetEntity(TdLvDataMasterBase, selectedTDId, treasuredvcLevel, 0LL);
      }
LABEL_17:
      sub_B170D4();
    }
  }
  return this->fields._TDvcLv;
}


TreasureDvcMaster_o *__fastcall BattleServantData__get_TdDataMasterBase(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TreasureDvcMaster_o *result; // x0
  WebViewManager_o *Instance; // x0
  BattleServantConfConponent_o *p_tdDataMasterBase; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8A23 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F8A23 = 1;
  }
  result = this->fields.tdDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    p_tdDataMasterBase = (BattleServantConfConponent_o *)&this->fields.tdDataMasterBase;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    p_tdDataMasterBase->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B16F98(p_tdDataMasterBase, MasterData_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
    return (TreasureDvcMaster_o *)p_tdDataMasterBase->klass;
  }
  return result;
}


TreasureDvcLvMaster_o *__fastcall BattleServantData__get_TdLvDataMasterBase(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TreasureDvcLvMaster_o *result; // x0
  WebViewManager_o *Instance; // x0
  BattleServantConfConponent_o *p_tdLvDataMasterBase; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8A24 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F8A24 = 1;
  }
  result = this->fields.tdLvDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    p_tdLvDataMasterBase = (BattleServantConfConponent_o *)&this->fields.tdLvDataMasterBase;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    p_tdLvDataMasterBase->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B16F98(p_tdLvDataMasterBase, MasterData_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
    return (TreasureDvcLvMaster_o *)p_tdLvDataMasterBase->klass;
  }
  return result;
}


TreasureDvcEntity_o *__fastcall BattleServantData__get_TreasureDevice(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  TreasureDvcEntity_o *TDvc; // x0
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v5; // x1
  TreasureDvcEntity_o *v6; // x20
  int32_t LimitCount; // w0
  int32_t v8; // w21
  BattleBuffData_BuffData_o *v9; // x0
  int32_t v10; // w20
  const MethodInfo *v11; // x1
  TreasureDvcMaster_o *TdDataMasterBase; // x0
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v14; // x0

  if ( (byte_40F8A22 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, method);
    byte_40F8A22 = 1;
  }
  TDvc = this->fields.TDvc;
  if ( TDvc )
  {
    if ( TreasureDvcEntity__IsTDTypeChange(TDvc, 0LL) )
    {
      buffData = this->fields.buffData;
      if ( buffData )
      {
        if ( BattleBuffData__isTDTypeChange(buffData, this, 0LL) )
        {
          v6 = this->fields.TDvc;
          LimitCount = BattleServantData__getLimitCount(this, v5);
          if ( this->fields.buffData )
          {
            v8 = LimitCount;
            v9 = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL);
            if ( v9 )
            {
              if ( v6 )
              {
                v10 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(v6, v8, v9->fields.param, 0LL);
                TdDataMasterBase = BattleServantData__get_TdDataMasterBase(this, v11);
                if ( TdDataMasterBase )
                {
                  selectedTDId = v10;
                  return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)TdDataMasterBase,
                                                  selectedTDId,
                                                  (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
                }
              }
            }
          }
LABEL_18:
          sub_B170D4();
        }
      }
    }
    v14 = this->fields.TDvc;
    if ( v14 )
    {
      if ( TreasureDvcEntity__IsTDTypeChange(v14, 0LL) )
      {
        selectedTDId = this->fields.selectedTDId;
        if ( selectedTDId != -1 )
        {
          TdDataMasterBase = this->fields.tdDataMasterBase;
          if ( TdDataMasterBase )
            return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)TdDataMasterBase,
                                            selectedTDId,
                                            (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
          goto LABEL_18;
        }
      }
    }
  }
  return this->fields.TDvc;
}


int32_t __fastcall BattleServantData__get_TreasureDvcId(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.treasuredvcId;
}


int32_t __fastcall BattleServantData__get_TreasureDvcLevel(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.treasuredvcLevel;
}


System_Int32_array *__fastcall BattleServantData__get_classBoardSquareIds(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields._classBoardSquareIds_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall BattleServantData__get_commandCardLimitCount(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x0 OVERLAPPED
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  v2 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
  v3 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
  *(_QWORD *)&result.fields.fakeValue = v2;
  *(_QWORD *)&result.fields.currentCryptoKey = v3;
  return result;
}


System_Collections_Generic_List_CommandCodeInfo__o *__fastcall BattleServantData__get_commandCodeList(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields._commandCodeList_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall BattleServantData__get_dispLimitCount(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x0 OVERLAPPED
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  v2 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.fakeValue;
  v3 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
  *(_QWORD *)&result.fields.fakeValue = v2;
  *(_QWORD *)&result.fields.currentCryptoKey = v3;
  return result;
}


int32_t __fastcall BattleServantData__get_frameType(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._frameType_k__BackingField;
}


int32_t __fastcall BattleServantData__get_hp(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._hp_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __fastcall BattleServantData__get_iconLimitCount(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x0 OVERLAPPED
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o result; // 0:x0.16

  v2 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
  v3 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
  *(_QWORD *)&result.fields.fakeValue = v2;
  *(_QWORD *)&result.fields.currentCryptoKey = v3;
  return result;
}


int32_t __fastcall BattleServantData__get_imageSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._imageSvtId_k__BackingField;
}


bool __fastcall BattleServantData__get_isTransformed(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.transformIndex >= 0;
}


bool __fastcall BattleServantData__get_isTreasureDeveiceError(BattleServantData_o *this, const MethodInfo *method)
{
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.tdErrorStatusVoiceSeList, 0LL);
}


bool __fastcall BattleServantData__get_isWaitRepop(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.repopOrder != -1;
}


int32_t __fastcall BattleServantData__get_minActNum(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._minActNum_k__BackingField;
}


int32_t __fastcall BattleServantData__get_reducedhp(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._reducedhp_k__BackingField;
}


int32_t __fastcall BattleServantData__get_resultHp(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._resultHp_k__BackingField;
}


int32_t __fastcall BattleServantData__get_servantCollectionId(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields._servantCollectionId_k__BackingField;
}


float __fastcall BattleServantData__getheadUpY(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  if ( this->fields.appearanceId > 0 )
    return 0.0;
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B170D4();
  return ServantEntity__getHeadUpY(svtdata, 0LL);
}


bool __fastcall BattleServantData__hasTreasureDvc(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__get_TreasureDevice(this, method) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__healHp(
        BattleServantData_o *this,
        int32_t heal,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  int32_t MaxHp; // w21
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v19; // x23
  bool isTurnBuff; // w8
  bool result; // w0
  int v22; // w22
  int v23; // w0
  int v24; // w8
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A86 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&heal);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_17209, v12);
    byte_40F8A86 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  MaxHp = BattleServantData__getMaxHp(this, *(const MethodInfo **)&heal);
  if ( !isForce )
  {
    buffData = this->fields.buffData;
    v19 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v13,
                                                         v14,
                                                         v15,
                                                         v16);
    BattleBuffData_CheckIndividualitiesData___ctor(v19, this, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_20;
    isTurnBuff = BattleBuffData__isTurnBuff(buffData, 42, v19, 0, 0LL);
    result = 0;
    if ( isTurnBuff )
      return result;
  }
  v22 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  v23 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)(v23 + heal),
    this->klass->vtable._11_get_reducedhp.methodPtr);
  if ( MaxHp >= ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                  this,
                  this->klass->vtable._10_set_hp.methodPtr) )
    MaxHp = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
              this,
              this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v24 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  paramobjelist = this->fields.paramobjelist;
  this->fields.accumulationDamage = (this->fields.accumulationDamage + v22 - v24) & ~((this->fields.accumulationDamage
                                                                                     + v22
                                                                                     - v24) >> 31);
  if ( !paramobjelist )
LABEL_20:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17209,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return 1;
}


void __fastcall BattleServantData__initTacticalFaze(BattleServantData_o *this, const MethodInfo *method)
{
  this->fields.overkillTargetId = -1;
  BattleServantData__resetActionHistory(this, method);
  this->fields._IsBattleShift_k__BackingField = 0;
}


bool __fastcall BattleServantData__isAction(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x20

  if ( (byte_40F8A7F & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A7F = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return !BattleBuffData__isTurnBuff(buffData, 39, v7, 0, 0LL);
}


bool __fastcall BattleServantData__isAddNpGauge(BattleServantData_o *this, const MethodInfo *method)
{
  return Follower__isUseTreasure(this->fields.followerType, 0LL);
}


bool __fastcall BattleServantData__isAfterImage(BattleServantData_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleServantData__isAiTarget(
        BattleServantData_o *this,
        ConditionsInformation_CheckInfo_o *info,
        System_Int64_array *indiv,
        AiBaseEntity_o *aiBaseEnt,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x5
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  System_Int32_array *Individualities; // x0
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  resValues = 0LL;
  if ( !BattleServantData__isAlive(this, 0, (const MethodInfo *)indiv) && !BattleServantData__isGuts(this, v9) )
  {
    if ( !info )
      goto LABEL_16;
    if ( !info->fields.isRevival )
      return 0;
  }
  if ( !aiBaseEnt )
    goto LABEL_16;
  if ( AiBaseEntity__TryGetMultiIndividuality(aiBaseEnt, &resValues, 0LL) )
  {
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             this,
                                             0LL,
                                             0,
                                             0,
                                             0,
                                             v12);
    return Individuality__CheckSignedMultiIndividuality(ConcatServantAndBuffIndividualityies, resValues, 0LL);
  }
  if ( !info )
LABEL_16:
    sub_B170D4();
  if ( info->fields.isIndiv )
  {
    Individualities = BattleServantData__getIndividualities(this, 0LL, v11);
    return Individuality__CheckIndividualities_28893760(Individualities, indiv, 0LL);
  }
  else
  {
    return (info->fields.paramater & 0xFFFFFFFE) != 6 || BattleServantData__get_TreasureDevice(this, v10) != 0LL;
  }
}


bool __fastcall BattleServantData__isAlive(BattleServantData_o *this, bool isResurrectable, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  if ( this->fields.isSystemDead )
    return 0;
  if ( this->fields.isSystemAlive )
    return 1;
  if ( isResurrectable )
    return !this->fields.isDeadAnime;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr,
         method) > 0 )
    return 1;
  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    return 0;
  return this->fields.shiftDeckIndex < (signed int)shiftDeckList->max_length;
}


bool __fastcall BattleServantData__isAliveLogic(
        BattleServantData_o *this,
        bool isCheckDefeatPoint,
        const MethodInfo *method)
{
  bool result; // w0
  const MethodInfo *v6; // x1
  struct System_Int32_array *shiftDeckList; // x8
  const MethodInfo *v8; // x1

  result = 0;
  if ( !this->fields.isSystemDead )
  {
    if ( this->fields.isSystemAlive )
      return 1;
    if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_resultHp.method)(
           this,
           this->klass->vtable._14_set_resultHp.methodPtr,
           method) > 0 )
      return 1;
    shiftDeckList = this->fields.shiftDeckList;
    if ( shiftDeckList )
    {
      if ( this->fields.shiftDeckIndex < (signed int)shiftDeckList->max_length )
        return 1;
    }
    if ( BattleServantData__isGuts(this, v6) || isCheckDefeatPoint && BattleServantData__getDefeatPoint(this, v8) > 0 )
      return 1;
  }
  return result;
}


bool __fastcall BattleServantData__isAppearanceId(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.appearanceId > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__isBuffClassRelatioAtk(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        float *val,
        bool isAct,
        const MethodInfo *method)
{
  BattleBuffData_CheckIndividualitiesData_o *v11; // x21
  BattleBuffData_o *buffData; // x0
  bool ActBuff; // w0
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F8ABE & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8ABE = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt,
                                                       val,
                                                       isAct);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, command, 0LL, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  if ( isAct )
    ActBuff = BattleBuffData__getActBuff(buffData, 20, v11, &value, 0LL);
  else
    ActBuff = BattleBuffData__getTestActBuff(buffData, 20, v11, &value, 0LL);
  result = ActBuff;
  *val = (float)value / 1000.0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__isBuffClassRelatioDef(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        float *val,
        bool isAct,
        const MethodInfo *method)
{
  BattleBuffData_CheckIndividualitiesData_o *v11; // x21
  BattleBuffData_o *buffData; // x0
  bool ActBuff; // w0
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F8ABF & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_40F8ABF = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt,
                                                       val,
                                                       isAct);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  if ( isAct )
    ActBuff = BattleBuffData__getActBuff(buffData, 21, v11, &value, 0LL);
  else
    ActBuff = BattleBuffData__getTestActBuff(buffData, 21, v11, &value, 0LL);
  result = ActBuff;
  *val = (float)value / 1000.0;
  return result;
}


bool __fastcall BattleServantData__isCardTypeAction(
        BattleServantData_o *this,
        BattleCommandData_o *commandType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21

  if ( (byte_40F8A80 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, commandType);
    byte_40F8A80 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      commandType,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, commandType, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return !BattleBuffData__isTurnBuff(buffData, 77, v8, 0, 0LL);
}


bool __fastcall BattleServantData__isChangeAppearance(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_array *ActiveList; // x1
  const MethodInfo *v6; // x2

  if ( (this->fields.tmpAppearanceId & 0x80000000) == 0 )
    return 0;
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
  return BattleServantData__isChangeAppearanceBuff(this, ActiveList, v6);
}


bool __fastcall BattleServantData__isChangeAppearanceBuff(
        BattleServantData_o *this,
        BattleBuffData_BuffData_array *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  signed int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x21
  il2cpp_array_size_t v13; // w22
  Il2CppClass **v14; // x23
  BattleBuffData_BuffData_o *v15; // x0
  char *v16; // x23
  BattleBuffData_BuffData_o *v17; // t1
  int32_t v18; // w8
  BuffEntity_o *Entity; // x0
  int32_t AppearanceId; // w0

  if ( (byte_40F8AE3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, list);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F8AE3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !list )
    goto LABEL_21;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        goto LABEL_22;
      v14 = &list->obj.klass + (int)v13;
      v17 = (BattleBuffData_BuffData_o *)v14[4];
      v16 = (char *)(v14 + 4);
      v15 = v17;
      if ( !v17 )
        goto LABEL_21;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)BattleBuffData_BuffData__checkState(
                                                                          v15,
                                                                          256,
                                                                          0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
        break;
      max_length = list->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_11;
    }
    if ( v13 >= list->max_length )
    {
LABEL_22:
      sub_B17100(MasterData_WarQuestSelectionMaster, v9, v10);
      sub_B170A0();
    }
    if ( *(_QWORD *)v16 )
    {
      if ( v12 )
      {
        Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v12,
                                   *(_DWORD *)(*(_QWORD *)v16 + 16LL),
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( Entity )
        {
          AppearanceId = BuffEntity__getAppearanceId(Entity, 0LL);
          if ( AppearanceId == this->fields.appearanceId )
            return 0;
          this->fields.tmpAppearanceId = AppearanceId;
          return 1;
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_11:
  v18 = this->fields.appearanceId;
  if ( v18 >= 1 )
    this->fields.tmpAppearanceId = 0;
  return v18 > 0;
}


bool __fastcall BattleServantData__isChangeServant(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *changeSvtList; // x8

  changeSvtList = this->fields.changeSvtList;
  if ( !changeSvtList )
    sub_B170D4();
  return changeSvtList->max_length != 0;
}


bool __fastcall BattleServantData__isDead(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  if ( this->fields.isSystemAlive
    || ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr) > 0 )
  {
    return 0;
  }
  shiftDeckList = this->fields.shiftDeckList;
  return !shiftDeckList || this->fields.shiftDeckIndex >= (signed int)shiftDeckList->max_length;
}


bool __fastcall BattleServantData__isDeadAnimation(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.isDeadAnime;
}


bool __fastcall BattleServantData__isDeadEffect(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__get_FixDeadType(this, method) == 3;
}


bool __fastcall BattleServantData__isDeadEscape(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__get_FixDeadType(this, method) == 1;
}


bool __fastcall BattleServantData__isDeadStand(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__get_FixDeadType(this, method) == 2;
}


bool __fastcall BattleServantData__isDeadWait(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__get_FixDeadType(this, method) == 4;
}


bool __fastcall BattleServantData__isDeadWaitNotAlive(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  return BattleServantData__get_FixDeadType(this, method) == 4 && !BattleServantData__isAlive(this, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__isGainNp(BattleServantData_o *this, bool checkCount, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21

  if ( (byte_40F8AB3 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, checkCount);
    byte_40F8AB3 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      checkCount,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return !BattleBuffData__isTurnBuff(buffData, 75, v8, checkCount, 0LL);
}


bool __fastcall BattleServantData__isGuts(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-8h] BYREF

  buff = 0LL;
  if ( this->fields.isDeadAnime )
  {
    return 0;
  }
  else
  {
    buffData = this->fields.buffData;
    if ( !buffData )
      sub_B170D4();
    return BattleBuffData__isGuts(buffData, &buff, 0LL);
  }
}


bool __fastcall BattleServantData__isGuts_22760828(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o **buff,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleBuffData_o *buffData; // x0

  *buff = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)buff, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( this->fields.isDeadAnime )
    return 0;
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__isGuts(buffData, buff, 0LL);
}


bool __fastcall BattleServantData__isHeroine(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B170D4();
  return ServantEntity__checkIsHeroineSvt(svtdata, 0LL);
}


bool __fastcall BattleServantData__isJustHit(BattleServantData_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleServantData__isLogicDeadAndNoRevive(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
           this,
           this->klass->vtable._14_set_resultHp.methodPtr) <= 0
      && !BattleServantData__isGuts(this, v3);
}


bool __fastcall BattleServantData__isLogicResultAlive(BattleServantData_o *this, const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
           this,
           this->klass->vtable._14_set_resultHp.methodPtr) > 0;
}


bool __fastcall BattleServantData__isMultiTargetBattleStartPos(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__isMultiTargetBattleStartPos(deckSvt, 0LL);
  return (char)deckSvt;
}


bool __fastcall BattleServantData__isMultiTargetCore(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__isMultiTargetCore(deckSvt, 0LL);
  return (char)deckSvt;
}


bool __fastcall BattleServantData__isMultiTargetUnder(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__isMultiTargetUnder(deckSvt, 0LL);
  return (char)deckSvt;
}


bool __fastcall BattleServantData__isMultiTargetUp(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__isMultiTargetUp(deckSvt, 0LL);
  return (char)deckSvt;
}


bool __fastcall BattleServantData__isNameTrue(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B170D4();
  return ServantEntity__IsNameTrue(svtdata, 0LL);
}


bool __fastcall BattleServantData__isNobleAction(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t invokeAct; // [xsp+Ch] [xbp-4h] BYREF

  invokeAct = 0;
  return BattleServantData__isNobleAction_22765460(this, &invokeAct, v2);
}


bool __fastcall BattleServantData__isNobleAction_22765460(
        BattleServantData_o *this,
        int32_t *invokeAct,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool result; // w0
  int32_t v7; // w8

  *invokeAct = 0;
  if ( BattleServantData__isNobleSeal(this, (const MethodInfo *)invokeAct) )
  {
    result = 0;
    v7 = 41;
LABEL_5:
    *invokeAct = v7;
    return result;
  }
  if ( BattleServantData__isNobleConditionMismatch(this, v5) )
  {
    result = 0;
    v7 = 82;
    goto LABEL_5;
  }
  return *invokeAct == 0;
}


bool __fastcall BattleServantData__isNobleConditionMismatch(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleCommandData_o *TreasureDvcCommand; // x22
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  BattleBuffData_CheckIndividualitiesData_o *v9; // x21

  if ( (byte_40F8A82 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A82 = 1;
  }
  buffData = this->fields.buffData;
  TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, method);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      v5,
                                                      v6,
                                                      v7,
                                                      v8);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, TreasureDvcCommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__isTurnBuff(buffData, 82, v9, 0, 0LL);
}


bool __fastcall BattleServantData__isNobleSeal(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21

  if ( (byte_40F8A81 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_40F8A81 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__isTurnBuff(buffData, 41, v7, 0, 0LL);
}


bool __fastcall BattleServantData__isNormalDeadMotion(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  return BattleServantData__get_FixDeadType(this, method) != 1
      && BattleServantData__get_FixDeadType(this, v3) != 2
      && BattleServantData__get_FixDeadType(this, v4) != 4;
}


bool __fastcall BattleServantData__isOverKill(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.overkillTargetId != -1;
}


bool __fastcall BattleServantData__isShiftReady(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  return shiftDeckList
      && this->fields.shiftDeckIndex < (signed int)shiftDeckList->max_length
      && ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
           this,
           this->klass->vtable._10_set_hp.methodPtr) < 1;
}


bool __fastcall BattleServantData__isShiftServant(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B170D4();
  return shiftDeckList->max_length != 0;
}


bool __fastcall BattleServantData__isShiftableServant(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  return shiftDeckList && this->fields.shiftDeckIndex < (signed int)shiftDeckList->max_length;
}


bool __fastcall BattleServantData__isSphitBuff(BattleServantData_o *this, int32_t *effectId, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__isSphitBuff(buffData, effectId, 0LL);
}


bool __fastcall BattleServantData__isTDSeraled(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcLvEntity_o *TDvcLv; // x0
  struct System_Int32_array *funcId; // x8

  if ( !BattleServantData__get_TDvcLv(this, method) )
    return 1;
  TDvcLv = BattleServantData__get_TDvcLv(this, v3);
  if ( !TDvcLv || (funcId = TDvcLv->fields.funcId) == 0LL )
    sub_B170D4();
  return funcId->max_length == 0;
}


bool __fastcall BattleServantData__isTargetRarity(
        BattleServantData_o *this,
        System_Int32_array *targetRarityList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  struct ServantLimitEntity_o *svtlimitDispent; // x10
  int32_t rarity; // w10
  __int64 v6; // x9

  if ( !targetRarityList )
    return 0;
  v3 = *(_QWORD *)&targetRarityList->max_length;
  if ( !v3 )
    return 0;
  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B170D4();
  if ( (int)v3 < 1 )
    return 0;
  rarity = svtlimitDispent->fields.rarity;
  v6 = 0LL;
  while ( rarity != targetRarityList->m_Items[v6 + 1] )
  {
    if ( (int)++v6 >= (int)v3 )
      return 0;
  }
  return 1;
}


bool __fastcall BattleServantData__isUpHate(
        BattleServantData_o *this,
        System_Int32_array *opSvtIndiv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22

  if ( (byte_40F8A76 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvtIndiv);
    byte_40F8A76 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvtIndiv,
                                                      method,
                                                      v3,
                                                      v4);
  BattleBuffData_CheckIndividualitiesData___ctor_22056984(v8, this, 0LL, 0LL, opSvtIndiv, 0LL, 0LL);
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__checkActBuff_31056148(buffData, 45, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__isUseSelfSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantData___c__DisplayClass381_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20
  peRenderTexture_ChangeLayerObject_o *v18; // x0

  if ( (byte_40F8A59 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Predicate_BattleSkillInfoData___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleSkillInfoData__TypeInfo, v8);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass381_0__isUseSelfSkill_b__0__, v9);
    sub_B16FFC(&BattleServantData___c__DisplayClass381_0_TypeInfo, v10);
    byte_40F8A59 = 1;
  }
  v11 = (BattleServantData___c__DisplayClass381_0_o *)sub_B170CC(
                                                        BattleServantData___c__DisplayClass381_0_TypeInfo,
                                                        *(_QWORD *)&index,
                                                        method,
                                                        v3,
                                                        v4);
  BattleServantData___c__DisplayClass381_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_BattleServantData___c__DisplayClass381_0__isUseSelfSkill_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B170D4();
  }
  v18 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
  if ( v18 )
  {
    if ( BYTE4(v18->fields.renderer) )
      LOBYTE(v18) = 0;
    else
      LOBYTE(v18) = *((_BYTE *)&v18->fields.prevLayer + 4) != 0;
  }
  return (char)v18;
}


void __fastcall BattleServantData__loadTransformServant(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t transformIndex; // w2
  const MethodInfo *v6; // x1

  transformIndex = this->fields.transformIndex;
  if ( (transformIndex & 0x80000000) == 0 || (this->fields.shiftNpcId & 0x80000000) == 0 )
  {
    BattleServantData__setTransformServant(this, data, transformIndex, this->fields.transformLimitCount, 1, v3);
    BattleServantData__changeTransformServant(this, v6);
  }
}


void __fastcall BattleServantData__orderAppearanceId(BattleServantData_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.tmpAppearanceId = id;
}


bool __fastcall BattleServantData__playDead(BattleServantData_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    0LL,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  return 1;
}


void __fastcall BattleServantData__procAccumulationDamage(
        BattleServantData_o *this,
        int32_t before,
        int32_t after,
        const MethodInfo *method)
{
  this->fields.accumulationDamage = (this->fields.accumulationDamage + before - after) & ~((this->fields.accumulationDamage
                                                                                          + before
                                                                                          - after) >> 31);
}


bool __fastcall BattleServantData__provisionalDamage(
        BattleServantData_o *this,
        int32_t damage,
        const MethodInfo *method)
{
  int v5; // w0
  int v6; // w20

  v5 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._11_get_reducedhp.method)(
         this,
         this->klass->vtable._12_set_reducedhp.methodPtr,
         method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
    this,
    (unsigned int)(v5 + damage),
    this->klass->vtable._13_get_resultHp.methodPtr);
  v6 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._11_get_reducedhp.method)(
         this,
         this->klass->vtable._12_set_reducedhp.methodPtr);
  return v6 < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                this,
                this->klass->vtable._10_set_hp.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__provisionalHeal(BattleServantData_o *this, int32_t heal, const MethodInfo *method)
{
  int32_t MaxHp; // w21
  int v6; // w21
  int v7; // w0

  MaxHp = BattleServantData__getMaxHp(this, *(const MethodInfo **)&heal);
  v6 = MaxHp
     - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  v7 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._11_get_reducedhp.method)(
         this,
         this->klass->vtable._12_set_reducedhp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
    this,
    (unsigned int)(v7 - heal),
    this->klass->vtable._13_get_resultHp.methodPtr);
  if ( v6 < -((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._11_get_reducedhp.method)(
               this,
               this->klass->vtable._12_set_reducedhp.methodPtr) )
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
      this,
      (unsigned int)-v6,
      this->klass->vtable._13_get_resultHp.methodPtr);
}


void __fastcall BattleServantData__recordDeadTurn(BattleServantData_o *this, int32_t turn, const MethodInfo *method)
{
  this->fields.deadTurn = turn;
}


void __fastcall BattleServantData__recordUse(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  BattleBuffData__startBattleRec(buffData, 0LL);
}


void __fastcall BattleServantData__refreshActionBattle(BattleServantData_o *this, const MethodInfo *method)
{
  this->fields.reservationspecial = 0;
}


void __fastcall BattleServantData__resetAccumulationDamage(BattleServantData_o *this, const MethodInfo *method)
{
  this->fields.accumulationDamage = 0;
}


void __fastcall BattleServantData__resetActionCount(BattleServantData_o *this, const MethodInfo *method)
{
  this->fields.actionCount = 0;
}


void __fastcall BattleServantData__resetActionHistory(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_LinkedList_BattleServantActionHistory__o *actionHistory; // x0

  if ( (byte_40F8AD0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__, method);
    byte_40F8AD0 = 1;
  }
  actionHistory = this->fields.actionHistory;
  if ( !actionHistory )
    sub_B170D4();
  System_Collections_Generic_LinkedList_WebOperation___Clear(
    (System_Collections_Generic_LinkedList_WebOperation__o *)actionHistory,
    (const MethodInfo_23FD818 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__);
}


void __fastcall BattleServantData__resetParamObject(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0

  if ( (byte_40F8A74 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    byte_40F8A74 = 1;
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)paramobjelist,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall BattleServantData__resetReducedHp(BattleServantData_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
    this,
    0LL,
    this->klass->vtable._13_get_resultHp.methodPtr);
}


bool __fastcall BattleServantData__resultDamage(
        BattleServantData_o *this,
        int32_t damage,
        int32_t minHp,
        const MethodInfo *method)
{
  int v7; // w0

  v7 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, int32_t, const MethodInfo *))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr,
         minHp,
         method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    (unsigned int)(v7 - damage),
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) < minHp )
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
      this,
      (unsigned int)minHp,
      this->klass->vtable._15_get_IsAiNpc.methodPtr);
  return damage != 0;
}


bool __fastcall BattleServantData__resultHeal(BattleServantData_o *this, int32_t heal, const MethodInfo *method)
{
  int v5; // w0
  const MethodInfo *v6; // x1
  int32_t MaxHp; // w21
  const MethodInfo *v8; // x1
  unsigned int v9; // w0

  v5 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr,
         method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    (unsigned int)(v5 + heal),
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  MaxHp = BattleServantData__getMaxHp(this, v6);
  if ( MaxHp < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                 this,
                 this->klass->vtable._14_set_resultHp.methodPtr) )
  {
    v9 = BattleServantData__getMaxHp(this, v8);
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
      this,
      v9,
      this->klass->vtable._15_get_IsAiNpc.methodPtr);
  }
  return heal != 0;
}


void __fastcall BattleServantData__sendParamMessage(
        BattleServantData_o *this,
        System_String_o *funcName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x21
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A87 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, funcName);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F8A87 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        funcName,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__setActionHistory(
        BattleServantData_o *this,
        int32_t actUniqueId,
        int32_t actType,
        int32_t wavecount,
        bool isOpponent,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x24
  struct System_Collections_Generic_LinkedList_BattleServantActionHistory__o *actionHistory; // x0

  if ( (byte_40F8AD1 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantActionHistory_TypeInfo, *(_QWORD *)&actUniqueId);
    sub_B16FFC(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__, v11);
    byte_40F8AD1 = 1;
  }
  v12 = sub_B170CC(
          BattleServantActionHistory_TypeInfo,
          *(_QWORD *)&actUniqueId,
          *(_QWORD *)&actType,
          *(_QWORD *)&wavecount,
          isOpponent);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = actType;
  *(_DWORD *)(v12 + 20) = actUniqueId;
  *(_DWORD *)(v12 + 24) = wavecount;
  *(_BYTE *)(v12 + 28) = isOpponent;
  actionHistory = this->fields.actionHistory;
  if ( !actionHistory )
    sub_B170D4();
  System_Collections_Generic_LinkedList_WebOperation___AddLast(
    (System_Collections_Generic_LinkedList_WebOperation__o *)actionHistory,
    (System_Net_WebOperation_o *)v12,
    (const MethodInfo_23FD6D4 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__);
}


void __fastcall BattleServantData__setBaseServantData(
        BattleServantData_o *this,
        BattleDeckServantData_o *inDeckSvt,
        BattleEntity_o *battleEnt,
        int32_t infollowerType,
        System_Collections_Generic_List_commandAssistData__o *commandAssistDataList,
        bool isContinue,
        const MethodInfo *method)
{
  BattleInfoData_o *battleInfo; // x0
  BattleUserServantData_o *UserServantFromID; // x0
  const MethodInfo *v15; // [xsp+8h] [xbp-38h]

  if ( !battleEnt || !inDeckSvt || (battleInfo = battleEnt->fields.battleInfo) == 0LL )
    sub_B170D4();
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfo, inDeckSvt->fields.userSvtId, 0LL);
  BattleServantData__setBaseServantData_22721260(
    this,
    inDeckSvt,
    UserServantFromID,
    battleEnt->fields.battleInfo,
    battleEnt->fields.userCommandCode,
    battleEnt->fields.eventId,
    infollowerType,
    commandAssistDataList,
    isContinue,
    v15);
}


void __fastcall BattleServantData__setBaseServantData_22721260(
        BattleServantData_o *this,
        BattleDeckServantData_o *inDeckSvt,
        BattleUserServantData_o *userSvt,
        BattleInfoData_o *battleInfo,
        CommandCodeInfo_array *userCommandCode,
        int32_t eventId,
        int32_t infollowerType,
        System_Collections_Generic_List_commandAssistData__o *commandAssistDataList,
        bool isContinue,
        const MethodInfo *method)
{
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
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x26
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  BaseBattleServantEvent_o *ServantEvent; // x0
  struct BattleDeckServantData_o *v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x23
  __int128 v83; // q1
  int32_t exceedCount; // w23
  const MethodInfo *v85; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // kr00_16
  struct BattleDeckServantData_o *v87; // x8
  int32_t BattleSvtId; // w22
  System_Int32_array **v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct BattleDeckServantData_o *v102; // x8
  struct System_String_o *name; // x1
  int32_t v104; // w0
  const MethodInfo *v105; // x2
  struct System_String_o *ServantOverwriteName; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  struct BattleDeckServantData_o *v119; // x8
  struct DropInfo_array *dropInfos; // x1
  struct System_Int32_array *individuality; // x1
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  int32_t v130; // w0
  struct ServantEntity_o *v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  struct ServantEntity_o *svtdata; // x8
  WebViewManager_o *v139; // x0
  ServantLimitMaster_o *v140; // x22
  const MethodInfo *v141; // x1
  int32_t SvtId; // w24
  int32_t v143; // w0
  struct ServantLimitEntity_o *v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  WebViewManager_o *v151; // x0
  WarQuestSelectionMaster_o *v152; // x0
  struct ServantEntity_o *v153; // x8
  ServantLimitAddMaster_o *v154; // x23
  __int64 v155; // x24
  __int64 v156; // x26
  int32_t v157; // w26
  const MethodInfo *v158; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v160; // x1
  int32_t v161; // w26
  const MethodInfo *v162; // x2
  int32_t v163; // w0
  const MethodInfo *v164; // x1
  int32_t v165; // w0
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v168; // w1
  ServantLimitMaster_o *v169; // x0
  struct ServantLimitEntity_o *v170; // x0
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  BattleUserServantData_o *UserServantFromID; // x28
  __int64 v178; // x2
  System_Int64_array *BattleEquipTargetList; // x23
  struct BattleUserServantData_array *v180; // x0
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  __int64 EquipFromID; // x0
  __int64 v188; // x1
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  struct BattleUserServantData_array *equipList; // x20
  il2cpp_array_size_t *p_max_length; // x24
  unsigned __int64 v197; // x21
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **v203; // x26
  Il2CppClass **v204; // x0
  Il2CppClass **v205; // x8
  __int64 *v206; // x8
  Il2CppClass *v207; // x9
  Il2CppClass *v208; // t1
  __int64 v209; // x8
  int32_t maxhp; // w10
  int32_t equiphp; // w11
  struct System_Int64_array **p_userCommandCodeIds; // x23
  struct System_Int64_array *userCommandCodeIds; // x1
  __int64 v214; // x1
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  System_Int32_array **v221; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v222; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_commandCodeList_k__BackingField; // x28
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  __int64 v230; // x1
  System_String_array **v231; // x2
  System_String_array **v232; // x3
  System_Boolean_array **v233; // x4
  System_Int32_array **v234; // x5
  System_Int32_array *v235; // x6
  System_Int32_array *v236; // x7
  unsigned __int64 v237; // x20
  __int64 v238; // x26
  System_String_array **v239; // x3
  System_Boolean_array **v240; // x4
  System_Int32_array **v241; // x5
  System_Int32_array *v242; // x6
  System_Int32_array *v243; // x7
  System_Int32_array **v244; // x1
  System_Int64_array *v245; // x24
  __int64 v246; // x1
  __int64 v247; // x2
  __int64 v248; // x3
  __int64 v249; // x4
  System_Func_long__bool__o *v250; // x21
  struct System_Int32_array **p_commandAssistIds; // x25
  struct System_Int32_array *v252; // x0
  System_String_array **v253; // x2
  System_String_array **v254; // x3
  System_Boolean_array **v255; // x4
  System_Int32_array **v256; // x5
  System_Int32_array *v257; // x6
  System_Int32_array *v258; // x7
  __int64 v259; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v260; // x21
  System_Collections_Generic_List_T__o *All; // x0
  struct System_Int32_array *v262; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v263; // x23
  int v264; // w20
  unsigned __int64 v265; // x21
  _BOOL8 v266; // x0
  __int64 v267; // x1
  __int64 v268; // x2
  struct System_Int32_array *v269; // x9
  int v270; // w8
  struct System_Int32_array *commandCardParam; // x1
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  struct System_Int32_array *v278; // x1
  System_Int32_array **BattleSkillIdList; // x0
  System_String_array **v280; // x2
  System_String_array **v281; // x3
  System_Boolean_array **v282; // x4
  System_Int32_array **v283; // x5
  System_Int32_array *v284; // x6
  System_Int32_array *v285; // x7
  System_Int32_array **v286; // x0
  System_String_array **v287; // x2
  System_String_array **v288; // x3
  System_Boolean_array **v289; // x4
  System_Int32_array **v290; // x5
  System_Int32_array *v291; // x6
  System_Int32_array *v292; // x7
  __int64 v293; // x1
  __int64 v294; // x2
  __int64 v295; // x3
  __int64 v296; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v297; // x23
  __int64 v298; // x1
  __int64 v299; // x2
  __int64 v300; // x3
  __int64 v301; // x4
  System_Collections_Generic_IEnumerable_T__o *skillInfoList; // x21
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v303; // x0
  __int64 v304; // x1
  __int64 v305; // x2
  __int64 v306; // x3
  __int64 v307; // x4
  __int64 v308; // x24
  System_String_array **v309; // x2
  System_String_array **v310; // x3
  System_Boolean_array **v311; // x4
  System_Int32_array **v312; // x5
  System_Int32_array *v313; // x6
  System_Int32_array *v314; // x7
  __int64 v315; // x3
  __int64 v316; // x4
  __int64 v317; // x9
  int v318; // w8
  __int64 v319; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v320; // x25
  __int64 v321; // x9
  __int64 v322; // x8
  __int64 v323; // x9
  struct System_Int32_array *classPassive; // x20
  __int64 v325; // x8
  unsigned __int64 v326; // x23
  BattleUserServantData_o *v327; // x20
  __int64 v328; // x8
  __int64 v329; // x24
  unsigned __int64 v330; // x20
  const MethodInfo *v331; // x3
  __int64 v332; // x8
  __int64 v333; // x24
  unsigned __int64 v334; // x20
  unsigned __int64 v335; // x25
  struct BattleUserServantData_array *v336; // x8
  unsigned __int8 v337; // w22
  unsigned __int64 v338; // x20
  int v339; // w23
  unsigned __int64 max_length; // x9
  struct BattleUserServantData_array *v341; // x8
  __int64 v342; // x24
  BattleUserServantData_o *v343; // x0
  __int64 v344; // x8
  __int64 v345; // x25
  unsigned __int64 v346; // x26
  int v347; // w21
  int v348; // w27
  __int64 v349; // x23
  WebViewManager_o *v350; // x0
  WarQuestSelectionMaster_o *v351; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v352; // x23
  CommandCodeSkillMaster_o *v353; // x22
  unsigned __int64 v354; // x20
  int v355; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v356; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v357; // x8
  int v358; // w8
  __int64 v359; // x23
  int i; // w25
  __int64 v361; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v362; // x26
  int32_t v363; // w24
  EventMissionProgressRequest_Argument_ProgressData_o *v364; // x8
  const MethodInfo *v365; // x3
  int32_t Value; // w0
  int32_t nplineCount; // w8
  int v368; // w8
  System_Collections_Generic_IEnumerable_TSource__o *TDErrorVoiceSeArray; // x0
  System_String_array **v370; // x2
  System_String_array **v371; // x3
  System_Boolean_array **v372; // x4
  System_Int32_array **v373; // x5
  System_Int32_array *v374; // x6
  System_Int32_array *v375; // x7
  struct System_Collections_Generic_List_string__o *v376; // x1
  __int64 v377; // x1
  __int64 v378; // x2
  __int64 v379; // x3
  __int64 v380; // x4
  System_Collections_Hashtable_o *v381; // x21
  System_String_array **v382; // x2
  System_String_array **v383; // x3
  System_Boolean_array **v384; // x4
  System_Int32_array **v385; // x5
  System_Int32_array *v386; // x6
  System_Int32_array *v387; // x7
  WebViewManager_o *v388; // x0
  ServantCardMaster_o *v389; // x23
  __int64 v390; // x2
  __int64 v391; // x24
  unsigned __int64 v392; // x20
  __int64 v393; // x25
  __int64 v394; // x26
  struct System_Collections_Hashtable_o *commandtable; // x25
  __int64 v396; // x0
  __int64 v397; // x27
  __int64 v398; // x28
  __int64 v399; // x26
  int32_t v400; // w0
  ServantCardEntity_o *v401; // x0
  int32_t DefaultDeadType; // w0
  BattleDeckServantData_o *v403; // x8
  BattleUserServantData_o *v404; // x20
  int32_t KillType; // w0
  bool isAppear; // w0
  BattleDeckServantData_o *v407; // x8
  bool isRaid; // w0
  int32_t RaidId; // w0
  struct System_String_o *StartRaidState; // x0
  System_String_array **v411; // x2
  System_String_array **v412; // x3
  System_Boolean_array **v413; // x4
  System_Int32_array **v414; // x5
  System_Int32_array *v415; // x6
  System_Int32_array *v416; // x7
  bool isAddition; // w0
  BattleDeckServantData_o *v418; // x8
  bool isLeader; // w0
  BattleDeckServantData_o *v420; // x8
  bool isSuperBoss; // w0
  int32_t SuperBossId; // w0
  bool isSendDamageForSuperBossId; // w0
  BattleDeckServantData_o *v424; // x21
  __int64 v425; // x22
  __int64 v426; // x23
  int32_t v427; // w0
  __int64 v428; // x21
  __int64 v429; // x22
  __int64 v430; // x21
  __int64 v431; // x22
  int32_t v432; // w0
  const MethodInfo *v433; // x2
  struct System_String_o *BattleServantOverwriteName; // x0
  System_String_array **v435; // x2
  System_String_array **v436; // x3
  System_Boolean_array **v437; // x4
  System_Int32_array **v438; // x5
  System_Int32_array *v439; // x6
  System_Int32_array *v440; // x7
  BattleDeckServantData_o *v441; // x0
  int32_t Scale; // w0
  struct BattleDeckServantData_o *v443; // x8
  AiState_o *aiState; // x0
  int32_t v445; // w21
  WebViewManager_o *v446; // x0
  WarQuestSelectionMaster_o *v447; // x0
  ServantChangeMaster_o *v448; // x22
  int32_t v449; // w0
  ServantChangeEntity_o *v450; // x0
  WebViewManager_o *v451; // x0
  UserServantCollectionMaster_o *v452; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  UserServantCollectionEntity_o *v455; // x21
  __int64 v456; // x22
  __int64 v457; // x23
  int32_t v458; // w0
  System_String_array **v459; // x2
  System_String_array **v460; // x3
  System_Boolean_array **v461; // x4
  System_Int32_array **v462; // x5
  System_Int32_array *v463; // x6
  System_Int32_array *v464; // x7
  struct BattleDeckServantData_o *v465; // x8
  int32_t v466; // w22
  int32_t svtCommonFlag; // w23
  WebViewManager_o *v468; // x0
  WarQuestSelectionMaster_o *v469; // x0
  __int64 v470; // x23
  __int64 v471; // x24
  UserNpcSvtRecordMaster_o *v472; // x22
  int32_t v473; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v474; // x0
  struct System_Int32_array *tdPlayed; // x1
  struct System_Int32_array *v476; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v477; // x0
  struct System_Int32_array **p_tdplayed; // x0
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  System_String_array **v480; // x2
  System_String_array **v481; // x3
  System_Boolean_array **v482; // x4
  System_Int32_array **v483; // x5
  System_Int32_array *v484; // x6
  System_Int32_array *v485; // x7
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  System_String_array **v487; // x2
  System_String_array **v488; // x3
  System_Boolean_array **v489; // x4
  System_Int32_array **v490; // x5
  System_Int32_array *v491; // x6
  System_Int32_array *v492; // x7
  struct System_Int32_array *classBoardSquareIds; // x1
  System_String_array **v494; // x2
  System_String_array **v495; // x3
  System_Boolean_array **v496; // x4
  System_Int32_array **v497; // x5
  System_Int32_array *v498; // x6
  System_Int32_array *v499; // x7
  const MethodInfo *v500; // x1
  const MethodInfo *v501; // [xsp+0h] [xbp-140h]
  int32_t eventIda; // [xsp+1Ch] [xbp-124h]
  BattleUserServantData_o *v504; // [xsp+28h] [xbp-118h]
  BattleDeckServantData_o **p_deckSvt; // [xsp+38h] [xbp-108h]
  BaseBattleServantEvent_o *v507; // [xsp+40h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtdata; // [xsp+48h] [xbp-F8h]
  BattleUserServantData_o *v510; // [xsp+58h] [xbp-E8h]
  Il2CppObject *object; // [xsp+60h] [xbp-E0h]
  unsigned __int8 objecta; // [xsp+60h] [xbp-E0h]
  struct BattleUserServantData_array **p_equipList; // [xsp+68h] [xbp-D8h]
  _DWORD v514[9]; // [xsp+90h] [xbp-B0h] BYREF
  int v515; // [xsp+B4h] [xbp-8Ch]
  ServantCardEntity_o *entity; // [xsp+B8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v517; // [xsp+C0h] [xbp-80h] BYREF
  int32_t skillIndex[3]; // [xsp+E4h] [xbp-5Ch] BYREF
  System_RuntimeFieldHandle_o v519; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v520; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v521; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v522; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v523; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v524; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v525; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v526; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v527; // 0:x0.16

  if ( (byte_40F8A35 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_long___, inDeckSvt);
    sub_B16FFC(&BattleData_TypeInfo, v15);
    sub_B16FFC(&BattleUserServantData___TypeInfo, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCardMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_B16FFC(&Method_System_Linq_Enumerable_Concat_int___, v26);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v27);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_string___, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__get_Current__, v31);
    sub_B16FFC(&Method_System_Func_long__bool___ctor__, v32);
    sub_B16FFC(&System_Func_long__bool__TypeInfo, v33);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v34);
    sub_B16FFC(&int___TypeInfo, v35);
    sub_B16FFC(&int_TypeInfo, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeInfo__Add__, v37);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v38);
    sub_B16FFC(&Method_System_Collections_Generic_List_commandAssistData__FindAll__, v39);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, v40);
    sub_B16FFC(&Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__, v41);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v42);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeInfo___ctor__, v43);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___66726936, v44);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Count__, v45);
    sub_B16FFC(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__, v46);
    sub_B16FFC(&System_Collections_Generic_List_CommandCodeInfo__TypeInfo, v47);
    sub_B16FFC(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v48);
    sub_B16FFC(&NetworkManager_TypeInfo, v49);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v51);
    sub_B16FFC(&Method_System_Predicate_commandAssistData___ctor__, v52);
    sub_B16FFC(&Method_System_Predicate_BattleSkillInfoData___ctor__, v53);
    sub_B16FFC(&System_Predicate_commandAssistData__TypeInfo, v54);
    sub_B16FFC(&System_Predicate_BattleSkillInfoData__TypeInfo, v55);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A,
      v57);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass288_0__setBaseServantData_b__1__, v58);
    sub_B16FFC(&BattleServantData___c__DisplayClass288_0_TypeInfo, v59);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass288_1__setBaseServantData_b__0__, v60);
    sub_B16FFC(&BattleServantData___c__DisplayClass288_1_TypeInfo, v61);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass288_2__setBaseServantData_b__2__, v62);
    sub_B16FFC(&BattleServantData___c__DisplayClass288_2_TypeInfo, v63);
    sub_B16FFC(&StringLiteral_1, v64);
    sub_B16FFC(&StringLiteral_6512, v65);
    byte_40F8A35 = 1;
  }
  skillIndex[0] = 0;
  memset(&v517, 0, sizeof(v517));
  entity = 0LL;
  v515 = 0;
  v66 = sub_B170CC(BattleServantData___c__DisplayClass288_0_TypeInfo, inDeckSvt, userSvt, battleInfo, userCommandCode);
  BattleServantData___c__DisplayClass288_0___ctor((BattleServantData___c__DisplayClass288_0_o *)v66, 0LL);
  if ( !v66 )
    goto LABEL_295;
  *(_QWORD *)(v66 + 16) = inDeckSvt;
  sub_B16F98((BattleServantConfConponent_o *)(v66 + 16), (System_Int32_array **)inDeckSvt, v67, v68, v69, v70, v71, v72);
  if ( !battleInfo )
    goto LABEL_295;
  ServantEvent = BattleInfoData__GetServantEvent(battleInfo, 0LL);
  v74 = *(struct BattleDeckServantData_o **)(v66 + 16);
  v507 = ServantEvent;
  p_deckSvt = &this->fields.deckSvt;
  this->fields.deckSvt = v74;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.deckSvt,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_295;
  this->fields.index = deckSvt->fields.id - 1;
  this->fields.uniqueId = deckSvt->fields.uniqueId;
  userSvtId = deckSvt->fields.userSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(
    (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v514,
    userSvtId,
    0LL);
  v83 = *(_OWORD *)&v514[4];
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)v514;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = v83;
  if ( !userSvt )
    goto LABEL_295;
  exceedCount = userSvt->fields.exceedCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(exceedCount, 0LL);
  v87 = this->fields.deckSvt;
  this->fields.exceedCount = v86;
  if ( !v87 )
    goto LABEL_295;
  if ( v87->fields.isFollowerSvt )
    this->fields.followerType = Follower__getType(infollowerType, 0LL);
  BattleServantData__CalculateLimitCountWithSpoilerProtection(this, userSvt, v85);
  this->fields._frameType_k__BackingField = UserServantEntity__getFrameType((UserServantEntity_o *)userSvt, 0LL);
  this->fields.npcSvtClassId = userSvt->fields.npcSvtClassId;
  this->fields.level = userSvt->fields.lv;
  this->fields.maxleve = UserServantEntity__getLevelMax((UserServantEntity_o *)userSvt, 0LL);
  this->fields.atk = userSvt->fields.atk;
  this->fields.maxhp = userSvt->fields.hp;
  BattleSvtId = BattleUserServantData__getBattleSvtId(userSvt, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(BattleSvtId, 0LL);
  this->fields.maxtpturn = userSvt->fields.chargeTurn;
  this->fields.downstarrate = userSvt->fields.starRate;
  this->fields.downtdrate = userSvt->fields.tdRate;
  this->fields.deathRate = userSvt->fields.deathRate;
  this->fields.criticalRate = userSvt->fields.criticalRate;
  this->fields._imageSvtId_k__BackingField = userSvt->fields.imageSvtId;
  v89 = (System_Int32_array **)StringLiteral_1;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.statestring, v89, v90, v91, v92, v93, v94, v95);
  v102 = this->fields.deckSvt;
  this->fields.atktdrate = userSvt->fields.tdAttackRate;
  if ( !v102 )
    goto LABEL_295;
  name = v102->fields.name;
  this->fields.svtName = name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtName,
    (System_Int32_array **)name,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields.overkillTargetId = -1;
  v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvt->fields.svtId, 0LL);
  ServantOverwriteName = BattleServantData__getServantOverwriteName(this, v104, v105);
  this->fields.svtOverwriteName = ServantOverwriteName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtOverwriteName,
    (System_Int32_array **)ServantOverwriteName,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  this->fields.displayType = userSvt->fields.displayType;
  v119 = this->fields.deckSvt;
  this->fields.npcSvtType = userSvt->fields.npcSvtType;
  if ( !v119 )
    goto LABEL_295;
  dropInfos = v119->fields.dropInfos;
  this->fields.droplist = dropInfos;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.droplist,
    (System_Int32_array **)dropInfos,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  individuality = userSvt->fields.individuality;
  this->fields.svtIndividuality = individuality;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtIndividuality,
    (System_Int32_array **)individuality,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  this->fields.flgEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)userSvt, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v130 = BattleUserServantData__getBattleSvtId(userSvt, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_295;
  v131 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     v130,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = v131;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtdata,
    (System_Int32_array **)v131,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  svtdata = this->fields.svtdata;
  p_svtdata = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_295;
  this->fields.svtType = svtdata->fields.type;
  v139 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v139 )
    goto LABEL_295;
  v140 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v139,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v141);
  v143 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(this->fields.limitcount, 0LL);
  if ( !v140 )
    goto LABEL_295;
  if ( !ServantLimitMaster__TryGetEntity(v140, &this->fields.svtlimitent, SvtId, v143, 0LL) )
  {
    v144 = ServantLimitMaster__GetEntity(v140, 100100, 0, 0LL);
    this->fields.svtlimitent = v144;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.svtlimitent,
      (System_Int32_array **)v144,
      v145,
      v146,
      v147,
      v148,
      v149,
      v150);
  }
  v151 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v151 )
    goto LABEL_295;
  object = (Il2CppObject *)v66;
  v152 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v151,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v153 = this->fields.svtdata;
  if ( !v153 )
    goto LABEL_295;
  v154 = (ServantLimitAddMaster_o *)v152;
  v156 = *(_QWORD *)&v153->fields.id.fields.currentCryptoKey;
  v155 = *(_QWORD *)&v153->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v520.fields.currentCryptoKey = v156;
  *(_QWORD *)&v520.fields.fakeValue = v155;
  v157 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v520, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v158);
  if ( !v154 )
    goto LABEL_295;
  ServantLimitAddMaster__TryGetEntity(v154, &this->fields.svtlimitaddent, v157, DispLimitCount, 0LL);
  v161 = BattleServantData__getSvtId(this, v160);
  v163 = BattleServantData__getDispLimitCount(this, 1, v162);
  if ( !ServantLimitMaster__TryGetEntity(v140, &this->fields.svtlimitDispent, v161, v163, 0LL) )
  {
    if ( this->fields.svtlimitaddent )
    {
      v165 = BattleServantData__getSvtId(this, v164);
      svtlimitaddent = this->fields.svtlimitaddent;
      if ( !svtlimitaddent )
        goto LABEL_295;
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v168 = v165;
      v169 = v140;
    }
    else
    {
      v168 = 100100;
      v169 = v140;
      battleCharaLimitCount = 0;
    }
    v170 = ServantLimitMaster__GetEntity(v169, v168, battleCharaLimitCount, 0LL);
    this->fields.svtlimitDispent = v170;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.svtlimitDispent,
      (System_Int32_array **)v170,
      v171,
      v172,
      v173,
      v174,
      v175,
      v176);
  }
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfo, this->fields.beforeUserSvtId, 0LL);
  BattleEquipTargetList = BattleUserServantData__getBattleEquipTargetList(userSvt, 0LL);
  if ( this->fields.shiftNpcId >= 1 && UserServantFromID && this->fields.beforeUserSvtId >= 1 )
    BattleEquipTargetList = BattleUserServantData__getBattleEquipTargetList(UserServantFromID, 0LL);
  v510 = userSvt;
  if ( !BattleEquipTargetList )
    goto LABEL_295;
  v180 = (struct BattleUserServantData_array *)sub_B17014(
                                                 BattleUserServantData___TypeInfo,
                                                 BattleEquipTargetList->max_length,
                                                 v178);
  this->fields.equipList = v180;
  p_equipList = &this->fields.equipList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.equipList,
    (System_Int32_array **)v180,
    v181,
    v182,
    v183,
    v184,
    v185,
    v186);
  equipList = this->fields.equipList;
  this->fields.equiphp = 0;
  this->fields.equipatk = 0;
  if ( !equipList )
    goto LABEL_295;
  p_max_length = &equipList->max_length;
  if ( (int)equipList->max_length >= 1 )
  {
    v197 = 0LL;
    while ( 1 )
    {
      if ( v197 >= BattleEquipTargetList->max_length )
        goto LABEL_296;
      EquipFromID = (__int64)BattleInfoData__getEquipFromID(battleInfo, BattleEquipTargetList->m_Items[v197], 0LL);
      v203 = (System_Int32_array **)EquipFromID;
      if ( EquipFromID )
      {
        EquipFromID = sub_B170BC(EquipFromID, equipList->obj.klass->_1.element_class);
        if ( !EquipFromID )
          break;
      }
      if ( v197 >= *p_max_length )
        goto LABEL_296;
      v204 = &equipList->obj.klass + v197;
      v204[4] = (Il2CppClass *)v203;
      sub_B16F98((BattleServantConfConponent_o *)(v204 + 4), v203, v189, v198, v199, v200, v201, v202);
      equipList = *p_equipList;
      if ( !*p_equipList )
        goto LABEL_295;
      if ( v197 >= equipList->max_length )
        goto LABEL_296;
      v205 = &equipList->obj.klass + v197;
      v208 = v205[4];
      v206 = (__int64 *)(v205 + 4);
      v207 = v208;
      if ( v208 )
      {
        this->fields.equipatk += v207->_2.thread_static_fields_offset;
        if ( v197 >= equipList->max_length )
          goto LABEL_296;
        v209 = *v206;
        if ( !v209 )
          goto LABEL_295;
        this->fields.equiphp += *(_DWORD *)(v209 + 268);
      }
      p_max_length = &equipList->max_length;
      if ( (__int64)++v197 >= (int)equipList->max_length )
        goto LABEL_59;
    }
    sub_B170F4();
LABEL_297:
    sub_B170A0();
  }
LABEL_59:
  maxhp = this->fields.maxhp;
  equiphp = this->fields.equiphp;
  p_userCommandCodeIds = &this->fields.userCommandCodeIds;
  this->fields.atk += this->fields.equipatk;
  this->fields.maxhp = equiphp + maxhp;
  userCommandCodeIds = v510->fields.userCommandCodeIds;
  this->fields.userCommandCodeIds = userCommandCodeIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeIds,
    (System_Int32_array **)userCommandCodeIds,
    v189,
    v190,
    v191,
    v192,
    v193,
    v194);
  if ( this->fields.shiftNpcId >= 1 && UserServantFromID && this->fields.beforeUserSvtId >= 1 )
  {
    v221 = (System_Int32_array **)UserServantFromID->fields.userCommandCodeIds;
    *p_userCommandCodeIds = (struct System_Int64_array *)v221;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userCommandCodeIds,
      v221,
      v215,
      v216,
      v217,
      v218,
      v219,
      v220);
  }
  v504 = UserServantFromID;
  eventIda = eventId;
  v222 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_CommandCodeInfo__TypeInfo,
                                                                                                   v214,
                                                                                                   v215,
                                                                                                   v216,
                                                                                                   v217);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v222,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CommandCodeInfo___ctor__);
  p_commandCodeList_k__BackingField = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields._commandCodeList_k__BackingField;
  this->fields._commandCodeList_k__BackingField = (struct System_Collections_Generic_List_CommandCodeInfo__o *)v222;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._commandCodeList_k__BackingField,
    (System_Int32_array **)v222,
    v224,
    v225,
    v226,
    v227,
    v228,
    v229);
  if ( userCommandCode && *p_userCommandCodeIds && (int)userCommandCode->max_length >= 1 )
  {
    v237 = 0LL;
    do
    {
      v238 = sub_B170CC(BattleServantData___c__DisplayClass288_1_TypeInfo, v230, v231, v232, v233);
      BattleServantData___c__DisplayClass288_1___ctor((BattleServantData___c__DisplayClass288_1_o *)v238, 0LL);
      if ( v237 >= userCommandCode->max_length )
        goto LABEL_296;
      if ( !v238 )
        goto LABEL_295;
      v244 = (System_Int32_array **)userCommandCode->m_Items[v237];
      *(_QWORD *)(v238 + 16) = v244;
      sub_B16F98((BattleServantConfConponent_o *)(v238 + 16), v244, v189, v239, v240, v241, v242, v243);
      v245 = *p_userCommandCodeIds;
      v250 = (System_Func_long__bool__o *)sub_B170CC(System_Func_long__bool__TypeInfo, v246, v247, v248, v249);
      System_Func_long__bool____ctor(
        v250,
        (Il2CppObject *)v238,
        Method_BattleServantData___c__DisplayClass288_1__setBaseServantData_b__0__,
        (const MethodInfo_2B682B0 *)Method_System_Func_long__bool___ctor__);
      if ( BasicHelper__Any_long_(
             v245,
             (System_Func_T__bool__o *)v250,
             (const MethodInfo_18B5F24 *)Method_BasicHelper_Any_long___) )
      {
        if ( !*p_commandCodeList_k__BackingField )
          goto LABEL_295;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_commandCodeList_k__BackingField,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v238 + 16),
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CommandCodeInfo__Add__);
      }
    }
    while ( (__int64)++v237 < (int)userCommandCode->max_length );
  }
  if ( !this->fields.commandAssistIds )
  {
    p_commandAssistIds = &this->fields.commandAssistIds;
    v252 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 5LL, v231);
    this->fields.commandAssistIds = v252;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.commandAssistIds,
      (System_Int32_array **)v252,
      v253,
      v254,
      v255,
      v256,
      v257,
      v258);
    if ( commandAssistDataList )
    {
      v260 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                        System_Predicate_commandAssistData__TypeInfo,
                                                                        v259,
                                                                        v231,
                                                                        v232,
                                                                        v233);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v260,
        object,
        Method_BattleServantData___c__DisplayClass288_0__setBaseServantData_b__1__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_commandAssistData___ctor__);
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)commandAssistDataList,
              (System_Predicate_T__o *)v260,
              (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_commandAssistData__FindAll__);
      v262 = *p_commandAssistIds;
      if ( !*p_commandAssistIds )
        goto LABEL_295;
      v263 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)All;
      v264 = 0;
      v265 = 0LL;
      while ( (__int64)v265 < (int)v262->max_length )
      {
        if ( v263 )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v514,
            v263,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__);
          v517 = *(System_Collections_Generic_List_Enumerator_T__o *)v514;
          while ( 1 )
          {
            v266 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                     &v517,
                     (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__);
            if ( !v266 )
              break;
            if ( !v517.fields.current )
              sub_B170D4();
            if ( v265 == LODWORD(v517.fields.current[2].klass) )
            {
              v269 = *p_commandAssistIds;
              if ( !*p_commandAssistIds )
                sub_B170D4();
              if ( v265 >= v269->max_length )
              {
                sub_B17100(v266, v267, v268);
                sub_B170A0();
              }
              v269->m_Items[v265 + 1] = (int32_t)v517.fields.current[1].klass;
            }
          }
          v514[v264 + 8] = 1185;
          v264 = ++v515;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v517,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__);
          if ( v264 )
          {
            v270 = v264 - 1;
            if ( v514[v264 + 7] == 1185 )
            {
              --v264;
              v515 = v270;
            }
          }
          v262 = *p_commandAssistIds;
          ++v265;
          if ( *p_commandAssistIds )
            continue;
        }
        goto LABEL_295;
      }
    }
  }
  commandCardParam = v510->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)commandCardParam,
    v231,
    v232,
    v233,
    v234,
    v235,
    v236);
  if ( this->fields.shiftNpcId >= 1 && v504 && this->fields.beforeUserSvtId >= 1 )
  {
    v278 = v504->fields.commandCardParam;
    this->fields.commandCardParam = v278;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.commandCardParam,
      (System_Int32_array **)v278,
      v272,
      v273,
      v274,
      v275,
      v276,
      v277);
  }
  BattleSkillIdList = (System_Int32_array **)BattleUserServantData__getBattleSkillIdList(v510, 0LL);
  object[1].monitor = BattleSkillIdList;
  sub_B16F98((BattleServantConfConponent_o *)&object[1].monitor, BattleSkillIdList, v280, v281, v282, v283, v284, v285);
  v286 = (System_Int32_array **)((__int64 (__fastcall *)(BattleUserServantData_o *, void *))v510->klass->vtable._6_getSkillLevelList.method)(
                                  v510,
                                  v510->klass[1]._1.image);
  object[2].klass = (Il2CppClass *)v286;
  sub_B16F98((BattleServantConfConponent_o *)&object[2], v286, v287, v288, v289, v290, v291, v292);
  v297 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                                                                   v293,
                                                                                                   v294,
                                                                                                   v295,
                                                                                                   v296);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v297,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( isContinue )
  {
    skillInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.skillInfoList;
    v297 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                                                                     v298,
                                                                                                     v299,
                                                                                                     v300,
                                                                                                     v301);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v297,
      skillInfoList,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___66726936);
  }
  v303 = this->fields.skillInfoList;
  if ( !v303 )
    goto LABEL_295;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v303,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
  v308 = sub_B170CC(BattleServantData___c__DisplayClass288_2_TypeInfo, v304, v305, v306, v307);
  BattleServantData___c__DisplayClass288_2___ctor((BattleServantData___c__DisplayClass288_2_o *)v308, 0LL);
  if ( !v308 )
    goto LABEL_295;
  *(_QWORD *)(v308 + 24) = object;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v308 + 24),
    (System_Int32_array **)object,
    v309,
    v310,
    v311,
    v312,
    v313,
    v314);
  v317 = *(_QWORD *)(v308 + 24);
  *(_DWORD *)(v308 + 16) = 0;
  if ( !v317 )
    goto LABEL_295;
  v318 = 0;
  while ( 1 )
  {
    v319 = *(_QWORD *)(v317 + 24);
    if ( !v319 )
      goto LABEL_295;
    if ( v318 >= *(_DWORD *)(v319 + 24) )
      break;
    v320 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                      System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                      v188,
                                                                      v189,
                                                                      v315,
                                                                      v316);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v320,
      (Il2CppObject *)v308,
      Method_BattleServantData___c__DisplayClass288_2__setBaseServantData_b__2__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    if ( v297 )
    {
      EquipFromID = (__int64)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v297,
                               (System_Predicate_T__o *)v320,
                               (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
      v321 = *(_QWORD *)(v308 + 24);
      if ( v321 )
      {
        v322 = *(_QWORD *)(v321 + 24);
        if ( v322 )
        {
          v189 = (System_String_array **)*(int *)(v308 + 16);
          if ( (unsigned int)v189 >= *(_DWORD *)(v322 + 24) )
            goto LABEL_296;
          v323 = *(_QWORD *)(v321 + 32);
          if ( v323 )
          {
            if ( (unsigned int)v189 >= *(_DWORD *)(v323 + 24) )
              goto LABEL_296;
            EquipFromID = (__int64)BattleServantData__addSkillInfo(
                                     this,
                                     11,
                                     (int32_t)v189,
                                     *(_DWORD *)(v322 + 4LL * (_QWORD)v189 + 32),
                                     *(_DWORD *)(v323 + 4LL * (_QWORD)v189 + 32),
                                     -1LL,
                                     -1,
                                     (BattleSkillInfoData_o *)EquipFromID,
                                     v501);
            v317 = *(_QWORD *)(v308 + 24);
            v318 = *(_DWORD *)(v308 + 16) + 1;
            *(_DWORD *)(v308 + 16) = v318;
            if ( v317 )
              continue;
          }
        }
      }
    }
    goto LABEL_295;
  }
  skillIndex[0] = 0;
  classPassive = v510->fields.classPassive;
  if ( !classPassive )
  {
    if ( !*p_svtdata )
      goto LABEL_295;
    classPassive = *(struct System_Int32_array **)&(*p_svtdata)[10].fields.fakeValue;
    if ( !classPassive )
      goto LABEL_295;
  }
  v325 = *(_QWORD *)&classPassive->max_length;
  if ( (int)v325 >= 1 )
  {
    v326 = 0LL;
    while ( v326 < (unsigned int)v325 )
    {
      EquipFromID = (__int64)BattleServantData__addSkillInfo(
                               this,
                               10,
                               v326,
                               classPassive->m_Items[v326 + 1],
                               1,
                               -1LL,
                               -1,
                               0LL,
                               v501);
      LODWORD(v325) = classPassive->max_length;
      if ( (__int64)++v326 >= (int)v325 )
        goto LABEL_123;
    }
    goto LABEL_296;
  }
  LODWORD(v326) = 0;
LABEL_123:
  v327 = v510;
  skillIndex[0] = v326;
  EquipFromID = (__int64)BattleUserServantData__GetAddPassiveSkillArray(v510, 0LL);
  if ( !EquipFromID )
    goto LABEL_295;
  v328 = *(_QWORD *)(EquipFromID + 24);
  v329 = EquipFromID;
  if ( (int)v328 >= 1 )
  {
    v330 = 0LL;
    do
    {
      if ( v330 >= (unsigned int)v328 )
        goto LABEL_296;
      EquipFromID = (__int64)BattleServantData__addSkillInfo(
                               this,
                               10,
                               (int)v326 + (int)v330,
                               *(_DWORD *)(v329 + 32 + 8 * v330),
                               *(_DWORD *)(v329 + 32 + 8 * v330 + 4),
                               -1LL,
                               -1,
                               0LL,
                               v501);
      LODWORD(v328) = *(_DWORD *)(v329 + 24);
      ++v330;
    }
    while ( (__int64)v330 < (int)v328 );
    LODWORD(v326) = v326 + v330;
    v327 = v510;
  }
  skillIndex[0] = v326;
  EquipFromID = (__int64)BattleUserServantData__GetAppendPassiveSkillArray(v327, 0LL);
  if ( EquipFromID )
  {
    v332 = *(_QWORD *)(EquipFromID + 24);
    v333 = EquipFromID;
    if ( (int)v332 >= 1 )
    {
      v334 = 0LL;
      do
      {
        if ( v334 >= (unsigned int)v332 )
          goto LABEL_296;
        v335 = *(_QWORD *)(v333 + 32 + 8 * v334);
        EquipFromID = Follower__IsNpc(this->fields.followerType, 0LL);
        if ( HIDWORD(v335) || (EquipFromID & 1) == 0 )
        {
          EquipFromID = (__int64)BattleServantData__addSkillInfo(
                                   this,
                                   10,
                                   v326,
                                   v335,
                                   SHIDWORD(v335),
                                   -1LL,
                                   -1,
                                   0LL,
                                   v501);
          LODWORD(v326) = v326 + 1;
        }
        LODWORD(v332) = *(_DWORD *)(v333 + 24);
        ++v334;
      }
      while ( (__int64)v334 < (int)v332 );
      v327 = v510;
      skillIndex[0] = v326;
    }
  }
  BattleServantData__AddClassBoardSkillInfo(this, v327, skillIndex, v331);
  if ( !v507 )
    goto LABEL_295;
  EquipFromID = ((__int64 (__fastcall *)(BaseBattleServantEvent_o *, __int64, BattleServantData_o *, Il2CppMethodPointer))v507->klass->vtable._4_IsApplyPassive.method)(
                  v507,
                  12LL,
                  this,
                  v507->klass->vtable._5_AddSpecialPassive.methodPtr);
  v336 = this->fields.equipList;
  if ( !v336 )
    goto LABEL_295;
  v337 = EquipFromID;
  v338 = 0LL;
  v339 = 0;
  objecta = EquipFromID;
  while ( 1 )
  {
    max_length = v336->max_length;
    if ( (v337 & ((__int64)v338 < (int)max_length)) == 0 )
      break;
    if ( v338 >= max_length )
      goto LABEL_296;
    EquipFromID = (__int64)v336->m_Items[v338];
    if ( EquipFromID )
    {
      EquipFromID = (__int64)BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)EquipFromID, 0LL);
      v341 = *p_equipList;
      if ( !*p_equipList )
        goto LABEL_295;
      if ( v338 >= v341->max_length )
        goto LABEL_296;
      v342 = EquipFromID;
      v343 = v341->m_Items[v338];
      if ( !v343 )
        goto LABEL_295;
      EquipFromID = ((__int64 (__fastcall *)(BattleUserServantData_o *, void *))v343->klass->vtable._6_getSkillLevelList.method)(
                      v343,
                      v343->klass[1]._1.image);
      if ( !v342 )
        goto LABEL_295;
      v344 = *(_QWORD *)(v342 + 24);
      if ( (int)v344 >= 1 )
      {
        v345 = EquipFromID;
        v346 = 0LL;
        v347 = v339;
        v348 = v339;
        v349 = EquipFromID + 32;
        do
        {
          if ( v346 >= (unsigned int)v344 )
            goto LABEL_296;
          if ( !v345 )
            goto LABEL_295;
          if ( v346 >= *(unsigned int *)(v345 + 24) )
            goto LABEL_296;
          EquipFromID = (__int64)BattleServantData__addSkillInfo(
                                   this,
                                   12,
                                   v348 + (int)v346,
                                   *(_DWORD *)(v342 + 32 + 4 * v346),
                                   *(_DWORD *)(v349 + 4 * v346),
                                   -1LL,
                                   -1,
                                   0LL,
                                   v501);
          LODWORD(v344) = *(_DWORD *)(v342 + 24);
          ++v346;
        }
        while ( (__int64)v346 < (int)v344 );
        v337 = objecta;
        v339 = v347 + v346;
      }
      v336 = *p_equipList;
    }
    ++v338;
    if ( !v336 )
      goto LABEL_295;
  }
  v350 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v350 )
    goto LABEL_295;
  v351 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v350,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v352 = *p_commandCodeList_k__BackingField;
  if ( !*p_commandCodeList_k__BackingField )
    goto LABEL_295;
  v353 = (CommandCodeSkillMaster_o *)v351;
  v354 = 0LL;
  v355 = 0;
  while ( (__int64)v354 < v352->fields._size )
  {
    if ( v354 >= (unsigned int)v352->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( v352->fields._items->m_Items[v354] )
    {
      v356 = *p_commandCodeList_k__BackingField;
      if ( !*p_commandCodeList_k__BackingField )
        goto LABEL_295;
      if ( v354 >= (unsigned int)v356->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v357 = v356->fields._items->m_Items[v354];
      if ( !v357 )
        goto LABEL_295;
      if ( !v353 )
        goto LABEL_295;
      EquipFromID = (__int64)CommandCodeSkillMaster__getCommandCodeSkillList(v353, v357->fields.eventId, 0LL);
      if ( !EquipFromID )
        goto LABEL_295;
      v358 = *(_DWORD *)(EquipFromID + 24);
      v359 = EquipFromID;
      if ( v358 >= 1 )
      {
        for ( i = 0; i < v358; ++i )
        {
          if ( i >= (unsigned int)v358 )
            goto LABEL_296;
          v361 = *(_QWORD *)(v359 + 8LL * i + 32);
          if ( !v361 )
            goto LABEL_295;
          v362 = *p_commandCodeList_k__BackingField;
          if ( !*p_commandCodeList_k__BackingField )
            goto LABEL_295;
          v363 = *(_DWORD *)(v361 + 28);
          if ( v354 >= (unsigned int)v362->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v364 = v362->fields._items->m_Items[v354];
          if ( !v364 )
            goto LABEL_295;
          EquipFromID = (__int64)BattleServantData__addSkillInfo(
                                   this,
                                   22,
                                   v355 + i,
                                   v363,
                                   1,
                                   *(_QWORD *)&v364->fields.missionTargetId,
                                   -1,
                                   0LL,
                                   v501);
          v358 = *(_DWORD *)(v359 + 24);
        }
        v355 += i;
      }
    }
    v352 = *p_commandCodeList_k__BackingField;
    ++v354;
    if ( !*p_commandCodeList_k__BackingField )
      goto LABEL_295;
  }
  ((void (__fastcall *)(BaseBattleServantEvent_o *, BattleServantData_o *, Il2CppMethodPointer))v507->klass->vtable._5_AddSpecialPassive.method)(
    v507,
    this,
    v507->klass->vtable._6_AddPartySkill.methodPtr);
  ((void (__fastcall *)(BaseBattleServantEvent_o *, BattleServantData_o *, BattleInfoData_o *, void *))v507->klass->vtable._6_AddPartySkill.method)(
    v507,
    this,
    battleInfo,
    v507->klass[1]._1.image);
  BattleServantData__UpdateTreasureDevice(this, v510->fields.treasureDeviceId, v510->fields.treasureDeviceLv, v365);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6512, 0LL);
  nplineCount = this->fields.nplineCount;
  this->fields.lineMaxNp = Value;
  if ( nplineCount >= 1 )
  {
    v368 = nplineCount * Value;
    if ( v368 < this->fields.np )
      this->fields.np = v368;
  }
  if ( !*p_deckSvt )
    goto LABEL_295;
  TDErrorVoiceSeArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetTDErrorVoiceSeArray(
                                                                               *p_deckSvt,
                                                                               0LL);
  v376 = TDErrorVoiceSeArray
       ? (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                               TDErrorVoiceSeArray,
                                                               (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_string___)
       : 0LL;
  this->fields.tdErrorStatusVoiceSeList = v376;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tdErrorStatusVoiceSeList,
    (System_Int32_array **)v376,
    v370,
    v371,
    v372,
    v373,
    v374,
    v375);
  v381 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, v377, v378, v379, v380);
  System_Collections_Hashtable___ctor_38240048(v381, 0LL);
  this->fields.commandtable = v381;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandtable,
    (System_Int32_array **)v381,
    v382,
    v383,
    v384,
    v385,
    v386,
    v387);
  v388 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v388 )
    goto LABEL_295;
  v389 = (ServantCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v388,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v391 = sub_B17014(int___TypeInfo, 6LL, v390);
  v519.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164((System_Array_o *)v391, v519, 0LL);
  if ( !v391 )
    goto LABEL_295;
  if ( *(int *)(v391 + 24) >= 1 )
  {
    v392 = 0LL;
    while ( 1 )
    {
      v394 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v393 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v521.fields.currentCryptoKey = v394;
      *(_QWORD *)&v521.fields.fakeValue = v393;
      EquipFromID = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v521, 0LL);
      if ( v392 >= *(unsigned int *)(v391 + 24) )
        break;
      if ( !v389 )
        goto LABEL_295;
      if ( ServantCardMaster__TryGetEntity(v389, &entity, EquipFromID, *(_DWORD *)(v391 + 32 + 4 * v392), 0LL) )
      {
        if ( !entity )
          goto LABEL_295;
        commandtable = this->fields.commandtable;
        v514[0] = entity->fields.cardId;
        v396 = j_il2cpp_value_box_0(int_TypeInfo, v514);
        v398 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v397 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v399 = v396;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v522.fields.currentCryptoKey = v398;
        *(_QWORD *)&v522.fields.fakeValue = v397;
        v400 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v522, 0LL);
        if ( !entity )
          goto LABEL_295;
        v401 = ServantCardMaster__GetEntity(v389, v400, entity->fields.cardId, 0LL);
        if ( !commandtable )
          goto LABEL_295;
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, ServantCardEntity_o *, Il2CppMethodPointer))commandtable->klass->vtable._30_set_Item.method)(
          commandtable,
          v399,
          v401,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
      if ( (__int64)++v392 >= *(int *)(v391 + 24) )
        goto LABEL_208;
    }
LABEL_296:
    sub_B17100(EquipFromID, v188, v189);
    goto LABEL_297;
  }
LABEL_208:
  if ( !*p_svtdata )
    goto LABEL_295;
  DefaultDeadType = ServantEntity__GetDefaultDeadType((ServantEntity_o *)*p_svtdata, 0, 0LL);
  v403 = this->fields.deckSvt;
  this->fields.deadtype = DefaultDeadType;
  if ( !v403 )
    goto LABEL_295;
  if ( BattleDeckServantData__isEscape(v403, 0LL) )
  {
    v404 = v510;
    KillType = 1;
  }
  else
  {
    if ( !*p_deckSvt )
      goto LABEL_295;
    v404 = v510;
    if ( BattleDeckServantData__isDeadStand(*p_deckSvt, 0LL) )
    {
      KillType = 2;
    }
    else
    {
      if ( !*p_deckSvt )
        goto LABEL_295;
      if ( BattleDeckServantData__isDeadEffect(*p_deckSvt, 0LL) )
      {
        KillType = 3;
      }
      else
      {
        if ( !*p_deckSvt )
          goto LABEL_295;
        if ( BattleDeckServantData__isDeadWait(*p_deckSvt, 0LL) )
        {
          KillType = 4;
        }
        else
        {
          if ( !*p_deckSvt )
            goto LABEL_295;
          if ( BattleDeckServantData__IsDeadEnergy(*p_deckSvt, 0LL) )
          {
            KillType = 5;
          }
          else
          {
            if ( !*p_deckSvt )
              goto LABEL_295;
            if ( !BattleDeckServantData__ExistKillType(*p_deckSvt, 0LL) )
              goto LABEL_229;
            if ( !*p_deckSvt )
              goto LABEL_295;
            KillType = BattleDeckServantData__GetKillType(*p_deckSvt, 0LL);
          }
        }
      }
    }
  }
  this->fields.deadtype = KillType;
LABEL_229:
  if ( !*p_deckSvt )
    goto LABEL_295;
  isAppear = BattleDeckServantData__isAppear(*p_deckSvt, 0LL);
  v407 = this->fields.deckSvt;
  this->fields.isAppear = isAppear;
  if ( !v407 )
    goto LABEL_295;
  isRaid = BattleDeckServantData__isRaid(v407, 0LL);
  this->fields.isRaid = isRaid;
  if ( isRaid )
  {
    if ( !*p_deckSvt )
      goto LABEL_295;
    RaidId = BattleDeckServantData__getRaidId(*p_deckSvt, 0LL);
    this->fields.raidId = RaidId;
    StartRaidState = BattleInfoData__getStartRaidState(battleInfo, eventIda, RaidId, 0LL);
    this->fields.statestring = StartRaidState;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.statestring,
      (System_Int32_array **)StartRaidState,
      v411,
      v412,
      v413,
      v414,
      v415,
      v416);
  }
  if ( !*p_deckSvt )
    goto LABEL_295;
  isAddition = BattleDeckServantData__isAddition(*p_deckSvt, 0LL);
  v418 = this->fields.deckSvt;
  this->fields.isAddition = isAddition;
  if ( !v418 )
    goto LABEL_295;
  isLeader = BattleDeckServantData__isLeader(v418, 0LL);
  v420 = this->fields.deckSvt;
  this->fields.isLeader = isLeader;
  if ( !v420 )
    goto LABEL_295;
  isSuperBoss = BattleDeckServantData__isSuperBoss(v420, 0LL);
  this->fields.isSuperBoss = isSuperBoss;
  if ( isSuperBoss )
  {
    if ( !*p_deckSvt )
      goto LABEL_295;
    SuperBossId = BattleDeckServantData__getSuperBossId(*p_deckSvt, 0LL);
    this->fields.superBossId = SuperBossId;
    this->fields.superbossnokorihp = BattleInfoData__getSuperBossNokoriHp(battleInfo, SuperBossId, 0LL);
  }
  if ( !*p_deckSvt )
    goto LABEL_295;
  isSendDamageForSuperBossId = BattleDeckServantData__isSendDamageForSuperBossId(*p_deckSvt, 0LL);
  this->fields.isSendDamageForSuperBossId = isSendDamageForSuperBossId;
  if ( isSendDamageForSuperBossId )
  {
    if ( !*p_deckSvt )
      goto LABEL_295;
    this->fields.sendDamageForSuperBossId = BattleDeckServantData__getSendDamageForSuperBossId(*p_deckSvt, 0LL);
  }
  if ( !*p_deckSvt )
    goto LABEL_295;
  this->fields.hpBarType = BattleDeckServantData__getHpBarType(*p_deckSvt, 0LL);
  v424 = this->fields.deckSvt;
  v426 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v425 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v523.fields.currentCryptoKey = v426;
  *(_QWORD *)&v523.fields.fakeValue = v425;
  v427 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v523, 0LL);
  if ( !v424 )
    goto LABEL_295;
  this->fields.overwriteSvtVoiceId = BattleDeckServantData__getOverwriteSvtVoiceId(v424, v427, 0LL);
  this->fields.battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                               v404->fields.battleVoice,
                               0LL);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v404->fields.battleVoice, 0LL)
    && !this->fields.overwriteSvtVoiceId )
  {
    v429 = *(_QWORD *)&v404->fields.battleVoice.fields.currentCryptoKey;
    v428 = *(_QWORD *)&v404->fields.battleVoice.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v524.fields.currentCryptoKey = v429;
    *(_QWORD *)&v524.fields.fakeValue = v428;
    this->fields.overwriteSvtVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v524, 0LL);
  }
  v431 = *(_QWORD *)&v404->fields.svtId.fields.currentCryptoKey;
  v430 = *(_QWORD *)&v404->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v525.fields.currentCryptoKey = v431;
  *(_QWORD *)&v525.fields.fakeValue = v430;
  v432 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v525, 0LL);
  BattleServantOverwriteName = BattleServantData__getBattleServantOverwriteName(this, v432, v433);
  this->fields.svtOverwriteBattleName = BattleServantOverwriteName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName,
    (System_Int32_array **)BattleServantOverwriteName,
    v435,
    v436,
    v437,
    v438,
    v439,
    v440);
  v441 = this->fields.deckSvt;
  if ( !v441 )
    goto LABEL_295;
  Scale = BattleDeckServantData__getScale(v441, 0LL);
  v443 = this->fields.deckSvt;
  this->fields.actorScale = Scale;
  if ( !v443 )
    goto LABEL_295;
  aiState = this->fields.aiState;
  this->fields.roleType = v443->fields.roleType;
  this->fields.maxActNum = v404->fields.maxActNum;
  this->fields._minActNum_k__BackingField = v404->fields.minActNum;
  this->fields.aiId = v404->fields.aiId;
  this->fields.actPriority = v404->fields.actPriority;
  if ( !aiState )
    goto LABEL_295;
  AiState__Initialize(aiState, v404->fields.aiId, 0LL);
  v445 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v404->fields.svtId, 0LL);
  v446 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v446 )
    goto LABEL_295;
  v447 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v446,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !*p_svtdata )
    goto LABEL_295;
  v448 = (ServantChangeMaster_o *)v447;
  v449 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536((*p_svtdata)[1], 0LL);
  if ( !v448 )
    goto LABEL_295;
  v450 = ServantChangeMaster__TrueNameEntity(v448, v449, 0LL);
  if ( v450 )
    v445 = v450->fields.svtId;
  v451 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v451 )
    goto LABEL_295;
  v452 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v451,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v452 )
    goto LABEL_295;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v452, UserId, v445, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_295;
  v455 = EntityDefinitely;
  this->fields.svtCommonFlag = EntityDefinitely->fields.svtCommonFlag;
  v457 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v456 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v526.fields.currentCryptoKey = v457;
  *(_QWORD *)&v526.fields.fakeValue = v456;
  v458 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v526, 0LL);
  v465 = this->fields.deckSvt;
  this->fields._servantCollectionId_k__BackingField = v458;
  if ( !v465 )
    goto LABEL_295;
  if ( !v465->fields.isFollowerSvt )
  {
    v466 = v458;
    svtCommonFlag = v455->fields.svtCommonFlag;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    this->fields.svtCommonFlag = BattleData__GetSavedServantCommonFlag(v466, svtCommonFlag, 0LL);
  }
  if ( !this->fields.isEnemy && !this->fields.followerType )
  {
    tdPlayed = v455->fields.tdPlayed;
    goto LABEL_293;
  }
  v468 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v468 )
    goto LABEL_295;
  v469 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)v468,
           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___);
  v471 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v470 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v472 = (UserNpcSvtRecordMaster_o *)v469;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v527.fields.currentCryptoKey = v471;
  *(_QWORD *)&v527.fields.fakeValue = v470;
  v473 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v527, 0LL);
  if ( !v472 )
LABEL_295:
    sub_B170D4();
  v474 = (System_Collections_Generic_IEnumerable_TSource__o *)UserNpcSvtRecordMaster__GetTdPlayed(v472, v473, 0LL);
  tdPlayed = v455->fields.tdPlayed;
  if ( !v474 )
  {
LABEL_293:
    p_tdplayed = &this->fields.tdplayed;
    this->fields.tdplayed = tdPlayed;
    goto LABEL_294;
  }
  v476 = (struct System_Int32_array *)v474;
  if ( tdPlayed )
  {
    v477 = System_Linq_Enumerable__Concat_int_(
             v474,
             (System_Collections_Generic_IEnumerable_TSource__o *)tdPlayed,
             (const MethodInfo_18D16C4 *)Method_System_Linq_Enumerable_Concat_int___);
    tdPlayed = System_Linq_Enumerable__ToArray_int_(
                 v477,
                 (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
    goto LABEL_293;
  }
  p_tdplayed = &this->fields.tdplayed;
  this->fields.tdplayed = v476;
  tdPlayed = v476;
LABEL_294:
  sub_B16F98(
    (BattleServantConfConponent_o *)p_tdplayed,
    (System_Int32_array **)tdPlayed,
    v459,
    v460,
    v461,
    v462,
    v463,
    v464);
  classBoardAddCommandSpells = v404->fields.classBoardAddCommandSpells;
  this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddCommandSpells,
    (System_Int32_array **)classBoardAddCommandSpells,
    v480,
    v481,
    v482,
    v483,
    v484,
    v485);
  classBoardAddPassiveSkills = v404->fields.classBoardAddPassiveSkills;
  this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddPassiveSkills,
    (System_Int32_array **)classBoardAddPassiveSkills,
    v487,
    v488,
    v489,
    v490,
    v491,
    v492);
  classBoardSquareIds = v404->fields.classBoardSquareIds;
  this->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._classBoardSquareIds_k__BackingField,
    (System_Int32_array **)classBoardSquareIds,
    v494,
    v495,
    v496,
    v497,
    v498,
    v499);
  BattleServantData__InitCommonAddIndividuality(this, v500);
}


void __fastcall BattleServantData__setBuffState(BattleServantData_o *this, const MethodInfo *method)
{
  int v3; // w0
  const MethodInfo *v4; // x1
  int v5; // w20

  v3 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  if ( v3 == 1 )
    v5 = 0;
  else
    v5 = v3;
  this->fields.wkHpRatio = (double)v5 / (double)BattleServantData__getMaxHp(this, v4);
}


void __fastcall BattleServantData__setChangeServant(
        BattleServantData_o *this,
        BattleData_o *data,
        DataVals_o *vals,
        const MethodInfo *method)
{
  int32_t Value; // w0
  BattleBuffData_o *buffData; // x22
  int32_t uniqueId; // w23
  int32_t v10; // w21
  __int64 v11; // x2
  System_Int32_array *v12; // x0
  BattleInfoData_o *battle_info; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int32_array *changeSvtList; // x8
  __int64 shiftDeckIndex; // x9
  char *v18; // x8
  int32_t v19; // w9
  struct System_Int32_array *shiftDeckList; // x8
  il2cpp_array_size_t v21; // w9
  BattleDeckServantData_o *ShiftServantData; // x0
  BattleDeckServantData_o *v23; // x21
  BattleEntity_o *battle_ent; // x20
  int32_t Int; // w0
  const MethodInfo *v26; // x6
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  unsigned int MaxHp; // w0
  __int64 v30; // x1

  if ( (byte_40F8ADE & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, data);
    byte_40F8ADE = 1;
  }
  BattleServantData__OverwriteShiftDeckIndex(this, vals, (const MethodInfo *)vals);
  if ( !vals )
    goto LABEL_24;
  Value = DataVals__GetValue(vals, 0LL);
  buffData = this->fields.buffData;
  uniqueId = this->fields.uniqueId;
  v10 = Value;
  v12 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v11);
  if ( !buffData )
    goto LABEL_24;
  BattleBuffData__InitializeShift(buffData, uniqueId, v12, 0LL);
  this->fields.changeSvtIndex = v10;
  if ( v10 )
  {
    if ( data )
    {
      changeSvtList = this->fields.changeSvtList;
      if ( changeSvtList )
      {
        shiftDeckIndex = this->fields.shiftDeckIndex;
        if ( (unsigned int)shiftDeckIndex < changeSvtList->max_length )
        {
          battle_info = data->fields.battle_info;
          if ( !battle_info )
            goto LABEL_24;
          v18 = (char *)changeSvtList + 4 * shiftDeckIndex;
LABEL_17:
          ShiftServantData = BattleInfoData__getShiftServantData(battle_info, *((_DWORD *)v18 + 8), 0LL);
          goto LABEL_18;
        }
        goto LABEL_25;
      }
    }
    goto LABEL_24;
  }
  if ( !data )
    goto LABEL_24;
  v19 = this->fields.shiftDeckIndex;
  battle_info = data->fields.battle_info;
  if ( v19 )
  {
    shiftDeckList = this->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_24;
    v21 = v19 - 1;
    if ( v21 < shiftDeckList->max_length )
    {
      if ( !battle_info )
        goto LABEL_24;
      v18 = (char *)shiftDeckList + 4 * (int)v21;
      goto LABEL_17;
    }
LABEL_25:
    sub_B17100(battle_info, v14, v15);
    sub_B170A0();
  }
  if ( !battle_info )
LABEL_24:
    sub_B170D4();
  ShiftServantData = BattleInfoData__getDefaultServantData(battle_info, this->fields.uniqueId, 0LL);
LABEL_18:
  v23 = ShiftServantData;
  if ( !ShiftServantData )
    goto LABEL_24;
  ShiftServantData->fields.id = this->fields.index + 1;
  ShiftServantData->fields.uniqueId = this->fields.uniqueId;
  battle_ent = data->fields.battle_ent;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v23, battle_ent, Int, 0LL, 0, v26);
  LODWORD(battle_ent) = BattleServantData__getMaxHp(this, v27);
  if ( (int)battle_ent < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                           this,
                           this->klass->vtable._10_set_hp.methodPtr) )
  {
    MaxHp = BattleServantData__getMaxHp(this, v28);
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
      this,
      MaxHp,
      this->klass->vtable._11_get_reducedhp.methodPtr);
    v30 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
            this,
            this->klass->vtable._10_set_hp.methodPtr);
    ((void (__fastcall *)(BattleServantData_o *, __int64, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
      this,
      v30,
      this->klass->vtable._15_get_IsAiNpc.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__setContinue(
        BattleServantData_o *this,
        BattleData_o *data,
        bool isDeadContinue,
        bool isResetTransform,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  const MethodInfo *v13; // x3
  int32_t lineMaxNp; // w1
  BattleBuffData_o *buffData; // x0
  System_Int32_array **buffMst; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleBuffData_o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x24
  BattleBuffData_o *v29; // x0
  BattleBuffData_o *v30; // x0
  BattleBuffData_BuffData_array *PassiveList; // x0
  const MethodInfo *v32; // x1
  __int64 v33; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v35; // x22
  unsigned int i; // w23
  Il2CppClass **v37; // x24
  BattleBuffData_BuffData_o *v38; // x0
  BattleBuffData_BuffData_o **v39; // x24
  BattleBuffData_BuffData_o *v40; // t1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x21
  BattleInfoData_o *battle_info; // x0
  BattleDeckServantData_o *DeckServantData; // x0
  BattleEntity_o *battle_ent; // x25
  BattleDeckServantData_o *v46; // x26
  int32_t Int; // w0
  const MethodInfo *v48; // x6
  const MethodInfo *v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x5
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x1
  unsigned int MaxHp; // w0
  unsigned int v66; // w0

  if ( (byte_40F8A54 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, data);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v9);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass357_0__setContinue_b__0__, v10);
    sub_B16FFC(&BattleServantData___c__DisplayClass357_0_TypeInfo, v11);
    byte_40F8A54 = 1;
  }
  v12 = sub_B170CC(BattleServantData___c__DisplayClass357_0_TypeInfo, data, isDeadContinue, isResetTransform, method);
  BattleServantData___c__DisplayClass357_0___ctor((BattleServantData___c__DisplayClass357_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_27;
  *(_BYTE *)(v12 + 16) = isDeadContinue;
  lineMaxNp = this->fields.lineMaxNp;
  this->fields.status = 0;
  this->fields.np = 0;
  BattleServantData__addNp(this, lineMaxNp, 1, v13);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_27;
  buffMst = (System_Int32_array **)BattleBuffData__get_buffMst(buffData, 0LL);
  *(_QWORD *)(v12 + 24) = buffMst;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), buffMst, v17, v18, v19, v20, v21, v22);
  v23 = this->fields.buffData;
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v24,
                                                                             v25,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v12,
    Method_BattleServantData___c__DisplayClass357_0__setContinue_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  if ( !v23 )
    goto LABEL_27;
  BattleBuffData__RemoveActiveBuffWithCondition(v23, (System_Func_BattleBuffData_BuffData__bool__o *)v28, 0LL);
  v29 = this->fields.buffData;
  if ( !v29 )
    goto LABEL_27;
  BattleBuffData__updateAuraBuffList(v29, 0LL);
  v30 = this->fields.buffData;
  if ( !v30 )
    goto LABEL_27;
  PassiveList = BattleBuffData__getPassiveList(v30, 1, 0LL);
  if ( !PassiveList )
    goto LABEL_27;
  max_length = PassiveList->max_length;
  v35 = PassiveList;
  if ( max_length >= 1 )
  {
    for ( i = 0; (int)i < max_length; ++i )
    {
      if ( i >= max_length )
      {
LABEL_28:
        sub_B17100(PassiveList, v32, v33);
        sub_B170A0();
      }
      v37 = &v35->obj.klass + (int)i;
      v40 = (BattleBuffData_BuffData_o *)v37[4];
      v39 = (BattleBuffData_BuffData_o **)(v37 + 4);
      v38 = v40;
      if ( !v40 )
        goto LABEL_27;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCodeBuff(v38, 0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        goto LABEL_17;
      if ( i >= v35->max_length )
        goto LABEL_28;
      if ( !*v39 )
        goto LABEL_27;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(*v39, 0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
      {
LABEL_17:
        if ( i >= v35->max_length )
          goto LABEL_28;
        if ( !*v39 )
          goto LABEL_27;
        (*v39)->fields.reCharge = 0;
      }
      max_length = v35->max_length;
    }
  }
  if ( !isResetTransform )
  {
    BattleServantData__ResetServantSelfSkill(this, v32);
    goto LABEL_26;
  }
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  classBoardAddCommandSpells = this->fields.classBoardAddCommandSpells;
  this->fields.shiftNpcId = -1;
  this->fields.beforeUserSvtId = -1LL;
  if ( !data || (battle_info = data->fields.battle_info) == 0LL )
LABEL_27:
    sub_B170D4();
  DeckServantData = BattleInfoData__getDeckServantData(battle_info, this->fields.uniqueId, 0LL);
  battle_ent = data->fields.battle_ent;
  v46 = DeckServantData;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v46, battle_ent, Int, 0LL, 1, v48);
  this->fields.dressDispId = -1;
  *(_QWORD *)&this->fields.transformIndex = 0xFFFFFFFFLL;
  LODWORD(battle_ent) = BattleServantData__getMaxHp(this, v49);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)battle_ent,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    (unsigned int)battle_ent,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddPassiveSkills,
    (System_Int32_array **)classBoardAddPassiveSkills,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddCommandSpells,
    (System_Int32_array **)classBoardAddCommandSpells,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  BattleServantData__setTransformServant(this, data, -1, 0, 0, v62);
  BattleServantData__changeTransformServant(this, v63);
LABEL_26:
  this->fields.deckIndex = -1;
  MaxHp = BattleServantData__getMaxHp(this, v64);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v66 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v66,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  this->fields.isDeadAnime = 0;
  this->fields.isSilnetDead = 0;
  this->fields.IsVanishSkill = 0;
}


void __fastcall BattleServantData__setDeadAnimeFlg(BattleServantData_o *this, bool flg, const MethodInfo *method)
{
  this->fields.isDeadAnime = flg;
}


// attributes: thunk
void __fastcall BattleServantData__setDeadData(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData__resetParamObject(this, method);
}


void __fastcall BattleServantData__setDeckIndex(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  this->fields.deckIndex = index;
}


void __fastcall BattleServantData__setDressId(BattleServantData_o *this, int32_t dressId, const MethodInfo *method)
{
  this->fields.dressDispId = dressId;
}


void __fastcall BattleServantData__setEnemy(BattleServantData_o *this, const MethodInfo *method)
{
  this->fields.isEnemy = 1;
}


void __fastcall BattleServantData__setEscapeMotion(BattleServantData_o *this, const MethodInfo *method)
{
  this->fields.deadtype = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__setHp(
        BattleServantData_o *this,
        int32_t inhp,
        bool isAccumulation,
        const MethodInfo *method)
{
  int32_t MaxHp; // w22
  int v8; // w21
  int v9; // w0

  MaxHp = BattleServantData__getMaxHp(this, *(const MethodInfo **)&inhp);
  v8 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)inhp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  if ( MaxHp < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                 this,
                 this->klass->vtable._10_set_hp.methodPtr) )
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
      this,
      (unsigned int)MaxHp,
      this->klass->vtable._11_get_reducedhp.methodPtr);
  if ( (((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr) & 0x80000000) != 0 )
  {
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
      this,
      0LL,
      this->klass->vtable._11_get_reducedhp.methodPtr);
    if ( !isAccumulation )
      return;
  }
  else if ( !isAccumulation )
  {
    return;
  }
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  this->fields.accumulationDamage = (this->fields.accumulationDamage + v8 - v9) & ~((this->fields.accumulationDamage
                                                                                   + v8
                                                                                   - v9) >> 31);
}


void __fastcall BattleServantData__setInitBattle(BattleServantData_o *this, const MethodInfo *method)
{
  unsigned int v3; // w0

  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
    this,
    0LL,
    this->klass->vtable._13_get_resultHp.methodPtr);
  v3 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v3,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  this->fields.reservationspecial = 0;
  this->fields.isDeadAnime = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__setInitQuest(BattleServantData_o *this, int32_t setHp, const MethodInfo *method)
{
  unsigned int v4; // w0
  int32_t maxtpturn; // w8

  if ( setHp <= 0 )
  {
    *(_QWORD *)&setHp = (unsigned int)this->fields.maxhp;
  }
  else if ( !this )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    *(_QWORD *)&setHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v4 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v4,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  maxtpturn = this->fields.maxtpturn;
  this->fields.np = 0;
  this->fields.nexttpturn = maxtpturn;
}


int32_t __fastcall BattleServantData__setInitQuestShift(
        BattleServantData_o *this,
        BattleDeckServantData_o **inDeckSvt,
        BattleInfoData_o *battleInfo,
        const MethodInfo *method)
{
  int32_t EnemyDeckHp; // w0
  int32_t v8; // w23
  int32_t SuperBossId; // w0
  int64_t SuperBossNokoriHp; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Int32_array *shiftDeckList; // x8
  int32_t max_length; // w24
  int64_t v15; // x21
  il2cpp_array_size_t v16; // w25
  const MethodInfo *v17; // x4
  int32_t v19; // w8
  struct System_Int32_array *v20; // x8
  BattleDeckServantData_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( !battleInfo )
    goto LABEL_14;
  if ( !*inDeckSvt )
    goto LABEL_13;
  if ( !BattleDeckServantData__isSuperBoss(*inDeckSvt, 0LL) )
  {
LABEL_14:
    LODWORD(v15) = -1;
    return v15;
  }
  if ( !*inDeckSvt
    || (EnemyDeckHp = BattleInfoData__GetEnemyDeckHp(battleInfo, (*inDeckSvt)->fields.uniqueId, 0LL), !*inDeckSvt)
    || (v8 = EnemyDeckHp,
        SuperBossId = BattleDeckServantData__getSuperBossId(*inDeckSvt, 0LL),
        SuperBossNokoriHp = BattleInfoData__getSuperBossNokoriHp(battleInfo, SuperBossId, 0LL),
        (shiftDeckList = this->fields.shiftDeckList) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  max_length = shiftDeckList->max_length;
  v15 = SuperBossNokoriHp;
  if ( max_length - this->fields.shiftSubCount < 1 )
  {
    if ( SuperBossNokoriHp >= v8 )
      LODWORD(v15) = -1;
    else
      LODWORD(v15) = SuperBossNokoriHp;
    return v15;
  }
  if ( max_length - 1 >= this->fields.lowLimitShift )
  {
    while ( 1 )
    {
      v16 = max_length - 1;
      if ( max_length - 1 >= shiftDeckList->max_length )
        goto LABEL_27;
      SuperBossNokoriHp = BattleInfoData__GetShiftDeckHp(battleInfo, shiftDeckList->m_Items[v16 + 1], 0LL);
      if ( v15 <= (int)SuperBossNokoriHp )
        break;
      v15 -= (int)SuperBossNokoriHp;
      if ( max_length - 2 < this->fields.lowLimitShift )
        goto LABEL_16;
      shiftDeckList = this->fields.shiftDeckList;
      --max_length;
      if ( !shiftDeckList )
        goto LABEL_13;
    }
    v20 = this->fields.shiftDeckList;
    this->fields.shiftDeckIndex = max_length;
    if ( v20 )
    {
      if ( v16 >= v20->max_length )
      {
LABEL_27:
        sub_B17100(SuperBossNokoriHp, v11, v12);
        sub_B170A0();
      }
      v21 = BattleServantData__SetShiftDeckData(
              (BattleServantData_o *)SuperBossNokoriHp,
              battleInfo,
              *inDeckSvt,
              v20->m_Items[v16 + 1],
              v17);
      *inDeckSvt = v21;
      sub_B16F98((BattleServantConfConponent_o *)inDeckSvt, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
      v19 = v15;
      if ( (v15 & 0x80000000) != 0 )
        goto LABEL_17;
      return v15;
    }
    goto LABEL_13;
  }
LABEL_16:
  v19 = -1;
LABEL_17:
  if ( v15 <= v8 )
    return v15;
  else
    return v19;
}


void __fastcall BattleServantData__setMaxHp(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 MaxHp; // x1

  MaxHp = (unsigned int)BattleServantData__getMaxHp(this, method);
  ((void (__fastcall *)(BattleServantData_o *, __int64, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
}


void __fastcall BattleServantData__setOverKillTargetId(BattleServantData_o *this, int32_t Id, const MethodInfo *method)
{
  this->fields.overkillTargetId = Id;
}


void __fastcall BattleServantData__setReadySpecial(BattleServantData_o *this, bool flg, const MethodInfo *method)
{
  this->fields.reservationspecial = flg;
}


bool __fastcall BattleServantData__setSaveData(
        BattleServantData_o *this,
        BattleServantData_SaveData_o *save,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AiState_o *aiState; // x0
  const MethodInfo *v9; // x1
  AiStateManager_o *AiStateManager; // x0
  BattleBuffData_o *buffData; // x0
  unsigned int v12; // w0
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x0
  __int64 InfoId; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  BattleSkillInfoData_o *current; // x21
  struct System_Int32_array *skillinfoid_list; // x8
  __int64 v19; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v21; // x24
  int v22; // w25
  struct System_Int32_array *skillcharge_list; // x8
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_String_o *statestring; // x1
  int32_t lowLimitShift; // w8
  const MethodInfo *v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t tmpAppearanceId; // w8
  struct System_Int32_array *commandAssistIds; // x1
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F8A2E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, save);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v7);
    byte_40F8A2E = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !save )
    return 0;
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)save->fields.hp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  aiState = this->fields.aiState;
  this->fields.np = save->fields.np;
  this->fields.deckIndex = save->fields.deckIndex;
  this->fields.nexttpturn = save->fields.nextNp;
  this->fields.isEntry = save->fields.isEntry == 1;
  this->fields.isDeadAnime = save->fields.isDeadAnime == 1;
  if ( !aiState )
    goto LABEL_33;
  AiState__setSaveData(aiState, save->fields.aistateSave, 0LL);
  AiStateManager = BattleServantData__get_AiStateManager(this, v9);
  if ( !AiStateManager
    || (AiStateManager__SetSaveData(AiStateManager, save->fields.aiStateManagerSave, 0LL),
        (buffData = this->fields.buffData) == 0LL)
    || (BattleBuffData__setSaveData(buffData, save->fields.buffDataSave, 0LL),
        v12 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                this,
                this->klass->vtable._10_set_hp.methodPtr),
        ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
          this,
          v12,
          this->klass->vtable._15_get_IsAiNpc.methodPtr),
        (skillInfoList = this->fields.skillInfoList) == 0LL) )
  {
LABEL_33:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)skillInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    InfoId = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v43,
               (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( (InfoId & 1) == 0 )
      break;
    current = (BattleSkillInfoData_o *)v43.fields.current;
    if ( !v43.fields.current )
      sub_B170D4();
    if ( !BYTE4(v43.fields.current[1].monitor) )
    {
      skillinfoid_list = save->fields.skillinfoid_list;
      if ( !skillinfoid_list )
LABEL_21:
        sub_B170D4();
      v19 = 8LL;
      while ( 1 )
      {
        max_length = skillinfoid_list->max_length;
        v21 = v19 - 8;
        if ( v19 - 8 >= (int)max_length )
          break;
        if ( v21 >= max_length )
        {
          sub_B17100(InfoId, v15, v16);
          sub_B170A0();
        }
        v22 = *((_DWORD *)&skillinfoid_list->obj.klass + v19);
        InfoId = BattleSkillInfoData__getInfoId(current, 0LL);
        if ( v22 == (_DWORD)InfoId )
        {
          skillcharge_list = save->fields.skillcharge_list;
          if ( !skillcharge_list )
            sub_B170D4();
          if ( v21 >= skillcharge_list->max_length )
          {
            sub_B17100(InfoId, v15, v16);
            sub_B170A0();
          }
          current->fields.chargeTurn = *((_DWORD *)&skillcharge_list->obj.klass + v19);
        }
        skillinfoid_list = save->fields.skillinfoid_list;
        ++v19;
        if ( !skillinfoid_list )
          goto LABEL_21;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  if ( (this->fields.deckIndex & 0x80000000) != 0 )
    this->fields.deckIndex = this->fields.index;
  this->fields.dressDispId = save->fields.dressDispId;
  this->fields.accumulationDamage = save->fields.accumulationDamage;
  statestring = save->fields.statestring;
  this->fields.statestring = statestring;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.statestring,
    (System_Int32_array **)statestring,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.shiftDeckIndex = save->fields.shiftDeckIndex;
  this->fields.changeSvtIndex = save->fields.changeSvtIndex;
  lowLimitShift = save->fields.lowLimitShift;
  this->fields.tmpAppearanceId = -1;
  this->fields.lowLimitShift = lowLimitShift;
  if ( BattleServantData__isChangeAppearance(this, v32) )
  {
    tmpAppearanceId = this->fields.tmpAppearanceId;
    this->fields.tmpAppearanceId = -1;
    this->fields.appearanceId = tmpAppearanceId;
  }
  this->fields.isSleepWaitMode = save->fields.isSleepWaitMode;
  this->fields.IsAlreadyDrop = save->fields.isAlreadyDrop;
  this->fields.playedNPCount = save->fields.playedNPCount;
  this->fields.maxDefeatPoint = save->fields.maxDefeatPoint;
  this->fields.defeatPoint = save->fields.defeatPoint;
  this->fields.befSquareIndex = save->fields.befSquareIndex;
  this->fields.aftSquareIndex = save->fields.aftSquareIndex;
  this->fields.isAppliedHaveStars = save->fields.isAppliedHaveStars;
  this->fields.squareEffectSkillId = save->fields.squareEffectSkillId;
  this->fields.squareEffectSkillLv = save->fields.squareEffectSkillLv;
  this->fields.deadtype = save->fields.deadtype;
  this->fields.tdErrorTouchCount = save->fields.tdErrorTouchCount;
  this->fields.flgEntryFunction = save->fields.flgEntryFunction;
  commandAssistIds = save->fields.commandAssistIds;
  this->fields.commandAssistIds = commandAssistIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandAssistIds,
    (System_Int32_array **)commandAssistIds,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  return 1;
}


void __fastcall BattleServantData__setServantData(
        BattleServantData_o *this,
        BattleDeckServantData_o *inDeckSvt,
        BattleEntity_o *battleEnt,
        int32_t infollowerType,
        System_String_o *saveStr,
        System_Collections_Generic_List_commandAssistData__o *commandAssistDataList,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7
  __int64 v14; // x1
  BattleServantData_SaveData_o *v15; // x4

  if ( (byte_40F8A32 & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_Deserialize_BattleServantData_SaveData___, inDeckSvt);
    sub_B16FFC(&JsonManager_TypeInfo, v14);
    byte_40F8A32 = 1;
  }
  if ( saveStr )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = (BattleServantData_SaveData_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                            (Il2CppObject *)saveStr,
                                            (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
  }
  else
  {
    v15 = 0LL;
  }
  BattleServantData__setServantData_22718064(
    this,
    inDeckSvt,
    battleEnt,
    infollowerType,
    v15,
    0LL,
    commandAssistDataList,
    v7);
}


void __fastcall BattleServantData__setServantData_22718064(
        BattleServantData_o *this,
        BattleDeckServantData_o *inDeckSvt,
        BattleEntity_o *battleEnt,
        int32_t infollowerType,
        BattleServantData_SaveData_o *saveData,
        BattleData_o *battleData,
        System_Collections_Generic_List_commandAssistData__o *commandAssistDataList,
        const MethodInfo *method)
{
  __int64 v15; // x1
  struct System_Int32_array *ShiftList; // x0
  struct System_Int32_array **p_shiftDeckList; // x26
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Int32_array *v24; // x0
  struct System_Int32_array **p_changeSvtList; // x28
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BattleServantData_o *DefShiftPosition; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x4
  int v37; // w27
  int32_t shiftDeckIndex; // w8
  int32_t changeSvtIndex; // w9
  struct System_Int32_array *v40; // x9
  unsigned int max_length; // w10
  int32_t DispBreakShift; // w0
  struct System_Int32_array *v43; // x26
  int32_t v44; // w1
  int32_t v45; // w28
  struct System_Int32_array *shiftDeckList; // x8
  char *v47; // x8
  BattleInfoData_o *battleInfo; // x1
  BattleInfoData_o *v49; // x2
  int32_t inited; // w25
  const MethodInfo *v51; // x6
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x2
  BattleDeckServantData_o *inDeckSvta; // [xsp+8h] [xbp-58h] BYREF

  inDeckSvta = inDeckSvt;
  if ( (byte_40F8A33 & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, inDeckSvt);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    byte_40F8A33 = 1;
  }
  if ( !inDeckSvt )
    goto LABEL_41;
  ShiftList = BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  p_shiftDeckList = &this->fields.shiftDeckList;
  this->fields.shiftDeckList = ShiftList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.shiftDeckList,
    (System_Int32_array **)ShiftList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = BattleDeckServantData__getChangeList(inDeckSvt, 0LL);
  p_changeSvtList = &this->fields.changeSvtList;
  this->fields.changeSvtList = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.changeSvtList,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields._IsChangeDropItemByShift_k__BackingField = BattleDeckServantData__IsChangeDropItemByShift(inDeckSvt, 0LL);
  DefShiftPosition = (BattleServantData_o *)BattleDeckServantData__GetDefShiftPosition(inDeckSvt, -1LL, 0LL);
  v37 = (int)DefShiftPosition;
  if ( ((unsigned int)DefShiftPosition & 0x80000000) == 0 )
  {
    this->fields.lowLimitShift = (_DWORD)DefShiftPosition + 1;
    this->fields.shiftDeckIndex = (_DWORD)DefShiftPosition + 1;
    this->fields.shiftSubCount = 1;
  }
  if ( saveData )
  {
    shiftDeckIndex = saveData->fields.shiftDeckIndex;
    changeSvtIndex = saveData->fields.changeSvtIndex;
    if ( shiftDeckIndex <= 0 )
    {
      if ( changeSvtIndex < 1 )
        goto LABEL_29;
    }
    else if ( changeSvtIndex <= 0 )
    {
      v40 = *p_shiftDeckList;
      if ( !*p_shiftDeckList )
        goto LABEL_41;
      max_length = v40->max_length;
      --shiftDeckIndex;
      goto LABEL_23;
    }
    v40 = *p_changeSvtList;
    if ( !*p_changeSvtList )
      goto LABEL_41;
    max_length = v40->max_length;
LABEL_23:
    if ( shiftDeckIndex < max_length )
    {
      v47 = (char *)v40 + 4 * shiftDeckIndex;
      goto LABEL_25;
    }
LABEL_42:
    sub_B17100(DefShiftPosition, v33, v34);
    sub_B170A0();
  }
  DispBreakShift = BattleDeckServantData__GetDispBreakShift(inDeckSvt, 0LL);
  if ( DispBreakShift < 1 )
    goto LABEL_29;
  v43 = *p_shiftDeckList;
  if ( !v43 )
    goto LABEL_29;
  v44 = v43->max_length;
  if ( this->fields.shiftDeckIndex >= v44 )
    goto LABEL_29;
  v45 = DispBreakShift;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v44 = v43->max_length;
  }
  DefShiftPosition = (BattleServantData_o *)System_Math__Min_44418752(v37 + v45 + 1, v44, 0LL);
  shiftDeckList = this->fields.shiftDeckList;
  this->fields.shiftDeckIndex = (int)DefShiftPosition;
  if ( !shiftDeckList )
LABEL_41:
    sub_B170D4();
  if ( (int)DefShiftPosition - 1 >= shiftDeckList->max_length )
    goto LABEL_42;
  v47 = (char *)shiftDeckList + 4 * (int)DefShiftPosition - 4;
LABEL_25:
  if ( battleEnt )
    battleInfo = battleEnt->fields.battleInfo;
  else
    battleInfo = 0LL;
  inDeckSvta = BattleServantData__SetShiftDeckData(DefShiftPosition, battleInfo, inDeckSvt, *((_DWORD *)v47 + 8), v36);
LABEL_29:
  if ( battleEnt )
    v49 = battleEnt->fields.battleInfo;
  else
    v49 = 0LL;
  inited = BattleServantData__setInitQuestShift(this, &inDeckSvta, v49, v35);
  BattleServantData__setBaseServantData(this, inDeckSvta, battleEnt, infollowerType, commandAssistDataList, 0, v51);
  BattleServantData__InitializeBuff(this, v52);
  BattleServantData__setInitQuest(this, inited, v53);
  if ( saveData )
  {
    this->fields.shiftNpcId = saveData->fields.shiftNpcId;
    this->fields.beforeUserSvtId = saveData->fields.beforeUserSvtId;
    this->fields.transformIndex = saveData->fields.transformIndex;
    this->fields.transformLimitCount = saveData->fields.transformLimitCount;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0LL, 0LL) )
    BattleServantData__loadTransformServant(this, battleData, v54);
  ((void (__fastcall *)(BattleServantData_o *, BattleServantData_SaveData_o *, Il2CppMethodPointer))this->klass->vtable._17_setSaveData.method)(
    this,
    saveData,
    this->klass->vtable._18_getAiState.methodPtr);
  if ( !battleEnt )
    goto LABEL_41;
  BattleServantData__SetCommandAssistSkill(this, battleEnt->fields.eventId, v55);
}


void __fastcall BattleServantData__setServantData_22720980(
        BattleServantData_o *this,
        BattleDeckServantData_o *inDeckSvt,
        BattleUserServantData_o *userSvt,
        BattleInfoData_o *battleInfo,
        CommandCodeInfo_array *userCommandCode,
        int32_t infollowerType,
        const MethodInfo *method)
{
  struct System_Int32_array *ShiftList; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Int32_array *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t DefShiftPosition; // w0
  const MethodInfo *v28; // x3
  int32_t inited; // w24
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // [xsp+8h] [xbp-48h]
  BattleDeckServantData_o *inDeckSvta; // [xsp+18h] [xbp-38h] BYREF

  inDeckSvta = inDeckSvt;
  if ( !inDeckSvt )
    sub_B170D4();
  ShiftList = BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  this->fields.shiftDeckList = ShiftList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.shiftDeckList,
    (System_Int32_array **)ShiftList,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = BattleDeckServantData__getChangeList(inDeckSvt, 0LL);
  this->fields.changeSvtList = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.changeSvtList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields._IsChangeDropItemByShift_k__BackingField = BattleDeckServantData__IsChangeDropItemByShift(inDeckSvt, 0LL);
  DefShiftPosition = BattleDeckServantData__GetDefShiftPosition(inDeckSvt, -1LL, 0LL);
  if ( (DefShiftPosition & 0x80000000) == 0 )
  {
    this->fields.lowLimitShift = DefShiftPosition + 1;
    this->fields.shiftDeckIndex = DefShiftPosition + 1;
    this->fields.shiftSubCount = 1;
  }
  inited = BattleServantData__setInitQuestShift(this, &inDeckSvta, battleInfo, v28);
  BattleServantData__setBaseServantData_22721260(
    this,
    inDeckSvta,
    userSvt,
    battleInfo,
    userCommandCode,
    0,
    infollowerType,
    0LL,
    0,
    v32);
  BattleServantData__InitializeBuff(this, v30);
  BattleServantData__setInitQuest(this, inited, v31);
}


void __fastcall BattleServantData__setShiftServant(
        BattleServantData_o *this,
        BattleData_o *data,
        int32_t shiftValue,
        const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0
  int32_t maxtpturn; // w24
  int32_t nexttpturn; // w25
  BattleBuffData_o *buffData; // x22
  int32_t uniqueId; // w23
  System_Int32_array *ShiftClearBuffIndiv; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int32_array *shiftDeckList; // x9
  int32_t v17; // w8
  struct System_Int32_array *changeSvtList; // x9
  char *v19; // x8
  int32_t *v20; // x8
  BattleInfoData_o *battle_info; // x0
  BattleDeckServantData_o *ShiftServantData; // x0
  BattleDeckServantData_o *v23; // x21
  BattleEntity_o *battle_ent; // x20
  int32_t Int; // w0
  const MethodInfo *v26; // x6
  const MethodInfo *v27; // x1
  unsigned int MaxHp; // w0
  int32_t v29; // w8
  int32_t v30; // w10
  int v31; // w8

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_20;
  maxtpturn = this->fields.maxtpturn;
  nexttpturn = this->fields.nexttpturn;
  buffData = this->fields.buffData;
  uniqueId = this->fields.uniqueId;
  ShiftClearBuffIndiv = BattleDeckServantData__getShiftClearBuffIndiv(deckSvt, 0LL);
  if ( !buffData
    || (BattleBuffData__InitializeShift(buffData, uniqueId, ShiftClearBuffIndiv, 0LL),
        shiftDeckList = this->fields.shiftDeckList,
        v17 = this->fields.shiftDeckIndex + shiftValue,
        this->fields.shiftDeckIndex = v17,
        !shiftDeckList) )
  {
LABEL_20:
    sub_B170D4();
  }
  if ( v17 - 1 >= shiftDeckList->max_length )
    goto LABEL_21;
  if ( !this->fields.changeSvtIndex )
  {
    v19 = (char *)shiftDeckList + 4 * v17 - 4;
    goto LABEL_10;
  }
  changeSvtList = this->fields.changeSvtList;
  if ( !changeSvtList )
    goto LABEL_20;
  if ( v17 >= changeSvtList->max_length )
  {
LABEL_21:
    sub_B17100(v13, v14, v15);
    sub_B170A0();
  }
  v19 = (char *)changeSvtList + 4 * v17;
LABEL_10:
  v20 = (int32_t *)(v19 + 32);
  if ( !data )
    goto LABEL_20;
  battle_info = data->fields.battle_info;
  if ( !battle_info )
    goto LABEL_20;
  ShiftServantData = BattleInfoData__getShiftServantData(battle_info, *v20, 0LL);
  if ( !ShiftServantData )
    goto LABEL_20;
  v23 = ShiftServantData;
  ShiftServantData->fields.id = this->fields.index + 1;
  ShiftServantData->fields.uniqueId = this->fields.uniqueId;
  battle_ent = data->fields.battle_ent;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v23, battle_ent, Int, 0LL, 0, v26);
  MaxHp = BattleServantData__getMaxHp(this, v27);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v29 = this->fields.maxtpturn;
  if ( nexttpturn <= v29 )
    v30 = nexttpturn;
  else
    v30 = this->fields.maxtpturn;
  if ( maxtpturn <= v29 )
    v31 = nexttpturn - maxtpturn + v29;
  else
    v31 = v30;
  this->fields.nexttpturn = v31 & ~(v31 >> 31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__setSkillShiftServant(
        BattleServantData_o *this,
        BattleData_o *data,
        int32_t npcId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  System_Collections_Generic_List_int__o *v13; // x21
  const MethodInfo *v14; // x1
  BattleSkillInfoData_array *ActiveSkillInfos; // x0
  const MethodInfo *v16; // x1
  __int64 v17; // x22
  BattleSkillInfoData_array *v18; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  BattleSkillInfoData_o *v21; // x8
  const MethodInfo *v22; // x1
  BattleInfoData_o *battle_info; // x0
  BattleDeckServantData_o *ShiftServantData; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattleDeckServantData_o *v31; // x22
  struct BattleDeckServantData_o *v32; // x8
  int64_t userSvtId; // x9
  BattleEntity_o *battle_ent; // x23
  int32_t Int; // w0
  const MethodInfo *v36; // x6
  const MethodInfo *v37; // x1
  BattleSkillInfoData_array *v38; // x0
  const MethodInfo *v39; // x1
  unsigned __int64 v40; // x22
  signed __int64 size; // x24
  BattleSkillInfoData_o *v42; // x23
  int32_t v43; // w8
  BattleInfoData_o *v44; // x0
  BattleUserServantData_o *UserServantFromID; // x0

  if ( (byte_40F8A3D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, data);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_40F8A3D = 1;
  }
  if ( (npcId & 0x80000000) == 0 )
  {
    deckSvt = this->fields.deckSvt;
    *(_QWORD *)&this->fields.transformIndex = 0xFFFFFFFFLL;
    this->fields.shiftNpcId = npcId;
    if ( !deckSvt )
      goto LABEL_39;
    this->fields.beforeUserSvtId = deckSvt->fields.userSvtId;
    v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      data,
                                                      *(_QWORD *)&npcId,
                                                      method,
                                                      v4);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !this->fields.isEnemy )
    {
      ActiveSkillInfos = BattleServantData__getActiveSkillInfos(this, v14);
      if ( !ActiveSkillInfos )
        goto LABEL_39;
      v17 = 0LL;
      while ( (int)v17 < (signed int)ActiveSkillInfos->max_length )
      {
        v18 = BattleServantData__getActiveSkillInfos(this, v16);
        if ( v18 )
        {
          if ( (unsigned int)v17 >= v18->max_length )
          {
LABEL_40:
            sub_B17100(v18, v19, v20);
            sub_B170A0();
          }
          v21 = v18->m_Items[v17];
          if ( v21 )
          {
            if ( v13 )
            {
              System_Collections_Generic_List_int___Add(
                v13,
                v21->fields.chargeTurn,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              ActiveSkillInfos = BattleServantData__getActiveSkillInfos(this, v22);
              ++v17;
              if ( ActiveSkillInfos )
                continue;
            }
          }
        }
        goto LABEL_39;
      }
    }
    if ( data )
    {
      battle_info = data->fields.battle_info;
      if ( battle_info )
      {
        ShiftServantData = BattleInfoData__getShiftServantData(battle_info, this->fields.shiftNpcId, 0LL);
        if ( !ShiftServantData )
          return;
        v31 = ShiftServantData;
        v32 = this->fields.deckSvt;
        if ( v32 )
        {
          userSvtId = ShiftServantData->fields.userSvtId;
          ShiftServantData->fields.isFollowerSvt = v32->fields.isFollowerSvt;
          this->fields.transformUserSvtId = userSvtId;
          this->fields.deckSvt = ShiftServantData;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.deckSvt,
            (System_Int32_array **)ShiftServantData,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          v31->fields.id = this->fields.index + 1;
          v31->fields.uniqueId = this->fields.uniqueId;
          battle_ent = data->fields.battle_ent;
          Int = Follower__getInt(this->fields.followerType, 0LL);
          BattleServantData__setBaseServantData(this, v31, battle_ent, Int, 0LL, 0, v36);
          if ( !this->fields.isEnemy )
          {
            v38 = BattleServantData__getActiveSkillInfos(this, v37);
            if ( !v38 )
              goto LABEL_39;
            v40 = 0LL;
            while ( (__int64)v40 < (int)v38->max_length )
            {
              if ( !v13 )
                goto LABEL_39;
              size = v13->fields._size;
              v18 = BattleServantData__getActiveSkillInfos(this, v39);
              if ( !v18 )
                goto LABEL_39;
              if ( v40 >= v18->max_length )
                goto LABEL_40;
              v42 = v18->m_Items[v40];
              if ( (__int64)v40 >= size )
              {
                if ( !v42 )
                  goto LABEL_39;
                v43 = 0;
              }
              else
              {
                if ( v40 >= (unsigned int)v13->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                if ( !v42 )
                  goto LABEL_39;
                v43 = v13->fields._items->m_Items[v40 + 1];
              }
              v42->fields.chargeTurn = v43;
              ++v40;
              v38 = BattleServantData__getActiveSkillInfos(this, v19);
              if ( !v38 )
                goto LABEL_39;
            }
          }
          v44 = data->fields.battle_info;
          if ( v44 )
          {
            UserServantFromID = BattleInfoData__getUserServantFromID(v44, this->fields.transformUserSvtId, 0LL);
            if ( UserServantFromID )
            {
              this->fields.transformSvtId = BattleUserServantData__getBattleSvtId(UserServantFromID, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_39:
    sub_B170D4();
  }
}


void __fastcall BattleServantData__setStateString(
        BattleServantData_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.statestring = str;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.statestring,
    (System_Int32_array **)str,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleServantData__setTestSaveData(
        BattleServantData_o *this,
        BattleServantData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save )
    sub_B170D4();
  this->fields.summonNpcId = save->fields.summonNpcId;
  this->fields.uniqueId = save->fields.uniqueId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__setTransformServant(
        BattleServantData_o *this,
        BattleData_o *data,
        int32_t transformIndex,
        int32_t overwriteLimitCount,
        bool fromLoad,
        const MethodInfo *method)
{
  int shiftNpcId; // w2
  BattleInfoData_o *battle_info; // x0
  int32_t uniqueId; // w1
  BattleDeckServantData_o *TransformDeckServantData; // x0
  struct BattleDeckServantData_o *deckSvt; // x8
  struct BattleDeckServantData_o *v16; // x24
  int64_t userSvtId; // x1
  BattleInfoData_o *v18; // x0
  BattleUserServantData_o *UserServantFromID; // x21
  const MethodInfo *v20; // x4
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t atk; // w8
  int32_t hp; // w9
  int32_t maxActNum; // w10
  int32_t actPriority; // w10
  int32_t v31; // w9
  struct System_String_o *name; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int32_array *individuality; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x22
  __int64 v47; // x23
  int32_t v48; // w0
  const MethodInfo *v49; // x2
  struct System_String_o *ServantOverwriteName; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int32_t v57; // w0
  const MethodInfo *v58; // x2
  struct System_String_o *BattleServantOverwriteName; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x2
  BattleServantData_o *v67; // x0
  BattleUserServantData_o *v68; // x1
  BattleDeckServantData_o *DeckServantDataFromBothDeck; // x0
  struct BattleDeckServantData_o *v70; // x21
  BattleInfoData_o *v71; // x0
  BattleUserServantData_o *v72; // x20
  const MethodInfo *v73; // x4
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  int32_t v80; // w8
  int32_t v81; // w9
  int32_t v82; // w10
  int32_t v83; // w10
  int32_t v84; // w9
  struct System_String_o *v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct System_Int32_array *v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  __int64 v99; // x21
  __int64 v100; // x22
  int32_t v101; // w0
  const MethodInfo *v102; // x2
  struct System_String_o *v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  int32_t v110; // w0
  const MethodInfo *v111; // x2
  struct System_String_o *v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  const MethodInfo *v119; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16

  if ( (byte_40F8A3A & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, data);
    byte_40F8A3A = 1;
  }
  shiftNpcId = this->fields.shiftNpcId;
  if ( shiftNpcId >= 1 )
  {
    BattleServantData__setSkillShiftServant(this, data, shiftNpcId, *(const MethodInfo **)&overwriteLimitCount);
    return;
  }
  if ( !data )
    goto LABEL_35;
  battle_info = data->fields.battle_info;
  if ( !battle_info )
    goto LABEL_35;
  uniqueId = this->fields.uniqueId;
  if ( transformIndex != -1 )
  {
    TransformDeckServantData = BattleInfoData__getTransformDeckServantData(battle_info, uniqueId, transformIndex, 0LL);
    deckSvt = this->fields.deckSvt;
    if ( deckSvt )
    {
      v16 = TransformDeckServantData;
      if ( TransformDeckServantData )
      {
        TransformDeckServantData->fields.isFollowerSvt = deckSvt->fields.isFollowerSvt;
        this->fields.transformIndex = transformIndex;
        this->fields.transformLimitCount = overwriteLimitCount;
        userSvtId = TransformDeckServantData->fields.userSvtId;
        this->fields.transformUserSvtId = userSvtId;
        v18 = data->fields.battle_info;
        if ( v18 )
        {
          UserServantFromID = BattleInfoData__getUserServantFromID(v18, userSvtId, 0LL);
          BattleServantData__UpdateClassBoardSkillBuff(this, UserServantFromID, data, fromLoad, v20);
          this->fields.deckSvt = v16;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.deckSvt,
            (System_Int32_array **)v16,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          if ( UserServantFromID )
          {
            atk = UserServantFromID->fields.atk;
            this->fields.atk = atk;
            hp = UserServantFromID->fields.hp;
            this->fields.maxhp = hp;
            this->fields.maxtpturn = UserServantFromID->fields.chargeTurn;
            maxActNum = UserServantFromID->fields.maxActNum;
            if ( maxActNum )
              this->fields.maxActNum = maxActNum;
            actPriority = UserServantFromID->fields.actPriority;
            if ( actPriority )
              this->fields.actPriority = actPriority;
            v31 = this->fields.equiphp + hp;
            this->fields.atk = this->fields.equipatk + atk;
            this->fields.maxhp = v31;
            this->fields.downstarrate = UserServantFromID->fields.starRate;
            this->fields.downtdrate = UserServantFromID->fields.tdRate;
            this->fields.atktdrate = UserServantFromID->fields.tdAttackRate;
            this->fields.deathRate = UserServantFromID->fields.deathRate;
            this->fields.criticalRate = UserServantFromID->fields.criticalRate;
            this->fields.treasuredvcId = UserServantFromID->fields.treasureDeviceId;
            this->fields.treasuredvcLevel = UserServantFromID->fields.treasureDeviceLv;
            this->fields.transformSvtId = BattleUserServantData__getBattleSvtId(UserServantFromID, 0LL);
            this->fields._imageSvtId_k__BackingField = UserServantFromID->fields.imageSvtId;
            name = v16->fields.name;
            this->fields.svtName = name;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.svtName,
              (System_Int32_array **)name,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            this->fields.overkillTargetId = -1;
            individuality = UserServantFromID->fields.individuality;
            this->fields.svtIndividuality = individuality;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.svtIndividuality,
              (System_Int32_array **)individuality,
              v40,
              v41,
              v42,
              v43,
              v44,
              v45);
            v47 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.currentCryptoKey;
            v46 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v120.fields.currentCryptoKey = v47;
            *(_QWORD *)&v120.fields.fakeValue = v46;
            v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v120, 0LL);
            ServantOverwriteName = BattleServantData__getServantOverwriteName(this, v48, v49);
            this->fields.svtOverwriteName = ServantOverwriteName;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.svtOverwriteName,
              (System_Int32_array **)ServantOverwriteName,
              v51,
              v52,
              v53,
              v54,
              v55,
              v56);
            v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                    UserServantFromID->fields.svtId,
                    0LL);
            BattleServantOverwriteName = BattleServantData__getBattleServantOverwriteName(this, v57, v58);
            this->fields.svtOverwriteBattleName = BattleServantOverwriteName;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName,
              (System_Int32_array **)BattleServantOverwriteName,
              v60,
              v61,
              v62,
              v63,
              v64,
              v65);
            if ( overwriteLimitCount >= 1 )
            {
              this->fields._dispLimitCount_k__BackingField = UserServantFromID->fields.dispLimitCount;
              this->fields._commandCardLimitCount_k__BackingField = UserServantFromID->fields.commandCardLimitCount;
              this->fields._iconLimitCount_k__BackingField = UserServantFromID->fields.iconLimitCount;
            }
            v67 = this;
            v68 = UserServantFromID;
LABEL_33:
            BattleServantData__OverwriteSkillsForTransformedServant(v67, v68, v66);
            return;
          }
        }
      }
    }
    goto LABEL_35;
  }
  DeckServantDataFromBothDeck = BattleInfoData__GetDeckServantDataFromBothDeck(battle_info, uniqueId, 0LL);
  if ( DeckServantDataFromBothDeck )
  {
    *(_QWORD *)&this->fields.transformIndex = 0xFFFFFFFFLL;
    this->fields.transformUserSvtId = -1LL;
    v70 = DeckServantDataFromBothDeck;
    v71 = data->fields.battle_info;
    if ( v71 )
    {
      v72 = BattleInfoData__getUserServantFromID(v71, v70->fields.userSvtId, 0LL);
      BattleServantData__UpdateClassBoardSkillBuff(this, v72, data, fromLoad, v73);
      this->fields.deckSvt = v70;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.deckSvt,
        (System_Int32_array **)v70,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
      if ( v72 )
      {
        v80 = v72->fields.atk;
        this->fields.atk = v80;
        v81 = v72->fields.hp;
        this->fields.maxhp = v81;
        this->fields.maxtpturn = v72->fields.chargeTurn;
        v82 = v72->fields.maxActNum;
        if ( v82 )
          this->fields.maxActNum = v82;
        v83 = v72->fields.actPriority;
        if ( v83 )
          this->fields.actPriority = v83;
        v84 = this->fields.equiphp + v81;
        this->fields.atk = this->fields.equipatk + v80;
        this->fields.maxhp = v84;
        this->fields.downstarrate = v72->fields.starRate;
        this->fields.downtdrate = v72->fields.tdRate;
        this->fields.atktdrate = v72->fields.tdAttackRate;
        this->fields.deathRate = v72->fields.deathRate;
        this->fields.criticalRate = v72->fields.criticalRate;
        this->fields.treasuredvcId = v72->fields.treasureDeviceId;
        this->fields.treasuredvcLevel = v72->fields.treasureDeviceLv;
        this->fields.transformSvtId = BattleUserServantData__getBattleSvtId(v72, 0LL);
        this->fields._imageSvtId_k__BackingField = v72->fields.imageSvtId;
        v85 = v70->fields.name;
        this->fields.svtName = v85;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.svtName,
          (System_Int32_array **)v85,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91);
        this->fields.overkillTargetId = -1;
        v92 = v72->fields.individuality;
        this->fields.svtIndividuality = v92;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.svtIndividuality,
          (System_Int32_array **)v92,
          v93,
          v94,
          v95,
          v96,
          v97,
          v98);
        v100 = *(_QWORD *)&v72->fields.svtId.fields.currentCryptoKey;
        v99 = *(_QWORD *)&v72->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v121.fields.currentCryptoKey = v100;
        *(_QWORD *)&v121.fields.fakeValue = v99;
        v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v121, 0LL);
        v103 = BattleServantData__getServantOverwriteName(this, v101, v102);
        this->fields.svtOverwriteName = v103;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.svtOverwriteName,
          (System_Int32_array **)v103,
          v104,
          v105,
          v106,
          v107,
          v108,
          v109);
        v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v72->fields.svtId, 0LL);
        v112 = BattleServantData__getBattleServantOverwriteName(this, v110, v111);
        this->fields.svtOverwriteBattleName = v112;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName,
          (System_Int32_array **)v112,
          v113,
          v114,
          v115,
          v116,
          v117,
          v118);
        BattleServantData__CalculateLimitCountWithSpoilerProtection(this, v72, v119);
        v67 = this;
        v68 = v72;
        goto LABEL_33;
      }
    }
LABEL_35:
    sub_B170D4();
  }
}


void __fastcall BattleServantData__set_IsBattleShift(BattleServantData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsBattleShift_k__BackingField = value;
}


void __fastcall BattleServantData__set_IsChangeDropItemByShift(
        BattleServantData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsChangeDropItemByShift_k__BackingField = value;
}


void __fastcall BattleServantData__set_IsSilentDead(BattleServantData_o *this, bool value, const MethodInfo *method)
{
  this->fields.isSilnetDead = value;
}


void __fastcall BattleServantData__set_LoadedAssetArgs(
        BattleServantData_o *this,
        ServantAssetArgs_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._LoadedAssetArgs_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._LoadedAssetArgs_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleServantData__set_ShuffleSeed(BattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._shuffuleSeed = value;
}


void __fastcall BattleServantData__set_classBoardSquareIds(
        BattleServantData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._classBoardSquareIds_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._classBoardSquareIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleServantData__set_commandCardLimitCount(
        BattleServantData_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value,
        const MethodInfo *method)
{
  this->fields._commandCardLimitCount_k__BackingField = value;
}


void __fastcall BattleServantData__set_commandCodeList(
        BattleServantData_o *this,
        System_Collections_Generic_List_CommandCodeInfo__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._commandCodeList_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._commandCodeList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleServantData__set_dispLimitCount(
        BattleServantData_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value,
        const MethodInfo *method)
{
  this->fields._dispLimitCount_k__BackingField = value;
}


void __fastcall BattleServantData__set_frameType(BattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._frameType_k__BackingField = value;
}


void __fastcall BattleServantData__set_hp(BattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._hp_k__BackingField = value;
}


void __fastcall BattleServantData__set_iconLimitCount(
        BattleServantData_o *this,
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o value,
        const MethodInfo *method)
{
  this->fields._iconLimitCount_k__BackingField = value;
}


void __fastcall BattleServantData__set_imageSvtId(BattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._imageSvtId_k__BackingField = value;
}


void __fastcall BattleServantData__set_minActNum(BattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._minActNum_k__BackingField = value;
}


void __fastcall BattleServantData__set_reducedhp(BattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._reducedhp_k__BackingField = value;
}


void __fastcall BattleServantData__set_resultHp(BattleServantData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._resultHp_k__BackingField = value;
}


void __fastcall BattleServantData__set_servantCollectionId(
        BattleServantData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._servantCollectionId_k__BackingField = value;
}


void __fastcall BattleServantData__shiftUpdateStatus(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A8B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22008, v7);
    byte_40F8A8B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22008,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__skillChageExtend(
        BattleServantData_o *this,
        int32_t param,
        int32_t max,
        int32_t targetIndex,
        System_Int32_array *targetList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x26
  __int64 v13; // x24
  char v14; // w25
  int size; // w8
  BattleSkillInfoData_o *v16; // x0
  bool v17; // w0

  if ( (byte_40F8A96 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, *(_QWORD *)&param);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v11);
    byte_40F8A96 = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_10:
    sub_B170D4();
  v13 = 0LL;
  v14 = 0;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v13 >= size )
      return v14 & 1;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = skillInfoList->fields._items->m_Items[v13];
    if ( v16 )
    {
      v17 = BattleSkillInfoData__TurnExtend(v16, param, max, targetIndex, targetList, 0LL);
      skillInfoList = this->fields.skillInfoList;
      v14 |= v17;
      ++v13;
      if ( skillInfoList )
        continue;
    }
    goto LABEL_10;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__skillChageShorten(
        BattleServantData_o *this,
        int32_t param,
        int32_t max,
        int32_t targetIndex,
        System_Int32_array *targetList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x26
  __int64 v13; // x24
  char v14; // w25
  int size; // w8
  BattleSkillInfoData_o *v16; // x0
  bool v17; // w0

  if ( (byte_40F8A95 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, *(_QWORD *)&param);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v11);
    byte_40F8A95 = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_10:
    sub_B170D4();
  v13 = 0LL;
  v14 = 0;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v13 >= size )
      return v14 & 1;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = skillInfoList->fields._items->m_Items[v13];
    if ( v16 )
    {
      v17 = BattleSkillInfoData__TurnProgress(v16, param, max, targetIndex, targetList, 0LL);
      skillInfoList = this->fields.skillInfoList;
      v14 |= v17;
      ++v13;
      if ( skillInfoList )
        continue;
    }
    goto LABEL_10;
  }
}


RemovedBuffInfo_o *__fastcall BattleServantData__subBuffFromIndividualites(
        BattleServantData_o *this,
        System_Int32_array *individuality,
        int32_t cntFromHead,
        int32_t cntFromTail,
        bool isCreateDummy,
        bool isForceSubState,
        const MethodInfo *method)
{
  int32_t MaxHp; // w0
  int32_t v14; // w20
  RemovedBuffInfo_o *v15; // x21
  const MethodInfo *v16; // x3

  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)individuality);
  if ( !this->fields.buffData )
    sub_B170D4();
  v14 = MaxHp;
  v15 = BattleBuffData__subBuffFromIndividualites(
          this->fields.buffData,
          individuality,
          cntFromHead,
          cntFromTail,
          isCreateDummy,
          isForceSubState,
          0LL);
  BattleServantData__checkUpdateUpdownHp(this, v14, 0, v16);
  return v15;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__turnBuffProgressing(
        BattleServantData_o *this,
        bool isEndEnemyTurn,
        System_Int32_array *fieldIndiv,
        BattleLogic_o *logic,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x23
  System_Int32_array *IgnoreAuraBuffIds; // x0
  bool v12; // w0
  bool v13; // w23
  const MethodInfo *v14; // x3
  BattleBuffData_BuffData_array *v15; // x21
  BattleBuffData_o *v16; // x23
  System_Int32_array *v17; // x0
  bool v18; // w23
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int max_length; // w8
  unsigned int v25; // w22
  BattleBuffData_BuffData_o *v26; // x8

  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_15;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(this->fields.buffData, 0LL);
  v12 = BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0LL);
  if ( !this->fields.buffData )
    goto LABEL_15;
  v13 = v12;
  v15 = BattleBuffData__turnProgressing(this->fields.buffData, logic, isEndEnemyTurn, this->fields.uniqueId, 0LL);
  if ( v13 )
  {
    v16 = this->fields.buffData;
    if ( !v16 )
      goto LABEL_15;
    v17 = BattleBuffData__GetIgnoreAuraBuffIds(this->fields.buffData, 0LL);
    v18 = BattleBuffData__checkBuffId(v16, v17, 0LL);
    if ( !logic )
      goto LABEL_15;
  }
  else
  {
    v18 = 1;
    if ( !logic )
      goto LABEL_15;
  }
  BattleServantData__updateConditionsBuff(this, fieldIndiv, logic->fields.perf, v14);
  BattleServantData__updateHp(this, v19);
  BattleServantData__updateBuff(this, v18, 1, v20);
  if ( !v15 )
    goto LABEL_15;
  max_length = v15->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        sub_B17100(v21, v22, v23);
        sub_B170A0();
      }
      v26 = v15->m_Items[v25];
      if ( !v26 )
        break;
      BattleLogic__removeDoNotSelectCommandCardBuff(logic, v26->fields.buffId, this, 0LL);
      max_length = v15->max_length;
      if ( (int)++v25 >= max_length )
        return v15;
    }
LABEL_15:
    sub_B170D4();
  }
  return v15;
}


void __fastcall BattleServantData__turnBuffProgressingIncrease(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  BattleBuffData__turnProgressingIncrease(buffData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__turnProgressing(
        BattleServantData_o *this,
        System_Int32_array *fieldIndiv,
        BattleLogic_o *logic,
        bool isAlive,
        BattleActionData_o *actiondata,
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
  BattleBuffData_CheckIndividualitiesData_o *v19; // x22
  BattleBuffData_o *buffData; // x0
  int32_t ActValue_31051136; // w0
  const MethodInfo *v22; // x2
  int32_t v23; // w24
  int32_t v24; // w20
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  BattleBuffData_o *v27; // x0
  int32_t ActValue_31050632; // w24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  BattleLogicBuff_ReduceHpProcess_o *v33; // x26
  BattleBuffData_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct BattleLogicBuff_ConvertReduceRegainProcess_o *convertDamageProc; // x8
  int TotalConvertReduceToRegainParam_k__BackingField; // w8
  int v41; // w20
  bool v42; // w24
  DataVals_o *v43; // x24
  BattleBuffData_o *v44; // x27
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  BattleBuffData_CheckIndividualitiesData_o *v49; // x28
  const MethodInfo *v50; // x2
  __int64 v51; // x27
  int32_t UpDownHeal; // w0
  __int64 v53; // x8
  const MethodInfo *v54; // x2
  BattleActionData_o *NoEffectObject; // x0
  int32_t FixDamage; // w27
  const MethodInfo *v57; // x2
  int v58; // w24
  struct System_Int32_array *shiftDeckList; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  __int64 v66; // x25
  __int64 v67; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  BattleBuffData_BuffData_array *v75; // x1
  BattleBuffData_o *v76; // x0
  BattleActionData_o *v77; // x0
  int32_t Wave; // w0
  const MethodInfo *v79; // x5
  BattleBuffData_o *v80; // x0
  int32_t v81; // w0
  int32_t v82; // w25
  BattleData_o *v83; // x0
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceStatus_o *statusPerf; // x0
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x0
  BattleBuffData_o *v87; // x0
  const MethodInfo *v88; // x3
  int max_length; // w8
  BattleBuffData_BuffData_array *v90; // x23
  unsigned int v91; // w20
  Il2CppClass **v92; // x25
  BattleBuffData_BuffData_o *v93; // x0
  BattleBuffData_BuffData_o **v94; // x25
  BattleBuffData_BuffData_o *v95; // t1
  BattleBuffData_BuffData_o *v96; // x8
  int32_t reCharge; // w9
  bool v98; // vf
  int v99; // w9
  struct BattleData_o *v100; // x8
  const MethodInfo *v101; // x1
  const MethodInfo *v102; // x1
  BattleBuffData_o *v103; // x0
  int32_t v104; // w22
  const MethodInfo *v105; // x2
  int maxtpturn; // w8
  AiState_o *aiState; // x0
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x3
  const MethodInfo *v110; // x3
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-80h] BYREF
  System_String_o *missText; // [xsp+38h] [xbp-68h] BYREF
  bool IsDisplayDamage; // [xsp+44h] [xbp-5Ch] BYREF
  bool actflg; // [xsp+48h] [xbp-58h] BYREF
  int32_t digit; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_40F8A61 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, fieldIndiv);
    sub_B16FFC(&BattleActionData_DamageData_TypeInfo, v10);
    sub_B16FFC(&DataVals_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v14);
    sub_B16FFC(&int___TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v16);
    sub_B16FFC(&BattleLogicBuff_ReduceHpProcess_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_1, v18);
    byte_40F8A61 = 1;
  }
  actflg = 0;
  IsDisplayDamage = 0;
  missText = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.isGutsSleepRelease = 1;
  digit = 1000;
  v19 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       fieldIndiv,
                                                       logic,
                                                       isAlive,
                                                       actiondata);
  BattleBuffData_CheckIndividualitiesData___ctor(v19, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !this->fields.isEnemy )
  {
    buffData = this->fields.buffData;
    if ( !buffData )
      goto LABEL_95;
    ActValue_31051136 = BattleBuffData__getActValue_31051136(buffData, 30, v19, 0LL);
    v23 = ActValue_31051136;
    if ( ActValue_31051136 <= 0 )
      v24 = ActValue_31051136;
    else
      v24 = 0;
    if ( BattleServantData__isGainNp(this, ActValue_31051136 > 0, v22) )
      v26 = v23;
    else
      v26 = v24;
    BattleServantData__addNp(this, v26, 1, v25);
  }
  actflg = 0;
  v27 = this->fields.buffData;
  if ( !v27 )
    goto LABEL_95;
  ActValue_31050632 = BattleBuffData__getActValue_31050632(v27, 32, &actflg, v19, 0LL);
  IsDisplayDamage = 0;
  missText = 0LL;
  v33 = (BattleLogicBuff_ReduceHpProcess_o *)sub_B170CC(BattleLogicBuff_ReduceHpProcess_TypeInfo, v29, v30, v31, v32);
  BattleLogicBuff_ReduceHpProcess___ctor(v33, this, 0LL);
  v34 = this->fields.buffData;
  if ( !v34 )
    goto LABEL_95;
  BattleBuffData__getActValue(v34, 33, &IsDisplayDamage, &missText, v19, (BattleLogicBuff_BaseProcess_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_95;
  convertDamageProc = v33->fields.convertDamageProc;
  if ( !convertDamageProc )
    goto LABEL_95;
  TotalConvertReduceToRegainParam_k__BackingField = convertDamageProc->fields._TotalConvertReduceToRegainParam_k__BackingField;
  v41 = TotalConvertReduceToRegainParam_k__BackingField + ActValue_31050632;
  if ( actflg )
  {
    if ( (v41 & 0x80000000) != 0 )
    {
      v42 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v42 = 0;
    if ( TotalConvertReduceToRegainParam_k__BackingField < 1 || (v41 & 0x80000000) != 0 )
      goto LABEL_33;
  }
  v43 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, v35, v36, v37, v38);
  DataVals___ctor(v43, (System_String_o *)StringLiteral_1, 0LL);
  v44 = this->fields.buffData;
  v49 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v45,
                                                       v46,
                                                       v47,
                                                       v48);
  BattleBuffData_CheckIndividualitiesData___ctor(v49, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v44 )
    goto LABEL_95;
  if ( BattleBuffData__isTurnBuff(v44, 42, v49, 1, 0LL) )
  {
    LODWORD(v51) = 0;
  }
  else
  {
    UpDownHeal = BattleServantData__getUpDownHeal(this, &digit, v50);
    if ( !v43 )
      goto LABEL_95;
    v53 = digit;
    v43->fields.isShowForcedEffect = 1;
    v51 = UpDownHeal * (__int64)v41 / v53;
  }
  BattleServantData__provisionalHeal(this, v51, v50);
  BattleServantData__resultHeal(this, v51, v54);
  if ( !actiondata )
    goto LABEL_95;
  BattleActionData__setHealData(actiondata, this->fields.uniqueId, v51, 0, 0, v43, 0, 0LL);
  if ( (int)v51 <= 0 )
  {
    if ( !v43 )
      goto LABEL_95;
    if ( !v43->fields.isShowForcedEffect )
    {
      if ( !logic )
        goto LABEL_95;
      NoEffectObject = BattleLogic__getNoEffectObject(logic, this->fields.uniqueId, 0, v43, 0, 0LL, 0LL);
      BattleActionData__addAction(actiondata, NoEffectObject, 0LL);
    }
  }
  v42 = 1;
LABEL_33:
  FixDamage = BattleLogicBuff_ReduceHpProcess__GetFixDamage(v33, 0LL);
  IsDisplayDamage = BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(v33, 0LL);
  if ( IsDisplayDamage )
  {
    v58 = FixDamage & ~(FixDamage >> 31);
    if ( !isAlive
      && ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
           this,
           this->klass->vtable._10_set_hp.methodPtr) <= v58 )
    {
      v58 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
              this,
              this->klass->vtable._10_set_hp.methodPtr)
          - 1;
    }
    shiftDeckList = this->fields.shiftDeckList;
    if ( shiftDeckList && this->fields.shiftDeckIndex < (signed int)shiftDeckList->max_length && this->fields.isEnemy )
    {
      if ( !logic )
        goto LABEL_95;
      data = logic->fields.data;
      if ( !data )
        goto LABEL_95;
      if ( data->fields.typeTurn == 2
        && ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
             this,
             this->klass->vtable._10_set_hp.methodPtr) <= v58 )
      {
        v58 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                this,
                this->klass->vtable._10_set_hp.methodPtr)
            - 1;
      }
    }
    BattleServantData__provisionalDamage(this, v58, v57);
    BattleServantData__resultDamage(this, v58, 0, v61);
    v66 = sub_B170CC(BattleActionData_DamageData_TypeInfo, v62, v63, v64, v65);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v66, 0LL);
    if ( !v66 )
      goto LABEL_95;
    *(_DWORD *)(v66 + 28) = this->fields.uniqueId;
    PassiveList = (BattleBuffData_BuffData_array *)sub_B17014(int___TypeInfo, 1LL, v67);
    if ( !PassiveList )
      goto LABEL_95;
    v75 = PassiveList;
    if ( !PassiveList->max_length )
      goto LABEL_96;
    LODWORD(PassiveList->m_Items[0]) = v58;
    *(_QWORD *)(v66 + 96) = PassiveList;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v66 + 96),
      (System_Int32_array **)PassiveList,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    *(_DWORD *)(v66 + 16) = 0;
    *(_BYTE *)(v66 + 128) = 1;
    if ( !actiondata
      || (BattleActionData__setDamageData(actiondata, (BattleActionData_DamageData_o *)v66, 0LL, 0, 0, 0LL),
          (v76 = this->fields.buffData) == 0LL)
      || (v77 = BattleBuffData__UseProgressingDoNotAct(v76, this, 1, 0LL),
          BattleActionData__addSideEffectActionData(actiondata, v77, 1, 0LL),
          !logic) )
    {
LABEL_95:
      sub_B170D4();
    }
    Wave = BattleLogic__getWave(logic, 0LL);
    BattleServantData__setActionHistory(this, -1, 5, Wave, 0, v79);
    v42 = 1;
  }
  if ( !this->fields.isEnemy )
  {
    v80 = this->fields.buffData;
    if ( !v80 )
      goto LABEL_95;
    v81 = BattleBuffData__getActValue_31051136(v80, 31, v19, 0LL);
    if ( !actiondata )
      goto LABEL_95;
    v82 = v81;
    BattleActionData__addCriticalStar(actiondata, v81, 0LL);
    if ( !logic )
      goto LABEL_95;
    v83 = logic->fields.data;
    if ( !v83 )
      goto LABEL_95;
    BattleData__addCriticalPoint(v83, v82, 0, 0LL);
    perf = logic->fields.perf;
    if ( !perf )
      goto LABEL_95;
    statusPerf = perf->fields.statusPerf;
    if ( !statusPerf )
      goto LABEL_95;
    BattlePerformanceStatus__updateCriticalPoint(statusPerf, -1, 1, 0LL);
  }
  if ( BattleServantData__canUseSkill(this, -1, v57) )
  {
    skillInfoList = this->fields.skillInfoList;
    if ( !skillInfoList )
      goto LABEL_95;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v113,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)skillInfoList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    for ( i = v113;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
          BattleSkillInfoData__TurnProgress((BattleSkillInfoData_o *)i.fields.current, 1, 0, -1, 0LL, 0LL) )
    {
      if ( !i.fields.current )
        sub_B170D4();
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  }
  v87 = this->fields.buffData;
  if ( !v87 )
    goto LABEL_95;
  PassiveList = BattleBuffData__getPassiveList(v87, 1, 0LL);
  if ( !PassiveList )
    goto LABEL_95;
  max_length = PassiveList->max_length;
  v90 = PassiveList;
  if ( max_length >= 1 )
  {
    v91 = 0;
    while ( v91 < max_length )
    {
      v92 = &v90->obj.klass + (int)v91;
      v95 = (BattleBuffData_BuffData_o *)v92[4];
      v94 = (BattleBuffData_BuffData_o **)(v92 + 4);
      v93 = v95;
      if ( !v95 )
        goto LABEL_95;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCodeBuff(v93, 0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        goto LABEL_77;
      if ( v91 >= v90->max_length )
        break;
      if ( !*v94 )
        goto LABEL_95;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(*v94, 0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
      {
LABEL_77:
        if ( v91 >= v90->max_length )
          break;
        v96 = *v94;
        if ( !*v94 )
          goto LABEL_95;
        reCharge = v96->fields.reCharge;
        v98 = __OFSUB__(reCharge, 1);
        v99 = reCharge - 1;
        if ( v99 < 0 == v98 )
          v96->fields.reCharge = v99;
      }
      max_length = v90->max_length;
      if ( (int)++v91 >= max_length )
        goto LABEL_82;
    }
LABEL_96:
    sub_B17100(PassiveList, v75, v69);
    sub_B170A0();
  }
LABEL_82:
  if ( !logic )
    goto LABEL_95;
  v100 = logic->fields.data;
  if ( !v100 )
    goto LABEL_95;
  if ( !BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(this, v100->fields.wavecount, v100->fields.turnCount, v88)
    && !BattleServantData__isTDSeraled(this, v101)
    && !BattleServantData__isNobleSeal(this, v102)
    && this->fields.treasuredvcId >= 1 )
  {
    v103 = this->fields.buffData;
    if ( !v103 )
      goto LABEL_95;
    v104 = BattleBuffData__getActValue_31051136(v103, 35, v19, 0LL);
    if ( BattleServantData__isGainNp(this, 1, v105) )
    {
      maxtpturn = this->fields.nexttpturn + ~v104;
      if ( this->fields.maxtpturn < maxtpturn )
        maxtpturn = this->fields.maxtpturn;
      this->fields.nexttpturn = maxtpturn & ~(maxtpturn >> 31);
    }
  }
  aiState = this->fields.aiState;
  if ( !aiState )
    goto LABEL_95;
  AiState__fieldTurnProgressing(aiState, 0LL);
  BattleServantData__updateHp(this, v108);
  BattleServantData__updateConditionsBuff(this, fieldIndiv, logic->fields.perf, v109);
  BattleServantData__updateBuff(this, 1, 1, v110);
  return v42;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__updateBuff(
        BattleServantData_o *this,
        bool doAuraUpdate,
        bool doClassIconAuraUpdate,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v18; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v26; // x20
  Il2CppObject *current; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F8A93 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, doAuraUpdate);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B16FFC(&Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__, v10);
    sub_B16FFC(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___, v12);
    sub_B16FFC(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass506_0__updateBuff_b__0__, v16);
    sub_B16FFC(&BattleServantData___c__DisplayClass506_0_TypeInfo, v17);
    byte_40F8A93 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v18 = sub_B170CC(BattleServantData___c__DisplayClass506_0_TypeInfo, doAuraUpdate, doClassIconAuraUpdate, method, v4);
  BattleServantData___c__DisplayClass506_0___ctor((BattleServantData___c__DisplayClass506_0_o *)v18, 0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)this,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        *(_BYTE *)(v18 + 24) = doAuraUpdate,
        *(_BYTE *)(v18 + 25) = doClassIconAuraUpdate,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v40 = v39;
  v26 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v18 + 32);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v40.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v32 = *v26;
      if ( !*v26 )
      {
        v32 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_B170CC(
                                                                              UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo,
                                                                              v28,
                                                                              v29,
                                                                              v30,
                                                                              v31);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v32,
          (Il2CppObject *)v18,
          Method_BattleServantData___c__DisplayClass506_0__updateBuff_b__0__,
          (const MethodInfo_283DB30 *)Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__);
        *v26 = v32;
        sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
      }
      if ( (BYTE3(UnityEngine_EventSystems_ExecuteEvents_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      }
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v32,
        (const MethodInfo_19CD2DC *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateConditionsBuff(
        BattleServantData_o *this,
        System_Int32_array *fieldInfividualities,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  int32_t v8; // w22
  const MethodInfo *v9; // x1
  int32_t MaxHp; // w24
  const MethodInfo *v11; // x2
  System_Int32_array *Individualities; // x25
  const MethodInfo *v13; // x4
  System_Int32_array *BuffIndividualities; // x26
  BattleActorControl_o *ServantActor; // x27
  const MethodInfo *v16; // x4
  BattleLogic_o *logic; // x28
  System_Int32_array *canSubStateBuffIndv; // x0
  const MethodInfo *v19; // x1

  if ( (byte_40F8ADB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, fieldInfividualities);
    byte_40F8ADB = 1;
  }
  buffData = this->fields.buffData;
  v8 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, BattlePerformance_o *, const MethodInfo *))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr,
         perf,
         method);
  MaxHp = BattleServantData__getMaxHp(this, v9);
  Individualities = BattleServantData__getIndividualities(this, 0LL, v11);
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 0, 0, 0, v13);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ServantActor = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL) )
  {
    if ( !perf )
      goto LABEL_17;
    ServantActor = BattlePerformance__getServantActor(perf, this->fields.uniqueId, 0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  logic = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL) )
  {
    if ( !perf )
      goto LABEL_17;
    logic = perf->fields.logic;
  }
  canSubStateBuffIndv = BattleServantData__getBuffIndividualities(this, 0, 0, 1, v16);
  if ( !buffData )
LABEL_17:
    sub_B170D4();
  BattleBuffData__changeBuffStateIfNeeded(
    buffData,
    v8,
    MaxHp,
    Individualities,
    BuffIndividualities,
    fieldInfividualities,
    ServantActor,
    logic,
    canSubStateBuffIndv,
    0LL);
  BattleServantData__checkUpdateResumptionHpFromLossMaxHp(this, v19);
}


void __fastcall BattleServantData__updateHp(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t MaxHp; // w20
  const MethodInfo *v9; // x1
  unsigned int v10; // w0
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A92 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_17209, v7);
    byte_40F8A92 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  MaxHp = BattleServantData__getMaxHp(this, method);
  if ( MaxHp < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                 this,
                 this->klass->vtable._10_set_hp.methodPtr) )
  {
    v10 = BattleServantData__getMaxHp(this, v9);
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
      this,
      v10,
      this->klass->vtable._11_get_reducedhp.methodPtr);
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v13.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17209,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateNpGauge(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A8C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22847, v7);
    byte_40F8A8C = 1;
  }
  memset(&v10, 0, sizeof(v10));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22847,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__updateNpGauge_22769496(
        BattleServantData_o *this,
        System_Int32_array *incNpArray,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v18; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v32; // x20
  Il2CppObject *current; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v38; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40F8A8D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, incNpArray);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B16FFC(&Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__, v10);
    sub_B16FFC(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___, v12);
    sub_B16FFC(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_BattleServantData___c__DisplayClass494_0__updateNpGauge_b__0__, v16);
    sub_B16FFC(&BattleServantData___c__DisplayClass494_0_TypeInfo, v17);
    byte_40F8A8D = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v18 = sub_B170CC(BattleServantData___c__DisplayClass494_0_TypeInfo, incNpArray, *(_QWORD *)&index, method, v4);
  BattleServantData___c__DisplayClass494_0___ctor((BattleServantData___c__DisplayClass494_0_o *)v18, 0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)this,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        *(_QWORD *)(v18 + 24) = incNpArray,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v18 + 24),
          (System_Int32_array **)incNpArray,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        *(_DWORD *)(v18 + 32) = index,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v46 = v45;
  v32 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v18 + 40);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v46.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v38 = *v32;
      if ( !*v32 )
      {
        v38 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_B170CC(
                                                                              UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo,
                                                                              v34,
                                                                              v35,
                                                                              v36,
                                                                              v37);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v38,
          (Il2CppObject *)v18,
          Method_BattleServantData___c__DisplayClass494_0__updateNpGauge_b__0__,
          (const MethodInfo_283DB30 *)Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__);
        *v32 = v38;
        sub_B16F98((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44);
      }
      if ( (BYTE3(UnityEngine_EventSystems_ExecuteEvents_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      }
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v38,
        (const MethodInfo_19CD2DC *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateResultState(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  v3 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, __int64, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v3,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
}


void __fastcall BattleServantData__updateTDGauge(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A8F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22852, v7);
    byte_40F8A8F = 1;
  }
  memset(&v10, 0, sizeof(v10));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22852,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateView(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F8A8E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22854, v7);
    byte_40F8A8E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      UnityEngine_GameObject__SendMessage_40692064(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22854,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool __fastcall BattleServantData__updownNextTDTurn(BattleServantData_o *this, int32_t val, const MethodInfo *method)
{
  int32_t nexttpturn; // w8
  int32_t maxtpturn; // w9
  int v5; // w9

  nexttpturn = this->fields.nexttpturn;
  maxtpturn = this->fields.maxtpturn;
  if ( maxtpturn >= nexttpturn + val )
    maxtpturn = nexttpturn + val;
  v5 = maxtpturn & ~(maxtpturn >> 31);
  this->fields.nexttpturn = v5;
  return nexttpturn != v5;
}


int32_t __fastcall BattleServantData__useGuts(
        BattleServantData_o *this,
        int32_t maxhp,
        System_String_o **motionName,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B170D4();
  return BattleBuffData__useGuts(buffData, maxhp, motionName, 0LL);
}


void __fastcall BattleServantData__useSkill(
        BattleServantData_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v7; // x20
  int32_t v8; // w0
  SkillLvEntity_o *Entity; // x0

  if ( (byte_40F8A60 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F8A60 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !skillInfo)
    || (v7 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster,
        v8 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
               skillInfo,
               skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        !v7)
    || (Entity = SkillLvMaster__GetEntity(v7, v8, skillInfo->fields.skilllv, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  skillInfo->fields.chargeTurn = Entity->fields.chargeTurn;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__usedTpWeapon(
        BattleServantData_o *this,
        int32_t addPer,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  UseNoblePhantasmWaveTurnEvent_o *v9; // x22
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0
  int32_t v11; // w0
  BattleBuffData_o *buffData; // x21
  int v13; // w23
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  BattleBuffData_CheckIndividualitiesData_o *v18; // x22
  int32_t v19; // w8

  if ( (byte_40F8A7D & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&addPer);
    sub_B16FFC(&UseNoblePhantasmWaveTurnEvent_TypeInfo, v8);
    byte_40F8A7D = 1;
  }
  this->fields.nexttpturn = this->fields.maxtpturn;
  v9 = (UseNoblePhantasmWaveTurnEvent_o *)sub_B170CC(
                                            UseNoblePhantasmWaveTurnEvent_TypeInfo,
                                            *(_QWORD *)&addPer,
                                            battleData,
                                            method,
                                            v4);
  UseNoblePhantasmWaveTurnEvent___ctor(v9, battleData, 0LL);
  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner
    || (ServantWaveTurnEventOwner__Add(waveTurnEventOwner, (ServantWaveTurnEvent_o *)v9, 0LL),
        v11 = BattleUtility__FloorToInt((float)((float)this->fields.np / (float)this->fields.lineMaxNp) * 100.0, 0LL),
        buffData = this->fields.buffData,
        v13 = v11,
        v18 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v14,
                                                             v15,
                                                             v16,
                                                             v17),
        BattleBuffData_CheckIndividualitiesData___ctor(v18, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_B170D4();
  }
  if ( v13 <= 100 )
    v13 = 100;
  v19 = v13 + addPer + 100 * BattleBuffData__getActValue_31051136(buffData, 60, v18, 0LL);
  if ( v19 >= 500 )
    v19 = 500;
  this->fields.tmp_npper = v19;
  this->fields.np = 0;
}


void __fastcall BattleServantData_Adjustment___ctor(BattleServantData_Adjustment_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData_ConnectData___ctor(
        BattleServantData_ConnectData_o *this,
        int32_t uniqueId,
        int32_t hp,
        int32_t atk,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.uniqueId = uniqueId;
  this->fields.hp = hp;
  this->fields.atk = atk;
}


void __fastcall BattleServantData_SaveData___ctor(BattleServantData_SaveData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *v4; // x0

  if ( (byte_40F71C8 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F71C8 = 1;
  }
  *(_QWORD *)&this->fields.deckIndex = -1LL;
  this->fields.dressDispId = -1;
  this->fields.shiftNpcId = -1;
  v4 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 5LL, v2);
  this->fields.commandAssistIds = v4;
  sub_B16F98(&this->fields.commandAssistIds, v4);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleServantData___c_StaticFields *static_fields; // x0

  if ( (byte_40F71C3 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantData___c_TypeInfo, v1);
    byte_40F71C3 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleServantData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleServantData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantData___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleServantData___c___ctor(BattleServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c___EnumerateSkillIndividuality_b__594_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.type != 20;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData___c___EnumerateSkillIndividuality_b__594_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return (System_Collections_Generic_IEnumerable_int__o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))x->klass->vtable._6_get_IndividualityArray.method)(
                                                            x,
                                                            x->klass->vtable._7_getCutInId.methodPtr);
}


bool __fastcall BattleServantData___c___ResetServantSelfSkill_b__358_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.type == 11;
}


bool __fastcall BattleServantData___c___getActiveSkillInfos_b__384_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return !s->fields.isPassive && s->fields.isUseSkill;
}


int32_t __fastcall BattleServantData___c___getAiParam_b__646_0(
        BattleServantData___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s;
}


int32_t __fastcall BattleServantData___c___getAttackSideEffectBuffList_b__423_0(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *a1,
        BattleBuffData_BuffData_o *a2,
        const MethodInfo *method)
{
  if ( !a1 || !a2 )
    sub_B170D4();
  return a1->fields.addOrder - a2->fields.addOrder;
}


bool __fastcall BattleServantData___c___getPassiveSkills_b__305_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.isPassive;
}


void __fastcall BattleServantData___c__615_object____cctor(const MethodInfo_1F89C78 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleServantData___c__615_T__c *klass; // x20
  Il2CppClass *_0_BattleServantData___c__615_T; // x20
  __int64 v8; // x0
  BattleServantData___c__615_T__c *v9; // x22
  System_Int32_array **v10; // x20
  __int16 v11; // w8
  BattleServantData___c__615_T__c *v12; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantData___c__615_T__c *v20; // x19
  Il2CppClass *_2_BattleServantData___c__615_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  _0_BattleServantData___c__615_T = klass->rgctx_data->_0_BattleServantData___c__615_T_;
  if ( (BYTE2(_0_BattleServantData___c__615_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_0_BattleServantData___c__615_T);
  v8 = sub_B170CC(_0_BattleServantData___c__615_T, v1, v2, v3, v4);
  v9 = method->klass;
  v10 = (System_Int32_array **)v8;
  v11 = WORD1(v9->vtable._0_Equals.methodPtr);
  v12 = v9;
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(method->klass);
    v12 = method->klass;
    v11 = WORD1(v12->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v9->rgctx_data->_1_BattleServantData___c__615_T___ctor->methodPointer;
  if ( (v11 & 1) == 0 )
    sub_AAFCFC(v12);
  methodPointer(v10, v12->rgctx_data->_1_BattleServantData___c__615_T___ctor);
  v20 = method->klass;
  if ( (BYTE2(v20->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(v20);
  _2_BattleServantData___c__615_T = v20->rgctx_data->_2_BattleServantData___c__615_T_;
  if ( (BYTE2(_2_BattleServantData___c__615_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_2_BattleServantData___c__615_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleServantData___c__615_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, v10, v14, v15, v16, v17, v18, v19);
}


void __fastcall BattleServantData___c__615_object____ctor(
        BattleServantData___c__615_T__o *this,
        const MethodInfo_1F89D54 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__615_object____HasWaveTurnEvent_b__615_0(
        BattleServantData___c__615_T__o *this,
        ServantWaveTurnEvent_o *x,
        const MethodInfo_1F89D6C *method)
{
  Il2CppClass *_3_T; // x19

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE2(_3_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass->rgctx_data->_3_T);
  return sub_B170BC(x, _3_T) != 0;
}


void __fastcall BattleServantData___c__DisplayClass288_0___ctor(
        BattleServantData___c__DisplayClass288_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass288_0___setBaseServantData_b__1(
        BattleServantData___c__DisplayClass288_0_o *this,
        commandAssistData_o *x,
        const MethodInfo *method)
{
  struct BattleDeckServantData_o *inDeckSvt; // x8

  if ( !x || (inDeckSvt = this->fields.inDeckSvt) == 0LL )
    sub_B170D4();
  return x->fields.userSvtId == inDeckSvt->fields.userSvtId;
}


void __fastcall BattleServantData___c__DisplayClass288_1___ctor(
        BattleServantData___c__DisplayClass288_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass288_1___setBaseServantData_b__0(
        BattleServantData___c__DisplayClass288_1_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct CommandCodeInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B170D4();
  return info->fields.id == id;
}


void __fastcall BattleServantData___c__DisplayClass288_2___ctor(
        BattleServantData___c__DisplayClass288_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass288_2___setBaseServantData_b__2(
        BattleServantData___c__DisplayClass288_2_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleServantData___c__DisplayClass288_0_o *CS___8__locals1; // x9
  struct System_Int32_array *skillIdList; // x10
  __int64 i; // x8
  struct System_Int32_array *skillLvList; // x9

  if ( !x )
    goto LABEL_10;
  v5 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._5_get_skillId.method)(
         x,
         x->klass->vtable._6_get_IndividualityArray.methodPtr,
         method);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  skillIdList = CS___8__locals1->fields.skillIdList;
  if ( !skillIdList )
    goto LABEL_10;
  i = this->fields.i;
  if ( (unsigned int)i >= skillIdList->max_length )
    goto LABEL_11;
  if ( (_DWORD)v5 == skillIdList->m_Items[i + 1] )
  {
    skillLvList = CS___8__locals1->fields.skillLvList;
    if ( skillLvList )
    {
      if ( (unsigned int)i < skillLvList->max_length )
        return x->fields.skilllv == skillLvList->m_Items[i + 1];
LABEL_11:
      sub_B17100(v5, v6, v7);
      sub_B170A0();
    }
LABEL_10:
    sub_B170D4();
  }
  return 0;
}


void __fastcall BattleServantData___c__DisplayClass303_0___ctor(
        BattleServantData___c__DisplayClass303_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass303_0___ReplaceSelfSkillInfo_b__0(
        BattleServantData___c__DisplayClass303_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.type == this->fields.skillInfoType && x->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass306_0___ctor(
        BattleServantData___c__DisplayClass306_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass306_0___GetHasSideEffectSkillEffectIds_b__0(
        BattleServantData___c__DisplayClass306_0_o *this,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattleServantData___c__DisplayClass306_0_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_array *svals; // x8
  unsigned __int64 v11; // x23
  unsigned __int64 max_length; // x9
  System_String_o *v13; // x22
  DataVals_o *v14; // x21
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v16; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *funcMst; // x0
  int32_t v18; // w21
  System_Collections_Generic_List_int__o *retList; // x0
  System_Collections_Generic_List_int__o *v20; // x0

  v6 = this;
  if ( (byte_40F71C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, ent);
    sub_B16FFC(&DataVals_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    this = (BattleServantData___c__DisplayClass306_0_o *)sub_B16FFC(
                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                           v9);
    byte_40F71C4 = 1;
  }
  if ( !ent || (svals = ent->fields.svals) == 0LL )
LABEL_20:
    sub_B170D4();
  v11 = 0LL;
  while ( 1 )
  {
    max_length = svals->max_length;
    if ( (__int64)v11 >= (int)max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_22;
    v13 = svals->m_Items[v11];
    v14 = (DataVals_o *)sub_B170CC(DataVals_TypeInfo, ent, method, v3, v4);
    DataVals___ctor(v14, v13, 0LL);
    funcId = ent->fields.funcId;
    if ( !funcId )
      goto LABEL_20;
    v16 = funcId->max_length;
    if ( (__int64)v11 < (int)v16 )
    {
      if ( v11 >= v16 )
      {
LABEL_22:
        sub_B17100(this, ent, method);
        sub_B170A0();
      }
      funcMst = (DataMasterBase_WarMaster__WarEntity__int__o *)v6->fields.funcMst;
      if ( !funcMst )
        goto LABEL_20;
      this = (BattleServantData___c__DisplayClass306_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             funcMst,
                                                             funcId->m_Items[v11 + 1],
                                                             (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        if ( !v14 )
          goto LABEL_20;
        DataVals__SetTempType(v14, v6->fields.funcMst, (int32_t)this->fields.retList, 0LL);
        this = (BattleServantData___c__DisplayClass306_0_o *)DataVals__GetParam(v14, 34, 0, 0LL);
        if ( (int)this >= 1 )
        {
          v18 = (int)this;
          retList = v6->fields.retList;
          if ( !retList )
            goto LABEL_20;
          this = (BattleServantData___c__DisplayClass306_0_o *)System_Collections_Generic_List_int___Contains(
                                                                 retList,
                                                                 v18,
                                                                 (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v20 = v6->fields.retList;
            if ( !v20 )
              goto LABEL_20;
            System_Collections_Generic_List_int___Add(
              v20,
              v18,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
    svals = ent->fields.svals;
    ++v11;
    if ( !svals )
      goto LABEL_20;
  }
}


void __fastcall BattleServantData___c__DisplayClass357_0___ctor(
        BattleServantData___c__DisplayClass357_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass357_0___setContinue_b__0(
        BattleServantData___c__DisplayClass357_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t buffId; // w19
  BuffMaster_o *v5; // x0
  bool IsUnSubStateWhenAliveContinue; // w0
  BuffMaster_o *buffMst; // x0

  if ( !buff )
    goto LABEL_13;
  buffId = buff->fields.buffId;
  if ( !this->fields.isDeadContinue )
  {
    if ( ((buff->fields.turn & 0x80000000) == 0 || (buff->fields.count & 0x80000000) == 0)
      && !BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    {
      return 0;
    }
    buffMst = this->fields.buffMst;
    if ( buffMst )
    {
      IsUnSubStateWhenAliveContinue = BuffMaster__IsUnSubStateWhenAliveContinue(buffMst, buffId, 0LL);
      return !IsUnSubStateWhenAliveContinue;
    }
LABEL_13:
    sub_B170D4();
  }
  v5 = this->fields.buffMst;
  if ( !v5 )
    goto LABEL_13;
  IsUnSubStateWhenAliveContinue = BuffMaster__IsUnSubStateWhenDeadContinue(v5, buffId, 0LL);
  return !IsUnSubStateWhenAliveContinue;
}


void __fastcall BattleServantData___c__DisplayClass381_0___ctor(
        BattleServantData___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass381_0___isUseSelfSkill_b__0(
        BattleServantData___c__DisplayClass381_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.type == 11 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass382_0___ctor(
        BattleServantData___c__DisplayClass382_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass382_0___getSelfSkillInfo_b__0(
        BattleServantData___c__DisplayClass382_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.type == 11 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass383_0___ctor(
        BattleServantData___c__DisplayClass383_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass383_0___getTempSkillInfo_b__0(
        BattleServantData___c__DisplayClass383_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B170D4();
  return s->fields.type == 20 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass494_0___ctor(
        BattleServantData___c__DisplayClass494_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass494_0___updateNpGauge_b__0(
        BattleServantData___c__DisplayClass494_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  IEventMessageRecieve_c *klass; // x8
  struct System_Int32_array *incNpArray; // x21
  struct BattleServantData_o *_4__this; // x22
  unsigned int index; // w20
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F71C5 & 1) == 0 )
  {
    sub_B16FFC(&IEventMessageRecieve_TypeInfo, reciever);
    byte_40F71C5 = 1;
  }
  if ( !reciever )
    sub_B170D4();
  klass = reciever->klass;
  _4__this = this->fields.__4__this;
  incNpArray = this->fields.incNpArray;
  index = this->fields.index;
  if ( *(_WORD *)&reciever->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IEventMessageRecieve_c **)p_offset - 1) != IEventMessageRecieve_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&reciever->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(reciever, IEventMessageRecieve_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, struct System_Int32_array *, _QWORD, _QWORD))p_method)(
    reciever,
    _4__this,
    incNpArray,
    index,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass506_0___ctor(
        BattleServantData___c__DisplayClass506_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass506_0___updateBuff_b__0(
        BattleServantData___c__DisplayClass506_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x20
  IEventMessageRecieve_c *klass; // x8
  _BOOL4 doAuraUpdate; // w22
  _BOOL4 doClassIconAuraUpdate; // w21
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F71C6 & 1) == 0 )
  {
    sub_B16FFC(&IEventMessageRecieve_TypeInfo, reciever);
    byte_40F71C6 = 1;
  }
  if ( !reciever )
    sub_B170D4();
  _4__this = this->fields.__4__this;
  klass = reciever->klass;
  doAuraUpdate = this->fields.doAuraUpdate;
  doClassIconAuraUpdate = this->fields.doClassIconAuraUpdate;
  if ( *(_WORD *)&reciever->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IEventMessageRecieve_c **)p_offset - 1) != IEventMessageRecieve_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&reciever->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(reciever, IEventMessageRecieve_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, _BOOL4, _BOOL4, _QWORD))p_method)(
    reciever,
    _4__this,
    doAuraUpdate,
    doClassIconAuraUpdate,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass591_0___ctor(
        BattleServantData___c__DisplayClass591_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData___c__DisplayClass591_0___EnumerateIndividuality_b__0(
        BattleServantData___c__DisplayClass591_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_40F71C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_40F71C7 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.subBuffIndividualities,
            x,
            (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall BattleServantData___c__DisplayClass670_0___ctor(
        BattleServantData___c__DisplayClass670_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass670_0___GetCommandCodeInfo_b__0(
        BattleServantData___c__DisplayClass670_0_o *this,
        CommandCodeInfo_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B170D4();
  return c->fields.id == this->fields.userCommandCodeId;
}


void __fastcall BattleServantData___c__DisplayClass707_0___ctor(
        BattleServantData___c__DisplayClass707_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass707_0___UpdateClassBoardSkillBuff_b__0(
        BattleServantData___c__DisplayClass707_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  int v4; // w0
  struct AddSkillData_o *skillData; // x8

  if ( !s
    || (v4 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._5_get_skillId.method)(
               s,
               s->klass->vtable._6_get_IndividualityArray.methodPtr,
               method),
        (skillData = this->fields.skillData) == 0LL) )
  {
    sub_B170D4();
  }
  return v4 == skillData->fields.id;
}