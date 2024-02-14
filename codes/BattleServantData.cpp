void __fastcall BattleServantData___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData___ctor(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  BattleServantSnapShotGroupDefault_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  AiState_o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x1
  __int64 v62; // x2
  ServantWaveTurnEventOwner_o *v63; // x20
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x20
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x1
  __int64 v87; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // x20
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct System_Int32_array *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7

  if ( (byte_4212884 & 1) == 0 )
  {
    sub_B0D8A4(&AiState_TypeInfo, method);
    sub_B0D8A4(&BattleServantSnapShotGroupDefault_TypeInfo, v4);
    sub_B0D8A4(&int___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v15);
    sub_B0D8A4(&ServantWaveTurnEventOwner_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_4212884 = 1;
  }
  this->fields.deckIndex = -1;
  this->fields.transformUserSvtId = -1LL;
  this->fields.transformIndex = -1;
  this->fields.appearanceId = -1;
  *(int64_t *)((char *)&this->fields.beforeUserSvtId + 4) = -1LL;
  *(_QWORD *)&this->fields.shiftNpcId = -1LL;
  v18 = (System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *)sub_B0D974(
                                                                                              System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo,
                                                                                              method,
                                                                                              v2);
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot____ctor(
    v18,
    (const MethodInfo_2D1C960 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__);
  this->fields.actionHistory = (struct System_Collections_Generic_LinkedList_BattleServantActionHistory__o *)v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.actionHistory,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (BattleServantSnapShotGroupDefault_o *)sub_B0D974(BattleServantSnapShotGroupDefault_TypeInfo, v25, v26);
  BattleServantSnapShotGroupDefault___ctor(v27, 0LL);
  this->fields._SnapShotDamagedOnLogicDead_k__BackingField = v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SnapShotDamagedOnLogicDead_k__BackingField,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v36 = (AiState_o *)sub_B0D974(AiState_TypeInfo, v34, v35);
  AiState___ctor(v36, 0LL);
  this->fields.aiState = v36;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aiState,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.actorScale = 100;
  *(_QWORD *)&this->fields.nplineCount = 0x6400000003LL;
  *(_QWORD *)&this->fields.roleType = 0xFFFFFFFF00000001LL;
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                                                                  v43,
                                                                                                  v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  this->fields.skillInfoList = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillInfoList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v52,
                                                                                                  v53);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.tdErrorStatusVoiceSeList = (struct System_Collections_Generic_List_string__o *)v54;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tdErrorStatusVoiceSeList,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.deadTurn = 1;
  v63 = (ServantWaveTurnEventOwner_o *)sub_B0D974(ServantWaveTurnEventOwner_TypeInfo, v61, v62);
  ServantWaveTurnEventOwner___ctor(v63, 0LL);
  this->fields.waveTurnEventOwner = v63;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.waveTurnEventOwner,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v70,
                                                                                                  v71);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v72,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.paramobjelist = (struct System_Collections_Generic_List_GameObject__o *)v72;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.paramobjelist,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v79 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.statestring, v79, v80, v81, v82, v83, v84, v85);
  this->fields.isGutsSleepRelease = 1;
  this->fields.wasAttackTargetId = -1;
  this->fields.nextPossibleTimePopEffect = -1.0;
  *(_QWORD *)&this->fields.selectedTDCardId = -1LL;
  v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo,
                                                                                                  v86,
                                                                                                  v87);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v88,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
  this->fields.adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)v88;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.adjustmentList,
    (System_Int32_array **)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  this->fields.tempTreasuredvcLv = 1;
  v95 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.wkzero = v95;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.wkzero,
    (System_Int32_array **)v95,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this->fields.tmpAppearanceId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_List_BattleSkillInfoData__o *__fastcall BattleServantData__AddClassBoardSkillInfo(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvtData,
        int32_t *skillIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  BattleSkillInfoData_o *IsNullOrEmpty; // x0
  System_Collections_ICollection_o *ClassBoardSkillArray; // x22
  void *monitor; // x8
  unsigned __int64 v13; // x23
  int32_t *v14; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w4
  __int64 v19; // x0
  const MethodInfo *v20; // [xsp+0h] [xbp-50h]

  if ( (byte_421287E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, userSvtData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v8);
    byte_421287E = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                                                                 userSvtData,
                                                                                                 skillIndex);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( !userSvtData )
    goto LABEL_12;
  ClassBoardSkillArray = (System_Collections_ICollection_o *)BattleUserServantData__GetClassBoardSkillArray(
                                                               userSvtData,
                                                               0LL);
  IsNullOrEmpty = (BattleSkillInfoData_o *)BasicHelper__IsNullOrEmpty(ClassBoardSkillArray, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !ClassBoardSkillArray )
      goto LABEL_12;
    monitor = ClassBoardSkillArray[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)monitor )
        {
          v19 = sub_B0D9A8(IsNullOrEmpty);
          sub_B0D948(v19, 0LL);
        }
        v14 = (int32_t *)(&ClassBoardSkillArray[2].klass + v13);
        v15 = *skillIndex;
        v16 = *v14;
        v17 = v14[1];
        ++*skillIndex;
        IsNullOrEmpty = BattleServantData__addSkillInfo(this, 10, v15, v16, v17, -1LL, -1, 0LL, v20);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)IsNullOrEmpty,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
        LODWORD(monitor) = ClassBoardSkillArray[1].monitor;
        if ( (__int64)++v13 >= (int)monitor )
          return (System_Collections_Generic_List_BattleSkillInfoData__o *)v9;
      }
LABEL_12:
      sub_B0D97C(IsNullOrEmpty);
    }
  }
  return (System_Collections_Generic_List_BattleSkillInfoData__o *)v9;
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
  BattleServantData_o *v4; // x19
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
  __int64 v17; // x22
  __int64 v18; // x23
  const MethodInfo *v19; // x2
  int32_t DispLimitCount; // w22
  __int64 v21; // x22
  __int64 v22; // x23
  const MethodInfo *v23; // x1
  int32_t CommandDispLimitCount; // w22
  __int64 v25; // x22
  __int64 v26; // x23
  __int64 v27; // x22
  __int64 v28; // x23
  int32_t v29; // w22
  int32_t v30; // w23
  int32_t CardImageLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // kr20_16
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
  __int64 v73; // x22
  __int64 v74; // x23
  int32_t v75; // w0
  int32_t v76; // w0
  int32_t v77; // w0
  int32_t v78; // w0
  __int64 v79; // x22
  __int64 v80; // x23
  int32_t v81; // w0
  int32_t v82; // w0
  int32_t v83; // w0
  int32_t v84; // w0
  __int64 v85; // x21
  __int64 v86; // x22
  int32_t v87; // w21
  BalanceConfig_c *v88; // x8
  __int64 v89; // x21
  __int64 v90; // x22
  __int64 v91; // x21
  __int64 v92; // x22
  __int64 v93; // x21
  __int64 v94; // x22
  __int64 v95; // x21
  __int64 v96; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // krC0_16
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // krF0_16
  struct BattleDeckServantData_o *v110; // x8
  __int64 v111; // x21
  __int64 v112; // x22
  __int64 v113; // x20
  __int64 v114; // x21
  __int64 v115; // x21
  __int64 v116; // x22
  int32_t v117; // w0
  __int64 v118; // x8
  int32_t v119; // w20
  int32_t v120; // w21
  int32_t v121; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // kr00_16
  int32_t v123; // w0
  int32_t v124; // w20
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x1.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x1.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x1.16

  v4 = this;
  if ( (byte_42127C4 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, userSvt);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    this = (BattleServantData_o *)sub_B0D8A4(&OptionManager_TypeInfo, v10);
    byte_42127C4 = 1;
  }
  if ( !userSvt )
    goto LABEL_184;
  p_afterLimitCount = &userSvt->fields.afterLimitCount;
  v4->fields.limitcount = userSvt->fields.limitCount;
  v4->fields._dispLimitCount_k__BackingField = userSvt->fields.dispLimitCount;
  v4->fields._commandCardLimitCount_k__BackingField = userSvt->fields.commandCardLimitCount;
  v4->fields._iconLimitCount_k__BackingField = userSvt->fields.iconLimitCount;
  *(_QWORD *)&userSvt->fields.afterLimitCount = -1LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  this = (BattleServantData_o *)Follower__IsNpc(v4->fields.followerType, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    deckSvt = v4->fields.deckSvt;
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
      *(_QWORD *)&v125.fields.currentCryptoKey = v15;
      *(_QWORD *)&v125.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v125, 0LL);
      this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                      v4->fields.limitcount,
                                      0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_184;
      this = (BattleServantData_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                      Master_WarQuestSelectionMaster,
                                      v16,
                                      (int32_t)this,
                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v18 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v126.fields.currentCryptoKey = v18;
        *(_QWORD *)&v126.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v126, 0LL) )
        {
          DispLimitCount = BattleServantData__getDispLimitCount(v4, 1, v19);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         DispLimitCount,
                                                         0LL);
        }
        v22 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
        v21 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v127.fields.currentCryptoKey = v22;
        *(_QWORD *)&v127.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v127, 0LL) )
        {
          CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(v4, v23);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                CommandDispLimitCount,
                                                                0LL);
        }
        v26 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v25 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v128.fields.currentCryptoKey = v26;
        *(_QWORD *)&v128.fields.fakeValue = v25;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v128, 0LL);
        if ( !(_DWORD)this )
        {
          v28 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v129.fields.currentCryptoKey = v28;
          *(_QWORD *)&v129.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v129, 0LL);
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvt->fields.limitCount, 0LL);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v29, v30, 1, 0, 0LL);
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(CardImageLimitCount + 1, 0LL);
          this = *(BattleServantData_o **)&v32.fields.currentCryptoKey;
          v4->fields._iconLimitCount_k__BackingField = v32;
        }
        v33 = v4->fields.deckSvt;
        if ( v33 )
        {
          if ( v33->fields.isFollowerSvt && !Follower__IsNpc(v4->fields.followerType, 0LL) )
          {
            if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !OptionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            }
            if ( !OptionManager__GetFriendCostume(0LL) )
            {
              v35 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
              v34 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v130.fields.currentCryptoKey = v35;
              *(_QWORD *)&v130.fields.fakeValue = v34;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v130, 0LL) >= 11 )
              {
                v37 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
                v36 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v131.fields.currentCryptoKey = v37;
                *(_QWORD *)&v131.fields.fakeValue = v36;
                v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v131, 0LL);
                v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                        userSvt->fields.limitCount,
                        0LL);
                if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                }
                ImageLimitCount = ImageLimitCount__GetImageLimitCount(v38, v39, 0LL);
                v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                               ImageLimitCount,
                                                               0LL);
              }
              v42 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
              v41 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v132.fields.currentCryptoKey = v42;
              *(_QWORD *)&v132.fields.fakeValue = v41;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v132, 0LL) >= 11 )
              {
                v44 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
                v43 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v133.fields.currentCryptoKey = v44;
                *(_QWORD *)&v133.fields.fakeValue = v43;
                v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v133, 0LL);
                v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                        userSvt->fields.limitCount,
                        0LL);
                if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                }
                v47 = ImageLimitCount__GetImageLimitCount(v45, v46, 0LL);
                v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                      v47,
                                                                      0LL);
              }
              v49 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
              v48 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v134.fields.currentCryptoKey = v49;
              *(_QWORD *)&v134.fields.fakeValue = v48;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v134, 0LL) >= 11 )
              {
                v51 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
                v50 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v135.fields.currentCryptoKey = v51;
                *(_QWORD *)&v135.fields.fakeValue = v50;
                v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v135, 0LL);
                v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                        userSvt->fields.limitCount,
                        0LL);
                if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                }
                v54 = ImageLimitCount__GetCardImageLimitCount(v52, v53, 0, 0, 0LL);
                v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
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
          *(_QWORD *)&v136.fields.currentCryptoKey = v56;
          *(_QWORD *)&v136.fields.fakeValue = v55;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v136, 0LL);
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
            *(_QWORD *)&v137.fields.currentCryptoKey = v61;
            *(_QWORD *)&v137.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v137, 0LL);
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
          *(_QWORD *)&v146.fields.currentCryptoKey = v99;
          *(_QWORD *)&v146.fields.fakeValue = v98;
          v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v146, 0LL);
          v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                   v4->fields._iconLimitCount_k__BackingField,
                   0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         Master_WarQuestSelectionMaster,
                                         v100,
                                         v101,
                                         0LL);
          v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         ServantLimitCountSealAfter,
                                                         0LL);
          v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvt->fields.svtId, 0LL);
          v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                   v4->fields._dispLimitCount_k__BackingField,
                   0LL);
          v105 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v103, v104, 0LL);
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         v105,
                                                         0LL);
          v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvt->fields.svtId, 0LL);
          v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                   v4->fields._commandCardLimitCount_k__BackingField,
                   0LL);
          v108 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v106, v107, 0LL);
          v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v108, 0LL);
          this = *(BattleServantData_o **)&v109.fields.currentCryptoKey;
          v4->fields._commandCardLimitCount_k__BackingField = v109;
          goto LABEL_160;
        }
LABEL_184:
        sub_B0D97C(this);
      }
    }
  }
  v65 = v4->fields.deckSvt;
  if ( !v65 )
    goto LABEL_184;
  if ( v65->fields.isFollowerSvt )
  {
    this = (BattleServantData_o *)Follower__IsNpc(v4->fields.followerType, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
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
        v66 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
        v68 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
        v67 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
        v70 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v69 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        v71 = (ServantLimitSpoilerProtectionMaster_o *)v66;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v138.fields.currentCryptoKey = v70;
        *(_QWORD *)&v138.fields.fakeValue = v69;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v138, 0LL);
        if ( !v71 )
          goto LABEL_184;
        *(_QWORD *)&v151.fields.currentCryptoKey = v68;
        *(_QWORD *)&v151.fields.fakeValue = v67;
        v72 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v151, (int32_t)this, 0LL);
        v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v72,
                                                       0LL);
        v73 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
        v74 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                v4->fields._dispLimitCount_k__BackingField,
                0LL);
        *(_QWORD *)&v152.fields.currentCryptoKey = v73;
        *(_QWORD *)&v152.fields.fakeValue = v74;
        v76 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v152, v75, 0LL);
        v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v76, 0LL);
        v4->fields._dispLimitCount_k__BackingField = v139;
        v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v139, 0LL);
        v78 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v71, v77, 0LL);
        v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v78,
                                                       0LL);
        v79 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
        v80 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
        v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                v4->fields._commandCardLimitCount_k__BackingField,
                0LL);
        *(_QWORD *)&v153.fields.currentCryptoKey = v79;
        *(_QWORD *)&v153.fields.fakeValue = v80;
        v82 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v153, v81, 0LL);
        v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v82, 0LL);
        v4->fields._commandCardLimitCount_k__BackingField = v140;
        v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v140, 0LL);
        v84 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v71, v83, 0LL);
        v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                              v84,
                                                              0LL);
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetFriendImageLimitCount(0LL) )
      {
        v86 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v85 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v141.fields.currentCryptoKey = v86;
        *(_QWORD *)&v141.fields.fakeValue = v85;
        v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v141, 0LL);
        v88 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v88 = BalanceConfig_TypeInfo;
        }
        if ( v87 >= v88->static_fields->ServantLimitMax )
        {
          v90 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
          v89 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v142.fields.currentCryptoKey = v90;
          *(_QWORD *)&v142.fields.fakeValue = v89;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v142, 0LL) <= 10 )
          {
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
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
      this = (BattleServantData_o *)OptionManager__GetFriendCostume(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v92 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
        v91 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v143.fields.currentCryptoKey = v92;
        *(_QWORD *)&v143.fields.fakeValue = v91;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v143, 0LL) >= 11 )
        {
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         0,
                                                         0LL);
        }
        v94 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
        v93 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v144.fields.currentCryptoKey = v94;
        *(_QWORD *)&v144.fields.fakeValue = v93;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v144, 0LL) >= 11 )
        {
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                0,
                                                                0LL);
        }
        v96 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v95 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v145.fields.currentCryptoKey = v96;
        *(_QWORD *)&v145.fields.fakeValue = v95;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v145, 0LL);
        if ( (int)this >= 11 )
        {
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
          this = *(BattleServantData_o **)&v97.fields.currentCryptoKey;
          v4->fields._iconLimitCount_k__BackingField = v97;
        }
      }
    }
  }
LABEL_160:
  v110 = v4->fields.deckSvt;
  if ( !v110 )
    goto LABEL_184;
  if ( v110->fields.isFollowerSvt && Follower__IsNpc(v4->fields.followerType, 0LL) )
  {
    v112 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
    v111 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v147.fields.currentCryptoKey = v112;
    *(_QWORD *)&v147.fields.fakeValue = v111;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v147, 0LL) )
    {
      v113 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
      v114 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    }
    else
    {
      v116 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
      v115 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v148.fields.currentCryptoKey = v116;
      *(_QWORD *)&v148.fields.fakeValue = v115;
      v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v148, 0LL);
      v118 = *(_QWORD *)&userSvt->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v149.fields.fakeValue = *(_QWORD *)&userSvt->fields.limitCount.fields.fakeValue;
      v119 = v117;
      *(_QWORD *)&v149.fields.currentCryptoKey = v118;
      v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v149, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v121 = ImageLimitCount__GetCardImageLimitCount(v119, v120, 1, 0, 0LL);
      v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v121 + 1, 0LL);
      v114 = *(_QWORD *)&v122.fields.fakeValue;
      v113 = *(_QWORD *)&v122.fields.currentCryptoKey;
      v4->fields._iconLimitCount_k__BackingField = v122;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v150.fields.currentCryptoKey = v113;
    *(_QWORD *)&v150.fields.fakeValue = v114;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v150, 0LL) <= 10 )
    {
      v123 = BasicHelper__DecryptValue_18713680(v4->fields._iconLimitCount_k__BackingField, 0LL);
      v124 = UnityEngine_Mathf__Clamp_40762168(v123, 1, 3, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v124, 0LL);
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
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_array *ActiveList; // x25
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  bool v20; // w28
  unsigned __int64 v21; // x19
  BattleBuffData_BuffData_o *v22; // x27
  int count; // w20
  int turn; // w26
  System_Int32_array *Individualty; // x0
  int v26; // w8
  _BOOL4 v27; // w8
  int v28; // w8
  int v29; // w8
  BattleBuffData_o *v30; // x19
  __int64 v32; // x0
  BattleServantData_o *v33; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // [xsp+8h] [xbp-68h]
  bool isIgnoreIndivUnreleaseable; // [xsp+18h] [xbp-58h]

  if ( (byte_4212823 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, *(_QWORD *)&changeValue);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    byte_4212823 = 1;
  }
  if ( targetIndivi && *(_QWORD *)&targetIndivi->max_length )
  {
    buffData = this->fields.buffData;
    if ( !buffData )
      goto LABEL_55;
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
    v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                    v17,
                                                                                                    v18);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v34,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_55;
    v19 = *(_QWORD *)&ActiveList->max_length;
    v33 = this;
    if ( (int)v19 >= 1 )
    {
      v20 = 0;
      v21 = 0LL;
      isIgnoreIndivUnreleaseable = isExcludeUnSubStateIndiv;
      while ( 1 )
      {
        if ( v21 >= (unsigned int)v19 )
        {
          v32 = sub_B0D9A8(buffData);
          sub_B0D948(v32, 0LL);
        }
        v22 = ActiveList->m_Items[v21];
        if ( (changeValue & 0x80000000) == 0 )
        {
          if ( !v22 )
            goto LABEL_55;
          goto LABEL_12;
        }
        if ( !isTurn )
          break;
        if ( !v22 )
          goto LABEL_55;
        if ( v22->fields.turn >= 3 )
          goto LABEL_12;
LABEL_47:
        LODWORD(v19) = ActiveList->max_length;
        if ( (__int64)++v21 >= (int)v19 )
          goto LABEL_51;
      }
      if ( !v22 )
        goto LABEL_55;
      if ( v22->fields.count == 1 )
        goto LABEL_47;
LABEL_12:
      turn = v22->fields.turn;
      count = v22->fields.count;
      Individualty = BattleBuffData_BuffData__GetIndividualty(
                       ActiveList->m_Items[v21],
                       0,
                       isIgnoreIndivUnreleaseable,
                       0,
                       0LL);
      if ( isAny )
      {
        if ( !Individuality__CheckIndividualities(Individualty, targetIndivi, 0LL) )
          goto LABEL_20;
      }
      else if ( !Individuality__ContainsIndividualities(Individualty, targetIndivi, 0LL) )
      {
        goto LABEL_20;
      }
      if ( turn >= 1 && isTurn )
      {
        v22->fields.turn += changeValue;
        if ( v20 )
        {
LABEL_21:
          v20 = 1;
          if ( !isTurn )
          {
LABEL_22:
            v26 = v22->fields.count;
            if ( v26 != count && v26 <= 0 )
              v22->fields.count = 1;
            goto LABEL_40;
          }
LABEL_34:
          v28 = v22->fields.turn;
          if ( v28 != turn && v28 <= 0 )
          {
            if ( (turn & 1) != 0 )
              v29 = 1;
            else
              v29 = 2;
            v22->fields.turn = v29;
          }
LABEL_40:
          buffData = (BattleBuffData_o *)BattleBuffData_BuffData__IslinkageTarget(v22, 0LL);
          if ( ((unsigned __int8)buffData & 1) != 0 && (v22->fields.turn != turn || v22->fields.count != count) )
          {
            buffData = (BattleBuffData_o *)v34;
            if ( !v34 )
              goto LABEL_55;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v34,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
          goto LABEL_47;
        }
LABEL_30:
        v27 = v22->fields.turn != turn || v22->fields.count != count;
        v20 = v27;
        if ( !isTurn )
          goto LABEL_22;
        goto LABEL_34;
      }
      if ( count >= 1 && !isTurn )
        v22->fields.count += changeValue;
LABEL_20:
      if ( v20 )
        goto LABEL_21;
      goto LABEL_30;
    }
    v20 = 0;
LABEL_51:
    buffData = (BattleBuffData_o *)v34;
    if ( !v34
      || (v30 = v33->fields.buffData,
          buffData = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
          !v30) )
    {
LABEL_55:
      sub_B0D97C(buffData);
    }
    BattleBuffData__syncLinkageBuffChangeParam(v30, (BattleBuffData_BuffData_array *)buffData, 0LL);
  }
  else
  {
    return 0;
  }
  return v20;
}


bool __fastcall BattleServantData__ChangeSkillRemainingTurn(
        BattleServantData_o *this,
        BattleSkillInfoData_o *skillInfo,
        BattleSkillInfoData_o *beforeDeathSkillInfo,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x21
  __int64 v7; // x1
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t BattleStartRemainingTurn; // w0
  int32_t chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_42127CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, skillInfo);
    this = (BattleServantData_o *)sub_B0D8A4(&DataManager_TypeInfo, v7);
    byte_42127CB = 1;
  }
  entity = 0LL;
  if ( v6->fields.isEnemy )
    goto LABEL_16;
  if ( !skillInfo )
    goto LABEL_20;
  if ( skillInfo->fields.type != 11 )
    goto LABEL_16;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = 0LL;
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
LABEL_20:
    sub_B0D97C(this);
  if ( !SkillLvMaster__TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          (int32_t)this,
          skillInfo->fields.skilllv,
          0LL) )
  {
LABEL_16:
    LOBYTE(BattleStartRemainingTurn) = 0;
    return BattleStartRemainingTurn;
  }
  this = (BattleServantData_o *)entity;
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
    sub_B0D97C(v9);
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
  System_Int32_array *v4; // x19
  BattleServantData_o *v5; // x20
  BattleBuffData_o *buffData; // x21
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v8; // x2
  System_Int32_array *Individualities_20798680; // x0

  v4 = buffIndiv;
  v5 = this;
  if ( opponentSvt )
  {
    this = (BattleServantData_o *)BattleServantData__getIndividualities_20798680(
                                    opponentSvt,
                                    buffIndiv,
                                    (const MethodInfo *)opponentSvt);
    v4 = (System_Int32_array *)this;
  }
  buffData = v5->fields.buffData;
  if ( !buffData )
    sub_B0D97C(this);
  BuffIndividualities = BattleBuffData__getBuffIndividualities(v5->fields.buffData, 0, 0, 0, 0, 0LL);
  Individualities_20798680 = BattleServantData__getIndividualities_20798680(v5, BuffIndividualities, v8);
  return BattleBuffData__CheckDisableForciblyAddStateBuffAvoid(buffData, Individualities_20798680, v4, 0LL);
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
  const MethodInfo *v8; // x3
  struct System_Int32_array *tdplayed; // x10
  int max_length; // w8
  __int64 v11; // x9
  int32_t *v12; // x10
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  System_String_o *v15; // x0
  char Int; // w0
  __int64 v17; // x0
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
        v11 = 0LL;
        v12 = &tdplayed->m_Items[1];
        do
        {
          if ( (unsigned int)v11 >= max_length )
          {
            v17 = sub_B0D9A8(SelectedNobleSeqId);
            sub_B0D948(v17, 0LL);
          }
          if ( v12[v11] == (_DWORD)SelectedNobleSeqId )
            goto LABEL_13;
        }
        while ( (int)++v11 < max_length );
      }
    }
    if ( !BattleServantData__IsContainsSeqId(this, data, SelectedNobleSeqId, v8) )
    {
      if ( BattleServantData__CheckSelectedNobleSeqIsGroup(this, v13) )
      {
        SelectedNobleGroupSeqId = BattleServantData__GetSelectedNobleGroupSeqId(this, v14);
        v15 = System_Int32__ToString((int32_t)&SelectedNobleGroupSeqId, 0LL);
        Int = UnityEngine_PlayerPrefs__GetInt(v15, 0, 0LL);
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
  BattleServantData_o *v12; // x22
  const MethodInfo *v17; // x6
  BattleServantData_o *v18; // x25
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x6
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x5
  int32_t v24; // w8
  const MethodInfo *v25; // x5

  if ( !data
    || (v12 = this,
        this = (BattleServantData_o *)BattleData__GetNotSvtActorIndividualityArray(data, mainAction, actor != 0LL, 0LL),
        !damageData) )
  {
    sub_B0D97C(this);
  }
  v18 = this;
  if ( BattleServantData__checkSpecialInvincible(
         v12,
         command,
         actor,
         &damageData->fields.isSpecialInvincible,
         actor != 0LL,
         (System_Int32_array *)this,
         v17) )
  {
    *damage = 0.0;
    *minimumDamageFlg = 0;
    *hitStat = 1;
    if ( actor && !BattleServantData__checkPierceInvincible(actor, command, v12, v19) )
      goto LABEL_17;
    return;
  }
  if ( BattleServantData__CheckAvoidanceIndividuality(
         v12,
         command,
         actor,
         &damageData->fields.defNoDamageBuffId,
         actor != 0LL,
         (System_Int32_array *)v18,
         v20) )
  {
    goto LABEL_8;
  }
  if ( actor && BattleServantData__checkPierceInvincible(actor, command, v12, v22) )
  {
    if ( BattleServantData__checkInvincible(v12, command, actor, 1, 0LL, v23) )
    {
      v24 = 3;
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  if ( !BattleServantData__checkInvincible(v12, command, actor, actor != 0LL, (System_Int32_array *)v18, v23) )
  {
    if ( !actor || !BattleServantData__checkBreakAvoidance(actor, command, v12, v21) )
    {
      if ( !BattleServantData__checkAvoidance(v12, command, actor, actor != 0LL, (System_Int32_array *)v18, v25) )
        return;
LABEL_8:
      v24 = 2;
      *damage = 0.0;
      *minimumDamageFlg = 0;
      goto LABEL_9;
    }
LABEL_20:
    if ( !BattleServantData__checkAvoidance(v12, command, actor, 1, 0LL, v25) )
      return;
    v24 = 4;
LABEL_9:
    *hitStat = v24;
    return;
  }
  *damage = 0.0;
  *minimumDamageFlg = 0;
  *hitStat = 1;
  if ( actor )
LABEL_17:
    BattleServantData__checkBreakAvoidance(actor, command, v12, v21);
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
  BattleServantData_o *v8; // x19
  const MethodInfo *v12; // x6
  BattleServantData_o *v13; // x22
  const MethodInfo *v14; // x6
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x5
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x5
  struct BattleBuffData_o *v19; // x8
  char v20; // w9

  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_18;
  v8 = this;
  this = (BattleServantData_o *)data;
  buffData->fields.isNoDamage = 0;
  if ( !data )
    goto LABEL_18;
  this = (BattleServantData_o *)BattleData__GetNotSvtActorIndividualityArray(data, mainAction, actor != 0LL, 0LL);
  if ( !damageData )
    goto LABEL_18;
  v13 = this;
  this = (BattleServantData_o *)BattleServantData__checkSpecialInvincible(
                                  v8,
                                  command,
                                  actor,
                                  &damageData->fields.isSpecialInvincible,
                                  actor != 0LL,
                                  (System_Int32_array *)this,
                                  v12);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleServantData_o *)BattleServantData__CheckAvoidanceIndividuality(
                                        v8,
                                        command,
                                        actor,
                                        &damageData->fields.defNoDamageBuffId,
                                        actor != 0LL,
                                        (System_Int32_array *)v13,
                                        v14),
        ((unsigned __int8)this & 1) != 0) )
  {
LABEL_14:
    v19 = v8->fields.buffData;
    if ( v19 )
    {
      v20 = 1;
      goto LABEL_16;
    }
LABEL_18:
    sub_B0D97C(this);
  }
  if ( !actor
    || (this = (BattleServantData_o *)BattleServantData__checkPierceInvincible(actor, command, v8, v15),
        ((unsigned __int8)this & 1) == 0) )
  {
    this = (BattleServantData_o *)BattleServantData__checkInvincible(
                                    v8,
                                    command,
                                    actor,
                                    actor != 0LL,
                                    (System_Int32_array *)v13,
                                    v16);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( actor )
      {
        this = (BattleServantData_o *)BattleServantData__checkBreakAvoidance(actor, command, v8, v17);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_11;
      }
      this = (BattleServantData_o *)BattleServantData__checkAvoidance(
                                      v8,
                                      command,
                                      actor,
                                      actor != 0LL,
                                      (System_Int32_array *)v13,
                                      v18);
      if ( ((unsigned __int8)this & 1) == 0 )
        return;
    }
    goto LABEL_14;
  }
LABEL_11:
  v19 = v8->fields.buffData;
  if ( !v19 )
    goto LABEL_18;
  v20 = 0;
LABEL_16:
  v19->fields.isNoDamage = v20;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__CheckNotTargetSkill(
        BattleServantData_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v7; // x22
  __int64 v8; // x0
  System_Int32_array *NotTargetSkillIdArray; // x0

  if ( (byte_421287B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, *(_QWORD *)&skillId);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    byte_421287B = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&skillId,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v8);
  NotTargetSkillIdArray = BattleBuffData__GetNotTargetSkillIdArray(buffData, v7, 0LL);
  return System_Array__IndexOf_int_(
           NotTargetSkillIdArray,
           skillId,
           (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) != -1;
}


bool __fastcall BattleServantData__CheckSelectedNobleSeqIsGroup(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0

  if ( this->fields.groupSeqIdFromMstTDSeqWeight > 0 )
    return (unsigned __int8)&dword_0 + 1;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
  if ( !TreasureDevice )
    sub_B0D97C(0LL);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.svtOverwriteName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.svtOverwriteBattleName = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName, 0LL, v9, v10, v11, v12, v13, v14);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData__EnumerateIndividuality(
        BattleServantData_o *this,
        System_Collections_Generic_IEnumerable_int__o *externalIndiv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_int__o *ServantIndividualityList; // x20
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_T__o *buffData; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffParamList; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x8
  System_Func_int__bool__o *v25; // x21

  if ( (byte_421285B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, externalIndiv);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass603_0__EnumerateIndividuality_b__0__, v8);
    sub_B0D8A4(&BattleServantData___c__DisplayClass603_0_TypeInfo, v9);
    byte_421285B = 1;
  }
  v10 = sub_B0D974(BattleServantData___c__DisplayClass603_0_TypeInfo, externalIndiv, method);
  BattleServantData___c__DisplayClass603_0___ctor((BattleServantData___c__DisplayClass603_0_o *)v10, 0LL);
  ServantIndividualityList = BattleServantData__GetServantIndividualityList(this, externalIndiv, v11);
  buffData = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__EnumerateSkillIndividuality(this, v13);
  if ( !ServantIndividualityList )
    goto LABEL_11;
  System_Collections_Generic_List_int___AddRange(
    ServantIndividualityList,
    buffData,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  buffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buffData;
  if ( !buffData
    || (BuffParamList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffParamList(
                                                                         (BattleBuffData_o *)buffData,
                                                                         43,
                                                                         0LL,
                                                                         0LL),
        System_Collections_Generic_List_int___AddRange(
          ServantIndividualityList,
          BuffParamList,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__),
        (buffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buffData) == 0LL)
    || (buffData = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffParamList(
                                                                    (BattleBuffData_o *)buffData,
                                                                    44,
                                                                    0LL,
                                                                    0LL),
        !v10)
    || (*(_QWORD *)(v10 + 16) = buffData,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)buffData,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (v24 = *(_QWORD *)(v10 + 16)) == 0) )
  {
LABEL_11:
    sub_B0D97C(buffData);
  }
  if ( !*(_QWORD *)(v24 + 24) )
    return (System_Collections_Generic_IEnumerable_int__o *)ServantIndividualityList;
  v25 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v22, v23);
  System_Func_int__bool____ctor(
    v25,
    (Il2CppObject *)v10,
    Method_BattleServantData___c__DisplayClass603_0__EnumerateIndividuality_b__0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Where_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)ServantIndividualityList,
                                                            (System_Func_TSource__bool__o *)v25,
                                                            (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData__EnumerateSkillIndividuality(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  BattleServantData___c_c *v13; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__607_0; // x20
  Il2CppObject *v16; // x21
  struct BattleServantData___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  BattleServantData___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  struct BattleServantData___c_StaticFields *v29; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__607_1; // x20
  Il2CppObject *v31; // x21
  struct BattleServantData___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_421285F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___, v4);
    sub_B0D8A4(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v5);
    sub_B0D8A4(&Method_System_Func_BattleSkillInfoData__IEnumerable_int____ctor__, v6);
    sub_B0D8A4(&System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo, v7);
    sub_B0D8A4(&System_Func_BattleSkillInfoData__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__607_0__, v9);
    sub_B0D8A4(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__607_1__, v10);
    sub_B0D8A4(&BattleServantData___c_TypeInfo, v11);
    byte_421285F = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  v13 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v13 = BattleServantData___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__607_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__607_0;
  if ( !_9__607_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__607_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_BattleSkillInfoData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__607_0,
      v16,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__607_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v17 = BattleServantData___c_TypeInfo->static_fields;
    v17->__9__607_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__607_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v17->__9__607_0,
      (System_Int32_array **)_9__607_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__607_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  v27 = BattleServantData___c_TypeInfo;
  v28 = v24;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v27 = BattleServantData___c_TypeInfo;
  }
  v29 = v27->static_fields;
  _9__607_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v29->__9__607_1;
  if ( !_9__607_1 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v29 = BattleServantData___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v29->__9;
    _9__607_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                  System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__607_1,
      v31,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__607_1__,
      (const MethodInfo_261A104 *)Method_System_Func_BattleSkillInfoData__IEnumerable_int____ctor__);
    v32 = BattleServantData___c_TypeInfo->static_fields;
    v32->__9__607_1 = (struct System_Func_BattleSkillInfoData__IEnumerable_int___o *)_9__607_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v32->__9__607_1,
      (System_Int32_array **)_9__607_1,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                            v28,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__607_1,
                                                            (const MethodInfo_1B533F8 *)Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___);
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
    sub_B0D97C(AiStateManager);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_42127E2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_42127E2 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v6);
  return this->fields.maxActNum + BattleBuffData__getActValue_30818560(buffData, 110, v5, 0LL);
}


int32_t __fastcall BattleServantData__FixMinActNum(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_42127E3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_42127E3 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v6);
  return this->fields._minActNum_k__BackingField + BattleBuffData__getActValue_30818560(buffData, 110, v5, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__GetAddSideEffectBuffList(
        BattleServantData_o *this,
        BuffList_ACTION_array *targetActs,
        BattleServantData_o *opSvt,
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
  __int64 v18; // x22
  __int64 v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  BattleBuffData_CheckIndividualitiesData_o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x19
  BattleServantData___c_c *v41; // x8
  struct BattleServantData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__430_1; // x20
  Il2CppObject *v44; // x21
  struct BattleServantData___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0

  if ( (byte_42127FF & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, targetActs);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_SelectMany_BuffList_ACTION__BattleBuffData_BuffData___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v9);
    sub_B0D8A4(&Method_System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData____ctor__, v10);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v11);
    sub_B0D8A4(&System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData___TypeInfo, v12);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v13);
    sub_B0D8A4(&Method_BattleServantData___c__GetAddSideEffectBuffList_b__430_1__, v14);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass430_0__GetAddSideEffectBuffList_b__0__, v15);
    sub_B0D8A4(&BattleServantData___c__DisplayClass430_0_TypeInfo, v16);
    sub_B0D8A4(&BattleServantData___c_TypeInfo, v17);
    byte_42127FF = 1;
  }
  v18 = sub_B0D974(BattleServantData___c__DisplayClass430_0_TypeInfo, targetActs, opSvt);
  BattleServantData___c__DisplayClass430_0___ctor((BattleServantData___c__DisplayClass430_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B0D97C(v19);
  *(_QWORD *)(v18 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  v28 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v26,
                                                       v27);
  BattleBuffData_CheckIndividualitiesData___ctor(v28, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(v18 + 24) = v28;
  sub_B0D840((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  v37 = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)sub_B0D974(
                                                                                System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData___TypeInfo,
                                                                                v35,
                                                                                v36);
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort____ctor(
    v37,
    (Il2CppObject *)v18,
    Method_BattleServantData___c__DisplayClass430_0__GetAddSideEffectBuffList_b__0__,
    (const MethodInfo_2615B28 *)Method_System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData____ctor__);
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_BuffList_ACTION__BattleBuffData_BuffData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetActs,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v37,
                                                               (const MethodInfo_1B53390 *)Method_System_Linq_Enumerable_SelectMany_BuffList_ACTION__BattleBuffData_BuffData___);
  v41 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v41 = BattleServantData___c_TypeInfo;
  }
  static_fields = v41->static_fields;
  _9__430_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__430_1;
  if ( !_9__430_1 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__430_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                  System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                                                  v38,
                                                                                  v39);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__430_1,
      v44,
      Method_BattleServantData___c__GetAddSideEffectBuffList_b__430_1__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v45 = BattleServantData___c_TypeInfo->static_fields;
    v45->__9__430_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__430_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v45->__9__430_1,
      (System_Int32_array **)_9__430_1,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v40,
                                                               (System_Func_TSource__TKey__o *)_9__430_1,
                                                               (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            v52,
                                            (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleServantData_Adjustment_array *__fastcall BattleServantData__GetAdjustments(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0
  BattleServantConfConponent_o *p_adjustmentList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42127B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v5);
    byte_42127B4 = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (BattleServantConfConponent_o *)&this->fields.adjustmentList;
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo,
                                                                                                   method,
                                                                                                   v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v8,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (BattleServantConfConponent_c *)v8;
    sub_B0D840(p_adjustmentList, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
    adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      sub_B0D97C(0LL);
  }
  return (BattleServantData_Adjustment_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)adjustmentList,
                                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__);
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


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4212803 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23893/*"ガッツ"*/, method);
    byte_4212803 = 1;
  }
  return BattleServantData__GetKilledMeOpponentIndividualityArray(this, (System_String_o *)method, v2);
}


int32_t __fastcall BattleServantData__GetCommandCardIndex(
        BattleServantData_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Int64_array *userCommandCodeIds; // x0

  if ( (byte_421286A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_long___, userCommandCodeId);
    byte_421286A = 1;
  }
  if ( userCommandCodeId >= 1 && (userCommandCodeIds = this->fields.userCommandCodeIds) != 0LL )
    return System_Array__IndexOf_long_(
             userCommandCodeIds,
             userCommandCodeId,
             (const MethodInfo_1F69C00 *)Method_System_Array_IndexOf_long___);
  else
    return -1;
}


System_Int32_array *__fastcall BattleServantData__GetCommandCodeIds(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  CommandCodeInfo_o *CommandCodeInfo; // x0
  const MethodInfo *v5; // x2
  struct System_Int64_array *v6; // x8
  System_Int32_array *v7; // x20
  unsigned __int64 v8; // x21
  CommandCodeInfo_o *v9; // x22
  unsigned __int64 max_length; // x9
  int64_t v11; // x1
  __int64 v13; // x0

  if ( (byte_4212868 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_4212868 = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_B0D8BC(int___TypeInfo, userCommandCodeIds->max_length);
  v6 = this->fields.userCommandCodeIds;
  if ( !v6 )
LABEL_15:
    sub_B0D97C(CommandCodeInfo);
  v7 = (System_Int32_array *)CommandCodeInfo;
  v8 = 0LL;
  v9 = CommandCodeInfo + 1;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (__int64)v8 >= (int)max_length )
      return v7;
    if ( v8 >= max_length )
      goto LABEL_18;
    if ( v7 )
    {
      if ( v8 >= v7->max_length )
        goto LABEL_18;
      v11 = v6->m_Items[v8];
      *((_DWORD *)&v9->klass + v8) = -1;
      if ( (v11 & 0x8000000000000000LL) == 0 )
      {
        CommandCodeInfo = BattleServantData__GetCommandCodeInfo(this, v11, v5);
        if ( CommandCodeInfo )
        {
          if ( v8 >= v7->max_length )
          {
LABEL_18:
            v13 = sub_B0D9A8(CommandCodeInfo);
            sub_B0D948(v13, 0LL);
          }
          *((_DWORD *)&v9->klass + v8) = CommandCodeInfo->fields.commandCodeId;
        }
      }
      v6 = this->fields.userCommandCodeIds;
      ++v8;
      if ( v6 )
        continue;
    }
    goto LABEL_15;
  }
}


System_Int32_array *__fastcall BattleServantData__GetCommandCodeIdsEX(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  CommandCodeInfo_o *CommandCodeInfo; // x0
  const MethodInfo *v5; // x2
  struct System_Int64_array *v6; // x8
  System_Int32_array *v7; // x20
  unsigned __int64 v8; // x21
  CommandCodeInfo_o *v9; // x22
  unsigned __int64 max_length; // x9
  int64_t v11; // x1
  __int64 v13; // x0

  if ( (byte_4212869 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_4212869 = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_B0D8BC(int___TypeInfo, userCommandCodeIds->max_length);
  v6 = this->fields.userCommandCodeIds;
  if ( !v6 )
LABEL_15:
    sub_B0D97C(CommandCodeInfo);
  v7 = (System_Int32_array *)CommandCodeInfo;
  v8 = 0LL;
  v9 = CommandCodeInfo + 1;
  while ( 1 )
  {
    max_length = v6->max_length;
    if ( (__int64)v8 >= (int)max_length )
      return v7;
    if ( v8 >= max_length )
      goto LABEL_18;
    if ( v7 )
    {
      if ( v8 >= v7->max_length )
        goto LABEL_18;
      v11 = v6->m_Items[v8];
      *((_DWORD *)&v9->klass + v8) = v11;
      if ( v11 >= 1 )
      {
        CommandCodeInfo = BattleServantData__GetCommandCodeInfo(this, v11, v5);
        if ( CommandCodeInfo )
        {
          if ( v8 >= v7->max_length )
          {
LABEL_18:
            v13 = sub_B0D9A8(CommandCodeInfo);
            sub_B0D948(v13, 0LL);
          }
          *((_DWORD *)&v9->klass + v8) = CommandCodeInfo->fields.commandCodeId;
        }
      }
      v6 = this->fields.userCommandCodeIds;
      ++v8;
      if ( v6 )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleServantData___c__DisplayClass684_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_CommandCodeInfo__o *commandCodeList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4212875 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeInfo__Find__, userCommandCodeId);
    sub_B0D8A4(&Method_System_Predicate_CommandCodeInfo___ctor__, v5);
    sub_B0D8A4(&System_Predicate_CommandCodeInfo__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass684_0__GetCommandCodeInfo_b__0__, v7);
    sub_B0D8A4(&BattleServantData___c__DisplayClass684_0_TypeInfo, v8);
    byte_4212875 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass684_0_o *)sub_B0D974(
                                                       BattleServantData___c__DisplayClass684_0_TypeInfo,
                                                       userCommandCodeId,
                                                       method);
  BattleServantData___c__DisplayClass684_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.userCommandCodeId = userCommandCodeId,
        commandCodeList_k__BackingField = this->fields._commandCodeList_k__BackingField,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_CommandCodeInfo__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_BattleServantData___c__DisplayClass684_0__GetCommandCodeInfo_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_CommandCodeInfo___ctor__),
        !commandCodeList_k__BackingField) )
  {
    sub_B0D97C(v10);
  }
  return (CommandCodeInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)commandCodeList_k__BackingField,
                                (System_Predicate_T__o *)v14,
                                (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_CommandCodeInfo__Find__);
}


int32_t __fastcall BattleServantData__GetCurrentShiftPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B0D97C(this);
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

  if ( (byte_42127AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    byte_42127AB = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.tdErrorStatusVoiceSeList,
                    0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    tdErrorStatusVoiceSeList = this->fields.tdErrorStatusVoiceSeList;
    if ( !tdErrorStatusVoiceSeList )
      sub_B0D97C(0LL);
    tdErrorTouchCount = this->fields.tdErrorTouchCount;
    size = tdErrorStatusVoiceSeList->fields._size;
    if ( tdErrorTouchCount <= (int)size )
    {
      if ( size <= tdErrorTouchCount - 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
  __int64 v4; // x1
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
  __int64 v24; // x24
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x20
  DataManager_o *Instance; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  DataManager_o **v35; // x27
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v47; // x23
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  __int64 v49; // x26
  int size; // w8
  int32_t *v51; // x24
  BattleBuffData_o *buffData; // x8
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v53; // x21
  int v54; // w8
  __int64 v55; // x24
  System_TimeZoneInfo_AdjustmentRule_o *v56; // x19
  _DWORD *dateData; // x8
  __int64 v59; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42127CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_SkillLvEntity__Invoke__, method);
    sub_B0D8A4(&Method_System_Action_SkillLvEntity___ctor__, v4);
    sub_B0D8A4(&System_Action_SkillLvEntity__TypeInfo, v5);
    sub_B0D8A4(&BuffList_TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass311_0__GetHasSideEffectSkillEffectIds_b__0__, v22);
    sub_B0D8A4(&BattleServantData___c__DisplayClass311_0_TypeInfo, v23);
    byte_42127CF = 1;
  }
  entity = 0LL;
  v24 = sub_B0D974(BattleServantData___c__DisplayClass311_0_TypeInfo, method, v2);
  BattleServantData___c__DisplayClass311_0___ctor((BattleServantData___c__DisplayClass311_0_o *)v24, 0LL);
  v27 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v25, v26);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v24 )
    goto LABEL_46;
  *(_QWORD *)(v24 + 24) = v27;
  v35 = (DataManager_o **)(v24 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  v37 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 Instance,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___);
  *(_QWORD *)(v24 + 16) = v37;
  sub_B0D840((BattleServantConfConponent_o *)(v24 + 16), v37, v38, v39, v40, v41, v42, v43);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  v47 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_SkillLvEntity__TypeInfo,
                                                                               v45,
                                                                               v46);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v47,
    (Il2CppObject *)v24,
    Method_BattleServantData___c__DisplayClass311_0__GetHasSideEffectSkillEffectIds_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_SkillLvEntity___ctor__);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_46;
  v49 = 0LL;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v49 >= size )
      break;
    if ( size <= (unsigned int)v49 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v51 = (int32_t *)skillInfoList->fields._items->m_Items[v49];
    if ( v51 )
    {
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v51 + 392LL))(
                                    v51,
                                    *(_QWORD *)(*(_QWORD *)v51 + 400LL));
      if ( (_DWORD)Instance )
      {
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v51 + 392LL))(
                                      v51,
                                      *(_QWORD *)(*(_QWORD *)v51 + 400LL));
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_46;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)Instance,
                                      v51[9],
                                      0LL);
        if ( Instance )
        {
          if ( !v47 )
            goto LABEL_46;
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)v47,
            (System_Uri_o *)Instance,
            (const MethodInfo_246EA50 *)Method_System_Action_SkillLvEntity__Invoke__);
        }
      }
      skillInfoList = this->fields.skillInfoList;
      ++v49;
      if ( skillInfoList )
        continue;
    }
    goto LABEL_46;
  }
  Instance = (DataManager_o *)this->fields.buffData;
  if ( !Instance
    || (Instance = (DataManager_o *)BattleBuffData__GetAllCommandCodeBuff((BattleBuffData_o *)Instance, 0LL),
        (buffData = this->fields.buffData) == 0LL)
    || (v53 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
        Instance = (DataManager_o *)BattleBuffData__GetAllCommandAssistBuff(buffData, 0LL),
        !v53) )
  {
LABEL_46:
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v53,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v54 = v53->fields._size;
  if ( v54 >= 1 )
  {
    v55 = 0LL;
    do
    {
      if ( v54 <= (unsigned int)v55 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v56 = v53->fields._items->m_Items[v55];
      entity = 0LL;
      if ( !v56 || !v44 )
        goto LABEL_46;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v44,
                                    &entity,
                                    v56->fields.m_dateStart.fields.dateData,
                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = (DataManager_o *)BuffList_TypeInfo;
        if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          Instance = (DataManager_o *)BuffList_TypeInfo;
        }
        if ( !entity )
          goto LABEL_46;
        Instance = *(DataManager_o **)&Instance[1].fields.saveNameList->fields._size;
        if ( !Instance )
          goto LABEL_46;
        Instance = (DataManager_o *)System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
                                      (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)Instance,
                                      *(&entity->fields.id + 1),
                                      (const MethodInfo_2C779F8 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          dateData = (_DWORD *)v56->fields.m_daylightTransitionStart.fields.m_timeOfDay.fields.dateData;
          if ( !dateData )
            goto LABEL_46;
          if ( dateData[6] < 2u )
          {
            v59 = sub_B0D9A8(Instance);
            sub_B0D948(v59, 0LL);
          }
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_46;
          Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        dateData[8],
                                        dateData[9],
                                        0LL);
          if ( Instance )
          {
            if ( !v47 )
              goto LABEL_46;
            System_Action_Uri___Invoke(
              (System_Action_Uri__o *)v47,
              (System_Uri_o *)Instance,
              (const MethodInfo_246EA50 *)Method_System_Action_SkillLvEntity__Invoke__);
          }
        }
      }
      v54 = v53->fields._size;
    }
    while ( (int)++v55 < v54 );
  }
  Instance = *v35;
  if ( !*v35 )
    goto LABEL_46;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Instance,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v11; // x0
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

  if ( (byte_42127DE & 1) == 0 )
  {
    sub_B0D8A4(&ImageLimitCount_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&OptionManager_TypeInfo, v4);
    byte_42127DE = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v20, 0LL);
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
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v21, 0LL);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B0D97C(v11);
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
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v22, 0LL);
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
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
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
  __int64 imageSvtId_k__BackingField; // x0
  struct ServantEntity_o *svtdata; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42127D5 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_42127D5 = 1;
  }
  imageSvtId_k__BackingField = (unsigned int)this->fields._imageSvtId_k__BackingField;
  if ( (int)imageSvtId_k__BackingField <= 0 )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_B0D97C(imageSvtId_k__BackingField);
    v6 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
    v5 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    LODWORD(imageSvtId_k__BackingField) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v8, 0LL);
  }
  return imageSvtId_k__BackingField;
}


BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleServantData__GetKilledMeOpponentIndividuality(
        BattleServantData_o *this,
        System_String_o *logCheckFunc,
        const MethodInfo *method)
{
  BattleBuffData_CheckIndividualitiesData_array *KilledMeOpponentIndividualityArray; // x0
  __int64 v5; // x0

  KilledMeOpponentIndividualityArray = BattleServantData__GetKilledMeOpponentIndividualityArray(
                                         this,
                                         logCheckFunc,
                                         method);
  if ( !KilledMeOpponentIndividualityArray )
    sub_B0D97C(0LL);
  if ( !KilledMeOpponentIndividualityArray->max_length )
  {
    v5 = sub_B0D9A8(KilledMeOpponentIndividualityArray);
    sub_B0D948(v5, 0LL);
  }
  return KilledMeOpponentIndividualityArray->m_Items[0];
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantData__GetKilledMeOpponentIndividualityArray(
        BattleServantData_o *this,
        System_String_o *logCheckFunc,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattleServantSnapShotGroupDefault_o *SnapShotDamagedOnLogicDead_k__BackingField; // x0
  BattleBuffData_CheckIndividualitiesData_array *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  BattleBuffData_CheckIndividualitiesData_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_4212804 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData___TypeInfo, logCheckFunc);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v4);
    byte_4212804 = 1;
  }
  SnapShotDamagedOnLogicDead_k__BackingField = this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
  if ( !SnapShotDamagedOnLogicDead_k__BackingField )
    goto LABEL_11;
  v6 = BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
         SnapShotDamagedOnLogicDead_k__BackingField,
         0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v6, 0LL) )
    return v6;
  v6 = (BattleBuffData_CheckIndividualitiesData_array *)sub_B0D8BC(
                                                          BattleBuffData_CheckIndividualitiesData___TypeInfo,
                                                          1LL);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(BattleBuffData_CheckIndividualitiesData_TypeInfo, v7, v8);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v6 )
LABEL_11:
    sub_B0D97C(SnapShotDamagedOnLogicDead_k__BackingField);
  if ( v9 )
  {
    SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupDefault_o *)sub_B0D964(
                                                                                          v9,
                                                                                          v6->obj.klass->_1.element_class);
    if ( !SnapShotDamagedOnLogicDead_k__BackingField )
    {
      v18 = sub_B0D99C();
      sub_B0D948(v18, 0LL);
    }
  }
  if ( !v6->max_length )
  {
    v17 = sub_B0D9A8(SnapShotDamagedOnLogicDead_k__BackingField);
    sub_B0D948(v17, 0LL);
  }
  v6->m_Items[0] = v9;
  sub_B0D840((BattleServantConfConponent_o *)v6->m_Items, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  return v6;
}


BattleLogicServantAi_o *__fastcall BattleServantData__GetLogicServantAi(
        BattleServantData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !logic )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return shiftDeckList->max_length - this->fields.shiftSubCount;
}


int32_t __fastcall BattleServantData__GetMaxShiftIconPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B0D97C(this);
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

  if ( (byte_421287C & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, isSvtAction);
    byte_421287C = 1;
  }
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       isSvtAction,
                                                       targetSvt);
  v12 = v11;
  if ( isSvtAction )
    BattleBuffData_CheckIndividualitiesData___ctor(v11, this, targetSvt, 0LL, command, 0LL, 0LL);
  else
    BattleBuffData_CheckIndividualitiesData___ctor_22771868(v11, this, 0LL, 0LL, notSvtIndivArray, 0LL, 0LL);
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
  return UnityEngine_Mathf__Max_40819140(0, this->fields._minActNum_k__BackingField - this->fields.actionCount, 0LL);
}


int32_t __fastcall BattleServantData__GetOverwritePersonality(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__GetChangePersonality(deckSvt, 0LL);
  else
    return -1;
}


int32_t __fastcall BattleServantData__GetOverwritePolicy(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__GetChangePolicy(deckSvt, 0LL);
  else
    return -1;
}


BattleBuffData_BuffData_o *__fastcall BattleServantData__GetPreventInvisibleWhenInstantDeathBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_CheckIndividualitiesData_o *KilledMeOpponentIndividuality; // x20
  const MethodInfo *v5; // x1
  BattleBuffData_o *BuffData; // x0

  if ( (byte_421283F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23963/*"死亡時の非表示を防ぐバフ"*/, method);
    byte_421283F = 1;
  }
  KilledMeOpponentIndividuality = BattleServantData__GetKilledMeOpponentIndividuality(
                                    this,
                                    (System_String_o *)method,
                                    v2);
  BuffData = BattleServantData__get_BuffData(this, v5);
  if ( !BuffData )
    sub_B0D97C(0LL);
  return BattleBuffData__GetFirstMatchCondBuff(BuffData, 127, KilledMeOpponentIndividuality, 0, 0LL);
}


int32_t __fastcall BattleServantData__GetRemainActionCount(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__FixMaxActNum(this, method) - this->fields.actionCount;
}


int32_t __fastcall BattleServantData__GetRemainingNeedActCount(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t v2; // w1

  v2 = BattleServantData__FixMinActNum(this, method) - this->fields.actionCount;
  return UnityEngine_Mathf__Max_40819140(0, v2, 0LL);
}


int32_t __fastcall BattleServantData__GetRevengeIdCheckOpponentOnly(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !buffData )
    sub_B0D97C(this);
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

  if ( (byte_42127B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_Deserialize_BattleServantData_SaveData___, str);
    sub_B0D8A4(&JsonManager_TypeInfo, v4);
    byte_42127B8 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (BattleServantData_SaveData_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                           (Il2CppObject *)str,
                                           (const MethodInfo_1B68238 *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
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
      sub_B0D97C(0LL);
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
  const MethodInfo *v7; // x2
  TreasureDvcEntity_o *v8; // x20

  result = this->fields.seqIdFromMstTDSeqWeight;
  if ( result <= 0 )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
    if ( TreasureDevice )
    {
      IsRandomTD = TreasureDvcEntity__IsRandomTD(TreasureDevice, 0LL);
      TreasureDevice = BattleServantData__get_TreasureDevice(this, v6);
      v8 = TreasureDevice;
      if ( IsRandomTD )
      {
        if ( TreasureDevice )
          return TreasureDevice->fields.cacheRandomSeqId;
      }
      else
      {
        TreasureDevice = (TreasureDvcEntity_o *)BattleServantData__getDispLimitCount(this, 1, v7);
        if ( v8 )
          return TreasureDvcEntity__getSeqId(v8, (int32_t)TreasureDevice, 0LL);
      }
    }
    sub_B0D97C(TreasureDevice);
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall BattleServantData__GetServantIndividualityList(
        BattleServantData_o *this,
        System_Collections_Generic_IEnumerable_int__o *externalIndividualities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x21
  System_Int32_array *Individuality; // x0
  System_Collections_Generic_IEnumerable_T__o *svtIndividuality; // x1
  ServantEntity_o *svtdata; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  int32_t v14; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_421285E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, externalIndividualities);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_421285E = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   externalIndividualities,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)this->fields.svtIndividuality;
  if ( !svtIndividuality )
  {
    svtdata = this->fields.svtdata;
    v13 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = v13;
    *(_QWORD *)&v16.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
    Individuality = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                            this->fields._dispLimitCount_k__BackingField,
                                            0LL);
    if ( !svtdata )
LABEL_15:
      sub_B0D97C(Individuality);
    Individuality = ServantEntity__getIndividuality(svtdata, v14, (int32_t)Individuality, 0LL);
    svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)Individuality;
  }
  if ( !v8 )
    goto LABEL_15;
  System_Collections_Generic_List_int___AddRange(
    v8,
    svtIndividuality,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( externalIndividualities )
    System_Collections_Generic_List_int___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)externalIndividualities,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.commonAddIndividuality, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.commonAddIndividuality,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  return v8;
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
  __int64 v4; // x1
  BattleBuffData_CheckIndividualitiesData_o *v5; // x20
  const MethodInfo *v6; // x1
  BattleBuffData_o *BuffData; // x0

  if ( (byte_42127F8 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    byte_42127F8 = 1;
  }
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  BuffData = BattleServantData__get_BuffData(this, v6);
  if ( !v5
    || !BuffData
    || (BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(
                                         BuffData,
                                         115,
                                         v5->fields._selfConcatSvtIndividualities_k__BackingField,
                                         0LL,
                                         1,
                                         0LL)) == 0LL )
  {
    sub_B0D97C(BuffData);
  }
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)BuffData,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleWarBoardInfo_WarBoardServantInfo_o *__fastcall BattleServantData__GetTakeoverServantData(
        BattleServantData_o *this,
        WarBoardBattleEvent_TakeoverSvtArg_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  const MethodInfo *v9; // x1
  bool isAction; // w22
  const MethodInfo *v11; // x1
  AiStateManager_o *AiStateManager; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  ServantAiResetChecker_o *v15; // x24
  System_Int32_array **TakeOverAiStateArray; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  BattleBuffData_o *BuffData; // x23
  int32_t v28; // w24
  const MethodInfo *v29; // x1
  int32_t MaxHp; // w25
  const MethodInfo *v31; // x2
  System_Int32_array *Individualities; // x26
  const MethodInfo *v33; // x4
  System_Int32_array *BuffIndividualities; // x0
  System_Int32_array *fieldIndiv; // x27
  System_Int32_array *v36; // x28
  const MethodInfo *v37; // x4
  const MethodInfo *v38; // x1
  bool v39; // w8
  const MethodInfo *v40; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x1
  int32_t v52; // w0
  int32_t v53; // w22
  int32_t v54; // w23
  struct System_Collections_Generic_Dictionary_long__int__o *dicDistributeStar; // x22
  const MethodInfo *v56; // x1
  int64_t UserSvtId; // x0
  WarBoardBattleServantEvent_o *servantEvent; // x19
  const MethodInfo *v59; // x1
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  int64_t npcSvtEquipId; // x8

  if ( (byte_42127BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_long__int___, arg);
    sub_B0D8A4(&System_Math_TypeInfo, v5);
    sub_B0D8A4(&ServantAiResetChecker_TypeInfo, v6);
    sub_B0D8A4(&BattleWarBoardInfo_WarBoardServantInfo_TypeInfo, v7);
    byte_42127BC = 1;
  }
  v8 = sub_B0D974(BattleWarBoardInfo_WarBoardServantInfo_TypeInfo, arg, method);
  BattleWarBoardInfo_WarBoardServantInfo___ctor((BattleWarBoardInfo_WarBoardServantInfo_o *)v8, 0LL);
  isAction = BattleServantData__isAction(this, v9);
  AiStateManager = BattleServantData__get_AiStateManager(this, v11);
  v15 = (ServantAiResetChecker_o *)sub_B0D974(ServantAiResetChecker_TypeInfo, v13, v14);
  ServantAiResetChecker___ctor(v15, this, 0LL);
  if ( !AiStateManager )
    goto LABEL_22;
  TakeOverAiStateArray = (System_Int32_array **)AiStateManager__MakeTakeOverAiStateArray(
                                                  AiStateManager,
                                                  (AiResetChecker_o *)v15,
                                                  0LL);
  if ( !v8 )
    goto LABEL_22;
  *(_QWORD *)(v8 + 112) = TakeOverAiStateArray;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 112), TakeOverAiStateArray, v17, v18, v19, v20, v21, v22);
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v23);
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  BattleBuffData__ResetNotTakeOverBuff((BattleBuffData_o *)TakeOverAiStateArray, 0LL);
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v24);
  if ( !arg )
    goto LABEL_22;
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  BattleBuffData__RemoveNoTurnBuff((BattleBuffData_o *)TakeOverAiStateArray, arg->fields.logic, 0LL);
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v25);
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  BattleBuffData__UpdateForceNoField((BattleBuffData_o *)TakeOverAiStateArray, 0LL);
  BuffData = BattleServantData__get_BuffData(this, v26);
  v28 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  MaxHp = BattleServantData__getMaxHp(this, v29);
  Individualities = BattleServantData__getIndividualities(this, 0LL, v31);
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 0, 0, 0, v33);
  fieldIndiv = arg->fields.fieldIndiv;
  v36 = BuffIndividualities;
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__getBuffIndividualities(this, 0, 0, 1, v37);
  if ( !BuffData )
    goto LABEL_22;
  BattleBuffData__ChangeBuffState(
    BuffData,
    v28,
    MaxHp,
    Individualities,
    v36,
    fieldIndiv,
    (System_Int32_array *)TakeOverAiStateArray,
    0LL);
  v39 = !isAction && BattleServantData__isAction(this, v38);
  *(_BYTE *)(v8 + 85) = v39;
  *(_QWORD *)(v8 + 16) = BattleServantData__getUserSvtId(this, v38);
  *(_DWORD *)(v8 + 24) = this->fields.maxDefeatPoint;
  *(_DWORD *)(v8 + 28) = this->fields.defeatPoint;
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v40);
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)TakeOverAiStateArray, 0LL);
  *(_QWORD *)(v8 + 48) = SaveData;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 48), SaveData, v42, v43, v44, v45, v46, v47);
  *(_DWORD *)(v8 + 56) = BattleServantData__GetSkillChargeTurn(this, 0, v48);
  *(_DWORD *)(v8 + 60) = BattleServantData__GetSkillChargeTurn(this, 1, v49);
  *(_DWORD *)(v8 + 64) = BattleServantData__GetSkillChargeTurn(this, 2, v50);
  *(_DWORD *)(v8 + 36) = BattleServantData__getMaxHp(this, v51);
  v52 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  v53 = *(_DWORD *)(v8 + 36);
  v54 = v52;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  *(_DWORD *)(v8 + 32) = System_Math__Min_44514512(v54, v53, 0LL);
  *(_DWORD *)(v8 + 40) = this->fields.np;
  *(_DWORD *)(v8 + 44) = this->fields.nexttpturn;
  *(_DWORD *)(v8 + 68) = this->fields.aftSquareIndex;
  *(_DWORD *)(v8 + 72) = this->fields.befSquareIndex;
  *(_DWORD *)(v8 + 76) = this->fields.transformIndex;
  *(_DWORD *)(v8 + 80) = this->fields.transformLimitCount;
  *(_BYTE *)(v8 + 84) = this->fields.isSleepWaitMode;
  dicDistributeStar = arg->fields.dicDistributeStar;
  UserSvtId = BattleServantData__getUserSvtId(this, v56);
  *(_DWORD *)(v8 + 88) = BasicHelper__GetValue_long__int_(
                           (System_Collections_Generic_Dictionary_K__V__o *)dicDistributeStar,
                           UserSvtId,
                           0,
                           (const MethodInfo_1709188 *)Method_BasicHelper_GetValue_long__int___);
  *(_DWORD *)(v8 + 92) = this->fields.squareEffectSkillId;
  *(_DWORD *)(v8 + 96) = this->fields.squareEffectSkillLv;
  servantEvent = arg->fields.servantEvent;
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__getUserSvtId(this, v59);
  if ( !servantEvent )
LABEL_22:
    sub_B0D97C(TakeOverAiStateArray);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(servantEvent, (int64_t)TakeOverAiStateArray, 0LL);
  if ( EventServantInfo )
    npcSvtEquipId = EventServantInfo->fields.npcSvtEquipId;
  else
    npcSvtEquipId = 0LL;
  *(_QWORD *)(v8 + 104) = npcSvtEquipId;
  return (BattleWarBoardInfo_WarBoardServantInfo_o *)v8;
}


int32_t __fastcall BattleServantData__GetUpDownCriticalRateDamageTaken(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  System_String_o *text; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4212836 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212836 = 1;
  }
  text = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getActValue_30818596(buffData, 90, &text, v8, 0LL);
}


float __fastcall BattleServantData__GetUpDownDropStarDamageTaken(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212834 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212834 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getActMag_30819668(buffData, 91, v8, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  bool v11; // w1
  __int16 *v12; // x0
  __int16 v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4212813 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffTypes);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, v5);
    sub_B0D8A4(&Method_System_Nullable_bool__GetValueOrDefault__, v6);
    sub_B0D8A4(&Method_System_Nullable_bool___ctor__, v7);
    byte_4212813 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                        BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                        buffTypes,
                                                        method);
    BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, 0LL, 0LL);
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList(
                                                                      buffData,
                                                                      buffTypes,
                                                                      v9,
                                                                      0LL,
                                                                      0LL);
    if ( BuffList )
    {
      v11 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
              BuffList,
              (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
      v12 = &v14;
      v14 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v12,
        v11,
        (const MethodInfo_297C558 *)Method_System_Nullable_bool___ctor__);
      LOBYTE(BuffList) = (_BYTE)v14 != 0;
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21

  if ( (byte_4212812 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4212812 = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return 0;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__IsPermanentSleep(buffData, v5, 0LL);
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
        const MethodInfo_170B4F4 *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  Il2CppClass *_0_BattleServantData___c__628_T; // x21
  __int16 v15; // w8
  Il2CppClass *v16; // x21
  Il2CppClass *v17; // x21
  Il2CppClass *v18; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x21
  Il2CppClass *v20; // x21
  __int16 v21; // w8
  Il2CppClass *v22; // x21
  Il2CppClass *v23; // x21
  Il2CppClass *v24; // x21
  Il2CppObject *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  Il2CppClass *v32; // x19
  char *static_fields; // x0

  if ( (byte_4214312 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___, *(_QWORD *)&wave);
    sub_B0D8A4(&Method_System_Func_ServantWaveTurnEvent__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_ServantWaveTurnEvent__bool__TypeInfo, v9);
    byte_4214312 = 1;
  }
  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner )
    sub_B0D97C(0LL);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantWaveTurnEventOwner__EventEnumerator(
                                                               waveTurnEventOwner,
                                                               wave,
                                                               turn,
                                                               0LL);
  _0_BattleServantData___c__628_T = method->rgctx_data->_0_BattleServantData___c__628_T_;
  v15 = WORD1(_0_BattleServantData___c__628_T->vtable[0].methodPtr);
  if ( (v15 & 1) == 0 )
  {
    sub_AA65A4(method->rgctx_data->_0_BattleServantData___c__628_T_);
    v15 = WORD1(_0_BattleServantData___c__628_T->vtable[0].methodPtr);
  }
  if ( (v15 & 0x400) != 0 )
  {
    v16 = method->rgctx_data->_0_BattleServantData___c__628_T_;
    if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(method->rgctx_data->_0_BattleServantData___c__628_T_);
    if ( !v16->_2.cctor_finished )
    {
      v17 = method->rgctx_data->_0_BattleServantData___c__628_T_;
      if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
        sub_AA65A4(method->rgctx_data->_0_BattleServantData___c__628_T_);
      j_il2cpp_runtime_class_init_0(v17);
    }
  }
  v18 = method->rgctx_data->_0_BattleServantData___c__628_T_;
  if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_0_BattleServantData___c__628_T_);
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v18->static_fields + 1);
  if ( !v19 )
  {
    v20 = method->rgctx_data->_0_BattleServantData___c__628_T_;
    v21 = WORD1(v20->vtable[0].methodPtr);
    if ( (v21 & 1) == 0 )
    {
      sub_AA65A4(method->rgctx_data->_0_BattleServantData___c__628_T_);
      v21 = WORD1(v20->vtable[0].methodPtr);
    }
    if ( (v21 & 0x400) != 0 )
    {
      v22 = method->rgctx_data->_0_BattleServantData___c__628_T_;
      if ( (BYTE2(v22->vtable[0].methodPtr) & 1) == 0 )
        sub_AA65A4(method->rgctx_data->_0_BattleServantData___c__628_T_);
      if ( !v22->_2.cctor_finished )
      {
        v23 = method->rgctx_data->_0_BattleServantData___c__628_T_;
        if ( (BYTE2(v23->vtable[0].methodPtr) & 1) == 0 )
          sub_AA65A4(method->rgctx_data->_0_BattleServantData___c__628_T_);
        j_il2cpp_runtime_class_init_0(v23);
      }
    }
    v24 = method->rgctx_data->_0_BattleServantData___c__628_T_;
    if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(method->rgctx_data->_0_BattleServantData___c__628_T_);
    v25 = *(Il2CppObject **)v24->static_fields;
    v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_ServantWaveTurnEvent__bool__TypeInfo,
                                                                               v11,
                                                                               v12);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v19,
      v25,
      (intptr_t)method->rgctx_data->_1_BattleServantData___c__628_T___HasWaveTurnEvent_b__628_0,
      (const MethodInfo_26189B8 *)Method_System_Func_ServantWaveTurnEvent__bool___ctor__);
    v32 = method->rgctx_data->_0_BattleServantData___c__628_T_;
    if ( (BYTE2(v32->vtable[0].methodPtr) & 1) == 0 )
      sub_AA65A4(v32);
    static_fields = (char *)v32->static_fields;
    *((_QWORD *)static_fields + 1) = v19;
    sub_B0D840(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v19,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v13,
           (System_Func_TSource__bool__o *)v19,
           (const MethodInfo_171B1E8 *)Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___);
}


void __fastcall BattleServantData__InitCommonAddIndividuality(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 IsAnySupport; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Int32_array *v17; // x1

  if ( (byte_42127C1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_7293/*"INDIVIDUALITY_IS_SUPPORT"*/, v8);
    byte_42127C1 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  IsAnySupport = Follower__IsAnySupport(this->fields.followerType, 0LL);
  if ( (IsAnySupport & 1) != 0 )
  {
    IsAnySupport = ConstantMaster__getValue((System_String_o *)StringLiteral_7293/*"INDIVIDUALITY_IS_SUPPORT"*/, 0LL);
    if ( v9 )
    {
      System_Collections_Generic_List_int___Add(
        v9,
        IsAnySupport,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      goto LABEL_7;
    }
LABEL_11:
    sub_B0D97C(IsAnySupport);
  }
  if ( !v9 )
    goto LABEL_11;
LABEL_7:
  if ( v9->fields._size < 1 )
    v17 = 0LL;
  else
    v17 = System_Collections_Generic_List_int___ToArray(
            v9,
            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.commonAddIndividuality = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commonAddIndividuality,
    (System_Int32_array **)v17,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall BattleServantData__InitializeBuff(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o **p_buffData; // x20
  int MaxHp; // w21
  BattleBuffData_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x3

  if ( (byte_4212859 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_TypeInfo, method);
    byte_4212859 = 1;
  }
  p_buffData = &this->fields.buffData;
  if ( this->fields.buffData )
  {
    MaxHp = BattleServantData__getMaxHp(this, method);
  }
  else
  {
    v6 = (BattleBuffData_o *)sub_B0D974(BattleBuffData_TypeInfo, method, v2);
    BattleBuffData___ctor(v6, 0LL);
    *p_buffData = v6;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.buffData,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    MaxHp = -1;
  }
  if ( !*p_buffData )
    sub_B0D97C(0LL);
  BattleBuffData__Initialize(*p_buffData, 0LL);
  if ( MaxHp >= 1 )
    BattleServantData__checkUpdateUpdownHp(this, MaxHp, 0, v13);
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

  if ( (byte_4212876 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_int___, data);
    sub_B0D8A4(&StringLiteral_11679/*"SEQ_IDS_20220729"*/, v4);
    byte_4212876 = 1;
  }
  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)data);
  if ( TreasureDevice )
  {
    ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray((System_String_o *)StringLiteral_11679/*"SEQ_IDS_20220729"*/, 0LL);
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
                                 (const MethodInfo_1F69B20 *)Method_System_Array_IndexOf_int___) >= 0;
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
  BattleServantData_o *v6; // x20
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
  System_Xml_XmlQualifiedName_o **v22; // x25
  System_Int32_c **v23; // x24
  System_Xml_XmlQualifiedName_o **v24; // x23
  Il2CppObject *current; // x22
  int64_t v26; // x21
  System_Xml_XmlQualifiedName_o **v27; // x28
  int32_t v28; // w27
  System_Int32_c **v29; // x19
  System_Xml_XmlQualifiedName_o **v30; // x25
  System_Xml_Schema_XmlSchemaObject_o *v31; // x22
  __int64 v32; // x23
  __int64 v33; // x24
  __int64 v34; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v37; // x0
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

  v6 = this;
  if ( (byte_4212877 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&long_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&string_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_22544/*"svtId"*/, v19);
    sub_B0D8A4(&StringLiteral_23143/*"userSvtId"*/, v20);
    this = (BattleServantData_o *)sub_B0D8A4(&StringLiteral_22041/*"seqId"*/, v21);
    byte_4212877 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v50 = 0LL;
  value = 0LL;
  entity = 0LL;
  v49 = 0LL;
  if ( !data || (this = (BattleServantData_o *)data->fields.firstNpPlayList) == 0LL )
    sub_B0D97C(this);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v22 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_22041/*"seqId"*/;
  v23 = &int_TypeInfo;
  v24 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_23143/*"userSvtId"*/;
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
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
        {
          v42 = 0;
          v43 = 1;
          goto LABEL_43;
        }
        current = v52.fields.current;
        if ( v52.fields.current
          && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v52.fields.current,
               *v22,
               &value,
               (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
        {
          if ( !value )
            sub_B0D97C(0LL);
          if ( value->klass->_1.element_class != (*v23)->_1.element_class )
          {
            MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B0DC70(value);
LABEL_47:
            sub_B0D97C(MasterData_WarQuestSelectionMaster);
          }
          if ( *(_DWORD *)j_il2cpp_object_unbox_0(value) == seqId )
            break;
        }
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
             *v24,
             &v50,
             (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
        && v50 )
      {
        if ( (System_String_c *)v50->klass == string_TypeInfo )
        {
          v26 = System_Int64__Parse((System_String_o *)v50, 0LL);
          goto LABEL_17;
        }
        if ( (System_Int64_c *)v50->klass == long_TypeInfo )
        {
          v26 = *(_QWORD *)j_il2cpp_object_unbox_0(v50);
          goto LABEL_17;
        }
      }
      v26 = 0LL;
LABEL_17:
      if ( v6->fields.isEnemy || v6->fields.followerType )
        break;
      v41 = *(_OWORD *)&v6->fields.userSvtId.fields.fakeValue;
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v6->fields.userSvtId.fields.currentCryptoKey;
      *(_OWORD *)&v47.fields.fakeValue = v41;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v46 = v47;
      if ( v26 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v46, 0LL) )
        goto LABEL_44;
    }
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_22544/*"svtId"*/,
           &v49,
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v27 = v22;
      v28 = seqId;
      v29 = v23;
      v30 = v24;
      v31 = v49;
      v33 = *(_QWORD *)&v6->fields.svtId.fields.currentCryptoKey;
      v32 = *(_QWORD *)&v6->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v53.fields.currentCryptoKey = v33;
      *(_QWORD *)&v53.fields.fakeValue = v32;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v53, 0LL);
      if ( !v31 )
        sub_B0D97C(v34);
      v23 = v29;
      if ( v31->klass->_1.element_class != (*v29)->_1.element_class )
      {
        v37 = sub_B0DC70(v31);
LABEL_51:
        sub_B0D97C(v37);
      }
      seqId = v28;
      v24 = v30;
      v22 = v27;
      if ( *(_DWORD *)j_il2cpp_object_unbox_0(v31) == (_DWORD)v34 )
        break;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_47;
    v37 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            v26,
            (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( (v37 & 1) != 0 )
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
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
      if ( v40 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v6->fields.svtId, 0LL) )
        break;
    }
  }
LABEL_44:
  v42 = 1;
  v43 = 3;
LABEL_43:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
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
    sub_B0D97C(0LL);
  return BattleDeckServantData__getEnableNpInfo(deckSvt, 0LL);
}


bool __fastcall BattleServantData__IsEquip(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct BattleUserServantData_array *equipList; // x22
  __int64 v7; // x8
  SkillLvMaster_o *v8; // x19
  unsigned __int64 v9; // x23
  Il2CppClass **v10; // x21
  DataManager_o **v11; // x21
  DataManager_o *v12; // t1
  DataManager_o *v13; // x20
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v15; // x21
  unsigned __int64 v16; // x24
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x25
  int32_t v18; // w1
  __int64 v20; // x0

  if ( (byte_421287A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421287A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (equipList = this->fields.equipList) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(Instance);
  }
  v7 = *(_QWORD *)&equipList->max_length;
  if ( (int)v7 < 1 )
    return 0;
  v8 = (SkillLvMaster_o *)Instance;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)v7 )
    {
LABEL_25:
      v20 = sub_B0D9A8(Instance);
      sub_B0D948(v20, 0LL);
    }
    v10 = &equipList->obj.klass + v9;
    v12 = (DataManager_o *)v10[4];
    v11 = (DataManager_o **)(v10 + 4);
    Instance = v12;
    if ( v12 )
    {
      Instance = (DataManager_o *)BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)Instance, 0LL);
      if ( v9 >= equipList->max_length )
        goto LABEL_25;
      v13 = Instance;
      Instance = *v11;
      if ( !*v11 )
        goto LABEL_26;
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
                                    Instance,
                                    Instance->klass[1]._1.this_arg.data);
      if ( !v13 )
        goto LABEL_26;
      datalist = v13->fields.datalist;
      if ( (int)datalist >= 1 )
        break;
    }
LABEL_22:
    LODWORD(v7) = equipList->max_length;
    if ( (__int64)++v9 >= (int)v7 )
      return 0;
  }
  v15 = Instance;
  v16 = 0LL;
  p_lookup = &Instance->fields.lookup;
  while ( 1 )
  {
    if ( v16 >= (unsigned int)datalist )
      goto LABEL_25;
    if ( !v15 )
      goto LABEL_26;
    if ( v16 >= LODWORD(v15->fields.datalist) )
      goto LABEL_25;
    v18 = *((_DWORD *)&v13->fields.lookup + v16);
    if ( v18 >= 1 )
    {
      if ( !v8 )
        goto LABEL_26;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(v8, v18, *((_DWORD *)p_lookup + v16), 0LL);
      if ( Instance )
        return 1;
    }
    LODWORD(datalist) = v13->fields.datalist;
    if ( (__int64)++v16 >= (int)datalist )
      goto LABEL_22;
  }
}


bool __fastcall BattleServantData__IsExecOverwriteTreasureDevice(
        BattleServantData_o *this,
        int32_t execId,
        const MethodInfo *method)
{
  return this->fields.tempTreasuredvcId >= 1 && this->fields.treasuredvcId == execId;
}


bool __fastcall BattleServantData__IsForceAppearance(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.isForceAppearance;
}


bool __fastcall BattleServantData__IsHideAttri(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__IsHideAttri(deckSvt, 0LL);
  return (char)deckSvt;
}


bool __fastcall BattleServantData__IsHideClassSkillNpcFollower(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  if ( !this->fields.deckSvt || !Follower__IsNpc(this->fields.followerType, 0LL) )
    return 0;
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B0D97C(0LL);
  return BattleDeckServantData__IsHideClassSkillNpcFollower(deckSvt, 0LL);
}


bool __fastcall BattleServantData__IsHidePersonality(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__IsHidePersonality(deckSvt, 0LL);
  return (char)deckSvt;
}


bool __fastcall BattleServantData__IsHidePolicy(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__IsHidePolicy(deckSvt, 0LL);
  return (char)deckSvt;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__IsMoveToSubMember(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_4212866 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___, *(_QWORD *)&wave);
    byte_4212866 = 1;
  }
  return BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(
           this,
           wave,
           turn,
           (const MethodInfo_170B4F4 *)Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___);
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
    sub_B0D97C(0LL);
  return TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDevice, 0LL);
}


bool __fastcall BattleServantData__IsPlayableVoice(
        BattleServantData_o *this,
        VoicePlayCondMaster_o *condMst,
        int32_t type,
        System_Collections_Generic_KeyValuePair_string__int__o *pairVoiceIdWeight,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t SvtId; // w21
  const MethodInfo *v13; // x2
  int32_t DispLimitCount; // w0
  int32_t overwriteSvtVoiceId; // w24
  int32_t v16; // w23
  System_String_o *FileName; // x22
  ServantAssetLoadManager_o *Instance; // x0
  System_String_o *Weight; // x2
  const MethodInfo_2029D7C *v20; // x4
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_KeyValuePair_string__int__o v28; // [xsp+8h] [xbp-48h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+18h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o v30; // 0:x0.16

  if ( (byte_4212883 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__int___ctor__, condMst);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_B0D8A4(&Voice_TypeInfo, v11);
    byte_4212883 = 1;
  }
  condEntity = 0LL;
  SvtId = BattleServantData__getSvtId(this, (const MethodInfo *)condMst);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v13);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  v16 = DispLimitCount;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  if ( !ServantAssetLoadManager__ExistsBattleVoice(SvtId, v16, overwriteSvtVoiceId, type, 0LL) )
    return 0;
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager__GetPrefixVoiceId(
                                                  Instance,
                                                  SvtId,
                                                  v16,
                                                  FileName,
                                                  0LL),
        !condMst) )
  {
    sub_B0D97C(Instance);
  }
  if ( !VoicePlayCondMaster__isVoicePlay_34380364(
          condMst,
          SvtId,
          (System_String_o *)Instance,
          &condEntity,
          0LL,
          -1LL,
          -1,
          0LL) )
    return 0;
  Weight = (System_String_o *)(unsigned int)VoicePlayCondMaster__GetWeight(condMst, condEntity, 10, 0LL);
  v30.fields.key = (struct System_String_o *)&v28;
  *(_QWORD *)&v30.fields.value = FileName;
  v28 = (System_Collections_Generic_KeyValuePair_string__int__o)0LL;
  System_Collections_Generic_KeyValuePair_string__int____ctor(
    v30,
    Weight,
    Method_System_Collections_Generic_KeyValuePair_string__int___ctor__,
    v20);
  *pairVoiceIdWeight = v28;
  sub_B0D840((BattleServantConfConponent_o *)pairVoiceIdWeight, 0LL, v21, v22, v23, v24, v25, v26);
  return 1;
}


bool __fastcall BattleServantData__IsTDAppearance(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x19
  const MethodInfo *v4; // x2
  __int64 DispLimitCount; // x0

  TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v4);
  if ( !TreasureDevice )
    sub_B0D97C(DispLimitCount);
  return TreasureDvcEntity__getFixAppearanceInfoArray(TreasureDevice, DispLimitCount, 0LL) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_4212867 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___, *(_QWORD *)&wave);
    byte_4212867 = 1;
  }
  return BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(
           this,
           wave,
           turn,
           (const MethodInfo_170B4F4 *)Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___);
}


BattleCommandData_o *__fastcall BattleServantData__MakeTreasureDvcCommand(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandData_o *v4; // x20
  const MethodInfo *v5; // x1
  ServantTreasureDvcEntity_o *SvtTDvc; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42127EB & 1) == 0 )
  {
    sub_B0D8A4(&BattleCommandData_TypeInfo, method);
    byte_42127EB = 1;
  }
  if ( !this->fields.TDvc || !this->fields._SvtTDvc )
    return 0LL;
  v4 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, method, v2);
  BattleCommandData___ctor(v4, 0LL);
  SvtTDvc = BattleServantData__get_SvtTDvc(this, v5);
  if ( !SvtTDvc || !v4 )
    sub_B0D97C(SvtTDvc);
  v4->fields._type = SvtTDvc->fields.cardId;
  v4->fields.treasureDvc = BattleServantData__getTreasureDvcId(this, 1, v7);
  return v4;
}


void __fastcall BattleServantData__OverwriteShiftDeckIndex(
        BattleServantData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  int32_t Param; // w0

  if ( !vals )
    sub_B0D97C(this);
  Param = DataVals__GetParam(vals, 117, -1, 0LL);
  if ( (Param & 0x80000000) == 0 )
    this->fields.shiftDeckIndex = Param;
}


void __fastcall BattleServantData__OverwriteSkillsForTransformedServant(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvt,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x19
  System_Int32_array *BattleSkillIdList; // x20
  const MethodInfo *v6; // x2
  BattleServantData_o *v7; // x21
  unsigned __int64 v8; // x22
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userSvtId; // x26
  int32_t v10; // w25
  int32_t v11; // w24
  BattleServantData_o *v12; // x23
  const MethodInfo *v13; // x4
  __int64 v14; // x0

  if ( !userSvt
    || (v4 = this,
        BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(userSvt, 0LL),
        this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleUserServantData_o *, void *))userSvt->klass->vtable._6_getSkillLevelList.method)(
                                        userSvt,
                                        userSvt->klass[1]._1.image),
        !BattleSkillIdList) )
  {
LABEL_15:
    sub_B0D97C(this);
  }
  if ( (int)BattleSkillIdList->max_length >= 1 )
  {
    v7 = this;
    v8 = 0LL;
    p_userSvtId = &this->fields.userSvtId;
    do
    {
      this = (BattleServantData_o *)BattleServantData__getSelfSkillInfo(v4, v8, v6);
      if ( this )
      {
        if ( v8 >= BattleSkillIdList->max_length )
          goto LABEL_14;
        if ( !v7 )
          goto LABEL_15;
        if ( v8 >= (unsigned int)v7->fields.uniqueId )
        {
LABEL_14:
          v14 = sub_B0D9A8(this);
          sub_B0D948(v14, 0LL);
        }
        v10 = BattleSkillIdList->m_Items[v8 + 1];
        v11 = *((_DWORD *)&p_userSvtId->fields.currentCryptoKey + v8);
        v12 = this;
        if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._5_isAiTarget.method)(
               this,
               this->klass->vtable._6_setBuffState.methodPtr) != v10
          || HIDWORD(v12->fields.userSvtId.fields.currentCryptoKey) != v11 )
        {
          BattleServantData__ReplaceSelfSkillInfo(v4, v8, v10, v11, v13);
        }
      }
      ++v8;
    }
    while ( (__int64)v8 < (int)BattleSkillIdList->max_length );
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
    sub_B0D97C(0LL);
  ServantWaveTurnEventOwner__Add(waveTurnEventOwner, ev, 0LL);
}


void __fastcall BattleServantData__RemovePartAnimationSaveData(
        BattleServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  bool IsNullOrEmpty; // w8
  BattleServantConfConponent_o *p_partAnimationSaveDict; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *klass; // x0

  if ( (byte_4212881 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____Remove__,
      key);
    byte_4212881 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(key, 0LL);
  p_partAnimationSaveDict = (BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict;
  if ( IsNullOrEmpty )
  {
    p_partAnimationSaveDict->klass = 0LL;
    sub_B0D840(p_partAnimationSaveDict, 0LL, v5, v6, v7, v8, v9, v10);
  }
  else
  {
    klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_partAnimationSaveDict->klass;
    if ( klass )
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        klass,
        (System_Xml_XmlQualifiedName_o *)key,
        (const MethodInfo_2E4C6D4 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____Remove__);
  }
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
  BattleServantData___c__DisplayClass308_0_o *v15; // x23
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x24
  WarBoardData_SquareRangeSearch_o *v21; // x0
  WarBoardData_SquareRangeSearch_o *v22; // x22
  int32_t v23; // w24
  BattleSkillInfoData_o *SkillData; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v25; // x20
  const MethodInfo *v26; // [xsp+0h] [xbp-40h]

  if ( (byte_42127CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_BattleSkillInfoData__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__, v12);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass308_0__ReplaceSelfSkillInfo_b__0__, v13);
    sub_B0D8A4(&BattleServantData___c__DisplayClass308_0_TypeInfo, v14);
    byte_42127CC = 1;
  }
  v15 = (BattleServantData___c__DisplayClass308_0_o *)sub_B0D974(
                                                        BattleServantData___c__DisplayClass308_0_TypeInfo,
                                                        *(_QWORD *)&index,
                                                        *(_QWORD *)&skillId);
  BattleServantData___c__DisplayClass308_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  v15->fields.skillInfoType = 11;
  v15->fields.index = index;
  skillInfoList = this->fields.skillInfoList;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleSkillInfoData__bool__TypeInfo,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_BattleServantData___c__DisplayClass308_0__ReplaceSelfSkillInfo_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
  v21 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___);
  if ( !v21 )
    return;
  v22 = v21;
  v16 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.skillInfoList;
  if ( !v16
    || (v23 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                v16,
                (WarBoardManager_TaskList_o *)v22,
                (const MethodInfo_2FC6798 *)Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__),
        SkillData = BattleSkillInfoData__MakeSkillData(v15->fields.skillInfoType, 0LL),
        v16 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)BattleServantData__SetSkillInfo(
                                                                               this,
                                                                               SkillData,
                                                                               v15->fields.skillInfoType,
                                                                               v15->fields.index,
                                                                               skillId,
                                                                               skillLv,
                                                                               -1LL,
                                                                               -1,
                                                                               v26),
        !this->fields.skillInfoList)
    || (v25 = v16,
        System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.skillInfoList,
          v23,
          (WarBoardManager_TaskList_o *)v16,
          (const MethodInfo_2FC5440 *)Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__),
        !v25) )
  {
LABEL_10:
    sub_B0D97C(v16);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_WarBoardManager_TaskList__o *, BattleServantData_o *, Il2CppMethodPointer))v25->klass->vtable._11_Add.method)(
    v25,
    this,
    v25->klass->vtable._12_unknown.methodPtr);
  LODWORD(v25[1].monitor) = v22[2].klass;
  LODWORD(v25[1].klass) = v22[1].fields.squareIndex;
}


void __fastcall BattleServantData__ResetAdjustment(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0

  if ( (byte_42127B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Clear__, method);
    byte_42127B5 = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)adjustmentList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__Clear__);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x20
  BattleServantData___c_c *v13; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__363_0; // x21
  Il2CppObject *v16; // x22
  struct BattleServantData___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v30; // x20
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  BattleSkillInfoData_o *v35; // x0
  const MethodInfo *v36; // x3
  BattleSkillInfoData_o *v37; // x21
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0

  if ( (byte_42127E1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___, method);
    sub_B0D8A4(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_BattleSkillInfoData__bool__TypeInfo, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B0D8A4(&Method_BattleServantData___c__ResetServantSelfSkill_b__363_0__, v10);
    sub_B0D8A4(&BattleServantData___c_TypeInfo, v11);
    byte_42127E1 = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  v13 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v13 = BattleServantData___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__363_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__363_0;
  if ( !_9__363_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__363_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_BattleSkillInfoData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__363_0,
      v16,
      Method_BattleServantData___c__ResetServantSelfSkill_b__363_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v17 = BattleServantData___c_TypeInfo->static_fields;
    v17->__9__363_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__363_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v17->__9__363_0,
      (System_Int32_array **)_9__363_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__363_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  if ( !v24 )
    sub_B0D97C(0LL);
  klass = v24->klass;
  v26 = v24;
  if ( *(_WORD *)&v24->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      ++v27;
      p_offset += 4;
      if ( v27 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AA67A0(v24, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v26,
          *(_QWORD *)(p_method + 8));
  if ( !v30 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v38 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_33;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_33:
      v41 = sub_AA67A0(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v30, *(_QWORD *)(v41 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_24;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_24:
      v34 = sub_AA67A0(v30, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v35 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_B0D97C(0LL);
    v35->fields.sealedTurn = 0;
    if ( !BattleServantData__ChangeSkillRemainingTurn(this, v35, v35, v36) )
      v37->fields.chargeTurn = 0;
  }
  v42 = *(_QWORD *)v30;
  if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
  {
    v43 = 0LL;
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
        goto LABEL_40;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_40:
    v45 = sub_AA67A0(v30, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v45)(v30, *(_QWORD *)(v45 + 8));
}


void __fastcall BattleServantData__ResultDamage(
        BattleServantData_o *this,
        int32_t damage,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandOpponent,
        int32_t minHp,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  BattleServantSnapShotGroupBase_o *SnapShotDamagedOnLogicDead_k__BackingField; // x0

  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, BattleServantData_o *, BattleCommandData_o *, int32_t, const MethodInfo *))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr,
         opponent,
         commandOpponent,
         minHp,
         method) >= 1 )
  {
    SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupBase_o *)this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
    if ( !SnapShotDamagedOnLogicDead_k__BackingField )
      goto LABEL_7;
    BattleServantSnapShotGroupBase__Clear(SnapShotDamagedOnLogicDead_k__BackingField, 0LL);
  }
  BattleServantData__resultDamage(this, damage, minHp, v11);
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) > 0 )
    return;
  SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupBase_o *)this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
  if ( !SnapShotDamagedOnLogicDead_k__BackingField )
LABEL_7:
    sub_B0D97C(SnapShotDamagedOnLogicDead_k__BackingField);
  BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
    (BattleServantSnapShotGroupDefault_o *)SnapShotDamagedOnLogicDead_k__BackingField,
    this,
    opponent,
    commandOpponent,
    0LL);
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
  struct System_Collections_Generic_List_Dictionary_string__object___o *SelectedNobleSeqId; // x0
  int32_t v15; // w22
  PlayerServantNoblePhantasmUsageData_o *playerServantNoblePhantasmUsageData; // x21
  __int64 v17; // x23
  __int64 v18; // x24
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v22; // x21
  const MethodInfo *v23; // x1
  System_Xml_Schema_XmlSchemaObject_o *v24; // x0
  __int64 v25; // x22
  __int64 v26; // x23
  System_Int32_c *v27; // x0
  System_Xml_Schema_XmlSchemaObject_o *v28; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  System_String_o *v31; // x20
  int32_t Int; // w0
  int v33; // w8
  System_Xml_Schema_XmlSchemaObject_o *v34; // x0
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF
  int64_t UserSvtId; // [xsp+10h] [xbp-50h] BYREF
  int32_t SelectedNobleGroupSeqId; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_4212878 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__Add__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&long_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_22544/*"svtId"*/, v11);
    sub_B0D8A4(&StringLiteral_23143/*"userSvtId"*/, v12);
    sub_B0D8A4(&StringLiteral_22041/*"seqId"*/, v13);
    byte_4212878 = 1;
  }
  SelectedNobleGroupSeqId = 0;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)BattleServantData__GetSelectedNobleSeqId(
                                                                                                 this,
                                                                                                 (const MethodInfo *)data);
  if ( !data )
    goto LABEL_25;
  v15 = (int)SelectedNobleSeqId;
  playerServantNoblePhantasmUsageData = data->fields.playerServantNoblePhantasmUsageData;
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v38.fields.currentCryptoKey = v18;
  *(_QWORD *)&v38.fields.fakeValue = v17;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                                 v38,
                                                                                                 0LL);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_25;
  PlayerServantNoblePhantasmUsageData__AddNoblePhantasmUsage(
    playerServantNoblePhantasmUsageData,
    (int32_t)SelectedNobleSeqId,
    v15,
    this->fields.followerType,
    this->fields.isEnemy,
    0LL);
  if ( !BattleServantData__CheckFirstNpPlay(this, data, v19) )
    return;
  v22 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        v20,
                                                                                        v21);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v22,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  LODWORD(UserSvtId) = v15;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)j_il2cpp_value_box_0(
                                                                                                 int_TypeInfo,
                                                                                                 &UserSvtId);
  if ( !v22 )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v22,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22041/*"seqId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)SelectedNobleSeqId,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( this->fields.isEnemy || this->fields.followerType )
  {
    UserSvtId = 0LL;
    v24 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v22,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23143/*"userSvtId"*/,
      v24,
      (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v39.fields.currentCryptoKey = v26;
    *(_QWORD *)&v39.fields.fakeValue = v25;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v39, 0LL);
    v27 = int_TypeInfo;
  }
  else
  {
    UserSvtId = BattleServantData__getUserSvtId(this, v23);
    v34 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v22,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23143/*"userSvtId"*/,
      v34,
      (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v27 = int_TypeInfo;
    v35 = 0;
  }
  v28 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(v27, &v35);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v22,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22544/*"svtId"*/,
    v28,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  SelectedNobleSeqId = data->fields.firstNpPlayList;
  if ( !SelectedNobleSeqId )
LABEL_25:
    sub_B0D97C(SelectedNobleSeqId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SelectedNobleSeqId,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
  if ( BattleServantData__CheckSelectedNobleSeqIsGroup(this, v29) )
  {
    SelectedNobleGroupSeqId = BattleServantData__GetSelectedNobleGroupSeqId(this, v30);
    v31 = System_Int32__ToString((int32_t)&SelectedNobleGroupSeqId, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v31, 0, 0LL);
    if ( this->fields.isEnemy || this->fields.followerType )
      v33 = 2;
    else
      v33 = 1;
    UnityEngine_PlayerPrefs__SetInt(v31, v33 | Int, 0LL);
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
  __int64 v16; // x0
  const MethodInfo *v17; // x2

  z = offSet.fields.z;
  y = offSet.fields.y;
  x = offSet.fields.x;
  if ( (byte_42127B2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantData_Adjustment_TypeInfo, isCritical);
    byte_42127B2 = 1;
  }
  v15 = sub_B0D974(BattleServantData_Adjustment_TypeInfo, isCritical, isWeak);
  BattleServantData_Adjustment___ctor((BattleServantData_Adjustment_o *)v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  *(float *)(v15 + 20) = x;
  *(float *)(v15 + 24) = y;
  *(_BYTE *)(v15 + 16) = isCritical;
  *(_BYTE *)(v15 + 17) = isWeak;
  *(_BYTE *)(v15 + 18) = isRegist;
  *(_BYTE *)(v15 + 19) = isNoDamage;
  *(float *)(v15 + 28) = z;
  BattleServantData__SetAdjustment_20732528(this, (BattleServantData_Adjustment_o *)v15, v17);
}


void __fastcall BattleServantData__SetAdjustment_20732528(
        BattleServantData_o *this,
        BattleServantData_Adjustment_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0
  BattleServantConfConponent_o *p_adjustmentList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42127B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v6);
    byte_42127B3 = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (BattleServantConfConponent_o *)&this->fields.adjustmentList;
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo,
                                                                                                   data,
                                                                                                   method);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (BattleServantConfConponent_c *)v9;
    sub_B0D840(p_adjustmentList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      sub_B0D97C(0LL);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)adjustmentList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__SetCommandAssistSkill(
        BattleServantData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t *Master_WarQuestSelectionMaster; // x0
  struct System_Int32_array *commandAssistIds; // x8
  EventCommandAssistMaster_o *v8; // x21
  unsigned __int64 v9; // x22
  unsigned __int64 max_length; // x9
  __int64 v11; // x0
  const MethodInfo *v12; // [xsp+0h] [xbp-30h]

  if ( (byte_42127BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    byte_42127BF = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int32_t *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  commandAssistIds = this->fields.commandAssistIds;
  if ( !commandAssistIds )
LABEL_14:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  v8 = (EventCommandAssistMaster_o *)Master_WarQuestSelectionMaster;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = commandAssistIds->max_length;
    if ( (__int64)v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
    {
      v11 = sub_B0D9A8(Master_WarQuestSelectionMaster);
      sub_B0D948(v11, 0LL);
    }
    if ( v8 )
    {
      Master_WarQuestSelectionMaster = (int32_t *)EventCommandAssistMaster__GetCurrentEntity(
                                                    v8,
                                                    eventId,
                                                    commandAssistIds->m_Items[v9 + 1],
                                                    -1,
                                                    0,
                                                    0LL);
      if ( Master_WarQuestSelectionMaster )
        Master_WarQuestSelectionMaster = (int32_t *)BattleServantData__addSkillInfo(
                                                      this,
                                                      23,
                                                      v9,
                                                      Master_WarQuestSelectionMaster[13],
                                                      Master_WarQuestSelectionMaster[14],
                                                      -1LL,
                                                      Master_WarQuestSelectionMaster[4],
                                                      0LL,
                                                      v12);
      commandAssistIds = this->fields.commandAssistIds;
      ++v9;
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
  BattleServantData_o *v4; // x19
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  ServantLimitAddMaster_o *v22; // x21
  int32_t v23; // w22
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t battleCharaLimitCount; // w2
  int32_t svtId; // w1
  __int64 v40; // x21
  __int64 v41; // x22
  System_Int32_array **v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtdata; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x8
  BattleServantData_o *v51; // x20
  int32_t v52; // w21
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+28h] [xbp-58h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v4 = this;
  if ( (byte_42127D0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, fakeInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_20284/*"limitCount"*/, v12);
    sub_B0D8A4(&StringLiteral_22544/*"svtId"*/, v13);
    sub_B0D8A4(&StringLiteral_19836/*"index"*/, v14);
    sub_B0D8A4(&StringLiteral_23143/*"userSvtId"*/, v15);
    this = (BattleServantData_o *)sub_B0D8A4(&StringLiteral_22980/*"uniqueId"*/, v16);
    byte_42127D0 = 1;
  }
  entity = 0LL;
  if ( !fakeInfo )
    goto LABEL_29;
  v4->fields.index = System_Collections_Generic_Dictionary_string__int___get_Item(
                       fakeInfo,
                       (System_String_o *)StringLiteral_19836/*"index"*/,
                       (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v4->fields.uniqueId = System_Collections_Generic_Dictionary_string__int___get_Item(
                          fakeInfo,
                          (System_String_o *)StringLiteral_22980/*"uniqueId"*/,
                          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  Item = System_Collections_Generic_Dictionary_string__int___get_Item(
           fakeInfo,
           (System_String_o *)StringLiteral_23143/*"userSvtId"*/,
           (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v60, Item, 0LL);
  v18 = *(_OWORD *)&v60.fields.fakeValue;
  *(_OWORD *)&v4->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)&v60.fields.currentCryptoKey;
  *(_OWORD *)&v4->fields.userSvtId.fields.fakeValue = v18;
  v19 = System_Collections_Generic_Dictionary_string__int___get_Item(
          fakeInfo,
          (System_String_o *)StringLiteral_22544/*"svtId"*/,
          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v4->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v19, 0LL);
  v20 = System_Collections_Generic_Dictionary_string__int___get_Item(
          fakeInfo,
          (System_String_o *)StringLiteral_20284/*"limitCount"*/,
          (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v4->fields.limitcount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v20, 0LL);
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_29;
  v22 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v4->fields.svtId, 0LL);
  this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                  v4->fields.limitcount,
                                  0LL);
  if ( !v22 )
    goto LABEL_29;
  this = (BattleServantData_o *)ServantLimitAddMaster__TryGetEntity(v22, &entity, v23, (int32_t)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v41 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
    v40 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v62.fields.currentCryptoKey = v41;
    *(_QWORD *)&v62.fields.fakeValue = v40;
    this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v62, 0LL);
    if ( MasterData_WarQuestSelectionMaster )
    {
      v42 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     (int32_t)this,
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v4->fields.svtdata = (struct ServantEntity_o *)v42;
      p_svtdata = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v4->fields.svtdata;
      sub_B0D840((BattleServantConfConponent_o *)&v4->fields.svtdata, v42, v44, v45, v46, v47, v48, v49);
      this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        v50 = *p_svtdata;
        if ( *p_svtdata )
        {
          v51 = this;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v50[1], 0LL);
          this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                          v4->fields.limitcount,
                                          0LL);
          if ( v51 )
          {
            battleCharaLimitCount = (int)this;
            this = v51;
            svtId = v52;
            goto LABEL_28;
          }
        }
      }
    }
LABEL_29:
    sub_B0D97C(this);
  }
  if ( !entity )
    goto LABEL_29;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  v24 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 entity->fields.svtId,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v4->fields.svtdata = (struct ServantEntity_o *)v24;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.svtdata, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)entity;
  v4->fields.svtlimitaddent = entity;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.svtlimitaddent, v31, v32, v33, v34, v35, v36, v37);
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_29;
  this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !entity || !this )
    goto LABEL_29;
  battleCharaLimitCount = entity->fields.battleCharaLimitCount;
  svtId = entity->fields.svtId;
LABEL_28:
  v53 = (System_Int32_array **)ServantLimitMaster__GetEntity(
                                 (ServantLimitMaster_o *)this,
                                 svtId,
                                 battleCharaLimitCount,
                                 0LL);
  v4->fields.svtlimitDispent = (struct ServantLimitEntity_o *)v53;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.svtlimitDispent, v53, v54, v55, v56, v57, v58, v59);
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


void __fastcall BattleServantData__SetPartAnimationSaveData(
        BattleServantData_o *this,
        System_String_o *key,
        BattlePlayAnimationComponent_SaveData_array *saveDataArray,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x0
  BattleServantConfConponent_o *p_partAnimationSaveDict; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_421287F & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData_____ctor__,
      key);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____set_Item__,
      v7);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TypeInfo, v8);
    byte_421287F = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)saveDataArray, 0LL) )
  {
    partAnimationSaveDict = this->fields.partAnimationSaveDict;
    if ( !partAnimationSaveDict )
    {
      p_partAnimationSaveDict = (BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict;
      v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                            System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TypeInfo,
                                                                                            v9,
                                                                                            v10);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v13,
        (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData_____ctor__);
      p_partAnimationSaveDict->klass = (BattleServantConfConponent_c *)v13;
      sub_B0D840(p_partAnimationSaveDict, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
      partAnimationSaveDict = (struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *)p_partAnimationSaveDict->klass;
      if ( !p_partAnimationSaveDict->klass )
        sub_B0D97C(0LL);
    }
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)partAnimationSaveDict,
      (System_Xml_XmlQualifiedName_o *)key,
      (System_Xml_Schema_XmlSchemaObject_o *)saveDataArray,
      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____set_Item__);
  }
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
    sub_B0D97C(0LL);
  this->fields.selectedTDCardId = SvtTDvc->fields.cardId;
  this->fields.selectedTDId = BattleServantData__getTreasureDvcId(this, 1, v4);
}


void __fastcall BattleServantData__SetServantCommandCard(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Hashtable_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  DataManager_o *Instance; // x0
  ServantCardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v19; // x22
  unsigned __int64 v20; // x27
  __int64 v21; // x23
  __int64 v22; // x24
  struct System_Collections_Hashtable_o *commandtable; // x23
  __int64 v24; // x0
  __int64 v25; // x25
  __int64 v26; // x26
  __int64 v27; // x24
  __int64 v28; // x0
  int32_t cardId; // [xsp+14h] [xbp-5Ch] BYREF
  ServantCardEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v31; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4212806 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCardMaster___, method);
    sub_B0D8A4(&System_Collections_Hashtable_TypeInfo, v4);
    sub_B0D8A4(&int___TypeInfo, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A,
      v9);
    byte_4212806 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Hashtable_o *)sub_B0D974(System_Collections_Hashtable_TypeInfo, method, v2);
  System_Collections_Hashtable___ctor_38437272(v10, 0LL);
  this->fields.commandtable = v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandtable,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ServantCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v19 = sub_B0D8BC(int___TypeInfo, 6LL);
  v31.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004((System_Array_o *)v19, v31, 0LL);
  if ( !v19 )
    goto LABEL_22;
  if ( *(int *)(v19 + 24) >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v32.fields.currentCryptoKey = v22;
      *(_QWORD *)&v32.fields.fakeValue = v21;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v32, 0LL);
      if ( v20 >= *(unsigned int *)(v19 + 24) )
      {
        v28 = sub_B0D9A8(Instance);
        sub_B0D948(v28, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (DataManager_o *)ServantCardMaster__TryGetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    &entity,
                                    (int32_t)Instance,
                                    *(_DWORD *)(v19 + 32 + 4 * v20),
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        commandtable = this->fields.commandtable;
        cardId = entity->fields.cardId;
        v24 = j_il2cpp_value_box_0(int_TypeInfo, &cardId);
        v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v27 = v24;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v33.fields.currentCryptoKey = v26;
        *(_QWORD *)&v33.fields.fakeValue = v25;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v33, 0LL);
        if ( !entity )
          break;
        Instance = (DataManager_o *)ServantCardMaster__GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)Instance,
                                      entity->fields.cardId,
                                      0LL);
        if ( !commandtable )
          break;
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, DataManager_o *, Il2CppMethodPointer))commandtable->klass->vtable._30_set_Item.method)(
          commandtable,
          v27,
          Instance,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
      if ( (__int64)++v20 >= *(int *)(v19 + 24) )
        return;
    }
LABEL_22:
    sub_B0D97C(Instance);
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
      sub_B0D97C(0LL);
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
  __int64 v9; // x0
  int v10; // w21
  int32_t TotalDamage; // w20
  int32_t v12; // w1
  const MethodInfo *v13; // x3

  if ( (byte_421286E & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, data);
    byte_421286E = 1;
  }
  BattleServantData__setShiftServant(this, data, shiftValue, *(const MethodInfo **)&shiftValue);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  if ( !defHp )
    sub_B0D97C(v9);
  v10 = v9;
  TotalDamage = SimpleHpData__get_TotalDamage((SimpleHpData_o *)defHp, 0LL);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = System_Math__Max_44559528(1, v10 - TotalDamage, 0LL);
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
  BattleServantData_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  __int64 v24; // x25
  __int64 v25; // x25
  SkillEntity_o *v26; // x0
  __int64 v27; // x25
  __int64 v28; // x25
  int32_t v29; // w8
  __int64 v30; // x22
  __int64 v31; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v33; // x22
  __int64 v34; // x23
  ServantSkillMaster_o *v35; // x21
  int32_t v36; // w22
  ServantSkillEntity_o *EntityFromSkillId; // x0
  ServantSkillEntity_o *v38; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v16 = this;
  if ( (byte_42127CD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantSkillMaster___, skillInfo);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v18);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    this = (BattleServantData_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21);
    byte_42127CD = 1;
  }
  entity = 0LL;
  if ( !skillInfo )
    goto LABEL_33;
  skillInfo->fields.type = type;
  uniqueId = v16->fields.uniqueId;
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
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v25 = **(_QWORD **)(v24 + 192);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AA65A4(v25);
  this = **(BattleServantData_o ***)(v25 + 184);
  if ( !this )
    goto LABEL_33;
  this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  entity = 0LL;
  if ( !this )
    goto LABEL_33;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    skillId,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  v26 = (SkillEntity_o *)entity;
  if ( entity )
  {
    skillInfo->fields.isUseSkill = 1;
    skillInfo->fields.isPassive = SkillEntity__isPassive(v26, 0LL);
    v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v28 = **(_QWORD **)(v27 + 192);
    if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
      sub_AA65A4(v28);
    this = **(BattleServantData_o ***)(v28 + 184);
    if ( !this )
      goto LABEL_33;
    this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !this )
      goto LABEL_33;
    this = (BattleServantData_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, skillId, skillLv, 0LL);
    if ( !this )
      goto LABEL_33;
    v29 = *(&this->fields.uniqueId + 1);
    skillInfo->fields.sealedTurn = 0;
    skillInfo->fields.chargeTurn = 0;
    skillInfo->fields.priority = v29;
  }
  else
  {
    skillInfo->fields.isUseSkill = 0;
  }
  if ( type != 11 )
    return skillInfo;
  v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v31 = **(_QWORD **)(v30 + 192);
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    sub_AA65A4(v31);
  this = **(BattleServantData_o ***)(v31 + 184);
  if ( !this )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v34 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  v35 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v41.fields.currentCryptoKey = v34;
  *(_QWORD *)&v41.fields.fakeValue = v33;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v41, 0LL);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v35 )
LABEL_33:
    sub_B0D97C(this);
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v35, v36, index + 1, (int32_t)this, 0LL);
  if ( EntityFromSkillId )
  {
    v38 = EntityFromSkillId;
    skillInfo->fields.strengthStatus = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
    skillInfo->fields.skillRecord = v38->fields.skillNum;
  }
  return skillInfo;
}


void __fastcall BattleServantData__SetSummonNpc(
        BattleServantData_o *this,
        BattleDeckServantData_o *inDeckSvt,
        const MethodInfo *method)
{
  if ( !inDeckSvt )
    sub_B0D97C(this);
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
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v8; // x21
  const MethodInfo *v9; // x1
  System_RuntimeFieldHandle_o v10; // 0:w1.4

  if ( (byte_42127BA & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, takeoverData);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__DFFD09C996EDD2714178B1E2F5A21D0196F6DAE68A6E220DFDDFAD22DA6B6F1D,
      v5);
    byte_42127BA = 1;
  }
  if ( takeoverData )
  {
    this->fields.maxDefeatPoint = takeoverData->fields.maxDefeatPoint;
    this->fields.defeatPoint = takeoverData->fields.defeatPoint;
    if ( takeoverData->fields.buffDataSave )
    {
      v6 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 3LL);
      v10.fields.value = Field__PrivateImplementationDetails__DFFD09C996EDD2714178B1E2F5A21D0196F6DAE68A6E220DFDDFAD22DA6B6F1D;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v6, v10, 0LL);
      buffData = this->fields.buffData;
      if ( !buffData )
        goto LABEL_14;
      buffData = (BattleBuffData_o *)BattleBuffData__GetSkillTypePassiveBuff(buffData, (System_Int32_array *)v6, 0LL);
      if ( !this->fields.buffData )
        goto LABEL_14;
      v8 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)buffData;
      BattleBuffData__Initialize(this->fields.buffData, 0LL);
      buffData = this->fields.buffData;
      if ( !buffData
        || (BattleBuffData__clearAuraBuff(buffData, 0LL), (buffData = this->fields.buffData) == 0LL)
        || (BattleBuffData__setSaveData(buffData, takeoverData->fields.buffDataSave, 0LL),
            (buffData = this->fields.buffData) == 0LL)
        || (BattleBuffData__AddGetSkillTypeBuff(buffData, v8, 0LL),
            (buffData = BattleServantData__get_BuffData(this, v9)) == 0LL) )
      {
LABEL_14:
        sub_B0D97C(buffData);
      }
      BattleBuffData__UpdateBaseAddOrder(buffData, 0LL);
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
  BattleBuffData_o *v12; // x21
  BalanceConfig_c *v13; // x0
  BattleBuffData_BuffData_array *ActiveList; // x0
  const MethodInfo *v15; // x2
  int32_t tmpAppearanceId; // w8
  const MethodInfo *v17; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v19; // x21
  int32_t i; // w22
  BattleSkillInfoData_o *SelfSkillInfo; // x0
  __int64 currentHp; // x1
  int32_t currentNp; // w8
  int32_t nextNpTurn; // w8
  __int64 v25; // x0

  if ( (byte_42127BB & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, takeoverData);
    sub_B0D8A4(&Method_BasicHelper_IndexValue_int____67955848, v7);
    sub_B0D8A4(&BattleBuffData_TypeInfo, v8);
    sub_B0D8A4(&int___TypeInfo, v9);
    byte_42127BB = 1;
  }
  if ( takeoverData )
  {
    this->fields.transformIndex = takeoverData->fields.transformIndex;
    this->fields.transformLimitCount = takeoverData->fields.transformLimitCount;
    BattleServantData__loadTransformServant(this, data, (const MethodInfo *)data);
    if ( takeoverData->fields.buffDataSave )
    {
      v12 = (BattleBuffData_o *)sub_B0D974(BattleBuffData_TypeInfo, v10, v11);
      BattleBuffData___ctor(v12, 0LL);
      if ( !v12 )
        goto LABEL_22;
      BattleBuffData__setSaveData(v12, takeoverData->fields.buffDataSave, 0LL);
      this->fields.tmpAppearanceId = -1;
      ActiveList = BattleBuffData__getActiveList(v12, 1, 0LL);
      if ( BattleServantData__isChangeAppearanceBuff(this, ActiveList, v15) )
      {
        tmpAppearanceId = this->fields.tmpAppearanceId;
        this->fields.tmpAppearanceId = -1;
        this->fields.appearanceId = tmpAppearanceId;
      }
    }
    v13 = (BalanceConfig_c *)sub_B0D8BC(int___TypeInfo, 3LL);
    if ( !v13 )
LABEL_22:
      sub_B0D97C(v13);
    namespaze = (unsigned int)v13->_1.namespaze;
    v19 = (System_Int32_array *)v13;
    if ( !namespaze
      || (LODWORD(v13->_1.byval_arg.data) = takeoverData->fields.skill1Ct, namespaze == 1)
      || (HIDWORD(v13->_1.byval_arg.data) = takeoverData->fields.skill2Ct, namespaze <= 2) )
    {
      v25 = sub_B0D9A8(v13);
      sub_B0D948(v25, 0LL);
    }
    v13->_1.byval_arg.bits = takeoverData->fields.skill3Ct;
    for ( i = 0; ; ++i )
    {
      v13 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      if ( i >= v13->static_fields->SvtSkillListMax )
        break;
      SelfSkillInfo = BattleServantData__getSelfSkillInfo(this, i, v17);
      if ( SelfSkillInfo )
        SelfSkillInfo->fields.chargeTurn = BasicHelper__IndexValue_int_(
                                             v19,
                                             i,
                                             0,
                                             (const MethodInfo_17093A8 *)Method_BasicHelper_IndexValue_int____67955848);
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


bool __fastcall BattleServantData__TryGetPartAnimationSaveData(
        BattleServantData_o *this,
        System_String_o *key,
        BattlePlayAnimationComponent_SaveData_array **saveDataArray,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x0

  if ( (byte_4212880 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TryGetValue__,
      key);
    byte_4212880 = 1;
  }
  *saveDataArray = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)saveDataArray,
    0LL,
    (System_String_array **)saveDataArray,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  partAnimationSaveDict = this->fields.partAnimationSaveDict;
  if ( partAnimationSaveDict )
    LOBYTE(partAnimationSaveDict) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)partAnimationSaveDict,
                                      (System_Xml_XmlQualifiedName_o *)key,
                                      (System_Xml_Schema_XmlSchemaObject_o **)saveDataArray,
                                      (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TryGetValue__);
  return (char)partAnimationSaveDict;
}


bool __fastcall BattleServantData__TryGetPlayableVoiceInfoList(
        BattleServantData_o *this,
        System_Collections_Generic_List_KeyValuePair_string__int___o **voiceInfoList,
        Voice_BATTLE_array *types,
        const MethodInfo *method)
{
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
  __int64 v18; // x2
  System_Collections_Generic_List_KeyValuePair_string__int___o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  DataManager_o *Instance; // x0
  ServantVoicePatternMaster_o *v27; // x23
  const MethodInfo *v28; // x4
  __int64 v29; // x8
  int32_t v30; // w24
  unsigned __int64 v31; // x19
  int32_t v32; // w25
  bool IsNpc; // w0
  Il2CppObject *FileName; // x26
  ServantAssetLoadManager_o *v35; // x27
  const MethodInfo *v36; // x1
  int32_t SvtId; // w28
  const MethodInfo *v38; // x2
  Il2CppObject *v39; // x0
  System_String_o *v40; // x26
  const MethodInfo *v41; // x1
  int32_t v42; // w27
  const MethodInfo *v43; // x2
  __int64 v45; // x0
  VoicePlayCondMaster_o *condMst; // [xsp+10h] [xbp-70h]
  int32_t VoicePrefix; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o pairVoiceIdWeight; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4212882 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantVoicePatternMaster___, voiceInfoList);
    sub_B0D8A4(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_string__int___Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_string__int____ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_KeyValuePair_string__int___TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Voice_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_23577/*"{0:D0}_{1}"*/, v16);
    byte_4212882 = 1;
  }
  pairVoiceIdWeight.fields.key = 0LL;
  *(_QWORD *)&pairVoiceIdWeight.fields.value = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  condMst = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v19 = (System_Collections_Generic_List_KeyValuePair_string__int___o *)sub_B0D974(
                                                                          System_Collections_Generic_List_KeyValuePair_string__int___TypeInfo,
                                                                          v17,
                                                                          v18);
  System_Collections_Generic_List_KeyValuePair_string__int_____ctor(
    v19,
    (const MethodInfo_2D2E04C *)Method_System_Collections_Generic_List_KeyValuePair_string__int____ctor__);
  *voiceInfoList = v19;
  sub_B0D840((BattleServantConfConponent_o *)voiceInfoList, (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantVoicePatternMaster___);
  if ( !this->fields.deckSvt )
    goto LABEL_29;
  v27 = (ServantVoicePatternMaster_o *)Instance;
  Instance = (DataManager_o *)BattleDeckServantData__GetVoicePatternId(this->fields.deckSvt, 0LL);
  if ( !types )
    goto LABEL_29;
  v29 = *(_QWORD *)&types->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = (int)Instance;
    v31 = 0LL;
    do
    {
      if ( v31 >= (unsigned int)v29 )
      {
        v45 = sub_B0D9A8(Instance);
        sub_B0D948(v45, 0LL);
      }
      v32 = types->m_Items[v31 + 1];
      if ( this->fields.isEnemy )
      {
        if ( v30 == -1 )
          goto LABEL_23;
      }
      else
      {
        IsNpc = Follower__IsNpc(this->fields.followerType, 0LL);
        if ( v30 == -1 || !IsNpc )
          goto LABEL_23;
      }
      if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
      FileName = (Il2CppObject *)Voice__getFileName(v32, 0LL);
      v35 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      SvtId = BattleServantData__getSvtId(this, v36);
      Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v38);
      if ( !v35 )
        goto LABEL_29;
      VoicePrefix = ServantAssetLoadManager__getVoicePrefix(v35, SvtId, (int32_t)Instance, 0LL);
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix);
      v40 = System_String__Format_43845440((System_String_o *)StringLiteral_23577/*"{0:D0}_{1}"*/, v39, FileName, 0LL);
      v42 = BattleServantData__getSvtId(this, v41);
      Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v43);
      if ( !v27 )
        goto LABEL_29;
      Instance = (DataManager_o *)ServantVoicePatternMaster__IsSatisfyPlayCondition(
                                    v27,
                                    v30,
                                    v42,
                                    v40,
                                    (int32_t)Instance,
                                    -1,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_23:
        Instance = (DataManager_o *)BattleServantData__IsPlayableVoice(this, condMst, v32, &pairVoiceIdWeight, v28);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)*voiceInfoList;
          if ( !*voiceInfoList )
            goto LABEL_29;
          System_Collections_Generic_List_KeyValuePair_string__int____Add(
            (System_Collections_Generic_List_KeyValuePair_string__int___o *)Instance,
            pairVoiceIdWeight,
            (const MethodInfo_2D2EDDC *)Method_System_Collections_Generic_List_KeyValuePair_string__int___Add__);
        }
      }
      LODWORD(v29) = types->max_length;
    }
    while ( (__int64)++v31 < (int)v29 );
  }
  if ( !*voiceInfoList )
LABEL_29:
    sub_B0D97C(Instance);
  return (*voiceInfoList)->fields._size > 0;
}


void __fastcall BattleServantData__UpdateAfterShowBuff(
        BattleServantData_o *this,
        BattleActionData_BuffData_o *actBuff,
        const MethodInfo *method)
{
  BattleServantData_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( !actBuff )
    goto LABEL_6;
  v3 = this;
  if ( BattleActionData_BuffData__IsUpdateBuffType(actBuff, 1, 0LL) )
  {
    this = (BattleServantData_o *)BattleServantData__get_BuffData(v3, v4);
    if ( this )
    {
      BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
      return;
    }
LABEL_6:
    sub_B0D97C(this);
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
  BattleServantData_o *v11; // x26
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
  System_Int32_array **classBoardSquareIds; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **classBoardAddCommandSpells; // x1
  BattleServantConfConponent_o *v38; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  const MethodInfo *v40; // x1
  int32_t npcSvtClassId; // w19
  int32_t classId; // w20
  struct ServantEntity_o *svtdata; // x8
  int32_t klass_high; // w25
  _BOOL8 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  BattleServantConfConponent_c *klass; // x28
  unsigned __int64 v50; // x22
  __int64 v51; // x24
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *skillInfoList; // x25
  BattleServantData_o *v60; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v63; // x26
  System_Collections_ICollection_o *v64; // x24
  const MethodInfo *v65; // x1
  int v66; // w19
  const MethodInfo *v67; // x3
  System_Int32_array **classBoardAddPassiveSkills; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x0
  struct AddSkillData_array **p_classBoardAddCommandSpells; // [xsp+10h] [xbp-B0h]
  BattleServantConfConponent_o *p_classBoardAddPassiveSkills; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+28h] [xbp-98h] BYREF
  int v79[2]; // [xsp+40h] [xbp-80h]
  int v80; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+50h] [xbp-70h] BYREF
  int32_t skillIndex; // [xsp+6Ch] [xbp-54h] BYREF

  v11 = this;
  if ( (byte_421287D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, afterUserSvtData);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__, v18);
    sub_B0D8A4(&Method_System_Predicate_BattleSkillInfoData___ctor__, v19);
    sub_B0D8A4(&System_Predicate_BattleSkillInfoData__TypeInfo, v20);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass721_0__UpdateClassBoardSkillBuff_b__0__, v21);
    this = (BattleServantData_o *)sub_B0D8A4(&BattleServantData___c__DisplayClass721_0_TypeInfo, v22);
    byte_421287D = 1;
  }
  skillIndex = 0;
  memset(&v81, 0, sizeof(v81));
  v80 = 0;
  if ( !afterUserSvtData )
    goto LABEL_46;
  classBoardSquareIds = (System_Int32_array **)afterUserSvtData->fields.classBoardSquareIds;
  v11->fields._classBoardSquareIds_k__BackingField = (struct System_Int32_array *)classBoardSquareIds;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v11->fields._classBoardSquareIds_k__BackingField,
    classBoardSquareIds,
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
    this = (BattleServantData_o *)BattleUserServantData__getBattleSvtId(afterUserSvtData, 0LL);
    if ( Master_WarQuestSelectionMaster )
    {
      this = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      Master_WarQuestSelectionMaster,
                                      (int32_t)this,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      npcSvtClassId = afterUserSvtData->fields.npcSvtClassId;
      if ( !npcSvtClassId )
      {
        if ( !this )
          goto LABEL_46;
        npcSvtClassId = this->fields.exceedCount.fields.currentCryptoKey;
      }
      classId = v11->fields.npcSvtClassId;
      if ( !classId )
      {
        svtdata = v11->fields.svtdata;
        if ( !svtdata )
          goto LABEL_46;
        classId = svtdata->fields.classId;
      }
      this = (BattleServantData_o *)BattleServantData__get_BuffData(v11, v40);
      if ( data )
      {
        if ( this )
        {
          BattleBuffData__RemoveClassBoardSkillBuff(
            (BattleBuffData_o *)this,
            v11->fields.classBoardAddPassiveSkills,
            v11->fields.classBoardAddCommandSpells,
            classId != npcSvtClassId,
            data->fields.logic,
            0LL);
          skillIndex = -1;
          this = (BattleServantData_o *)v11->fields.skillInfoList;
          if ( this )
          {
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              &v78,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
            klass_high = -1;
            v81 = v78;
            p_classBoardAddCommandSpells = &v11->fields.classBoardAddCommandSpells;
            while ( 1 )
            {
              v45 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v81,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
              if ( !v45 )
                break;
              if ( !v81.fields.current )
              {
                skillIndex = klass_high;
                sub_B0D97C(v45);
              }
              if ( LODWORD(v81.fields.current[1].klass) == 10 && klass_high < SHIDWORD(v81.fields.current[1].klass) )
                klass_high = HIDWORD(v81.fields.current[1].klass);
            }
            skillIndex = klass_high;
            v79[0] = 203;
            v80 = 1;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v81,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
            v80 = 0;
            skillIndex = klass_high + 1;
            p_classBoardAddPassiveSkills = (BattleServantConfConponent_o *)&v11->fields.classBoardAddPassiveSkills;
            this = (BattleServantData_o *)BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)v11->fields.classBoardAddPassiveSkills,
                                            0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_33;
            klass = p_classBoardAddPassiveSkills->klass;
            if ( !p_classBoardAddPassiveSkills->klass )
              goto LABEL_46;
            if ( SLODWORD(klass->_1.namespaze) < 1 )
            {
LABEL_33:
              v64 = (System_Collections_ICollection_o *)BattleServantData__AddClassBoardSkillInfo(
                                                          v11,
                                                          afterUserSvtData,
                                                          &skillIndex,
                                                          v48);
              this = (BattleServantData_o *)BasicHelper__IsNullOrEmpty(v64, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !v64 )
                  goto LABEL_46;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  &v78,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v64,
                  (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
                v81 = v78;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v81,
                          (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
                {
                  if ( v81.fields.current )
                    BattleData__ActPassiveBuff(data, (BattleSkillInfoData_o *)v81.fields.current, 0, 0, 0LL);
                }
                v79[0] = 370;
                v66 = ++v80;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v81,
                  (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
                if ( v66 && v79[v66 - 1] == 370 )
                  v80 = v66 - 1;
              }
              this = (BattleServantData_o *)BattleServantData__get_BuffData(v11, v65);
              if ( this )
              {
                BattleBuffData__updateAuraBuffList((BattleBuffData_o *)this, 0LL);
                BattleServantData__updateBuff(v11, 1, 1, v67);
                classBoardAddPassiveSkills = (System_Int32_array **)afterUserSvtData->fields.classBoardAddPassiveSkills;
                v11->fields.classBoardAddPassiveSkills = (struct AddSkillData_array *)classBoardAddPassiveSkills;
                sub_B0D840(p_classBoardAddPassiveSkills, classBoardAddPassiveSkills, v69, v70, v71, v72, v73, v74);
                classBoardAddCommandSpells = (System_Int32_array **)afterUserSvtData->fields.classBoardAddCommandSpells;
                v38 = (BattleServantConfConponent_o *)p_classBoardAddCommandSpells;
                goto LABEL_44;
              }
            }
            else
            {
              v50 = 0LL;
              while ( 1 )
              {
                v51 = sub_B0D974(BattleServantData___c__DisplayClass721_0_TypeInfo, v46, v47);
                BattleServantData___c__DisplayClass721_0___ctor((BattleServantData___c__DisplayClass721_0_o *)v51, 0LL);
                if ( v50 >= LODWORD(klass->_1.namespaze) )
                {
                  v75 = sub_B0D9A8(this);
                  sub_B0D948(v75, 0LL);
                }
                if ( !v51 )
                  break;
                v58 = (System_Int32_array **)*((_QWORD *)&klass->_1.byval_arg.data + v50);
                *(_QWORD *)(v51 + 16) = v58;
                sub_B0D840((BattleServantConfConponent_o *)(v51 + 16), v58, v52, v53, v54, v55, v56, v57);
                skillInfoList = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v11->fields.skillInfoList;
                v60 = v11;
                v63 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                                 System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                                 v61,
                                                                                 v62);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v63,
                  (Il2CppObject *)v51,
                  Method_BattleServantData___c__DisplayClass721_0__UpdateClassBoardSkillBuff_b__0__,
                  (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
                if ( !skillInfoList )
                  break;
                System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                  skillInfoList,
                  (System_Predicate_T__o *)v63,
                  (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
                ++v50;
                v11 = v60;
                if ( (__int64)v50 >= SLODWORD(klass->_1.namespaze) )
                  goto LABEL_33;
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_B0D97C(this);
  }
  v30 = (System_Int32_array **)afterUserSvtData->fields.classBoardAddPassiveSkills;
  v11->fields.classBoardAddPassiveSkills = (struct AddSkillData_array *)v30;
  sub_B0D840((BattleServantConfConponent_o *)&v11->fields.classBoardAddPassiveSkills, v30, v24, v25, v26, v27, v28, v29);
  classBoardAddCommandSpells = (System_Int32_array **)afterUserSvtData->fields.classBoardAddCommandSpells;
  v38 = (BattleServantConfConponent_o *)&v11->fields.classBoardAddCommandSpells;
LABEL_44:
  v11->fields.classBoardAddCommandSpells = (struct AddSkillData_array *)classBoardAddCommandSpells;
  sub_B0D840(v38, classBoardAddCommandSpells, v31, v32, v33, v34, v35, v36);
}


ServantAssetArgs_o *__fastcall BattleServantData__UpdateLoadedAssetArgs(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantAssetArgs_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42127B1 & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetArgs_TypeInfo, method);
    byte_42127B1 = 1;
  }
  v4 = (ServantAssetArgs_o *)sub_B0D974(ServantAssetArgs_TypeInfo, method, v2);
  ServantAssetArgs___ctor(v4, this, 0LL);
  this->fields._LoadedAssetArgs_k__BackingField = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._LoadedAssetArgs_k__BackingField,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  _BOOL8 v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212818 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_15113/*"UpdateStatusByTransform"*/, v7);
    byte_4212818 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B0D97C(v10);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_15113/*"UpdateStatusByTransform"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  void *TdDataMasterBase; // x0
  struct TreasureDvcEntity_o *Entity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  struct TreasureDvcLvEntity_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x20
  __int64 v29; // x21
  int32_t v30; // w0
  struct ServantTreasureDvcEntity_o *EntityFromIDID; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  int32_t v40; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_42127C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, *(_QWORD *)&id);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_42127C9 = 1;
  }
  this->fields.treasuredvcId = id;
  this->fields.treasuredvcLevel = lv;
  if ( id < 1 )
  {
    this->fields.TDvc = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.TDvc,
      0LL,
      *(System_String_array ***)&lv,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v40 = 0;
  }
  else
  {
    TdDataMasterBase = BattleServantData__get_TdDataMasterBase(this, *(const MethodInfo **)&id);
    if ( !TdDataMasterBase )
      goto LABEL_13;
    Entity = (struct TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)TdDataMasterBase,
                                             this->fields.treasuredvcId,
                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    this->fields.TDvc = Entity;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.TDvc,
      (System_Int32_array **)Entity,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    TdDataMasterBase = BattleServantData__get_TdLvDataMasterBase(this, v20);
    if ( !TdDataMasterBase )
      goto LABEL_13;
    v21 = TreasureDvcLvMaster__GetEntity(
            (TreasureDvcLvMaster_o *)TdDataMasterBase,
            this->fields.treasuredvcId,
            this->fields.treasuredvcLevel,
            0LL);
    this->fields._TDvcLv = v21;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._TDvcLv,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    v29 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v29;
    *(_QWORD *)&v41.fields.fakeValue = v28;
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v41, 0LL);
    EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(v30, this->fields.treasuredvcId, 0LL);
    this->fields._SvtTDvc = EntityFromIDID;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._SvtTDvc,
      (System_Int32_array **)EntityFromIDID,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    BattleServantData__checkServantTreasureDvcEntity(this, v38);
    TdDataMasterBase = BattleServantData__get_TDvcLv(this, v39);
    if ( !TdDataMasterBase )
LABEL_13:
      sub_B0D97C(TdDataMasterBase);
    v40 = *((_DWORD *)TdDataMasterBase + 6);
  }
  this->fields.nplineCount = v40;
}


void __fastcall BattleServantData__ValidateOnGetGuts(BattleServantData_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData__addBuff(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool fieldflg,
        bool changeMaxHpflg,
        bool unFix,
        const MethodInfo *method)
{
  __int64 MaxHp; // x0
  int32_t v12; // w21
  const MethodInfo *v13; // x3

  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)buff);
  if ( !this->fields.buffData )
    sub_B0D97C(MaxHp);
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
  _BOOL8 v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212814 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&damage);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_17327/*"changeHp"*/, v11);
    byte_4212814 = 1;
  }
  memset(&v18, 0, sizeof(v18));
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
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v17 )
    {
      if ( !current )
        sub_B0D97C(v17);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17327/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_421281F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&intp);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_23016/*"updateNp"*/, v11);
    byte_421281F = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v20 )
    {
      if ( !current )
        sub_B0D97C(v20);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_23016/*"updateNp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4212800 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    byte_4212800 = 1;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_7;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         paramobjelist,
         (WarBoardManager_TaskList_o *)obj,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    return;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
LABEL_7:
    sub_B0D97C(paramobjelist);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)paramobjelist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *skillInfoList; // x0
  _BOOL8 v22; // x0
  Il2CppObject *current; // x27
  int v24; // w27
  BattleSkillInfoData_o *v25; // x21
  _BOOL8 v26; // x0
  Il2CppObject *v27; // x27
  int v28; // w21
  BattleSkillInfoData_o *SkillData; // x0
  const MethodInfo *v30; // x3
  const MethodInfo *v32; // [xsp+0h] [xbp-C0h]
  int32_t v34; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-A0h] BYREF
  int v36[4]; // [xsp+38h] [xbp-88h] BYREF
  int v37; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_42127CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__, v20);
    byte_42127CA = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v37 = 0;
  skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_35;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    skillInfoList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v38 = v35;
  v34 = commandAssistId;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v22 )
      break;
    current = v38.fields.current;
    if ( !v38.fields.current )
      sub_B0D97C(v22);
    if ( LODWORD(v38.fields.current[1].klass) == type
      && HIDWORD(v38.fields.current[1].klass) == index
      && ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v38.fields.current->klass->vtable[5].method)(
           v38.fields.current,
           v38.fields.current->klass->vtable[6].methodPtr) == skillId
      && HIDWORD(current[2].klass) == skillLv )
    {
      v24 = 236;
      goto LABEL_13;
    }
  }
  v24 = 92;
LABEL_13:
  v36[0] = v24;
  v37 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  if ( v24 == 92 )
  {
    v37 = 0;
    skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
    if ( !skillInfoList )
      goto LABEL_35;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      skillInfoList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    v38 = v35;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
      if ( !v26 )
        break;
      v27 = v38.fields.current;
      if ( !v38.fields.current )
        sub_B0D97C(v26);
      if ( LODWORD(v38.fields.current[1].klass) == type && HIDWORD(v38.fields.current[1].klass) == index )
        goto LABEL_23;
    }
    v27 = 0LL;
LABEL_23:
    *(_DWORD *)((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFFBLL) = 167;
    v28 = ++v37;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    if ( v28 && v36[v28 - 1] == 167 )
      v37 = v28 - 1;
    if ( v27 )
    {
      skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
      if ( !skillInfoList )
        goto LABEL_35;
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)skillInfoList,
        (WarBoardManager_TaskList_o *)v27,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__);
    }
    SkillData = BattleSkillInfoData__MakeSkillData(type, 0LL);
    skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BattleServantData__SetSkillInfo(
                                                                                                     this,
                                                                                                     SkillData,
                                                                                                     type,
                                                                                                     index,
                                                                                                     skillId,
                                                                                                     skillLv,
                                                                                                     userCommandCodeId,
                                                                                                     v34,
                                                                                                     v32);
    if ( skillInfoList )
    {
      v25 = (BattleSkillInfoData_o *)skillInfoList;
      ((void (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, BattleServantData_o *, Il2CppMethodPointer))skillInfoList->klass->vtable._11_Add.method)(
        skillInfoList,
        this,
        skillInfoList->klass->vtable._12_unknown.methodPtr);
      BattleServantData__ChangeSkillRemainingTurn(this, v25, beforeDeathSkillInfo, v30);
      skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
      if ( skillInfoList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
        return v25;
      }
    }
LABEL_35:
    sub_B0D97C(skillInfoList);
  }
  v25 = 0LL;
  v37 = 0;
  return v25;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__canUseSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  System_Boolean_array *SkillSealSelect; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v9; // x21
  __int64 v12; // x0

  if ( (byte_4212851 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&index);
    byte_4212851 = 1;
  }
  if ( index != -1 )
  {
    SkillSealSelect = BattleServantData__getSkillSealSelect(this, *(const MethodInfo **)&index);
    if ( !SkillSealSelect )
      goto LABEL_12;
    if ( SkillSealSelect->max_length <= index )
    {
      v12 = sub_B0D9A8(SkillSealSelect);
      sub_B0D948(v12, 0LL);
    }
    if ( SkillSealSelect->m_Items[index + 4] )
      return 0;
  }
  if ( !BattleServantData__isAction(this, *(const MethodInfo **)&index) )
    return 0;
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(BattleBuffData_CheckIndividualitiesData_TypeInfo, v6, v7);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_12:
    sub_B0D97C(SkillSealSelect);
  return !BattleBuffData__isTurnBuff(buffData, 40, v9, 0, 0LL);
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
  DataManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  struct ServantEntity_o *Entity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ServantLimitMaster_o *v20; // x20
  const MethodInfo *v21; // x1
  int32_t SvtId; // w22
  struct ServantLimitEntity_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct ServantEntity_o *svtdata; // x8
  ServantLimitAddMaster_o *v31; // x21
  __int64 v32; // x22
  __int64 v33; // x23
  int32_t v34; // w23
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  int32_t v37; // w23
  const MethodInfo *v38; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x3
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v44; // w1
  ServantLimitMaster_o *v45; // x0
  struct ServantLimitEntity_o *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_42127C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42127C7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v11;
  *(_QWORD *)&v53.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v53, 0LL);
  if ( !v12 )
    goto LABEL_25;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v12,
                                       (int32_t)Instance,
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = Entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.svtdata,
    (System_Int32_array **)Entity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  v20 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v21);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                this->fields.limitcount,
                                0LL);
  if ( !v20 )
    goto LABEL_25;
  if ( !ServantLimitMaster__TryGetEntity(v20, &this->fields.svtlimitent, SvtId, (int32_t)Instance, 0LL) )
  {
    v23 = ServantLimitMaster__GetEntity(v20, 100100, 0, 0LL);
    this->fields.svtlimitent = v23;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.svtlimitent,
      (System_Int32_array **)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_25;
  v31 = (ServantLimitAddMaster_o *)Instance;
  v33 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v32 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v33;
  *(_QWORD *)&v54.fields.fakeValue = v32;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
  Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v35);
  if ( !v31 )
    goto LABEL_25;
  ServantLimitAddMaster__TryGetEntity(v31, &this->fields.svtlimitaddent, v34, (int32_t)Instance, 0LL);
  v37 = BattleServantData__getSvtId(this, v36);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v38);
  if ( !ServantLimitMaster__TryGetEntity(v20, &this->fields.svtlimitDispent, v37, DispLimitCount, 0LL) )
  {
    if ( !this->fields.svtlimitaddent )
    {
      v44 = 100100;
      v45 = v20;
      battleCharaLimitCount = 0;
      goto LABEL_23;
    }
    Instance = (DataManager_o *)BattleServantData__getSvtId(this, v40);
    svtlimitaddent = this->fields.svtlimitaddent;
    if ( svtlimitaddent )
    {
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v44 = (int)Instance;
      v45 = v20;
LABEL_23:
      v46 = ServantLimitMaster__GetEntity(v45, v44, battleCharaLimitCount, 0LL);
      this->fields.svtlimitDispent = v46;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.svtlimitDispent,
        (System_Int32_array **)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      goto LABEL_24;
    }
LABEL_25:
    sub_B0D97C(Instance);
  }
LABEL_24:
  BattleServantData__UpdateTreasureDevice(this, this->fields.treasuredvcId, this->fields.treasuredvcLevel, v41);
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
  _BOOL8 v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212820 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&intp);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_17332/*"changeNp"*/, v11);
    byte_4212820 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v12 = this->fields.lineMaxNp * this->fields.nplineCount;
  if ( v12 >= intp )
    v12 = intp;
  this->fields.np = v12 & ~(v12 >> 31);
  if ( flg )
  {
    paramobjelist = this->fields.paramobjelist;
    if ( !paramobjelist )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v16.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v15 )
      {
        if ( !current )
          sub_B0D97C(v15);
        UnityEngine_GameObject__SendMessage_40783576(
          (UnityEngine_GameObject_o *)current,
          (System_String_o *)StringLiteral_17332/*"changeNp"*/,
          (Il2CppObject *)this,
          1,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall BattleServantData__changeTransformServant(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t transformSvtId; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v4; // kr00_16

  if ( (byte_42127C6 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_42127C6 = 1;
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

  if ( (byte_4212817 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17335/*"changeUpdateStatus"*/, method);
    byte_4212817 = 1;
  }
  BattleServantData__sendParamMessage(this, (System_String_o *)StringLiteral_17335/*"changeUpdateStatus"*/, v2);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_421283E & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_421283E = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return BattleBuffData__checkActBuff_30823572(buffData, 47, v6, 0LL);
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
    sub_B0D97C(v7);
  return BattleBuffData__checkActBuff_30823572(buffData, 18, v7, 0LL);
}


bool __fastcall BattleServantData__checkBreakAvoidance(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212848 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212848 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__checkActBuff_30823572(buffData, 17, v8, 0LL);
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
  System_Int32_array *Individualities_20798680; // x0
  const MethodInfo *v12; // x2
  System_Int32_array *v13; // x21

  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, v4);
  Individualities_20798680 = BattleServantData__getIndividualities_20798680(this, BuffIndividualities, v10);
  v13 = Individualities_20798680;
  if ( !opSvt )
  {
    if ( buffData )
      return BattleBuffData__checkActBuff(buffData, 38, v13, buffIndiv, 0LL);
LABEL_6:
    sub_B0D97C(Individualities_20798680);
  }
  Individualities_20798680 = BattleServantData__getIndividualities_20798680(opSvt, buffIndiv, v12);
  if ( !buffData )
    goto LABEL_6;
  buffIndiv = Individualities_20798680;
  return BattleBuffData__checkActBuff(buffData, 38, v13, buffIndiv, 0LL);
}


bool __fastcall BattleServantData__checkBuffId(
        BattleServantData_o *this,
        System_Int32_array *buffIdlist,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  return BattleDeckServantData__checkEntryIndex(deckSvt, entryIndex, 0LL);
}


void __fastcall BattleServantData__checkFieldBuff(
        BattleServantData_o *this,
        System_Int32_array *fieldList,
        FieldAliveServantData_o *aliveSvtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 MaxHp; // x0
  int32_t v10; // w23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x21
  __int64 v15; // x0
  BattleBuffData_BuffData_array *offList; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_array *onList; // [xsp+18h] [xbp-28h] BYREF

  offList = 0LL;
  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)fieldList);
  if ( !this->fields.buffData )
    goto LABEL_12;
  v10 = MaxHp;
  BattleBuffData__checkFieldBuff(this->fields.buffData, fieldList, aliveSvtData, &onList, &offList, logic, 0LL);
  MaxHp = BattleServantData__checkUpdateUpdownHp(this, v10, 1, v11);
  if ( (MaxHp & 1) == 0 )
    return;
  if ( !fieldList )
LABEL_12:
    sub_B0D97C(MaxHp);
  v13 = *(_QWORD *)&fieldList->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
      {
        v15 = sub_B0D9A8(MaxHp);
        sub_B0D948(v15, 0LL);
      }
      if ( this->fields.uniqueId == fieldList->m_Items[v14 + 1] )
        MaxHp = BattleServantData__healHp(this, 0, 0, v12);
      LODWORD(v13) = fieldList->max_length;
      ++v14;
    }
    while ( (__int64)v14 < (int)v13 );
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
    sub_B0D97C(v7);
  return BattleBuffData__checkActBuff_30823572(buffData, 16, v7, 0LL);
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
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212849 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212849 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__checkActBuff_30823572(buffData, 69, v8, 0LL);
}


bool __fastcall BattleServantData__checkPierceInvincible(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212847 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212847 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__checkActBuff_30823572(buffData, 15, v8, 0LL);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  __int64 v7; // x0
  int32_t ActValue_30818560; // w0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  int CorrectedValueFuncGainNp; // w20

  if ( (byte_4212856 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4212856 = 1;
  }
  if ( this->fields.isEnemy )
    return 0;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  ActValue_30818560 = BattleBuffData__getActValue_30818560(buffData, 50, v6, 0LL);
  CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(this, ActValue_30818560, v9);
  if ( CorrectedValueFuncGainNp >= 1 && !BattleServantData__isGainNp(this, 1, v10) )
    CorrectedValueFuncGainNp = 0;
  BattleServantData__addNp(this, CorrectedValueFuncGainNp, 0, v11);
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
  BattleServantConfConponent_o *p_SvtTDvc; // x19
  System_Int32_array **EntityFromSvtIdOnly; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4212879 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4212879 = 1;
  }
  if ( !this->fields._SvtTDvc )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v9 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v18.fields.currentCryptoKey = v8;
    *(_QWORD *)&v18.fields.fakeValue = v7;
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v18, 0LL);
    if ( !v9 )
LABEL_10:
      sub_B0D97C(Instance);
    p_SvtTDvc = (BattleServantConfConponent_o *)&this->fields._SvtTDvc;
    EntityFromSvtIdOnly = (System_Int32_array **)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                   v9,
                                                   (int32_t)Instance,
                                                   0,
                                                   0LL);
    p_SvtTDvc->klass = (BattleServantConfConponent_c *)EntityFromSvtIdOnly;
    sub_B0D840(p_SvtTDvc, EntityFromSvtIdOnly, v12, v13, v14, v15, v16, v17);
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
    sub_B0D97C(v9);
  if ( !BattleBuffData__checkActBuff_30823572(buffData, 95, v9, 0LL) )
    return 0;
  result = 1;
  *isSpecialInvincible = 1;
  return result;
}


bool __fastcall BattleServantData__checkUpdateResumptionHpFromLossMaxHp(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *MaxHp; // x0
  int v4; // w20
  int32_t ResumptionHpFromLossMaxHp; // w0
  int32_t v6; // w22
  int32_t v7; // w21
  int32_t v8; // w0
  int32_t v9; // w20
  int v10; // w0
  int v11; // w0

  if ( (byte_4212858 & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, method);
    byte_4212858 = 1;
  }
  MaxHp = (BattleBuffData_o *)BattleServantData__getMaxHp(this, method);
  if ( !this->fields.buffData )
    goto LABEL_11;
  v4 = (int)MaxHp;
  if ( BattleBuffData__getResumptionHpFromLossMaxHp(this->fields.buffData, 0, 0LL) < 1 )
    return 0;
  MaxHp = this->fields.buffData;
  if ( !MaxHp )
LABEL_11:
    sub_B0D97C(MaxHp);
  ResumptionHpFromLossMaxHp = BattleBuffData__getResumptionHpFromLossMaxHp(MaxHp, 1, 0LL);
  v6 = this->fields.maxhp;
  v7 = ResumptionHpFromLossMaxHp;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Max_44559528(0, v4 - v6, 0LL);
  v9 = System_Math__Min_44514512(v8, v7, 0LL);
  v10 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)(v10 + v9),
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v11 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
          this,
          this->klass->vtable._14_set_resultHp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    (unsigned int)(v11 + v9),
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  return v9 > 0;
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
  bool isNobleAction_20788748; // w8
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)battleData);
  if ( TreasureDevice )
  {
    if ( !flg )
      goto LABEL_13;
    if ( !TreasureDeviceConditionUtil__IsSatisfyEachCondition(this, battleData, 0LL) )
      goto LABEL_9;
    invokeAct = 0;
    isNobleAction_20788748 = BattleServantData__isNobleAction_20788748(this, &invokeAct, v8);
    LOBYTE(TreasureDevice) = 0;
    if ( isNobleAction_20788748 )
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
  unsigned __int64 uniqueId; // x8
  unsigned __int64 v5; // x9
  __int64 v6; // x0

  if ( (byte_4212872 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B0D8A4(&double___TypeInfo, param);
    byte_4212872 = 1;
  }
  if ( !param || (this = (BattleServantData_o *)sub_B0D8BC(double___TypeInfo, param->max_length)) == 0LL )
    sub_B0D97C(this);
  uniqueId = (unsigned int)this->fields.uniqueId;
  if ( (__int64)(uniqueId << 32) >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= param->max_length || v5 >= uniqueId )
      {
        v6 = sub_B0D9A8(this);
        sub_B0D948(v6, 0LL);
      }
      *((double *)&this->fields.userSvtId.fields.currentCryptoKey + v5) = (double)param->m_Items[v5 + 1];
      ++v5;
    }
    while ( (__int64)v5 < (int)uniqueId );
  }
  return (System_Double_array *)this;
}


System_Int64_array *__fastcall BattleServantData__convertLong(
        BattleServantData_o *this,
        System_Int32_array *param,
        const MethodInfo *method)
{
  unsigned __int64 uniqueId; // x8
  unsigned __int64 v5; // x9
  __int64 v6; // x0

  if ( (byte_4212871 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B0D8A4(&long___TypeInfo, param);
    byte_4212871 = 1;
  }
  if ( !param || (this = (BattleServantData_o *)sub_B0D8BC(long___TypeInfo, param->max_length)) == 0LL )
    sub_B0D97C(this);
  uniqueId = (unsigned int)this->fields.uniqueId;
  if ( (__int64)(uniqueId << 32) >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= param->max_length || v5 >= uniqueId )
      {
        v6 = sub_B0D9A8(this);
        sub_B0D948(v6, 0LL);
      }
      *(&this->fields.userSvtId.fields.currentCryptoKey + v5) = param->m_Items[v5 + 1];
      ++v5;
    }
    while ( (__int64)v5 < (int)uniqueId );
  }
  return (System_Int64_array *)this;
}


void __fastcall BattleServantData__delParamObject(
        BattleServantData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *paramobjelist; // x0

  if ( (byte_4212802 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Contains__, obj);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Remove__, v5);
    byte_4212802 = 1;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_8;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         paramobjelist,
         (WarBoardManager_TaskList_o *)obj,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
    if ( paramobjelist )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        paramobjelist,
        (WarBoardManager_TaskList_o *)obj,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_GameObject__Remove__);
      return;
    }
LABEL_8:
    sub_B0D97C(paramobjelist);
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
  _BOOL8 v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212819 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_18810/*"fixUpdateStatus"*/, v7);
    byte_4212819 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B0D97C(v10);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_18810/*"fixUpdateStatus"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__forceDead(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_c *klass; // x8
  int32_t v4; // w0
  const MethodInfo *v5; // x5
  __int64 v6; // x0
  struct System_Int32_array *shiftDeckList; // x8

  klass = this->klass;
  this->fields.deadtype = 0;
  v4 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))klass->vtable._13_get_resultHp.method)(
         this,
         klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(this, v4, 0LL, 0LL, 0, v5);
  v6 = ((__int64 (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
         this,
         0LL,
         this->klass->vtable._11_get_reducedhp.methodPtr);
  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B0D97C(v6);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  return BattleBuffData__getActiveIndividualitiesNum(buffData, indv, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleServantData__getActiveSkillInfos(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  void *All; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__389_0; // x20
  Il2CppObject *v13; // x21
  struct BattleServantData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42127E8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, v4);
    sub_B0D8A4(&Method_System_Predicate_BattleSkillInfoData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleSkillInfoData__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleServantData___c__getActiveSkillInfos_b__389_0__, v7);
    sub_B0D8A4(&BattleServantData___c_TypeInfo, v8);
    byte_42127E8 = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  All = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    All = BattleServantData___c_TypeInfo;
  }
  static_fields = (struct BattleServantData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__389_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__389_0;
  if ( !_9__389_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__389_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                           method,
                                                                           v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__389_0,
      v13,
      Method_BattleServantData___c__getActiveSkillInfos_b__389_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    v14 = BattleServantData___c_TypeInfo->static_fields;
    v14->__9__389_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__389_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__389_0,
      (System_Int32_array **)_9__389_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)skillInfoList,
                (System_Predicate_T__o *)_9__389_0,
                (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_B0D97C(All);
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


float __fastcall BattleServantData__getActorScale(BattleServantData_o *this, const MethodInfo *method)
{
  return (float)this->fields.actorScale / 100.0;
}


int32_t __fastcall BattleServantData__getActorSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  struct ServantEntity_o *svtdata; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_42127D4 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_42127D4 = 1;
  }
  svtdata = v2->fields.svtdata;
  if ( !svtdata )
    sub_B0D97C(this);
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v7, 0LL);
}


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
  int v23; // w8
  System_Double_array *v24; // x19
  BattleRaidInfo_o *RaidInfo; // x20
  __int64 maxHp; // x8
  double v27; // d0
  double v28; // d1
  BattleBuffData_o *v29; // x19
  BattleServantData_o *BuffIDList; // x0
  const MethodInfo *v31; // x2
  struct BattleBuffData_o *v32; // x19
  bool v33; // w3
  bool v34; // w1
  BattleBuffData_o *v35; // x0
  BattleServantData___c_c *v36; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Converter_long__int__o *_9__660_0; // x22
  Il2CppObject *v39; // x23
  struct BattleServantData___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array *v47; // x21
  int32_t SameIndivualityBuffSum; // w22
  const MethodInfo *v49; // x2
  int32_t np; // w8
  BattleBuffData_o *buffData; // x19
  System_Double_array *v52; // x0
  struct BattleBuffData_o *v53; // x19
  __int64 v54; // x8
  double v55; // d8
  struct System_Int32_array *shiftDeckList; // x8
  int v57; // w21
  const MethodInfo *v58; // x1
  double totalDamage; // d0
  BattleRaidInfo_o *v60; // x20
  __int64 v62; // x0
  int32_t targetIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4212870 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_ConvertAll_long__int___, bData);
    sub_B0D8A4(&Method_System_Converter_long__int___ctor__, v15);
    sub_B0D8A4(&System_Converter_long__int__TypeInfo, v16);
    sub_B0D8A4(&double___TypeInfo, v17);
    sub_B0D8A4(&Method_BattleServantData___c__getAiParam_b__660_0__, v18);
    sub_B0D8A4(&BattleServantData___c_TypeInfo, v19);
    byte_4212870 = 1;
  }
  targetIndex = 0;
  FieldSpace = sub_B0D8BC(double___TypeInfo, 1LL);
  v23 = param - 2;
  v24 = (System_Double_array *)FieldSpace;
  switch ( v23 )
  {
    case 0:
      targetIndex = -1;
      if ( !bData )
        goto LABEL_104;
      FieldSpace = BattleData__getFieldSpace(bData, this->fields.uniqueId, &targetIndex, 0, 0LL);
      if ( !v24 )
        goto LABEL_104;
      goto LABEL_78;
    case 1:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v24 )
        goto LABEL_104;
      if ( !v24->max_length )
        goto LABEL_105;
      np = *(_DWORD *)(FieldSpace + 44);
      goto LABEL_101;
    case 2:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v24 )
        goto LABEL_104;
      if ( !v24->max_length )
        goto LABEL_105;
      np = *(_DWORD *)(FieldSpace + 40);
      goto LABEL_101;
    case 3:
      v57 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
              this,
              this->klass->vtable._10_set_hp.methodPtr);
      FieldSpace = BattleServantData__getMaxHp(this, v58);
      if ( !v24 )
        goto LABEL_104;
      if ( !v24->max_length )
        goto LABEL_105;
      v27 = (double)v57 * 1000.0;
      v28 = (double)(int)FieldSpace;
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
      if ( !v24 )
        goto LABEL_104;
      if ( !v24->max_length )
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
      if ( !v24 )
        goto LABEL_104;
LABEL_78:
      if ( !v24->max_length )
        goto LABEL_105;
      totalDamage = (double)(int)FieldSpace;
      goto LABEL_102;
    case 8:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v24 )
        goto LABEL_104;
      if ( !v24->max_length )
        goto LABEL_105;
      np = *(_DWORD *)(FieldSpace + 32);
      goto LABEL_101;
    case 9:
      FieldSpace = sub_B0D8BC(double___TypeInfo, 2LL);
      if ( !FieldSpace )
        goto LABEL_104;
      v24 = (System_Double_array *)FieldSpace;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      *(double *)(FieldSpace + 32) = (double)turn;
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._21_getThisTurnActCount.method)(
                     this,
                     this->klass->vtable._22_getAiParam.methodPtr);
      if ( v24->max_length <= 1 )
        goto LABEL_105;
      v24->m_Items[1] = (double)(int)FieldSpace;
      return v24;
    case 10:
      if ( !aiBaseEntity )
        goto LABEL_104;
      buffData = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !buffData )
        goto LABEL_104;
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffIDList(buffData, FieldSpace & 1, 0LL);
      goto LABEL_47;
    case 11:
      BuffIDList = (BattleServantData_o *)BattleServantData__getIndividualities(this, 0LL, v22);
      goto LABEL_47;
    case 12:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v53 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v53 )
        goto LABEL_104;
      v33 = (FieldSpace & 1) == 0;
      v35 = v53;
      v34 = 0;
      goto LABEL_46;
    case 13:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v32 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v32 )
        goto LABEL_104;
      v33 = (FieldSpace & 1) == 0;
      v34 = 1;
      v35 = v32;
LABEL_46:
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffIndividualities(v35, v34, 0, v33, 1, 0LL);
      goto LABEL_47;
    case 14:
    case 15:
      if ( !bData )
        goto LABEL_104;
      RaidInfo = BattleData__getRaidInfo(bData, this->fields.raidId, 0LL);
      FieldSpace = sub_B0D8BC(double___TypeInfo, 1LL);
      if ( !RaidInfo )
        goto LABEL_104;
      v24 = (System_Double_array *)FieldSpace;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      maxHp = RaidInfo->fields.maxHp;
      v27 = (double)(maxHp - RaidInfo->fields.totalDamage) * 1000.0;
      v28 = (double)maxHp;
LABEL_73:
      totalDamage = v27 / v28;
      goto LABEL_102;
    case 16:
      if ( !bData )
        goto LABEL_104;
      v60 = BattleData__getRaidInfo(bData, this->fields.raidId, 0LL);
      FieldSpace = sub_B0D8BC(double___TypeInfo, 1LL);
      if ( !v60 )
        goto LABEL_104;
      v24 = (System_Double_array *)FieldSpace;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      totalDamage = (double)v60->fields.totalDamage;
      goto LABEL_102;
    case 20:
      FieldSpace = (__int64)this->fields.buffData;
      if ( !FieldSpace )
        goto LABEL_104;
      FieldSpace = BattleBuffData__getMaxBuffCount((BattleBuffData_o *)FieldSpace, checkParams, 0, 0LL);
      if ( !v24 )
        goto LABEL_104;
      if ( !v24->max_length )
        goto LABEL_105;
      totalDamage = (double)FieldSpace;
      goto LABEL_102;
    case 21:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v29 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v29 )
        goto LABEL_104;
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffActiveIDList(v29, FieldSpace & 1, 0LL);
LABEL_47:
      v52 = BattleServantData__convertDouble(BuffIDList, (System_Int32_array *)BuffIDList, v31);
      goto LABEL_48;
    case 23:
      if ( !bData )
        goto LABEL_104;
      FieldSpace = BattleData__get_IsInTactical(bData, 0LL);
      v54 = 528LL;
      if ( (FieldSpace & 1) != 0 )
        v54 = 532LL;
      if ( !v24 )
        goto LABEL_104;
      if ( !v24->max_length )
        goto LABEL_105;
      np = *(_DWORD *)((char *)&bData->klass + v54);
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
      v36 = BattleServantData___c_TypeInfo;
      if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
        v36 = BattleServantData___c_TypeInfo;
      }
      static_fields = v36->static_fields;
      _9__660_0 = static_fields->__9__660_0;
      if ( !_9__660_0 )
      {
        if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          static_fields = BattleServantData___c_TypeInfo->static_fields;
        }
        v39 = (Il2CppObject *)static_fields->__9;
        _9__660_0 = (System_Converter_long__int__o *)sub_B0D974(System_Converter_long__int__TypeInfo, v21, v22);
        System_Converter_long__int____ctor(
          _9__660_0,
          v39,
          Method_BattleServantData___c__getAiParam_b__660_0__,
          (const MethodInfo_2665A74 *)Method_System_Converter_long__int___ctor__);
        v40 = BattleServantData___c_TypeInfo->static_fields;
        v40->__9__660_0 = _9__660_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v40->__9__660_0,
          (System_Int32_array **)_9__660_0,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
      FieldSpace = (__int64)System_Array__ConvertAll_long__int_(
                              checkParams,
                              (System_Converter_TInput__TOutput__o *)_9__660_0,
                              (const MethodInfo_1F676A8 *)Method_System_Array_ConvertAll_long__int___);
      if ( !this->fields.buffData )
        goto LABEL_104;
      v47 = (System_Int32_array *)FieldSpace;
      SameIndivualityBuffSum = BattleBuffData__getSameIndivualityBuffSum(
                                 this->fields.buffData,
                                 (System_Int32_array *)FieldSpace,
                                 0,
                                 0,
                                 0,
                                 0LL);
      FieldSpace = BattleServantData__getSameIndiualityServantSum(this, v47, v49);
      if ( !v24 )
        goto LABEL_104;
      if ( !v24->max_length )
        goto LABEL_105;
      np = FieldSpace + SameIndivualityBuffSum;
LABEL_101:
      totalDamage = (double)np;
LABEL_102:
      v24->m_Items[0] = totalDamage;
      break;
    case 26:
      v55 = 0.0;
      if ( !this->fields.isSystemAlive )
      {
        FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                       this,
                       this->klass->vtable._10_set_hp.methodPtr);
        if ( (int)FieldSpace <= 0 )
        {
          shiftDeckList = this->fields.shiftDeckList;
          if ( !shiftDeckList || this->fields.shiftDeckIndex >= (signed int)shiftDeckList->max_length )
            v55 = 1.0;
        }
      }
      if ( !v24 )
LABEL_104:
        sub_B0D97C(FieldSpace);
      if ( !v24->max_length )
      {
LABEL_105:
        v62 = sub_B0D9A8(FieldSpace);
        sub_B0D948(v62, 0LL);
      }
      v24->m_Items[0] = v55;
      break;
    default:
LABEL_41:
      v52 = (System_Double_array *)sub_B0D8BC(double___TypeInfo, 0LL);
LABEL_48:
      v24 = v52;
      break;
  }
  return v24;
}


AiState_o *__fastcall BattleServantData__getAiState(BattleServantData_o *this, const MethodInfo *method)
{
  AiStateManager_o *AiStateManager; // x0
  AiState_o *result; // x0

  AiStateManager = BattleServantData__get_AiStateManager(this, method);
  if ( !AiStateManager )
    sub_B0D97C(0LL);
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

  if ( (byte_4212873 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4212873 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v6, 0LL);
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
    sub_B0D97C(TDvcLv);
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
  __int64 v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4212809 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212809 = 1;
  }
  *multiatk = 1;
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v11);
  if ( !BattleBuffData__getActBuff(buffData, 66, v10, multiatk, 0LL) )
    *multiatk = 1;
  return BattleServantData__getAttackRaitoBase(this, command, v12);
}


System_Int32_array *__fastcall BattleServantData__getAttackRaitoBase(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Hashtable_o *commandtable; // x21
  struct System_Collections_Hashtable_o *v8; // x20
  __int64 v9; // x0
  System_Int32_array **v10; // x20
  __int64 v11; // x9
  _BOOL4 flash; // w21
  __int64 v13; // x0
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_421280A & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, command);
    sub_B0D8A4(&int_TypeInfo, v5);
    this = (BattleServantData_o *)sub_B0D8A4(&ServantCardEntity_TypeInfo, v6);
    byte_421280A = 1;
  }
  if ( !command )
    goto LABEL_26;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_26;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B0D8BC(int___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_26;
    if ( this->fields.uniqueId )
    {
      LODWORD(this->fields.userSvtId.fields.currentCryptoKey) = 100;
      return (System_Int32_array *)this;
    }
LABEL_28:
    v13 = sub_B0D9A8(this);
    sub_B0D948(v13, 0LL);
  }
  v8 = v4->fields.commandtable;
  v14 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  if ( !v8 )
    goto LABEL_26;
  v9 = ((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v8->klass->vtable._29_get_Item.method)(
         v8,
         this,
         v8->klass->vtable._30_set_Item.methodPtr);
  v10 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v11 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v9 + 300LL) < (unsigned int)v11
      || *(ServantCardEntity_c **)(*(_QWORD *)(*(_QWORD *)v9 + 200LL) + 8 * v11 - 8) != ServantCardEntity_TypeInfo )
    {
      this = (BattleServantData_o *)sub_B0DC70(v9);
      goto LABEL_28;
    }
  }
  flash = command->fields.flash;
  this = (BattleServantData_o *)BattleCommandData__isThree(command, 0LL);
  if ( flash )
  {
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v10 )
        return v10[8];
LABEL_26:
      sub_B0D97C(this);
    }
    this = (BattleServantData_o *)BattleCommandData__isPair(command, 0LL);
    if ( !v10 )
      goto LABEL_26;
    if ( ((unsigned __int8)this & 1) != 0 )
      return v10[7];
    else
      return v10[6];
  }
  else
  {
    if ( !v10 )
      goto LABEL_26;
    if ( ((unsigned __int8)this & 1) != 0 )
      return v10[5];
    else
      return v10[4];
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
  BattleBuffData_CheckIndividualitiesData_o *v17; // x25
  BattleBuffData_BuffData_array *BuffList_30806472; // x0
  int max_length; // w8
  BattleBuffData_BuffData_array *v20; // x20
  unsigned int v21; // w22
  Il2CppClass **v22; // x8
  Il2CppClass *v23; // x21
  __int64 v25; // x0

  if ( (byte_42127FC & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&attackAct);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    byte_42127FC = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  *(_QWORD *)&attackAct,
                                                                                                  command);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffData = this->fields.buffData;
  v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v15,
                                                       v16);
  BattleBuffData_CheckIndividualitiesData___ctor(v17, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_22;
  BuffList_30806472 = BattleBuffData__getBuffList_30806472(buffData, attackAct, v17, 1, 0, 0LL, 0LL);
  if ( !BuffList_30806472 )
    goto LABEL_22;
  max_length = BuffList_30806472->max_length;
  v20 = BuffList_30806472;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v25 = sub_B0D9A8(BuffList_30806472);
        sub_B0D948(v25, 0LL);
      }
      v22 = &v20->obj.klass + (int)v21;
      v23 = v22[4];
      if ( !v23 )
        break;
      if ( !BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)v22[4], 0LL)
        && !BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)v23, 0LL)
        && (BuffList_30806472 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCardBuff(
                                                                   (BattleBuffData_BuffData_o *)v23,
                                                                   0LL),
            ((unsigned __int8)BuffList_30806472 & 1) == 0)
        || (BuffList_30806472 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isActiveCommandCode(
                                                                   (BattleBuffData_BuffData_o *)v23,
                                                                   0LL),
            ((unsigned __int8)BuffList_30806472 & 1) != 0)
        || (BuffList_30806472 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCardBuff(
                                                                   (BattleBuffData_BuffData_o *)v23,
                                                                   0LL),
            ((unsigned __int8)BuffList_30806472 & 1) != 0)
        && LOBYTE(v23->_1.generic_class)
        || (BuffList_30806472 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                                   (BattleBuffData_BuffData_o *)v23,
                                                                   0LL),
            ((unsigned __int8)BuffList_30806472 & 1) != 0)
        && BYTE1(v23->vtable[4].methodPtr) )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      max_length = v20->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_B0D97C(BuffList_30806472);
  }
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getAttackSideEffectBuffList_20781520(
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
  void *AttackSideEffectBuffList; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x4
  __int64 v22; // x8
  unsigned __int64 v23; // x24
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__429_0; // x20
  Il2CppObject *v26; // x21
  struct BattleServantData___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v35; // x0

  if ( (byte_42127FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, attackActs);
    sub_B0D8A4(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    sub_B0D8A4(&Method_BattleServantData___c__getAttackSideEffectBuffList_b__429_0__, v15);
    sub_B0D8A4(&BattleServantData___c_TypeInfo, v16);
    byte_42127FE = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                  attackActs,
                                                                                                  command);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !attackActs )
    goto LABEL_20;
  v22 = *(_QWORD *)&attackActs->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v22 )
      {
        v35 = sub_B0D9A8(AttackSideEffectBuffList);
        sub_B0D948(v35, 0LL);
      }
      AttackSideEffectBuffList = BattleServantData__getAttackSideEffectBuffList(
                                   this,
                                   attackActs->m_Items[v23 + 1],
                                   command,
                                   opSvt,
                                   v21);
      if ( !v17 )
        break;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
        (System_Collections_Generic_IEnumerable_T__o *)AttackSideEffectBuffList,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      LODWORD(v22) = attackActs->max_length;
      if ( (__int64)++v23 >= (int)v22 )
        goto LABEL_9;
    }
LABEL_20:
    sub_B0D97C(AttackSideEffectBuffList);
  }
LABEL_9:
  AttackSideEffectBuffList = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    AttackSideEffectBuffList = BattleServantData___c_TypeInfo;
  }
  static_fields = (struct BattleServantData___c_StaticFields *)*((_QWORD *)AttackSideEffectBuffList + 23);
  _9__429_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__429_0;
  if ( !_9__429_0 )
  {
    if ( (*((_BYTE *)AttackSideEffectBuffList + 307) & 4) != 0 && !*((_DWORD *)AttackSideEffectBuffList + 56) )
    {
      j_il2cpp_runtime_class_init_0(AttackSideEffectBuffList);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__429_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_BattleBuffData_BuffData__TypeInfo,
                                                                            v19,
                                                                            v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__429_0,
      v26,
      Method_BattleServantData___c__getAttackSideEffectBuffList_b__429_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v27 = BattleServantData___c_TypeInfo->static_fields;
    v27->__9__429_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__429_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v27->__9__429_0,
      (System_Int32_array **)_9__429_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v17 )
    goto LABEL_20;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__429_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


int32_t __fastcall BattleServantData__getAttackType(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Hashtable_o *commandtable; // x21
  struct System_Collections_Hashtable_o *v7; // x20
  __int64 v8; // x9
  BattleServantData_o *v10; // x0
  BattleCommandData_o *v11; // x1
  BattleServantData_o *v12; // x2
  int32_t *v13; // x3
  const MethodInfo *v14; // x4
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4212808 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, command);
    this = (BattleServantData_o *)sub_B0D8A4(&ServantCardEntity_TypeInfo, v5);
    byte_4212808 = 1;
  }
  if ( !command )
    goto LABEL_13;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return 1;
  v7 = v4->fields.commandtable;
  v15 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  if ( !v7
    || (this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v7->klass->vtable._29_get_Item.method)(
                                        v7,
                                        this,
                                        v7->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(this);
  }
  v8 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[v8 - 1] == ServantCardEntity_TypeInfo )
  {
    return this->fields.svtId.fields.fakeValue;
  }
  v10 = (BattleServantData_o *)sub_B0DC70(this);
  return (unsigned int)BattleServantData__getAttackRaito(v10, v11, v12, v13, v14);
}


int32_t __fastcall BattleServantData__getAttri(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleDeckServantData_o *deckSvt; // x0
  int32_t v6; // w20
  int32_t *p_attri; // x8
  struct ServantEntity_o *svtdata; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42127D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_AttriMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__, v4);
    byte_42127D6 = 1;
  }
  entity = 0LL;
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt
    || (deckSvt = (BattleDeckServantData_o *)BattleDeckServantData__getChangeAttri(deckSvt, 0LL), !(_DWORD)deckSvt) )
  {
    svtdata = this->fields.svtdata;
    if ( svtdata )
    {
      p_attri = &svtdata->fields.attri;
      return *p_attri;
    }
LABEL_17:
    sub_B0D97C(deckSvt);
  }
  v6 = (int)deckSvt;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  deckSvt = (BattleDeckServantData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !deckSvt )
    goto LABEL_17;
  deckSvt = (BattleDeckServantData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                         (DataMasterBase_WarMaster__WarEntity__int__o *)deckSvt,
                                         &entity,
                                         v6,
                                         (const MethodInfo_2669C30 *)Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)deckSvt & 1) == 0 )
    return 10;
  if ( !entity )
    goto LABEL_17;
  p_attri = &entity->fields.id + 1;
  return *p_attri;
}


System_Int32_array *__fastcall BattleServantData__getAuraIdList(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *AuraBuffList; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v7; // x20
  System_Int32_array *v8; // x19
  int32_t v9; // w21
  BattleBuffData_BuffData_o *v10; // x8
  char *v11; // x9
  __int64 v13; // x0

  if ( (byte_421286D & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v4);
    byte_421286D = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return this->fields.wkzero;
  AuraBuffList = BattleBuffData__getAuraBuffList(buffData, 0LL);
  if ( !AuraBuffList )
    goto LABEL_16;
  v7 = AuraBuffList;
  AuraBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B0D8BC(
                                                                                 int___TypeInfo,
                                                                                 (unsigned int)AuraBuffList->fields._size);
  if ( !AuraBuffList )
    goto LABEL_16;
  v8 = (System_Int32_array *)AuraBuffList;
  if ( AuraBuffList->fields._size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v7->fields._size <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v10 = v7->fields._items->m_Items[v9];
      if ( !v10 )
        break;
      if ( (unsigned int)v9 >= AuraBuffList->fields._size )
      {
        v13 = sub_B0D9A8(AuraBuffList);
        sub_B0D948(v13, 0LL);
      }
      v11 = (char *)AuraBuffList + 4 * v9++;
      *((_DWORD *)v11 + 8) = v10->fields.auraEffectId;
      if ( v9 >= AuraBuffList->fields._size )
        return v8;
    }
LABEL_16:
    sub_B0D97C(AuraBuffList);
  }
  return v8;
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
    sub_B0D97C(this);
  return svtdata->fields.starRate;
}


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
  struct ServantEntity_o *svtdata; // x8
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  v9 = command;
  if ( (byte_42127D7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_42127D7 = 1;
  }
  value = 0;
  if ( !isAttack )
    v9 = 0LL;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, v9, v9, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_14;
  if ( !isAct )
  {
    if ( BattleBuffData__getTestActBuff(buffData, 19, v11, &value, 0LL) )
      goto LABEL_8;
    goto LABEL_10;
  }
  if ( !BattleBuffData__getActBuff(buffData, 19, v11, &value, 0LL) )
  {
LABEL_10:
    buffData = (BattleBuffData_o *)(unsigned int)this->fields.npcSvtClassId;
    if ( (_DWORD)buffData )
      return (int)buffData;
    svtdata = this->fields.svtdata;
    if ( svtdata )
    {
      LODWORD(buffData) = svtdata->fields.classId;
      return (int)buffData;
    }
LABEL_14:
    sub_B0D97C(buffData);
  }
LABEL_8:
  LODWORD(buffData) = value;
  return (int)buffData;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantData__getBattleServantOverwriteName(
        BattleServantData_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  ServantEntity_o *v11; // x20
  const MethodInfo *v12; // x2
  int32_t DispLimitCount; // w0
  __int64 v14; // x22
  __int64 v15; // x23
  int32_t v16; // w21
  int32_t v17; // w22
  int32_t LimitCountByDispLimit; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_42127C3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&OptionManager_TypeInfo, v8);
    this = (BattleServantData_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42127C3 = 1;
  }
  deckSvt = v4->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_22;
  if ( !deckSvt->fields.isFollowerSvt )
    return 0LL;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetSpoilerSetting(0LL) || Follower__IsNpc(v4->fields.followerType, 0LL) )
    return 0LL;
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        svtId,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_B0D97C(this);
  }
  v11 = (ServantEntity_o *)this;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL) )
    return 0LL;
  DispLimitCount = BattleServantData__getDispLimitCount(v4, 0, v12);
  v15 = *(_QWORD *)&v4->fields.limitcount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v4->fields.limitcount.fields.fakeValue;
  v16 = DispLimitCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v20, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v16, v17, 0LL);
  return ServantEntity__getBattleName(v11, v4->fields.battleVoice != 0, LimitCountByDispLimit, 0LL);
}


float __fastcall BattleServantData__getBuffDamageValue(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212845 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212845 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return (float)BattleBuffData__getActValue_30818560(buffData, 13, v8, 0LL);
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
  const MethodInfo *v15; // x4
  System_Int32_array *Individualities_20798680; // x24
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v18; // x2
  System_Int32_array *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Int32_array *v22; // x25
  BattleBuffData_CheckIndividualitiesData_o *v23; // x26
  __int64 v24; // x0

  if ( (byte_421284A & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffIndiv);
    sub_B0D8A4(&int___TypeInfo, v11);
    byte_421284A = 1;
  }
  v12 = !upOnly;
  buffData = this->fields.buffData;
  if ( v12 )
    v14 = 36;
  else
    v14 = 106;
  Individualities_20798680 = BattleServantData__getIndividualities_20798680(this, buffIndiv, (const MethodInfo *)opSvt);
  if ( opSvt )
  {
    BuffIndividualities = BattleServantData__getBuffIndividualities(opSvt, 1, 0, 0, v15);
    v19 = BattleServantData__getIndividualities_20798680(opSvt, BuffIndividualities, v18);
  }
  else
  {
    v19 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  }
  v22 = v19;
  v23 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v20,
                                                       v21);
  BattleBuffData_CheckIndividualitiesData___ctor(v23, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v24);
  return BattleBuffData__getActMag_30819404(
           buffData,
           v14,
           Individualities_20798680,
           v22,
           missText,
           v23,
           (BuffInterface_o *)this,
           0LL);
}


float __fastcall BattleServantData__getBuffGRANTSUBSTATEMagnification(
        BattleServantData_o *this,
        System_Int32_array *indiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v7; // x22
  __int64 v8; // x0

  if ( (byte_421284C & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, indiv);
    byte_421284C = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      indiv,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v8);
  return BattleBuffData__getActMag_30819668(buffData, 61, v7, 0LL);
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
    sub_B0D97C(0LL);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42127EE & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&buffAction);
    byte_42127EE = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&buffAction,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return BattleBuffData__getBuffList_30806472(buffData, buffAction, v6, 1, 0, 0LL, 0LL);
}


float __fastcall BattleServantData__getBuffNonResistInstantDeath(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_421283C & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_421283C = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return BattleBuffData__getActMag_30819668(buffData, 49, v6, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getBuffOverwriteClassRelationArray(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        bool isAct,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v10; // x23
  __int64 v11; // x0

  if ( (byte_4212850 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212850 = 1;
  }
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v11);
  return BattleBuffData__getBuffList_30806472(buffData, 87, v10, isAct, 0, 0LL, 0LL);
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
      return BattleUtility__FloorToInt_23825508(
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_421283D & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_421283D = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return BattleBuffData__getActMag_30819668(buffData, 68, v6, 0LL);
}


float __fastcall BattleServantData__getBuffResistInstantDeath(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_421283B & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_421283B = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return BattleBuffData__getActMag_30819668(buffData, 48, v6, 0LL);
}


float __fastcall BattleServantData__getBuffSelfDamageValue(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212846 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212846 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return (float)BattleBuffData__getActValue_30818560(buffData, 14, v8, 0LL);
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
    return BattleUtility__FloorToInt_23825508(v9 * v10, 0LL);
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
    return BattleUtility__FloorToInt_23825508(v9 * v10, 0LL);
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
  System_Int32_array *Individualities_20798680; // x24
  BattleBuffData_CheckIndividualitiesData_o *v15; // x25
  __int64 v16; // x0

  v7 = buffIndiv;
  if ( (byte_421284B & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffIndiv);
    byte_421284B = 1;
  }
  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, method);
  Individualities_20798680 = BattleServantData__getIndividualities_20798680(this, BuffIndividualities, v11);
  if ( opSvt )
    v7 = BattleServantData__getIndividualities_20798680(opSvt, v7, v13);
  v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v12,
                                                       v13);
  BattleBuffData_CheckIndividualitiesData___ctor(v15, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v16);
  return BattleBuffData__getActMag_30819404(buffData, 37, Individualities_20798680, v7, missText, v15, 0LL, 0LL);
}


float __fastcall BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
        BattleServantData_o *this,
        System_Int32_array *indiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_20798680; // x21
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  Individualities_20798680 = indiv;
  if ( (byte_421284D & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, indiv);
    byte_421284D = 1;
  }
  buffData = this->fields.buffData;
  if ( opSvt )
    Individualities_20798680 = BattleServantData__getIndividualities_20798680(
                                 opSvt,
                                 Individualities_20798680,
                                 (const MethodInfo *)opSvt);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      indiv,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor_22771868(v8, this, opSvt, 0LL, Individualities_20798680, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getActMag_30819668(buffData, 62, v8, 0LL);
}


int32_t __fastcall BattleServantData__getCameraActionId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B0D97C(0LL);
  return ServantEntity__getCameraActionId(svtdata, 0LL);
}


float __fastcall BattleServantData__getClassAtk(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 npcSvtClassId; // x0
  struct ServantEntity_o *svtdata; // x8

  npcSvtClassId = (unsigned int)this->fields.npcSvtClassId;
  if ( !(_DWORD)npcSvtClassId )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_B0D97C(npcSvtClassId);
    LODWORD(npcSvtClassId) = svtdata->fields.classId;
  }
  return ServantClassMaster__getClassAtk(npcSvtClassId, 0LL);
}


int32_t __fastcall BattleServantData__getClassId(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 npcSvtClassId; // x0
  struct ServantEntity_o *svtdata; // x8

  npcSvtClassId = (unsigned int)this->fields.npcSvtClassId;
  if ( !(_DWORD)npcSvtClassId )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_B0D97C(npcSvtClassId);
    LODWORD(npcSvtClassId) = svtdata->fields.classId;
  }
  return npcSvtClassId;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleServantData__getCommandArray(
        BattleServantData_o *this,
        int32_t commandTypeBit,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x21
  __int64 v10; // x0
  struct ServantEntity_o *svtdata; // x8
  struct System_Int32_array *cardIds; // x22
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  int32_t v15; // w1
  struct ServantEntity_o *v17; // x8
  __int64 v18; // x0

  if ( (byte_42127D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&commandTypeBit);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_42127D1 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   *(_QWORD *)&commandTypeBit,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_18;
  cardIds = svtdata->fields.cardIds;
  if ( !cardIds )
    goto LABEL_18;
  v13 = *(_QWORD *)&cardIds->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
      {
        v18 = sub_B0D9A8(v10);
        sub_B0D948(v18, 0LL);
      }
      v15 = cardIds->m_Items[v14 + 1];
      if ( ((1 << (v15 - 1)) & commandTypeBit) != 0 )
      {
        if ( !v9 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v9,
          v15,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v13) = cardIds->max_length;
      ++v14;
    }
    while ( (__int64)v14 < (int)v13 );
  }
  if ( !v9 )
    goto LABEL_18;
  if ( v9->fields._size > 0 )
    return System_Collections_Generic_List_int___ToArray(
             v9,
             (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v17 = this->fields.svtdata;
  if ( !v17 )
LABEL_18:
    sub_B0D97C(v10);
  return v17->fields.cardIds;
}


float __fastcall BattleServantData__getCommandCardATK(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t CommandType; // w0
  __int64 *v11; // x8
  int32_t v12; // w0
  int32_t v13; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  float Magnification; // s0
  float v17; // s8
  BattleBuffData_CheckIndividualitiesData_o *v18; // x23
  __int64 v19; // x1
  __int64 v20; // x2
  BattleBuffData_CheckIndividualitiesData_o *v21; // x22
  float ActMag_30819668; // s0
  float v23; // s9
  float v24; // s0

  v6 = this;
  if ( (byte_4212826 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    sub_B0D8A4(&StringLiteral_5519/*"ENEMY_ATTACK_RATE_ARTS"*/, v7);
    sub_B0D8A4(&StringLiteral_5520/*"ENEMY_ATTACK_RATE_BUSTER"*/, v8);
    this = (BattleServantData_o *)sub_B0D8A4(&StringLiteral_5521/*"ENEMY_ATTACK_RATE_QUICK"*/, v9);
    byte_4212826 = 1;
  }
  if ( !v6->fields.isEnemy )
    goto LABEL_12;
  if ( !command )
    goto LABEL_18;
  CommandType = BattleCommandData__getCommandType(command, 0LL);
  if ( !BattleCommand__isARTS(CommandType, 0LL) )
  {
    v12 = BattleCommandData__getCommandType(command, 0LL);
    if ( BattleCommand__isQUICK(v12, 0LL) )
    {
      v11 = &StringLiteral_5521/*"ENEMY_ATTACK_RATE_QUICK"*/;
      goto LABEL_11;
    }
    v13 = BattleCommandData__getCommandType(command, 0LL);
    if ( BattleCommand__isBUSTER(v13, 0LL) )
    {
      v11 = &StringLiteral_5520/*"ENEMY_ATTACK_RATE_BUSTER"*/;
      goto LABEL_11;
    }
LABEL_12:
    Magnification = BattleCommand__getMagnification(command, 0LL);
    goto LABEL_13;
  }
  v11 = &StringLiteral_5519/*"ENEMY_ATTACK_RATE_ARTS"*/;
LABEL_11:
  Magnification = ConstantMaster__getRateValue((System_String_o *)*v11, 0LL);
LABEL_13:
  v17 = Magnification;
  v18 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v14,
                                                       v15);
  BattleBuffData_CheckIndividualitiesData___ctor(v18, v6, targetSvt, command, 0LL, 0LL, 0LL);
  v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v19,
                                                       v20);
  BattleBuffData_CheckIndividualitiesData___ctor(v21, targetSvt, v6, 0LL, command, 0LL, 0LL);
  this = (BattleServantData_o *)v6->fields.buffData;
  if ( !this
    || (ActMag_30819668 = BattleBuffData__getActMag_30819668((BattleBuffData_o *)this, 1, v18, 0LL), !targetSvt)
    || (this = (BattleServantData_o *)targetSvt->fields.buffData) == 0LL
    || (v23 = ActMag_30819668, v24 = BattleBuffData__getActMag_30819668((BattleBuffData_o *)this, 2, v21, 0LL), !command) )
  {
LABEL_18:
    sub_B0D97C(this);
  }
  return (float)(v17 * fmaxf((float)(v23 + 1.0) - v24, 0.0)) + (float)((float)command->fields.addAtk / 1000.0);
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
  BattleBuffData_CheckIndividualitiesData_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  BattleBuffData_CheckIndividualitiesData_o *v13; // x22
  BattleBuffData_o *buffData; // x0
  float ActMag_30819668; // s0
  float v16; // s9
  float v17; // s0

  if ( (byte_4212827 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212827 = 1;
  }
  NpMagnification = BattleCommand__getNpMagnification(command, 0LL);
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v8,
                                                       v9);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12);
  BattleBuffData_CheckIndividualitiesData___ctor(v13, opSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_30819668 = BattleBuffData__getActMag_30819668(buffData, 22, v10, 0LL), !opSvt)
    || (buffData = opSvt->fields.buffData) == 0LL
    || (v16 = ActMag_30819668, v17 = BattleBuffData__getActMag_30819668(buffData, 23, v13, 0LL), !command) )
  {
    sub_B0D97C(buffData);
  }
  return (float)(NpMagnification * fmaxf((float)(v16 + 1.0) - v17, 0.0))
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
  int32_t battleCharaLimitCount; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr00_16
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42127DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42127DC = 1;
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
    *(_QWORD *)&v24.fields.currentCryptoKey = v8;
    *(_QWORD *)&v24.fields.fakeValue = v7;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v24, 0LL) )
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v25.fields.currentCryptoKey = v8;
      *(_QWORD *)&v25.fields.fakeValue = v7;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v25, 0LL) >= 11 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v29.fields.currentCryptoKey = v8;
        *(_QWORD *)&v29.fields.fakeValue = v7;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v29, 0LL);
      }
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v8;
      *(_QWORD *)&v26.fields.fakeValue = v7;
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v26, 0LL);
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_42;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v17 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v27.fields.currentCryptoKey = v16;
      *(_QWORD *)&v27.fields.fakeValue = v15;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL);
      v19 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v28.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v20 = v18;
      *(_QWORD *)&v28.fields.currentCryptoKey = v19;
      Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v28, 0LL);
      if ( !v17 )
        goto LABEL_42;
      Instance = (WebViewManager_o *)ServantLimitAddMaster__TryGetEntity(v17, &entity, v20, (int32_t)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
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
          v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
          v12 = *(_QWORD *)&v22.fields.fakeValue;
          v11 = *(_QWORD *)&v22.fields.currentCryptoKey;
          goto LABEL_32;
        }
LABEL_42:
        sub_B0D97C(Instance);
      }
    }
LABEL_32:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v29.fields.currentCryptoKey = v11;
    *(_QWORD *)&v29.fields.fakeValue = v12;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v29, 0LL);
  }
  return result;
}


System_Int32_array *__fastcall BattleServantData__getCommandList(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B0D97C(this);
  return svtdata->fields.cardIds;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getCommandSideEffect(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  __int64 v9; // x0

  if ( (byte_42127F3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_42127F3 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getBuffList_30806472(buffData, 57, v8, 1, 0, 0LL, 0LL);
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
  BattleBuffData_CheckIndividualitiesData_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  BattleBuffData_CheckIndividualitiesData_o *v13; // x22
  BattleBuffData_o *buffData; // x0
  float ActMag_30819668; // s0
  float v16; // s9
  float v17; // s0

  if ( (byte_4212828 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212828 = 1;
  }
  CriticalMagnification = BattleCommand__getCriticalMagnification(command, 0LL);
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v8,
                                                       v9);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12);
  BattleBuffData_CheckIndividualitiesData___ctor(v13, opSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_30819668 = BattleBuffData__getActMag_30819668(buffData, 26, v10, 0LL), !opSvt)
    || (buffData = opSvt->fields.buffData) == 0LL
    || (v16 = ActMag_30819668, v17 = BattleBuffData__getActMag_30819668(buffData, 27, v13, 0LL), !command) )
  {
    sub_B0D97C(buffData);
  }
  return (float)(CriticalMagnification * fmaxf((float)(v16 + 1.0) - v17, 0.0))
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

  if ( (byte_4212830 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, command);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4212830 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    command,
                                                    isIncludeIgnoreIndiv);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getIndividualities(
                                                                     this,
                                                                     command,
                                                                     v15);
  if ( !v14 )
    sub_B0D97C(Individualities);
  System_Collections_Generic_List_int___AddRange(
    v14,
    Individualities,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                         this,
                                                                         isActiveOnly,
                                                                         isIncludeIgnoreIndiv,
                                                                         isIgnoreIndivUnreleaseable,
                                                                         v17);
  System_Collections_Generic_List_int___AddRange(
    v14,
    BuffIndividualities,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_421282F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Concat_int___, command);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_421282F = 1;
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
         (const MethodInfo_1B44D70 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v9,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  BattleServantData_ConnectData_o *v9; // x22

  if ( (byte_421286B & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantData_ConnectData_TypeInfo, method);
    byte_421286B = 1;
  }
  uniqueId = this->fields.uniqueId;
  v4 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  atk = this->fields.atk;
  v6 = v4;
  v9 = (BattleServantData_ConnectData_o *)sub_B0D974(BattleServantData_ConnectData_TypeInfo, v7, v8);
  BattleServantData_ConnectData___ctor(v9, uniqueId, v6, atk, 0LL);
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getCorrectedValueFuncGainNp(
        BattleServantData_o *this,
        int32_t tmpVal,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_421283A & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&tmpVal);
    byte_421283A = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&tmpVal,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return BattleBuffData__getActValue_30818560(buffData, 71, v6, 0LL) * tmpVal / 1000;
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
  __int64 UpDownCriticalRate; // x0
  const MethodInfo *v9; // x3
  System_String_o *missText; // [xsp+8h] [xbp-28h] BYREF

  missText = 0LL;
  UpDownCriticalRate = BattleServantData__getUpDownCriticalRate(this, command, optSvt, &missText, v4);
  if ( !optSvt )
    sub_B0D97C(UpDownCriticalRate);
  return BattleServantData__GetUpDownCriticalRateDamageTaken(optSvt, command, this, v9)
       + UpDownCriticalRate
       + this->fields.criticalRate;
}


int32_t __fastcall BattleServantData__getCriticalWeight(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  struct ServantLimitEntity_o *svtlimitent; // x8
  int criticalWeight; // w23
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  float v9; // s0

  v4 = this;
  if ( (byte_4212857 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212857 = 1;
  }
  svtlimitent = v4->fields.svtlimitent;
  if ( !svtlimitent
    || (criticalWeight = svtlimitent->fields.criticalWeight,
        buffData = v4->fields.buffData,
        v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            command,
                                                            method),
        BattleBuffData_CheckIndividualitiesData___ctor(v8, v4, 0LL, command, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_B0D97C(this);
  }
  v9 = BattleBuffData__getActMag_30819668(buffData, 29, v8, 0LL) * (float)criticalWeight;
  return BattleUtility__FloorToInt(v9, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDamageSideEffect(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  __int64 v9; // x0

  if ( (byte_42127F6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_42127F6 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getBuffList_30806472(buffData, 64, v8, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDeadAttackSideEffect(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        BattleCommandData_o *deadAttackcommand,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  __int64 v9; // x0

  if ( (byte_42127F4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_42127F4 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      deadAttackcommand);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, deadAttackcommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getBuffList_30806472(buffData, 58, v8, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDeadBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        bool isAllReturnDeadBuff,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  BattleBuffData_BuffData_array *BuffListMatchingLastAttackOpponentIndividuality; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  const MethodInfo *v16; // x1
  int32_t RevengeTargetUniqueIdFromOpponent; // w22
  const MethodInfo *v18; // x1
  int max_length; // w8
  int32_t v20; // w21
  unsigned int v21; // w24
  Il2CppClass **v22; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x23
  int32_t v24; // w8
  __int64 v26; // x0

  v6 = this;
  if ( (byte_42127EF & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_BuffData___TypeInfo, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v9);
    this = (BattleServantData_o *)sub_B0D8A4(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10);
    byte_42127EF = 1;
  }
  if ( !data )
    goto LABEL_26;
  this = (BattleServantData_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_26;
  if ( (((__int64 (__fastcall *)(BattleServantData_o *, BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._20_GetLogicServantAi.method)(
          this,
          v6,
          this->klass->vtable._21_getThisTurnActCount.methodPtr,
          method) & 1) != 0 )
    return (BattleBuffData_BuffData_array *)sub_B0D8BC(BattleBuffData_BuffData___TypeInfo, 0LL);
  this = (BattleServantData_o *)v6->fields.buffData;
  if ( !this )
LABEL_26:
    sub_B0D97C(this);
  BuffListMatchingLastAttackOpponentIndividuality = BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(
                                                      (BattleBuffData_o *)this,
                                                      51,
                                                      data,
                                                      v6,
                                                      1,
                                                      0LL);
  if ( !isAllReturnDeadBuff )
  {
    v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                                                                    v12,
                                                                                                    v13);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v15,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    RevengeTargetUniqueIdFromOpponent = BattleServantData__getRevengeTargetUniqueIdFromOpponent(v6, v16);
    this = (BattleServantData_o *)BattleServantData__getRevengeTargetUniqueId(v6, v18);
    if ( BuffListMatchingLastAttackOpponentIndividuality )
    {
      max_length = BuffListMatchingLastAttackOpponentIndividuality->max_length;
      if ( max_length < 1 )
      {
LABEL_22:
        if ( v15 )
          return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
      }
      else
      {
        v20 = (int)this;
        v21 = 0;
        while ( 1 )
        {
          if ( v21 >= max_length )
          {
            v26 = sub_B0D9A8(this);
            sub_B0D948(v26, 0LL);
          }
          v22 = &BuffListMatchingLastAttackOpponentIndividuality->obj.klass + (int)v21;
          v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v22[4];
          if ( !v23 )
            break;
          this = (BattleServantData_o *)BattleBuffData_BuffData__checkState(
                                          (BattleBuffData_BuffData_o *)v22[4],
                                          2048,
                                          0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            v24 = RevengeTargetUniqueIdFromOpponent;
          else
            v24 = v20;
          if ( (v24 & 0x80000000) == 0
            || (this = (BattleServantData_o *)BattleBuffData_BuffData__checkState(
                                                (BattleBuffData_BuffData_o *)v23,
                                                0x40000,
                                                0LL),
                ((unsigned __int8)this & 1) == 0) )
          {
            if ( !v15 )
              goto LABEL_26;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              v23,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
          max_length = BuffListMatchingLastAttackOpponentIndividuality->max_length;
          if ( (int)++v21 >= max_length )
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
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v7; // x0

  if ( (byte_4212865 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_4212865 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_9;
  v4 = *(_QWORD *)&v3->max_length;
  if ( v4 )
  {
    if ( !(_DWORD)v4 )
    {
      v7 = sub_B0D9A8(v3);
      sub_B0D948(v7, 0LL);
    }
    v5 = *(__int64 *)((char *)v3->m_Items + (((v4 << 32) - 0x100000000LL) >> 29));
    if ( v5 )
      return *(_DWORD *)(v5 + 20);
LABEL_9:
    sub_B0D97C(v3);
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
    sub_B0D97C(0LL);
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
      sub_B0D97C(0LL);
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
  int32_t battleCharaLimitCount; // w19
  __int64 v24; // x0
  __int64 v25; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // kr10_16
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42127DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, changeImageLimit);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42127DD = 1;
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
    *(_QWORD *)&v29.fields.currentCryptoKey = v10;
    *(_QWORD *)&v29.fields.fakeValue = v9;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v29, 0LL) )
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v30.fields.currentCryptoKey = v10;
      *(_QWORD *)&v30.fields.fakeValue = v9;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL) >= 11 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v34.fields.currentCryptoKey = v10;
        *(_QWORD *)&v34.fields.fakeValue = v9;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v34, 0LL);
      }
      if ( !changeImageLimit )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v35.fields.currentCryptoKey = v10;
        *(_QWORD *)&v35.fields.fakeValue = v9;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Decrement(v35, 0LL);
        v25 = *(_QWORD *)&v27.fields.fakeValue;
        v24 = *(_QWORD *)&v27.fields.currentCryptoKey;
        goto LABEL_41;
      }
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v10;
      *(_QWORD *)&v31.fields.fakeValue = v9;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v31, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v11 - 1, 0LL);
LABEL_32:
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
      v25 = *(_QWORD *)&v26.fields.fakeValue;
      v24 = *(_QWORD *)&v26.fields.currentCryptoKey;
LABEL_41:
      v13 = v24;
      v14 = v25;
      goto LABEL_42;
    }
    v13 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( this->fields.isEnemy )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v19 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v32.fields.currentCryptoKey = v18;
      *(_QWORD *)&v32.fields.fakeValue = v17;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v32, 0LL);
      v21 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v33.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v22 = v20;
      *(_QWORD *)&v33.fields.currentCryptoKey = v21;
      Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v33, 0LL);
      if ( !v19 )
        goto LABEL_48;
      Instance = (WebViewManager_o *)ServantLimitAddMaster__TryGetEntity(v19, &entity, v22, (int32_t)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
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
        sub_B0D97C(Instance);
      }
    }
LABEL_42:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v13;
    *(_QWORD *)&v34.fields.fakeValue = v14;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v34, 0LL);
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
    sub_B0D97C(0LL);
  return ServantEntity__getDressId(svtdata, 0LL);
}


DropInfo_array *__fastcall BattleServantData__getDropItem(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.droplist;
}


int32_t __fastcall BattleServantData__getEffectFolder(BattleServantData_o *this, const MethodInfo *method)
{
  ServantLimitAddEntity_o *svtlimitaddent; // x20
  ServantLimitAddMaster_c *v4; // x0
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  if ( (byte_42127DA & 1) == 0 )
  {
    sub_B0D8A4(&ServantLimitAddMaster_TypeInfo, method);
    byte_42127DA = 1;
  }
  svtlimitaddent = this->fields.svtlimitaddent;
  v4 = ServantLimitAddMaster_TypeInfo;
  if ( (BYTE3(ServantLimitAddMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantLimitAddMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantLimitAddMaster_TypeInfo);
  }
  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B0D97C(v4);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x20
  __int64 v6; // x0

  if ( (byte_42127F7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_42127F7 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v6);
  return BattleBuffData__getBuffList_30806472(buffData, 76, v5, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getFixCommandCardBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x20
  __int64 v6; // x0

  if ( (byte_42127F2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_42127F2 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v6);
  return BattleBuffData__getBuffList_30806472(buffData, 74, v5, 1, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantData__getGrantInstantDeathMagnification(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        bool isTreasureDevice,
        const MethodInfo *method)
{
  BattleCommandData_o *TreasureDvcCommand; // x23
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v9; // x22
  __int64 v10; // x0

  if ( (byte_4212840 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_4212840 = 1;
  }
  if ( isTreasureDevice )
    TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, (const MethodInfo *)opSvt);
  else
    TreasureDvcCommand = 0LL;
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      isTreasureDevice);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, TreasureDvcCommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v10);
  return BattleBuffData__getActMag_30819668(buffData, 63, v9, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getGutsBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B0D97C(0LL);
  return BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(buffData, 89, data, this, 1, 0LL);
}


System_Int32_array *__fastcall BattleServantData__getIndividualities(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x21
  const MethodInfo *v11; // x2
  BattleServantData_c *v12; // x0
  BattleServantData_c *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *CriticalIndividuality; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_T__o *klass; // x1
  const MethodInfo_2FB0154 *v18; // x2
  const MethodInfo *v19; // x2
  System_Int32_array *ServantCommandIndividuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_421285C & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantData_TypeInfo, command);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_421285C = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    command,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( command )
  {
    if ( command->fields.critical )
    {
      v12 = BattleServantData_TypeInfo;
      if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
      }
      if ( BattleServantData__get_CriticalIndividuality((const MethodInfo *)v12) != -1 )
      {
        v13 = BattleServantData_TypeInfo;
        if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleServantData_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
        }
        CriticalIndividuality = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__get_CriticalIndividuality((const MethodInfo *)v13);
        if ( !v10 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v10,
          (int32_t)CriticalIndividuality,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    if ( !BattleCommandData__isTreasureDvc(command, 0LL) )
    {
      CriticalIndividuality = (System_Collections_Generic_IEnumerable_T__o *)BattleCommandData__getIndividualities(
                                                                               command,
                                                                               0LL);
      if ( v10 )
      {
        System_Collections_Generic_List_int___AddRange(
          v10,
          CriticalIndividuality,
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
        ServantCommandIndividuality = BattleServantData__getServantCommandIndividuality(this, command, v19);
        v18 = (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__;
        klass = (System_Collections_Generic_IEnumerable_T__o *)ServantCommandIndividuality;
        goto LABEL_21;
      }
LABEL_23:
      sub_B0D97C(CriticalIndividuality);
    }
    if ( BattleServantData__get_TreasureDevice(this, v15) )
    {
      CriticalIndividuality = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__get_TreasureDevice(
                                                                               this,
                                                                               v16);
      if ( CriticalIndividuality && v10 )
      {
        klass = (System_Collections_Generic_IEnumerable_T__o *)CriticalIndividuality[4].klass;
        v18 = (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_21:
        System_Collections_Generic_List_int___AddRange(v10, klass, v18);
        goto LABEL_22;
      }
      goto LABEL_23;
    }
  }
LABEL_22:
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__EnumerateIndividuality(
                                                               this,
                                                               (System_Collections_Generic_IEnumerable_int__o *)v10,
                                                               v11);
  return System_Linq_Enumerable__ToArray_int_(
           v21,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleServantData__getIndividualities_20798680(
        BattleServantData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_421285D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, addIndiv);
    byte_421285D = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__EnumerateIndividuality(
                                                              this,
                                                              (System_Collections_Generic_IEnumerable_int__o *)addIndiv,
                                                              method);
  return System_Linq_Enumerable__ToArray_int_(
           v5,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_42127D9 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_23617/*"{0}"*/, v3);
    byte_42127D9 = 1;
  }
  level = this->fields.level;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &level);
  return System_String__Format((System_String_o *)StringLiteral_23617/*"{0}"*/, v4, 0LL);
}


int32_t __fastcall BattleServantData__getLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_42127DB & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_42127DB = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v6, 0LL);
}


int32_t __fastcall BattleServantData__getLimitImageIndex(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t SvtId; // w19
  const MethodInfo *v4; // x2
  int32_t DispLimitCount; // w20

  if ( (byte_42127DF & 1) == 0 )
  {
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, method);
    byte_42127DF = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  BattleBuffData_CheckIndividualitiesData_o *v6; // x20
  CrashReporter_o *buffData; // x0
  __int64 maxhp; // x21
  BattleBuffData_o *v9; // x8
  __int64 v10; // x8

  if ( (byte_421280D & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_15762/*"[BattleServantData.getMaxHp] buffData is null"*/, v5);
    byte_421280D = 1;
  }
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  buffData = (CrashReporter_o *)this->fields.buffData;
  if ( !buffData
    && ((buffData = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0LL
     || (CrashReporter__SendReport_27767316(buffData, (System_String_o *)StringLiteral_15762/*"[BattleServantData.getMaxHp] buffData is null"*/, 0LL, 0LL, 0LL),
         (buffData = (CrashReporter_o *)this->fields.buffData) == 0LL))
    || (maxhp = this->fields.maxhp,
        buffData = (CrashReporter_o *)BattleBuffData__getActValue_30818560((BattleBuffData_o *)buffData, 52, v6, 0LL),
        (v9 = this->fields.buffData) == 0LL) )
  {
    sub_B0D97C(buffData);
  }
  v10 = (int)buffData * maxhp / 1000 + maxhp + BattleBuffData__getActValue_30818560(v9, 53, v6, 0LL);
  if ( v10 <= 1 )
    v10 = 1LL;
  if ( v10 >= 0x7FFFFFFF )
    return 0x7FFFFFFF;
  else
    return v10;
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
  BattleServantData_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Hashtable_o *commandtable; // x21
  struct System_Collections_Hashtable_o *v7; // x20
  __int64 v8; // x9
  BattleServantData_o *v10; // x0
  BattleCommandData_o *v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4212807 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, command);
    this = (BattleServantData_o *)sub_B0D8A4(&ServantCardEntity_TypeInfo, v5);
    byte_4212807 = 1;
  }
  if ( !command )
    goto LABEL_13;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return 40;
  v7 = v4->fields.commandtable;
  v13 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  if ( !v7
    || (this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v7->klass->vtable._29_get_Item.method)(
                                        v7,
                                        this,
                                        v7->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(this);
  }
  v8 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[v8 - 1] == ServantCardEntity_TypeInfo )
  {
    return this->fields.uniqueId;
  }
  v10 = (BattleServantData_o *)sub_B0DC70(this);
  return BattleServantData__getAttackType(v10, v11, v12);
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
    sub_B0D97C(0LL);
  return BattleBuffData__getBuffList_30806472(buffData, 73, checkIndividualities, 1, 0, 0LL, 0LL);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0
  _BOOL4 isTurnBuff; // w0
  BattleBuffData_o *v8; // x20
  int v9; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  BattleBuffData_CheckIndividualitiesData_o *v12; // x21

  if ( (byte_4212855 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4212855 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 39, v5, 0, 0LL),
        v8 = this->fields.buffData,
        v9 = isTurnBuff,
        v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v10,
                                                             v11),
        BattleBuffData_CheckIndividualitiesData___ctor(v12, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v8) )
  {
    sub_B0D97C(v6);
  }
  return BattleBuffData__getMaxTurnBuff(v8, 39, v12, v9 << 31 >> 31, 0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  return BattleDeckServantData__getTDName(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDRuby(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B0D97C(0LL);
  return BattleDeckServantData__getTDRuby(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDVoice(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B0D97C(0LL);
  return BattleDeckServantData__getEnemyTreasureDeviceVoiceId(deckSvt, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleServantData__getPassiveSkills(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  void *All; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__310_0; // x20
  Il2CppObject *v13; // x21
  struct BattleServantData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42127CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, v4);
    sub_B0D8A4(&Method_System_Predicate_BattleSkillInfoData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleSkillInfoData__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleServantData___c__getPassiveSkills_b__310_0__, v7);
    sub_B0D8A4(&BattleServantData___c_TypeInfo, v8);
    byte_42127CE = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  All = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    All = BattleServantData___c_TypeInfo;
  }
  static_fields = (struct BattleServantData___c_StaticFields *)*((_QWORD *)All + 23);
  _9__310_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__310_0;
  if ( !_9__310_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__310_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                           method,
                                                                           v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__310_0,
      v13,
      Method_BattleServantData___c__getPassiveSkills_b__310_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    v14 = BattleServantData___c_TypeInfo->static_fields;
    v14->__9__310_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__310_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__310_0,
      (System_Int32_array **)_9__310_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)skillInfoList,
                (System_Predicate_T__o *)_9__310_0,
                (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_B0D97C(All);
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


int32_t __fastcall BattleServantData__getRarity(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x20
  __int64 v6; // x0

  if ( (byte_42127F5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_42127F5 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v6);
  return BattleBuffData__getBuffList_30806472(buffData, 65, v5, 1, 0, 0LL, 0LL);
}


int32_t __fastcall BattleServantData__getRevengeTargetUniqueId(BattleServantData_o *this, const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v3; // x0
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v5; // w10
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v6; // x8
  unsigned int groupId; // w13
  int32_t v8; // w8
  __int64 v10; // x0

  if ( (byte_4212863 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_4212863 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_14;
  max_length = v3->max_length;
  v5 = max_length - 1;
  if ( (int)(max_length - 1) >= 0 )
  {
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        v10 = sub_B0D9A8(v3);
        sub_B0D948(v10, 0LL);
      }
      v6 = v3->m_Items[v5];
      if ( !v6 )
        break;
      groupId = v6->fields.groupId;
      if ( groupId <= 7 && ((1 << groupId) & 0xDE) != 0 )
      {
        v8 = *(&v6->fields.groupId + 1);
        if ( v8 != this->fields.uniqueId )
          return v8;
      }
      if ( (--v5 & 0x80000000) != 0 )
        return -1;
    }
LABEL_14:
    sub_B0D97C(v3);
  }
  return -1;
}


int32_t __fastcall BattleServantData__getRevengeTargetUniqueIdFromOpponent(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v3; // x0
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v5; // w10
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v6; // x8
  unsigned int groupId; // w13
  int32_t v8; // w8
  __int64 v10; // x0

  if ( (byte_4212864 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_4212864 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_14;
  max_length = v3->max_length;
  v5 = max_length - 1;
  if ( (int)(max_length - 1) >= 0 )
  {
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        v10 = sub_B0D9A8(v3);
        sub_B0D948(v10, 0LL);
      }
      v6 = v3->m_Items[v5];
      if ( !v6 )
        break;
      groupId = v6->fields.groupId;
      if ( groupId <= 7 && ((1 << groupId) & 0xDE) != 0 )
      {
        if ( BYTE4(v6->fields.msgIds) )
        {
          v8 = *(&v6->fields.groupId + 1);
          if ( v8 != this->fields.uniqueId )
            return v8;
        }
      }
      if ( (--v5 & 0x80000000) != 0 )
        return -1;
    }
LABEL_14:
    sub_B0D97C(v3);
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
    sub_B0D97C(0LL);
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
  unsigned __int64 max_length; // x9
  int32_t v6; // w8
  unsigned __int64 v7; // x10
  signed int v8; // w12
  unsigned int v9; // w14
  __int64 v11; // x0

  Individualities = BattleServantData__getIndividualities(this, 0LL, method);
  if ( !Individualities )
    goto LABEL_18;
  max_length = Individualities->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v6 = 0;
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
LABEL_17:
        v11 = sub_B0D9A8(Individualities);
        sub_B0D948(v11, 0LL);
      }
      if ( !checkIndvArray )
        break;
      v8 = checkIndvArray->max_length;
      if ( v8 >= 1 )
      {
        v9 = 0;
        while ( 1 )
        {
          if ( v9 >= v8 )
            goto LABEL_17;
          if ( Individualities->m_Items[v7 + 1] == checkIndvArray->m_Items[v9 + 1] )
            break;
          if ( (int)++v9 >= v8 )
            goto LABEL_13;
        }
        ++v6;
      }
LABEL_13:
      if ( (__int64)++v7 >= (int)max_length )
        return v6;
    }
LABEL_18:
    sub_B0D97C(Individualities);
  }
  return 0;
}


BattleServantData_SaveData_o *__fastcall BattleServantData__getSaveData(
        BattleServantData_o *this,
        BattleData_o *data,
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
  __int64 v14; // x19
  AiState_o *aiState; // x0
  System_Int32_array **SaveData; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x8
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v46; // x8
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v60; // x24
  __int64 v61; // x25
  int size; // w8
  __int64 v63; // x8
  BattleSkillInfoData_o *v64; // x24
  __int64 v65; // x26
  __int64 v66; // x26
  System_Int32_array **statestring; // x1
  System_Int32_array **commandAssistIds; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x20
  BattleServantData___c_c *v78; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_string__object___string__o *_9__275_0; // x21
  Il2CppObject *v81; // x22
  struct BattleServantData___c_StaticFields *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  System_Int32_array **v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v98; // x0

  if ( (byte_42127B6 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___,
      data);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleServantData_PartAnimationSaveData___, v5);
    sub_B0D8A4(
      &Method_System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___ctor__,
      v6);
    sub_B0D8A4(
      &System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__TypeInfo,
      v7);
    sub_B0D8A4(&int___TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v10);
    sub_B0D8A4(&BattleServantData_SaveData_TypeInfo, v11);
    sub_B0D8A4(&Method_BattleServantData___c__getSaveData_b__275_0__, v12);
    sub_B0D8A4(&BattleServantData___c_TypeInfo, v13);
    byte_42127B6 = 1;
  }
  v14 = sub_B0D974(BattleServantData_SaveData_TypeInfo, data, method);
  BattleServantData_SaveData___ctor((BattleServantData_SaveData_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_34;
  *(_DWORD *)(v14 + 16) = this->fields.index;
  *(_DWORD *)(v14 + 20) = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                            this,
                            this->klass->vtable._10_set_hp.methodPtr);
  *(_DWORD *)(v14 + 72) = this->fields.deckIndex;
  *(_DWORD *)(v14 + 24) = this->fields.np;
  *(_DWORD *)(v14 + 28) = this->fields.nexttpturn;
  *(_DWORD *)(v14 + 32) = this->fields.isEntry;
  *(_DWORD *)(v14 + 36) = this->fields.isDeadAnime;
  aiState = this->fields.aiState;
  if ( !aiState )
    goto LABEL_34;
  SaveData = (System_Int32_array **)AiState__getSaveData(aiState, 0LL);
  *(_QWORD *)(v14 + 56) = SaveData;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 56), SaveData, v17, v18, v19, v20, v21, v22);
  aiState = (AiState_o *)BattleServantData__get_AiStateManager(this, v23);
  if ( !aiState )
    goto LABEL_34;
  v24 = (System_Int32_array **)AiStateManager__GetSaveData((AiStateManager_o *)aiState, 0LL);
  *(_QWORD *)(v14 + 192) = v24;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 192), v24, v25, v26, v27, v28, v29, v30);
  aiState = (AiState_o *)this->fields.buffData;
  if ( !aiState )
    goto LABEL_34;
  v31 = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)aiState, 0LL);
  *(_QWORD *)(v14 + 64) = v31;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 64), v31, v32, v33, v34, v35, v36, v37);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_34;
  v39 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, (unsigned int)skillInfoList->fields._size);
  *(_QWORD *)(v14 + 40) = v39;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 40), v39, v40, v41, v42, v43, v44, v45);
  v46 = this->fields.skillInfoList;
  if ( !v46 )
    goto LABEL_34;
  v47 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, (unsigned int)v46->fields._size);
  *(_QWORD *)(v14 + 48) = v47;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 48), v47, v48, v49, v50, v51, v52, v53);
  v60 = this->fields.skillInfoList;
  if ( !v60 )
    goto LABEL_34;
  v61 = 0LL;
  while ( 1 )
  {
    size = v60->fields._size;
    if ( (int)v61 >= size )
      break;
    if ( size <= (unsigned int)v61 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v63 = (__int64)v60->fields._items + 8 * v61;
    v64 = *(BattleSkillInfoData_o **)(v63 + 32);
    if ( v64 )
    {
      v65 = *(_QWORD *)(v14 + 40);
      aiState = (AiState_o *)BattleSkillInfoData__getInfoId(*(BattleSkillInfoData_o **)(v63 + 32), 0LL);
      if ( v65 )
      {
        if ( (unsigned int)v61 >= *(_DWORD *)(v65 + 24) )
          goto LABEL_35;
        *(_DWORD *)(v65 + 4 * v61 + 32) = (_DWORD)aiState;
        v66 = *(_QWORD *)(v14 + 48);
        aiState = (AiState_o *)BattleSkillInfoData__getChargeTurn(v64, 0LL);
        if ( v66 )
        {
          if ( (unsigned int)v61 >= *(_DWORD *)(v66 + 24) )
          {
LABEL_35:
            v98 = sub_B0D9A8(aiState);
            sub_B0D948(v98, 0LL);
          }
          *(_DWORD *)(v66 + 4 * v61 + 32) = (_DWORD)aiState;
          v60 = this->fields.skillInfoList;
          ++v61;
          if ( v60 )
            continue;
        }
      }
    }
    goto LABEL_34;
  }
  *(_DWORD *)(v14 + 116) = this->fields.shiftNpcId;
  *(_QWORD *)(v14 + 120) = this->fields.beforeUserSvtId;
  *(_DWORD *)(v14 + 76) = this->fields.transformIndex;
  *(_DWORD *)(v14 + 172) = this->fields.transformLimitCount;
  *(_DWORD *)(v14 + 80) = this->fields.dressDispId;
  *(_DWORD *)(v14 + 84) = this->fields.accumulationDamage;
  statestring = (System_Int32_array **)this->fields.statestring;
  *(_QWORD *)(v14 + 88) = statestring;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 88), statestring, v54, v55, v56, v57, v58, v59);
  *(_DWORD *)(v14 + 96) = this->fields.summonNpcId;
  *(_DWORD *)(v14 + 100) = this->fields.uniqueId;
  *(_DWORD *)(v14 + 104) = this->fields.shiftDeckIndex;
  *(_DWORD *)(v14 + 108) = this->fields.changeSvtIndex;
  *(_DWORD *)(v14 + 132) = this->fields.lowLimitShift;
  *(_BYTE *)(v14 + 112) = this->fields.isSleepWaitMode;
  *(_BYTE *)(v14 + 128) = this->fields.IsAlreadyDrop;
  *(_DWORD *)(v14 + 136) = this->fields.playedNPCount;
  *(_DWORD *)(v14 + 156) = this->fields.maxDefeatPoint;
  *(_DWORD *)(v14 + 140) = this->fields.defeatPoint;
  *(_DWORD *)(v14 + 144) = this->fields.befSquareIndex;
  *(_DWORD *)(v14 + 148) = this->fields.aftSquareIndex;
  *(_BYTE *)(v14 + 152) = this->fields.isAppliedHaveStars;
  *(_DWORD *)(v14 + 160) = this->fields.squareEffectSkillId;
  *(_DWORD *)(v14 + 164) = this->fields.squareEffectSkillLv;
  *(_DWORD *)(v14 + 168) = this->fields.deadtype;
  *(_DWORD *)(v14 + 200) = this->fields.tdErrorTouchCount;
  *(_BYTE *)(v14 + 204) = this->fields.flgEntryFunction;
  commandAssistIds = (System_Int32_array **)this->fields.commandAssistIds;
  *(_QWORD *)(v14 + 208) = commandAssistIds;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 208), commandAssistIds, v69, v70, v71, v72, v73, v74);
  if ( !data || (aiState = (AiState_o *)data->fields.perf) == 0LL )
LABEL_34:
    sub_B0D97C(aiState);
  BattlePerformance__SetActorPartAnimationData((BattlePerformance_o *)aiState, this->fields.uniqueId, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.partAnimationSaveDict, 0LL) )
  {
    partAnimationSaveDict = this->fields.partAnimationSaveDict;
    v78 = BattleServantData___c_TypeInfo;
    if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v78 = BattleServantData___c_TypeInfo;
    }
    static_fields = v78->static_fields;
    _9__275_0 = (System_Func_KeyValuePair_string__object___string__o *)static_fields->__9__275_0;
    if ( !_9__275_0 )
    {
      if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78);
        static_fields = BattleServantData___c_TypeInfo->static_fields;
      }
      v81 = (Il2CppObject *)static_fields->__9;
      _9__275_0 = (System_Func_KeyValuePair_string__object___string__o *)sub_B0D974(
                                                                           System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__TypeInfo,
                                                                           v75,
                                                                           v76);
      System_Func_KeyValuePair_string__object___string____ctor(
        _9__275_0,
        v81,
        Method_BattleServantData___c__getSaveData_b__275_0__,
        (const MethodInfo_260E378 *)Method_System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___ctor__);
      v82 = BattleServantData___c_TypeInfo->static_fields;
      v82->__9__275_0 = (struct System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__o *)_9__275_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v82->__9__275_0,
        (System_Int32_array **)_9__275_0,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
    }
    v89 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)partAnimationSaveDict,
                                                                 (System_Func_TSource__TResult__o *)_9__275_0,
                                                                 (const MethodInfo_1B4FAA4 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___);
    v90 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v89,
                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleServantData_PartAnimationSaveData___);
    *(_QWORD *)(v14 + 216) = v90;
    sub_B0D840((BattleServantConfConponent_o *)(v14 + 216), v90, v91, v92, v93, v94, v95, v96);
  }
  return (BattleServantData_SaveData_o *)v14;
}


System_String_o *__fastcall BattleServantData__getSaveDataToString(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19

  if ( (byte_42127B7 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, data);
    byte_42127B7 = 1;
  }
  v5 = (Il2CppObject *)((__int64 (__fastcall *)(BattleServantData_o *, BattleData_o *, Il2CppMethodPointer))this->klass->vtable._16_getSaveData.method)(
                         this,
                         data,
                         this->klass->vtable._17_setSaveData.methodPtr);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(v5, 0, 0, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleServantData___c__DisplayClass387_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_42127E6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Predicate_BattleSkillInfoData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleSkillInfoData__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass387_0__getSelfSkillInfo_b__0__, v7);
    sub_B0D8A4(&BattleServantData___c__DisplayClass387_0_TypeInfo, v8);
    byte_42127E6 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass387_0_o *)sub_B0D974(
                                                       BattleServantData___c__DisplayClass387_0_TypeInfo,
                                                       *(_QWORD *)&index,
                                                       method);
  BattleServantData___c__DisplayClass387_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_BattleServantData___c__DisplayClass387_0__getSelfSkillInfo_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B0D97C(v10);
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
                                    (System_Predicate_T__o *)v14,
                                    (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
}


System_Int32_array *__fastcall BattleServantData__getServantCommandIndividuality(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Hashtable_o *commandtable; // x21
  struct System_Collections_Hashtable_o *v8; // x20
  __int64 v9; // x9
  BattleServantData_o *v11; // x0
  const MethodInfo *v12; // x1
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_421280B & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, command);
    sub_B0D8A4(&int_TypeInfo, v5);
    this = (BattleServantData_o *)sub_B0D8A4(&ServantCardEntity_TypeInfo, v6);
    byte_421280B = 1;
  }
  if ( !command )
    goto LABEL_13;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  v8 = v4->fields.commandtable;
  v13 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  if ( !v8
    || (this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v8->klass->vtable._29_get_Item.method)(
                                        v8,
                                        this,
                                        v8->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(this);
  }
  v9 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[v9 - 1] == ServantCardEntity_TypeInfo )
  {
    return *(System_Int32_array **)&this->fields.exceedCount.fields.currentCryptoKey;
  }
  v11 = (BattleServantData_o *)sub_B0DC70(this);
  return (System_Int32_array *)BattleServantData__getNPVal(v11, v12);
}


System_String_o *__fastcall BattleServantData__getServantName(BattleServantData_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  ServantEntity_o *svtdata; // x20
  __int64 v5; // x19
  __int64 v6; // x21
  __int64 v7; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_42127D8 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_42127D8 = 1;
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
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v8, 0LL);
    if ( !svtdata )
      sub_B0D97C(v7);
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
  BattleServantData_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  ServantEntity_o *v11; // x20
  const MethodInfo *v12; // x2
  int32_t DispLimitCount; // w0
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w19
  int32_t v17; // w21
  int32_t LimitCountByDispLimit; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = this;
  if ( (byte_42127C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B0D8A4(&ImageLimitCount_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&OptionManager_TypeInfo, v8);
    this = (BattleServantData_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42127C2 = 1;
  }
  deckSvt = v4->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_22;
  if ( !deckSvt->fields.isFollowerSvt )
    return 0LL;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__GetSpoilerSetting(0LL) || Follower__IsNpc(v4->fields.followerType, 0LL) )
    return 0LL;
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        svtId,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_B0D97C(this);
  }
  v11 = (ServantEntity_o *)this;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL) )
    return 0LL;
  DispLimitCount = BattleServantData__getDispLimitCount(v4, 0, v12);
  v15 = *(_QWORD *)&v4->fields.limitcount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v4->fields.limitcount.fields.fakeValue;
  v16 = DispLimitCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v20, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v16, v17, 0LL);
  return ServantEntity__getName(v11, LimitCountByDispLimit, -1, 0LL);
}


System_String_o *__fastcall BattleServantData__getServantShortName(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  System_String_o *result; // x0
  ServantEntity_o *svtdata; // x20
  int32_t battleVoice; // w21
  __int64 DispLimitCount; // x0

  if ( !System_String__IsNullOrEmpty(this->fields.svtOverwriteBattleName, 0LL) )
    return this->fields.svtOverwriteBattleName;
  result = this->fields.svtName;
  if ( !result )
  {
    svtdata = this->fields.svtdata;
    battleVoice = this->fields.battleVoice;
    DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v3);
    if ( !svtdata )
      sub_B0D97C(DispLimitCount);
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
  BattleBuffData_CheckIndividualitiesData_o *v9; // x0
  BattleBuffData_CheckIndividualitiesData_o *v10; // x21
  BattleServantData_o *v11; // x1
  __int64 v12; // x0

  if ( (byte_42127FA & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, method);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    byte_42127FA = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  buffData = this->fields.buffData;
  v6 = IsConstantMasterIndvAddBuffActive;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(BattleBuffData_CheckIndividualitiesData_TypeInfo, v7, v8);
  v10 = v9;
  if ( v6 )
    v11 = this;
  else
    v11 = 0LL;
  BattleBuffData_CheckIndividualitiesData___ctor(v9, v11, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v12);
  return BattleBuffData__getBuffList_30806472(buffData, 85, v10, 1, 0, 0LL, 0LL);
}


SkillLvEntity_o *__fastcall BattleServantData__getSkillFromBuff(
        SkillLvMaster_o *skillLvMst,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  SkillLvMaster_o *v4; // x20
  __int64 v5; // x1
  struct System_Int32_array *vals; // x8
  __int64 v8; // x0

  v4 = skillLvMst;
  if ( (byte_42127FD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, buff);
    skillLvMst = (SkillLvMaster_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42127FD = 1;
  }
  if ( !v4 )
  {
    skillLvMst = (SkillLvMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillLvMst )
      goto LABEL_11;
    skillLvMst = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)skillLvMst,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v4 = skillLvMst;
  }
  if ( !buff )
    goto LABEL_11;
  vals = buff->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( vals->max_length < 2 )
  {
    v8 = sub_B0D9A8(skillLvMst);
    sub_B0D948(v8, 0LL);
  }
  if ( !v4 )
LABEL_11:
    sub_B0D97C(skillLvMst);
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
  BattleBuffData_o *BuffParamList; // x0
  System_Boolean_array *v4; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x8
  BattleBuffData_o *v6; // x21
  unsigned __int64 v7; // x22
  unsigned __int64 v8; // x8
  unsigned int v9; // w10
  __int64 v11; // x0

  if ( (byte_4212853 & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, method);
    byte_4212853 = 1;
  }
  BuffParamList = (BattleBuffData_o *)sub_B0D8BC(bool___TypeInfo, 3LL);
  if ( !this->fields.buffData
    || (v4 = (System_Boolean_array *)BuffParamList,
        (BuffParamList = (BattleBuffData_o *)BattleBuffData__getBuffParamList(this->fields.buffData, 99, this, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(BuffParamList);
  }
  passiveList = BuffParamList->fields.passiveList;
  v6 = BuffParamList;
  if ( (int)passiveList >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)passiveList )
        goto LABEL_20;
      BuffParamList = this->fields.buffData;
      if ( !BuffParamList )
        goto LABEL_21;
      BuffParamList = (BattleBuffData_o *)BattleBuffData__getSkillSealSelectListFromValue(
                                            BuffParamList,
                                            *((_DWORD *)&v6->fields.activeList + v7),
                                            0LL);
      if ( !BuffParamList )
        goto LABEL_21;
      if ( (int)BuffParamList->fields.passiveList >= 1 )
        break;
LABEL_18:
      LODWORD(passiveList) = v6->fields.passiveList;
      if ( (__int64)++v7 >= (int)passiveList )
        return v4;
    }
    v8 = 0LL;
    v9 = (unsigned int)BuffParamList->fields.passiveList;
    while ( v8 < v9 )
    {
      if ( *((_BYTE *)&BuffParamList->fields.activeList + v8) )
      {
        if ( !v4 )
          goto LABEL_21;
        if ( v8 >= v4->max_length )
          break;
        v4->m_Items[v8 + 4] = 1;
      }
      v9 = (unsigned int)BuffParamList->fields.passiveList;
      if ( (__int64)++v8 >= (int)v9 )
        goto LABEL_18;
    }
LABEL_20:
    v11 = sub_B0D9A8(BuffParamList);
    sub_B0D948(v11, 0LL);
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getSkillSealSelectTurn(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  System_Int32_array *SkillSealSelectTurnList; // x0
  __int64 v9; // x0

  if ( (byte_4212854 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&index);
    byte_4212854 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&index,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData || (SkillSealSelectTurnList = BattleBuffData__getSkillSealSelectTurnList(buffData, v6, 0LL)) == 0LL )
    sub_B0D97C(SkillSealSelectTurnList);
  if ( SkillSealSelectTurnList->max_length <= index )
  {
    v9 = sub_B0D9A8(SkillSealSelectTurnList);
    sub_B0D948(v9, 0LL);
  }
  return SkillSealSelectTurnList->m_Items[index + 1];
}


int32_t __fastcall BattleServantData__getSkillSealTurn(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0
  _BOOL4 isTurnBuff; // w0
  BattleBuffData_o *v8; // x20
  int v9; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  BattleBuffData_CheckIndividualitiesData_o *v12; // x21

  if ( (byte_4212852 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4212852 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 40, v5, 0, 0LL),
        v8 = this->fields.buffData,
        v9 = isTurnBuff,
        v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v10,
                                                             v11),
        BattleBuffData_CheckIndividualitiesData___ctor(v12, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v8) )
  {
    sub_B0D97C(v6);
  }
  return BattleBuffData__getMaxTurnBuff(v8, 40, v12, v9 << 31 >> 31, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getStartWaveBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x20
  __int64 v6; // x0

  if ( (byte_42127F1 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_42127F1 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v6);
  return BattleBuffData__getBuffList_30806472(buffData, 54, v5, 1, 0, 0LL, 0LL);
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
    sub_B0D97C(this);
  return svtlimitDispent->fields.stepProbability;
}


System_String_o *__fastcall BattleServantData__getStrParam(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
  return BattleDeckServantData__getSummonNpcId(deckSvt, index, 0LL);
}


int32_t __fastcall BattleServantData__getSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  struct ServantEntity_o *svtdata; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_42127D3 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_42127D3 = 1;
  }
  svtdata = v2->fields.svtdata;
  if ( !svtdata )
    sub_B0D97C(this);
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v7, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getTTurnEndBufflist(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x20
  __int64 v6; // x0

  if ( (byte_42127F0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_42127F0 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v6);
  return BattleBuffData__getBuffList_30806472(buffData, 55, v5, 1, 0, 0LL, 0LL);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x20
  __int64 v6; // x0

  if ( (byte_42127F9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_42127F9 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v6);
  return BattleBuffData__getBuffList_30806472(buffData, 86, v5, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_o *__fastcall BattleServantData__getTdTypeChangeBuffSingle(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  BattleBuffData_BuffData_o *v6; // x19
  __int64 v7; // x0
  int max_length; // w8
  int v9; // w9
  BattleBuffData_BuffData_o *v10; // x10
  __int64 v12; // x0

  if ( (byte_42127FB & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_BuffData_TypeInfo, method);
    byte_42127FB = 1;
  }
  v3 = BattleServantData__getTdTypeChangeBuff(this, method);
  v6 = (BattleBuffData_BuffData_o *)sub_B0D974(BattleBuffData_BuffData_TypeInfo, v4, v5);
  BattleBuffData_BuffData___ctor(v6, 0LL);
  if ( !v6 )
    goto LABEL_16;
  v6->fields.addOrder = -1;
  if ( !v3 )
    goto LABEL_16;
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
      {
        v12 = sub_B0D9A8(v7);
        sub_B0D948(v12, 0LL);
      }
      v10 = v3->m_Items[v9];
      if ( !v10 )
        break;
      ++v9;
      if ( v10->fields.addOrder > v6->fields.addOrder )
        v6 = v10;
      if ( v9 >= max_length )
        goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(v7);
  }
LABEL_12:
  if ( v6->fields.addOrder == -1 )
    return 0LL;
  else
    return v6;
}


// local variable allocation has failed, the output may be wrong!
BattleSkillInfoData_o *__fastcall BattleServantData__getTempSkillInfo(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleServantData___c__DisplayClass388_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_42127E7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Predicate_BattleSkillInfoData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleSkillInfoData__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass388_0__getTempSkillInfo_b__0__, v7);
    sub_B0D8A4(&BattleServantData___c__DisplayClass388_0_TypeInfo, v8);
    byte_42127E7 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass388_0_o *)sub_B0D974(
                                                       BattleServantData___c__DisplayClass388_0_TypeInfo,
                                                       *(_QWORD *)&index,
                                                       method);
  BattleServantData___c__DisplayClass388_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_BattleServantData___c__DisplayClass388_0__getTempSkillInfo_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B0D97C(v10);
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
                                    (System_Predicate_T__o *)v14,
                                    (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
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
    sub_B0D97C(0LL);
  return SvtTDvc->fields.cardId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getTreasureDvcCardId_20714272(
        BattleServantData_o *this,
        bool useTDTypeChangedValue,
        const MethodInfo *method)
{
  BattleServantData_o *v3; // x19
  struct ServantTreasureDvcEntity_o *SvtTDvc; // x8

  v3 = this;
  if ( !useTDTypeChangedValue )
  {
LABEL_10:
    SvtTDvc = v3->fields._SvtTDvc;
    if ( SvtTDvc )
    {
      LODWORD(this) = SvtTDvc->fields.cardId;
      return (int)this;
    }
LABEL_13:
    sub_B0D97C(this);
  }
  this = (BattleServantData_o *)BattleServantData__get_TreasureDevice(this, (const MethodInfo *)useTDTypeChangedValue);
  if ( !this )
    goto LABEL_13;
  if ( !TreasureDvcEntity__IsTDTypeChange((TreasureDvcEntity_o *)this, 0LL) )
    goto LABEL_9;
  this = (BattleServantData_o *)v3->fields.buffData;
  if ( !this )
    goto LABEL_13;
  if ( !BattleBuffData__isTDTypeChange((BattleBuffData_o *)this, v3, 0LL) )
  {
LABEL_9:
    this = (BattleServantData_o *)(unsigned int)v3->fields.selectedTDCardId;
    if ( (_DWORD)this != -1 )
      return (int)this;
    goto LABEL_10;
  }
  this = (BattleServantData_o *)v3->fields.buffData;
  if ( !this )
    goto LABEL_13;
  this = (BattleServantData_o *)BattleBuffData__getTDTypeChangeBuffData((BattleBuffData_o *)this, v3, 0LL);
  if ( !this )
    goto LABEL_13;
  LODWORD(this) = *(&this->fields.uniqueId + 1);
  return (int)this;
}


System_Int32_array *__fastcall BattleServantData__getTreasureDvcHitRaito(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  ServantTreasureDvcEntity_o *SvtTDvc; // x0

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_B0D97C(0LL);
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
  BattleBuffData_BuffData_o *LimitCount; // x0
  int32_t v8; // w21
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
  LimitCount = (BattleBuffData_BuffData_o *)BattleServantData__getLimitCount(this, v5);
  if ( !this->fields.buffData
    || (v8 = (int)LimitCount,
        (LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL)) == 0LL)
    || !TDvc )
  {
    sub_B0D97C(LimitCount);
  }
  return TreasureDvcEntity__getTDTypeChangeIdEachLimit(TDvc, v8, LimitCount->fields.param, 0LL);
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
    sub_B0D97C(0LL);
  return SvtTDvc->fields.motion;
}


System_String_o *__fastcall BattleServantData__getTreasureDvcName(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_String_o **p_name; // x8

  if ( (byte_42127E9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42127E9 = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_B0D97C(0LL);
    p_name = &TreasureDevice->fields.name;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_name;
}


System_String_o *__fastcall BattleServantData__getTreasureDvcRuby(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_String_o **p_ruby; // x8

  if ( (byte_42127EA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42127EA = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_B0D97C(0LL);
    p_ruby = &TreasureDevice->fields.ruby;
  }
  else
  {
    p_ruby = (System_String_o **)&StringLiteral_1/*""*/;
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
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212829 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212829 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getActMag_30819668(buffData, 3, v8, 0LL);
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
  BattleServantData_o *v13; // x24
  BattleBuffData_CheckIndividualitiesData_o *v14; // x22
  __int64 v15; // x0

  if ( (byte_4212835 & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, command);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    byte_4212835 = 1;
  }
  buffData = this->fields.buffData;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
    v13 = opSvt;
  else
    v13 = 0LL;
  v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12);
  BattleBuffData_CheckIndividualitiesData___ctor(v14, this, v13, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v15);
  return BattleBuffData__getActValue_30818596(buffData, 46, missText, v14, 0LL);
}


float __fastcall BattleServantData__getUpDownDamageDropNp(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212842 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212842 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getActMag_30819668(buffData, 25, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantData__getUpDownDef(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        bool pierce,
        const MethodInfo *method)
{
  BattleServantData_o *v8; // x22
  bool v9; // w0
  BattleBuffData_o *buffData; // x23
  bool v11; // w25
  __int64 v12; // x1
  __int64 v13; // x2
  BattleBuffData_CheckIndividualitiesData_o *v14; // x24
  int32_t v15; // w1

  v8 = this;
  if ( (byte_421282A & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_421282A = 1;
  }
  if ( !targetSvt
    || (v9 = BattleServantData__checkPierceDefence(targetSvt, command, v8, (const MethodInfo *)pierce),
        buffData = v8->fields.buffData,
        v11 = v9,
        v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v12,
                                                             v13),
        BattleBuffData_CheckIndividualitiesData___ctor(v14, v8, targetSvt, 0LL, command, 0LL, 0LL),
        !buffData) )
  {
    sub_B0D97C(this);
  }
  if ( v11 || pierce )
    v15 = 5;
  else
    v15 = 4;
  return BattleBuffData__getActMag_30819668(buffData, v15, v14, 0LL);
}


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
  __int64 v11; // x0

  v7 = command;
  if ( (byte_4212841 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212841 = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    v7 = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, v7, v7, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v11);
  return BattleBuffData__getActMag_30819668(buffData, 24, v10, 0LL);
}


float __fastcall BattleServantData__getUpDownGiveHeal(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_4212838 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_4212838 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return BattleBuffData__getActMag_30819668(buffData, 56, v6, 0LL);
}


float __fastcall BattleServantData__getUpDownGiveNp(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212844 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212844 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getActMag_30819668(buffData, 67, v8, 0LL);
}


int32_t __fastcall BattleServantData__getUpDownGutsHp(
        BattleServantData_o *this,
        int32_t *digit,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4212839 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, digit);
    byte_4212839 = 1;
  }
  *digit = 1000;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      digit,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return BattleBuffData__getActValue_30818560(buffData, 70, v6, 0LL);
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
  BattleBuffData_CheckIndividualitiesData_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4212837 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, digit);
    byte_4212837 = 1;
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
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v9,
                                                       v10);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, 0LL, 0LL, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B0D97C(v12);
  return BattleBuffData__getActValue_30818560(buffData, 34, v11, 0LL);
}


float __fastcall BattleServantData__getUpDownSpecialDef(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_421282B & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_421282B = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getActMag_30819668(buffData, 6, v8, 0LL);
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
  BattleBuffData_CheckIndividualitiesData_o *v13; // x24
  __int64 v14; // x0

  if ( (byte_421282E & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, command);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    byte_421282E = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(11, targetSvt, 0LL);
  buffData = this->fields.buffData;
  v10 = ActInfo;
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12);
  BattleBuffData_CheckIndividualitiesData___ctor(v13, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B0D97C(v14);
  return BattleBuffData__getActMag_30819608(buffData, v10, v13, 0LL);
}


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
  __int64 v11; // x0

  v7 = command;
  if ( (byte_4212833 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212833 = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    v7 = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, v7, v7, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v11);
  return BattleBuffData__getActMag_30819668(buffData, 28, v10, 0LL);
}


float __fastcall BattleServantData__getUpdownNpAtk(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212831 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212831 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getActMag_30819668(buffData, 12, v8, 0LL);
}


float __fastcall BattleServantData__getUpdownPower(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v7; // x20
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v9; // x4
  int v10; // w22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t ActValue_30818560; // w23
  const MethodInfo *v18; // x4
  System_Int32_array **BuffIndividualities; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  BattleBuffData_o *v26; // x8

  if ( (byte_421282C & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_421282C = 1;
  }
  v7 = sub_B0D974(BattleBuffData_CheckIndividualitiesData_TypeInfo, command, targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(
    (BattleBuffData_CheckIndividualitiesData_o *)v7,
    this,
    targetSvt,
    command,
    0LL,
    0LL,
    0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_10;
  buffData = (BattleBuffData_o *)BattleBuffData__getActValue_30818560(
                                   buffData,
                                   7,
                                   (BattleBuffData_CheckIndividualitiesData_o *)v7,
                                   0LL);
  if ( !targetSvt )
    goto LABEL_10;
  v10 = (int)buffData;
  buffData = (BattleBuffData_o *)BattleServantData__getBuffIndividualities(targetSvt, 0, 0, 0, v9);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 56) = buffData;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 56), (System_Int32_array **)buffData, v11, v12, v13, v14, v15, v16);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActValue_30818560 = BattleBuffData__getActValue_30818560(
                              buffData,
                              8,
                              (BattleBuffData_CheckIndividualitiesData_o *)v7,
                              0LL),
        BuffIndividualities = (System_Int32_array **)BattleServantData__getBuffIndividualities(targetSvt, 1, 0, 0, v18),
        *(_QWORD *)(v7 + 56) = BuffIndividualities,
        sub_B0D840((BattleServantConfConponent_o *)(v7 + 56), BuffIndividualities, v20, v21, v22, v23, v24, v25),
        (buffData = this->fields.buffData) == 0LL)
    || (buffData = (BattleBuffData_o *)BattleBuffData__getActValue_30818560(
                                         buffData,
                                         9,
                                         (BattleBuffData_CheckIndividualitiesData_o *)v7,
                                         0LL),
        (v26 = this->fields.buffData) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(buffData);
  }
  return (float)(ActValue_30818560
               + v10
               + (int)buffData
               + BattleBuffData__getActValue_30818560(v26, 78, (BattleBuffData_CheckIndividualitiesData_o *)v7, 0LL))
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
  __int64 v11; // x21
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v13; // x4
  MethodInfo *v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1

  if ( (byte_421282D & 1) == 0 )
  {
    sub_B0D8A4(&BuffList_TypeInfo, command);
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    byte_421282D = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v11 = sub_B0D974(BattleBuffData_CheckIndividualitiesData_TypeInfo, v9, v10);
  BattleBuffData_CheckIndividualitiesData___ctor(
    (BattleBuffData_CheckIndividualitiesData_o *)v11,
    this,
    targetSvt,
    command,
    0LL,
    0LL,
    0LL);
  if ( !targetSvt )
    goto LABEL_13;
  BuffIndividualities = BattleServantData__getBuffIndividualities(targetSvt, 0, 0, 0, v13);
  v20 = (System_Int32_array **)BuffIndividualities;
  if ( IsConstantMasterIndvAddBuffActive )
  {
    BuffIndividualities = BattleServantData__getIndividualities_20798680(targetSvt, BuffIndividualities, v14);
    if ( !v11 )
      goto LABEL_13;
    v20 = (System_Int32_array **)BuffIndividualities;
  }
  else if ( !v11 )
  {
    goto LABEL_13;
  }
  *(_QWORD *)(v11 + 56) = v20;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 56), v20, (System_String_array **)v14, v15, v16, v17, v18, v19);
  BuffIndividualities = (System_Int32_array *)this->fields.buffData;
  if ( !BuffIndividualities )
LABEL_13:
    sub_B0D97C(BuffIndividualities);
  return (float)BattleBuffData__getActValue_30818560(
                  (BattleBuffData_o *)BuffIndividualities,
                  79,
                  (BattleBuffData_CheckIndividualitiesData_o *)v11,
                  0LL)
       / 1000.0;
}


float __fastcall BattleServantData__getUpdownSelfDamage(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4212832 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4212832 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v9);
  return BattleBuffData__getActMag_30819668(buffData, 10, v8, 0LL);
}


int64_t __fastcall BattleServantData__getUserSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_42127D2 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_42127D2 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v5, 0LL);
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
    sub_B0D97C(0LL);
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
  svtlimitaddent = (ServantLimitAddEntity_o *)ServantLimitAddEntity__GetWeaponGroup(svtlimitaddent, 0LL);
  if ( !this->fields.svtlimitaddent )
    goto LABEL_10;
  WeaponEfect = (int)svtlimitaddent;
  svtlimitaddent = (ServantLimitAddEntity_o *)ServantLimitAddEntity__IsValidWeaponGroup(
                                                this->fields.svtlimitaddent,
                                                (int32_t)svtlimitaddent,
                                                0LL);
  if ( ((unsigned __int8)svtlimitaddent & 1) == 0 )
  {
LABEL_7:
    svtlimitDispent = this->fields.svtlimitDispent;
    if ( svtlimitDispent )
      return svtlimitDispent->fields.weaponGroup;
LABEL_10:
    sub_B0D97C(svtlimitaddent);
  }
  return WeaponEfect;
}


System_Int32_array *__fastcall BattleServantData__getWeaponIndividualities(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  struct ServantEntity_o *svtdata; // x8
  __int64 v5; // x0

  if ( (byte_4212860 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_4212860 = 1;
  }
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  svtdata = this->fields.svtdata;
  if ( !svtdata || !result )
    sub_B0D97C(result);
  if ( !result->max_length )
  {
    v5 = sub_B0D9A8(result);
    sub_B0D948(v5, 0LL);
  }
  result->m_Items[1] = svtdata->fields.attackAttri;
  return result;
}


int32_t __fastcall BattleServantData__getWeaponScale(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B0D97C(this);
  return svtlimitDispent->fields.weaponScale;
}


AiStateManager_o *__fastcall BattleServantData__get_AiStateManager(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AiStateManager_o *aiStateManager; // x20
  AiState_o *aiState; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42127AA & 1) == 0 )
  {
    sub_B0D8A4(&AiStateManager_TypeInfo, method);
    byte_42127AA = 1;
  }
  aiStateManager = this->fields._aiStateManager;
  if ( !aiStateManager )
  {
    aiState = this->fields.aiState;
    aiStateManager = (AiStateManager_o *)sub_B0D974(AiStateManager_TypeInfo, method, v2);
    AiStateManager___ctor(aiStateManager, aiState, 0LL);
    this->fields._aiStateManager = aiStateManager;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._aiStateManager,
      (System_Int32_array **)aiStateManager,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return aiStateManager;
}


int32_t __fastcall BattleServantData__get_BattleSize(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B0D97C(this);
  return svtdata->fields.battleSize;
}


BattleBuffData_o *__fastcall BattleServantData__get_BuffData(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  BattleServantConfConponent_o *p_buffData; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42127B0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_TypeInfo, method);
    byte_42127B0 = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
  {
    p_buffData = (BattleServantConfConponent_o *)&this->fields.buffData;
    buffData = (BattleBuffData_o *)sub_B0D974(BattleBuffData_TypeInfo, method, v2);
    BattleBuffData___ctor(buffData, 0LL);
    p_buffData->klass = (BattleServantConfConponent_c *)buffData;
    sub_B0D840(p_buffData, (System_Int32_array **)buffData, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_421285A & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantData_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_3452/*"CRITICAL_INDIVIDUALITY"*/, v2);
    byte_421285A = 1;
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
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3452/*"CRITICAL_INDIVIDUALITY"*/, 0LL);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  int32_t *p_param; // x8

  if ( (byte_42127E4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_42127E4 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData
    && (v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            method,
                                                            v2),
        BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        (FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 109, v5, 1, 0LL)) != 0LL) )
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
    sub_B0D97C(0LL);
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


BattleServantSnapShotGroupDefault_o *__fastcall BattleServantData__get_SnapShotDamagedOnLogicDead(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
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
  BattleBuffData_BuffData_o *LimitCount; // x0
  int32_t v9; // w21
  int32_t v10; // w0
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w19
  int32_t v14; // w0
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v16; // x0
  __int64 v17; // x20
  __int64 v18; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42127AC & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_42127AC = 1;
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
          LimitCount = (BattleBuffData_BuffData_o *)BattleServantData__getLimitCount(this, v7);
          if ( !this->fields.buffData
            || (v9 = (int)LimitCount,
                (LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL)) == 0LL)
            || !TreasureDevice )
          {
            sub_B0D97C(LimitCount);
          }
          v10 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(TreasureDevice, v9, LimitCount->fields.param, 0LL);
          v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          v13 = v10;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v20.fields.currentCryptoKey = v12;
          *(_QWORD *)&v20.fields.fakeValue = v11;
          v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v20, 0LL);
          selectedTDId = v13;
          return ServantTreasureDvcMaster__getEntityFromIDID(v14, selectedTDId, 0LL);
        }
      }
    }
    v16 = this->fields.TDvc;
    if ( v16 && TreasureDvcEntity__IsTDTypeChange(v16, 0LL) && this->fields.selectedTDId != -1 )
    {
      v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v21.fields.currentCryptoKey = v18;
      *(_QWORD *)&v21.fields.fakeValue = v17;
      v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v21, 0LL);
      selectedTDId = this->fields.selectedTDId;
      return ServantTreasureDvcMaster__getEntityFromIDID(v14, selectedTDId, 0LL);
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
  void *LimitCount; // x0
  int32_t v9; // w21
  int32_t v10; // w20
  const MethodInfo *v11; // x1
  int32_t treasuredvcLevel; // w2
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v14; // x0
  const MethodInfo *v15; // x1

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
          LimitCount = (void *)BattleServantData__getLimitCount(this, v7);
          if ( this->fields.buffData )
          {
            v9 = (int)LimitCount;
            LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL);
            if ( LimitCount )
            {
              if ( TreasureDevice )
              {
                v10 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(
                        TreasureDevice,
                        v9,
                        *((_DWORD *)LimitCount + 7),
                        0LL);
                LimitCount = BattleServantData__get_TdLvDataMasterBase(this, v11);
                if ( LimitCount )
                {
                  treasuredvcLevel = this->fields.treasuredvcLevel;
                  selectedTDId = v10;
                  return TreasureDvcLvMaster__GetEntity(
                           (TreasureDvcLvMaster_o *)LimitCount,
                           selectedTDId,
                           treasuredvcLevel,
                           0LL);
                }
              }
            }
          }
          goto LABEL_17;
        }
      }
    }
    v14 = this->fields.TDvc;
    if ( v14 && TreasureDvcEntity__IsTDTypeChange(v14, 0LL) && this->fields.selectedTDId != -1 )
    {
      LimitCount = BattleServantData__get_TdLvDataMasterBase(this, v15);
      if ( LimitCount )
      {
        treasuredvcLevel = this->fields.treasuredvcLevel;
        selectedTDId = this->fields.selectedTDId;
        return TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)LimitCount, selectedTDId, treasuredvcLevel, 0LL);
      }
LABEL_17:
      sub_B0D97C(LimitCount);
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

  if ( (byte_42127AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_42127AE = 1;
  }
  result = this->fields.tdDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    p_tdDataMasterBase = (BattleServantConfConponent_o *)&this->fields.tdDataMasterBase;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    p_tdDataMasterBase->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B0D840(p_tdDataMasterBase, MasterData_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_42127AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_42127AF = 1;
  }
  result = this->fields.tdLvDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    p_tdLvDataMasterBase = (BattleServantConfConponent_o *)&this->fields.tdLvDataMasterBase;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    p_tdLvDataMasterBase->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B0D840(p_tdLvDataMasterBase, MasterData_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
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
  void *LimitCount; // x0
  int32_t v8; // w21
  int32_t v9; // w20
  const MethodInfo *v10; // x1
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v12; // x0

  if ( (byte_42127AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, method);
    byte_42127AD = 1;
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
          LimitCount = (void *)BattleServantData__getLimitCount(this, v5);
          if ( this->fields.buffData )
          {
            v8 = (int)LimitCount;
            LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL);
            if ( LimitCount )
            {
              if ( v6 )
              {
                v9 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(v6, v8, *((_DWORD *)LimitCount + 7), 0LL);
                LimitCount = BattleServantData__get_TdDataMasterBase(this, v10);
                if ( LimitCount )
                {
                  selectedTDId = v9;
                  return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)LimitCount,
                                                  selectedTDId,
                                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
                }
              }
            }
          }
LABEL_18:
          sub_B0D97C(LimitCount);
        }
      }
    }
    v12 = this->fields.TDvc;
    if ( v12 )
    {
      if ( TreasureDvcEntity__IsTDTypeChange(v12, 0LL) )
      {
        selectedTDId = this->fields.selectedTDId;
        if ( selectedTDId != -1 )
        {
          LimitCount = this->fields.tdDataMasterBase;
          if ( LimitCount )
            return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)LimitCount,
                                            selectedTDId,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
    sub_B0D97C(0LL);
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
  int32_t MaxHp; // w21
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v17; // x23
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  bool isTurnBuff; // w8
  bool result; // w0
  int v21; // w22
  int v22; // w0
  int v23; // w8
  Il2CppObject *current; // x20
  _BOOL8 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212815 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&heal);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_17327/*"changeHp"*/, v12);
    byte_4212815 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  MaxHp = BattleServantData__getMaxHp(this, *(const MethodInfo **)&heal);
  if ( !isForce )
  {
    buffData = this->fields.buffData;
    v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v13,
                                                         v14);
    BattleBuffData_CheckIndividualitiesData___ctor(v17, this, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_20;
    isTurnBuff = BattleBuffData__isTurnBuff(buffData, 42, v17, 0, 0LL);
    result = 0;
    if ( isTurnBuff )
      return result;
  }
  v21 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  v22 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)(v22 + heal),
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
  v23 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  paramobjelist = this->fields.paramobjelist;
  this->fields.accumulationDamage = (this->fields.accumulationDamage + v21 - v23) & ~((this->fields.accumulationDamage
                                                                                     + v21
                                                                                     - v23) >> 31);
  if ( !paramobjelist )
LABEL_20:
    sub_B0D97C(paramobjelist);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v25 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v25 )
    {
      if ( !current )
        sub_B0D97C(v25);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17327/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x20
  __int64 v6; // x0

  if ( (byte_421280E & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_421280E = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v6);
  return !BattleBuffData__isTurnBuff(buffData, 39, v5, 0, 0LL);
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
  _BOOL8 isAlive; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x5
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  System_Int32_array *Individualities; // x0
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-28h] BYREF

  resValues = 0LL;
  isAlive = BattleServantData__isAlive(this, 0, (const MethodInfo *)indiv);
  if ( !isAlive )
  {
    isAlive = BattleServantData__isGuts(this, v10);
    if ( !isAlive )
    {
      if ( !info )
        goto LABEL_16;
      if ( !info->fields.isRevival )
        return 0;
    }
  }
  if ( !aiBaseEnt )
    goto LABEL_16;
  isAlive = AiBaseEntity__TryGetMultiIndividuality(aiBaseEnt, &resValues, 0LL);
  if ( isAlive )
  {
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             this,
                                             0LL,
                                             0,
                                             0,
                                             0,
                                             v13);
    return Individuality__CheckSignedMultiIndividuality(ConcatServantAndBuffIndividualityies, resValues, 0LL);
  }
  if ( !info )
LABEL_16:
    sub_B0D97C(isAlive);
  if ( info->fields.isIndiv )
  {
    Individualities = BattleServantData__getIndividualities(this, 0LL, v12);
    return Individuality__CheckIndividualities_26827228(Individualities, indiv, 0LL);
  }
  else
  {
    return (info->fields.paramater & 0xFFFFFFFE) != 6 || BattleServantData__get_TreasureDevice(this, v11) != 0LL;
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

  if ( (byte_421284E & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_421284E = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, command, 0LL, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B0D97C(0LL);
  if ( isAct )
    ActBuff = BattleBuffData__getActBuff(buffData, 20, v11, &value, 0LL);
  else
    ActBuff = BattleBuffData__getTestActBuff(buffData, 20, v11, &value, 0LL);
  result = ActBuff;
  *val = (float)value / 1000.0;
  return result;
}


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

  if ( (byte_421284F & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_421284F = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B0D97C(0LL);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_421280F & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, commandType);
    byte_421280F = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      commandType,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, commandType, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return !BattleBuffData__isTurnBuff(buffData, 77, v6, 0, 0LL);
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
    sub_B0D97C(0LL);
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
  DataManager_o *Instance; // x0
  signed int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x21
  il2cpp_array_size_t v10; // w22
  Il2CppClass **v11; // x23
  char *v12; // x23
  DataManager_o *v13; // t1
  int32_t v14; // w8
  int32_t AppearanceId; // w0
  __int64 v17; // x0

  if ( (byte_4212874 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BuffMaster___, list);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4212874 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !list )
    goto LABEL_21;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        goto LABEL_22;
      v11 = &list->obj.klass + (int)v10;
      v13 = (DataManager_o *)v11[4];
      v12 = (char *)(v11 + 4);
      Instance = v13;
      if ( !v13 )
        goto LABEL_21;
      Instance = (DataManager_o *)BattleBuffData_BuffData__checkState((BattleBuffData_BuffData_o *)Instance, 256, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      max_length = list->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_11;
    }
    if ( v10 >= list->max_length )
    {
LABEL_22:
      v17 = sub_B0D9A8(Instance);
      sub_B0D948(v17, 0LL);
    }
    if ( *(_QWORD *)v12 )
    {
      if ( v9 )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v9,
                                      *(_DWORD *)(*(_QWORD *)v12 + 16LL),
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( Instance )
        {
          AppearanceId = BuffEntity__getAppearanceId((BuffEntity_o *)Instance, 0LL);
          if ( AppearanceId == this->fields.appearanceId )
            return 0;
          this->fields.tmpAppearanceId = AppearanceId;
          return 1;
        }
      }
    }
LABEL_21:
    sub_B0D97C(Instance);
  }
LABEL_11:
  v14 = this->fields.appearanceId;
  if ( v14 >= 1 )
    this->fields.tmpAppearanceId = 0;
  return v14 > 0;
}


bool __fastcall BattleServantData__isChangeServant(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *changeSvtList; // x8

  changeSvtList = this->fields.changeSvtList;
  if ( !changeSvtList )
    sub_B0D97C(this);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4212843 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, checkCount);
    byte_4212843 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      checkCount,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return !BattleBuffData__isTurnBuff(buffData, 75, v6, checkCount, 0LL);
}


bool __fastcall BattleServantData__isGuts(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_array *v4; // x0
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-8h] BYREF

  buff = 0LL;
  if ( this->fields.isDeadAnime )
  {
    return 0;
  }
  else
  {
    buffData = this->fields.buffData;
    v4 = BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(this, method);
    if ( !buffData )
      sub_B0D97C(v4);
    return BattleBuffData__isGuts(buffData, &buff, v4, 0LL);
  }
}


bool __fastcall BattleServantData__isGuts_20784040(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o **buff,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x1
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_array *v13; // x0

  *buff = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)buff, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( this->fields.isDeadAnime )
    return 0;
  buffData = this->fields.buffData;
  v13 = BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(this, v10);
  if ( !buffData )
    sub_B0D97C(v13);
  return BattleBuffData__isGuts(buffData, buff, v13, 0LL);
}


bool __fastcall BattleServantData__isHeroine(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  return ServantEntity__IsNameTrue(svtdata, 0LL);
}


bool __fastcall BattleServantData__isNobleAction(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t invokeAct; // [xsp+Ch] [xbp-4h] BYREF

  invokeAct = 0;
  return BattleServantData__isNobleAction_20788748(this, &invokeAct, v2);
}


bool __fastcall BattleServantData__isNobleAction_20788748(
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
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4212811 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4212811 = 1;
  }
  buffData = this->fields.buffData;
  TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, method);
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(BattleBuffData_CheckIndividualitiesData_TypeInfo, v5, v6);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, TreasureDvcCommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v8);
  return BattleBuffData__isTurnBuff(buffData, 82, v7, 0, 0LL);
}


bool __fastcall BattleServantData__isNobleSeal(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4212810 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4212810 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v6);
  return BattleBuffData__isTurnBuff(buffData, 41, v5, 0, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(TDvcLv);
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
    sub_B0D97C(this);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_4212805 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvtIndiv);
    byte_4212805 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvtIndiv,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor_22771868(v6, this, 0LL, 0LL, opSvtIndiv, 0LL, 0LL);
  if ( !buffData )
    sub_B0D97C(v7);
  return BattleBuffData__checkActBuff_30823572(buffData, 45, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__isUseSelfSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleServantData___c__DisplayClass386_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20
  peRenderTexture_ChangeLayerObject_o *v15; // x0

  if ( (byte_42127E5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Predicate_BattleSkillInfoData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleSkillInfoData__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass386_0__isUseSelfSkill_b__0__, v7);
    sub_B0D8A4(&BattleServantData___c__DisplayClass386_0_TypeInfo, v8);
    byte_42127E5 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass386_0_o *)sub_B0D974(
                                                       BattleServantData___c__DisplayClass386_0_TypeInfo,
                                                       *(_QWORD *)&index,
                                                       method);
  BattleServantData___c__DisplayClass386_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_BattleServantData___c__DisplayClass386_0__isUseSelfSkill_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B0D97C(v10);
  }
  v15 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
  if ( v15 )
  {
    if ( BYTE4(v15->fields.renderer) )
      LOBYTE(v15) = 0;
    else
      LOBYTE(v15) = *((_BYTE *)&v15->fields.prevLayer + 4) != 0;
  }
  return (char)v15;
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
    sub_B0D97C(0LL);
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

  if ( (byte_4212861 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__, method);
    byte_4212861 = 1;
  }
  actionHistory = this->fields.actionHistory;
  if ( !actionHistory )
    sub_B0D97C(0LL);
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___Clear(
    (System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *)actionHistory,
    (const MethodInfo_2D1D094 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__);
}


void __fastcall BattleServantData__resetParamObject(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0

  if ( (byte_4212801 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    byte_4212801 = 1;
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)paramobjelist,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  _BOOL8 v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212816 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, funcName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4212816 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v11 )
    {
      if ( !current )
        sub_B0D97C(v11);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        funcName,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4212862 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantActionHistory_TypeInfo, *(_QWORD *)&actUniqueId);
    sub_B0D8A4(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__, v11);
    byte_4212862 = 1;
  }
  v12 = sub_B0D974(BattleServantActionHistory_TypeInfo, *(_QWORD *)&actUniqueId, *(_QWORD *)&actType);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = actType;
  *(_DWORD *)(v12 + 20) = actUniqueId;
  *(_DWORD *)(v12 + 24) = wavecount;
  *(_BYTE *)(v12 + 28) = isOpponent;
  actionHistory = this->fields.actionHistory;
  if ( !actionHistory )
    sub_B0D97C(0LL);
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___AddLast(
    (System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *)actionHistory,
    (BattleServantSnapShotGroupBase_SnapShot_o *)v12,
    (const MethodInfo_2D1CF50 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__);
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
  BattleServantData_o *v8; // x23
  BattleUserServantData_o *UserServantFromID; // x0
  const MethodInfo *v14; // [xsp+8h] [xbp-38h]

  if ( !battleEnt || !inDeckSvt || (v8 = this, (this = (BattleServantData_o *)battleEnt->fields.battleInfo) == 0LL) )
    sub_B0D97C(this);
  UserServantFromID = BattleInfoData__getUserServantFromID((BattleInfoData_o *)this, inDeckSvt->fields.userSvtId, 0LL);
  BattleServantData__setBaseServantData_20743196(
    v8,
    inDeckSvt,
    UserServantFromID,
    battleEnt->fields.battleInfo,
    battleEnt->fields.userCommandCode,
    battleEnt->fields.eventId,
    infollowerType,
    commandAssistDataList,
    isContinue,
    v14);
}


void __fastcall BattleServantData__setBaseServantData_20743196(
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
  __int64 Instance; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  BaseBattleServantEvent_o *ServantEvent; // x0
  struct BattleDeckServantData_o *v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x23
  __int128 v84; // q1
  int32_t exceedCount; // w23
  const MethodInfo *v86; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // kr00_16
  struct BattleDeckServantData_o *v88; // x8
  int32_t BattleSvtId; // w22
  System_Int32_array **v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  struct BattleDeckServantData_o *v103; // x8
  struct System_String_o *name; // x1
  int32_t v105; // w0
  const MethodInfo *v106; // x2
  struct System_String_o *ServantOverwriteName; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  struct BattleDeckServantData_o *v120; // x8
  struct DropInfo_array *dropInfos; // x1
  struct System_Int32_array *individuality; // x1
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  struct ServantEntity_o *v130; // x0
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  struct ServantEntity_o *svtdata; // x8
  ServantLimitMaster_o *v138; // x22
  const MethodInfo *v139; // x1
  int32_t SvtId; // w24
  struct ServantLimitEntity_o *v141; // x0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  struct ServantEntity_o *v148; // x8
  ServantLimitAddMaster_o *v149; // x23
  __int64 v150; // x24
  __int64 v151; // x26
  int32_t v152; // w26
  const MethodInfo *v153; // x2
  const MethodInfo *v154; // x1
  int32_t v155; // w26
  const MethodInfo *v156; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v158; // x1
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v161; // w1
  ServantLimitMaster_o *v162; // x0
  struct ServantLimitEntity_o *v163; // x0
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  BattleUserServantData_o *UserServantFromID; // x28
  __int64 v171; // x23
  struct BattleUserServantData_array *v172; // x0
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  struct BattleUserServantData_array *equipList; // x20
  il2cpp_array_size_t *p_max_length; // x24
  unsigned __int64 v187; // x21
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  System_Int32_array **v194; // x26
  Il2CppClass **v195; // x0
  Il2CppClass **v196; // x8
  __int64 *v197; // x8
  Il2CppClass *v198; // x9
  Il2CppClass *v199; // t1
  __int64 v200; // x8
  int32_t maxhp; // w10
  int32_t equiphp; // w11
  struct System_Int64_array **p_userCommandCodeIds; // x23
  struct System_Int64_array *userCommandCodeIds; // x1
  __int64 v205; // x1
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  System_Int32_array **v212; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v213; // x26
  struct System_Collections_Generic_List_CommandCodeInfo__o **p_commandCodeList_k__BackingField; // x28
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  __int64 v221; // x1
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  unsigned __int64 v228; // x20
  __int64 v229; // x26
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  System_Int32_array **v236; // x1
  System_Int64_array *v237; // x24
  __int64 v238; // x1
  __int64 v239; // x2
  System_Func_long__bool__o *v240; // x21
  struct System_Int32_array **p_commandAssistIds; // x25
  struct System_Int32_array *v242; // x0
  System_String_array **v243; // x2
  System_String_array **v244; // x3
  System_Boolean_array **v245; // x4
  System_Int32_array **v246; // x5
  System_Int32_array *v247; // x6
  System_Int32_array *v248; // x7
  __int64 v249; // x1
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v250; // x21
  struct System_Int32_array *v251; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v252; // x23
  int v253; // w20
  unsigned __int64 v254; // x21
  _BOOL8 v255; // x0
  struct System_Int32_array *v256; // x9
  __int64 v257; // x0
  int v258; // w8
  struct System_Int32_array *commandCardParam; // x1
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  struct System_Int32_array *v266; // x1
  System_Int32_array **BattleSkillIdList; // x0
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  System_Int32_array **v274; // x0
  System_String_array **v275; // x2
  System_String_array **v276; // x3
  System_Boolean_array **v277; // x4
  System_Int32_array **v278; // x5
  System_Int32_array *v279; // x6
  System_Int32_array *v280; // x7
  __int64 v281; // x1
  __int64 v282; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v283; // x23
  __int64 v284; // x1
  __int64 v285; // x2
  System_Collections_Generic_IEnumerable_T__o *skillInfoList; // x21
  __int64 v287; // x1
  __int64 v288; // x2
  __int64 v289; // x24
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  __int64 v296; // x1
  __int64 v297; // x2
  __int64 v298; // x9
  int v299; // w8
  __int64 v300; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v301; // x25
  __int64 v302; // x9
  __int64 v303; // x8
  __int64 v304; // x2
  __int64 v305; // x9
  struct System_Int32_array *classPassive; // x20
  __int64 v307; // x8
  unsigned __int64 v308; // x23
  BattleUserServantData_o *v309; // x20
  __int64 v310; // x8
  __int64 v311; // x24
  unsigned __int64 v312; // x20
  const MethodInfo *v313; // x3
  __int64 v314; // x8
  __int64 v315; // x24
  unsigned __int64 v316; // x20
  unsigned __int64 v317; // x25
  struct BattleUserServantData_array *v318; // x8
  unsigned __int8 v319; // w22
  unsigned __int64 v320; // x20
  int v321; // w23
  unsigned __int64 max_length; // x9
  struct BattleUserServantData_array *v323; // x8
  __int64 v324; // x24
  __int64 v325; // x8
  __int64 v326; // x25
  unsigned __int64 v327; // x26
  int v328; // w21
  int v329; // w27
  __int64 v330; // x23
  struct System_Collections_Generic_List_CommandCodeInfo__o *v331; // x23
  CommandCodeSkillMaster_o *v332; // x22
  unsigned __int64 v333; // x20
  int v334; // w21
  struct System_Collections_Generic_List_CommandCodeInfo__o *v335; // x23
  CommandCodeInfo_o *v336; // x8
  int v337; // w8
  __int64 v338; // x23
  int i; // w25
  __int64 v340; // x8
  struct System_Collections_Generic_List_CommandCodeInfo__o *v341; // x26
  int32_t v342; // w24
  CommandCodeInfo_o *v343; // x8
  const MethodInfo *v344; // x3
  int32_t Value; // w0
  int32_t nplineCount; // w8
  int v347; // w8
  System_Collections_Generic_IEnumerable_TSource__o *TDErrorVoiceSeArray; // x0
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  struct System_Collections_Generic_List_string__o *v355; // x1
  __int64 v356; // x1
  __int64 v357; // x2
  System_Collections_Hashtable_o *v358; // x21
  System_String_array **v359; // x2
  System_String_array **v360; // x3
  System_Boolean_array **v361; // x4
  System_Int32_array **v362; // x5
  System_Int32_array *v363; // x6
  System_Int32_array *v364; // x7
  ServantCardMaster_o *v365; // x23
  __int64 v366; // x24
  unsigned __int64 v367; // x20
  __int64 v368; // x25
  __int64 v369; // x26
  struct System_Collections_Hashtable_o *commandtable; // x25
  __int64 v371; // x0
  __int64 v372; // x27
  __int64 v373; // x28
  __int64 v374; // x26
  BattleDeckServantData_o *v375; // x8
  BattleUserServantData_o *v376; // x20
  int32_t KillType; // w0
  BattleDeckServantData_o *v378; // x8
  bool isRaid; // w0
  int32_t RaidId; // w0
  struct System_String_o *StartRaidState; // x0
  System_String_array **v382; // x2
  System_String_array **v383; // x3
  System_Boolean_array **v384; // x4
  System_Int32_array **v385; // x5
  System_Int32_array *v386; // x6
  System_Int32_array *v387; // x7
  BattleDeckServantData_o *v388; // x8
  BattleDeckServantData_o *v389; // x8
  bool isSuperBoss; // w0
  int32_t SuperBossId; // w0
  bool isSendDamageForSuperBossId; // w0
  BattleDeckServantData_o *v393; // x21
  __int64 v394; // x22
  __int64 v395; // x23
  __int64 v396; // x21
  __int64 v397; // x22
  __int64 v398; // x21
  __int64 v399; // x22
  int32_t v400; // w0
  const MethodInfo *v401; // x2
  struct System_String_o *BattleServantOverwriteName; // x0
  System_String_array **v403; // x2
  System_String_array **v404; // x3
  System_Boolean_array **v405; // x4
  System_Int32_array **v406; // x5
  System_Int32_array *v407; // x6
  System_Int32_array *v408; // x7
  struct BattleDeckServantData_o *v409; // x8
  int32_t v410; // w21
  ServantChangeMaster_o *v411; // x22
  ServantChangeEntity_o *v412; // x0
  UserServantCollectionMaster_o *v413; // x22
  __int64 v414; // x21
  __int64 v415; // x22
  __int64 v416; // x23
  System_String_array **v417; // x2
  System_String_array **v418; // x3
  System_Boolean_array **v419; // x4
  System_Int32_array **v420; // x5
  System_Int32_array *v421; // x6
  System_Int32_array *v422; // x7
  struct BattleDeckServantData_o *v423; // x8
  int32_t v424; // w22
  int32_t v425; // w23
  WarQuestSelectionMaster_o *v426; // x0
  __int64 v427; // x23
  __int64 v428; // x24
  UserNpcSvtRecordMaster_o *v429; // x22
  System_Collections_Generic_IEnumerable_TSource__o *TdPlayed; // x0
  struct System_Int32_array *v431; // x1
  struct System_Int32_array *v432; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v433; // x0
  struct System_Int32_array **p_tdplayed; // x0
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  System_String_array **v436; // x2
  System_String_array **v437; // x3
  System_Boolean_array **v438; // x4
  System_Int32_array **v439; // x5
  System_Int32_array *v440; // x6
  System_Int32_array *v441; // x7
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  System_String_array **v443; // x2
  System_String_array **v444; // x3
  System_Boolean_array **v445; // x4
  System_Int32_array **v446; // x5
  System_Int32_array *v447; // x6
  System_Int32_array *v448; // x7
  struct System_Int32_array *classBoardSquareIds; // x1
  System_String_array **v450; // x2
  System_String_array **v451; // x3
  System_Boolean_array **v452; // x4
  System_Int32_array **v453; // x5
  System_Int32_array *v454; // x6
  System_Int32_array *v455; // x7
  const MethodInfo *v456; // x1
  __int64 v457; // x0
  const MethodInfo *v458; // [xsp+0h] [xbp-140h]
  int32_t eventIda; // [xsp+1Ch] [xbp-124h]
  BattleUserServantData_o *v461; // [xsp+28h] [xbp-118h]
  struct BattleDeckServantData_o **p_deckSvt; // [xsp+38h] [xbp-108h]
  BaseBattleServantEvent_o *v464; // [xsp+40h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtdata; // [xsp+48h] [xbp-F8h]
  BattleUserServantData_o *v467; // [xsp+58h] [xbp-E8h]
  Il2CppObject *object; // [xsp+60h] [xbp-E0h]
  unsigned __int8 objecta; // [xsp+60h] [xbp-E0h]
  struct BattleUserServantData_array **p_equipList; // [xsp+68h] [xbp-D8h]
  _DWORD v471[9]; // [xsp+90h] [xbp-B0h] BYREF
  int v472; // [xsp+B4h] [xbp-8Ch]
  ServantCardEntity_o *entity; // [xsp+B8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v474; // [xsp+C0h] [xbp-80h] BYREF
  int32_t skillIndex[3]; // [xsp+E4h] [xbp-5Ch] BYREF
  System_RuntimeFieldHandle_o v476; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v477; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v478; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v479; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v480; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v481; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v482; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v483; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v484; // 0:x0.16

  if ( (byte_42127C0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_long___, inDeckSvt);
    sub_B0D8A4(&BattleData_TypeInfo, v15);
    sub_B0D8A4(&BattleUserServantData___TypeInfo, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantCardMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantChangeMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___, v23);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Concat_int___, v26);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v27);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_string___, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__get_Current__, v31);
    sub_B0D8A4(&Method_System_Func_long__bool___ctor__, v32);
    sub_B0D8A4(&System_Func_long__bool__TypeInfo, v33);
    sub_B0D8A4(&System_Collections_Hashtable_TypeInfo, v34);
    sub_B0D8A4(&int___TypeInfo, v35);
    sub_B0D8A4(&int_TypeInfo, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeInfo__Add__, v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_commandAssistData__FindAll__, v39);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, v40);
    sub_B0D8A4(&Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__, v41);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v42);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeInfo___ctor__, v43);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___67874656, v44);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Count__, v45);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__, v46);
    sub_B0D8A4(&System_Collections_Generic_List_CommandCodeInfo__TypeInfo, v47);
    sub_B0D8A4(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v48);
    sub_B0D8A4(&NetworkManager_TypeInfo, v49);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v51);
    sub_B0D8A4(&Method_System_Predicate_commandAssistData___ctor__, v52);
    sub_B0D8A4(&Method_System_Predicate_BattleSkillInfoData___ctor__, v53);
    sub_B0D8A4(&System_Predicate_commandAssistData__TypeInfo, v54);
    sub_B0D8A4(&System_Predicate_BattleSkillInfoData__TypeInfo, v55);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A,
      v57);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass293_0__setBaseServantData_b__1__, v58);
    sub_B0D8A4(&BattleServantData___c__DisplayClass293_0_TypeInfo, v59);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass293_1__setBaseServantData_b__0__, v60);
    sub_B0D8A4(&BattleServantData___c__DisplayClass293_1_TypeInfo, v61);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass293_2__setBaseServantData_b__2__, v62);
    sub_B0D8A4(&BattleServantData___c__DisplayClass293_2_TypeInfo, v63);
    sub_B0D8A4(&StringLiteral_1/*""*/, v64);
    sub_B0D8A4(&StringLiteral_6553/*"FULL_TD_POINT"*/, v65);
    byte_42127C0 = 1;
  }
  skillIndex[0] = 0;
  memset(&v474, 0, sizeof(v474));
  entity = 0LL;
  v472 = 0;
  v66 = sub_B0D974(BattleServantData___c__DisplayClass293_0_TypeInfo, inDeckSvt, userSvt);
  BattleServantData___c__DisplayClass293_0___ctor((BattleServantData___c__DisplayClass293_0_o *)v66, 0LL);
  if ( !v66 )
    goto LABEL_295;
  *(_QWORD *)(v66 + 16) = inDeckSvt;
  sub_B0D840((BattleServantConfConponent_o *)(v66 + 16), (System_Int32_array **)inDeckSvt, v68, v69, v70, v71, v72, v73);
  Instance = (__int64)battleInfo;
  if ( !battleInfo )
    goto LABEL_295;
  ServantEvent = BattleInfoData__GetServantEvent(battleInfo, 0LL);
  v75 = *(struct BattleDeckServantData_o **)(v66 + 16);
  v464 = ServantEvent;
  p_deckSvt = &this->fields.deckSvt;
  this->fields.deckSvt = v75;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.deckSvt,
    (System_Int32_array **)v75,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
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
  Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(
                        (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v471,
                        userSvtId,
                        0LL);
  v84 = *(_OWORD *)&v471[4];
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)v471;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = v84;
  if ( !userSvt )
    goto LABEL_295;
  exceedCount = userSvt->fields.exceedCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(exceedCount, 0LL);
  Instance = *(_QWORD *)&v87.fields.currentCryptoKey;
  v88 = this->fields.deckSvt;
  this->fields.exceedCount = v87;
  if ( !v88 )
    goto LABEL_295;
  if ( v88->fields.isFollowerSvt )
    this->fields.followerType = Follower__getType(infollowerType, 0LL);
  BattleServantData__CalculateLimitCountWithSpoilerProtection(this, userSvt, v86);
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
  v90 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.statestring, v90, v91, v92, v93, v94, v95, v96);
  v103 = this->fields.deckSvt;
  this->fields.atktdrate = userSvt->fields.tdAttackRate;
  if ( !v103 )
    goto LABEL_295;
  name = v103->fields.name;
  this->fields.svtName = name;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.svtName,
    (System_Int32_array **)name,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  this->fields.overkillTargetId = -1;
  v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(userSvt->fields.svtId, 0LL);
  ServantOverwriteName = BattleServantData__getServantOverwriteName(this, v105, v106);
  this->fields.svtOverwriteName = ServantOverwriteName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.svtOverwriteName,
    (System_Int32_array **)ServantOverwriteName,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  this->fields.displayType = userSvt->fields.displayType;
  v120 = this->fields.deckSvt;
  this->fields.npcSvtType = userSvt->fields.npcSvtType;
  if ( !v120 )
    goto LABEL_295;
  dropInfos = v120->fields.dropInfos;
  this->fields.droplist = dropInfos;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.droplist,
    (System_Int32_array **)dropInfos,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  individuality = userSvt->fields.individuality;
  this->fields.svtIndividuality = individuality;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.svtIndividuality,
    (System_Int32_array **)individuality,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  this->fields.flgEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)userSvt, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = BattleUserServantData__getBattleSvtId(userSvt, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_295;
  v130 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     Instance,
                                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = v130;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.svtdata,
    (System_Int32_array **)v130,
    v131,
    v132,
    v133,
    v134,
    v135,
    v136);
  svtdata = this->fields.svtdata;
  p_svtdata = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_295;
  this->fields.svtType = svtdata->fields.type;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  v138 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v139);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(this->fields.limitcount, 0LL);
  if ( !v138 )
    goto LABEL_295;
  if ( !ServantLimitMaster__TryGetEntity(v138, &this->fields.svtlimitent, SvtId, Instance, 0LL) )
  {
    v141 = ServantLimitMaster__GetEntity(v138, 100100, 0, 0LL);
    this->fields.svtlimitent = v141;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.svtlimitent,
      (System_Int32_array **)v141,
      v142,
      v143,
      v144,
      v145,
      v146,
      v147);
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  object = (Il2CppObject *)v66;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v148 = this->fields.svtdata;
  if ( !v148 )
    goto LABEL_295;
  v149 = (ServantLimitAddMaster_o *)Instance;
  v151 = *(_QWORD *)&v148->fields.id.fields.currentCryptoKey;
  v150 = *(_QWORD *)&v148->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v477.fields.currentCryptoKey = v151;
  *(_QWORD *)&v477.fields.fakeValue = v150;
  v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v477, 0LL);
  Instance = BattleServantData__getDispLimitCount(this, 1, v153);
  if ( !v149 )
    goto LABEL_295;
  ServantLimitAddMaster__TryGetEntity(v149, &this->fields.svtlimitaddent, v152, Instance, 0LL);
  v155 = BattleServantData__getSvtId(this, v154);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v156);
  if ( !ServantLimitMaster__TryGetEntity(v138, &this->fields.svtlimitDispent, v155, DispLimitCount, 0LL) )
  {
    if ( this->fields.svtlimitaddent )
    {
      Instance = BattleServantData__getSvtId(this, v158);
      svtlimitaddent = this->fields.svtlimitaddent;
      if ( !svtlimitaddent )
        goto LABEL_295;
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v161 = Instance;
      v162 = v138;
    }
    else
    {
      v161 = 100100;
      v162 = v138;
      battleCharaLimitCount = 0;
    }
    v163 = ServantLimitMaster__GetEntity(v162, v161, battleCharaLimitCount, 0LL);
    this->fields.svtlimitDispent = v163;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.svtlimitDispent,
      (System_Int32_array **)v163,
      v164,
      v165,
      v166,
      v167,
      v168,
      v169);
  }
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfo, this->fields.beforeUserSvtId, 0LL);
  Instance = (__int64)BattleUserServantData__getBattleEquipTargetList(userSvt, 0LL);
  v171 = Instance;
  if ( this->fields.shiftNpcId >= 1 && UserServantFromID && this->fields.beforeUserSvtId >= 1 )
  {
    Instance = (__int64)BattleUserServantData__getBattleEquipTargetList(UserServantFromID, 0LL);
    v171 = Instance;
  }
  v467 = userSvt;
  if ( !v171 )
    goto LABEL_295;
  v172 = (struct BattleUserServantData_array *)sub_B0D8BC(
                                                 BattleUserServantData___TypeInfo,
                                                 *(unsigned int *)(v171 + 24));
  this->fields.equipList = v172;
  p_equipList = &this->fields.equipList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipList,
    (System_Int32_array **)v172,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  equipList = this->fields.equipList;
  this->fields.equiphp = 0;
  this->fields.equipatk = 0;
  if ( !equipList )
    goto LABEL_295;
  p_max_length = &equipList->max_length;
  if ( (int)equipList->max_length >= 1 )
  {
    v187 = 0LL;
    while ( 1 )
    {
      if ( v187 >= *(unsigned int *)(v171 + 24) )
        goto LABEL_296;
      Instance = (__int64)BattleInfoData__getEquipFromID(battleInfo, *(_QWORD *)(v171 + 8 * v187 + 32), 0LL);
      v194 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B0D964(Instance, equipList->obj.klass->_1.element_class);
        if ( !Instance )
          break;
      }
      if ( v187 >= *p_max_length )
        goto LABEL_296;
      v195 = &equipList->obj.klass + v187;
      v195[4] = (Il2CppClass *)v194;
      sub_B0D840((BattleServantConfConponent_o *)(v195 + 4), v194, v188, v189, v190, v191, v192, v193);
      equipList = *p_equipList;
      if ( !*p_equipList )
        goto LABEL_295;
      if ( v187 >= equipList->max_length )
        goto LABEL_296;
      v196 = &equipList->obj.klass + v187;
      v199 = v196[4];
      v197 = (__int64 *)(v196 + 4);
      v198 = v199;
      if ( v199 )
      {
        this->fields.equipatk += v198->_2.thread_static_fields_offset;
        if ( v187 >= equipList->max_length )
          goto LABEL_296;
        v200 = *v197;
        if ( !v200 )
          goto LABEL_295;
        this->fields.equiphp += *(_DWORD *)(v200 + 268);
      }
      p_max_length = &equipList->max_length;
      if ( (__int64)++v187 >= (int)equipList->max_length )
        goto LABEL_59;
    }
    v457 = sub_B0D99C();
LABEL_297:
    sub_B0D948(v457, 0LL);
  }
LABEL_59:
  maxhp = this->fields.maxhp;
  equiphp = this->fields.equiphp;
  p_userCommandCodeIds = &this->fields.userCommandCodeIds;
  this->fields.atk += this->fields.equipatk;
  this->fields.maxhp = equiphp + maxhp;
  userCommandCodeIds = v467->fields.userCommandCodeIds;
  this->fields.userCommandCodeIds = userCommandCodeIds;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeIds,
    (System_Int32_array **)userCommandCodeIds,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184);
  if ( this->fields.shiftNpcId >= 1 && UserServantFromID && this->fields.beforeUserSvtId >= 1 )
  {
    v212 = (System_Int32_array **)UserServantFromID->fields.userCommandCodeIds;
    *p_userCommandCodeIds = (struct System_Int64_array *)v212;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.userCommandCodeIds,
      v212,
      v206,
      v207,
      v208,
      v209,
      v210,
      v211);
  }
  v461 = UserServantFromID;
  eventIda = eventId;
  v213 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_CommandCodeInfo__TypeInfo,
                                                                                                   v205,
                                                                                                   v206);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v213,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_CommandCodeInfo___ctor__);
  p_commandCodeList_k__BackingField = &this->fields._commandCodeList_k__BackingField;
  this->fields._commandCodeList_k__BackingField = (struct System_Collections_Generic_List_CommandCodeInfo__o *)v213;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._commandCodeList_k__BackingField,
    (System_Int32_array **)v213,
    v215,
    v216,
    v217,
    v218,
    v219,
    v220);
  if ( userCommandCode && *p_userCommandCodeIds && (int)userCommandCode->max_length >= 1 )
  {
    v228 = 0LL;
    do
    {
      v229 = sub_B0D974(BattleServantData___c__DisplayClass293_1_TypeInfo, v221, v222);
      BattleServantData___c__DisplayClass293_1___ctor((BattleServantData___c__DisplayClass293_1_o *)v229, 0LL);
      if ( v228 >= userCommandCode->max_length )
        goto LABEL_296;
      if ( !v229 )
        goto LABEL_295;
      v236 = (System_Int32_array **)userCommandCode->m_Items[v228];
      *(_QWORD *)(v229 + 16) = v236;
      sub_B0D840((BattleServantConfConponent_o *)(v229 + 16), v236, v230, v231, v232, v233, v234, v235);
      v237 = *p_userCommandCodeIds;
      v240 = (System_Func_long__bool__o *)sub_B0D974(System_Func_long__bool__TypeInfo, v238, v239);
      System_Func_long__bool____ctor(
        v240,
        (Il2CppObject *)v229,
        Method_BattleServantData___c__DisplayClass293_1__setBaseServantData_b__0__,
        (const MethodInfo_2616128 *)Method_System_Func_long__bool___ctor__);
      if ( BasicHelper__Any_long_(
             v237,
             (System_Func_T__bool__o *)v240,
             (const MethodInfo_1707094 *)Method_BasicHelper_Any_long___) )
      {
        Instance = (__int64)*p_commandCodeList_k__BackingField;
        if ( !*p_commandCodeList_k__BackingField )
          goto LABEL_295;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v229 + 16),
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_CommandCodeInfo__Add__);
      }
    }
    while ( (__int64)++v228 < (int)userCommandCode->max_length );
  }
  if ( !this->fields.commandAssistIds )
  {
    p_commandAssistIds = &this->fields.commandAssistIds;
    v242 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 5LL);
    this->fields.commandAssistIds = v242;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.commandAssistIds,
      (System_Int32_array **)v242,
      v243,
      v244,
      v245,
      v246,
      v247,
      v248);
    if ( commandAssistDataList )
    {
      v250 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                        System_Predicate_commandAssistData__TypeInfo,
                                                                        v249,
                                                                        v222);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v250,
        object,
        Method_BattleServantData___c__DisplayClass293_0__setBaseServantData_b__1__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_commandAssistData___ctor__);
      Instance = (__int64)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                            (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)commandAssistDataList,
                            (System_Predicate_T__o *)v250,
                            (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_commandAssistData__FindAll__);
      v251 = *p_commandAssistIds;
      if ( !*p_commandAssistIds )
        goto LABEL_295;
      v252 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance;
      v253 = 0;
      v254 = 0LL;
      while ( (__int64)v254 < (int)v251->max_length )
      {
        if ( v252 )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v471,
            v252,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__);
          v474 = *(System_Collections_Generic_List_Enumerator_T__o *)v471;
          while ( 1 )
          {
            v255 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                     &v474,
                     (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__);
            if ( !v255 )
              break;
            if ( !v474.fields.current )
              sub_B0D97C(v255);
            if ( v254 == LODWORD(v474.fields.current[2].klass) )
            {
              v256 = *p_commandAssistIds;
              if ( !*p_commandAssistIds )
                sub_B0D97C(v255);
              if ( v254 >= v256->max_length )
              {
                v257 = sub_B0D9A8(v255);
                sub_B0D948(v257, 0LL);
              }
              v256->m_Items[v254 + 1] = (int32_t)v474.fields.current[1].klass;
            }
          }
          v471[v253 + 8] = 1185;
          v253 = ++v472;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v474,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__);
          if ( v253 )
          {
            v258 = v253 - 1;
            if ( v471[v253 + 7] == 1185 )
            {
              --v253;
              v472 = v258;
            }
          }
          v251 = *p_commandAssistIds;
          ++v254;
          if ( *p_commandAssistIds )
            continue;
        }
        goto LABEL_295;
      }
    }
  }
  commandCardParam = v467->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)commandCardParam,
    v222,
    v223,
    v224,
    v225,
    v226,
    v227);
  if ( this->fields.shiftNpcId >= 1 && v461 && this->fields.beforeUserSvtId >= 1 )
  {
    v266 = v461->fields.commandCardParam;
    this->fields.commandCardParam = v266;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.commandCardParam,
      (System_Int32_array **)v266,
      v260,
      v261,
      v262,
      v263,
      v264,
      v265);
  }
  BattleSkillIdList = (System_Int32_array **)BattleUserServantData__getBattleSkillIdList(v467, 0LL);
  object[1].monitor = BattleSkillIdList;
  sub_B0D840((BattleServantConfConponent_o *)&object[1].monitor, BattleSkillIdList, v268, v269, v270, v271, v272, v273);
  v274 = (System_Int32_array **)((__int64 (__fastcall *)(BattleUserServantData_o *, void *))v467->klass->vtable._6_getSkillLevelList.method)(
                                  v467,
                                  v467->klass[1]._1.image);
  object[2].klass = (Il2CppClass *)v274;
  sub_B0D840((BattleServantConfConponent_o *)&object[2], v274, v275, v276, v277, v278, v279, v280);
  v283 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                                                                   v281,
                                                                                                   v282);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v283,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( isContinue )
  {
    skillInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.skillInfoList;
    v283 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                     System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                                                                     v284,
                                                                                                     v285);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v283,
      skillInfoList,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___67874656);
  }
  Instance = (__int64)this->fields.skillInfoList;
  if ( !Instance )
    goto LABEL_295;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
  v289 = sub_B0D974(BattleServantData___c__DisplayClass293_2_TypeInfo, v287, v288);
  BattleServantData___c__DisplayClass293_2___ctor((BattleServantData___c__DisplayClass293_2_o *)v289, 0LL);
  if ( !v289 )
    goto LABEL_295;
  *(_QWORD *)(v289 + 24) = object;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v289 + 24),
    (System_Int32_array **)object,
    v290,
    v291,
    v292,
    v293,
    v294,
    v295);
  v298 = *(_QWORD *)(v289 + 24);
  *(_DWORD *)(v289 + 16) = 0;
  if ( !v298 )
    goto LABEL_295;
  v299 = 0;
  while ( 1 )
  {
    v300 = *(_QWORD *)(v298 + 24);
    if ( !v300 )
      goto LABEL_295;
    if ( v299 >= *(_DWORD *)(v300 + 24) )
      break;
    v301 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                      System_Predicate_BattleSkillInfoData__TypeInfo,
                                                                      v296,
                                                                      v297);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v301,
      (Il2CppObject *)v289,
      Method_BattleServantData___c__DisplayClass293_2__setBaseServantData_b__2__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    if ( v283 )
    {
      Instance = (__int64)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v283,
                            (System_Predicate_T__o *)v301,
                            (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
      v302 = *(_QWORD *)(v289 + 24);
      if ( v302 )
      {
        v303 = *(_QWORD *)(v302 + 24);
        if ( v303 )
        {
          v304 = *(int *)(v289 + 16);
          if ( (unsigned int)v304 >= *(_DWORD *)(v303 + 24) )
            goto LABEL_296;
          v305 = *(_QWORD *)(v302 + 32);
          if ( v305 )
          {
            if ( (unsigned int)v304 >= *(_DWORD *)(v305 + 24) )
              goto LABEL_296;
            Instance = (__int64)BattleServantData__addSkillInfo(
                                  this,
                                  11,
                                  v304,
                                  *(_DWORD *)(v303 + 4 * v304 + 32),
                                  *(_DWORD *)(v305 + 4 * v304 + 32),
                                  -1LL,
                                  -1,
                                  (BattleSkillInfoData_o *)Instance,
                                  v458);
            v298 = *(_QWORD *)(v289 + 24);
            v299 = *(_DWORD *)(v289 + 16) + 1;
            *(_DWORD *)(v289 + 16) = v299;
            if ( v298 )
              continue;
          }
        }
      }
    }
    goto LABEL_295;
  }
  skillIndex[0] = 0;
  classPassive = v467->fields.classPassive;
  if ( !classPassive )
  {
    if ( !*p_svtdata )
      goto LABEL_295;
    classPassive = *(struct System_Int32_array **)&(*p_svtdata)[10].fields.fakeValue;
    if ( !classPassive )
      goto LABEL_295;
  }
  v307 = *(_QWORD *)&classPassive->max_length;
  if ( (int)v307 >= 1 )
  {
    v308 = 0LL;
    while ( v308 < (unsigned int)v307 )
    {
      Instance = (__int64)BattleServantData__addSkillInfo(
                            this,
                            10,
                            v308,
                            classPassive->m_Items[v308 + 1],
                            1,
                            -1LL,
                            -1,
                            0LL,
                            v458);
      LODWORD(v307) = classPassive->max_length;
      if ( (__int64)++v308 >= (int)v307 )
        goto LABEL_123;
    }
    goto LABEL_296;
  }
  LODWORD(v308) = 0;
LABEL_123:
  v309 = v467;
  skillIndex[0] = v308;
  Instance = (__int64)BattleUserServantData__GetAddPassiveSkillArray(v467, 0LL);
  if ( !Instance )
    goto LABEL_295;
  v310 = *(_QWORD *)(Instance + 24);
  v311 = Instance;
  if ( (int)v310 >= 1 )
  {
    v312 = 0LL;
    do
    {
      if ( v312 >= (unsigned int)v310 )
        goto LABEL_296;
      Instance = (__int64)BattleServantData__addSkillInfo(
                            this,
                            10,
                            (int)v308 + (int)v312,
                            *(_DWORD *)(v311 + 32 + 8 * v312),
                            *(_DWORD *)(v311 + 32 + 8 * v312 + 4),
                            -1LL,
                            -1,
                            0LL,
                            v458);
      LODWORD(v310) = *(_DWORD *)(v311 + 24);
      ++v312;
    }
    while ( (__int64)v312 < (int)v310 );
    LODWORD(v308) = v308 + v312;
    v309 = v467;
  }
  skillIndex[0] = v308;
  Instance = (__int64)BattleUserServantData__GetAppendPassiveSkillArray(v309, 0LL);
  if ( Instance )
  {
    v314 = *(_QWORD *)(Instance + 24);
    v315 = Instance;
    if ( (int)v314 >= 1 )
    {
      v316 = 0LL;
      do
      {
        if ( v316 >= (unsigned int)v314 )
          goto LABEL_296;
        v317 = *(_QWORD *)(v315 + 32 + 8 * v316);
        Instance = Follower__IsNpc(this->fields.followerType, 0LL);
        if ( HIDWORD(v317) || (Instance & 1) == 0 )
        {
          Instance = (__int64)BattleServantData__addSkillInfo(this, 10, v308, v317, SHIDWORD(v317), -1LL, -1, 0LL, v458);
          LODWORD(v308) = v308 + 1;
        }
        LODWORD(v314) = *(_DWORD *)(v315 + 24);
        ++v316;
      }
      while ( (__int64)v316 < (int)v314 );
      v309 = v467;
      skillIndex[0] = v308;
    }
  }
  BattleServantData__AddClassBoardSkillInfo(this, v309, skillIndex, v313);
  Instance = (__int64)v464;
  if ( !v464 )
    goto LABEL_295;
  Instance = ((__int64 (__fastcall *)(BaseBattleServantEvent_o *, __int64, BattleServantData_o *, Il2CppMethodPointer))v464->klass->vtable._4_IsApplyPassive.method)(
               v464,
               12LL,
               this,
               v464->klass->vtable._5_AddSpecialPassive.methodPtr);
  v318 = this->fields.equipList;
  if ( !v318 )
    goto LABEL_295;
  v319 = Instance;
  v320 = 0LL;
  v321 = 0;
  objecta = Instance;
  while ( 1 )
  {
    max_length = v318->max_length;
    if ( (v319 & ((__int64)v320 < (int)max_length)) == 0 )
      break;
    if ( v320 >= max_length )
      goto LABEL_296;
    Instance = (__int64)v318->m_Items[v320];
    if ( Instance )
    {
      Instance = (__int64)BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)Instance, 0LL);
      v323 = *p_equipList;
      if ( !*p_equipList )
        goto LABEL_295;
      if ( v320 >= v323->max_length )
        goto LABEL_296;
      v324 = Instance;
      Instance = (__int64)v323->m_Items[v320];
      if ( !Instance )
        goto LABEL_295;
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 408LL))(
                   Instance,
                   *(_QWORD *)(*(_QWORD *)Instance + 416LL));
      if ( !v324 )
        goto LABEL_295;
      v325 = *(_QWORD *)(v324 + 24);
      if ( (int)v325 >= 1 )
      {
        v326 = Instance;
        v327 = 0LL;
        v328 = v321;
        v329 = v321;
        v330 = Instance + 32;
        do
        {
          if ( v327 >= (unsigned int)v325 )
            goto LABEL_296;
          if ( !v326 )
            goto LABEL_295;
          if ( v327 >= *(unsigned int *)(v326 + 24) )
            goto LABEL_296;
          Instance = (__int64)BattleServantData__addSkillInfo(
                                this,
                                12,
                                v329 + (int)v327,
                                *(_DWORD *)(v324 + 32 + 4 * v327),
                                *(_DWORD *)(v330 + 4 * v327),
                                -1LL,
                                -1,
                                0LL,
                                v458);
          LODWORD(v325) = *(_DWORD *)(v324 + 24);
          ++v327;
        }
        while ( (__int64)v327 < (int)v325 );
        v319 = objecta;
        v321 = v328 + v327;
      }
      v318 = *p_equipList;
    }
    ++v320;
    if ( !v318 )
      goto LABEL_295;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v331 = *p_commandCodeList_k__BackingField;
  if ( !*p_commandCodeList_k__BackingField )
    goto LABEL_295;
  v332 = (CommandCodeSkillMaster_o *)Instance;
  v333 = 0LL;
  v334 = 0;
  while ( (__int64)v333 < v331->fields._size )
  {
    if ( v333 >= (unsigned int)v331->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( v331->fields._items->m_Items[v333] )
    {
      v335 = *p_commandCodeList_k__BackingField;
      if ( !*p_commandCodeList_k__BackingField )
        goto LABEL_295;
      if ( v333 >= (unsigned int)v335->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v336 = v335->fields._items->m_Items[v333];
      if ( !v336 )
        goto LABEL_295;
      if ( !v332 )
        goto LABEL_295;
      Instance = (__int64)CommandCodeSkillMaster__getCommandCodeSkillList(v332, v336->fields.commandCodeId, 0LL);
      if ( !Instance )
        goto LABEL_295;
      v337 = *(_DWORD *)(Instance + 24);
      v338 = Instance;
      if ( v337 >= 1 )
      {
        for ( i = 0; i < v337; ++i )
        {
          if ( i >= (unsigned int)v337 )
            goto LABEL_296;
          v340 = *(_QWORD *)(v338 + 8LL * i + 32);
          if ( !v340 )
            goto LABEL_295;
          v341 = *p_commandCodeList_k__BackingField;
          if ( !*p_commandCodeList_k__BackingField )
            goto LABEL_295;
          v342 = *(_DWORD *)(v340 + 28);
          if ( v333 >= (unsigned int)v341->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v343 = v341->fields._items->m_Items[v333];
          if ( !v343 )
            goto LABEL_295;
          Instance = (__int64)BattleServantData__addSkillInfo(
                                this,
                                22,
                                v334 + i,
                                v342,
                                1,
                                v343->fields.id,
                                -1,
                                0LL,
                                v458);
          v337 = *(_DWORD *)(v338 + 24);
        }
        v334 += i;
      }
    }
    v331 = *p_commandCodeList_k__BackingField;
    ++v333;
    if ( !*p_commandCodeList_k__BackingField )
      goto LABEL_295;
  }
  ((void (__fastcall *)(BaseBattleServantEvent_o *, BattleServantData_o *, Il2CppMethodPointer))v464->klass->vtable._5_AddSpecialPassive.method)(
    v464,
    this,
    v464->klass->vtable._6_AddPartySkill.methodPtr);
  ((void (__fastcall *)(BaseBattleServantEvent_o *, BattleServantData_o *, BattleInfoData_o *, void *))v464->klass->vtable._6_AddPartySkill.method)(
    v464,
    this,
    battleInfo,
    v464->klass[1]._1.image);
  BattleServantData__UpdateTreasureDevice(this, v467->fields.treasureDeviceId, v467->fields.treasureDeviceLv, v344);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6553/*"FULL_TD_POINT"*/, 0LL);
  nplineCount = this->fields.nplineCount;
  this->fields.lineMaxNp = Value;
  if ( nplineCount >= 1 )
  {
    v347 = nplineCount * Value;
    if ( v347 < this->fields.np )
      this->fields.np = v347;
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_295;
  TDErrorVoiceSeArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetTDErrorVoiceSeArray(
                                                                               (BattleDeckServantData_o *)Instance,
                                                                               0LL);
  v355 = TDErrorVoiceSeArray
       ? (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                               TDErrorVoiceSeArray,
                                                               (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_string___)
       : 0LL;
  this->fields.tdErrorStatusVoiceSeList = v355;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tdErrorStatusVoiceSeList,
    (System_Int32_array **)v355,
    v349,
    v350,
    v351,
    v352,
    v353,
    v354);
  v358 = (System_Collections_Hashtable_o *)sub_B0D974(System_Collections_Hashtable_TypeInfo, v356, v357);
  System_Collections_Hashtable___ctor_38437272(v358, 0LL);
  this->fields.commandtable = v358;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandtable,
    (System_Int32_array **)v358,
    v359,
    v360,
    v361,
    v362,
    v363,
    v364);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  v365 = (ServantCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v366 = sub_B0D8BC(int___TypeInfo, 6LL);
  v476.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004((System_Array_o *)v366, v476, 0LL);
  if ( !v366 )
    goto LABEL_295;
  if ( *(int *)(v366 + 24) >= 1 )
  {
    v367 = 0LL;
    while ( 1 )
    {
      v369 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v368 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v478.fields.currentCryptoKey = v369;
      *(_QWORD *)&v478.fields.fakeValue = v368;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v478, 0LL);
      if ( v367 >= *(unsigned int *)(v366 + 24) )
        break;
      if ( !v365 )
        goto LABEL_295;
      Instance = ServantCardMaster__TryGetEntity(v365, &entity, Instance, *(_DWORD *)(v366 + 32 + 4 * v367), 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_295;
        commandtable = this->fields.commandtable;
        v471[0] = entity->fields.cardId;
        v371 = j_il2cpp_value_box_0(int_TypeInfo, v471);
        v373 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v372 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v374 = v371;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v479.fields.currentCryptoKey = v373;
        *(_QWORD *)&v479.fields.fakeValue = v372;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v479, 0LL);
        if ( !entity )
          goto LABEL_295;
        Instance = (__int64)ServantCardMaster__GetEntity(v365, Instance, entity->fields.cardId, 0LL);
        if ( !commandtable )
          goto LABEL_295;
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))commandtable->klass->vtable._30_set_Item.method)(
          commandtable,
          v374,
          Instance,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
      if ( (__int64)++v367 >= *(int *)(v366 + 24) )
        goto LABEL_208;
    }
LABEL_296:
    v457 = sub_B0D9A8(Instance);
    goto LABEL_297;
  }
LABEL_208:
  Instance = (__int64)*p_svtdata;
  if ( !*p_svtdata )
    goto LABEL_295;
  Instance = ServantEntity__GetDefaultDeadType((ServantEntity_o *)Instance, 0, 0LL);
  v375 = this->fields.deckSvt;
  this->fields.deadtype = Instance;
  if ( !v375 )
    goto LABEL_295;
  if ( BattleDeckServantData__isEscape(v375, 0LL) )
  {
    v376 = v467;
    KillType = 1;
  }
  else
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_295;
    v376 = v467;
    if ( BattleDeckServantData__isDeadStand((BattleDeckServantData_o *)Instance, 0LL) )
    {
      KillType = 2;
    }
    else
    {
      Instance = (__int64)*p_deckSvt;
      if ( !*p_deckSvt )
        goto LABEL_295;
      if ( BattleDeckServantData__isDeadEffect((BattleDeckServantData_o *)Instance, 0LL) )
      {
        KillType = 3;
      }
      else
      {
        Instance = (__int64)*p_deckSvt;
        if ( !*p_deckSvt )
          goto LABEL_295;
        if ( BattleDeckServantData__isDeadWait((BattleDeckServantData_o *)Instance, 0LL) )
        {
          KillType = 4;
        }
        else
        {
          Instance = (__int64)*p_deckSvt;
          if ( !*p_deckSvt )
            goto LABEL_295;
          if ( BattleDeckServantData__IsDeadEnergy((BattleDeckServantData_o *)Instance, 0LL) )
          {
            KillType = 5;
          }
          else
          {
            Instance = (__int64)*p_deckSvt;
            if ( !*p_deckSvt )
              goto LABEL_295;
            if ( !BattleDeckServantData__ExistKillType((BattleDeckServantData_o *)Instance, 0LL) )
              goto LABEL_229;
            Instance = (__int64)*p_deckSvt;
            if ( !*p_deckSvt )
              goto LABEL_295;
            KillType = BattleDeckServantData__GetKillType((BattleDeckServantData_o *)Instance, 0LL);
          }
        }
      }
    }
  }
  this->fields.deadtype = KillType;
LABEL_229:
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_295;
  Instance = BattleDeckServantData__isAppear((BattleDeckServantData_o *)Instance, 0LL);
  v378 = this->fields.deckSvt;
  this->fields.isAppear = Instance & 1;
  if ( !v378 )
    goto LABEL_295;
  isRaid = BattleDeckServantData__isRaid(v378, 0LL);
  this->fields.isRaid = isRaid;
  if ( isRaid )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_295;
    RaidId = BattleDeckServantData__getRaidId((BattleDeckServantData_o *)Instance, 0LL);
    this->fields.raidId = RaidId;
    StartRaidState = BattleInfoData__getStartRaidState(battleInfo, eventIda, RaidId, 0LL);
    this->fields.statestring = StartRaidState;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.statestring,
      (System_Int32_array **)StartRaidState,
      v382,
      v383,
      v384,
      v385,
      v386,
      v387);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_295;
  Instance = BattleDeckServantData__isAddition((BattleDeckServantData_o *)Instance, 0LL);
  v388 = this->fields.deckSvt;
  this->fields.isAddition = Instance & 1;
  if ( !v388 )
    goto LABEL_295;
  Instance = BattleDeckServantData__isLeader(v388, 0LL);
  v389 = this->fields.deckSvt;
  this->fields.isLeader = Instance & 1;
  if ( !v389 )
    goto LABEL_295;
  isSuperBoss = BattleDeckServantData__isSuperBoss(v389, 0LL);
  this->fields.isSuperBoss = isSuperBoss;
  if ( isSuperBoss )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_295;
    SuperBossId = BattleDeckServantData__getSuperBossId((BattleDeckServantData_o *)Instance, 0LL);
    this->fields.superBossId = SuperBossId;
    this->fields.superbossnokorihp = BattleInfoData__getSuperBossNokoriHp(battleInfo, SuperBossId, 0LL);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_295;
  isSendDamageForSuperBossId = BattleDeckServantData__isSendDamageForSuperBossId(
                                 (BattleDeckServantData_o *)Instance,
                                 0LL);
  this->fields.isSendDamageForSuperBossId = isSendDamageForSuperBossId;
  if ( isSendDamageForSuperBossId )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_295;
    this->fields.sendDamageForSuperBossId = BattleDeckServantData__getSendDamageForSuperBossId(
                                              (BattleDeckServantData_o *)Instance,
                                              0LL);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_295;
  this->fields.hpBarType = BattleDeckServantData__getHpBarType((BattleDeckServantData_o *)Instance, 0LL);
  v393 = this->fields.deckSvt;
  v395 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v394 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v480.fields.currentCryptoKey = v395;
  *(_QWORD *)&v480.fields.fakeValue = v394;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v480, 0LL);
  if ( !v393 )
    goto LABEL_295;
  this->fields.overwriteSvtVoiceId = BattleDeckServantData__getOverwriteSvtVoiceId(v393, Instance, 0LL);
  this->fields.battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                               v376->fields.battleVoice,
                               0LL);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v376->fields.battleVoice, 0LL)
    && !this->fields.overwriteSvtVoiceId )
  {
    v397 = *(_QWORD *)&v376->fields.battleVoice.fields.currentCryptoKey;
    v396 = *(_QWORD *)&v376->fields.battleVoice.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v481.fields.currentCryptoKey = v397;
    *(_QWORD *)&v481.fields.fakeValue = v396;
    this->fields.overwriteSvtVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v481, 0LL);
  }
  v399 = *(_QWORD *)&v376->fields.svtId.fields.currentCryptoKey;
  v398 = *(_QWORD *)&v376->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v482.fields.currentCryptoKey = v399;
  *(_QWORD *)&v482.fields.fakeValue = v398;
  v400 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v482, 0LL);
  BattleServantOverwriteName = BattleServantData__getBattleServantOverwriteName(this, v400, v401);
  this->fields.svtOverwriteBattleName = BattleServantOverwriteName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName,
    (System_Int32_array **)BattleServantOverwriteName,
    v403,
    v404,
    v405,
    v406,
    v407,
    v408);
  Instance = (__int64)this->fields.deckSvt;
  if ( !Instance )
    goto LABEL_295;
  Instance = BattleDeckServantData__getScale((BattleDeckServantData_o *)Instance, 0LL);
  v409 = this->fields.deckSvt;
  this->fields.actorScale = Instance;
  if ( !v409 )
    goto LABEL_295;
  Instance = (__int64)this->fields.aiState;
  this->fields.roleType = v409->fields.roleType;
  this->fields.maxActNum = v376->fields.maxActNum;
  this->fields._minActNum_k__BackingField = v376->fields.minActNum;
  this->fields.aiId = v376->fields.aiId;
  this->fields.actPriority = v376->fields.actPriority;
  if ( !Instance )
    goto LABEL_295;
  AiState__Initialize((AiState_o *)Instance, v376->fields.aiId, 0LL);
  v410 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v376->fields.svtId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !*p_svtdata )
    goto LABEL_295;
  v411 = (ServantChangeMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576((*p_svtdata)[1], 0LL);
  if ( !v411 )
    goto LABEL_295;
  v412 = ServantChangeMaster__TrueNameEntity(v411, Instance, 0LL);
  if ( v412 )
    v410 = v412->fields.svtId;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  v413 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v413 )
    goto LABEL_295;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v413, Instance, v410, 0LL);
  if ( !Instance )
    goto LABEL_295;
  v414 = Instance;
  this->fields.svtCommonFlag = *(_DWORD *)(Instance + 76);
  v416 = *(_QWORD *)(Instance + 24);
  v415 = *(_QWORD *)(Instance + 32);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v483.fields.currentCryptoKey = v416;
  *(_QWORD *)&v483.fields.fakeValue = v415;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v483, 0LL);
  v423 = this->fields.deckSvt;
  this->fields._servantCollectionId_k__BackingField = Instance;
  if ( !v423 )
    goto LABEL_295;
  if ( !v423->fields.isFollowerSvt )
  {
    v424 = Instance;
    v425 = *(_DWORD *)(v414 + 76);
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    this->fields.svtCommonFlag = BattleData__GetSavedServantCommonFlag(v424, v425, 0LL);
  }
  if ( !this->fields.isEnemy && !this->fields.followerType )
  {
    v431 = *(struct System_Int32_array **)(v414 + 136);
    goto LABEL_293;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  v426 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)Instance,
           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___);
  v428 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v427 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v429 = (UserNpcSvtRecordMaster_o *)v426;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v484.fields.currentCryptoKey = v428;
  *(_QWORD *)&v484.fields.fakeValue = v427;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v484, 0LL);
  if ( !v429 )
LABEL_295:
    sub_B0D97C(Instance);
  TdPlayed = (System_Collections_Generic_IEnumerable_TSource__o *)UserNpcSvtRecordMaster__GetTdPlayed(
                                                                    v429,
                                                                    Instance,
                                                                    0LL);
  v431 = *(struct System_Int32_array **)(v414 + 136);
  if ( !TdPlayed )
  {
LABEL_293:
    p_tdplayed = &this->fields.tdplayed;
    this->fields.tdplayed = v431;
    goto LABEL_294;
  }
  v432 = (struct System_Int32_array *)TdPlayed;
  if ( v431 )
  {
    v433 = System_Linq_Enumerable__Concat_int_(
             TdPlayed,
             (System_Collections_Generic_IEnumerable_TSource__o *)v431,
             (const MethodInfo_1B44D70 *)Method_System_Linq_Enumerable_Concat_int___);
    v431 = System_Linq_Enumerable__ToArray_int_(
             v433,
             (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    goto LABEL_293;
  }
  p_tdplayed = &this->fields.tdplayed;
  this->fields.tdplayed = v432;
  v431 = v432;
LABEL_294:
  sub_B0D840(
    (BattleServantConfConponent_o *)p_tdplayed,
    (System_Int32_array **)v431,
    v417,
    v418,
    v419,
    v420,
    v421,
    v422);
  classBoardAddCommandSpells = v376->fields.classBoardAddCommandSpells;
  this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddCommandSpells,
    (System_Int32_array **)classBoardAddCommandSpells,
    v436,
    v437,
    v438,
    v439,
    v440,
    v441);
  classBoardAddPassiveSkills = v376->fields.classBoardAddPassiveSkills;
  this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddPassiveSkills,
    (System_Int32_array **)classBoardAddPassiveSkills,
    v443,
    v444,
    v445,
    v446,
    v447,
    v448);
  classBoardSquareIds = v376->fields.classBoardSquareIds;
  this->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._classBoardSquareIds_k__BackingField,
    (System_Int32_array **)classBoardSquareIds,
    v450,
    v451,
    v452,
    v453,
    v454,
    v455);
  BattleServantData__InitCommonAddIndividuality(this, v456);
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
  System_Int32_array *battle_info; // x0
  int32_t Value; // w0
  BattleBuffData_o *buffData; // x22
  int32_t uniqueId; // w23
  int32_t v11; // w21
  struct System_Int32_array *changeSvtList; // x8
  __int64 shiftDeckIndex; // x9
  char *v14; // x8
  int32_t v15; // w9
  struct System_Int32_array *shiftDeckList; // x8
  il2cpp_array_size_t v17; // w9
  BattleDeckServantData_o *v18; // x21
  BattleEntity_o *battle_ent; // x20
  int32_t Int; // w0
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  unsigned int MaxHp; // w0
  __int64 v25; // x1
  __int64 v26; // x0

  if ( (byte_421286F & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, data);
    byte_421286F = 1;
  }
  BattleServantData__OverwriteShiftDeckIndex(this, vals, (const MethodInfo *)vals);
  if ( !vals )
    goto LABEL_24;
  Value = DataVals__GetValue(vals, 0LL);
  buffData = this->fields.buffData;
  uniqueId = this->fields.uniqueId;
  v11 = Value;
  battle_info = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !buffData )
    goto LABEL_24;
  BattleBuffData__InitializeShift(buffData, uniqueId, battle_info, 0LL);
  this->fields.changeSvtIndex = v11;
  if ( v11 )
  {
    if ( data )
    {
      changeSvtList = this->fields.changeSvtList;
      if ( changeSvtList )
      {
        shiftDeckIndex = this->fields.shiftDeckIndex;
        if ( (unsigned int)shiftDeckIndex < changeSvtList->max_length )
        {
          battle_info = (System_Int32_array *)data->fields.battle_info;
          if ( !battle_info )
            goto LABEL_24;
          v14 = (char *)changeSvtList + 4 * shiftDeckIndex;
LABEL_17:
          battle_info = (System_Int32_array *)BattleInfoData__getShiftServantData(
                                                (BattleInfoData_o *)battle_info,
                                                *((_DWORD *)v14 + 8),
                                                0LL);
          goto LABEL_18;
        }
        goto LABEL_25;
      }
    }
    goto LABEL_24;
  }
  if ( !data )
    goto LABEL_24;
  v15 = this->fields.shiftDeckIndex;
  battle_info = (System_Int32_array *)data->fields.battle_info;
  if ( v15 )
  {
    shiftDeckList = this->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_24;
    v17 = v15 - 1;
    if ( v17 < shiftDeckList->max_length )
    {
      if ( !battle_info )
        goto LABEL_24;
      v14 = (char *)shiftDeckList + 4 * (int)v17;
      goto LABEL_17;
    }
LABEL_25:
    v26 = sub_B0D9A8(battle_info);
    sub_B0D948(v26, 0LL);
  }
  if ( !battle_info )
LABEL_24:
    sub_B0D97C(battle_info);
  battle_info = (System_Int32_array *)BattleInfoData__getDefaultServantData(
                                        (BattleInfoData_o *)battle_info,
                                        this->fields.uniqueId,
                                        0LL);
LABEL_18:
  v18 = (BattleDeckServantData_o *)battle_info;
  if ( !battle_info )
    goto LABEL_24;
  LODWORD(battle_info->bounds) = this->fields.index + 1;
  battle_info->m_Items[9] = this->fields.uniqueId;
  battle_ent = data->fields.battle_ent;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v18, battle_ent, Int, 0LL, 0, v21);
  LODWORD(battle_ent) = BattleServantData__getMaxHp(this, v22);
  if ( (int)battle_ent < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                           this,
                           this->klass->vtable._10_set_hp.methodPtr) )
  {
    MaxHp = BattleServantData__getMaxHp(this, v23);
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
      this,
      MaxHp,
      this->klass->vtable._11_get_reducedhp.methodPtr);
    v25 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
            this,
            this->klass->vtable._10_set_hp.methodPtr);
    ((void (__fastcall *)(BattleServantData_o *, __int64, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
      this,
      v25,
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
  void *buffData; // x0
  const MethodInfo *v14; // x3
  int32_t lineMaxNp; // w1
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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x24
  const MethodInfo *v27; // x1
  int v28; // w8
  _DWORD *v29; // x22
  unsigned int i; // w23
  char *v31; // x24
  char *v32; // x24
  void *v33; // t1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x21
  BattleDeckServantData_o *DeckServantData; // x0
  BattleEntity_o *battle_ent; // x25
  BattleDeckServantData_o *v38; // x26
  int32_t Int; // w0
  const MethodInfo *v40; // x6
  const MethodInfo *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x5
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  unsigned int MaxHp; // w0
  unsigned int v58; // w0
  const MethodInfo *v59; // x2
  __int64 v60; // x0

  if ( (byte_42127E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, data);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass362_0__setContinue_b__0__, v10);
    sub_B0D8A4(&BattleServantData___c__DisplayClass362_0_TypeInfo, v11);
    byte_42127E0 = 1;
  }
  v12 = sub_B0D974(BattleServantData___c__DisplayClass362_0_TypeInfo, data, isDeadContinue);
  BattleServantData___c__DisplayClass362_0___ctor((BattleServantData___c__DisplayClass362_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_27;
  *(_BYTE *)(v12 + 16) = isDeadContinue;
  lineMaxNp = this->fields.lineMaxNp;
  this->fields.status = 0;
  this->fields.np = 0;
  BattleServantData__addNp(this, lineMaxNp, 1, v14);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_27;
  buffMst = (System_Int32_array **)BattleBuffData__get_buffMst((BattleBuffData_o *)buffData, 0LL);
  *(_QWORD *)(v12 + 24) = buffMst;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), buffMst, v17, v18, v19, v20, v21, v22);
  v23 = this->fields.buffData;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                             v24,
                                                                             v25);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v12,
    Method_BattleServantData___c__DisplayClass362_0__setContinue_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  if ( !v23 )
    goto LABEL_27;
  BattleBuffData__RemoveActiveBuffWithCondition(v23, (System_Func_BattleBuffData_BuffData__bool__o *)v26, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_27;
  BattleBuffData__updateAuraBuffList((BattleBuffData_o *)buffData, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_27;
  buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
  if ( !buffData )
    goto LABEL_27;
  v28 = *((_DWORD *)buffData + 6);
  v29 = buffData;
  if ( v28 >= 1 )
  {
    for ( i = 0; (int)i < v28; ++i )
    {
      if ( i >= v28 )
      {
LABEL_28:
        v60 = sub_B0D9A8(buffData);
        sub_B0D948(v60, 0LL);
      }
      v31 = (char *)&v29[2 * i];
      v33 = (void *)*((_QWORD *)v31 + 4);
      v32 = v31 + 32;
      buffData = v33;
      if ( !v33 )
        goto LABEL_27;
      buffData = (void *)BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( ((unsigned __int8)buffData & 1) != 0 )
        goto LABEL_17;
      if ( i >= v29[6] )
        goto LABEL_28;
      buffData = *(void **)v32;
      if ( !*(_QWORD *)v32 )
        goto LABEL_27;
      buffData = (void *)BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( ((unsigned __int8)buffData & 1) != 0 )
      {
LABEL_17:
        if ( i >= v29[6] )
          goto LABEL_28;
        if ( !*(_QWORD *)v32 )
          goto LABEL_27;
        *(_DWORD *)(*(_QWORD *)v32 + 112LL) = 0;
      }
      v28 = v29[6];
    }
  }
  if ( !isResetTransform )
  {
    BattleServantData__ResetServantSelfSkill(this, v27);
    goto LABEL_26;
  }
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  classBoardAddCommandSpells = this->fields.classBoardAddCommandSpells;
  this->fields.shiftNpcId = -1;
  this->fields.beforeUserSvtId = -1LL;
  if ( !data || (buffData = data->fields.battle_info) == 0LL )
LABEL_27:
    sub_B0D97C(buffData);
  DeckServantData = BattleInfoData__getDeckServantData((BattleInfoData_o *)buffData, this->fields.uniqueId, 0LL);
  battle_ent = data->fields.battle_ent;
  v38 = DeckServantData;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v38, battle_ent, Int, 0LL, 1, v40);
  this->fields.dressDispId = -1;
  *(_QWORD *)&this->fields.transformIndex = 0xFFFFFFFFLL;
  LODWORD(battle_ent) = BattleServantData__getMaxHp(this, v41);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)battle_ent,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    (unsigned int)battle_ent,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddPassiveSkills,
    (System_Int32_array **)classBoardAddPassiveSkills,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddCommandSpells,
    (System_Int32_array **)classBoardAddCommandSpells,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  BattleServantData__setTransformServant(this, data, -1, 0, 0, v54);
  BattleServantData__changeTransformServant(this, v55);
LABEL_26:
  this->fields.deckIndex = -1;
  MaxHp = BattleServantData__getMaxHp(this, v56);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v58 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v58,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  this->fields.isDeadAnime = 0;
  this->fields.isSilnetDead = 0;
  this->fields.IsVanishSkill = 0;
  BattleServantData__RemovePartAnimationSaveData(this, 0LL, v59);
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
    sub_B0D97C(0LL);
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
  int64_t isSuperBoss; // x0
  int v8; // w23
  int32_t SuperBossId; // w0
  struct System_Int32_array *shiftDeckList; // x8
  int32_t max_length; // w24
  int64_t v12; // x21
  il2cpp_array_size_t v13; // w25
  const MethodInfo *v14; // x4
  int32_t v16; // w8
  struct System_Int32_array *v17; // x8
  BattleDeckServantData_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x0

  if ( !battleInfo )
    goto LABEL_14;
  isSuperBoss = (int64_t)*inDeckSvt;
  if ( !*inDeckSvt )
    goto LABEL_13;
  isSuperBoss = BattleDeckServantData__isSuperBoss((BattleDeckServantData_o *)isSuperBoss, 0LL);
  if ( (isSuperBoss & 1) == 0 )
  {
LABEL_14:
    LODWORD(v12) = -1;
    return v12;
  }
  if ( !*inDeckSvt
    || (isSuperBoss = BattleInfoData__GetEnemyDeckHp(battleInfo, (*inDeckSvt)->fields.uniqueId, 0LL), !*inDeckSvt)
    || (v8 = isSuperBoss,
        SuperBossId = BattleDeckServantData__getSuperBossId(*inDeckSvt, 0LL),
        isSuperBoss = BattleInfoData__getSuperBossNokoriHp(battleInfo, SuperBossId, 0LL),
        (shiftDeckList = this->fields.shiftDeckList) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(isSuperBoss);
  }
  max_length = shiftDeckList->max_length;
  v12 = isSuperBoss;
  if ( max_length - this->fields.shiftSubCount < 1 )
  {
    if ( isSuperBoss >= v8 )
      LODWORD(v12) = -1;
    else
      LODWORD(v12) = isSuperBoss;
    return v12;
  }
  if ( max_length - 1 >= this->fields.lowLimitShift )
  {
    while ( 1 )
    {
      v13 = max_length - 1;
      if ( max_length - 1 >= shiftDeckList->max_length )
        goto LABEL_27;
      isSuperBoss = BattleInfoData__GetShiftDeckHp(battleInfo, shiftDeckList->m_Items[v13 + 1], 0LL);
      if ( v12 <= (int)isSuperBoss )
        break;
      v12 -= (int)isSuperBoss;
      if ( max_length - 2 < this->fields.lowLimitShift )
        goto LABEL_16;
      shiftDeckList = this->fields.shiftDeckList;
      --max_length;
      if ( !shiftDeckList )
        goto LABEL_13;
    }
    v17 = this->fields.shiftDeckList;
    this->fields.shiftDeckIndex = max_length;
    if ( v17 )
    {
      if ( v13 >= v17->max_length )
      {
LABEL_27:
        v25 = sub_B0D9A8(isSuperBoss);
        sub_B0D948(v25, 0LL);
      }
      v18 = BattleServantData__SetShiftDeckData(
              (BattleServantData_o *)isSuperBoss,
              battleInfo,
              *inDeckSvt,
              v17->m_Items[v13 + 1],
              v14);
      *inDeckSvt = v18;
      sub_B0D840((BattleServantConfConponent_o *)inDeckSvt, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
      v16 = v12;
      if ( (v12 & 0x80000000) != 0 )
        goto LABEL_17;
      return v12;
    }
    goto LABEL_13;
  }
LABEL_16:
  v16 = -1;
LABEL_17:
  if ( v12 <= v8 )
    return v12;
  else
    return v16;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  AiState_o *aiState; // x0
  const MethodInfo *v17; // x1
  unsigned int v18; // w0
  __int64 InfoId; // x0
  BattleSkillInfoData_o *current; // x21
  struct System_Int32_array *skillinfoid_list; // x8
  __int64 v22; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v24; // x24
  int v25; // w25
  struct System_Int32_array *skillcharge_list; // x8
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_String_o *statestring; // x1
  int32_t lowLimitShift; // w8
  const MethodInfo *v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int32_t tmpAppearanceId; // w8
  struct System_Int32_array *commandAssistIds; // x1
  BattleServantConfConponent_o *p_partAnimationSaveDict; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_IEnumerable_TSource__o *partAnimSaveDataArray; // x19
  BattleServantData___c_c *v54; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__280_0; // x20
  Il2CppObject *v57; // x22
  struct BattleServantData___c_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct BattleServantData___c_StaticFields *v65; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__280_1; // x22
  Il2CppObject *v67; // x23
  struct BattleServantData___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v83; // x0
  __int64 v84; // x0
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42127B9 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData_____,
      save);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v7);
    sub_B0D8A4(&Method_System_Func_BattleServantData_PartAnimationSaveData__string___ctor__, v8);
    sub_B0D8A4(
      &Method_System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData_____ctor__,
      v9);
    sub_B0D8A4(&System_Func_BattleServantData_PartAnimationSaveData__string__TypeInfo, v10);
    sub_B0D8A4(
      &System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____TypeInfo,
      v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v12);
    sub_B0D8A4(&Method_BattleServantData___c__setSaveData_b__280_0__, v13);
    sub_B0D8A4(&Method_BattleServantData___c__setSaveData_b__280_1__, v14);
    sub_B0D8A4(&BattleServantData___c_TypeInfo, v15);
    byte_42127B9 = 1;
  }
  memset(&v86, 0, sizeof(v86));
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
    goto LABEL_54;
  AiState__setSaveData(aiState, save->fields.aistateSave, 0LL);
  aiState = (AiState_o *)BattleServantData__get_AiStateManager(this, v17);
  if ( !aiState )
    goto LABEL_54;
  AiStateManager__SetSaveData((AiStateManager_o *)aiState, save->fields.aiStateManagerSave, 0LL);
  aiState = (AiState_o *)this->fields.buffData;
  if ( !aiState )
    goto LABEL_54;
  BattleBuffData__setSaveData((BattleBuffData_o *)aiState, save->fields.buffDataSave, 0LL);
  v18 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v18,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    aiState = (AiState_o *)this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
    if ( !aiState )
      goto LABEL_54;
    BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
      (BattleServantSnapShotGroupDefault_o *)aiState,
      this,
      0LL,
      0LL,
      0LL);
  }
  aiState = (AiState_o *)this->fields.skillInfoList;
  if ( !aiState )
LABEL_54:
    sub_B0D97C(aiState);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aiState,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v86 = v85;
  while ( 1 )
  {
    InfoId = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v86,
               (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( (InfoId & 1) == 0 )
      break;
    current = (BattleSkillInfoData_o *)v86.fields.current;
    if ( !v86.fields.current )
      sub_B0D97C(InfoId);
    if ( !BYTE4(v86.fields.current[1].monitor) )
    {
      skillinfoid_list = save->fields.skillinfoid_list;
      if ( !skillinfoid_list )
LABEL_24:
        sub_B0D97C(InfoId);
      v22 = 8LL;
      while ( 1 )
      {
        max_length = skillinfoid_list->max_length;
        v24 = v22 - 8;
        if ( v22 - 8 >= (int)max_length )
          break;
        if ( v24 >= max_length )
        {
          v83 = sub_B0D9A8(InfoId);
          sub_B0D948(v83, 0LL);
        }
        v25 = *((_DWORD *)&skillinfoid_list->obj.klass + v22);
        InfoId = BattleSkillInfoData__getInfoId(current, 0LL);
        if ( v25 == (_DWORD)InfoId )
        {
          skillcharge_list = save->fields.skillcharge_list;
          if ( !skillcharge_list )
            sub_B0D97C(InfoId);
          if ( v24 >= skillcharge_list->max_length )
          {
            v84 = sub_B0D9A8(InfoId);
            sub_B0D948(v84, 0LL);
          }
          current->fields.chargeTurn = *((_DWORD *)&skillcharge_list->obj.klass + v22);
        }
        skillinfoid_list = save->fields.skillinfoid_list;
        ++v22;
        if ( !skillinfoid_list )
          goto LABEL_24;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v86,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  if ( (this->fields.deckIndex & 0x80000000) != 0 )
    this->fields.deckIndex = this->fields.index;
  this->fields.dressDispId = save->fields.dressDispId;
  this->fields.accumulationDamage = save->fields.accumulationDamage;
  statestring = save->fields.statestring;
  this->fields.statestring = statestring;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.statestring,
    (System_Int32_array **)statestring,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.shiftDeckIndex = save->fields.shiftDeckIndex;
  this->fields.changeSvtIndex = save->fields.changeSvtIndex;
  lowLimitShift = save->fields.lowLimitShift;
  this->fields.tmpAppearanceId = -1;
  this->fields.lowLimitShift = lowLimitShift;
  if ( BattleServantData__isChangeAppearance(this, v35) )
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandAssistIds,
    (System_Int32_array **)commandAssistIds,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  p_partAnimationSaveDict = (BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict;
  this->fields.partAnimationSaveDict = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict, 0LL, v45, v46, v47, v48, v49, v50);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)save->fields.partAnimSaveDataArray, 0LL) )
  {
    partAnimSaveDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)save->fields.partAnimSaveDataArray;
    v54 = BattleServantData___c_TypeInfo;
    if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v54 = BattleServantData___c_TypeInfo;
    }
    static_fields = v54->static_fields;
    _9__280_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__280_0;
    if ( !_9__280_0 )
    {
      if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        static_fields = BattleServantData___c_TypeInfo->static_fields;
      }
      v57 = (Il2CppObject *)static_fields->__9;
      _9__280_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                    System_Func_BattleServantData_PartAnimationSaveData__string__TypeInfo,
                                                                                                    v51,
                                                                                                    v52);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__280_0,
        v57,
        Method_BattleServantData___c__setSaveData_b__280_0__,
        (const MethodInfo_261A104 *)Method_System_Func_BattleServantData_PartAnimationSaveData__string___ctor__);
      v58 = BattleServantData___c_TypeInfo->static_fields;
      v58->__9__280_0 = (struct System_Func_BattleServantData_PartAnimationSaveData__string__o *)_9__280_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v58->__9__280_0,
        (System_Int32_array **)_9__280_0,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
      v54 = BattleServantData___c_TypeInfo;
    }
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = BattleServantData___c_TypeInfo;
    }
    v65 = v54->static_fields;
    _9__280_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v65->__9__280_1;
    if ( !_9__280_1 )
    {
      if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        v65 = BattleServantData___c_TypeInfo->static_fields;
      }
      v67 = (Il2CppObject *)v65->__9;
      _9__280_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                    System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____TypeInfo,
                                                                                                    v51,
                                                                                                    v52);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__280_1,
        v67,
        Method_BattleServantData___c__setSaveData_b__280_1__,
        (const MethodInfo_261A104 *)Method_System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData_____ctor__);
      v68 = BattleServantData___c_TypeInfo->static_fields;
      v68->__9__280_1 = (struct System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____o *)_9__280_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v68->__9__280_1,
        (System_Int32_array **)_9__280_1,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74);
    }
    v75 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData___(
                                   partAnimSaveDataArray,
                                   (System_Func_TSource__TKey__o *)_9__280_0,
                                   (System_Func_TSource__TElement__o *)_9__280_1,
                                   (const MethodInfo_1B5668C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData_____);
    p_partAnimationSaveDict->klass = (BattleServantConfConponent_c *)v75;
    sub_B0D840(p_partAnimationSaveDict, v75, v76, v77, v78, v79, v80, v81);
  }
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

  if ( (byte_42127BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_Deserialize_BattleServantData_SaveData___, inDeckSvt);
    sub_B0D8A4(&JsonManager_TypeInfo, v14);
    byte_42127BD = 1;
  }
  if ( saveStr )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = (BattleServantData_SaveData_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                            (Il2CppObject *)saveStr,
                                            (const MethodInfo_1B68238 *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
  }
  else
  {
    v15 = 0LL;
  }
  BattleServantData__setServantData_20740000(
    this,
    inDeckSvt,
    battleEnt,
    infollowerType,
    v15,
    0LL,
    commandAssistDataList,
    v7);
}


void __fastcall BattleServantData__setServantData_20740000(
        BattleServantData_o *this,
        BattleDeckServantData_o *inDeckSvt,
        BattleEntity_o *battleEnt,
        int32_t infollowerType,
        BattleServantData_SaveData_o *saveData,
        BattleData_o *battleData,
        System_Collections_Generic_List_commandAssistData__o *commandAssistDataList,
        const MethodInfo *method)
{
  BattleServantData_o *v14; // x19
  __int64 v15; // x1
  System_Int32_array **ShiftList; // x0
  struct System_Int32_array **p_shiftDeckList; // x26
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x0
  struct System_Int32_array **p_changeSvtList; // x28
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x4
  int v34; // w27
  int32_t shiftDeckIndex; // w8
  int32_t changeSvtIndex; // w9
  struct System_Int32_array *v37; // x9
  unsigned int max_length; // w10
  int32_t DispBreakShift; // w0
  struct System_Int32_array *v40; // x26
  int32_t v41; // w1
  int32_t v42; // w28
  struct System_Int32_array *shiftDeckList; // x8
  char *v44; // x8
  BattleInfoData_o *battleInfo; // x1
  BattleInfoData_o *v46; // x2
  int32_t inited; // w25
  const MethodInfo *v48; // x6
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  __int64 v53; // x0
  BattleDeckServantData_o *inDeckSvta; // [xsp+8h] [xbp-58h] BYREF

  v14 = this;
  inDeckSvta = inDeckSvt;
  if ( (byte_42127BE & 1) == 0 )
  {
    sub_B0D8A4(&System_Math_TypeInfo, inDeckSvt);
    this = (BattleServantData_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    byte_42127BE = 1;
  }
  if ( !inDeckSvt )
    goto LABEL_41;
  ShiftList = (System_Int32_array **)BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  p_shiftDeckList = &v14->fields.shiftDeckList;
  v14->fields.shiftDeckList = (struct System_Int32_array *)ShiftList;
  sub_B0D840((BattleServantConfConponent_o *)&v14->fields.shiftDeckList, ShiftList, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)BattleDeckServantData__getChangeList(inDeckSvt, 0LL);
  p_changeSvtList = &v14->fields.changeSvtList;
  v14->fields.changeSvtList = (struct System_Int32_array *)v24;
  sub_B0D840((BattleServantConfConponent_o *)&v14->fields.changeSvtList, v24, v26, v27, v28, v29, v30, v31);
  v14->fields._IsChangeDropItemByShift_k__BackingField = BattleDeckServantData__IsChangeDropItemByShift(inDeckSvt, 0LL);
  this = (BattleServantData_o *)BattleDeckServantData__GetDefShiftPosition(inDeckSvt, -1LL, 0LL);
  v34 = (int)this;
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    v14->fields.lowLimitShift = (_DWORD)this + 1;
    v14->fields.shiftDeckIndex = (_DWORD)this + 1;
    v14->fields.shiftSubCount = 1;
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
      v37 = *p_shiftDeckList;
      if ( !*p_shiftDeckList )
        goto LABEL_41;
      max_length = v37->max_length;
      --shiftDeckIndex;
      goto LABEL_23;
    }
    v37 = *p_changeSvtList;
    if ( !*p_changeSvtList )
      goto LABEL_41;
    max_length = v37->max_length;
LABEL_23:
    if ( shiftDeckIndex < max_length )
    {
      v44 = (char *)v37 + 4 * shiftDeckIndex;
      goto LABEL_25;
    }
LABEL_42:
    v53 = sub_B0D9A8(this);
    sub_B0D948(v53, 0LL);
  }
  DispBreakShift = BattleDeckServantData__GetDispBreakShift(inDeckSvt, 0LL);
  if ( DispBreakShift < 1 )
    goto LABEL_29;
  v40 = *p_shiftDeckList;
  if ( !v40 )
    goto LABEL_29;
  v41 = v40->max_length;
  if ( v14->fields.shiftDeckIndex >= v41 )
    goto LABEL_29;
  v42 = DispBreakShift;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v41 = v40->max_length;
  }
  this = (BattleServantData_o *)System_Math__Min_44514512(v34 + v42 + 1, v41, 0LL);
  shiftDeckList = v14->fields.shiftDeckList;
  v14->fields.shiftDeckIndex = (int)this;
  if ( !shiftDeckList )
LABEL_41:
    sub_B0D97C(this);
  if ( (int)this - 1 >= shiftDeckList->max_length )
    goto LABEL_42;
  v44 = (char *)shiftDeckList + 4 * (int)this - 4;
LABEL_25:
  if ( battleEnt )
    battleInfo = battleEnt->fields.battleInfo;
  else
    battleInfo = 0LL;
  inDeckSvta = BattleServantData__SetShiftDeckData(this, battleInfo, inDeckSvt, *((_DWORD *)v44 + 8), v33);
LABEL_29:
  if ( battleEnt )
    v46 = battleEnt->fields.battleInfo;
  else
    v46 = 0LL;
  inited = BattleServantData__setInitQuestShift(v14, &inDeckSvta, v46, v32);
  BattleServantData__setBaseServantData(v14, inDeckSvta, battleEnt, infollowerType, commandAssistDataList, 0, v48);
  BattleServantData__InitializeBuff(v14, v49);
  BattleServantData__setInitQuest(v14, inited, v50);
  if ( saveData )
  {
    v14->fields.shiftNpcId = saveData->fields.shiftNpcId;
    v14->fields.beforeUserSvtId = saveData->fields.beforeUserSvtId;
    v14->fields.transformIndex = saveData->fields.transformIndex;
    v14->fields.transformLimitCount = saveData->fields.transformLimitCount;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0LL, 0LL) )
    BattleServantData__loadTransformServant(v14, battleData, v51);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleServantData_SaveData_o *, Il2CppMethodPointer))v14->klass->vtable._17_setSaveData.method)(
                                  v14,
                                  saveData,
                                  v14->klass->vtable._18_getAiState.methodPtr);
  if ( !battleEnt )
    goto LABEL_41;
  BattleServantData__SetCommandAssistSkill(v14, battleEnt->fields.eventId, v52);
}


void __fastcall BattleServantData__setServantData_20742916(
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
    sub_B0D97C(this);
  ShiftList = BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  this->fields.shiftDeckList = ShiftList;
  sub_B0D840(
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
  sub_B0D840(
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
  BattleServantData__setBaseServantData_20743196(
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
  struct System_Int32_array *shiftDeckList; // x9
  int32_t v13; // w8
  struct System_Int32_array *changeSvtList; // x9
  char *v15; // x8
  int32_t *v16; // x8
  BattleDeckServantData_o *v17; // x21
  BattleEntity_o *battle_ent; // x20
  int32_t Int; // w0
  const MethodInfo *v20; // x6
  const MethodInfo *v21; // x1
  unsigned int MaxHp; // w0
  int32_t v23; // w8
  int32_t v24; // w10
  int v25; // w8
  __int64 v26; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_20;
  maxtpturn = this->fields.maxtpturn;
  nexttpturn = this->fields.nexttpturn;
  buffData = this->fields.buffData;
  uniqueId = this->fields.uniqueId;
  deckSvt = (BattleDeckServantData_o *)BattleDeckServantData__getShiftClearBuffIndiv(deckSvt, 0LL);
  if ( !buffData
    || (BattleBuffData__InitializeShift(buffData, uniqueId, (System_Int32_array *)deckSvt, 0LL),
        shiftDeckList = this->fields.shiftDeckList,
        v13 = this->fields.shiftDeckIndex + shiftValue,
        this->fields.shiftDeckIndex = v13,
        !shiftDeckList) )
  {
LABEL_20:
    sub_B0D97C(deckSvt);
  }
  if ( v13 - 1 >= shiftDeckList->max_length )
    goto LABEL_21;
  if ( !this->fields.changeSvtIndex )
  {
    v15 = (char *)shiftDeckList + 4 * v13 - 4;
    goto LABEL_10;
  }
  changeSvtList = this->fields.changeSvtList;
  if ( !changeSvtList )
    goto LABEL_20;
  if ( v13 >= changeSvtList->max_length )
  {
LABEL_21:
    v26 = sub_B0D9A8(deckSvt);
    sub_B0D948(v26, 0LL);
  }
  v15 = (char *)changeSvtList + 4 * v13;
LABEL_10:
  v16 = (int32_t *)(v15 + 32);
  if ( !data )
    goto LABEL_20;
  deckSvt = (BattleDeckServantData_o *)data->fields.battle_info;
  if ( !deckSvt )
    goto LABEL_20;
  deckSvt = BattleInfoData__getShiftServantData((BattleInfoData_o *)deckSvt, *v16, 0LL);
  if ( !deckSvt )
    goto LABEL_20;
  v17 = deckSvt;
  deckSvt->fields.id = this->fields.index + 1;
  deckSvt->fields.uniqueId = this->fields.uniqueId;
  battle_ent = data->fields.battle_ent;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v17, battle_ent, Int, 0LL, 0, v20);
  MaxHp = BattleServantData__getMaxHp(this, v21);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v23 = this->fields.maxtpturn;
  if ( nexttpturn <= v23 )
    v24 = nexttpturn;
  else
    v24 = this->fields.maxtpturn;
  if ( maxtpturn <= v23 )
    v25 = nexttpturn - maxtpturn + v23;
  else
    v25 = v24;
  this->fields.nexttpturn = v25 & ~(v25 >> 31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__setSkillShiftServant(
        BattleServantData_o *this,
        BattleData_o *data,
        int32_t npcId,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  System_Collections_Generic_List_int__o *v12; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  __int64 v15; // x22
  __int64 v16; // x8
  const MethodInfo *v17; // x1
  BattleDeckServantData_o *ShiftServantData; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleDeckServantData_o *v25; // x22
  struct BattleDeckServantData_o *v26; // x8
  int64_t userSvtId; // x9
  BattleEntity_o *battle_ent; // x23
  int32_t Int; // w0
  const MethodInfo *v30; // x6
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  unsigned __int64 v33; // x22
  signed __int64 size; // x24
  const MethodInfo *v35; // x1
  __int64 v36; // x23
  int32_t v37; // w8
  __int64 v38; // x0

  v6 = this;
  if ( (byte_42127C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    this = (BattleServantData_o *)sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_42127C8 = 1;
  }
  if ( (npcId & 0x80000000) == 0 )
  {
    deckSvt = v6->fields.deckSvt;
    *(_QWORD *)&v6->fields.transformIndex = 0xFFFFFFFFLL;
    v6->fields.shiftNpcId = npcId;
    if ( !deckSvt )
      goto LABEL_39;
    v6->fields.beforeUserSvtId = deckSvt->fields.userSvtId;
    v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      data,
                                                      *(_QWORD *)&npcId);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v6->fields.isEnemy )
    {
      this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v13);
      if ( !this )
        goto LABEL_39;
      v15 = 0LL;
      while ( (int)v15 < this->fields.uniqueId )
      {
        this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v14);
        if ( this )
        {
          if ( (unsigned int)v15 >= this->fields.uniqueId )
          {
LABEL_40:
            v38 = sub_B0D9A8(this);
            sub_B0D948(v38, 0LL);
          }
          v16 = *(&this->fields.userSvtId.fields.currentCryptoKey + v15);
          if ( v16 )
          {
            if ( v12 )
            {
              System_Collections_Generic_List_int___Add(
                v12,
                *(_DWORD *)(v16 + 40),
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
              this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v17);
              ++v15;
              if ( this )
                continue;
            }
          }
        }
        goto LABEL_39;
      }
    }
    if ( data )
    {
      this = (BattleServantData_o *)data->fields.battle_info;
      if ( this )
      {
        ShiftServantData = BattleInfoData__getShiftServantData((BattleInfoData_o *)this, v6->fields.shiftNpcId, 0LL);
        if ( !ShiftServantData )
          return;
        v25 = ShiftServantData;
        this = (BattleServantData_o *)&v6->fields.deckSvt;
        v26 = v6->fields.deckSvt;
        if ( v26 )
        {
          userSvtId = v25->fields.userSvtId;
          v25->fields.isFollowerSvt = v26->fields.isFollowerSvt;
          v6->fields.transformUserSvtId = userSvtId;
          v6->fields.deckSvt = v25;
          sub_B0D840((BattleServantConfConponent_o *)this, (System_Int32_array **)v25, v19, v20, v21, v22, v23, v24);
          v25->fields.id = v6->fields.index + 1;
          v25->fields.uniqueId = v6->fields.uniqueId;
          battle_ent = data->fields.battle_ent;
          Int = Follower__getInt(v6->fields.followerType, 0LL);
          BattleServantData__setBaseServantData(v6, v25, battle_ent, Int, 0LL, 0, v30);
          if ( !v6->fields.isEnemy )
          {
            this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v31);
            if ( !this )
              goto LABEL_39;
            v33 = 0LL;
            while ( (__int64)v33 < this->fields.uniqueId )
            {
              if ( !v12 )
                goto LABEL_39;
              size = v12->fields._size;
              this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v32);
              if ( !this )
                goto LABEL_39;
              if ( v33 >= (unsigned int)this->fields.uniqueId )
                goto LABEL_40;
              v36 = *(&this->fields.userSvtId.fields.currentCryptoKey + v33);
              if ( (__int64)v33 >= size )
              {
                if ( !v36 )
                  goto LABEL_39;
                v37 = 0;
              }
              else
              {
                if ( v33 >= (unsigned int)v12->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                if ( !v36 )
                  goto LABEL_39;
                v37 = v12->fields._items->m_Items[v33 + 1];
              }
              *(_DWORD *)(v36 + 40) = v37;
              ++v33;
              this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v35);
              if ( !this )
                goto LABEL_39;
            }
          }
          this = (BattleServantData_o *)data->fields.battle_info;
          if ( this )
          {
            this = (BattleServantData_o *)BattleInfoData__getUserServantFromID(
                                            (BattleInfoData_o *)this,
                                            v6->fields.transformUserSvtId,
                                            0LL);
            if ( this )
            {
              v6->fields.transformSvtId = BattleUserServantData__getBattleSvtId((BattleUserServantData_o *)this, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_39:
    sub_B0D97C(this);
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
  sub_B0D840(
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
    sub_B0D97C(this);
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
  BattleServantData_o *v10; // x19
  int32_t shiftNpcId; // w2
  int32_t uniqueId; // w1
  struct BattleDeckServantData_o *deckSvt; // x8
  BattleServantData_o *v14; // x24
  int64_t v15; // x1
  BattleUserServantData_o *UserServantFromID; // x21
  const MethodInfo *v17; // x4
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t atk; // w8
  int32_t hp; // w9
  int32_t maxActNum; // w10
  int32_t actPriority; // w10
  int32_t v28; // w9
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **individuality; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x22
  __int64 v44; // x23
  int32_t v45; // w0
  const MethodInfo *v46; // x2
  System_Int32_array **ServantOverwriteName; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int32_t v54; // w0
  const MethodInfo *v55; // x2
  System_Int32_array **BattleServantOverwriteName; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  const MethodInfo *v63; // x2
  BattleServantData_o *v64; // x0
  BattleUserServantData_o *v65; // x1
  BattleDeckServantData_o *DeckServantDataFromBothDeck; // x0
  BattleDeckServantData_o *v67; // x21
  BattleUserServantData_o *v68; // x20
  const MethodInfo *v69; // x4
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int32_t v76; // w8
  int32_t v77; // w9
  int32_t v78; // w10
  int32_t v79; // w10
  int32_t v80; // w9
  System_Int32_array **name; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x21
  __int64 v96; // x22
  int32_t v97; // w0
  const MethodInfo *v98; // x2
  System_Int32_array **v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  int32_t v106; // w0
  const MethodInfo *v107; // x2
  System_Int32_array **v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  const MethodInfo *v115; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16

  v10 = this;
  if ( (byte_42127C5 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, data);
    byte_42127C5 = 1;
  }
  shiftNpcId = v10->fields.shiftNpcId;
  if ( shiftNpcId >= 1 )
  {
    BattleServantData__setSkillShiftServant(v10, data, shiftNpcId, *(const MethodInfo **)&overwriteLimitCount);
    return;
  }
  if ( !data )
    goto LABEL_35;
  this = (BattleServantData_o *)data->fields.battle_info;
  if ( !this )
    goto LABEL_35;
  uniqueId = v10->fields.uniqueId;
  if ( transformIndex != -1 )
  {
    this = (BattleServantData_o *)BattleInfoData__getTransformDeckServantData(
                                    (BattleInfoData_o *)this,
                                    uniqueId,
                                    transformIndex,
                                    0LL);
    deckSvt = v10->fields.deckSvt;
    if ( deckSvt )
    {
      v14 = this;
      if ( this )
      {
        LOBYTE(this->fields.userSvtId.fields.hiddenValue) = deckSvt->fields.isFollowerSvt;
        v10->fields.transformIndex = transformIndex;
        v10->fields.transformLimitCount = overwriteLimitCount;
        v15 = *(_QWORD *)&this->fields.uniqueId;
        v10->fields.transformUserSvtId = v15;
        this = (BattleServantData_o *)data->fields.battle_info;
        if ( this )
        {
          UserServantFromID = BattleInfoData__getUserServantFromID((BattleInfoData_o *)this, v15, 0LL);
          BattleServantData__UpdateClassBoardSkillBuff(v10, UserServantFromID, data, fromLoad, v17);
          v10->fields.deckSvt = (struct BattleDeckServantData_o *)v14;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v10->fields.deckSvt,
            (System_Int32_array **)v14,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          if ( UserServantFromID )
          {
            atk = UserServantFromID->fields.atk;
            v10->fields.atk = atk;
            hp = UserServantFromID->fields.hp;
            v10->fields.maxhp = hp;
            v10->fields.maxtpturn = UserServantFromID->fields.chargeTurn;
            maxActNum = UserServantFromID->fields.maxActNum;
            if ( maxActNum )
              v10->fields.maxActNum = maxActNum;
            actPriority = UserServantFromID->fields.actPriority;
            if ( actPriority )
              v10->fields.actPriority = actPriority;
            v28 = v10->fields.equiphp + hp;
            v10->fields.atk = v10->fields.equipatk + atk;
            v10->fields.maxhp = v28;
            v10->fields.downstarrate = UserServantFromID->fields.starRate;
            v10->fields.downtdrate = UserServantFromID->fields.tdRate;
            v10->fields.atktdrate = UserServantFromID->fields.tdAttackRate;
            v10->fields.deathRate = UserServantFromID->fields.deathRate;
            v10->fields.criticalRate = UserServantFromID->fields.criticalRate;
            v10->fields.treasuredvcId = UserServantFromID->fields.treasureDeviceId;
            v10->fields.treasuredvcLevel = UserServantFromID->fields.treasureDeviceLv;
            v10->fields.transformSvtId = BattleUserServantData__getBattleSvtId(UserServantFromID, 0LL);
            v10->fields._imageSvtId_k__BackingField = UserServantFromID->fields.imageSvtId;
            v29 = *(System_Int32_array ***)&v14->fields.svtId.fields.fakeValue;
            v10->fields.svtName = (struct System_String_o *)v29;
            sub_B0D840((BattleServantConfConponent_o *)&v10->fields.svtName, v29, v30, v31, v32, v33, v34, v35);
            v10->fields.overkillTargetId = -1;
            individuality = (System_Int32_array **)UserServantFromID->fields.individuality;
            v10->fields.svtIndividuality = (struct System_Int32_array *)individuality;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v10->fields.svtIndividuality,
              individuality,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            v44 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.currentCryptoKey;
            v43 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v116.fields.currentCryptoKey = v44;
            *(_QWORD *)&v116.fields.fakeValue = v43;
            v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v116, 0LL);
            ServantOverwriteName = (System_Int32_array **)BattleServantData__getServantOverwriteName(v10, v45, v46);
            v10->fields.svtOverwriteName = (struct System_String_o *)ServantOverwriteName;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v10->fields.svtOverwriteName,
              ServantOverwriteName,
              v48,
              v49,
              v50,
              v51,
              v52,
              v53);
            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                    UserServantFromID->fields.svtId,
                    0LL);
            BattleServantOverwriteName = (System_Int32_array **)BattleServantData__getBattleServantOverwriteName(
                                                                  v10,
                                                                  v54,
                                                                  v55);
            v10->fields.svtOverwriteBattleName = (struct System_String_o *)BattleServantOverwriteName;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v10->fields.svtOverwriteBattleName,
              BattleServantOverwriteName,
              v57,
              v58,
              v59,
              v60,
              v61,
              v62);
            if ( overwriteLimitCount >= 1 )
            {
              v10->fields._dispLimitCount_k__BackingField = UserServantFromID->fields.dispLimitCount;
              v10->fields._commandCardLimitCount_k__BackingField = UserServantFromID->fields.commandCardLimitCount;
              v10->fields._iconLimitCount_k__BackingField = UserServantFromID->fields.iconLimitCount;
            }
            v64 = v10;
            v65 = UserServantFromID;
LABEL_33:
            BattleServantData__OverwriteSkillsForTransformedServant(v64, v65, v63);
            return;
          }
        }
      }
    }
    goto LABEL_35;
  }
  DeckServantDataFromBothDeck = BattleInfoData__GetDeckServantDataFromBothDeck((BattleInfoData_o *)this, uniqueId, 0LL);
  if ( DeckServantDataFromBothDeck )
  {
    *(_QWORD *)&v10->fields.transformIndex = 0xFFFFFFFFLL;
    v10->fields.transformUserSvtId = -1LL;
    v67 = DeckServantDataFromBothDeck;
    this = (BattleServantData_o *)data->fields.battle_info;
    if ( this )
    {
      v68 = BattleInfoData__getUserServantFromID((BattleInfoData_o *)this, v67->fields.userSvtId, 0LL);
      BattleServantData__UpdateClassBoardSkillBuff(v10, v68, data, fromLoad, v69);
      v10->fields.deckSvt = v67;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v10->fields.deckSvt,
        (System_Int32_array **)v67,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      if ( v68 )
      {
        v76 = v68->fields.atk;
        v10->fields.atk = v76;
        v77 = v68->fields.hp;
        v10->fields.maxhp = v77;
        v10->fields.maxtpturn = v68->fields.chargeTurn;
        v78 = v68->fields.maxActNum;
        if ( v78 )
          v10->fields.maxActNum = v78;
        v79 = v68->fields.actPriority;
        if ( v79 )
          v10->fields.actPriority = v79;
        v80 = v10->fields.equiphp + v77;
        v10->fields.atk = v10->fields.equipatk + v76;
        v10->fields.maxhp = v80;
        v10->fields.downstarrate = v68->fields.starRate;
        v10->fields.downtdrate = v68->fields.tdRate;
        v10->fields.atktdrate = v68->fields.tdAttackRate;
        v10->fields.deathRate = v68->fields.deathRate;
        v10->fields.criticalRate = v68->fields.criticalRate;
        v10->fields.treasuredvcId = v68->fields.treasureDeviceId;
        v10->fields.treasuredvcLevel = v68->fields.treasureDeviceLv;
        v10->fields.transformSvtId = BattleUserServantData__getBattleSvtId(v68, 0LL);
        v10->fields._imageSvtId_k__BackingField = v68->fields.imageSvtId;
        name = (System_Int32_array **)v67->fields.name;
        v10->fields.svtName = (struct System_String_o *)name;
        sub_B0D840((BattleServantConfConponent_o *)&v10->fields.svtName, name, v82, v83, v84, v85, v86, v87);
        v10->fields.overkillTargetId = -1;
        v88 = (System_Int32_array **)v68->fields.individuality;
        v10->fields.svtIndividuality = (struct System_Int32_array *)v88;
        sub_B0D840((BattleServantConfConponent_o *)&v10->fields.svtIndividuality, v88, v89, v90, v91, v92, v93, v94);
        v96 = *(_QWORD *)&v68->fields.svtId.fields.currentCryptoKey;
        v95 = *(_QWORD *)&v68->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v117.fields.currentCryptoKey = v96;
        *(_QWORD *)&v117.fields.fakeValue = v95;
        v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v117, 0LL);
        v99 = (System_Int32_array **)BattleServantData__getServantOverwriteName(v10, v97, v98);
        v10->fields.svtOverwriteName = (struct System_String_o *)v99;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v10->fields.svtOverwriteName,
          v99,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105);
        v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v68->fields.svtId, 0LL);
        v108 = (System_Int32_array **)BattleServantData__getBattleServantOverwriteName(v10, v106, v107);
        v10->fields.svtOverwriteBattleName = (struct System_String_o *)v108;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v10->fields.svtOverwriteBattleName,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113,
          v114);
        BattleServantData__CalculateLimitCountWithSpoilerProtection(v10, v68, v115);
        v64 = v10;
        v65 = v68;
        goto LABEL_33;
      }
    }
LABEL_35:
    sub_B0D97C(this);
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  _BOOL8 v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_421281A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_22173/*"shiftUpdateStatus"*/, v7);
    byte_421281A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B0D97C(v10);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22173/*"shiftUpdateStatus"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  BattleServantData_o *v10; // x23
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x26
  __int64 v13; // x24
  char v14; // w25
  int size; // w8

  v10 = this;
  if ( (byte_4212825 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, *(_QWORD *)&param);
    this = (BattleServantData_o *)sub_B0D8A4(
                                    &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                    v11);
    byte_4212825 = 1;
  }
  skillInfoList = v10->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_10:
    sub_B0D97C(this);
  v13 = 0LL;
  v14 = 0;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v13 >= size )
      return v14 & 1;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (BattleServantData_o *)skillInfoList->fields._items->m_Items[v13];
    if ( this )
    {
      this = (BattleServantData_o *)BattleSkillInfoData__TurnExtend(
                                      (BattleSkillInfoData_o *)this,
                                      param,
                                      max,
                                      targetIndex,
                                      targetList,
                                      0LL);
      skillInfoList = v10->fields.skillInfoList;
      v14 |= (unsigned __int8)this;
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
  BattleServantData_o *v10; // x23
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x26
  __int64 v13; // x24
  char v14; // w25
  int size; // w8

  v10 = this;
  if ( (byte_4212824 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, *(_QWORD *)&param);
    this = (BattleServantData_o *)sub_B0D8A4(
                                    &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                    v11);
    byte_4212824 = 1;
  }
  skillInfoList = v10->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_10:
    sub_B0D97C(this);
  v13 = 0LL;
  v14 = 0;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v13 >= size )
      return v14 & 1;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    this = (BattleServantData_o *)skillInfoList->fields._items->m_Items[v13];
    if ( this )
    {
      this = (BattleServantData_o *)BattleSkillInfoData__TurnProgress(
                                      (BattleSkillInfoData_o *)this,
                                      param,
                                      max,
                                      targetIndex,
                                      targetList,
                                      0LL);
      skillInfoList = v10->fields.skillInfoList;
      v14 |= (unsigned __int8)this;
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
  __int64 MaxHp; // x0
  int32_t v14; // w20
  RemovedBuffInfo_o *v15; // x21
  const MethodInfo *v16; // x3

  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)individuality);
  if ( !this->fields.buffData )
    sub_B0D97C(MaxHp);
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
  BattleServantData_o *v7; // x20
  System_Int32_array *IgnoreAuraBuffIds; // x0
  char v12; // w23
  const MethodInfo *v13; // x3
  BattleBuffData_BuffData_array *v14; // x21
  BattleBuffData_o *v15; // x23
  System_Int32_array *v16; // x0
  char v17; // w23
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  int max_length; // w8
  unsigned int v21; // w22
  BattleBuffData_BuffData_o *v22; // x8
  __int64 v24; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_15;
  v7 = this;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(this->fields.buffData, 0LL);
  this = (BattleServantData_o *)BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0LL);
  if ( !v7->fields.buffData )
    goto LABEL_15;
  v12 = (char)this;
  this = (BattleServantData_o *)BattleBuffData__turnProgressing(
                                  v7->fields.buffData,
                                  logic,
                                  isEndEnemyTurn,
                                  v7->fields.uniqueId,
                                  0LL);
  v14 = (BattleBuffData_BuffData_array *)this;
  if ( (v12 & 1) != 0 )
  {
    v15 = v7->fields.buffData;
    if ( !v15 )
      goto LABEL_15;
    v16 = BattleBuffData__GetIgnoreAuraBuffIds(v7->fields.buffData, 0LL);
    this = (BattleServantData_o *)BattleBuffData__checkBuffId(v15, v16, 0LL);
    v17 = (char)this;
    if ( !logic )
      goto LABEL_15;
  }
  else
  {
    v17 = 1;
    if ( !logic )
      goto LABEL_15;
  }
  BattleServantData__updateConditionsBuff(v7, fieldIndiv, logic->fields.perf, v13);
  BattleServantData__updateHp(v7, v18);
  BattleServantData__updateBuff(v7, v17 & 1, 1, v19);
  if ( !v14 )
    goto LABEL_15;
  max_length = v14->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v24 = sub_B0D9A8(this);
        sub_B0D948(v24, 0LL);
      }
      v22 = v14->m_Items[v21];
      if ( !v22 )
        break;
      BattleLogic__removeDoNotSelectCommandCardBuff(logic, v22->fields.buffId, v7, 0LL);
      max_length = v14->max_length;
      if ( (int)++v21 >= max_length )
        return v14;
    }
LABEL_15:
    sub_B0D97C(this);
  }
  return v14;
}


void __fastcall BattleServantData__turnBuffProgressingIncrease(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B0D97C(0LL);
  BattleBuffData__turnProgressingIncrease(buffData, 0LL);
}


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
  __int64 buffData; // x0
  int32_t ActValue_30818560; // w0
  const MethodInfo *v22; // x2
  int32_t v23; // w24
  int32_t v24; // w20
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t ActValue_30818056; // w24
  __int64 v28; // x1
  __int64 v29; // x2
  BattleLogicBuff_ReduceHpProcess_o *v30; // x26
  __int64 v31; // x1
  __int64 v32; // x2
  struct BattleLogicBuff_ConvertReduceRegainProcess_o *convertDamageProc; // x8
  int TotalConvertReduceToRegainParam_k__BackingField; // w8
  int v35; // w20
  bool v36; // w24
  DataVals_o *v37; // x24
  BattleBuffData_o *v38; // x27
  __int64 v39; // x1
  __int64 v40; // x2
  BattleBuffData_CheckIndividualitiesData_o *v41; // x28
  const MethodInfo *v42; // x2
  __int64 v43; // x27
  __int64 v44; // x8
  const MethodInfo *v45; // x2
  BattleActionData_o *NoEffectObject; // x0
  int32_t FixDamage; // w27
  const MethodInfo *v48; // x2
  int v49; // w24
  struct System_Int32_array *shiftDeckList; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v52; // x5
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x25
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  BattleActionData_o *v62; // x0
  int32_t Wave; // w0
  const MethodInfo *v64; // x5
  int32_t v65; // w25
  struct BattlePerformance_o *perf; // x8
  const MethodInfo *v67; // x3
  int v68; // w8
  __int64 v69; // x23
  unsigned int v70; // w20
  __int64 v71; // x25
  __int64 *v72; // x25
  __int64 v73; // t1
  __int64 v74; // x8
  int v75; // w9
  bool v76; // vf
  int v77; // w9
  struct BattleData_o *v78; // x8
  const MethodInfo *v79; // x1
  const MethodInfo *v80; // x1
  int32_t v81; // w22
  const MethodInfo *v82; // x2
  int maxtpturn; // w8
  const MethodInfo *v84; // x1
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x3
  __int64 v88; // x0
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-80h] BYREF
  System_String_o *missText; // [xsp+38h] [xbp-68h] BYREF
  bool v93; // [xsp+44h] [xbp-5Ch] BYREF
  bool actflg; // [xsp+48h] [xbp-58h] BYREF
  int32_t digit; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_42127ED & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, fieldIndiv);
    sub_B0D8A4(&BattleActionData_DamageData_TypeInfo, v10);
    sub_B0D8A4(&DataVals_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v14);
    sub_B0D8A4(&int___TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v16);
    sub_B0D8A4(&BattleLogicBuff_ReduceHpProcess_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_1/*""*/, v18);
    byte_42127ED = 1;
  }
  actflg = 0;
  v93 = 0;
  missText = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.isGutsSleepRelease = 1;
  digit = 1000;
  v19 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       fieldIndiv,
                                                       logic);
  BattleBuffData_CheckIndividualitiesData___ctor(v19, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !this->fields.isEnemy )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_95;
    ActValue_30818560 = BattleBuffData__getActValue_30818560((BattleBuffData_o *)buffData, 30, v19, 0LL);
    v23 = ActValue_30818560;
    if ( ActValue_30818560 <= 0 )
      v24 = ActValue_30818560;
    else
      v24 = 0;
    if ( BattleServantData__isGainNp(this, ActValue_30818560 > 0, v22) )
      v26 = v23;
    else
      v26 = v24;
    BattleServantData__addNp(this, v26, 1, v25);
  }
  actflg = 0;
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_95;
  ActValue_30818056 = BattleBuffData__getActValue_30818056((BattleBuffData_o *)buffData, 32, &actflg, v19, 0LL);
  v93 = 0;
  missText = 0LL;
  v30 = (BattleLogicBuff_ReduceHpProcess_o *)sub_B0D974(BattleLogicBuff_ReduceHpProcess_TypeInfo, v28, v29);
  BattleLogicBuff_ReduceHpProcess___ctor(v30, this, 0LL);
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_95;
  buffData = BattleBuffData__getActValue(
               (BattleBuffData_o *)buffData,
               33,
               &v93,
               &missText,
               v19,
               (BattleLogicBuff_BaseProcess_o *)v30,
               0LL);
  if ( !v30 )
    goto LABEL_95;
  convertDamageProc = v30->fields.convertDamageProc;
  if ( !convertDamageProc )
    goto LABEL_95;
  TotalConvertReduceToRegainParam_k__BackingField = convertDamageProc->fields._TotalConvertReduceToRegainParam_k__BackingField;
  v35 = TotalConvertReduceToRegainParam_k__BackingField + ActValue_30818056;
  if ( actflg )
  {
    if ( (v35 & 0x80000000) != 0 )
    {
      v36 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v36 = 0;
    if ( TotalConvertReduceToRegainParam_k__BackingField < 1 || (v35 & 0x80000000) != 0 )
      goto LABEL_33;
  }
  v37 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, v31, v32);
  DataVals___ctor(v37, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v38 = this->fields.buffData;
  v41 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v39,
                                                       v40);
  BattleBuffData_CheckIndividualitiesData___ctor(v41, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v38 )
    goto LABEL_95;
  if ( BattleBuffData__isTurnBuff(v38, 42, v41, 1, 0LL) )
  {
    LODWORD(v43) = 0;
  }
  else
  {
    buffData = BattleServantData__getUpDownHeal(this, &digit, v42);
    if ( !v37 )
      goto LABEL_95;
    v44 = digit;
    v37->fields.isShowForcedEffect = 1;
    v43 = (int)buffData * (__int64)v35 / v44;
  }
  BattleServantData__provisionalHeal(this, v43, v42);
  buffData = BattleServantData__resultHeal(this, v43, v45);
  if ( !actiondata )
    goto LABEL_95;
  buffData = (__int64)BattleActionData__setHealData(actiondata, this->fields.uniqueId, v43, 0, 0, v37, 0, 0LL);
  if ( (int)v43 <= 0 )
  {
    if ( !v37 )
      goto LABEL_95;
    if ( !v37->fields.isShowForcedEffect )
    {
      if ( !logic )
        goto LABEL_95;
      NoEffectObject = BattleLogic__getNoEffectObject(logic, this->fields.uniqueId, 0, v37, 0, 0LL, 0LL);
      BattleActionData__addAction(actiondata, NoEffectObject, 0LL);
    }
  }
  v36 = 1;
LABEL_33:
  FixDamage = BattleLogicBuff_ReduceHpProcess__GetFixDamage(v30, 0LL);
  buffData = BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(v30, 0LL);
  v93 = buffData & 1;
  if ( (buffData & 1) != 0 )
  {
    v49 = FixDamage & ~(FixDamage >> 31);
    if ( !isAlive )
    {
      buffData = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                   this,
                   this->klass->vtable._14_set_resultHp.methodPtr);
      if ( (int)buffData <= v49 )
      {
        buffData = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                     this,
                     this->klass->vtable._14_set_resultHp.methodPtr);
        v49 = buffData - 1;
      }
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
        && ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
             this,
             this->klass->vtable._14_set_resultHp.methodPtr) <= v49 )
      {
        v49 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                this,
                this->klass->vtable._14_set_resultHp.methodPtr)
            - 1;
      }
    }
    BattleServantData__provisionalDamage(this, v49, v48);
    BattleServantData__ResultDamage(this, v49, 0LL, 0LL, 0, v52);
    v55 = sub_B0D974(BattleActionData_DamageData_TypeInfo, v53, v54);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v55, 0LL);
    if ( !v55 )
      goto LABEL_95;
    *(_DWORD *)(v55 + 28) = this->fields.uniqueId;
    buffData = sub_B0D8BC(int___TypeInfo, 1LL);
    if ( !buffData )
      goto LABEL_95;
    if ( !*(_DWORD *)(buffData + 24) )
      goto LABEL_96;
    *(_DWORD *)(buffData + 32) = v49;
    *(_QWORD *)(v55 + 96) = buffData;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v55 + 96),
      (System_Int32_array **)buffData,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
    *(_DWORD *)(v55 + 16) = 0;
    *(_BYTE *)(v55 + 128) = 1;
    if ( !actiondata
      || (BattleActionData__setDamageData(actiondata, (BattleActionData_DamageData_o *)v55, 0LL, 0, 0, 0LL),
          (buffData = (__int64)this->fields.buffData) == 0)
      || (v62 = BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)buffData, this, 1, 0LL),
          BattleActionData__addSideEffectActionData(actiondata, v62, 1, 0LL),
          !logic) )
    {
LABEL_95:
      sub_B0D97C(buffData);
    }
    Wave = BattleLogic__getWave(logic, 0LL);
    BattleServantData__setActionHistory(this, -1, 5, Wave, 0, v64);
    v36 = 1;
  }
  if ( !this->fields.isEnemy )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_95;
    buffData = BattleBuffData__getActValue_30818560((BattleBuffData_o *)buffData, 31, v19, 0LL);
    if ( !actiondata )
      goto LABEL_95;
    v65 = buffData;
    BattleActionData__addCriticalStar(actiondata, buffData, 0LL);
    if ( !logic )
      goto LABEL_95;
    buffData = (__int64)logic->fields.data;
    if ( !buffData )
      goto LABEL_95;
    BattleData__addCriticalPoint((BattleData_o *)buffData, v65, 0, 0LL);
    perf = logic->fields.perf;
    if ( !perf )
      goto LABEL_95;
    buffData = (__int64)perf->fields.statusPerf;
    if ( !buffData )
      goto LABEL_95;
    BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)buffData, -1, 1, 0LL);
  }
  if ( BattleServantData__canUseSkill(this, -1, v48) )
  {
    buffData = (__int64)this->fields.skillInfoList;
    if ( !buffData )
      goto LABEL_95;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v90,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffData,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    for ( i = v90;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
          BattleSkillInfoData__TurnProgress((BattleSkillInfoData_o *)i.fields.current, 1, 0, -1, 0LL, 0LL) )
    {
      if ( !i.fields.current )
        sub_B0D97C(0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  }
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_95;
  buffData = (__int64)BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
  if ( !buffData )
    goto LABEL_95;
  v68 = *(_DWORD *)(buffData + 24);
  v69 = buffData;
  if ( v68 >= 1 )
  {
    v70 = 0;
    while ( v70 < v68 )
    {
      v71 = v69 + 8LL * (int)v70;
      v73 = *(_QWORD *)(v71 + 32);
      v72 = (__int64 *)(v71 + 32);
      buffData = v73;
      if ( !v73 )
        goto LABEL_95;
      buffData = BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( (buffData & 1) != 0 )
        goto LABEL_77;
      if ( v70 >= *(_DWORD *)(v69 + 24) )
        break;
      buffData = *v72;
      if ( !*v72 )
        goto LABEL_95;
      buffData = BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( (buffData & 1) != 0 )
      {
LABEL_77:
        if ( v70 >= *(_DWORD *)(v69 + 24) )
          break;
        v74 = *v72;
        if ( !*v72 )
          goto LABEL_95;
        v75 = *(_DWORD *)(v74 + 112);
        v76 = __OFSUB__(v75, 1);
        v77 = v75 - 1;
        if ( v77 < 0 == v76 )
          *(_DWORD *)(v74 + 112) = v77;
      }
      v68 = *(_DWORD *)(v69 + 24);
      if ( (int)++v70 >= v68 )
        goto LABEL_82;
    }
LABEL_96:
    v88 = sub_B0D9A8(buffData);
    sub_B0D948(v88, 0LL);
  }
LABEL_82:
  if ( !logic )
    goto LABEL_95;
  v78 = logic->fields.data;
  if ( !v78 )
    goto LABEL_95;
  if ( !BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(this, v78->fields.wavecount, v78->fields.turnCount, v67)
    && !BattleServantData__isTDSeraled(this, v79)
    && !BattleServantData__isNobleSeal(this, v80)
    && this->fields.treasuredvcId >= 1 )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_95;
    v81 = BattleBuffData__getActValue_30818560((BattleBuffData_o *)buffData, 35, v19, 0LL);
    if ( BattleServantData__isGainNp(this, 1, v82) )
    {
      maxtpturn = this->fields.nexttpturn + ~v81;
      if ( this->fields.maxtpturn < maxtpturn )
        maxtpturn = this->fields.maxtpturn;
      this->fields.nexttpturn = maxtpturn & ~(maxtpturn >> 31);
    }
  }
  buffData = (__int64)this->fields.aiState;
  if ( !buffData )
    goto LABEL_95;
  AiState__fieldTurnProgressing((AiState_o *)buffData, 0LL);
  BattleServantData__updateHp(this, v84);
  BattleServantData__updateConditionsBuff(this, fieldIndiv, logic->fields.perf, v85);
  BattleServantData__updateBuff(this, 1, 1, v86);
  return v36;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__updateBuff(
        BattleServantData_o *this,
        bool doAuraUpdate,
        bool doClassIconAuraUpdate,
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
  __int64 v17; // x19
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v25; // x20
  Il2CppObject *current; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4212822 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, doAuraUpdate);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B0D8A4(&Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__, v9);
    sub_B0D8A4(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo, v10);
    sub_B0D8A4(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___, v11);
    sub_B0D8A4(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass517_0__updateBuff_b__0__, v15);
    sub_B0D8A4(&BattleServantData___c__DisplayClass517_0_TypeInfo, v16);
    byte_4212822 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v17 = sub_B0D974(BattleServantData___c__DisplayClass517_0_TypeInfo, doAuraUpdate, doClassIconAuraUpdate);
  BattleServantData___c__DisplayClass517_0___ctor((BattleServantData___c__DisplayClass517_0_o *)v17, 0LL);
  if ( !v17
    || (*(_QWORD *)(v17 + 16) = this,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v17 + 16),
          (System_Int32_array **)this,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        *(_BYTE *)(v17 + 24) = doAuraUpdate,
        *(_BYTE *)(v17 + 25) = doClassIconAuraUpdate,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_B0D97C(paramobjelist);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v37 = v36;
  v25 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v17 + 32);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v37.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v29 = *v25;
      if ( !*v25 )
      {
        v29 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_B0D974(
                                                                              UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo,
                                                                              v27,
                                                                              v28);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v29,
          (Il2CppObject *)v17,
          Method_BattleServantData___c__DisplayClass517_0__updateBuff_b__0__,
          (const MethodInfo_25F4A0C *)Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__);
        *v25 = v29;
        sub_B0D840((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
      }
      if ( (BYTE3(UnityEngine_EventSystems_ExecuteEvents_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      }
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v29,
        (const MethodInfo_1B5E9A4 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Int32_array *canSubStateBuffIndv; // x0
  BattleActorControl_o *ServantActor; // x27
  const MethodInfo *v17; // x4
  BattleLogic_o *logic; // x28
  const MethodInfo *v19; // x1

  if ( (byte_421286C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, fieldInfividualities);
    byte_421286C = 1;
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
  canSubStateBuffIndv = (System_Int32_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL);
  ServantActor = 0LL;
  if ( ((unsigned __int8)canSubStateBuffIndv & 1) != 0 )
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
  canSubStateBuffIndv = (System_Int32_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL);
  logic = 0LL;
  if ( ((unsigned __int8)canSubStateBuffIndv & 1) != 0 )
  {
    if ( !perf )
      goto LABEL_17;
    logic = perf->fields.logic;
  }
  canSubStateBuffIndv = BattleServantData__getBuffIndividualities(this, 0, 0, 1, v17);
  if ( !buffData )
LABEL_17:
    sub_B0D97C(canSubStateBuffIndv);
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
  _BOOL8 v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4212821 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_17327/*"changeHp"*/, v7);
    byte_4212821 = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v14.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v13 )
    {
      if ( !current )
        sub_B0D97C(v13);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17327/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  _BOOL8 v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_421281B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_23016/*"updateNp"*/, v7);
    byte_421281B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B0D97C(v10);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_23016/*"updateNp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__updateNpGauge_20792784(
        BattleServantData_o *this,
        System_Int32_array *incNpArray,
        int32_t index,
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
  __int64 v17; // x19
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
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
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v31; // x20
  Il2CppObject *current; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v35; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_421281C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, incNpArray);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B0D8A4(&Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__, v9);
    sub_B0D8A4(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo, v10);
    sub_B0D8A4(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___, v11);
    sub_B0D8A4(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_BattleServantData___c__DisplayClass505_0__updateNpGauge_b__0__, v15);
    sub_B0D8A4(&BattleServantData___c__DisplayClass505_0_TypeInfo, v16);
    byte_421281C = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v17 = sub_B0D974(BattleServantData___c__DisplayClass505_0_TypeInfo, incNpArray, *(_QWORD *)&index);
  BattleServantData___c__DisplayClass505_0___ctor((BattleServantData___c__DisplayClass505_0_o *)v17, 0LL);
  if ( !v17
    || (*(_QWORD *)(v17 + 16) = this,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v17 + 16),
          (System_Int32_array **)this,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        *(_QWORD *)(v17 + 24) = incNpArray,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v17 + 24),
          (System_Int32_array **)incNpArray,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        *(_DWORD *)(v17 + 32) = index,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_B0D97C(paramobjelist);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v43 = v42;
  v31 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v17 + 40);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v43.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v35 = *v31;
      if ( !*v31 )
      {
        v35 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_B0D974(
                                                                              UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo,
                                                                              v33,
                                                                              v34);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v35,
          (Il2CppObject *)v17,
          Method_BattleServantData___c__DisplayClass505_0__updateNpGauge_b__0__,
          (const MethodInfo_25F4A0C *)Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__);
        *v31 = v35;
        sub_B0D840((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
      }
      if ( (BYTE3(UnityEngine_EventSystems_ExecuteEvents_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      }
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v35,
        (const MethodInfo_1B5E9A4 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  _BOOL8 v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_421281E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_23021/*"updateTDGauge"*/, v7);
    byte_421281E = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B0D97C(v10);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_23021/*"updateTDGauge"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  _BOOL8 v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_421281D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_23023/*"updateView"*/, v7);
    byte_421281D = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B0D97C(v10);
      UnityEngine_GameObject__SendMessage_40783576(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_23023/*"updateView"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__useGuts(
        BattleServantData_o *this,
        int32_t maxhp,
        System_String_o **motionName,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_array *v7; // x0

  buffData = this->fields.buffData;
  v7 = BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(this, *(const MethodInfo **)&maxhp);
  if ( !buffData )
    sub_B0D97C(v7);
  return BattleBuffData__useGuts(buffData, maxhp, motionName, v7, 0LL);
}


void __fastcall BattleServantData__useSkill(
        BattleServantData_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  void *Instance; // x0
  SkillLvMaster_o *v6; // x20

  if ( (byte_42127EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42127EC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !skillInfo)
    || (v6 = (SkillLvMaster_o *)Instance,
        Instance = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                             skillInfo,
                             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        !v6)
    || (Instance = SkillLvMaster__GetEntity(v6, (int32_t)Instance, skillInfo->fields.skilllv, 0LL)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  skillInfo->fields.chargeTurn = *((_DWORD *)Instance + 6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__usedTpWeapon(
        BattleServantData_o *this,
        int32_t addPer,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UseNoblePhantasmWaveTurnEvent_o *v8; // x22
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0
  int32_t v10; // w0
  BattleBuffData_o *buffData; // x21
  int v12; // w23
  __int64 v13; // x1
  __int64 v14; // x2
  BattleBuffData_CheckIndividualitiesData_o *v15; // x22
  int32_t v16; // w8

  if ( (byte_421280C & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&addPer);
    sub_B0D8A4(&UseNoblePhantasmWaveTurnEvent_TypeInfo, v7);
    byte_421280C = 1;
  }
  this->fields.nexttpturn = this->fields.maxtpturn;
  v8 = (UseNoblePhantasmWaveTurnEvent_o *)sub_B0D974(
                                            UseNoblePhantasmWaveTurnEvent_TypeInfo,
                                            *(_QWORD *)&addPer,
                                            battleData);
  UseNoblePhantasmWaveTurnEvent___ctor(v8, battleData, 0LL);
  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner
    || (ServantWaveTurnEventOwner__Add(waveTurnEventOwner, (ServantWaveTurnEvent_o *)v8, 0LL),
        v10 = BattleUtility__FloorToInt((float)((float)this->fields.np / (float)this->fields.lineMaxNp) * 100.0, 0LL),
        buffData = this->fields.buffData,
        v12 = v10,
        v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B0D974(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v13,
                                                             v14),
        BattleBuffData_CheckIndividualitiesData___ctor(v15, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_B0D97C(waveTurnEventOwner);
  }
  if ( v12 <= 100 )
    v12 = 100;
  v16 = v12 + addPer + 100 * BattleBuffData__getActValue_30818560(buffData, 60, v15, 0LL);
  if ( v16 >= 500 )
    v16 = 500;
  this->fields.tmp_npper = v16;
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


void __fastcall BattleServantData_PartAnimationSaveData___ctor(
        BattleServantData_PartAnimationSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleServantData_PartAnimationSaveData_o *__fastcall BattleServantData_PartAnimationSaveData__Init(
        BattleServantData_PartAnimationSaveData_o *this,
        System_String_o *keyName,
        BattlePlayAnimationComponent_SaveData_array *array,
        const MethodInfo *method)
{
  this->fields.key = keyName;
  sub_B0D840(&this->fields, keyName);
  this->fields.saveDataArray = array;
  sub_B0D840(&this->fields.saveDataArray, array);
  return this;
}


void __fastcall BattleServantData_SaveData___ctor(BattleServantData_SaveData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0

  if ( (byte_4211EFF & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_4211EFF = 1;
  }
  *(_QWORD *)&this->fields.deckIndex = -1LL;
  this->fields.dressDispId = -1;
  this->fields.shiftNpcId = -1;
  v3 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 5LL);
  this->fields.commandAssistIds = v3;
  sub_B0D840(&this->fields.commandAssistIds, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BattleServantData___c_StaticFields *static_fields; // x0

  if ( (byte_4211EF9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantData___c_TypeInfo, v1);
    byte_4211EF9 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleServantData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleServantData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantData___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall BattleServantData___c___ctor(BattleServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c___EnumerateSkillIndividuality_b__607_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.type != 20;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData___c___EnumerateSkillIndividuality_b__607_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return (System_Collections_Generic_IEnumerable_int__o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))x->klass->vtable._6_get_IndividualityArray.method)(
                                                            x,
                                                            x->klass->vtable._7_getCutInId.methodPtr);
}


int32_t __fastcall BattleServantData___c___GetAddSideEffectBuffList_b__430_1(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.addOrder;
}


bool __fastcall BattleServantData___c___ResetServantSelfSkill_b__363_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.type == 11;
}


bool __fastcall BattleServantData___c___getActiveSkillInfos_b__389_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return !s->fields.isPassive && s->fields.isUseSkill;
}


int32_t __fastcall BattleServantData___c___getAiParam_b__660_0(
        BattleServantData___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s;
}


int32_t __fastcall BattleServantData___c___getAttackSideEffectBuffList_b__429_0(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *a1,
        BattleBuffData_BuffData_o *a2,
        const MethodInfo *method)
{
  if ( !a1 || !a2 )
    sub_B0D97C(this);
  return a1->fields.addOrder - a2->fields.addOrder;
}


bool __fastcall BattleServantData___c___getPassiveSkills_b__310_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.isPassive;
}


BattleServantData_PartAnimationSaveData_o *__fastcall BattleServantData___c___getSaveData_b__275_0(
        BattleServantData___c_o *this,
        System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____o x,
        const MethodInfo *method)
{
  struct BattlePlayAnimationComponent_SaveData_array *value; // x19
  struct System_String_o *key; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  __int64 v8; // x0

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_4211EFA & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____get_Key__,
      x.fields.key);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____get_Value__,
      v5);
    sub_B0D8A4(&BattleServantData_PartAnimationSaveData_TypeInfo, v6);
    byte_4211EFA = 1;
  }
  v7 = (Il2CppObject *)sub_B0D974(BattleServantData_PartAnimationSaveData_TypeInfo, x.fields.key, x.fields.value);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  v7[1].klass = (Il2CppClass *)key;
  sub_B0D840(&v7[1], key);
  v7[1].monitor = value;
  sub_B0D840(&v7[1].monitor, value);
  return (BattleServantData_PartAnimationSaveData_o *)v7;
}


System_String_o *__fastcall BattleServantData___c___setSaveData_b__280_0(
        BattleServantData___c_o *this,
        BattleServantData_PartAnimationSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.key;
}


BattlePlayAnimationComponent_SaveData_array *__fastcall BattleServantData___c___setSaveData_b__280_1(
        BattleServantData___c_o *this,
        BattleServantData_PartAnimationSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.saveDataArray;
}


void __fastcall BattleServantData___c__628_object____cctor(const MethodInfo_1F10388 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BattleServantData___c__628_T__c *klass; // x20
  Il2CppClass *_0_BattleServantData___c__628_T; // x20
  __int64 v6; // x0
  BattleServantData___c__628_T__c *v7; // x22
  System_Int32_array **v8; // x20
  __int16 v9; // w8
  BattleServantData___c__628_T__c *v10; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleServantData___c__628_T__c *v18; // x19
  Il2CppClass *_2_BattleServantData___c__628_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass);
  _0_BattleServantData___c__628_T = klass->rgctx_data->_0_BattleServantData___c__628_T_;
  if ( (BYTE2(_0_BattleServantData___c__628_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_0_BattleServantData___c__628_T);
  v6 = sub_B0D974(_0_BattleServantData___c__628_T, v1, v2);
  v7 = method->klass;
  v8 = (System_Int32_array **)v6;
  v9 = WORD1(v7->vtable._0_Equals.methodPtr);
  v10 = v7;
  if ( (v9 & 1) == 0 )
  {
    sub_AA65A4(method->klass);
    v10 = method->klass;
    v9 = WORD1(v10->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v7->rgctx_data->_1_BattleServantData___c__628_T___ctor->methodPointer;
  if ( (v9 & 1) == 0 )
    sub_AA65A4(v10);
  methodPointer(v8, v10->rgctx_data->_1_BattleServantData___c__628_T___ctor);
  v18 = method->klass;
  if ( (BYTE2(v18->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AA65A4(v18);
  _2_BattleServantData___c__628_T = v18->rgctx_data->_2_BattleServantData___c__628_T_;
  if ( (BYTE2(_2_BattleServantData___c__628_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_2_BattleServantData___c__628_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleServantData___c__628_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B0D840(static_fields, v8, v12, v13, v14, v15, v16, v17);
}


void __fastcall BattleServantData___c__628_object____ctor(
        BattleServantData___c__628_T__o *this,
        const MethodInfo_1F10464 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__628_object____HasWaveTurnEvent_b__628_0(
        BattleServantData___c__628_T__o *this,
        ServantWaveTurnEvent_o *x,
        const MethodInfo_1F1047C *method)
{
  Il2CppClass *_3_T; // x19

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE2(_3_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass->rgctx_data->_3_T);
  return sub_B0D964(x, _3_T) != 0;
}


void __fastcall BattleServantData___c__DisplayClass293_0___ctor(
        BattleServantData___c__DisplayClass293_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass293_0___setBaseServantData_b__1(
        BattleServantData___c__DisplayClass293_0_o *this,
        commandAssistData_o *x,
        const MethodInfo *method)
{
  struct BattleDeckServantData_o *inDeckSvt; // x8

  if ( !x || (inDeckSvt = this->fields.inDeckSvt) == 0LL )
    sub_B0D97C(this);
  return x->fields.userSvtId == inDeckSvt->fields.userSvtId;
}


void __fastcall BattleServantData___c__DisplayClass293_1___ctor(
        BattleServantData___c__DisplayClass293_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass293_1___setBaseServantData_b__0(
        BattleServantData___c__DisplayClass293_1_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct CommandCodeInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B0D97C(this);
  return info->fields.id == id;
}


void __fastcall BattleServantData___c__DisplayClass293_2___ctor(
        BattleServantData___c__DisplayClass293_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass293_2___setBaseServantData_b__2(
        BattleServantData___c__DisplayClass293_2_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass293_2_o *v4; // x20
  struct BattleServantData___c__DisplayClass293_0_o *CS___8__locals1; // x9
  struct System_Int32_array *skillIdList; // x10
  __int64 i; // x8
  struct System_Int32_array *skillLvList; // x9
  __int64 v10; // x0

  if ( !x )
    goto LABEL_10;
  v4 = this;
  this = (BattleServantData___c__DisplayClass293_2_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._5_get_skillId.method)(
                                                         x,
                                                         x->klass->vtable._6_get_IndividualityArray.methodPtr,
                                                         method);
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  skillIdList = CS___8__locals1->fields.skillIdList;
  if ( !skillIdList )
    goto LABEL_10;
  i = v4->fields.i;
  if ( (unsigned int)i >= skillIdList->max_length )
    goto LABEL_11;
  if ( (_DWORD)this == skillIdList->m_Items[i + 1] )
  {
    skillLvList = CS___8__locals1->fields.skillLvList;
    if ( skillLvList )
    {
      if ( (unsigned int)i < skillLvList->max_length )
        return x->fields.skilllv == skillLvList->m_Items[i + 1];
LABEL_11:
      v10 = sub_B0D9A8(this);
      sub_B0D948(v10, 0LL);
    }
LABEL_10:
    sub_B0D97C(this);
  }
  return 0;
}


void __fastcall BattleServantData___c__DisplayClass308_0___ctor(
        BattleServantData___c__DisplayClass308_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass308_0___ReplaceSelfSkillInfo_b__0(
        BattleServantData___c__DisplayClass308_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.type == this->fields.skillInfoType && x->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass311_0___ctor(
        BattleServantData___c__DisplayClass311_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass311_0___GetHasSideEffectSkillEffectIds_b__0(
        BattleServantData___c__DisplayClass311_0_o *this,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass311_0_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_String_array *svals; // x8
  unsigned __int64 v9; // x23
  unsigned __int64 max_length; // x9
  System_String_o *v11; // x22
  DataVals_o *v12; // x21
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v14; // x9
  int32_t v15; // w21
  __int64 v16; // x0

  v4 = this;
  if ( (byte_4211EFB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, ent);
    sub_B0D8A4(&DataVals_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v6);
    this = (BattleServantData___c__DisplayClass311_0_o *)sub_B0D8A4(
                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                           v7);
    byte_4211EFB = 1;
  }
  if ( !ent || (svals = ent->fields.svals) == 0LL )
LABEL_20:
    sub_B0D97C(this);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = svals->max_length;
    if ( (__int64)v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_22;
    v11 = svals->m_Items[v9];
    v12 = (DataVals_o *)sub_B0D974(DataVals_TypeInfo, ent, method);
    DataVals___ctor(v12, v11, 0LL);
    funcId = ent->fields.funcId;
    if ( !funcId )
      goto LABEL_20;
    v14 = funcId->max_length;
    if ( (__int64)v9 < (int)v14 )
    {
      if ( v9 >= v14 )
      {
LABEL_22:
        v16 = sub_B0D9A8(this);
        sub_B0D948(v16, 0LL);
      }
      this = (BattleServantData___c__DisplayClass311_0_o *)v4->fields.funcMst;
      if ( !this )
        goto LABEL_20;
      this = (BattleServantData___c__DisplayClass311_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                             funcId->m_Items[v9 + 1],
                                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        if ( !v12 )
          goto LABEL_20;
        DataVals__SetTempType(v12, v4->fields.funcMst, (int32_t)this->fields.retList, 0LL);
        this = (BattleServantData___c__DisplayClass311_0_o *)DataVals__GetParam(v12, 34, 0, 0LL);
        if ( (int)this >= 1 )
        {
          v15 = (int)this;
          this = (BattleServantData___c__DisplayClass311_0_o *)v4->fields.retList;
          if ( !this )
            goto LABEL_20;
          this = (BattleServantData___c__DisplayClass311_0_o *)System_Collections_Generic_List_int___Contains(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 v15,
                                                                 (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (BattleServantData___c__DisplayClass311_0_o *)v4->fields.retList;
            if ( !this )
              goto LABEL_20;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)this,
              v15,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
    svals = ent->fields.svals;
    ++v9;
    if ( !svals )
      goto LABEL_20;
  }
}


void __fastcall BattleServantData___c__DisplayClass362_0___ctor(
        BattleServantData___c__DisplayClass362_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass362_0___setContinue_b__0(
        BattleServantData___c__DisplayClass362_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t buffId; // w19
  BattleServantData___c__DisplayClass362_0_o *v4; // x20
  bool IsUnSubStateWhenAliveContinue; // w0

  if ( !buff )
    goto LABEL_13;
  buffId = buff->fields.buffId;
  v4 = this;
  if ( !this->fields.isDeadContinue )
  {
    if ( ((buff->fields.turn & 0x80000000) == 0 || (buff->fields.count & 0x80000000) == 0)
      && !BattleBuffData_BuffData__IsPermanentSleep(buff, 0LL) )
    {
      return 0;
    }
    this = (BattleServantData___c__DisplayClass362_0_o *)v4->fields.buffMst;
    if ( this )
    {
      IsUnSubStateWhenAliveContinue = BuffMaster__IsUnSubStateWhenAliveContinue((BuffMaster_o *)this, buffId, 0LL);
      return !IsUnSubStateWhenAliveContinue;
    }
LABEL_13:
    sub_B0D97C(this);
  }
  this = (BattleServantData___c__DisplayClass362_0_o *)this->fields.buffMst;
  if ( !this )
    goto LABEL_13;
  IsUnSubStateWhenAliveContinue = BuffMaster__IsUnSubStateWhenDeadContinue((BuffMaster_o *)this, buffId, 0LL);
  return !IsUnSubStateWhenAliveContinue;
}


void __fastcall BattleServantData___c__DisplayClass386_0___ctor(
        BattleServantData___c__DisplayClass386_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass386_0___isUseSelfSkill_b__0(
        BattleServantData___c__DisplayClass386_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.type == 11 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass387_0___ctor(
        BattleServantData___c__DisplayClass387_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass387_0___getSelfSkillInfo_b__0(
        BattleServantData___c__DisplayClass387_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.type == 11 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass388_0___ctor(
        BattleServantData___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass388_0___getTempSkillInfo_b__0(
        BattleServantData___c__DisplayClass388_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B0D97C(this);
  return s->fields.type == 20 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass430_0___ctor(
        BattleServantData___c__DisplayClass430_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleServantData___c__DisplayClass430_0___GetAddSideEffectBuffList_b__0(
        BattleServantData___c__DisplayClass430_0_o *this,
        int32_t act,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x9
  BattleServantData___c__DisplayClass430_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (BattleServantData___c__DisplayClass430_0_o *)_4__this->fields.buffData) == 0LL) )
    sub_B0D97C(this);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetFixBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                act,
                                                                                v4->fields.checkData,
                                                                                1,
                                                                                0LL);
}


void __fastcall BattleServantData___c__DisplayClass505_0___ctor(
        BattleServantData___c__DisplayClass505_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass505_0___updateNpGauge_b__0(
        BattleServantData___c__DisplayClass505_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass505_0_o *v5; // x20
  IEventMessageRecieve_c *klass; // x8
  struct System_Int32_array *incNpArray; // x21
  struct BattleServantData_o *_4__this; // x22
  unsigned int index; // w20
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_4211EFC & 1) == 0 )
  {
    this = (BattleServantData___c__DisplayClass505_0_o *)sub_B0D8A4(&IEventMessageRecieve_TypeInfo, reciever);
    byte_4211EFC = 1;
  }
  if ( !reciever )
    sub_B0D97C(this);
  klass = reciever->klass;
  _4__this = v5->fields.__4__this;
  incNpArray = v5->fields.incNpArray;
  index = v5->fields.index;
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
    p_method = sub_AA67A0(reciever, IEventMessageRecieve_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, struct System_Int32_array *, _QWORD, _QWORD))p_method)(
    reciever,
    _4__this,
    incNpArray,
    index,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass517_0___ctor(
        BattleServantData___c__DisplayClass517_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass517_0___updateBuff_b__0(
        BattleServantData___c__DisplayClass517_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass517_0_o *v5; // x21
  struct BattleServantData_o *_4__this; // x20
  IEventMessageRecieve_c *klass; // x8
  _BOOL4 doAuraUpdate; // w22
  _BOOL4 doClassIconAuraUpdate; // w21
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_4211EFD & 1) == 0 )
  {
    this = (BattleServantData___c__DisplayClass517_0_o *)sub_B0D8A4(&IEventMessageRecieve_TypeInfo, reciever);
    byte_4211EFD = 1;
  }
  if ( !reciever )
    sub_B0D97C(this);
  _4__this = v5->fields.__4__this;
  klass = reciever->klass;
  doAuraUpdate = v5->fields.doAuraUpdate;
  doClassIconAuraUpdate = v5->fields.doClassIconAuraUpdate;
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
    p_method = sub_AA67A0(reciever, IEventMessageRecieve_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, _BOOL4, _BOOL4, _QWORD))p_method)(
    reciever,
    _4__this,
    doAuraUpdate,
    doClassIconAuraUpdate,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass603_0___ctor(
        BattleServantData___c__DisplayClass603_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData___c__DisplayClass603_0___EnumerateIndividuality_b__0(
        BattleServantData___c__DisplayClass603_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_4211EFE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_4211EFE = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.subBuffIndividualities,
            x,
            (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall BattleServantData___c__DisplayClass684_0___ctor(
        BattleServantData___c__DisplayClass684_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass684_0___GetCommandCodeInfo_b__0(
        BattleServantData___c__DisplayClass684_0_o *this,
        CommandCodeInfo_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B0D97C(this);
  return c->fields.id == this->fields.userCommandCodeId;
}


void __fastcall BattleServantData___c__DisplayClass721_0___ctor(
        BattleServantData___c__DisplayClass721_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass721_0___UpdateClassBoardSkillBuff_b__0(
        BattleServantData___c__DisplayClass721_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass721_0_o *v3; // x19
  struct AddSkillData_o *skillData; // x8

  if ( !s
    || (v3 = this,
        this = (BattleServantData___c__DisplayClass721_0_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._5_get_skillId.method)(
                                                               s,
                                                               s->klass->vtable._6_get_IndividualityArray.methodPtr,
                                                               method),
        (skillData = v3->fields.skillData) == 0LL) )
  {
    sub_B0D97C(this);
  }
  return (_DWORD)this == skillData->fields.id;
}