void __fastcall BattleServantData___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData___ctor(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleServantSnapShotGroupDefault_o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  AiState_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  ServantWaveTurnEventOwner_o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v73; // x20
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct System_Int32_array *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7

  if ( (byte_4185BBF & 1) == 0 )
  {
    sub_B2C35C(&AiState_TypeInfo, method);
    sub_B2C35C(&BattleServantSnapShotGroupDefault_TypeInfo, v3);
    sub_B2C35C(&int___TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v14);
    sub_B2C35C(&ServantWaveTurnEventOwner_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_1/*""*/, v16);
    byte_4185BBF = 1;
  }
  this->fields.deckIndex = -1;
  this->fields.transformUserSvtId = -1LL;
  this->fields.transformIndex = -1;
  this->fields.appearanceId = -1;
  *(int64_t *)((char *)&this->fields.beforeUserSvtId + 4) = -1LL;
  *(_QWORD *)&this->fields.shiftNpcId = -1LL;
  v17 = (System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *)sub_B2C42C(System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo);
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot____ctor(
    v17,
    (const MethodInfo_210AC98 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__);
  this->fields.actionHistory = (struct System_Collections_Generic_LinkedList_BattleServantActionHistory__o *)v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.actionHistory,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (BattleServantSnapShotGroupDefault_o *)sub_B2C42C(BattleServantSnapShotGroupDefault_TypeInfo);
  BattleServantSnapShotGroupDefault___ctor(v24, 0LL);
  this->fields._SnapShotDamagedOnLogicDead_k__BackingField = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._SnapShotDamagedOnLogicDead_k__BackingField,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (AiState_o *)sub_B2C42C(AiState_TypeInfo);
  AiState___ctor(v31, 0LL);
  this->fields.aiState = v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aiState,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.actorScale = 100;
  *(_QWORD *)&this->fields.nplineCount = 0x6400000003LL;
  *(_QWORD *)&this->fields.roleType = 0xFFFFFFFF00000001LL;
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  this->fields.skillInfoList = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)v38;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillInfoList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.tdErrorStatusVoiceSeList = (struct System_Collections_Generic_List_string__o *)v45;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tdErrorStatusVoiceSeList,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.deadTurn = 1;
  v52 = (ServantWaveTurnEventOwner_o *)sub_B2C42C(ServantWaveTurnEventOwner_TypeInfo);
  ServantWaveTurnEventOwner___ctor(v52, 0LL);
  this->fields.waveTurnEventOwner = v52;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.waveTurnEventOwner,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.paramobjelist = (struct System_Collections_Generic_List_GameObject__o *)v59;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.paramobjelist,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.statestring, v66, v67, v68, v69, v70, v71, v72);
  this->fields.isGutsSleepRelease = 1;
  this->fields.wasAttackTargetId = -1;
  this->fields.nextPossibleTimePopEffect = -1.0;
  *(_QWORD *)&this->fields.selectedTDCardId = -1LL;
  v73 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v73,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
  this->fields.adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)v73;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.adjustmentList,
    (System_Int32_array **)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  this->fields.tempTreasuredvcLv = 1;
  v80 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.wkzero = v80;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.wkzero,
    (System_Int32_array **)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
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
  __int64 v11; // x1
  System_Collections_ICollection_o *ClassBoardSkillArray; // x22
  void *monitor; // x8
  unsigned __int64 v14; // x23
  int32_t *v15; // x8
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w4
  __int64 v20; // x0
  const MethodInfo *v21; // [xsp+0h] [xbp-50h]

  if ( (byte_4185BB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, userSvtData);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v8);
    byte_4185BB9 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
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
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)monitor )
        {
          v20 = sub_B2C460(IsNullOrEmpty);
          sub_B2C400(v20, 0LL);
        }
        v15 = (int32_t *)(&ClassBoardSkillArray[2].klass + v14);
        v16 = *skillIndex;
        v17 = *v15;
        v18 = v15[1];
        ++*skillIndex;
        IsNullOrEmpty = BattleServantData__addSkillInfo(this, 10, v16, v17, v18, -1LL, -1, 0LL, v21);
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)IsNullOrEmpty,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
        LODWORD(monitor) = ClassBoardSkillArray[1].monitor;
        if ( (__int64)++v14 >= (int)monitor )
          return (System_Collections_Generic_List_BattleSkillInfoData__o *)v9;
      }
LABEL_12:
      sub_B2C434(IsNullOrEmpty, v11);
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
  BattleUserServantData_o *v3; // x20
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
  int32_t ServantImageLimitSealAfter; // w0
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

  v3 = userSvt;
  v4 = this;
  if ( (byte_4185B00 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, userSvt);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    this = (BattleServantData_o *)sub_B2C35C(&OptionManager_TypeInfo, v10);
    byte_4185B00 = 1;
  }
  if ( !v3 )
    goto LABEL_184;
  p_afterLimitCount = &v3->fields.afterLimitCount;
  v4->fields.limitcount = v3->fields.limitCount;
  v4->fields._dispLimitCount_k__BackingField = v3->fields.dispLimitCount;
  v4->fields._commandCardLimitCount_k__BackingField = v3->fields.commandCardLimitCount;
  v4->fields._iconLimitCount_k__BackingField = v3->fields.iconLimitCount;
  *(_QWORD *)&v3->fields.afterLimitCount = -1LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  this = (BattleServantData_o *)Follower__IsNpc(v4->fields.followerType, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    deckSvt = v4->fields.deckSvt;
    if ( !deckSvt )
      goto LABEL_184;
    if ( deckSvt->fields.npcId <= 0 )
    {
      v15 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v125.fields.currentCryptoKey = v15;
      *(_QWORD *)&v125.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v125, 0LL);
      this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v126, 0LL) )
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
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v127, 0LL) )
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
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v128, 0LL);
        if ( !(_DWORD)this )
        {
          v28 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v129.fields.currentCryptoKey = v28;
          *(_QWORD *)&v129.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v129, 0LL);
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v3->fields.limitCount, 0LL);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v29, v30, 1, 0, 0LL);
          v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(CardImageLimitCount + 1, 0LL);
          userSvt = *(BattleUserServantData_o **)&v32.fields.fakeValue;
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
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v130, 0LL) >= 11 )
              {
                v37 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
                v36 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v131.fields.currentCryptoKey = v37;
                *(_QWORD *)&v131.fields.fakeValue = v36;
                v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v131, 0LL);
                v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v3->fields.limitCount, 0LL);
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
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v132, 0LL) >= 11 )
              {
                v44 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
                v43 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v133.fields.currentCryptoKey = v44;
                *(_QWORD *)&v133.fields.fakeValue = v43;
                v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v133, 0LL);
                v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v3->fields.limitCount, 0LL);
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
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v134, 0LL) >= 11 )
              {
                v51 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
                v50 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v135.fields.currentCryptoKey = v51;
                *(_QWORD *)&v135.fields.fakeValue = v50;
                v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v135, 0LL);
                v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v3->fields.limitCount, 0LL);
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
          v56 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
          v55 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v136.fields.currentCryptoKey = v56;
          *(_QWORD *)&v136.fields.fakeValue = v55;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v136, 0LL);
          IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v3, 0, 0LL);
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
            v3->fields.afterLimitCount = 2 * ServantImageLimitSealAfter;
            v61 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
            v60 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v137.fields.currentCryptoKey = v61;
            *(_QWORD *)&v137.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v137, 0LL);
            v63 = *p_afterLimitCount;
            v64 = v62;
            if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ImageLimitCount_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            }
            ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v64, v63, 0LL);
          }
          v3->fields.afterIconLimitCount = ServantImageLimitSealAfter;
          v99 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
          v98 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v146.fields.currentCryptoKey = v99;
          *(_QWORD *)&v146.fields.fakeValue = v98;
          v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v146, 0LL);
          v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
          v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v3->fields.svtId, 0LL);
          v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                   v4->fields._dispLimitCount_k__BackingField,
                   0LL);
          v105 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v103, v104, 0LL);
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         v105,
                                                         0LL);
          v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v3->fields.svtId, 0LL);
          v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                   v4->fields._commandCardLimitCount_k__BackingField,
                   0LL);
          v108 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v106, v107, 0LL);
          v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v108, 0LL);
          userSvt = *(BattleUserServantData_o **)&v109.fields.fakeValue;
          this = *(BattleServantData_o **)&v109.fields.currentCryptoKey;
          v4->fields._commandCardLimitCount_k__BackingField = v109;
          goto LABEL_160;
        }
LABEL_184:
        sub_B2C434(this, userSvt);
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
        v66 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
        v68 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
        v67 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
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
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v138, 0LL);
        if ( !v71 )
          goto LABEL_184;
        *(_QWORD *)&v151.fields.currentCryptoKey = v68;
        *(_QWORD *)&v151.fields.fakeValue = v67;
        v72 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v151, (int32_t)this, 0LL);
        v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v72,
                                                       0LL);
        v73 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
        v74 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                v4->fields._dispLimitCount_k__BackingField,
                0LL);
        *(_QWORD *)&v152.fields.currentCryptoKey = v73;
        *(_QWORD *)&v152.fields.fakeValue = v74;
        v76 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v152, v75, 0LL);
        v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v76, 0LL);
        v4->fields._dispLimitCount_k__BackingField = v139;
        v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v139, 0LL);
        v78 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v71, v77, 0LL);
        v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v78,
                                                       0LL);
        v79 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
        v80 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
        v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                v4->fields._commandCardLimitCount_k__BackingField,
                0LL);
        *(_QWORD *)&v153.fields.currentCryptoKey = v79;
        *(_QWORD *)&v153.fields.fakeValue = v80;
        v82 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v153, v81, 0LL);
        v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v82, 0LL);
        v4->fields._commandCardLimitCount_k__BackingField = v140;
        v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v140, 0LL);
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
        v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v141, 0LL);
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
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v142, 0LL) <= 10 )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v143, 0LL) >= 11 )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v144, 0LL) >= 11 )
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
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v145, 0LL);
        if ( (int)this >= 11 )
        {
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
          userSvt = *(BattleUserServantData_o **)&v97.fields.fakeValue;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v147, 0LL) )
    {
      v113 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
      v114 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    }
    else
    {
      v116 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
      v115 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v148.fields.currentCryptoKey = v116;
      *(_QWORD *)&v148.fields.fakeValue = v115;
      v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v148, 0LL);
      v118 = *(_QWORD *)&v3->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v149.fields.fakeValue = *(_QWORD *)&v3->fields.limitCount.fields.fakeValue;
      v119 = v117;
      *(_QWORD *)&v149.fields.currentCryptoKey = v118;
      v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v149, 0LL);
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v150, 0LL) <= 10 )
    {
      v123 = BasicHelper__DecryptValue_19216120(v4->fields._iconLimitCount_k__BackingField, 0LL);
      v124 = UnityEngine_Mathf__Clamp_40637828(v123, 1, 3, 0LL);
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
  __int64 v17; // x8
  bool v18; // w28
  unsigned __int64 v19; // x19
  BattleBuffData_BuffData_o *v20; // x27
  int count; // w20
  int turn; // w26
  System_Int32_array *Individualty; // x0
  int v24; // w8
  _BOOL4 v25; // w8
  int v26; // w8
  int v27; // w8
  BattleBuffData_o *v28; // x19
  __int64 v30; // x0
  BattleServantData_o *v31; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // [xsp+8h] [xbp-68h]
  bool isIgnoreIndivUnreleaseable; // [xsp+18h] [xbp-58h]

  if ( (byte_4185B5E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, *(_QWORD *)&changeValue);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    byte_4185B5E = 1;
  }
  if ( targetIndivi && *(_QWORD *)&targetIndivi->max_length )
  {
    buffData = this->fields.buffData;
    if ( !buffData )
      goto LABEL_55;
    ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
    v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v32,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !ActiveList )
      goto LABEL_55;
    v17 = *(_QWORD *)&ActiveList->max_length;
    v31 = this;
    if ( (int)v17 >= 1 )
    {
      v18 = 0;
      v19 = 0LL;
      isIgnoreIndivUnreleaseable = isExcludeUnSubStateIndiv;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v17 )
        {
          v30 = sub_B2C460(buffData);
          sub_B2C400(v30, 0LL);
        }
        v20 = ActiveList->m_Items[v19];
        if ( (changeValue & 0x80000000) == 0 )
        {
          if ( !v20 )
            goto LABEL_55;
          goto LABEL_12;
        }
        if ( !isTurn )
          break;
        if ( !v20 )
          goto LABEL_55;
        if ( v20->fields.turn >= 3 )
          goto LABEL_12;
LABEL_47:
        LODWORD(v17) = ActiveList->max_length;
        if ( (__int64)++v19 >= (int)v17 )
          goto LABEL_51;
      }
      if ( !v20 )
        goto LABEL_55;
      if ( v20->fields.count == 1 )
        goto LABEL_47;
LABEL_12:
      turn = v20->fields.turn;
      count = v20->fields.count;
      Individualty = BattleBuffData_BuffData__GetIndividualty(
                       ActiveList->m_Items[v19],
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
        v20->fields.turn += changeValue;
        if ( v18 )
        {
LABEL_21:
          v18 = 1;
          if ( !isTurn )
          {
LABEL_22:
            v24 = v20->fields.count;
            if ( v24 != count && v24 <= 0 )
              v20->fields.count = 1;
            goto LABEL_40;
          }
LABEL_34:
          v26 = v20->fields.turn;
          if ( v26 != turn && v26 <= 0 )
          {
            if ( (turn & 1) != 0 )
              v27 = 1;
            else
              v27 = 2;
            v20->fields.turn = v27;
          }
LABEL_40:
          buffData = (BattleBuffData_o *)BattleBuffData_BuffData__IslinkageTarget(v20, 0LL);
          if ( ((unsigned __int8)buffData & 1) != 0 && (v20->fields.turn != turn || v20->fields.count != count) )
          {
            buffData = (BattleBuffData_o *)v32;
            if ( !v32 )
              goto LABEL_55;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v32,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
          goto LABEL_47;
        }
LABEL_30:
        v25 = v20->fields.turn != turn || v20->fields.count != count;
        v18 = v25;
        if ( !isTurn )
          goto LABEL_22;
        goto LABEL_34;
      }
      if ( count >= 1 && !isTurn )
        v20->fields.count += changeValue;
LABEL_20:
      if ( v18 )
        goto LABEL_21;
      goto LABEL_30;
    }
    v18 = 0;
LABEL_51:
    buffData = (BattleBuffData_o *)v32;
    if ( !v32
      || (v28 = v31->fields.buffData,
          buffData = (BattleBuffData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
          !v28) )
    {
LABEL_55:
      sub_B2C434(buffData, *(_QWORD *)&changeValue);
    }
    BattleBuffData__syncLinkageBuffChangeParam(v28, (BattleBuffData_BuffData_array *)buffData, 0LL);
  }
  else
  {
    return 0;
  }
  return v18;
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
  if ( (byte_4185B07 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, skillInfo);
    this = (BattleServantData_o *)sub_B2C35C(&DataManager_TypeInfo, v7);
    byte_4185B07 = 1;
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
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
LABEL_20:
    sub_B2C434(this, skillInfo);
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
  __int64 v10; // x1
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
    sub_B2C434(v9, v10);
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
  System_Int32_array *Individualities_21310616; // x0

  v4 = buffIndiv;
  v5 = this;
  if ( opponentSvt )
  {
    this = (BattleServantData_o *)BattleServantData__getIndividualities_21310616(
                                    opponentSvt,
                                    buffIndiv,
                                    (const MethodInfo *)opponentSvt);
    v4 = (System_Int32_array *)this;
  }
  buffData = v5->fields.buffData;
  if ( !buffData )
    sub_B2C434(this, buffIndiv);
  BuffIndividualities = BattleBuffData__getBuffIndividualities(v5->fields.buffData, 0, 0, 0, 0, 0LL);
  Individualities_21310616 = BattleServantData__getIndividualities_21310616(v5, BuffIndividualities, v8);
  return BattleBuffData__CheckDisableForciblyAddStateBuffAvoid(buffData, Individualities_21310616, v4, 0LL);
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
            v17 = sub_B2C460(SelectedNobleSeqId);
            sub_B2C400(v17, 0LL);
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
    sub_B2C434(this, data);
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
    sub_B2C434(this, data);
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
  __int64 v9; // x1
  System_Int32_array *NotTargetSkillIdArray; // x0

  if ( (byte_4185BB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, *(_QWORD *)&skillId);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    byte_4185BB6 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v8, v9);
  NotTargetSkillIdArray = BattleBuffData__GetNotTargetSkillIdArray(buffData, v7, 0LL);
  return System_Array__IndexOf_int_(
           NotTargetSkillIdArray,
           skillId,
           (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) != -1;
}


bool __fastcall BattleServantData__CheckSelectedNobleSeqIsGroup(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0
  __int64 v4; // x1

  if ( this->fields.groupSeqIdFromMstTDSeqWeight > 0 )
    return (unsigned __int8)&dword_0 + 1;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
  if ( !TreasureDevice )
    sub_B2C434(0LL, v4);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.svtOverwriteName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.svtOverwriteBattleName = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_T__o *BuffParamList; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x8
  System_Func_int__bool__o *v24; // x21

  if ( (byte_4185B96 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, externalIndiv);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass602_0__EnumerateIndividuality_b__0__, v8);
    sub_B2C35C(&BattleServantData___c__DisplayClass602_0_TypeInfo, v9);
    byte_4185B96 = 1;
  }
  v10 = sub_B2C42C(BattleServantData___c__DisplayClass602_0_TypeInfo);
  BattleServantData___c__DisplayClass602_0___ctor((BattleServantData___c__DisplayClass602_0_o *)v10, 0LL);
  ServantIndividualityList = BattleServantData__GetServantIndividualityList(this, externalIndiv, v11);
  buffData = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__EnumerateSkillIndividuality(this, v13);
  if ( !ServantIndividualityList )
    goto LABEL_11;
  System_Collections_Generic_List_int___AddRange(
    ServantIndividualityList,
    buffData,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
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
          (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__),
        (buffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buffData) == 0LL)
    || (buffData = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffParamList(
                                                                    (BattleBuffData_o *)buffData,
                                                                    44,
                                                                    0LL,
                                                                    0LL),
        !v10)
    || (*(_QWORD *)(v10 + 16) = buffData,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)buffData,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (v23 = *(_QWORD *)(v10 + 16)) == 0) )
  {
LABEL_11:
    sub_B2C434(buffData, v15);
  }
  if ( !*(_QWORD *)(v23 + 24) )
    return (System_Collections_Generic_IEnumerable_int__o *)ServantIndividualityList;
  v24 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v24,
    (Il2CppObject *)v10,
    Method_BattleServantData___c__DisplayClass602_0__EnumerateIndividuality_b__0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Where_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)ServantIndividualityList,
                                                            (System_Func_TSource__bool__o *)v24,
                                                            (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData__EnumerateSkillIndividuality(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  BattleServantData___c_c *v12; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__606_0; // x20
  Il2CppObject *v15; // x21
  struct BattleServantData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  BattleServantData___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  struct BattleServantData___c_StaticFields *v26; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__606_1; // x20
  Il2CppObject *v28; // x21
  struct BattleServantData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4185B9A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___, v3);
    sub_B2C35C(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v4);
    sub_B2C35C(&Method_System_Func_BattleSkillInfoData__IEnumerable_int____ctor__, v5);
    sub_B2C35C(&System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo, v6);
    sub_B2C35C(&System_Func_BattleSkillInfoData__bool__TypeInfo, v7);
    sub_B2C35C(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__606_0__, v8);
    sub_B2C35C(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__606_1__, v9);
    sub_B2C35C(&BattleServantData___c_TypeInfo, v10);
    byte_4185B9A = 1;
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
  _9__606_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__606_0;
  if ( !_9__606_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__606_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__606_0,
      v15,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__606_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v16 = BattleServantData___c_TypeInfo->static_fields;
    v16->__9__606_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__606_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v16->__9__606_0,
      (System_Int32_array **)_9__606_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__606_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  v24 = BattleServantData___c_TypeInfo;
  v25 = v23;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v24 = BattleServantData___c_TypeInfo;
  }
  v26 = v24->static_fields;
  _9__606_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v26->__9__606_1;
  if ( !_9__606_1 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v26 = BattleServantData___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v26->__9;
    _9__606_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__606_1,
      v28,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__606_1__,
      (const MethodInfo_2713350 *)Method_System_Func_BattleSkillInfoData__IEnumerable_int____ctor__);
    v29 = BattleServantData___c_TypeInfo->static_fields;
    v29->__9__606_1 = (struct System_Func_BattleSkillInfoData__IEnumerable_int___o *)_9__606_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v29->__9__606_1,
      (System_Int32_array **)_9__606_1,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__SelectMany_BattleActionData_HealData__int_(
                                                            v25,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__606_1,
                                                            (const MethodInfo_1A9812C *)Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___);
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
  __int64 v11; // x1

  v8 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, Il2CppMethodPointer, int32_t, const MethodInfo *))this->klass->vtable._20_GetLogicServantAi.method)(
                                this,
                                logic,
                                this->klass->vtable._21_getThisTurnActCount.methodPtr,
                                timingPriority,
                                method);
  AiStateManager = BattleServantData__get_AiStateManager(this, v9);
  if ( !v8 || !AiStateManager )
    sub_B2C434(AiStateManager, v11);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4185B1D & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B1D = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v5, v6);
  return this->fields.maxActNum + BattleBuffData__getActValue_30954484(buffData, 110, v4, 0LL);
}


int32_t __fastcall BattleServantData__FixMinActNum(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4185B1E & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B1E = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v5, v6);
  return this->fields._minActNum_k__BackingField + BattleBuffData__getActValue_30954484(buffData, 110, v4, 0LL);
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
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleBuffData_CheckIndividualitiesData_o *v27; // x23
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *v34; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x19
  BattleServantData___c_c *v36; // x8
  struct BattleServantData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__429_1; // x20
  Il2CppObject *v39; // x21
  struct BattleServantData___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_4185B3A & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, targetActs);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_SelectMany_BuffList_ACTION__BattleBuffData_BuffData___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v9);
    sub_B2C35C(&Method_System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData____ctor__, v10);
    sub_B2C35C(&Method_System_Func_BattleBuffData_BuffData__int___ctor__, v11);
    sub_B2C35C(&System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData___TypeInfo, v12);
    sub_B2C35C(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v13);
    sub_B2C35C(&Method_BattleServantData___c__GetAddSideEffectBuffList_b__429_1__, v14);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass429_0__GetAddSideEffectBuffList_b__0__, v15);
    sub_B2C35C(&BattleServantData___c__DisplayClass429_0_TypeInfo, v16);
    sub_B2C35C(&BattleServantData___c_TypeInfo, v17);
    byte_4185B3A = 1;
  }
  v18 = sub_B2C42C(BattleServantData___c__DisplayClass429_0_TypeInfo);
  BattleServantData___c__DisplayClass429_0___ctor((BattleServantData___c__DisplayClass429_0_o *)v18, 0LL);
  if ( !v18 )
    sub_B2C434(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  v27 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v27, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(v18 + 24) = v27;
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)sub_B2C42C(System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData___TypeInfo);
  System_Func_BuffList_TYPE__List_BattleBuffData_BuffData_____ctor(
    v34,
    (Il2CppObject *)v18,
    Method_BattleServantData___c__DisplayClass429_0__GetAddSideEffectBuffList_b__0__,
    (const MethodInfo_270ED74 *)Method_System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData____ctor__);
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_BuffList_ACTION__BattleBuffData_BuffData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetActs,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v34,
                                                               (const MethodInfo_1A980C4 *)Method_System_Linq_Enumerable_SelectMany_BuffList_ACTION__BattleBuffData_BuffData___);
  v36 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v36 = BattleServantData___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__429_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__429_1;
  if ( !_9__429_1 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__429_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__429_1,
      v39,
      Method_BattleServantData___c__GetAddSideEffectBuffList_b__429_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v40 = BattleServantData___c_TypeInfo->static_fields;
    v40->__9__429_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__429_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v40->__9__429_1,
      (System_Int32_array **)_9__429_1,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v35,
                                                               (System_Func_TSource__TKey__o *)_9__429_1,
                                                               (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            v47,
                                            (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleServantData_Adjustment_array *__fastcall BattleServantData__GetAdjustments(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0
  BattleServantConfConponent_o *p_adjustmentList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1

  if ( (byte_4185AF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v4);
    byte_4185AF0 = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (BattleServantConfConponent_o *)&this->fields.adjustmentList;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (BattleServantConfConponent_c *)v7;
    sub_B2C2F8(p_adjustmentList, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
    adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      sub_B2C434(0LL, v14);
  }
  return (BattleServantData_Adjustment_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)adjustmentList,
                                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__);
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

  if ( (byte_4185B3E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23814/*"ガッツ"*/, method);
    byte_4185B3E = 1;
  }
  return BattleServantData__GetKilledMeOpponentIndividualityArray(this, (System_String_o *)method, v2);
}


int32_t __fastcall BattleServantData__GetCommandCardIndex(
        BattleServantData_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Int64_array *userCommandCodeIds; // x0

  if ( (byte_4185BA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_long___, userCommandCodeId);
    byte_4185BA5 = 1;
  }
  if ( userCommandCodeId >= 1 && (userCommandCodeIds = this->fields.userCommandCodeIds) != 0LL )
    return System_Array__IndexOf_long_(
             userCommandCodeIds,
             userCommandCodeId,
             (const MethodInfo_1FFD60C *)Method_System_Array_IndexOf_long___);
  else
    return -1;
}


System_Int32_array *__fastcall BattleServantData__GetCommandCodeIds(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  struct System_Int64_array *userCommandCodeIds; // x8
  CommandCodeInfo_o *CommandCodeInfo; // x0
  int64_t v5; // x1
  const MethodInfo *v6; // x2
  struct System_Int64_array *v7; // x8
  System_Int32_array *v8; // x20
  unsigned __int64 v9; // x21
  CommandCodeInfo_o *v10; // x22
  unsigned __int64 max_length; // x9
  __int64 v13; // x0

  if ( (byte_4185BA3 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_4185BA3 = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_B2C374(int___TypeInfo, userCommandCodeIds->max_length);
  v7 = this->fields.userCommandCodeIds;
  if ( !v7 )
LABEL_15:
    sub_B2C434(CommandCodeInfo, v5);
  v8 = (System_Int32_array *)CommandCodeInfo;
  v9 = 0LL;
  v10 = CommandCodeInfo + 1;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (__int64)v9 >= (int)max_length )
      return v8;
    if ( v9 >= max_length )
      goto LABEL_18;
    if ( v8 )
    {
      if ( v9 >= v8->max_length )
        goto LABEL_18;
      v5 = v7->m_Items[v9];
      *((_DWORD *)&v10->klass + v9) = -1;
      if ( (v5 & 0x8000000000000000LL) == 0 )
      {
        CommandCodeInfo = BattleServantData__GetCommandCodeInfo(this, v5, v6);
        if ( CommandCodeInfo )
        {
          if ( v9 >= v8->max_length )
          {
LABEL_18:
            v13 = sub_B2C460(CommandCodeInfo);
            sub_B2C400(v13, 0LL);
          }
          *((_DWORD *)&v10->klass + v9) = CommandCodeInfo->fields.commandCodeId;
        }
      }
      v7 = this->fields.userCommandCodeIds;
      ++v9;
      if ( v7 )
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
  int64_t v5; // x1
  const MethodInfo *v6; // x2
  struct System_Int64_array *v7; // x8
  System_Int32_array *v8; // x20
  unsigned __int64 v9; // x21
  CommandCodeInfo_o *v10; // x22
  unsigned __int64 max_length; // x9
  __int64 v13; // x0

  if ( (byte_4185BA4 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_4185BA4 = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_B2C374(int___TypeInfo, userCommandCodeIds->max_length);
  v7 = this->fields.userCommandCodeIds;
  if ( !v7 )
LABEL_15:
    sub_B2C434(CommandCodeInfo, v5);
  v8 = (System_Int32_array *)CommandCodeInfo;
  v9 = 0LL;
  v10 = CommandCodeInfo + 1;
  while ( 1 )
  {
    max_length = v7->max_length;
    if ( (__int64)v9 >= (int)max_length )
      return v8;
    if ( v9 >= max_length )
      goto LABEL_18;
    if ( v8 )
    {
      if ( v9 >= v8->max_length )
        goto LABEL_18;
      v5 = v7->m_Items[v9];
      *((_DWORD *)&v10->klass + v9) = v5;
      if ( v5 >= 1 )
      {
        CommandCodeInfo = BattleServantData__GetCommandCodeInfo(this, v5, v6);
        if ( CommandCodeInfo )
        {
          if ( v9 >= v8->max_length )
          {
LABEL_18:
            v13 = sub_B2C460(CommandCodeInfo);
            sub_B2C400(v13, 0LL);
          }
          *((_DWORD *)&v10->klass + v9) = CommandCodeInfo->fields.commandCodeId;
        }
      }
      v7 = this->fields.userCommandCodeIds;
      ++v9;
      if ( v7 )
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
  BattleServantData___c__DisplayClass683_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_CommandCodeInfo__o *commandCodeList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_4185BB0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeInfo__Find__, userCommandCodeId);
    sub_B2C35C(&Method_System_Predicate_CommandCodeInfo___ctor__, v5);
    sub_B2C35C(&System_Predicate_CommandCodeInfo__TypeInfo, v6);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass683_0__GetCommandCodeInfo_b__0__, v7);
    sub_B2C35C(&BattleServantData___c__DisplayClass683_0_TypeInfo, v8);
    byte_4185BB0 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass683_0_o *)sub_B2C42C(BattleServantData___c__DisplayClass683_0_TypeInfo);
  BattleServantData___c__DisplayClass683_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.userCommandCodeId = userCommandCodeId,
        commandCodeList_k__BackingField = this->fields._commandCodeList_k__BackingField,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_CommandCodeInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BattleServantData___c__DisplayClass683_0__GetCommandCodeInfo_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_CommandCodeInfo___ctor__),
        !commandCodeList_k__BackingField) )
  {
    sub_B2C434(v10, v11);
  }
  return (CommandCodeInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)commandCodeList_k__BackingField,
                                (System_Predicate_T__o *)v13,
                                (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_CommandCodeInfo__Find__);
}


int32_t __fastcall BattleServantData__GetCurrentShiftPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B2C434(this, method);
  return shiftDeckList->max_length - this->fields.shiftDeckIndex;
}


System_String_o *__fastcall BattleServantData__GetCurrentTDErrorStatusVoiceSe(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  bool IsNullOrEmpty; // w8
  System_String_o *result; // x0
  struct System_Collections_Generic_List_string__o *tdErrorStatusVoiceSeList; // x20
  int32_t tdErrorTouchCount; // w8
  unsigned int size; // w9

  if ( (byte_4185AE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    byte_4185AE7 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.tdErrorStatusVoiceSeList,
                    0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    tdErrorStatusVoiceSeList = this->fields.tdErrorStatusVoiceSeList;
    if ( !tdErrorStatusVoiceSeList )
      sub_B2C434(0LL, v4);
    tdErrorTouchCount = this->fields.tdErrorTouchCount;
    size = tdErrorStatusVoiceSeList->fields._size;
    if ( tdErrorTouchCount <= (int)size )
    {
      if ( size <= tdErrorTouchCount - 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v3; // x1
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
  __int64 v23; // x24
  System_Collections_Generic_List_int__o *v24; // x20
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  DataManager_o **v33; // x27
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v43; // x23
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  __int64 v45; // x26
  int size; // w8
  int32_t *v47; // x24
  BattleBuffData_o *buffData; // x8
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v49; // x21
  int v50; // w8
  __int64 v51; // x24
  System_TimeZoneInfo_AdjustmentRule_o *v52; // x19
  _DWORD *dateData; // x8
  __int64 v55; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4185B0B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_SkillLvEntity__Invoke__, method);
    sub_B2C35C(&Method_System_Action_SkillLvEntity___ctor__, v3);
    sub_B2C35C(&System_Action_SkillLvEntity__TypeInfo, v4);
    sub_B2C35C(&BuffList_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass311_0__GetHasSideEffectSkillEffectIds_b__0__, v21);
    sub_B2C35C(&BattleServantData___c__DisplayClass311_0_TypeInfo, v22);
    byte_4185B0B = 1;
  }
  entity = 0LL;
  v23 = sub_B2C42C(BattleServantData___c__DisplayClass311_0_TypeInfo);
  BattleServantData___c__DisplayClass311_0___ctor((BattleServantData___c__DisplayClass311_0_o *)v23, 0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v23 )
    goto LABEL_46;
  *(_QWORD *)(v23 + 24) = v24;
  v33 = (DataManager_o **)(v23 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 24), (System_Int32_array **)v24, v27, v28, v29, v30, v31, v32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  v35 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 Instance,
                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
  *(_QWORD *)(v23 + 16) = v35;
  sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 16), v35, v36, v37, v38, v39, v40, v41);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
  v43 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_SkillLvEntity__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v43,
    (Il2CppObject *)v23,
    Method_BattleServantData___c__DisplayClass311_0__GetHasSideEffectSkillEffectIds_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_SkillLvEntity___ctor__);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_46;
  v45 = 0LL;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v45 >= size )
      break;
    if ( size <= (unsigned int)v45 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v47 = (int32_t *)skillInfoList->fields._items->m_Items[v45];
    if ( v47 )
    {
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v47 + 392LL))(
                                    v47,
                                    *(_QWORD *)(*(_QWORD *)v47 + 400LL));
      if ( (_DWORD)Instance )
      {
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v47 + 392LL))(
                                      v47,
                                      *(_QWORD *)(*(_QWORD *)v47 + 400LL));
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_46;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)Instance,
                                      v47[9],
                                      0LL);
        if ( Instance )
        {
          if ( !v43 )
            goto LABEL_46;
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)v43,
            (System_Uri_o *)Instance,
            (const MethodInfo_24BBAEC *)Method_System_Action_SkillLvEntity__Invoke__);
        }
      }
      skillInfoList = this->fields.skillInfoList;
      ++v45;
      if ( skillInfoList )
        continue;
    }
    goto LABEL_46;
  }
  Instance = (DataManager_o *)this->fields.buffData;
  if ( !Instance
    || (Instance = (DataManager_o *)BattleBuffData__GetAllCommandCodeBuff((BattleBuffData_o *)Instance, 0LL),
        (buffData = this->fields.buffData) == 0LL)
    || (v49 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
        Instance = (DataManager_o *)BattleBuffData__GetAllCommandAssistBuff(buffData, 0LL),
        !v49) )
  {
LABEL_46:
    sub_B2C434(Instance, v26);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v49,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v50 = v49->fields._size;
  if ( v50 >= 1 )
  {
    v51 = 0LL;
    do
    {
      if ( v50 <= (unsigned int)v51 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v52 = v49->fields._items->m_Items[v51];
      entity = 0LL;
      if ( !v52 || !v42 )
        goto LABEL_46;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v42,
                                    &entity,
                                    v52->fields.m_dateStart.fields.dateData,
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
                                      (const MethodInfo_2D87A7C *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          dateData = (_DWORD *)v52->fields.m_daylightTransitionStart.fields.m_timeOfDay.fields.dateData;
          if ( !dateData )
            goto LABEL_46;
          if ( dateData[6] < 2u )
          {
            v55 = sub_B2C460(Instance);
            sub_B2C400(v55, 0LL);
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
            if ( !v43 )
              goto LABEL_46;
            System_Action_Uri___Invoke(
              (System_Action_Uri__o *)v43,
              (System_Uri_o *)Instance,
              (const MethodInfo_24BBAEC *)Method_System_Action_SkillLvEntity__Invoke__);
          }
        }
      }
      v50 = v49->fields._size;
    }
    while ( (int)++v51 < v50 );
  }
  Instance = *v33;
  if ( !*v33 )
    goto LABEL_46;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Instance,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v12; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t v14; // w19
  __int64 v15; // x20
  __int64 v16; // x21
  int32_t v17; // w20
  __int64 v18; // x20
  __int64 v19; // x21
  int32_t v20; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4185B19 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&OptionManager_TypeInfo, v4);
    byte_4185B19 = 1;
  }
  v6 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v6;
  *(_QWORD *)&v21.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v21, 0LL);
  if ( v7 )
    return v7 - (v7 < 11);
  v10 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v10;
  *(_QWORD *)&v22.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B2C434(v11, v12);
  v14 = v11;
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
    v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v23.fields.currentCryptoKey = v16;
    *(_QWORD *)&v23.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v23, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetCardImageLimitCount(v17, v14, 1, 0, 0LL);
  }
  else
  {
    v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v24.fields.currentCryptoKey = v19;
    *(_QWORD *)&v24.fields.fakeValue = v18;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v24, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetImageLimitCount(v20, v14, 0LL);
  }
}


int32_t __fastcall BattleServantData__GetImageSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 imageSvtId_k__BackingField; // x0
  struct ServantEntity_o *svtdata; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4185B11 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185B11 = 1;
  }
  imageSvtId_k__BackingField = (unsigned int)this->fields._imageSvtId_k__BackingField;
  if ( (int)imageSvtId_k__BackingField <= 0 )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_B2C434(imageSvtId_k__BackingField, method);
    v6 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
    v5 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    LODWORD(imageSvtId_k__BackingField) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v8, 0LL);
  }
  return imageSvtId_k__BackingField;
}


BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleServantData__GetKilledMeOpponentIndividuality(
        BattleServantData_o *this,
        System_String_o *logCheckFunc,
        const MethodInfo *method)
{
  BattleBuffData_CheckIndividualitiesData_array *KilledMeOpponentIndividualityArray; // x0
  __int64 v4; // x1
  __int64 v6; // x0

  KilledMeOpponentIndividualityArray = BattleServantData__GetKilledMeOpponentIndividualityArray(
                                         this,
                                         logCheckFunc,
                                         method);
  if ( !KilledMeOpponentIndividualityArray )
    sub_B2C434(0LL, v4);
  if ( !KilledMeOpponentIndividualityArray->max_length )
  {
    v6 = sub_B2C460(KilledMeOpponentIndividualityArray);
    sub_B2C400(v6, 0LL);
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
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_4185B3F & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData___TypeInfo, logCheckFunc);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v4);
    byte_4185B3F = 1;
  }
  SnapShotDamagedOnLogicDead_k__BackingField = this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
  if ( !SnapShotDamagedOnLogicDead_k__BackingField )
    goto LABEL_11;
  v6 = BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
         SnapShotDamagedOnLogicDead_k__BackingField,
         0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v6, 0LL) )
    return v6;
  v6 = (BattleBuffData_CheckIndividualitiesData_array *)sub_B2C374(
                                                          BattleBuffData_CheckIndividualitiesData___TypeInfo,
                                                          1LL);
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v6 )
LABEL_11:
    sub_B2C434(SnapShotDamagedOnLogicDead_k__BackingField, logCheckFunc);
  if ( v7 )
  {
    SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupDefault_o *)sub_B2C41C(
                                                                                          v7,
                                                                                          v6->obj.klass->_1.element_class);
    if ( !SnapShotDamagedOnLogicDead_k__BackingField )
    {
      v16 = sub_B2C454();
      sub_B2C400(v16, 0LL);
    }
  }
  if ( !v6->max_length )
  {
    v15 = sub_B2C460(SnapShotDamagedOnLogicDead_k__BackingField);
    sub_B2C400(v15, 0LL);
  }
  v6->m_Items[0] = v7;
  sub_B2C2F8((BattleServantConfConponent_o *)v6->m_Items, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  return v6;
}


BattleLogicServantAi_o *__fastcall BattleServantData__GetLogicServantAi(
        BattleServantData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !logic )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, method);
  return shiftDeckList->max_length - this->fields.shiftSubCount;
}


int32_t __fastcall BattleServantData__GetMaxShiftIconPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B2C434(this, method);
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

  if ( (byte_4185BB7 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, isSvtAction);
    byte_4185BB7 = 1;
  }
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  v12 = v11;
  if ( isSvtAction )
    BattleBuffData_CheckIndividualitiesData___ctor(v11, this, targetSvt, 0LL, command, 0LL, 0LL);
  else
    BattleBuffData_CheckIndividualitiesData___ctor_23203976(v11, this, 0LL, 0LL, notSvtIndivArray, 0LL, 0LL);
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
  return UnityEngine_Mathf__Max_40694800(0, this->fields._minActNum_k__BackingField - this->fields.actionCount, 0LL);
}


BattleBuffData_BuffData_o *__fastcall BattleServantData__GetPreventInvisibleWhenInstantDeathBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_CheckIndividualitiesData_o *KilledMeOpponentIndividuality; // x20
  const MethodInfo *v5; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1

  if ( (byte_4185B7A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23882/*"死亡時の非表示を防ぐバフ"*/, method);
    byte_4185B7A = 1;
  }
  KilledMeOpponentIndividuality = BattleServantData__GetKilledMeOpponentIndividuality(
                                    this,
                                    (System_String_o *)method,
                                    v2);
  BuffData = BattleServantData__get_BuffData(this, v5);
  if ( !BuffData )
    sub_B2C434(0LL, v7);
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
  return UnityEngine_Mathf__Max_40694800(0, v2, 0LL);
}


int32_t __fastcall BattleServantData__GetRevengeIdCheckOpponentOnly(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !buffData )
    sub_B2C434(this, 0LL);
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

  if ( (byte_4185AF4 & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_Deserialize_BattleServantData_SaveData___, str);
    sub_B2C35C(&JsonManager_TypeInfo, v4);
    byte_4185AF4 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (BattleServantData_SaveData_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                           (Il2CppObject *)str,
                                           (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
}


int32_t __fastcall BattleServantData__GetSelectedNobleGroupSeqId(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  TreasureDvcEntity_o *TreasureDevice; // x0
  __int64 v5; // x1

  result = this->fields.groupSeqIdFromMstTDSeqWeight;
  if ( result <= 0 )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
    if ( !TreasureDevice )
      sub_B2C434(0LL, v5);
    return TreasureDevice->fields.cacheGroupId;
  }
  return result;
}


int32_t __fastcall BattleServantData__GetSelectedNobleSeqId(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  TreasureDvcEntity_o *TreasureDevice; // x0
  __int64 v5; // x1
  bool IsRandomTD; // w21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  TreasureDvcEntity_o *v9; // x20

  result = this->fields.seqIdFromMstTDSeqWeight;
  if ( result <= 0 )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
    if ( TreasureDevice )
    {
      IsRandomTD = TreasureDvcEntity__IsRandomTD(TreasureDevice, 0LL);
      TreasureDevice = BattleServantData__get_TreasureDevice(this, v7);
      v9 = TreasureDevice;
      if ( IsRandomTD )
      {
        if ( TreasureDevice )
          return TreasureDevice->fields.cacheRandomSeqId;
      }
      else
      {
        TreasureDevice = (TreasureDvcEntity_o *)BattleServantData__getDispLimitCount(this, 1, v8);
        if ( v9 )
          return TreasureDvcEntity__getSeqId(v9, (int32_t)TreasureDevice, 0LL);
      }
    }
    sub_B2C434(TreasureDevice, v5);
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

  if ( (byte_4185B99 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, externalIndividualities);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4185B99 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v16, 0LL);
    Individuality = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                            this->fields._dispLimitCount_k__BackingField,
                                            0LL);
    if ( !svtdata )
LABEL_15:
      sub_B2C434(Individuality, svtIndividuality);
    Individuality = ServantEntity__getIndividuality(svtdata, v14, (int32_t)Individuality, 0LL);
    svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)Individuality;
  }
  if ( !v8 )
    goto LABEL_15;
  System_Collections_Generic_List_int___AddRange(
    v8,
    svtIndividuality,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( externalIndividualities )
    System_Collections_Generic_List_int___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)externalIndividualities,
      (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.commonAddIndividuality, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.commonAddIndividuality,
      (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
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
  __int64 v3; // x1
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  const MethodInfo *v5; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1

  if ( (byte_4185B33 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    byte_4185B33 = 1;
  }
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  BuffData = BattleServantData__get_BuffData(this, v5);
  if ( !v4
    || !BuffData
    || (BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(
                                         BuffData,
                                         115,
                                         v4->fields._selfConcatSvtIndividualities_k__BackingField,
                                         0LL,
                                         1,
                                         0LL)) == 0LL )
  {
    sub_B2C434(BuffData, v7);
  }
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)BuffData,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  ServantAiResetChecker_o *v13; // x24
  System_Int32_array **TakeOverAiStateArray; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  BattleBuffData_o *BuffData; // x23
  int32_t v27; // w24
  const MethodInfo *v28; // x1
  int32_t MaxHp; // w25
  const MethodInfo *v30; // x2
  System_Int32_array *Individualities; // x26
  const MethodInfo *v32; // x4
  System_Int32_array *BuffIndividualities; // x0
  System_Int32_array *fieldIndiv; // x27
  System_Int32_array *v35; // x28
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x1
  bool v38; // w8
  const MethodInfo *v39; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x1
  int32_t v51; // w0
  int32_t v52; // w22
  int32_t v53; // w23
  struct System_Collections_Generic_Dictionary_long__int__o *dicDistributeStar; // x22
  const MethodInfo *v55; // x1
  int64_t UserSvtId; // x0
  WarBoardBattleServantEvent_o *servantEvent; // x19
  const MethodInfo *v58; // x1
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  int64_t npcSvtEquipId; // x8

  if ( (byte_4185AF8 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_long__int___, arg);
    sub_B2C35C(&System_Math_TypeInfo, v5);
    sub_B2C35C(&ServantAiResetChecker_TypeInfo, v6);
    sub_B2C35C(&BattleWarBoardInfo_WarBoardServantInfo_TypeInfo, v7);
    byte_4185AF8 = 1;
  }
  v8 = sub_B2C42C(BattleWarBoardInfo_WarBoardServantInfo_TypeInfo);
  BattleWarBoardInfo_WarBoardServantInfo___ctor((BattleWarBoardInfo_WarBoardServantInfo_o *)v8, 0LL);
  isAction = BattleServantData__isAction(this, v9);
  AiStateManager = BattleServantData__get_AiStateManager(this, v11);
  v13 = (ServantAiResetChecker_o *)sub_B2C42C(ServantAiResetChecker_TypeInfo);
  ServantAiResetChecker___ctor(v13, this, 0LL);
  if ( !AiStateManager )
    goto LABEL_22;
  TakeOverAiStateArray = (System_Int32_array **)AiStateManager__MakeTakeOverAiStateArray(
                                                  AiStateManager,
                                                  (AiResetChecker_o *)v13,
                                                  0LL);
  if ( !v8 )
    goto LABEL_22;
  *(_QWORD *)(v8 + 112) = TakeOverAiStateArray;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 112), TakeOverAiStateArray, v16, v17, v18, v19, v20, v21);
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v22);
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  BattleBuffData__ResetNotTakeOverBuff((BattleBuffData_o *)TakeOverAiStateArray, 0LL);
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v23);
  if ( !arg )
    goto LABEL_22;
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  BattleBuffData__RemoveNoTurnBuff((BattleBuffData_o *)TakeOverAiStateArray, arg->fields.logic, 0LL);
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v24);
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  BattleBuffData__UpdateForceNoField((BattleBuffData_o *)TakeOverAiStateArray, 0LL);
  BuffData = BattleServantData__get_BuffData(this, v25);
  v27 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  MaxHp = BattleServantData__getMaxHp(this, v28);
  Individualities = BattleServantData__getIndividualities(this, 0LL, v30);
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 0, 0, 0, v32);
  fieldIndiv = arg->fields.fieldIndiv;
  v35 = BuffIndividualities;
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__getBuffIndividualities(this, 0, 0, 1, v36);
  if ( !BuffData )
    goto LABEL_22;
  BattleBuffData__ChangeBuffState(
    BuffData,
    v27,
    MaxHp,
    Individualities,
    v35,
    fieldIndiv,
    (System_Int32_array *)TakeOverAiStateArray,
    0LL);
  v38 = !isAction && BattleServantData__isAction(this, v37);
  *(_BYTE *)(v8 + 85) = v38;
  *(_QWORD *)(v8 + 16) = BattleServantData__getUserSvtId(this, v37);
  *(_DWORD *)(v8 + 24) = this->fields.maxDefeatPoint;
  *(_DWORD *)(v8 + 28) = this->fields.defeatPoint;
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v39);
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)TakeOverAiStateArray, 0LL);
  *(_QWORD *)(v8 + 48) = SaveData;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 48), SaveData, v41, v42, v43, v44, v45, v46);
  *(_DWORD *)(v8 + 56) = BattleServantData__GetSkillChargeTurn(this, 0, v47);
  *(_DWORD *)(v8 + 60) = BattleServantData__GetSkillChargeTurn(this, 1, v48);
  *(_DWORD *)(v8 + 64) = BattleServantData__GetSkillChargeTurn(this, 2, v49);
  *(_DWORD *)(v8 + 36) = BattleServantData__getMaxHp(this, v50);
  v51 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  v52 = *(_DWORD *)(v8 + 36);
  v53 = v51;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  *(_DWORD *)(v8 + 32) = System_Math__Min_44967328(v53, v52, 0LL);
  *(_DWORD *)(v8 + 40) = this->fields.np;
  *(_DWORD *)(v8 + 44) = this->fields.nexttpturn;
  *(_DWORD *)(v8 + 68) = this->fields.aftSquareIndex;
  *(_DWORD *)(v8 + 72) = this->fields.befSquareIndex;
  *(_DWORD *)(v8 + 76) = this->fields.transformIndex;
  *(_DWORD *)(v8 + 80) = this->fields.transformLimitCount;
  *(_BYTE *)(v8 + 84) = this->fields.isSleepWaitMode;
  dicDistributeStar = arg->fields.dicDistributeStar;
  UserSvtId = BattleServantData__getUserSvtId(this, v55);
  *(_DWORD *)(v8 + 88) = BasicHelper__GetValue_long__int_(
                           (System_Collections_Generic_Dictionary_K__V__o *)dicDistributeStar,
                           UserSvtId,
                           0,
                           (const MethodInfo_17286FC *)Method_BasicHelper_GetValue_long__int___);
  *(_DWORD *)(v8 + 92) = this->fields.squareEffectSkillId;
  *(_DWORD *)(v8 + 96) = this->fields.squareEffectSkillLv;
  servantEvent = arg->fields.servantEvent;
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__getUserSvtId(this, v58);
  if ( !servantEvent )
LABEL_22:
    sub_B2C434(TakeOverAiStateArray, v15);
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
  __int64 v10; // x1
  System_String_o *text; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4185B71 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B71 = 1;
  }
  text = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getActValue_30954520(buffData, 90, &text, v8, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B6F & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B6F = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getActMag_30955592(buffData, 91, v8, 0LL);
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

  if ( (byte_4185B4E & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffTypes);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, v5);
    sub_B2C35C(&Method_System_Nullable_bool__GetValueOrDefault__, v6);
    sub_B2C35C(&Method_System_Nullable_bool___ctor__, v7);
    byte_4185B4E = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
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
              (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
      v12 = &v14;
      v14 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v12,
        v11,
        (const MethodInfo_214E7FC *)Method_System_Nullable_bool___ctor__);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21

  if ( (byte_4185B4D & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B4D = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return 0;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__IsPermanentSleep(buffData, v4, 0LL);
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
        const MethodInfo_172AA48 *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  Il2CppClass *_0_BattleServantData___c__627_T; // x21
  __int16 v13; // w8
  Il2CppClass *v14; // x21
  Il2CppClass *v15; // x21
  Il2CppClass *v16; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x21
  Il2CppClass *v18; // x21
  __int16 v19; // w8
  Il2CppClass *v20; // x21
  Il2CppClass *v21; // x21
  Il2CppClass *v22; // x21
  Il2CppObject *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  Il2CppClass *v30; // x19
  char *static_fields; // x0

  if ( (byte_4187259 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___, *(_QWORD *)&wave);
    sub_B2C35C(&Method_System_Func_ServantWaveTurnEvent__bool___ctor__, v8);
    sub_B2C35C(&System_Func_ServantWaveTurnEvent__bool__TypeInfo, v9);
    byte_4187259 = 1;
  }
  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner )
    sub_B2C434(0LL, *(_QWORD *)&wave);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantWaveTurnEventOwner__EventEnumerator(
                                                               waveTurnEventOwner,
                                                               wave,
                                                               turn,
                                                               0LL);
  _0_BattleServantData___c__627_T = method->rgctx_data->_0_BattleServantData___c__627_T_;
  v13 = WORD1(_0_BattleServantData___c__627_T->vtable[0].methodPtr);
  if ( (v13 & 1) == 0 )
  {
    sub_AC505C(method->rgctx_data->_0_BattleServantData___c__627_T_);
    v13 = WORD1(_0_BattleServantData___c__627_T->vtable[0].methodPtr);
  }
  if ( (v13 & 0x400) != 0 )
  {
    v14 = method->rgctx_data->_0_BattleServantData___c__627_T_;
    if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_0_BattleServantData___c__627_T_);
    if ( !v14->_2.cctor_finished )
    {
      v15 = method->rgctx_data->_0_BattleServantData___c__627_T_;
      if ( (BYTE2(v15->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_0_BattleServantData___c__627_T_);
      j_il2cpp_runtime_class_init_0(v15);
    }
  }
  v16 = method->rgctx_data->_0_BattleServantData___c__627_T_;
  if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_0_BattleServantData___c__627_T_);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v16->static_fields + 1);
  if ( !v17 )
  {
    v18 = method->rgctx_data->_0_BattleServantData___c__627_T_;
    v19 = WORD1(v18->vtable[0].methodPtr);
    if ( (v19 & 1) == 0 )
    {
      sub_AC505C(method->rgctx_data->_0_BattleServantData___c__627_T_);
      v19 = WORD1(v18->vtable[0].methodPtr);
    }
    if ( (v19 & 0x400) != 0 )
    {
      v20 = method->rgctx_data->_0_BattleServantData___c__627_T_;
      if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_0_BattleServantData___c__627_T_);
      if ( !v20->_2.cctor_finished )
      {
        v21 = method->rgctx_data->_0_BattleServantData___c__627_T_;
        if ( (BYTE2(v21->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C(method->rgctx_data->_0_BattleServantData___c__627_T_);
        j_il2cpp_runtime_class_init_0(v21);
      }
    }
    v22 = method->rgctx_data->_0_BattleServantData___c__627_T_;
    if ( (BYTE2(v22->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_0_BattleServantData___c__627_T_);
    v23 = *(Il2CppObject **)v22->static_fields;
    v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ServantWaveTurnEvent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v17,
      v23,
      (intptr_t)method->rgctx_data->_1_BattleServantData___c__627_T___HasWaveTurnEvent_b__627_0,
      (const MethodInfo_2711C04 *)Method_System_Func_ServantWaveTurnEvent__bool___ctor__);
    v30 = method->rgctx_data->_0_BattleServantData___c__627_T_;
    if ( (BYTE2(v30->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(v30);
    static_fields = (char *)v30->static_fields;
    *((_QWORD *)static_fields + 1) = v17;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v17,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v11,
           (System_Func_TSource__bool__o *)v17,
           (const MethodInfo_173A2F8 *)Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___);
}


void __fastcall BattleServantData__InitCommonAddIndividuality(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  __int64 IsAnySupport; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Int32_array *v17; // x1

  if ( (byte_4185AFD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&StringLiteral_7273/*"INDIVIDUALITY_IS_SUPPORT"*/, v7);
    byte_4185AFD = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  IsAnySupport = Follower__IsAnySupport(this->fields.followerType, 0LL);
  if ( (IsAnySupport & 1) != 0 )
  {
    IsAnySupport = ConstantMaster__getValue((System_String_o *)StringLiteral_7273/*"INDIVIDUALITY_IS_SUPPORT"*/, 0LL);
    if ( v8 )
    {
      System_Collections_Generic_List_int___Add(
        v8,
        IsAnySupport,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      goto LABEL_7;
    }
LABEL_11:
    sub_B2C434(IsAnySupport, v10);
  }
  if ( !v8 )
    goto LABEL_11;
LABEL_7:
  if ( v8->fields._size < 1 )
    v17 = 0LL;
  else
    v17 = System_Collections_Generic_List_int___ToArray(
            v8,
            (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.commonAddIndividuality = v17;
  sub_B2C2F8(
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
  BattleBuffData_o **p_buffData; // x20
  __int64 v4; // x1
  int MaxHp; // w21
  BattleBuffData_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x3

  if ( (byte_4185B94 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_TypeInfo, method);
    byte_4185B94 = 1;
  }
  p_buffData = &this->fields.buffData;
  if ( this->fields.buffData )
  {
    MaxHp = BattleServantData__getMaxHp(this, method);
  }
  else
  {
    v6 = (BattleBuffData_o *)sub_B2C42C(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v6, 0LL);
    *p_buffData = v6;
    sub_B2C2F8(
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
    sub_B2C434(0LL, v4);
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

  if ( (byte_4185BB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, data);
    sub_B2C35C(&StringLiteral_11652/*"SEQ_IDS_20220729"*/, v4);
    byte_4185BB1 = 1;
  }
  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)data);
  if ( TreasureDevice )
  {
    ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray((System_String_o *)StringLiteral_11652/*"SEQ_IDS_20220729"*/, 0LL);
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
                                 (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___) >= 0;
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
  __int64 v26; // x1
  int64_t v27; // x21
  System_Xml_XmlQualifiedName_o **v28; // x28
  int32_t v29; // w27
  System_Int32_c **v30; // x19
  System_Xml_XmlQualifiedName_o **v31; // x25
  System_Xml_Schema_XmlSchemaObject_o *v32; // x22
  __int64 v33; // x23
  __int64 v34; // x24
  __int64 v35; // x0
  __int64 v36; // x1
  WebViewManager_o *Instance; // x0
  __int64 v38; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v40; // x1
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x21
  __int64 v44; // x22
  int32_t v45; // w21
  __int128 v46; // q0
  int v47; // w19
  int v48; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+30h] [xbp-B0h] BYREF
  UserServantEntity_o *entity; // [xsp+50h] [xbp-90h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *v54; // [xsp+58h] [xbp-88h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *v55; // [xsp+60h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v6 = this;
  if ( (byte_4185BB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&long_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&string_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_22468/*"svtId"*/, v19);
    sub_B2C35C(&StringLiteral_23066/*"userSvtId"*/, v20);
    this = (BattleServantData_o *)sub_B2C35C(&StringLiteral_21968/*"seqId"*/, v21);
    byte_4185BB2 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v55 = 0LL;
  value = 0LL;
  entity = 0LL;
  v54 = 0LL;
  if ( !data || (this = (BattleServantData_o *)data->fields.firstNpPlayList) == 0LL )
    sub_B2C434(this, data);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v22 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_21968/*"seqId"*/;
  v23 = &int_TypeInfo;
  v24 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_23066/*"userSvtId"*/;
  v57.fields.current = (Il2CppObject *)v52.fields.fakeValue;
  *(_OWORD *)&v57.fields.list = *(_OWORD *)&v52.fields.currentCryptoKey;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v57,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
        {
          v47 = 0;
          v48 = 1;
          goto LABEL_43;
        }
        current = v57.fields.current;
        if ( v57.fields.current
          && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v57.fields.current,
               *v22,
               &value,
               (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
        {
          if ( !value )
            sub_B2C434(0LL, v26);
          if ( value->klass->_1.element_class != (*v23)->_1.element_class )
          {
            MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B2C728(value);
LABEL_47:
            sub_B2C434(MasterData_WarQuestSelectionMaster, v40);
          }
          if ( *(_DWORD *)j_il2cpp_object_unbox_0(value) == seqId )
            break;
        }
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
             *v24,
             &v55,
             (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
        && v55 )
      {
        if ( (System_String_c *)v55->klass == string_TypeInfo )
        {
          v27 = System_Int64__Parse((System_String_o *)v55, 0LL);
          goto LABEL_17;
        }
        if ( (System_Int64_c *)v55->klass == long_TypeInfo )
        {
          v27 = *(_QWORD *)j_il2cpp_object_unbox_0(v55);
          goto LABEL_17;
        }
      }
      v27 = 0LL;
LABEL_17:
      if ( v6->fields.isEnemy || v6->fields.followerType )
        break;
      v46 = *(_OWORD *)&v6->fields.userSvtId.fields.fakeValue;
      *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v6->fields.userSvtId.fields.currentCryptoKey;
      *(_OWORD *)&v52.fields.fakeValue = v46;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v51 = v52;
      if ( v27 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL) )
        goto LABEL_44;
    }
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_22468/*"svtId"*/,
           &v54,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v28 = v22;
      v29 = seqId;
      v30 = v23;
      v31 = v24;
      v32 = v54;
      v34 = *(_QWORD *)&v6->fields.svtId.fields.currentCryptoKey;
      v33 = *(_QWORD *)&v6->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v58.fields.currentCryptoKey = v34;
      *(_QWORD *)&v58.fields.fakeValue = v33;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v58, 0LL);
      if ( !v32 )
        sub_B2C434(v35, v36);
      v23 = v30;
      if ( v32->klass->_1.element_class != (*v30)->_1.element_class )
      {
        v41 = sub_B2C728(v32);
LABEL_51:
        sub_B2C434(v41, v42);
      }
      seqId = v29;
      v24 = v31;
      v22 = v28;
      if ( *(_DWORD *)j_il2cpp_object_unbox_0(v32) == (_DWORD)v35 )
        break;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v38);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_47;
    v41 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            v27,
            (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( (v41 & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_51;
      v44 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v43 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v59.fields.currentCryptoKey = v44;
      *(_QWORD *)&v59.fields.fakeValue = v43;
      v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v59, 0LL);
      if ( v45 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6->fields.svtId, 0LL) )
        break;
    }
  }
LABEL_44:
  v47 = 1;
  v48 = 3;
LABEL_43:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  return v47 & ((unsigned int)(v48 + 1) >> 2);
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
    sub_B2C434(0LL, method);
  return BattleDeckServantData__getEnableNpInfo(deckSvt, 0LL);
}


bool __fastcall BattleServantData__IsEquip(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct BattleUserServantData_array *equipList; // x22
  __int64 v8; // x8
  SkillLvMaster_o *v9; // x19
  unsigned __int64 v10; // x23
  Il2CppClass **v11; // x21
  DataManager_o **v12; // x21
  DataManager_o *v13; // t1
  DataManager_o *v14; // x20
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v16; // x21
  unsigned __int64 v17; // x24
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x25
  __int64 v20; // x0

  if ( (byte_4185BB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185BB5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (equipList = this->fields.equipList) == 0LL) )
  {
LABEL_26:
    sub_B2C434(Instance, v6);
  }
  v8 = *(_QWORD *)&equipList->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = (SkillLvMaster_o *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v8 )
    {
LABEL_25:
      v20 = sub_B2C460(Instance);
      sub_B2C400(v20, 0LL);
    }
    v11 = &equipList->obj.klass + v10;
    v13 = (DataManager_o *)v11[4];
    v12 = (DataManager_o **)(v11 + 4);
    Instance = v13;
    if ( v13 )
    {
      Instance = (DataManager_o *)BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)Instance, 0LL);
      if ( v10 >= equipList->max_length )
        goto LABEL_25;
      v14 = Instance;
      Instance = *v12;
      if ( !*v12 )
        goto LABEL_26;
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
                                    Instance,
                                    Instance->klass[1]._1.this_arg.data);
      if ( !v14 )
        goto LABEL_26;
      datalist = v14->fields.datalist;
      if ( (int)datalist >= 1 )
        break;
    }
LABEL_22:
    LODWORD(v8) = equipList->max_length;
    if ( (__int64)++v10 >= (int)v8 )
      return 0;
  }
  v16 = Instance;
  v17 = 0LL;
  p_lookup = &Instance->fields.lookup;
  while ( 1 )
  {
    if ( v17 >= (unsigned int)datalist )
      goto LABEL_25;
    if ( !v16 )
      goto LABEL_26;
    if ( v17 >= LODWORD(v16->fields.datalist) )
      goto LABEL_25;
    v6 = *((unsigned int *)&v14->fields.lookup + v17);
    if ( (int)v6 >= 1 )
    {
      if ( !v9 )
        goto LABEL_26;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(v9, v6, *((_DWORD *)p_lookup + v17), 0LL);
      if ( Instance )
        return 1;
    }
    LODWORD(datalist) = v14->fields.datalist;
    if ( (__int64)++v17 >= (int)datalist )
      goto LABEL_22;
  }
}


bool __fastcall BattleServantData__IsForceAppearance(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.isForceAppearance;
}


bool __fastcall BattleServantData__IsHideClassSkillNpcFollower(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleDeckServantData_o *deckSvt; // x0

  if ( !this->fields.deckSvt || !Follower__IsNpc(this->fields.followerType, 0LL) )
    return 0;
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B2C434(0LL, v3);
  return BattleDeckServantData__IsHideClassSkillNpcFollower(deckSvt, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__IsMoveToSubMember(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_4185BA1 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___, *(_QWORD *)&wave);
    byte_4185BA1 = 1;
  }
  return BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(
           this,
           wave,
           turn,
           (const MethodInfo_172AA48 *)Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___);
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
  __int64 v6; // x1

  if ( !BattleServantData__get_TreasureDevice(this, method) || this->fields.playedNPCount > 0 )
    return 0;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
  if ( !TreasureDevice )
    sub_B2C434(0LL, v6);
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
  __int64 v19; // x1
  System_String_o *Weight; // x2
  const MethodInfo_2104444 *v21; // x4
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_KeyValuePair_string__int__o v29; // [xsp+8h] [xbp-48h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+18h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o v31; // 0:x0.16

  if ( (byte_4185BBE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__int___ctor__, condMst);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_B2C35C(&Voice_TypeInfo, v11);
    byte_4185BBE = 1;
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
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager__GetPrefixVoiceId(
                                                  Instance,
                                                  SvtId,
                                                  v16,
                                                  FileName,
                                                  0LL),
        !condMst) )
  {
    sub_B2C434(Instance, v19);
  }
  if ( !VoicePlayCondMaster__isVoicePlay_34396788(
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
  v31.fields.key = (struct System_String_o *)&v29;
  *(_QWORD *)&v31.fields.value = FileName;
  v29 = (System_Collections_Generic_KeyValuePair_string__int__o)0LL;
  System_Collections_Generic_KeyValuePair_string__int____ctor(
    v31,
    Weight,
    Method_System_Collections_Generic_KeyValuePair_string__int___ctor__,
    v21);
  *pairVoiceIdWeight = v29;
  sub_B2C2F8((BattleServantConfConponent_o *)pairVoiceIdWeight, 0LL, v22, v23, v24, v25, v26, v27);
  return 1;
}


bool __fastcall BattleServantData__IsTDAppearance(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x19
  const MethodInfo *v4; // x2
  __int64 DispLimitCount; // x0
  __int64 v6; // x1

  TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v4);
  if ( !TreasureDevice )
    sub_B2C434(DispLimitCount, v6);
  return TreasureDvcEntity__getFixAppearanceInfoArray(TreasureDevice, DispLimitCount, 0LL) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_4185BA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___, *(_QWORD *)&wave);
    byte_4185BA2 = 1;
  }
  return BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(
           this,
           wave,
           turn,
           (const MethodInfo_172AA48 *)Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___);
}


BattleCommandData_o *__fastcall BattleServantData__MakeTreasureDvcCommand(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleCommandData_o *v3; // x20
  const MethodInfo *v4; // x1
  ServantTreasureDvcEntity_o *SvtTDvc; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4185B26 & 1) == 0 )
  {
    sub_B2C35C(&BattleCommandData_TypeInfo, method);
    byte_4185B26 = 1;
  }
  if ( !this->fields.TDvc || !this->fields._SvtTDvc )
    return 0LL;
  v3 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v3, 0LL);
  SvtTDvc = BattleServantData__get_SvtTDvc(this, v4);
  if ( !SvtTDvc || !v3 )
    sub_B2C434(SvtTDvc, v6);
  v3->fields._type = SvtTDvc->fields.cardId;
  v3->fields.treasureDvc = BattleServantData__getTreasureDvcId(this, 1, v7);
  return v3;
}


void __fastcall BattleServantData__OverwriteShiftDeckIndex(
        BattleServantData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  int32_t Param; // w0

  if ( !vals )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, userSvt);
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
          v14 = sub_B2C460(this);
          sub_B2C400(v14, 0LL);
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
    sub_B2C434(0LL, ev);
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

  if ( (byte_4185BBC & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____Remove__,
      key);
    byte_4185BBC = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(key, 0LL);
  p_partAnimationSaveDict = (BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict;
  if ( IsNullOrEmpty )
  {
    p_partAnimationSaveDict->klass = 0LL;
    sub_B2C2F8(p_partAnimationSaveDict, 0LL, v5, v6, v7, v8, v9, v10);
  }
  else
  {
    klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_partAnimationSaveDict->klass;
    if ( klass )
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        klass,
        (System_Xml_XmlQualifiedName_o *)key,
        (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____Remove__);
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
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x24
  WarBoardData_SquareRangeSearch_o *v20; // x0
  WarBoardData_SquareRangeSearch_o *v21; // x22
  int32_t v22; // w24
  BattleSkillInfoData_o *SkillData; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v24; // x20
  const MethodInfo *v25; // [xsp+0h] [xbp-40h]

  if ( (byte_4185B08 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v9);
    sub_B2C35C(&System_Func_BattleSkillInfoData__bool__TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__, v12);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass308_0__ReplaceSelfSkillInfo_b__0__, v13);
    sub_B2C35C(&BattleServantData___c__DisplayClass308_0_TypeInfo, v14);
    byte_4185B08 = 1;
  }
  v15 = (BattleServantData___c__DisplayClass308_0_o *)sub_B2C42C(BattleServantData___c__DisplayClass308_0_TypeInfo);
  BattleServantData___c__DisplayClass308_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  v15->fields.skillInfoType = 11;
  v15->fields.index = index;
  skillInfoList = this->fields.skillInfoList;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleSkillInfoData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_BattleServantData___c__DisplayClass308_0__ReplaceSelfSkillInfo_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
  v20 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___);
  if ( !v20 )
    return;
  v21 = v20;
  v16 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.skillInfoList;
  if ( !v16
    || (v22 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                v16,
                (WarBoardManager_TaskList_o *)v21,
                (const MethodInfo_2EF5510 *)Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__),
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
                                                                               v25),
        !this->fields.skillInfoList)
    || (v24 = v16,
        System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.skillInfoList,
          v22,
          (WarBoardManager_TaskList_o *)v16,
          (const MethodInfo_2EF41B8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__),
        !v24) )
  {
LABEL_10:
    sub_B2C434(v16, v17);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_WarBoardManager_TaskList__o *, BattleServantData_o *, Il2CppMethodPointer))v24->klass->vtable._11_Add.method)(
    v24,
    this,
    v24->klass->vtable._12_unknown.methodPtr);
  LODWORD(v24[1].monitor) = v21[2].klass;
  LODWORD(v24[1].klass) = v21[1].fields.squareIndex;
}


void __fastcall BattleServantData__ResetAdjustment(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0

  if ( (byte_4185AF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Clear__, method);
    byte_4185AF1 = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)adjustmentList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__Clear__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x20
  BattleServantData___c_c *v12; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__363_0; // x21
  Il2CppObject *v15; // x22
  struct BattleServantData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  __int64 v33; // x20
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  BattleSkillInfoData_o *v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x3
  BattleSkillInfoData_o *v41; // x21
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x3
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0

  if ( (byte_4185B1C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___, method);
    sub_B2C35C(&Method_System_Func_BattleSkillInfoData__bool___ctor__, v3);
    sub_B2C35C(&System_Func_BattleSkillInfoData__bool__TypeInfo, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_BattleServantData___c__ResetServantSelfSkill_b__363_0__, v9);
    sub_B2C35C(&BattleServantData___c_TypeInfo, v10);
    byte_4185B1C = 1;
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
  _9__363_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__363_0;
  if ( !_9__363_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__363_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__363_0,
      v15,
      Method_BattleServantData___c__ResetServantSelfSkill_b__363_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v16 = BattleServantData___c_TypeInfo->static_fields;
    v16->__9__363_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__363_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v16->__9__363_0,
      (System_Int32_array **)_9__363_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__363_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  if ( !v23 )
    sub_B2C434(0LL, v24);
  klass = v23->klass;
  v27 = v23;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AC5258(v23, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL, v25);
  }
  v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v27,
          *(_QWORD *)(p_method + 8));
  if ( !v33 )
    sub_B2C434(0LL, v31);
  while ( 1 )
  {
    v42 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_33;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_33:
      v45 = sub_AC5258(v33, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v33, *(_QWORD *)(v45 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v36 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_24;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_24:
      v37 = sub_AC5258(v33, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL, v46);
    }
    v38 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8));
    v41 = v38;
    if ( !v38 )
      sub_B2C434(0LL, v39);
    v38->fields.sealedTurn = 0;
    if ( !BattleServantData__ChangeSkillRemainingTurn(this, v38, v38, v40) )
      v41->fields.chargeTurn = 0;
  }
  v47 = *(_QWORD *)v33;
  if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
  {
    v48 = 0LL;
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
        goto LABEL_40;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_40:
    v50 = sub_AC5258(v33, System_IDisposable_TypeInfo, 0LL, v46);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v33, *(_QWORD *)(v50 + 8));
}


void __fastcall BattleServantData__ResultDamage(
        BattleServantData_o *this,
        int32_t damage,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandOpponent,
        int32_t minHp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  const MethodInfo *v12; // x3
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
  BattleServantData__resultDamage(this, damage, minHp, v12);
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) > 0 )
    return;
  SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupBase_o *)this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
  if ( !SnapShotDamagedOnLogicDead_k__BackingField )
LABEL_7:
    sub_B2C434(SnapShotDamagedOnLogicDead_k__BackingField, v11);
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
  __int64 v15; // x1
  int32_t v16; // w22
  PlayerServantNoblePhantasmUsageData_o *playerServantNoblePhantasmUsageData; // x21
  __int64 v18; // x23
  __int64 v19; // x24
  const MethodInfo *v20; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v21; // x21
  const MethodInfo *v22; // x1
  System_Xml_Schema_XmlSchemaObject_o *v23; // x0
  __int64 v24; // x22
  __int64 v25; // x23
  System_Int32_c *v26; // x0
  System_Xml_Schema_XmlSchemaObject_o *v27; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  System_String_o *v30; // x20
  int32_t Int; // w0
  int v32; // w8
  System_Xml_Schema_XmlSchemaObject_o *v33; // x0
  int32_t v34; // [xsp+Ch] [xbp-54h] BYREF
  int64_t UserSvtId; // [xsp+10h] [xbp-50h] BYREF
  int32_t SelectedNobleGroupSeqId; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4185BB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__Add__, data);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_22468/*"svtId"*/, v11);
    sub_B2C35C(&StringLiteral_23066/*"userSvtId"*/, v12);
    sub_B2C35C(&StringLiteral_21968/*"seqId"*/, v13);
    byte_4185BB3 = 1;
  }
  SelectedNobleGroupSeqId = 0;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)BattleServantData__GetSelectedNobleSeqId(
                                                                                                 this,
                                                                                                 (const MethodInfo *)data);
  if ( !data )
    goto LABEL_25;
  v16 = (int)SelectedNobleSeqId;
  playerServantNoblePhantasmUsageData = data->fields.playerServantNoblePhantasmUsageData;
  v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v19;
  *(_QWORD *)&v37.fields.fakeValue = v18;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                                 v37,
                                                                                                 0LL);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_25;
  PlayerServantNoblePhantasmUsageData__AddNoblePhantasmUsage(
    playerServantNoblePhantasmUsageData,
    (int32_t)SelectedNobleSeqId,
    v16,
    this->fields.followerType,
    this->fields.isEnemy,
    0LL);
  if ( !BattleServantData__CheckFirstNpPlay(this, data, v20) )
    return;
  v21 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v21,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  LODWORD(UserSvtId) = v16;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)j_il2cpp_value_box_0(
                                                                                                 int_TypeInfo,
                                                                                                 &UserSvtId);
  if ( !v21 )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21968/*"seqId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)SelectedNobleSeqId,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( this->fields.isEnemy || this->fields.followerType )
  {
    UserSvtId = 0LL;
    v23 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v21,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23066/*"userSvtId"*/,
      v23,
      (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v25 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v38.fields.currentCryptoKey = v25;
    *(_QWORD *)&v38.fields.fakeValue = v24;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v38, 0LL);
    v26 = int_TypeInfo;
  }
  else
  {
    UserSvtId = BattleServantData__getUserSvtId(this, v22);
    v33 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v21,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23066/*"userSvtId"*/,
      v33,
      (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v26 = int_TypeInfo;
    v34 = 0;
  }
  v27 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(v26, &v34);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v21,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22468/*"svtId"*/,
    v27,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  SelectedNobleSeqId = data->fields.firstNpPlayList;
  if ( !SelectedNobleSeqId )
LABEL_25:
    sub_B2C434(SelectedNobleSeqId, v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SelectedNobleSeqId,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
  if ( BattleServantData__CheckSelectedNobleSeqIsGroup(this, v28) )
  {
    SelectedNobleGroupSeqId = BattleServantData__GetSelectedNobleGroupSeqId(this, v29);
    v30 = System_Int32__ToString((int32_t)&SelectedNobleGroupSeqId, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v30, 0, 0LL);
    if ( this->fields.isEnemy || this->fields.followerType )
      v32 = 2;
    else
      v32 = 1;
    UnityEngine_PlayerPrefs__SetInt(v30, v32 | Int, 0LL);
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
  __int64 v17; // x1
  const MethodInfo *v18; // x2

  z = offSet.fields.z;
  y = offSet.fields.y;
  x = offSet.fields.x;
  if ( (byte_4185AEE & 1) == 0 )
  {
    sub_B2C35C(&BattleServantData_Adjustment_TypeInfo, isCritical);
    byte_4185AEE = 1;
  }
  v15 = sub_B2C42C(BattleServantData_Adjustment_TypeInfo);
  BattleServantData_Adjustment___ctor((BattleServantData_Adjustment_o *)v15, 0LL);
  if ( !v15 )
    sub_B2C434(v16, v17);
  *(float *)(v15 + 20) = x;
  *(float *)(v15 + 24) = y;
  *(_BYTE *)(v15 + 16) = isCritical;
  *(_BYTE *)(v15 + 17) = isWeak;
  *(_BYTE *)(v15 + 18) = isRegist;
  *(_BYTE *)(v15 + 19) = isNoDamage;
  *(float *)(v15 + 28) = z;
  BattleServantData__SetAdjustment_21244500(this, (BattleServantData_Adjustment_o *)v15, v18);
}


void __fastcall BattleServantData__SetAdjustment_21244500(
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
  __int64 v16; // x1

  if ( (byte_4185AEF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__, data);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v6);
    byte_4185AEF = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (BattleServantConfConponent_o *)&this->fields.adjustmentList;
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (BattleServantConfConponent_c *)v9;
    sub_B2C2F8(p_adjustmentList, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
    adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      sub_B2C434(0LL, v16);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)adjustmentList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__);
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
  struct System_Int32_array *commandAssistIds; // x8
  EventCommandAssistMaster_o *v9; // x21
  unsigned __int64 v10; // x22
  unsigned __int64 max_length; // x9
  __int64 v12; // x0
  const MethodInfo *v13; // [xsp+0h] [xbp-30h]

  if ( (byte_4185AFB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventCommandAssistMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_4185AFB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int32_t *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  commandAssistIds = this->fields.commandAssistIds;
  if ( !commandAssistIds )
LABEL_14:
    sub_B2C434(Master_WarQuestSelectionMaster, v7);
  v9 = (EventCommandAssistMaster_o *)Master_WarQuestSelectionMaster;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = commandAssistIds->max_length;
    if ( (__int64)v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
    {
      v12 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v12, 0LL);
    }
    if ( v9 )
    {
      Master_WarQuestSelectionMaster = (int32_t *)EventCommandAssistMaster__GetCurrentEntity(
                                                    v9,
                                                    eventId,
                                                    commandAssistIds->m_Items[v10 + 1],
                                                    -1,
                                                    0,
                                                    0LL);
      if ( Master_WarQuestSelectionMaster )
        Master_WarQuestSelectionMaster = (int32_t *)BattleServantData__addSkillInfo(
                                                      this,
                                                      23,
                                                      v10,
                                                      Master_WarQuestSelectionMaster[13],
                                                      Master_WarQuestSelectionMaster[14],
                                                      -1LL,
                                                      Master_WarQuestSelectionMaster[4],
                                                      0LL,
                                                      v13);
      commandAssistIds = this->fields.commandAssistIds;
      ++v10;
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
  if ( (byte_4185B0C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, fakeInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_20221/*"limitCount"*/, v12);
    sub_B2C35C(&StringLiteral_22468/*"svtId"*/, v13);
    sub_B2C35C(&StringLiteral_19774/*"index"*/, v14);
    sub_B2C35C(&StringLiteral_23066/*"userSvtId"*/, v15);
    this = (BattleServantData_o *)sub_B2C35C(&StringLiteral_22904/*"uniqueId"*/, v16);
    byte_4185B0C = 1;
  }
  entity = 0LL;
  if ( !fakeInfo )
    goto LABEL_29;
  v4->fields.index = System_Collections_Generic_Dictionary_string__int___get_Item(
                       fakeInfo,
                       (System_String_o *)StringLiteral_19774/*"index"*/,
                       (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v4->fields.uniqueId = System_Collections_Generic_Dictionary_string__int___get_Item(
                          fakeInfo,
                          (System_String_o *)StringLiteral_22904/*"uniqueId"*/,
                          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  Item = System_Collections_Generic_Dictionary_string__int___get_Item(
           fakeInfo,
           (System_String_o *)StringLiteral_23066/*"userSvtId"*/,
           (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
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
          (System_String_o *)StringLiteral_22468/*"svtId"*/,
          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v4->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v19, 0LL);
  v20 = System_Collections_Generic_Dictionary_string__int___get_Item(
          fakeInfo,
          (System_String_o *)StringLiteral_20221/*"limitCount"*/,
          (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v4->fields.limitcount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v20, 0LL);
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_29;
  v22 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v4->fields.svtId, 0LL);
  this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
    this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v62, 0LL);
    if ( MasterData_WarQuestSelectionMaster )
    {
      v42 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     (int32_t)this,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v4->fields.svtdata = (struct ServantEntity_o *)v42;
      p_svtdata = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v4->fields.svtdata;
      sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.svtdata, v42, v44, v45, v46, v47, v48, v49);
      this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        v50 = *p_svtdata;
        if ( *p_svtdata )
        {
          v51 = this;
          v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v50[1], 0LL);
          this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
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
    sub_B2C434(this, fakeInfo);
  }
  if ( !entity )
    goto LABEL_29;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  v24 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 entity->fields.svtId,
                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v4->fields.svtdata = (struct ServantEntity_o *)v24;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.svtdata, v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Int32_array **)entity;
  v4->fields.svtlimitaddent = entity;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.svtlimitaddent, v31, v32, v33, v34, v35, v36, v37);
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_29;
  this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.svtlimitDispent, v53, v54, v55, v56, v57, v58, v59);
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
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x0
  BattleServantConfConponent_o *p_partAnimationSaveDict; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1

  if ( (byte_4185BBA & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData_____ctor__,
      key);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____set_Item__,
      v7);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TypeInfo, v8);
    byte_4185BBA = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)saveDataArray, 0LL) )
  {
    partAnimationSaveDict = this->fields.partAnimationSaveDict;
    if ( !partAnimationSaveDict )
    {
      p_partAnimationSaveDict = (BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict;
      v11 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v11,
        (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData_____ctor__);
      p_partAnimationSaveDict->klass = (BattleServantConfConponent_c *)v11;
      sub_B2C2F8(p_partAnimationSaveDict, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
      partAnimationSaveDict = (struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *)p_partAnimationSaveDict->klass;
      if ( !p_partAnimationSaveDict->klass )
        sub_B2C434(0LL, v18);
    }
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)partAnimationSaveDict,
      (System_Xml_XmlQualifiedName_o *)key,
      (System_Xml_Schema_XmlSchemaObject_o *)saveDataArray,
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____set_Item__);
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
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_B2C434(0LL, v4);
  this->fields.selectedTDCardId = SvtTDvc->fields.cardId;
  this->fields.selectedTDId = BattleServantData__getTreasureDvcId(this, 1, v5);
}


void __fastcall BattleServantData__SetServantCommandCard(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Hashtable_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  DataManager_o *Instance; // x0
  __int64 v17; // x1
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

  if ( (byte_4185B41 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCardMaster___, method);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v3);
    sub_B2C35C(&int___TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A,
      v8);
    byte_4185B41 = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v9, 0LL);
  this->fields.commandtable = v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandtable,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ServantCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v19 = sub_B2C374(int___TypeInfo, 6LL);
  v31.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304((System_Array_o *)v19, v31, 0LL);
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
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
      if ( v20 >= *(unsigned int *)(v19 + 24) )
      {
        v28 = sub_B2C460(Instance);
        sub_B2C400(v28, 0LL);
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
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v33, 0LL);
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
    sub_B2C434(Instance, v17);
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
  __int64 v7; // x1

  result = 0LL;
  if ( battleInfo && inDeckSvt && npcId >= 1 )
  {
    result = BattleInfoData__getShiftServantData(battleInfo, npcId, 0LL);
    if ( !result )
      sub_B2C434(0LL, v7);
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
  __int64 v10; // x1
  int v11; // w21
  int32_t TotalDamage; // w20
  int32_t v13; // w1
  const MethodInfo *v14; // x3

  if ( (byte_4185BA9 & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, data);
    byte_4185BA9 = 1;
  }
  BattleServantData__setShiftServant(this, data, shiftValue, *(const MethodInfo **)&shiftValue);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  if ( !defHp )
    sub_B2C434(v9, v10);
  v11 = v9;
  TotalDamage = SimpleHpData__get_TotalDamage((SimpleHpData_o *)defHp, 0LL);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = System_Math__Max_45012344(1, v11 - TotalDamage, 0LL);
  BattleServantData__setHp(this, v13, 0, v14);
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
  if ( (byte_4185B09 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, skillInfo);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v18);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    this = (BattleServantData_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21);
    byte_4185B09 = 1;
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
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v25 = **(_QWORD **)(v24 + 192);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AC505C(v25);
  this = **(BattleServantData_o ***)(v25 + 184);
  if ( !this )
    goto LABEL_33;
  this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  entity = 0LL;
  if ( !this )
    goto LABEL_33;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    skillId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  v26 = (SkillEntity_o *)entity;
  if ( entity )
  {
    skillInfo->fields.isUseSkill = 1;
    skillInfo->fields.isPassive = SkillEntity__isPassive(v26, 0LL);
    v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
      sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v28 = **(_QWORD **)(v27 + 192);
    if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
      sub_AC505C(v28);
    this = **(BattleServantData_o ***)(v28 + 184);
    if ( !this )
      goto LABEL_33;
    this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v31 = **(_QWORD **)(v30 + 192);
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    sub_AC505C(v31);
  this = **(BattleServantData_o ***)(v31 + 184);
  if ( !this )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
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
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v41, 0LL);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v35 )
LABEL_33:
    sub_B2C434(this, skillInfo);
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
    sub_B2C434(this, 0LL);
  this->fields.summonNpcId = inDeckSvt->fields.npcId;
}


void __fastcall BattleServantData__SetTakeoverServantData(
        BattleServantData_o *this,
        BattleWarBoardInfo_WarBoardServantInfo_o *takeoverData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Array_o *v6; // x21
  __int64 v7; // x1
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v9; // x21
  const MethodInfo *v10; // x1
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_4185AF6 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, takeoverData);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__DFFD09C996EDD2714178B1E2F5A21D0196F6DAE68A6E220DFDDFAD22DA6B6F1D,
      v5);
    byte_4185AF6 = 1;
  }
  if ( takeoverData )
  {
    this->fields.maxDefeatPoint = takeoverData->fields.maxDefeatPoint;
    this->fields.defeatPoint = takeoverData->fields.defeatPoint;
    if ( takeoverData->fields.buffDataSave )
    {
      v6 = (System_Array_o *)sub_B2C374(int___TypeInfo, 3LL);
      v11.fields.value = Field__PrivateImplementationDetails__DFFD09C996EDD2714178B1E2F5A21D0196F6DAE68A6E220DFDDFAD22DA6B6F1D;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v6, v11, 0LL);
      buffData = this->fields.buffData;
      if ( !buffData )
        goto LABEL_14;
      buffData = (BattleBuffData_o *)BattleBuffData__GetSkillTypePassiveBuff(buffData, (System_Int32_array *)v6, 0LL);
      if ( !this->fields.buffData )
        goto LABEL_14;
      v9 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)buffData;
      BattleBuffData__Initialize(this->fields.buffData, 0LL);
      buffData = this->fields.buffData;
      if ( !buffData
        || (BattleBuffData__clearAuraBuff(buffData, 0LL), (buffData = this->fields.buffData) == 0LL)
        || (BattleBuffData__setSaveData(buffData, takeoverData->fields.buffDataSave, 0LL),
            (buffData = this->fields.buffData) == 0LL)
        || (BattleBuffData__AddGetSkillTypeBuff(buffData, v9, 0LL),
            (buffData = BattleServantData__get_BuffData(this, v10)) == 0LL) )
      {
LABEL_14:
        sub_B2C434(buffData, v7);
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
  BattleBuffData_o *v10; // x21
  BalanceConfig_c *v11; // x0
  __int64 currentHp; // x1
  BattleBuffData_BuffData_array *ActiveList; // x0
  const MethodInfo *v14; // x2
  int32_t tmpAppearanceId; // w8
  const MethodInfo *v16; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v18; // x21
  int32_t i; // w22
  BattleSkillInfoData_o *SelfSkillInfo; // x0
  int32_t currentNp; // w8
  int32_t nextNpTurn; // w8
  __int64 v23; // x0

  if ( (byte_4185AF7 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, takeoverData);
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, v7);
    sub_B2C35C(&BattleBuffData_TypeInfo, v8);
    sub_B2C35C(&int___TypeInfo, v9);
    byte_4185AF7 = 1;
  }
  if ( takeoverData )
  {
    this->fields.transformIndex = takeoverData->fields.transformIndex;
    this->fields.transformLimitCount = takeoverData->fields.transformLimitCount;
    BattleServantData__loadTransformServant(this, data, (const MethodInfo *)data);
    if ( takeoverData->fields.buffDataSave )
    {
      v10 = (BattleBuffData_o *)sub_B2C42C(BattleBuffData_TypeInfo);
      BattleBuffData___ctor(v10, 0LL);
      if ( !v10 )
        goto LABEL_22;
      BattleBuffData__setSaveData(v10, takeoverData->fields.buffDataSave, 0LL);
      this->fields.tmpAppearanceId = -1;
      ActiveList = BattleBuffData__getActiveList(v10, 1, 0LL);
      if ( BattleServantData__isChangeAppearanceBuff(this, ActiveList, v14) )
      {
        tmpAppearanceId = this->fields.tmpAppearanceId;
        this->fields.tmpAppearanceId = -1;
        this->fields.appearanceId = tmpAppearanceId;
      }
    }
    v11 = (BalanceConfig_c *)sub_B2C374(int___TypeInfo, 3LL);
    if ( !v11 )
LABEL_22:
      sub_B2C434(v11, currentHp);
    namespaze = (unsigned int)v11->_1.namespaze;
    v18 = (System_Int32_array *)v11;
    if ( !namespaze
      || (LODWORD(v11->_1.byval_arg.data) = takeoverData->fields.skill1Ct, namespaze == 1)
      || (HIDWORD(v11->_1.byval_arg.data) = takeoverData->fields.skill2Ct, namespaze <= 2) )
    {
      v23 = sub_B2C460(v11);
      sub_B2C400(v23, 0LL);
    }
    v11->_1.byval_arg.bits = takeoverData->fields.skill3Ct;
    for ( i = 0; ; ++i )
    {
      v11 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v11 = BalanceConfig_TypeInfo;
      }
      if ( i >= v11->static_fields->SvtSkillListMax )
        break;
      SelfSkillInfo = BattleServantData__getSelfSkillInfo(this, i, v16);
      if ( SelfSkillInfo )
        SelfSkillInfo->fields.chargeTurn = BasicHelper__IndexValue_int_(
                                             v18,
                                             i,
                                             0,
                                             (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
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

  if ( (byte_4185BBB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TryGetValue__,
      key);
    byte_4185BBB = 1;
  }
  *saveDataArray = 0LL;
  sub_B2C2F8(
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
                                      (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TryGetValue__);
  return (char)partAnimationSaveDict;
}


bool __fastcall BattleServantData__TryGetPlayableVoiceInfoList(
        BattleServantData_o *this,
        System_Collections_Generic_List_KeyValuePair_string__int___o **voiceInfoList,
        Voice_BATTLE_array *types,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  VoicePlayCondMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_KeyValuePair_string__int___o *v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_KeyValuePair_string__int___o *IsPlayableVoice; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  __int64 v23; // x8
  unsigned __int64 v24; // x23
  __int64 v26; // x0
  System_Collections_Generic_KeyValuePair_string__int__o v27; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4185BBD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_VoicePlayCondMaster___, voiceInfoList);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_KeyValuePair_string__int___Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_KeyValuePair_string__int____ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_KeyValuePair_string__int___TypeInfo, v11);
    byte_4185BBD = 1;
  }
  v27.fields.key = 0LL;
  *(_QWORD *)&v27.fields.value = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v13 = (System_Collections_Generic_List_KeyValuePair_string__int___o *)sub_B2C42C(System_Collections_Generic_List_KeyValuePair_string__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_string__int_____ctor(
    v13,
    (const MethodInfo_2DE5828 *)Method_System_Collections_Generic_List_KeyValuePair_string__int____ctor__);
  *voiceInfoList = v13;
  sub_B2C2F8((BattleServantConfConponent_o *)voiceInfoList, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  if ( !types )
    goto LABEL_17;
  v23 = *(_QWORD *)&types->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = 0LL;
    do
    {
      if ( v24 >= (unsigned int)v23 )
      {
        v26 = sub_B2C460(IsPlayableVoice);
        sub_B2C400(v26, 0LL);
      }
      IsPlayableVoice = (System_Collections_Generic_List_KeyValuePair_string__int___o *)BattleServantData__IsPlayableVoice(
                                                                                          this,
                                                                                          Master_WarQuestSelectionMaster,
                                                                                          types->m_Items[v24 + 1],
                                                                                          &v27,
                                                                                          v22);
      if ( ((unsigned __int8)IsPlayableVoice & 1) != 0 )
      {
        IsPlayableVoice = *voiceInfoList;
        if ( !*voiceInfoList )
          goto LABEL_17;
        System_Collections_Generic_List_KeyValuePair_string__int____Add(
          IsPlayableVoice,
          v27,
          (const MethodInfo_2DE65B8 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___Add__);
      }
      LODWORD(v23) = types->max_length;
      ++v24;
    }
    while ( (__int64)v24 < (int)v23 );
  }
  if ( !*voiceInfoList )
LABEL_17:
    sub_B2C434(IsPlayableVoice, v21);
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
    sub_B2C434(this, actBuff);
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
  int32_t npcSvtClassId; // w19
  int32_t classId; // w20
  struct ServantEntity_o *svtdata; // x8
  int32_t klass_high; // w25
  _BOOL8 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  BattleServantConfConponent_c *klass; // x28
  unsigned __int64 v48; // x22
  __int64 v49; // x24
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *skillInfoList; // x25
  BattleServantData_o *v58; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v59; // x26
  System_Collections_ICollection_o *v60; // x24
  int v61; // w19
  const MethodInfo *v62; // x3
  System_Int32_array **classBoardAddPassiveSkills; // x1
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x0
  struct AddSkillData_array **p_classBoardAddCommandSpells; // [xsp+10h] [xbp-B0h]
  BattleServantConfConponent_o *p_classBoardAddPassiveSkills; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+28h] [xbp-98h] BYREF
  int v74[2]; // [xsp+40h] [xbp-80h]
  int v75; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+50h] [xbp-70h] BYREF
  int32_t skillIndex; // [xsp+6Ch] [xbp-54h] BYREF

  v11 = this;
  if ( (byte_4185BB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, afterUserSvtData);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__, v18);
    sub_B2C35C(&Method_System_Predicate_BattleSkillInfoData___ctor__, v19);
    sub_B2C35C(&System_Predicate_BattleSkillInfoData__TypeInfo, v20);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass720_0__UpdateClassBoardSkillBuff_b__0__, v21);
    this = (BattleServantData_o *)sub_B2C35C(&BattleServantData___c__DisplayClass720_0_TypeInfo, v22);
    byte_4185BB8 = 1;
  }
  skillIndex = 0;
  memset(&v76, 0, sizeof(v76));
  v75 = 0;
  if ( !afterUserSvtData )
    goto LABEL_46;
  classBoardSquareIds = (System_Int32_array **)afterUserSvtData->fields.classBoardSquareIds;
  v11->fields._classBoardSquareIds_k__BackingField = (struct System_Int32_array *)classBoardSquareIds;
  sub_B2C2F8(
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
    this = (BattleServantData_o *)BattleUserServantData__getBattleSvtId(afterUserSvtData, 0LL);
    if ( Master_WarQuestSelectionMaster )
    {
      this = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      Master_WarQuestSelectionMaster,
                                      (int32_t)this,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
      this = (BattleServantData_o *)BattleServantData__get_BuffData(v11, (const MethodInfo *)afterUserSvtData);
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
              &v73,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
            klass_high = -1;
            v76 = v73;
            p_classBoardAddCommandSpells = &v11->fields.classBoardAddCommandSpells;
            while ( 1 )
            {
              v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v76,
                      (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
              if ( !v44 )
                break;
              if ( !v76.fields.current )
              {
                skillIndex = klass_high;
                sub_B2C434(v44, v45);
              }
              if ( LODWORD(v76.fields.current[1].klass) == 10 && klass_high < SHIDWORD(v76.fields.current[1].klass) )
                klass_high = HIDWORD(v76.fields.current[1].klass);
            }
            skillIndex = klass_high;
            v74[0] = 203;
            v75 = 1;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v76,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
            v75 = 0;
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
              v60 = (System_Collections_ICollection_o *)BattleServantData__AddClassBoardSkillInfo(
                                                          v11,
                                                          afterUserSvtData,
                                                          &skillIndex,
                                                          v46);
              this = (BattleServantData_o *)BasicHelper__IsNullOrEmpty(v60, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !v60 )
                  goto LABEL_46;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  &v73,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v60,
                  (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
                v76 = v73;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v76,
                          (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
                {
                  if ( v76.fields.current )
                    BattleData__ActPassiveBuff(data, (BattleSkillInfoData_o *)v76.fields.current, 0, 0, 0LL);
                }
                v74[0] = 370;
                v61 = ++v75;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v76,
                  (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
                if ( v61 && v74[v61 - 1] == 370 )
                  v75 = v61 - 1;
              }
              this = (BattleServantData_o *)BattleServantData__get_BuffData(v11, (const MethodInfo *)afterUserSvtData);
              if ( this )
              {
                BattleBuffData__updateAuraBuffList((BattleBuffData_o *)this, 0LL);
                BattleServantData__updateBuff(v11, 1, 1, v62);
                classBoardAddPassiveSkills = (System_Int32_array **)afterUserSvtData->fields.classBoardAddPassiveSkills;
                v11->fields.classBoardAddPassiveSkills = (struct AddSkillData_array *)classBoardAddPassiveSkills;
                sub_B2C2F8(p_classBoardAddPassiveSkills, classBoardAddPassiveSkills, v64, v65, v66, v67, v68, v69);
                classBoardAddCommandSpells = (System_Int32_array **)afterUserSvtData->fields.classBoardAddCommandSpells;
                v38 = (BattleServantConfConponent_o *)p_classBoardAddCommandSpells;
                goto LABEL_44;
              }
            }
            else
            {
              v48 = 0LL;
              while ( 1 )
              {
                v49 = sub_B2C42C(BattleServantData___c__DisplayClass720_0_TypeInfo);
                BattleServantData___c__DisplayClass720_0___ctor((BattleServantData___c__DisplayClass720_0_o *)v49, 0LL);
                if ( v48 >= LODWORD(klass->_1.namespaze) )
                {
                  v70 = sub_B2C460(this);
                  sub_B2C400(v70, 0LL);
                }
                if ( !v49 )
                  break;
                v56 = (System_Int32_array **)*((_QWORD *)&klass->_1.byval_arg.data + v48);
                *(_QWORD *)(v49 + 16) = v56;
                sub_B2C2F8((BattleServantConfConponent_o *)(v49 + 16), v56, v50, v51, v52, v53, v54, v55);
                skillInfoList = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v11->fields.skillInfoList;
                v58 = v11;
                v59 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleSkillInfoData__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v59,
                  (Il2CppObject *)v49,
                  Method_BattleServantData___c__DisplayClass720_0__UpdateClassBoardSkillBuff_b__0__,
                  (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
                if ( !skillInfoList )
                  break;
                System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                  skillInfoList,
                  (System_Predicate_T__o *)v59,
                  (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
                ++v48;
                v11 = v58;
                if ( (__int64)v48 >= SLODWORD(klass->_1.namespaze) )
                  goto LABEL_33;
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_B2C434(this, afterUserSvtData);
  }
  v30 = (System_Int32_array **)afterUserSvtData->fields.classBoardAddPassiveSkills;
  v11->fields.classBoardAddPassiveSkills = (struct AddSkillData_array *)v30;
  sub_B2C2F8((BattleServantConfConponent_o *)&v11->fields.classBoardAddPassiveSkills, v30, v24, v25, v26, v27, v28, v29);
  classBoardAddCommandSpells = (System_Int32_array **)afterUserSvtData->fields.classBoardAddCommandSpells;
  v38 = (BattleServantConfConponent_o *)&v11->fields.classBoardAddCommandSpells;
LABEL_44:
  v11->fields.classBoardAddCommandSpells = (struct AddSkillData_array *)classBoardAddCommandSpells;
  sub_B2C2F8(v38, classBoardAddCommandSpells, v31, v32, v33, v34, v35, v36);
}


ServantAssetArgs_o *__fastcall BattleServantData__UpdateLoadedAssetArgs(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  ServantAssetArgs_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185AED & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetArgs_TypeInfo, method);
    byte_4185AED = 1;
  }
  v3 = (ServantAssetArgs_o *)sub_B2C42C(ServantAssetArgs_TypeInfo);
  ServantAssetArgs___ctor(v3, this, 0LL);
  this->fields._LoadedAssetArgs_k__BackingField = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._LoadedAssetArgs_k__BackingField,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B53 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_15067/*"UpdateStatusByTransform"*/, v7);
    byte_4185B53 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B2C434(v10, v11);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_15067/*"UpdateStatusByTransform"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v13; // x1
  struct TreasureDvcEntity_o *Entity; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
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
  int32_t v41; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4185B05 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, *(_QWORD *)&id);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4185B05 = 1;
  }
  this->fields.treasuredvcId = id;
  this->fields.treasuredvcLevel = lv;
  if ( id < 1 )
  {
    this->fields.TDvc = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.TDvc,
      0LL,
      *(System_String_array ***)&lv,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v41 = 0;
  }
  else
  {
    TdDataMasterBase = BattleServantData__get_TdDataMasterBase(this, *(const MethodInfo **)&id);
    if ( !TdDataMasterBase )
      goto LABEL_13;
    Entity = (struct TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)TdDataMasterBase,
                                             this->fields.treasuredvcId,
                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    this->fields.TDvc = Entity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.TDvc,
      (System_Int32_array **)Entity,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    TdDataMasterBase = BattleServantData__get_TdLvDataMasterBase(this, v21);
    if ( !TdDataMasterBase )
      goto LABEL_13;
    v22 = TreasureDvcLvMaster__GetEntity(
            (TreasureDvcLvMaster_o *)TdDataMasterBase,
            this->fields.treasuredvcId,
            this->fields.treasuredvcLevel,
            0LL);
    this->fields._TDvcLv = v22;
    sub_B2C2F8(
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
    *(_QWORD *)&v42.fields.currentCryptoKey = v30;
    *(_QWORD *)&v42.fields.fakeValue = v29;
    v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v42, 0LL);
    EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(v31, this->fields.treasuredvcId, 0LL);
    this->fields._SvtTDvc = EntityFromIDID;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._SvtTDvc,
      (System_Int32_array **)EntityFromIDID,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    BattleServantData__checkServantTreasureDvcEntity(this, v39);
    TdDataMasterBase = BattleServantData__get_TDvcLv(this, v40);
    if ( !TdDataMasterBase )
LABEL_13:
      sub_B2C434(TdDataMasterBase, v13);
    v41 = *((_DWORD *)TdDataMasterBase + 6);
  }
  this->fields.nplineCount = v41;
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
  __int64 v12; // x1
  int32_t v13; // w21
  const MethodInfo *v14; // x3

  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)buff);
  if ( !this->fields.buffData )
    sub_B2C434(MaxHp, v12);
  v13 = MaxHp;
  BattleBuffData__addBuff(this->fields.buffData, buff, fieldflg, unFix, 0LL);
  if ( changeMaxHpflg )
    BattleServantData__checkUpdateUpdownHp(this, v13, 1, v14);
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
  __int64 v14; // x1
  int v15; // w0
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B4F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&damage);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_17275/*"changeHp"*/, v11);
    byte_4185B4F = 1;
  }
  memset(&v20, 0, sizeof(v20));
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
    v15 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
            this,
            this->klass->vtable._10_set_hp.methodPtr);
    this->fields.accumulationDamage = (this->fields.accumulationDamage + v12 - v15) & ~((this->fields.accumulationDamage
                                                                                       + v12
                                                                                       - v15) >> 31);
  }
LABEL_6:
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B2C434(0LL, v14);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v18 )
    {
      if ( !current )
        sub_B2C434(v18, v19);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17275/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v13; // x1
  int lineMaxNp; // w8
  int32_t v15; // w10
  int32_t v16; // w9
  int v17; // w8
  bool v18; // cc
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B5A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&intp);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_22940/*"updateNp"*/, v11);
    byte_4185B5A = 1;
  }
  memset(&v24, 0, sizeof(v24));
  isUseTreasure = Follower__isUseTreasure(this->fields.followerType, 0LL);
  lineMaxNp = this->fields.lineMaxNp;
  if ( isUseTreasure )
    v15 = intp;
  else
    v15 = 0;
  v16 = v15 + this->fields.np;
  this->fields.np = v16;
  if ( v15 >= 1 && v16 < lineMaxNp && (double)lineMaxNp * 0.99 <= (double)v16 )
  {
    v16 = lineMaxNp;
    this->fields.np = lineMaxNp;
  }
  v17 = lineMaxNp * this->fields.nplineCount;
  v18 = v17 < v16;
  if ( v17 >= v16 )
    v17 = v16;
  if ( v18 || v17 <= 0 )
  {
    this->fields.np = v17 & ~(v17 >> 31);
    if ( !flg )
      return this->fields.np;
  }
  else if ( !flg )
  {
    return this->fields.np;
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B2C434(0LL, v13);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v21 )
    {
      if ( !current )
        sub_B2C434(v21, v22);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22940/*"updateNp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4185B3B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    byte_4185B3B = 1;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_7;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         paramobjelist,
         (WarBoardManager_TaskList_o *)obj,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    return;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
LABEL_7:
    sub_B2C434(paramobjelist, obj);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)paramobjelist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
  __int64 v23; // x1
  Il2CppObject *current; // x27
  int v25; // w27
  BattleSkillInfoData_o *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x27
  int v30; // w21
  BattleSkillInfoData_o *SkillData; // x0
  const MethodInfo *v32; // x3
  const MethodInfo *v34; // [xsp+0h] [xbp-C0h]
  int32_t v36; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-A0h] BYREF
  int v38[4]; // [xsp+38h] [xbp-88h] BYREF
  int v39; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_4185B06 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__, v20);
    byte_4185B06 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v39 = 0;
  skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_35;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    skillInfoList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v40 = v37;
  v36 = commandAssistId;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v22 )
      break;
    current = v40.fields.current;
    if ( !v40.fields.current )
      sub_B2C434(v22, v23);
    if ( LODWORD(v40.fields.current[1].klass) == type
      && HIDWORD(v40.fields.current[1].klass) == index
      && ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v40.fields.current->klass->vtable[5].method)(
           v40.fields.current,
           v40.fields.current->klass->vtable[6].methodPtr) == skillId
      && HIDWORD(current[2].klass) == skillLv )
    {
      v25 = 236;
      goto LABEL_13;
    }
  }
  v25 = 92;
LABEL_13:
  v38[0] = v25;
  v39 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  if ( v25 == 92 )
  {
    v39 = 0;
    skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
    if ( !skillInfoList )
      goto LABEL_35;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      skillInfoList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    v40 = v37;
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v40,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
      if ( !v27 )
        break;
      v29 = v40.fields.current;
      if ( !v40.fields.current )
        sub_B2C434(v27, v28);
      if ( LODWORD(v40.fields.current[1].klass) == type && HIDWORD(v40.fields.current[1].klass) == index )
        goto LABEL_23;
    }
    v29 = 0LL;
LABEL_23:
    *(_DWORD *)((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFFBLL) = 167;
    v30 = ++v39;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v40,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    if ( v30 && v38[v30 - 1] == 167 )
      v39 = v30 - 1;
    if ( v29 )
    {
      skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
      if ( !skillInfoList )
        goto LABEL_35;
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)skillInfoList,
        (WarBoardManager_TaskList_o *)v29,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__);
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
                                                                                                     v36,
                                                                                                     v34);
    if ( skillInfoList )
    {
      v26 = (BattleSkillInfoData_o *)skillInfoList;
      ((void (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, BattleServantData_o *, Il2CppMethodPointer))skillInfoList->klass->vtable._11_Add.method)(
        skillInfoList,
        this,
        skillInfoList->klass->vtable._12_unknown.methodPtr);
      BattleServantData__ChangeSkillRemainingTurn(this, v26, beforeDeathSkillInfo, v32);
      skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
      if ( skillInfoList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
        return v26;
      }
    }
LABEL_35:
    sub_B2C434(skillInfoList, *(_QWORD *)&type);
  }
  v26 = 0LL;
  v39 = 0;
  return v26;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__canUseSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  System_Boolean_array *SkillSealSelect; // x0
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21
  __int64 v10; // x0

  if ( (byte_4185B8C & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&index);
    byte_4185B8C = 1;
  }
  if ( index != -1 )
  {
    SkillSealSelect = BattleServantData__getSkillSealSelect(this, *(const MethodInfo **)&index);
    if ( !SkillSealSelect )
      goto LABEL_12;
    if ( SkillSealSelect->max_length <= index )
    {
      v10 = sub_B2C460(SkillSealSelect);
      sub_B2C400(v10, 0LL);
    }
    if ( SkillSealSelect->m_Items[index + 4] )
      return 0;
  }
  if ( !BattleServantData__isAction(this, *(const MethodInfo **)&index) )
    return 0;
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_12:
    sub_B2C434(SkillSealSelect, *(_QWORD *)&index);
  return !BattleBuffData__isTurnBuff(buffData, 40, v7, 0, 0LL);
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
  __int64 v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  struct ServantEntity_o *Entity; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  ServantLimitMaster_o *v21; // x20
  const MethodInfo *v22; // x1
  int32_t SvtId; // w22
  struct ServantLimitEntity_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ServantEntity_o *svtdata; // x8
  ServantLimitAddMaster_o *v32; // x21
  __int64 v33; // x22
  __int64 v34; // x23
  int32_t v35; // w23
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1
  int32_t v38; // w23
  const MethodInfo *v39; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x3
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v45; // w1
  ServantLimitMaster_o *v46; // x0
  struct ServantLimitEntity_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4185B03 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4185B03 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v12 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v12;
  *(_QWORD *)&v54.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
  if ( !v13 )
    goto LABEL_25;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v13,
                                       (int32_t)Instance,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtdata,
    (System_Int32_array **)Entity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  v21 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v22);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                this->fields.limitcount,
                                0LL);
  if ( !v21 )
    goto LABEL_25;
  if ( !ServantLimitMaster__TryGetEntity(v21, &this->fields.svtlimitent, SvtId, (int32_t)Instance, 0LL) )
  {
    v24 = ServantLimitMaster__GetEntity(v21, 100100, 0, 0LL);
    this->fields.svtlimitent = v24;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.svtlimitent,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_25;
  v32 = (ServantLimitAddMaster_o *)Instance;
  v34 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v33 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v34;
  *(_QWORD *)&v55.fields.fakeValue = v33;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v55, 0LL);
  Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v36);
  if ( !v32 )
    goto LABEL_25;
  ServantLimitAddMaster__TryGetEntity(v32, &this->fields.svtlimitaddent, v35, (int32_t)Instance, 0LL);
  v38 = BattleServantData__getSvtId(this, v37);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v39);
  if ( !ServantLimitMaster__TryGetEntity(v21, &this->fields.svtlimitDispent, v38, DispLimitCount, 0LL) )
  {
    if ( !this->fields.svtlimitaddent )
    {
      v45 = 100100;
      v46 = v21;
      battleCharaLimitCount = 0;
      goto LABEL_23;
    }
    Instance = (DataManager_o *)BattleServantData__getSvtId(this, v41);
    svtlimitaddent = this->fields.svtlimitaddent;
    if ( svtlimitaddent )
    {
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v45 = (int)Instance;
      v46 = v21;
LABEL_23:
      v47 = ServantLimitMaster__GetEntity(v46, v45, battleCharaLimitCount, 0LL);
      this->fields.svtlimitDispent = v47;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.svtlimitDispent,
        (System_Int32_array **)v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      goto LABEL_24;
    }
LABEL_25:
    sub_B2C434(Instance, v9);
  }
LABEL_24:
  BattleServantData__UpdateTreasureDevice(this, this->fields.treasuredvcId, this->fields.treasuredvcLevel, v42);
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
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B5B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&intp);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_17280/*"changeNp"*/, v11);
    byte_4185B5B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v12 = this->fields.lineMaxNp * this->fields.nplineCount;
  if ( v12 >= intp )
    v12 = intp;
  this->fields.np = v12 & ~(v12 >> 31);
  if ( flg )
  {
    paramobjelist = this->fields.paramobjelist;
    if ( !paramobjelist )
      sub_B2C434(0LL, *(_QWORD *)&intp);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v17.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v15 )
      {
        if ( !current )
          sub_B2C434(v15, v16);
        UnityEngine_GameObject__SendMessage_40659236(
          (UnityEngine_GameObject_o *)current,
          (System_String_o *)StringLiteral_17280/*"changeNp"*/,
          (Il2CppObject *)this,
          1,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall BattleServantData__changeTransformServant(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t transformSvtId; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v4; // kr00_16

  if ( (byte_4185B02 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185B02 = 1;
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

  if ( (byte_4185B52 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17281/*"changeUpdateStatus"*/, method);
    byte_4185B52 = 1;
  }
  BattleServantData__sendParamMessage(this, (System_String_o *)StringLiteral_17281/*"changeUpdateStatus"*/, v2);
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
  __int64 v8; // x1

  if ( (byte_4185B79 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_4185B79 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__checkActBuff_30959496(buffData, 47, v6, 0LL);
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
  __int64 v8; // x1

  buffData = this->fields.buffData;
  v7 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         method);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__checkActBuff_30959496(buffData, 18, v7, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B83 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B83 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__checkActBuff_30959496(buffData, 17, v8, 0LL);
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
  System_Int32_array *Individualities_21310616; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Int32_array *v14; // x21

  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, v4);
  Individualities_21310616 = BattleServantData__getIndividualities_21310616(this, BuffIndividualities, v10);
  v14 = Individualities_21310616;
  if ( !opSvt )
  {
    if ( buffData )
      return BattleBuffData__checkActBuff(buffData, 38, v14, buffIndiv, 0LL);
LABEL_6:
    sub_B2C434(Individualities_21310616, v12);
  }
  Individualities_21310616 = BattleServantData__getIndividualities_21310616(opSvt, buffIndiv, v13);
  if ( !buffData )
    goto LABEL_6;
  buffIndiv = Individualities_21310616;
  return BattleBuffData__checkActBuff(buffData, 38, v14, buffIndiv, 0LL);
}


bool __fastcall BattleServantData__checkBuffId(
        BattleServantData_o *this,
        System_Int32_array *buffIdlist,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B2C434(0LL, buffIdlist);
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
    sub_B2C434(0LL, indv);
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
    sub_B2C434(0LL, entryIndex);
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
  __int64 v10; // x1
  int32_t v11; // w23
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x21
  __int64 v16; // x0
  BattleBuffData_BuffData_array *offList; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_array *onList; // [xsp+18h] [xbp-28h] BYREF

  offList = 0LL;
  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)fieldList);
  if ( !this->fields.buffData )
    goto LABEL_12;
  v11 = MaxHp;
  BattleBuffData__checkFieldBuff(this->fields.buffData, fieldList, aliveSvtData, &onList, &offList, logic, 0LL);
  MaxHp = BattleServantData__checkUpdateUpdownHp(this, v11, 1, v12);
  if ( (MaxHp & 1) == 0 )
    return;
  if ( !fieldList )
LABEL_12:
    sub_B2C434(MaxHp, v10);
  v14 = *(_QWORD *)&fieldList->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
      {
        v16 = sub_B2C460(MaxHp);
        sub_B2C400(v16, 0LL);
      }
      if ( this->fields.uniqueId == fieldList->m_Items[v15 + 1] )
        MaxHp = BattleServantData__healHp(this, 0, 0, v13);
      LODWORD(v14) = fieldList->max_length;
      ++v15;
    }
    while ( (__int64)v15 < (int)v14 );
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
  __int64 v8; // x1

  buffData = this->fields.buffData;
  v7 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         method);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__checkActBuff_30959496(buffData, 16, v7, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B84 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B84 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__checkActBuff_30959496(buffData, 69, v8, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B82 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B82 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__checkActBuff_30959496(buffData, 15, v8, 0LL);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t ActValue_30954484; // w0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  int CorrectedValueFuncGainNp; // w20

  if ( (byte_4185B91 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B91 = 1;
  }
  if ( this->fields.isEnemy )
    return 0;
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v6, v7);
  ActValue_30954484 = BattleBuffData__getActValue_30954484(buffData, 50, v5, 0LL);
  CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(this, ActValue_30954484, v9);
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
  __int64 v6; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  ServantTreasureDvcMaster_o *v10; // x20
  BattleServantConfConponent_o *p_SvtTDvc; // x19
  System_Int32_array **EntityFromSvtIdOnly; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4185BB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185BB4 = 1;
  }
  if ( !this->fields._SvtTDvc )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    v9 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v8 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v10 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v19.fields.currentCryptoKey = v9;
    *(_QWORD *)&v19.fields.fakeValue = v8;
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
    if ( !v10 )
LABEL_10:
      sub_B2C434(Instance, v6);
    p_SvtTDvc = (BattleServantConfConponent_o *)&this->fields._SvtTDvc;
    EntityFromSvtIdOnly = (System_Int32_array **)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                   v10,
                                                   (int32_t)Instance,
                                                   0,
                                                   0LL);
    p_SvtTDvc->klass = (BattleServantConfConponent_c *)EntityFromSvtIdOnly;
    sub_B2C2F8(p_SvtTDvc, EntityFromSvtIdOnly, v13, v14, v15, v16, v17, v18);
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
  __int64 v10; // x1
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
    sub_B2C434(v9, v10);
  if ( !BattleBuffData__checkActBuff_30959496(buffData, 95, v9, 0LL) )
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
  __int64 v4; // x1
  int v5; // w20
  int32_t ResumptionHpFromLossMaxHp; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w0
  int32_t v10; // w20
  int v11; // w0
  int v12; // w0

  if ( (byte_4185B93 & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, method);
    byte_4185B93 = 1;
  }
  MaxHp = (BattleBuffData_o *)BattleServantData__getMaxHp(this, method);
  if ( !this->fields.buffData )
    goto LABEL_11;
  v5 = (int)MaxHp;
  if ( BattleBuffData__getResumptionHpFromLossMaxHp(this->fields.buffData, 0, 0LL) < 1 )
    return 0;
  MaxHp = this->fields.buffData;
  if ( !MaxHp )
LABEL_11:
    sub_B2C434(MaxHp, v4);
  ResumptionHpFromLossMaxHp = BattleBuffData__getResumptionHpFromLossMaxHp(MaxHp, 1, 0LL);
  v7 = this->fields.maxhp;
  v8 = ResumptionHpFromLossMaxHp;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = System_Math__Max_45012344(0, v5 - v7, 0LL);
  v10 = System_Math__Min_44967328(v9, v8, 0LL);
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
  bool isNobleAction_21300684; // w8
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)battleData);
  if ( TreasureDevice )
  {
    if ( !flg )
      goto LABEL_13;
    if ( !TreasureDeviceConditionUtil__IsSatisfyEachCondition(this, battleData, 0LL) )
      goto LABEL_9;
    invokeAct = 0;
    isNobleAction_21300684 = BattleServantData__isNobleAction_21300684(this, &invokeAct, v8);
    LOBYTE(TreasureDevice) = 0;
    if ( isNobleAction_21300684 )
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

  if ( (byte_4185BAD & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B2C35C(&double___TypeInfo, param);
    byte_4185BAD = 1;
  }
  if ( !param || (this = (BattleServantData_o *)sub_B2C374(double___TypeInfo, param->max_length)) == 0LL )
    sub_B2C434(this, param);
  uniqueId = (unsigned int)this->fields.uniqueId;
  if ( (__int64)(uniqueId << 32) >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= param->max_length || v5 >= uniqueId )
      {
        v6 = sub_B2C460(this);
        sub_B2C400(v6, 0LL);
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

  if ( (byte_4185BAC & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B2C35C(&long___TypeInfo, param);
    byte_4185BAC = 1;
  }
  if ( !param || (this = (BattleServantData_o *)sub_B2C374(long___TypeInfo, param->max_length)) == 0LL )
    sub_B2C434(this, param);
  uniqueId = (unsigned int)this->fields.uniqueId;
  if ( (__int64)(uniqueId << 32) >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= param->max_length || v5 >= uniqueId )
      {
        v6 = sub_B2C460(this);
        sub_B2C400(v6, 0LL);
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

  if ( (byte_4185B3D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Contains__, obj);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Remove__, v5);
    byte_4185B3D = 1;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_8;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         paramobjelist,
         (WarBoardManager_TaskList_o *)obj,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
    if ( paramobjelist )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        paramobjelist,
        (WarBoardManager_TaskList_o *)obj,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_GameObject__Remove__);
      return;
    }
LABEL_8:
    sub_B2C434(paramobjelist, obj);
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
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B54 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_18752/*"fixUpdateStatus"*/, v7);
    byte_4185B54 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B2C434(v10, v11);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_18752/*"fixUpdateStatus"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__forceDead(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_c *klass; // x8
  int32_t v4; // w0
  const MethodInfo *v5; // x5
  __int64 v6; // x0
  __int64 v7; // x1
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
    sub_B2C434(v6, v7);
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
    sub_B2C434(0LL, ids);
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
    sub_B2C434(0LL, indv);
  return BattleBuffData__getActiveIndividualitiesNum(buffData, indv, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleServantData__getActiveSkillInfos(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  void *All; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__389_0; // x20
  Il2CppObject *v12; // x21
  struct BattleServantData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4185B23 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, v3);
    sub_B2C35C(&Method_System_Predicate_BattleSkillInfoData___ctor__, v4);
    sub_B2C35C(&System_Predicate_BattleSkillInfoData__TypeInfo, v5);
    sub_B2C35C(&Method_BattleServantData___c__getActiveSkillInfos_b__389_0__, v6);
    sub_B2C35C(&BattleServantData___c_TypeInfo, v7);
    byte_4185B23 = 1;
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
    v12 = (Il2CppObject *)static_fields->__9;
    _9__389_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__389_0,
      v12,
      Method_BattleServantData___c__getActiveSkillInfos_b__389_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    v13 = BattleServantData___c_TypeInfo->static_fields;
    v13->__9__389_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__389_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__389_0,
      (System_Int32_array **)_9__389_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)skillInfoList,
                (System_Predicate_T__o *)_9__389_0,
                (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_B2C434(All, method);
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
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
  if ( (byte_4185B10 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185B10 = 1;
  }
  svtdata = v2->fields.svtdata;
  if ( !svtdata )
    sub_B2C434(this, method);
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v7, 0LL);
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
  System_Converter_long__int__o *_9__659_0; // x22
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

  if ( (byte_4185BAB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_ConvertAll_long__int___, bData);
    sub_B2C35C(&Method_System_Converter_long__int___ctor__, v15);
    sub_B2C35C(&System_Converter_long__int__TypeInfo, v16);
    sub_B2C35C(&double___TypeInfo, v17);
    sub_B2C35C(&Method_BattleServantData___c__getAiParam_b__659_0__, v18);
    sub_B2C35C(&BattleServantData___c_TypeInfo, v19);
    byte_4185BAB = 1;
  }
  targetIndex = 0;
  FieldSpace = sub_B2C374(double___TypeInfo, 1LL);
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
      FieldSpace = sub_B2C374(double___TypeInfo, 2LL);
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
      FieldSpace = sub_B2C374(double___TypeInfo, 1LL);
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
      FieldSpace = sub_B2C374(double___TypeInfo, 1LL);
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
      _9__659_0 = static_fields->__9__659_0;
      if ( !_9__659_0 )
      {
        if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v36);
          static_fields = BattleServantData___c_TypeInfo->static_fields;
        }
        v39 = (Il2CppObject *)static_fields->__9;
        _9__659_0 = (System_Converter_long__int__o *)sub_B2C42C(System_Converter_long__int__TypeInfo);
        System_Converter_long__int____ctor(
          _9__659_0,
          v39,
          Method_BattleServantData___c__getAiParam_b__659_0__,
          (const MethodInfo_24DFF70 *)Method_System_Converter_long__int___ctor__);
        v40 = BattleServantData___c_TypeInfo->static_fields;
        v40->__9__659_0 = _9__659_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v40->__9__659_0,
          (System_Int32_array **)_9__659_0,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      }
      FieldSpace = (__int64)System_Array__ConvertAll_long__int_(
                              checkParams,
                              (System_Converter_TInput__TOutput__o *)_9__659_0,
                              (const MethodInfo_1FFB0B4 *)Method_System_Array_ConvertAll_long__int___);
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
        sub_B2C434(FieldSpace, v21);
      if ( !v24->max_length )
      {
LABEL_105:
        v62 = sub_B2C460(FieldSpace);
        sub_B2C400(v62, 0LL);
      }
      v24->m_Items[0] = v55;
      break;
    default:
LABEL_41:
      v52 = (System_Double_array *)sub_B2C374(double___TypeInfo, 0LL);
LABEL_48:
      v24 = v52;
      break;
  }
  return v24;
}


AiState_o *__fastcall BattleServantData__getAiState(BattleServantData_o *this, const MethodInfo *method)
{
  AiStateManager_o *AiStateManager; // x0
  __int64 v4; // x1
  AiState_o *result; // x0

  AiStateManager = BattleServantData__get_AiStateManager(this, method);
  if ( !AiStateManager )
    sub_B2C434(0LL, v4);
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

  if ( (byte_4185BAE & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185BAE = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
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
    sub_B2C434(TDvcLv, v8);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4185B44 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B44 = 1;
  }
  *multiatk = 1;
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v11, v12);
  if ( !BattleBuffData__getActBuff(buffData, 66, v10, multiatk, 0LL) )
    *multiatk = 1;
  return BattleServantData__getAttackRaitoBase(this, command, v13);
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
  if ( (byte_4185B45 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, command);
    sub_B2C35C(&int_TypeInfo, v5);
    this = (BattleServantData_o *)sub_B2C35C(&ServantCardEntity_TypeInfo, v6);
    byte_4185B45 = 1;
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
    this = (BattleServantData_o *)sub_B2C374(int___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_26;
    if ( this->fields.uniqueId )
    {
      LODWORD(this->fields.userSvtId.fields.currentCryptoKey) = 100;
      return (System_Int32_array *)this;
    }
LABEL_28:
    v13 = sub_B2C460(this);
    sub_B2C400(v13, 0LL);
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
      this = (BattleServantData_o *)sub_B2C728(v9);
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
      sub_B2C434(this, command);
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
  BattleBuffData_CheckIndividualitiesData_o *v15; // x25
  BattleBuffData_BuffData_array *BuffList_30942396; // x0
  __int64 v17; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v19; // x20
  unsigned int v20; // w22
  Il2CppClass **v21; // x8
  Il2CppClass *v22; // x21
  __int64 v24; // x0

  if ( (byte_4185B37 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&attackAct);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    byte_4185B37 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffData = this->fields.buffData;
  v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v15, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_22;
  BuffList_30942396 = BattleBuffData__getBuffList_30942396(buffData, attackAct, v15, 1, 0, 0LL, 0LL);
  if ( !BuffList_30942396 )
    goto LABEL_22;
  max_length = BuffList_30942396->max_length;
  v19 = BuffList_30942396;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        v24 = sub_B2C460(BuffList_30942396);
        sub_B2C400(v24, 0LL);
      }
      v21 = &v19->obj.klass + (int)v20;
      v22 = v21[4];
      if ( !v22 )
        break;
      if ( !BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)v21[4], 0LL)
        && !BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)v22, 0LL)
        && (BuffList_30942396 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCardBuff(
                                                                   (BattleBuffData_BuffData_o *)v22,
                                                                   0LL),
            ((unsigned __int8)BuffList_30942396 & 1) == 0)
        || (BuffList_30942396 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isActiveCommandCode(
                                                                   (BattleBuffData_BuffData_o *)v22,
                                                                   0LL),
            ((unsigned __int8)BuffList_30942396 & 1) != 0)
        || (BuffList_30942396 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCardBuff(
                                                                   (BattleBuffData_BuffData_o *)v22,
                                                                   0LL),
            ((unsigned __int8)BuffList_30942396 & 1) != 0)
        && LOBYTE(v22->_1.generic_class)
        || (BuffList_30942396 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                                   (BattleBuffData_BuffData_o *)v22,
                                                                   0LL),
            ((unsigned __int8)BuffList_30942396 & 1) != 0)
        && BYTE1(v22->vtable[4].methodPtr) )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      max_length = v19->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_B2C434(BuffList_30942396, v17);
  }
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getAttackSideEffectBuffList_21293456(
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
  const MethodInfo *v20; // x4
  __int64 v21; // x8
  unsigned __int64 v22; // x24
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__428_0; // x20
  Il2CppObject *v25; // x21
  struct BattleServantData___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v34; // x0

  if ( (byte_4185B39 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_BattleBuffData_BuffData___ctor__, attackActs);
    sub_B2C35C(&System_Comparison_BattleBuffData_BuffData__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    sub_B2C35C(&Method_BattleServantData___c__getAttackSideEffectBuffList_b__428_0__, v15);
    sub_B2C35C(&BattleServantData___c_TypeInfo, v16);
    byte_4185B39 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !attackActs )
    goto LABEL_20;
  v21 = *(_QWORD *)&attackActs->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
      {
        v34 = sub_B2C460(AttackSideEffectBuffList);
        sub_B2C400(v34, 0LL);
      }
      AttackSideEffectBuffList = BattleServantData__getAttackSideEffectBuffList(
                                   this,
                                   attackActs->m_Items[v22 + 1],
                                   command,
                                   opSvt,
                                   v20);
      if ( !v17 )
        break;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
        (System_Collections_Generic_IEnumerable_T__o *)AttackSideEffectBuffList,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      LODWORD(v21) = attackActs->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_9;
    }
LABEL_20:
    sub_B2C434(AttackSideEffectBuffList, v19);
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
  _9__428_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__428_0;
  if ( !_9__428_0 )
  {
    if ( (*((_BYTE *)AttackSideEffectBuffList + 307) & 4) != 0 && !*((_DWORD *)AttackSideEffectBuffList + 56) )
    {
      j_il2cpp_runtime_class_init_0(AttackSideEffectBuffList);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__428_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__428_0,
      v25,
      Method_BattleServantData___c__getAttackSideEffectBuffList_b__428_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v26 = BattleServantData___c_TypeInfo->static_fields;
    v26->__9__428_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__428_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v26->__9__428_0,
      (System_Int32_array **)_9__428_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v17 )
    goto LABEL_20;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v17,
    (System_Comparison_T__o *)_9__428_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  if ( (byte_4185B43 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, command);
    this = (BattleServantData_o *)sub_B2C35C(&ServantCardEntity_TypeInfo, v5);
    byte_4185B43 = 1;
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
    sub_B2C434(this, command);
  }
  v8 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[v8 - 1] == ServantCardEntity_TypeInfo )
  {
    return this->fields.svtId.fields.fakeValue;
  }
  v10 = (BattleServantData_o *)sub_B2C728(this);
  return (unsigned int)BattleServantData__getAttackRaito(v10, v11, v12, v13, v14);
}


int32_t __fastcall BattleServantData__getAttri(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0
  struct ServantEntity_o *svtdata; // x8

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt
    || (deckSvt = (BattleDeckServantData_o *)BattleDeckServantData__getChangeAttri(deckSvt, 0LL), !(_DWORD)deckSvt) )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_B2C434(deckSvt, method);
    LODWORD(deckSvt) = svtdata->fields.attri;
  }
  return (int)deckSvt;
}


System_Int32_array *__fastcall BattleServantData__getAuraIdList(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *AuraBuffList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v8; // x20
  System_Int32_array *v9; // x19
  int32_t v10; // w21
  BattleBuffData_BuffData_o *v11; // x8
  char *v12; // x9
  __int64 v14; // x0

  if ( (byte_4185BA8 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v4);
    byte_4185BA8 = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return this->fields.wkzero;
  AuraBuffList = BattleBuffData__getAuraBuffList(buffData, 0LL);
  if ( !AuraBuffList )
    goto LABEL_16;
  v8 = AuraBuffList;
  AuraBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B2C374(
                                                                                 int___TypeInfo,
                                                                                 (unsigned int)AuraBuffList->fields._size);
  if ( !AuraBuffList )
    goto LABEL_16;
  v9 = (System_Int32_array *)AuraBuffList;
  if ( AuraBuffList->fields._size >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v8->fields._size <= (unsigned int)v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v11 = v8->fields._items->m_Items[v10];
      if ( !v11 )
        break;
      if ( (unsigned int)v10 >= AuraBuffList->fields._size )
      {
        v14 = sub_B2C460(AuraBuffList);
        sub_B2C400(v14, 0LL);
      }
      v12 = (char *)AuraBuffList + 4 * v10++;
      *((_DWORD *)v12 + 8) = v11->fields.auraEffectId;
      if ( v10 >= AuraBuffList->fields._size )
        return v9;
    }
LABEL_16:
    sub_B2C434(AuraBuffList, v7);
  }
  return v9;
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
    sub_B2C434(this, method);
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
  __int64 v12; // x1
  BattleBuffData_o *buffData; // x0
  struct ServantEntity_o *svtdata; // x8
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  v9 = command;
  if ( (byte_4185B12 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B12 = 1;
  }
  value = 0;
  if ( !isAttack )
    v9 = 0LL;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
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
    sub_B2C434(buffData, v12);
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
  if ( (byte_4185AFF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&OptionManager_TypeInfo, v8);
    this = (BattleServantData_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4185AFF = 1;
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
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        svtId,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_B2C434(this, *(_QWORD *)&svtId);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B80 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B80 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return (float)BattleBuffData__getActValue_30954484(buffData, 13, v8, 0LL);
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
  System_Int32_array *Individualities_21310616; // x24
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v18; // x2
  System_Int32_array *v19; // x0
  System_Int32_array *v20; // x25
  BattleBuffData_CheckIndividualitiesData_o *v21; // x26
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_4185B85 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffIndiv);
    sub_B2C35C(&int___TypeInfo, v11);
    byte_4185B85 = 1;
  }
  v12 = !upOnly;
  buffData = this->fields.buffData;
  if ( v12 )
    v14 = 36;
  else
    v14 = 106;
  Individualities_21310616 = BattleServantData__getIndividualities_21310616(this, buffIndiv, (const MethodInfo *)opSvt);
  if ( opSvt )
  {
    BuffIndividualities = BattleServantData__getBuffIndividualities(opSvt, 1, 0, 0, v15);
    v19 = BattleServantData__getIndividualities_21310616(opSvt, BuffIndividualities, v18);
  }
  else
  {
    v19 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
  v20 = v19;
  v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v21, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v22, v23);
  return BattleBuffData__getActMag_30955328(
           buffData,
           v14,
           Individualities_21310616,
           v20,
           missText,
           v21,
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
  __int64 v9; // x1

  if ( (byte_4185B87 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, indiv);
    byte_4185B87 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v8, v9);
  return BattleBuffData__getActMag_30955592(buffData, 61, v7, 0LL);
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
    sub_B2C434(0LL, isActiveOnly);
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
  __int64 v8; // x1

  if ( (byte_4185B29 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&buffAction);
    byte_4185B29 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__getBuffList_30942396(buffData, buffAction, v6, 1, 0, 0LL, 0LL);
}


float __fastcall BattleServantData__getBuffNonResistInstantDeath(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185B77 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_4185B77 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__getActMag_30955592(buffData, 49, v6, 0LL);
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
  __int64 v12; // x1

  if ( (byte_4185B8B & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B8B = 1;
  }
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v11, v12);
  return BattleBuffData__getBuffList_30942396(buffData, 87, v10, isAct, 0, 0LL, 0LL);
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
      return BattleUtility__FloorToInt_24686680(
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
  __int64 v8; // x1

  if ( (byte_4185B78 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_4185B78 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__getActMag_30955592(buffData, 68, v6, 0LL);
}


float __fastcall BattleServantData__getBuffResistInstantDeath(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185B76 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_4185B76 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__getActMag_30955592(buffData, 48, v6, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B81 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B81 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return (float)BattleBuffData__getActValue_30954484(buffData, 14, v8, 0LL);
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
    return BattleUtility__FloorToInt_24686680(v9 * v10, 0LL);
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
    return BattleUtility__FloorToInt_24686680(v9 * v10, 0LL);
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
  const MethodInfo *v12; // x2
  System_Int32_array *Individualities_21310616; // x24
  BattleBuffData_CheckIndividualitiesData_o *v14; // x25
  __int64 v15; // x0
  __int64 v16; // x1

  v7 = buffIndiv;
  if ( (byte_4185B86 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffIndiv);
    byte_4185B86 = 1;
  }
  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, method);
  Individualities_21310616 = BattleServantData__getIndividualities_21310616(this, BuffIndividualities, v11);
  if ( opSvt )
    v7 = BattleServantData__getIndividualities_21310616(opSvt, v7, v12);
  v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v14, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v15, v16);
  return BattleBuffData__getActMag_30955328(buffData, 37, Individualities_21310616, v7, missText, v14, 0LL, 0LL);
}


float __fastcall BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
        BattleServantData_o *this,
        System_Int32_array *indiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_21310616; // x21
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  Individualities_21310616 = indiv;
  if ( (byte_4185B88 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, indiv);
    byte_4185B88 = 1;
  }
  buffData = this->fields.buffData;
  if ( opSvt )
    Individualities_21310616 = BattleServantData__getIndividualities_21310616(
                                 opSvt,
                                 Individualities_21310616,
                                 (const MethodInfo *)opSvt);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_23203976(v8, this, opSvt, 0LL, Individualities_21310616, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getActMag_30955592(buffData, 62, v8, 0LL);
}


int32_t __fastcall BattleServantData__getCameraActionId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B2C434(0LL, method);
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
      sub_B2C434(npcSvtClassId, method);
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
      sub_B2C434(npcSvtClassId, method);
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
  __int64 v11; // x1
  struct ServantEntity_o *svtdata; // x8
  struct System_Int32_array *cardIds; // x22
  __int64 v14; // x8
  unsigned __int64 v15; // x23
  struct ServantEntity_o *v17; // x8
  __int64 v18; // x0

  if ( (byte_4185B0D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&commandTypeBit);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4185B0D = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_18;
  cardIds = svtdata->fields.cardIds;
  if ( !cardIds )
    goto LABEL_18;
  v14 = *(_QWORD *)&cardIds->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
      {
        v18 = sub_B2C460(v10);
        sub_B2C400(v18, 0LL);
      }
      v11 = (unsigned int)cardIds->m_Items[v15 + 1];
      if ( ((1 << (v11 - 1)) & commandTypeBit) != 0 )
      {
        if ( !v9 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v9,
          v11,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v14) = cardIds->max_length;
      ++v15;
    }
    while ( (__int64)v15 < (int)v14 );
  }
  if ( !v9 )
    goto LABEL_18;
  if ( v9->fields._size > 0 )
    return System_Collections_Generic_List_int___ToArray(
             v9,
             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v17 = this->fields.svtdata;
  if ( !v17 )
LABEL_18:
    sub_B2C434(v10, v11);
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
  float Magnification; // s0
  float v15; // s8
  BattleBuffData_CheckIndividualitiesData_o *v16; // x23
  BattleBuffData_CheckIndividualitiesData_o *v17; // x22
  float ActMag_30955592; // s0
  float v19; // s9
  float v20; // s0

  v6 = this;
  if ( (byte_4185B61 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    sub_B2C35C(&StringLiteral_5503/*"ENEMY_ATTACK_RATE_ARTS"*/, v7);
    sub_B2C35C(&StringLiteral_5504/*"ENEMY_ATTACK_RATE_BUSTER"*/, v8);
    this = (BattleServantData_o *)sub_B2C35C(&StringLiteral_5505/*"ENEMY_ATTACK_RATE_QUICK"*/, v9);
    byte_4185B61 = 1;
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
      v11 = &StringLiteral_5505/*"ENEMY_ATTACK_RATE_QUICK"*/;
      goto LABEL_11;
    }
    v13 = BattleCommandData__getCommandType(command, 0LL);
    if ( BattleCommand__isBUSTER(v13, 0LL) )
    {
      v11 = &StringLiteral_5504/*"ENEMY_ATTACK_RATE_BUSTER"*/;
      goto LABEL_11;
    }
LABEL_12:
    Magnification = BattleCommand__getMagnification(command, 0LL);
    goto LABEL_13;
  }
  v11 = &StringLiteral_5503/*"ENEMY_ATTACK_RATE_ARTS"*/;
LABEL_11:
  Magnification = ConstantMaster__getRateValue((System_String_o *)*v11, 0LL);
LABEL_13:
  v15 = Magnification;
  v16 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v16, v6, targetSvt, command, 0LL, 0LL, 0LL);
  v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v17, targetSvt, v6, 0LL, command, 0LL, 0LL);
  this = (BattleServantData_o *)v6->fields.buffData;
  if ( !this
    || (ActMag_30955592 = BattleBuffData__getActMag_30955592((BattleBuffData_o *)this, 1, v16, 0LL), !targetSvt)
    || (this = (BattleServantData_o *)targetSvt->fields.buffData) == 0LL
    || (v19 = ActMag_30955592, v20 = BattleBuffData__getActMag_30955592((BattleBuffData_o *)this, 2, v17, 0LL), !command) )
  {
LABEL_18:
    sub_B2C434(this, command);
  }
  return (float)(v15 * fmaxf((float)(v19 + 1.0) - v20, 0.0)) + (float)((float)command->fields.addAtk / 1000.0);
}


float __fastcall BattleServantData__getCommandCardNP(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  float NpMagnification; // s8
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  BattleBuffData_CheckIndividualitiesData_o *v9; // x22
  __int64 v10; // x1
  BattleBuffData_o *buffData; // x0
  float ActMag_30955592; // s0
  float v13; // s9
  float v14; // s0

  if ( (byte_4185B62 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B62 = 1;
  }
  NpMagnification = BattleCommand__getNpMagnification(command, 0LL);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, opSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_30955592 = BattleBuffData__getActMag_30955592(buffData, 22, v8, 0LL), !opSvt)
    || (buffData = opSvt->fields.buffData) == 0LL
    || (v13 = ActMag_30955592, v14 = BattleBuffData__getActMag_30955592(buffData, 23, v9, 0LL), !command) )
  {
    sub_B2C434(buffData, v10);
  }
  return (float)(NpMagnification * fmaxf((float)(v13 + 1.0) - v14, 0.0))
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
  __int64 v14; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  ServantLimitAddMaster_o *v18; // x22
  int32_t v19; // w0
  __int64 v20; // x8
  int32_t v21; // w19
  int32_t battleCharaLimitCount; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // kr00_16
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4185B17 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185B17 = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v25, 0LL) )
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v8;
      *(_QWORD *)&v26.fields.fakeValue = v7;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v26, 0LL) >= 11 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v30.fields.currentCryptoKey = v8;
        *(_QWORD *)&v30.fields.fakeValue = v7;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
      }
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v27.fields.currentCryptoKey = v8;
      *(_QWORD *)&v27.fields.fakeValue = v7;
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v27, 0LL);
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_42;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v18 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v28.fields.currentCryptoKey = v17;
      *(_QWORD *)&v28.fields.fakeValue = v16;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
      v20 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v29.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v21 = v19;
      *(_QWORD *)&v29.fields.currentCryptoKey = v20;
      Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v29, 0LL);
      if ( !v18 )
        goto LABEL_42;
      Instance = (WebViewManager_o *)ServantLimitAddMaster__TryGetEntity(v18, &entity, v21, (int32_t)Instance, 0LL);
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
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
          v12 = *(_QWORD *)&v23.fields.fakeValue;
          v11 = *(_QWORD *)&v23.fields.currentCryptoKey;
          goto LABEL_32;
        }
LABEL_42:
        sub_B2C434(Instance, v14);
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL);
  }
  return result;
}


System_Int32_array *__fastcall BattleServantData__getCommandList(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B2C434(this, method);
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
  __int64 v10; // x1

  if ( (byte_4185B2E & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B2E = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getBuffList_30942396(buffData, 57, v8, 1, 0, 0LL, 0LL);
}


float __fastcall BattleServantData__getCommandStar(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  float CriticalMagnification; // s8
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  BattleBuffData_CheckIndividualitiesData_o *v9; // x22
  __int64 v10; // x1
  BattleBuffData_o *buffData; // x0
  float ActMag_30955592; // s0
  float v13; // s9
  float v14; // s0

  if ( (byte_4185B63 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B63 = 1;
  }
  CriticalMagnification = BattleCommand__getCriticalMagnification(command, 0LL);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, opSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_30955592 = BattleBuffData__getActMag_30955592(buffData, 26, v8, 0LL), !opSvt)
    || (buffData = opSvt->fields.buffData) == 0LL
    || (v13 = ActMag_30955592, v14 = BattleBuffData__getActMag_30955592(buffData, 27, v9, 0LL), !command) )
  {
    sub_B2C434(buffData, v10);
  }
  return (float)(CriticalMagnification * fmaxf((float)(v13 + 1.0) - v14, 0.0))
       + (float)((float)command->fields.addCritical / 1000.0);
}


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
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0

  if ( (byte_4185B6B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, command);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4185B6B = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getIndividualities(
                                                                     this,
                                                                     command,
                                                                     v15);
  if ( !v14 )
    sub_B2C434(Individualities, v17);
  System_Collections_Generic_List_int___AddRange(
    v14,
    Individualities,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                         this,
                                                                         isActiveOnly,
                                                                         isIncludeIgnoreIndiv,
                                                                         isIgnoreIndivUnreleaseable,
                                                                         v18);
  System_Collections_Generic_List_int___AddRange(
    v14,
    BuffIndividualities,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4185B6A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Concat_int___, command);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    byte_4185B6A = 1;
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
         (const MethodInfo_17423A4 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v9,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleServantData_ConnectData_o *__fastcall BattleServantData__getConnenctData(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  int32_t uniqueId; // w20
  int32_t v4; // w0
  int32_t atk; // w19
  int32_t v6; // w21
  BattleServantData_ConnectData_o *v7; // x22

  if ( (byte_4185BA6 & 1) == 0 )
  {
    sub_B2C35C(&BattleServantData_ConnectData_TypeInfo, method);
    byte_4185BA6 = 1;
  }
  uniqueId = this->fields.uniqueId;
  v4 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  atk = this->fields.atk;
  v6 = v4;
  v7 = (BattleServantData_ConnectData_o *)sub_B2C42C(BattleServantData_ConnectData_TypeInfo);
  BattleServantData_ConnectData___ctor(v7, uniqueId, v6, atk, 0LL);
  return v7;
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
  __int64 v8; // x1

  if ( (byte_4185B75 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&tmpVal);
    byte_4185B75 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__getActValue_30954484(buffData, 71, v6, 0LL) * tmpVal / 1000;
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
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *missText; // [xsp+8h] [xbp-28h] BYREF

  missText = 0LL;
  UpDownCriticalRate = BattleServantData__getUpDownCriticalRate(this, command, optSvt, &missText, v4);
  if ( !optSvt )
    sub_B2C434(UpDownCriticalRate, v9);
  return BattleServantData__GetUpDownCriticalRateDamageTaken(optSvt, command, this, v10)
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
  if ( (byte_4185B92 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B92 = 1;
  }
  svtlimitent = v4->fields.svtlimitent;
  if ( !svtlimitent
    || (criticalWeight = svtlimitent->fields.criticalWeight,
        buffData = v4->fields.buffData,
        v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v8, v4, 0LL, command, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_B2C434(this, command);
  }
  v9 = BattleBuffData__getActMag_30955592(buffData, 29, v8, 0LL) * (float)criticalWeight;
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
  __int64 v10; // x1

  if ( (byte_4185B31 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B31 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getBuffList_30942396(buffData, 64, v8, 1, 0, 0LL, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B2F & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_4185B2F = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, deadAttackcommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getBuffList_30942396(buffData, 58, v8, 1, 0, 0LL, 0LL);
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
  BattleBuffData_BuffData_array *BuffListMatchingLastAttackOpponentIndividuality; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  const MethodInfo *v14; // x1
  int32_t RevengeTargetUniqueIdFromOpponent; // w22
  const MethodInfo *v16; // x1
  int max_length; // w8
  int32_t v18; // w21
  unsigned int v19; // w24
  Il2CppClass **v20; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x23
  int32_t v22; // w8
  __int64 v24; // x0

  v6 = this;
  if ( (byte_4185B2A & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_BuffData___TypeInfo, data);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v9);
    this = (BattleServantData_o *)sub_B2C35C(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10);
    byte_4185B2A = 1;
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
    return (BattleBuffData_BuffData_array *)sub_B2C374(BattleBuffData_BuffData___TypeInfo, 0LL);
  this = (BattleServantData_o *)v6->fields.buffData;
  if ( !this )
LABEL_26:
    sub_B2C434(this, data);
  BuffListMatchingLastAttackOpponentIndividuality = BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(
                                                      (BattleBuffData_o *)this,
                                                      51,
                                                      data,
                                                      v6,
                                                      1,
                                                      0LL);
  if ( !isAllReturnDeadBuff )
  {
    v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v13,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    RevengeTargetUniqueIdFromOpponent = BattleServantData__getRevengeTargetUniqueIdFromOpponent(v6, v14);
    this = (BattleServantData_o *)BattleServantData__getRevengeTargetUniqueId(v6, v16);
    if ( BuffListMatchingLastAttackOpponentIndividuality )
    {
      max_length = BuffListMatchingLastAttackOpponentIndividuality->max_length;
      if ( max_length < 1 )
      {
LABEL_22:
        if ( v13 )
          return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
      }
      else
      {
        v18 = (int)this;
        v19 = 0;
        while ( 1 )
        {
          if ( v19 >= max_length )
          {
            v24 = sub_B2C460(this);
            sub_B2C400(v24, 0LL);
          }
          v20 = &BuffListMatchingLastAttackOpponentIndividuality->obj.klass + (int)v19;
          v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v20[4];
          if ( !v21 )
            break;
          this = (BattleServantData_o *)BattleBuffData_BuffData__checkState(
                                          (BattleBuffData_BuffData_o *)v20[4],
                                          2048,
                                          0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            v22 = RevengeTargetUniqueIdFromOpponent;
          else
            v22 = v18;
          if ( (v22 & 0x80000000) == 0
            || (this = (BattleServantData_o *)BattleBuffData_BuffData__checkState(
                                                (BattleBuffData_BuffData_o *)v21,
                                                0x40000,
                                                0LL),
                ((unsigned __int8)this & 1) == 0) )
          {
            if ( !v13 )
              goto LABEL_26;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v13,
              v21,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
          max_length = BuffListMatchingLastAttackOpponentIndividuality->max_length;
          if ( (int)++v19 >= max_length )
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
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // x0

  if ( (byte_4185BA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_4185BA0 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_9;
  v5 = *(_QWORD *)&v3->max_length;
  if ( v5 )
  {
    if ( !(_DWORD)v5 )
    {
      v8 = sub_B2C460(v3);
      sub_B2C400(v8, 0LL);
    }
    v6 = *(__int64 *)((char *)v3->m_Items + (((v5 << 32) - 0x100000000LL) >> 29));
    if ( v6 )
      return *(_DWORD *)(v6 + 20);
LABEL_9:
    sub_B2C434(v3, v4);
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
    sub_B2C434(0LL, method);
  if ( BattleBuffData__isIgnoreDefeatPoint(buffData, 0LL) )
    return 0;
  else
    return this->fields.defeatPoint;
}


int32_t __fastcall BattleServantData__getDefenceBaseNp(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcLvEntity_o *TDvcLv; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1

  TDvcLv = BattleServantData__get_TDvcLv(this, method);
  if ( TDvcLv )
  {
    TDvcLv = BattleServantData__get_TDvcLv(this, v4);
    if ( !TDvcLv )
      sub_B2C434(0LL, v5);
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
  __int64 v16; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  ServantLimitAddMaster_o *v20; // x22
  int32_t v21; // w0
  __int64 v22; // x8
  int32_t v23; // w20
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

  if ( (byte_4185B18 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, changeImageLimit);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4185B18 = 1;
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
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v30, 0LL) )
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v10;
      *(_QWORD *)&v31.fields.fakeValue = v9;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v31, 0LL) >= 11 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v35.fields.currentCryptoKey = v10;
        *(_QWORD *)&v35.fields.fakeValue = v9;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v35, 0LL);
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
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v32, 0LL);
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v20 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v33.fields.currentCryptoKey = v19;
      *(_QWORD *)&v33.fields.fakeValue = v18;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v33, 0LL);
      v22 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v34.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v23 = v21;
      *(_QWORD *)&v34.fields.currentCryptoKey = v22;
      Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v34, 0LL);
      if ( !v20 )
        goto LABEL_48;
      Instance = (WebViewManager_o *)ServantLimitAddMaster__TryGetEntity(v20, &entity, v23, (int32_t)Instance, 0LL);
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
        sub_B2C434(Instance, v16);
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v35, 0LL);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_4185B15 & 1) == 0 )
  {
    sub_B2C35C(&ServantLimitAddMaster_TypeInfo, method);
    byte_4185B15 = 1;
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
    sub_B2C434(v4, method);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4185B32 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B32 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v5, v6);
  return BattleBuffData__getBuffList_30942396(buffData, 76, v4, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getFixCommandCardBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4185B2D & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B2D = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v5, v6);
  return BattleBuffData__getBuffList_30942396(buffData, 74, v4, 1, 0, 0LL, 0LL);
}


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
  __int64 v11; // x1

  if ( (byte_4185B7B & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_4185B7B = 1;
  }
  if ( isTreasureDevice )
    TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, (const MethodInfo *)opSvt);
  else
    TreasureDvcCommand = 0LL;
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, TreasureDvcCommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v10, v11);
  return BattleBuffData__getActMag_30955592(buffData, 63, v9, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getGutsBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B2C434(0LL, data);
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
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  System_Collections_Generic_IEnumerable_T__o *klass; // x1
  const MethodInfo_2F6724C *v19; // x2
  const MethodInfo *v20; // x2
  System_Int32_array *ServantCommandIndividuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4185B97 & 1) == 0 )
  {
    sub_B2C35C(&BattleServantData_TypeInfo, command);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4185B97 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
          (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
        ServantCommandIndividuality = BattleServantData__getServantCommandIndividuality(this, command, v20);
        v19 = (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__;
        klass = (System_Collections_Generic_IEnumerable_T__o *)ServantCommandIndividuality;
        goto LABEL_21;
      }
LABEL_23:
      sub_B2C434(CriticalIndividuality, v15);
    }
    if ( BattleServantData__get_TreasureDevice(this, v16) )
    {
      CriticalIndividuality = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__get_TreasureDevice(
                                                                               this,
                                                                               v17);
      if ( CriticalIndividuality && v10 )
      {
        klass = (System_Collections_Generic_IEnumerable_T__o *)CriticalIndividuality[4].klass;
        v19 = (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_21:
        System_Collections_Generic_List_int___AddRange(v10, klass, v19);
        goto LABEL_22;
      }
      goto LABEL_23;
    }
  }
LABEL_22:
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__EnumerateIndividuality(
                                                               this,
                                                               (System_Collections_Generic_IEnumerable_int__o *)v10,
                                                               v11);
  return System_Linq_Enumerable__ToArray_int_(
           v22,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleServantData__getIndividualities_21310616(
        BattleServantData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4185B98 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, addIndiv);
    byte_4185B98 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__EnumerateIndividuality(
                                                              this,
                                                              (System_Collections_Generic_IEnumerable_int__o *)addIndiv,
                                                              method);
  return System_Linq_Enumerable__ToArray_int_(
           v5,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4185B14 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v3);
    byte_4185B14 = 1;
  }
  level = this->fields.level;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &level);
  return System_String__Format((System_String_o *)StringLiteral_23539/*"{0}"*/, v4, 0LL);
}


int32_t __fastcall BattleServantData__getLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4185B16 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185B16 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
}


int32_t __fastcall BattleServantData__getLimitImageIndex(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t SvtId; // w19
  const MethodInfo *v4; // x2
  int32_t DispLimitCount; // w20

  if ( (byte_4185B1A & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, method);
    byte_4185B1A = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  BattleBuffData_CheckIndividualitiesData_o *v5; // x20
  CrashReporter_o *buffData; // x0
  __int64 v7; // x1
  __int64 maxhp; // x21
  BattleBuffData_o *v9; // x8
  __int64 v10; // x8

  if ( (byte_4185B48 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_15715/*"[BattleServantData.getMaxHp] buffData is null"*/, v4);
    byte_4185B48 = 1;
  }
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  buffData = (CrashReporter_o *)this->fields.buffData;
  if ( !buffData
    && ((buffData = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0LL
     || (CrashReporter__SendReport_28292332(buffData, (System_String_o *)StringLiteral_15715/*"[BattleServantData.getMaxHp] buffData is null"*/, 0LL, 0LL, 0LL),
         (buffData = (CrashReporter_o *)this->fields.buffData) == 0LL))
    || (maxhp = this->fields.maxhp,
        buffData = (CrashReporter_o *)BattleBuffData__getActValue_30954484((BattleBuffData_o *)buffData, 52, v5, 0LL),
        (v9 = this->fields.buffData) == 0LL) )
  {
    sub_B2C434(buffData, v7);
  }
  v10 = (int)buffData * maxhp / 1000 + maxhp + BattleBuffData__getActValue_30954484(v9, 53, v5, 0LL);
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
  if ( (byte_4185B42 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, command);
    this = (BattleServantData_o *)sub_B2C35C(&ServantCardEntity_TypeInfo, v5);
    byte_4185B42 = 1;
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
    sub_B2C434(this, command);
  }
  v8 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[v8 - 1] == ServantCardEntity_TypeInfo )
  {
    return this->fields.uniqueId;
  }
  v10 = (BattleServantData_o *)sub_B2C728(this);
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
    sub_B2C434(0LL, checkIndividualities);
  return BattleBuffData__getBuffList_30942396(buffData, 73, checkIndividualities, 1, 0, 0LL, 0LL);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  _BOOL4 isTurnBuff; // w0
  BattleBuffData_o *v8; // x20
  int v9; // w22
  BattleBuffData_CheckIndividualitiesData_o *v10; // x21

  if ( (byte_4185B90 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B90 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 39, v4, 0, 0LL),
        v8 = this->fields.buffData,
        v9 = isTurnBuff,
        v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v10, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v8) )
  {
    sub_B2C434(v5, v6);
  }
  return BattleBuffData__getMaxTurnBuff(v8, 39, v10, v9 << 31 >> 31, 0LL);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
  return BattleDeckServantData__getTDName(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDRuby(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B2C434(0LL, method);
  return BattleDeckServantData__getTDRuby(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDVoice(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B2C434(0LL, method);
  return BattleDeckServantData__getEnemyTreasureDeviceVoiceId(deckSvt, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleServantData__getPassiveSkills(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  void *All; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__310_0; // x20
  Il2CppObject *v12; // x21
  struct BattleServantData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4185B0A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, v3);
    sub_B2C35C(&Method_System_Predicate_BattleSkillInfoData___ctor__, v4);
    sub_B2C35C(&System_Predicate_BattleSkillInfoData__TypeInfo, v5);
    sub_B2C35C(&Method_BattleServantData___c__getPassiveSkills_b__310_0__, v6);
    sub_B2C35C(&BattleServantData___c_TypeInfo, v7);
    byte_4185B0A = 1;
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
    v12 = (Il2CppObject *)static_fields->__9;
    _9__310_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__310_0,
      v12,
      Method_BattleServantData___c__getPassiveSkills_b__310_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    v13 = BattleServantData___c_TypeInfo->static_fields;
    v13->__9__310_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__310_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__310_0,
      (System_Int32_array **)_9__310_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)skillInfoList,
                (System_Predicate_T__o *)_9__310_0,
                (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_B2C434(All, method);
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


int32_t __fastcall BattleServantData__getRarity(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, isAtkSide);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4185B30 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B30 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v5, v6);
  return BattleBuffData__getBuffList_30942396(buffData, 65, v4, 1, 0, 0LL, 0LL);
}


int32_t __fastcall BattleServantData__getRevengeTargetUniqueId(BattleServantData_o *this, const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v3; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v6; // w10
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v7; // x8
  unsigned int groupId; // w13
  int32_t v9; // w8
  __int64 v11; // x0

  if ( (byte_4185B9E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_4185B9E = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_14;
  max_length = v3->max_length;
  v6 = max_length - 1;
  if ( (int)(max_length - 1) >= 0 )
  {
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v11 = sub_B2C460(v3);
        sub_B2C400(v11, 0LL);
      }
      v7 = v3->m_Items[v6];
      if ( !v7 )
        break;
      groupId = v7->fields.groupId;
      if ( groupId <= 7 && ((1 << groupId) & 0xDE) != 0 )
      {
        v9 = *(&v7->fields.groupId + 1);
        if ( v9 != this->fields.uniqueId )
          return v9;
      }
      if ( (--v6 & 0x80000000) != 0 )
        return -1;
    }
LABEL_14:
    sub_B2C434(v3, v4);
  }
  return -1;
}


int32_t __fastcall BattleServantData__getRevengeTargetUniqueIdFromOpponent(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v3; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v6; // w10
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_o *v7; // x8
  unsigned int groupId; // w13
  int32_t v9; // w8
  __int64 v11; // x0

  if ( (byte_4185B9F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_4185B9F = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_14;
  max_length = v3->max_length;
  v6 = max_length - 1;
  if ( (int)(max_length - 1) >= 0 )
  {
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v11 = sub_B2C460(v3);
        sub_B2C400(v11, 0LL);
      }
      v7 = v3->m_Items[v6];
      if ( !v7 )
        break;
      groupId = v7->fields.groupId;
      if ( groupId <= 7 && ((1 << groupId) & 0xDE) != 0 )
      {
        if ( BYTE4(v7->fields.msgIds) )
        {
          v9 = *(&v7->fields.groupId + 1);
          if ( v9 != this->fields.uniqueId )
            return v9;
        }
      }
      if ( (--v6 & 0x80000000) != 0 )
        return -1;
    }
LABEL_14:
    sub_B2C434(v3, v4);
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
    sub_B2C434(0LL, indv);
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
  unsigned __int64 max_length; // x9
  int32_t v7; // w8
  unsigned __int64 v8; // x10
  signed int v9; // w12
  unsigned int v10; // w14
  __int64 v12; // x0

  Individualities = BattleServantData__getIndividualities(this, 0LL, method);
  if ( !Individualities )
    goto LABEL_18;
  max_length = Individualities->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
LABEL_17:
        v12 = sub_B2C460(Individualities);
        sub_B2C400(v12, 0LL);
      }
      if ( !checkIndvArray )
        break;
      v9 = checkIndvArray->max_length;
      if ( v9 >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          if ( v10 >= v9 )
            goto LABEL_17;
          if ( Individualities->m_Items[v8 + 1] == checkIndvArray->m_Items[v10 + 1] )
            break;
          if ( (int)++v10 >= v9 )
            goto LABEL_13;
        }
        ++v7;
      }
LABEL_13:
      if ( (__int64)++v8 >= (int)max_length )
        return v7;
    }
LABEL_18:
    sub_B2C434(Individualities, v5);
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
  __int64 v16; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x1
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x8
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v47; // x8
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v61; // x24
  __int64 v62; // x25
  int size; // w8
  __int64 v64; // x8
  BattleSkillInfoData_o *v65; // x24
  __int64 v66; // x26
  __int64 v67; // x26
  System_Int32_array **statestring; // x1
  System_Int32_array **commandAssistIds; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x20
  BattleServantData___c_c *v77; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_string__object___string__o *_9__275_0; // x21
  Il2CppObject *v80; // x22
  struct BattleServantData___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  System_Int32_array **v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  __int64 v97; // x0

  if ( (byte_4185AF2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___,
      data);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleServantData_PartAnimationSaveData___, v5);
    sub_B2C35C(
      &Method_System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___ctor__,
      v6);
    sub_B2C35C(
      &System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__TypeInfo,
      v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v10);
    sub_B2C35C(&BattleServantData_SaveData_TypeInfo, v11);
    sub_B2C35C(&Method_BattleServantData___c__getSaveData_b__275_0__, v12);
    sub_B2C35C(&BattleServantData___c_TypeInfo, v13);
    byte_4185AF2 = 1;
  }
  v14 = sub_B2C42C(BattleServantData_SaveData_TypeInfo);
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
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 56), SaveData, v18, v19, v20, v21, v22, v23);
  aiState = (AiState_o *)BattleServantData__get_AiStateManager(this, v24);
  if ( !aiState )
    goto LABEL_34;
  v25 = (System_Int32_array **)AiStateManager__GetSaveData((AiStateManager_o *)aiState, 0LL);
  *(_QWORD *)(v14 + 192) = v25;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 192), v25, v26, v27, v28, v29, v30, v31);
  aiState = (AiState_o *)this->fields.buffData;
  if ( !aiState )
    goto LABEL_34;
  v32 = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)aiState, 0LL);
  *(_QWORD *)(v14 + 64) = v32;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 64), v32, v33, v34, v35, v36, v37, v38);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_34;
  v40 = (System_Int32_array **)sub_B2C374(int___TypeInfo, (unsigned int)skillInfoList->fields._size);
  *(_QWORD *)(v14 + 40) = v40;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 40), v40, v41, v42, v43, v44, v45, v46);
  v47 = this->fields.skillInfoList;
  if ( !v47 )
    goto LABEL_34;
  v48 = (System_Int32_array **)sub_B2C374(int___TypeInfo, (unsigned int)v47->fields._size);
  *(_QWORD *)(v14 + 48) = v48;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 48), v48, v49, v50, v51, v52, v53, v54);
  v61 = this->fields.skillInfoList;
  if ( !v61 )
    goto LABEL_34;
  v62 = 0LL;
  while ( 1 )
  {
    size = v61->fields._size;
    if ( (int)v62 >= size )
      break;
    if ( size <= (unsigned int)v62 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v64 = (__int64)v61->fields._items + 8 * v62;
    v65 = *(BattleSkillInfoData_o **)(v64 + 32);
    if ( v65 )
    {
      v66 = *(_QWORD *)(v14 + 40);
      aiState = (AiState_o *)BattleSkillInfoData__getInfoId(*(BattleSkillInfoData_o **)(v64 + 32), 0LL);
      if ( v66 )
      {
        if ( (unsigned int)v62 >= *(_DWORD *)(v66 + 24) )
          goto LABEL_35;
        *(_DWORD *)(v66 + 4 * v62 + 32) = (_DWORD)aiState;
        v67 = *(_QWORD *)(v14 + 48);
        aiState = (AiState_o *)BattleSkillInfoData__getChargeTurn(v65, 0LL);
        if ( v67 )
        {
          if ( (unsigned int)v62 >= *(_DWORD *)(v67 + 24) )
          {
LABEL_35:
            v97 = sub_B2C460(aiState);
            sub_B2C400(v97, 0LL);
          }
          *(_DWORD *)(v67 + 4 * v62 + 32) = (_DWORD)aiState;
          v61 = this->fields.skillInfoList;
          ++v62;
          if ( v61 )
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
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 88), statestring, v55, v56, v57, v58, v59, v60);
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
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 208), commandAssistIds, v70, v71, v72, v73, v74, v75);
  if ( !data || (aiState = (AiState_o *)data->fields.perf) == 0LL )
LABEL_34:
    sub_B2C434(aiState, v16);
  BattlePerformance__SetActorPartAnimationData((BattlePerformance_o *)aiState, this->fields.uniqueId, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.partAnimationSaveDict, 0LL) )
  {
    partAnimationSaveDict = this->fields.partAnimationSaveDict;
    v77 = BattleServantData___c_TypeInfo;
    if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v77 = BattleServantData___c_TypeInfo;
    }
    static_fields = v77->static_fields;
    _9__275_0 = (System_Func_KeyValuePair_string__object___string__o *)static_fields->__9__275_0;
    if ( !_9__275_0 )
    {
      if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v77);
        static_fields = BattleServantData___c_TypeInfo->static_fields;
      }
      v80 = (Il2CppObject *)static_fields->__9;
      _9__275_0 = (System_Func_KeyValuePair_string__object___string__o *)sub_B2C42C(System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__TypeInfo);
      System_Func_KeyValuePair_string__object___string____ctor(
        _9__275_0,
        v80,
        Method_BattleServantData___c__getSaveData_b__275_0__,
        (const MethodInfo_27075C4 *)Method_System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___ctor__);
      v81 = BattleServantData___c_TypeInfo->static_fields;
      v81->__9__275_0 = (struct System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__o *)_9__275_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v81->__9__275_0,
        (System_Int32_array **)_9__275_0,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
    }
    v88 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)partAnimationSaveDict,
                                                                 (System_Func_TSource__TResult__o *)_9__275_0,
                                                                 (const MethodInfo_1A947D8 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___);
    v89 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v88,
                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleServantData_PartAnimationSaveData___);
    *(_QWORD *)(v14 + 216) = v89;
    sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 216), v89, v90, v91, v92, v93, v94, v95);
  }
  return (BattleServantData_SaveData_o *)v14;
}


System_String_o *__fastcall BattleServantData__getSaveDataToString(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19

  if ( (byte_4185AF3 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, data);
    byte_4185AF3 = 1;
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
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_4185B21 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Predicate_BattleSkillInfoData___ctor__, v5);
    sub_B2C35C(&System_Predicate_BattleSkillInfoData__TypeInfo, v6);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass387_0__getSelfSkillInfo_b__0__, v7);
    sub_B2C35C(&BattleServantData___c__DisplayClass387_0_TypeInfo, v8);
    byte_4185B21 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass387_0_o *)sub_B2C42C(BattleServantData___c__DisplayClass387_0_TypeInfo);
  BattleServantData___c__DisplayClass387_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleSkillInfoData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BattleServantData___c__DisplayClass387_0__getSelfSkillInfo_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B2C434(v10, v11);
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
                                    (System_Predicate_T__o *)v13,
                                    (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
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
  if ( (byte_4185B46 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, command);
    sub_B2C35C(&int_TypeInfo, v5);
    this = (BattleServantData_o *)sub_B2C35C(&ServantCardEntity_TypeInfo, v6);
    byte_4185B46 = 1;
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
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
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
    sub_B2C434(this, command);
  }
  v9 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[v9 - 1] == ServantCardEntity_TypeInfo )
  {
    return *(System_Int32_array **)&this->fields.exceedCount.fields.currentCryptoKey;
  }
  v11 = (BattleServantData_o *)sub_B2C728(this);
  return (System_Int32_array *)BattleServantData__getNPVal(v11, v12);
}


System_String_o *__fastcall BattleServantData__getServantName(BattleServantData_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  ServantEntity_o *svtdata; // x20
  __int64 v5; // x19
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4185B13 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185B13 = 1;
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
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL);
    if ( !svtdata )
      sub_B2C434(v7, v8);
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
  if ( (byte_4185AFE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&OptionManager_TypeInfo, v8);
    this = (BattleServantData_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4185AFE = 1;
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
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        svtId,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_B2C434(this, *(_QWORD *)&svtId);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
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
  __int64 v8; // x1

  if ( !System_String__IsNullOrEmpty(this->fields.svtOverwriteBattleName, 0LL) )
    return this->fields.svtOverwriteBattleName;
  result = this->fields.svtName;
  if ( !result )
  {
    svtdata = this->fields.svtdata;
    battleVoice = this->fields.battleVoice;
    DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v3);
    if ( !svtdata )
      sub_B2C434(DispLimitCount, v8);
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
  BattleBuffData_CheckIndividualitiesData_o *v7; // x0
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21
  BattleServantData_o *v9; // x1
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4185B35 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_TypeInfo, method);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    byte_4185B35 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  buffData = this->fields.buffData;
  v6 = IsConstantMasterIndvAddBuffActive;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  v8 = v7;
  if ( v6 )
    v9 = this;
  else
    v9 = 0LL;
  BattleBuffData_CheckIndividualitiesData___ctor(v7, v9, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v10, v11);
  return BattleBuffData__getBuffList_30942396(buffData, 85, v8, 1, 0, 0LL, 0LL);
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
  if ( (byte_4185B38 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, buff);
    skillLvMst = (SkillLvMaster_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4185B38 = 1;
  }
  if ( !v4 )
  {
    skillLvMst = (SkillLvMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillLvMst )
      goto LABEL_11;
    skillLvMst = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)skillLvMst,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v4 = skillLvMst;
  }
  if ( !buff )
    goto LABEL_11;
  vals = buff->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( vals->max_length < 2 )
  {
    v8 = sub_B2C460(skillLvMst);
    sub_B2C400(v8, 0LL);
  }
  if ( !v4 )
LABEL_11:
    sub_B2C434(skillLvMst, buff);
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
  __int64 v4; // x1
  System_Boolean_array *v5; // x20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x8
  BattleBuffData_o *v7; // x21
  unsigned __int64 v8; // x22
  unsigned __int64 v9; // x8
  unsigned int v10; // w10
  __int64 v12; // x0

  if ( (byte_4185B8E & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, method);
    byte_4185B8E = 1;
  }
  BuffParamList = (BattleBuffData_o *)sub_B2C374(bool___TypeInfo, 3LL);
  if ( !this->fields.buffData
    || (v5 = (System_Boolean_array *)BuffParamList,
        (BuffParamList = (BattleBuffData_o *)BattleBuffData__getBuffParamList(this->fields.buffData, 99, this, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_B2C434(BuffParamList, v4);
  }
  passiveList = BuffParamList->fields.passiveList;
  v7 = BuffParamList;
  if ( (int)passiveList >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)passiveList )
        goto LABEL_20;
      BuffParamList = this->fields.buffData;
      if ( !BuffParamList )
        goto LABEL_21;
      BuffParamList = (BattleBuffData_o *)BattleBuffData__getSkillSealSelectListFromValue(
                                            BuffParamList,
                                            *((_DWORD *)&v7->fields.activeList + v8),
                                            0LL);
      if ( !BuffParamList )
        goto LABEL_21;
      if ( (int)BuffParamList->fields.passiveList >= 1 )
        break;
LABEL_18:
      LODWORD(passiveList) = v7->fields.passiveList;
      if ( (__int64)++v8 >= (int)passiveList )
        return v5;
    }
    v9 = 0LL;
    v10 = (unsigned int)BuffParamList->fields.passiveList;
    while ( v9 < v10 )
    {
      if ( *((_BYTE *)&BuffParamList->fields.activeList + v9) )
      {
        if ( !v5 )
          goto LABEL_21;
        if ( v9 >= v5->max_length )
          break;
        v5->m_Items[v9 + 4] = 1;
      }
      v10 = (unsigned int)BuffParamList->fields.passiveList;
      if ( (__int64)++v9 >= (int)v10 )
        goto LABEL_18;
    }
LABEL_20:
    v12 = sub_B2C460(BuffParamList);
    sub_B2C400(v12, 0LL);
  }
  return v5;
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
  __int64 v8; // x1
  __int64 v10; // x0

  if ( (byte_4185B8F & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&index);
    byte_4185B8F = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData || (SkillSealSelectTurnList = BattleBuffData__getSkillSealSelectTurnList(buffData, v6, 0LL)) == 0LL )
    sub_B2C434(SkillSealSelectTurnList, v8);
  if ( SkillSealSelectTurnList->max_length <= index )
  {
    v10 = sub_B2C460(SkillSealSelectTurnList);
    sub_B2C400(v10, 0LL);
  }
  return SkillSealSelectTurnList->m_Items[index + 1];
}


int32_t __fastcall BattleServantData__getSkillSealTurn(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  _BOOL4 isTurnBuff; // w0
  BattleBuffData_o *v8; // x20
  int v9; // w22
  BattleBuffData_CheckIndividualitiesData_o *v10; // x21

  if ( (byte_4185B8D & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B8D = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 40, v4, 0, 0LL),
        v8 = this->fields.buffData,
        v9 = isTurnBuff,
        v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v10, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v8) )
  {
    sub_B2C434(v5, v6);
  }
  return BattleBuffData__getMaxTurnBuff(v8, 40, v10, v9 << 31 >> 31, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getStartWaveBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4185B2C & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B2C = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v5, v6);
  return BattleBuffData__getBuffList_30942396(buffData, 54, v4, 1, 0, 0LL, 0LL);
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
    sub_B2C434(this, method);
  return svtlimitDispent->fields.stepProbability;
}


System_String_o *__fastcall BattleServantData__getStrParam(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, index);
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
  if ( (byte_4185B0F & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185B0F = 1;
  }
  svtdata = v2->fields.svtdata;
  if ( !svtdata )
    sub_B2C434(this, method);
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v7, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getTTurnEndBufflist(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4185B2B & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B2B = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v5, v6);
  return BattleBuffData__getBuffList_30942396(buffData, 55, v4, 1, 0, 0LL, 0LL);
}


float __fastcall BattleServantData__getTdRate(BattleServantData_o *this, const MethodInfo *method)
{
  return (float)this->fields.downtdrate / 1000.0;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getTdTypeChangeBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4185B34 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B34 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v5, v6);
  return BattleBuffData__getBuffList_30942396(buffData, 86, v4, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_o *__fastcall BattleServantData__getTdTypeChangeBuffSingle(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *v3; // x20
  BattleBuffData_BuffData_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int max_length; // w8
  int v8; // w9
  BattleBuffData_BuffData_o *v9; // x10
  __int64 v11; // x0

  if ( (byte_4185B36 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_BuffData_TypeInfo, method);
    byte_4185B36 = 1;
  }
  v3 = BattleServantData__getTdTypeChangeBuff(this, method);
  v4 = (BattleBuffData_BuffData_o *)sub_B2C42C(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_16;
  v4->fields.addOrder = -1;
  if ( !v3 )
    goto LABEL_16;
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
      {
        v11 = sub_B2C460(v5);
        sub_B2C400(v11, 0LL);
      }
      v9 = v3->m_Items[v8];
      if ( !v9 )
        break;
      ++v8;
      if ( v9->fields.addOrder > v4->fields.addOrder )
        v4 = v9;
      if ( v8 >= max_length )
        goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v5, v6);
  }
LABEL_12:
  if ( v4->fields.addOrder == -1 )
    return 0LL;
  else
    return v4;
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
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_4185B22 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Predicate_BattleSkillInfoData___ctor__, v5);
    sub_B2C35C(&System_Predicate_BattleSkillInfoData__TypeInfo, v6);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass388_0__getTempSkillInfo_b__0__, v7);
    sub_B2C35C(&BattleServantData___c__DisplayClass388_0_TypeInfo, v8);
    byte_4185B22 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass388_0_o *)sub_B2C42C(BattleServantData___c__DisplayClass388_0_TypeInfo);
  BattleServantData___c__DisplayClass388_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleSkillInfoData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BattleServantData___c__DisplayClass388_0__getTempSkillInfo_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B2C434(v10, v11);
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
                                    (System_Predicate_T__o *)v13,
                                    (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
}


int32_t __fastcall BattleServantData__getThisTurnActCount(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.actionCount;
}


int32_t __fastcall BattleServantData__getTreasureDvcCardId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantTreasureDvcEntity_o *SvtTDvc; // x0
  __int64 v3; // x1

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_B2C434(0LL, v3);
  return SvtTDvc->fields.cardId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getTreasureDvcCardId_21227436(
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
    sub_B2C434(this, useTDTypeChangedValue);
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
  __int64 v3; // x1

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_B2C434(0LL, v3);
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
  __int64 v8; // x1
  int32_t v9; // w21
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
    || (v9 = (int)LimitCount,
        (LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL)) == 0LL)
    || !TDvc )
  {
    sub_B2C434(LimitCount, v8);
  }
  return TreasureDvcEntity__getTDTypeChangeIdEachLimit(TDvc, v9, LimitCount->fields.param, 0LL);
}


int32_t __fastcall BattleServantData__getTreasureDvcLevel(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.treasuredvcLevel;
}


int32_t __fastcall BattleServantData__getTreasureDvcMotionId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantTreasureDvcEntity_o *SvtTDvc; // x0
  __int64 v3; // x1

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_B2C434(0LL, v3);
  return SvtTDvc->fields.motion;
}


System_String_o *__fastcall BattleServantData__getTreasureDvcName(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0
  __int64 v5; // x1
  System_String_o **p_name; // x8

  if ( (byte_4185B24 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4185B24 = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_B2C434(0LL, v5);
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
  __int64 v5; // x1
  System_String_o **p_ruby; // x8

  if ( (byte_4185B25 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4185B25 = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_B2C434(0LL, v5);
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
  __int64 v10; // x1

  if ( (byte_4185B64 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B64 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getActMag_30955592(buffData, 3, v8, 0LL);
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
  BattleServantData_o *v11; // x24
  BattleBuffData_CheckIndividualitiesData_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4185B70 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_TypeInfo, command);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    byte_4185B70 = 1;
  }
  buffData = this->fields.buffData;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
    v11 = opSvt;
  else
    v11 = 0LL;
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, this, v11, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v13, v14);
  return BattleBuffData__getActValue_30954520(buffData, 46, missText, v12, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B7D & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B7D = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getActMag_30955592(buffData, 25, v8, 0LL);
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
  BattleBuffData_CheckIndividualitiesData_o *v12; // x24
  int32_t v13; // w1

  v8 = this;
  if ( (byte_4185B65 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B65 = 1;
  }
  if ( !targetSvt
    || (v9 = BattleServantData__checkPierceDefence(targetSvt, command, v8, (const MethodInfo *)pierce),
        buffData = v8->fields.buffData,
        v11 = v9,
        v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v12, v8, targetSvt, 0LL, command, 0LL, 0LL),
        !buffData) )
  {
    sub_B2C434(this, command);
  }
  if ( v11 || pierce )
    v13 = 5;
  else
    v13 = 4;
  return BattleBuffData__getActMag_30955592(buffData, v13, v12, 0LL);
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
  __int64 v12; // x1

  v7 = command;
  if ( (byte_4185B7C & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B7C = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    v7 = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, v7, v7, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v11, v12);
  return BattleBuffData__getActMag_30955592(buffData, 24, v10, 0LL);
}


float __fastcall BattleServantData__getUpDownGiveHeal(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185B73 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_4185B73 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__getActMag_30955592(buffData, 56, v6, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B7F & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B7F = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getActMag_30955592(buffData, 67, v8, 0LL);
}


int32_t __fastcall BattleServantData__getUpDownGutsHp(
        BattleServantData_o *this,
        int32_t *digit,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185B74 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, digit);
    byte_4185B74 = 1;
  }
  *digit = 1000;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__getActValue_30954484(buffData, 70, v6, 0LL);
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
  BattleBuffData_CheckIndividualitiesData_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4185B72 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, digit);
    byte_4185B72 = 1;
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
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B2C434(v10, v11);
  return BattleBuffData__getActValue_30954484(buffData, 34, v9, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B66 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B66 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getActMag_30955592(buffData, 6, v8, 0LL);
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
  BattleBuffData_CheckIndividualitiesData_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4185B69 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_TypeInfo, command);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    byte_4185B69 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(11, targetSvt, 0LL);
  buffData = this->fields.buffData;
  v10 = ActInfo;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B2C434(v12, v13);
  return BattleBuffData__getActMag_30955532(buffData, v10, v11, 0LL);
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
  __int64 v12; // x1

  v7 = command;
  if ( (byte_4185B6E & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B6E = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    v7 = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, v7, v7, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v11, v12);
  return BattleBuffData__getActMag_30955592(buffData, 28, v10, 0LL);
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
  __int64 v10; // x1

  if ( (byte_4185B6C & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B6C = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getActMag_30955592(buffData, 12, v8, 0LL);
}


float __fastcall BattleServantData__getUpdownPower(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x1
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v10; // x4
  int v11; // w22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t ActValue_30954484; // w23
  const MethodInfo *v19; // x4
  System_Int32_array **BuffIndividualities; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleBuffData_o *v27; // x8

  if ( (byte_4185B67 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B67 = 1;
  }
  v7 = sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
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
  buffData = (BattleBuffData_o *)BattleBuffData__getActValue_30954484(
                                   buffData,
                                   7,
                                   (BattleBuffData_CheckIndividualitiesData_o *)v7,
                                   0LL);
  if ( !targetSvt )
    goto LABEL_10;
  v11 = (int)buffData;
  buffData = (BattleBuffData_o *)BattleServantData__getBuffIndividualities(targetSvt, 0, 0, 0, v10);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 56) = buffData;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 56), (System_Int32_array **)buffData, v12, v13, v14, v15, v16, v17);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActValue_30954484 = BattleBuffData__getActValue_30954484(
                              buffData,
                              8,
                              (BattleBuffData_CheckIndividualitiesData_o *)v7,
                              0LL),
        BuffIndividualities = (System_Int32_array **)BattleServantData__getBuffIndividualities(targetSvt, 1, 0, 0, v19),
        *(_QWORD *)(v7 + 56) = BuffIndividualities,
        sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 56), BuffIndividualities, v21, v22, v23, v24, v25, v26),
        (buffData = this->fields.buffData) == 0LL)
    || (buffData = (BattleBuffData_o *)BattleBuffData__getActValue_30954484(
                                         buffData,
                                         9,
                                         (BattleBuffData_CheckIndividualitiesData_o *)v7,
                                         0LL),
        (v27 = this->fields.buffData) == 0LL) )
  {
LABEL_10:
    sub_B2C434(buffData, v8);
  }
  return (float)(ActValue_30954484
               + v11
               + (int)buffData
               + BattleBuffData__getActValue_30954484(v27, 78, (BattleBuffData_CheckIndividualitiesData_o *)v7, 0LL))
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
  __int64 v9; // x21
  System_Int32_array *BuffIndividualities; // x0
  System_Int32_array **v11; // x1
  const MethodInfo *v12; // x4
  MethodInfo *v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4185B68 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_TypeInfo, command);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    byte_4185B68 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v9 = sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(
    (BattleBuffData_CheckIndividualitiesData_o *)v9,
    this,
    targetSvt,
    command,
    0LL,
    0LL,
    0LL);
  if ( !targetSvt )
    goto LABEL_13;
  BuffIndividualities = BattleServantData__getBuffIndividualities(targetSvt, 0, 0, 0, v12);
  v11 = (System_Int32_array **)BuffIndividualities;
  if ( IsConstantMasterIndvAddBuffActive )
  {
    BuffIndividualities = BattleServantData__getIndividualities_21310616(targetSvt, BuffIndividualities, v13);
    if ( !v9 )
      goto LABEL_13;
    v11 = (System_Int32_array **)BuffIndividualities;
  }
  else if ( !v9 )
  {
    goto LABEL_13;
  }
  *(_QWORD *)(v9 + 56) = v11;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 56), v11, (System_String_array **)v13, v14, v15, v16, v17, v18);
  BuffIndividualities = (System_Int32_array *)this->fields.buffData;
  if ( !BuffIndividualities )
LABEL_13:
    sub_B2C434(BuffIndividualities, v11);
  return (float)BattleBuffData__getActValue_30954484(
                  (BattleBuffData_o *)BuffIndividualities,
                  79,
                  (BattleBuffData_CheckIndividualitiesData_o *)v9,
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
  __int64 v10; // x1

  if ( (byte_4185B6D & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B6D = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v9, v10);
  return BattleBuffData__getActMag_30955592(buffData, 10, v8, 0LL);
}


int64_t __fastcall BattleServantData__getUserSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_4185B0E & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4185B0E = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v5, 0LL);
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
    sub_B2C434(0LL, method);
  *(UnityEngine_Color_o *)&v3 = ServantLimitEntity__getWeaponColor(svtlimitDispent, 0LL);
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
  return result;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B2C434(svtlimitaddent, isEffect);
  }
  return WeaponEfect;
}


System_Int32_array *__fastcall BattleServantData__getWeaponIndividualities(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  struct ServantEntity_o *svtdata; // x8
  __int64 v6; // x0

  if ( (byte_4185B9B & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_4185B9B = 1;
  }
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  svtdata = this->fields.svtdata;
  if ( !svtdata || !result )
    sub_B2C434(result, v4);
  if ( !result->max_length )
  {
    v6 = sub_B2C460(result);
    sub_B2C400(v6, 0LL);
  }
  result->m_Items[1] = svtdata->fields.attackAttri;
  return result;
}


int32_t __fastcall BattleServantData__getWeaponScale(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B2C434(this, method);
  return svtlimitDispent->fields.weaponScale;
}


AiStateManager_o *__fastcall BattleServantData__get_AiStateManager(BattleServantData_o *this, const MethodInfo *method)
{
  AiStateManager_o *aiStateManager; // x20
  AiState_o *aiState; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4185AE6 & 1) == 0 )
  {
    sub_B2C35C(&AiStateManager_TypeInfo, method);
    byte_4185AE6 = 1;
  }
  aiStateManager = this->fields._aiStateManager;
  if ( !aiStateManager )
  {
    aiState = this->fields.aiState;
    aiStateManager = (AiStateManager_o *)sub_B2C42C(AiStateManager_TypeInfo);
    AiStateManager___ctor(aiStateManager, aiState, 0LL);
    this->fields._aiStateManager = aiStateManager;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._aiStateManager,
      (System_Int32_array **)aiStateManager,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return aiStateManager;
}


int32_t __fastcall BattleServantData__get_BattleSize(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B2C434(this, method);
  return svtdata->fields.battleSize;
}


BattleBuffData_o *__fastcall BattleServantData__get_BuffData(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleServantConfConponent_o *p_buffData; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4185AEC & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_TypeInfo, method);
    byte_4185AEC = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
  {
    p_buffData = (BattleServantConfConponent_o *)&this->fields.buffData;
    buffData = (BattleBuffData_o *)sub_B2C42C(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(buffData, 0LL);
    p_buffData->klass = (BattleServantConfConponent_c *)buffData;
    sub_B2C2F8(p_buffData, (System_Int32_array **)buffData, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4185B95 & 1) == 0 )
  {
    sub_B2C35C(&BattleServantData_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_3439/*"CRITICAL_INDIVIDUALITY"*/, v2);
    byte_4185B95 = 1;
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
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3439/*"CRITICAL_INDIVIDUALITY"*/, 0LL);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  int32_t *p_param; // x8

  if ( (byte_4185B1F & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B1F = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData
    && (v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        (FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 109, v4, 1, 0LL)) != 0LL) )
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
    sub_B2C434(0LL, method);
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
  __int64 v9; // x1
  int32_t v10; // w21
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

  if ( (byte_4185AE8 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185AE8 = 1;
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
            || (v10 = (int)LimitCount,
                (LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL)) == 0LL)
            || !TreasureDevice )
          {
            sub_B2C434(LimitCount, v9);
          }
          v11 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(TreasureDevice, v10, LimitCount->fields.param, 0LL);
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
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v21, 0LL);
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
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v22, 0LL);
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
  void *LimitCount; // x0
  __int64 v9; // x1
  int32_t v10; // w21
  int32_t v11; // w20
  const MethodInfo *v12; // x1
  int32_t treasuredvcLevel; // w2
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v15; // x0
  const MethodInfo *v16; // x1

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
            v10 = (int)LimitCount;
            LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL);
            if ( LimitCount )
            {
              if ( TreasureDevice )
              {
                v11 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(
                        TreasureDevice,
                        v10,
                        *((_DWORD *)LimitCount + 7),
                        0LL);
                LimitCount = BattleServantData__get_TdLvDataMasterBase(this, v12);
                if ( LimitCount )
                {
                  treasuredvcLevel = this->fields.treasuredvcLevel;
                  selectedTDId = v11;
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
    v15 = this->fields.TDvc;
    if ( v15 && TreasureDvcEntity__IsTDTypeChange(v15, 0LL) && this->fields.selectedTDId != -1 )
    {
      LimitCount = BattleServantData__get_TdLvDataMasterBase(this, v16);
      if ( LimitCount )
      {
        treasuredvcLevel = this->fields.treasuredvcLevel;
        selectedTDId = this->fields.selectedTDId;
        return TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)LimitCount, selectedTDId, treasuredvcLevel, 0LL);
      }
LABEL_17:
      sub_B2C434(LimitCount, v9);
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
  __int64 v6; // x1
  BattleServantConfConponent_o *p_tdDataMasterBase; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4185AEA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4185AEA = 1;
  }
  result = this->fields.tdDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v6);
    p_tdDataMasterBase = (BattleServantConfConponent_o *)&this->fields.tdDataMasterBase;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    p_tdDataMasterBase->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B2C2F8(p_tdDataMasterBase, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
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
  __int64 v6; // x1
  BattleServantConfConponent_o *p_tdLvDataMasterBase; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4185AEB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4185AEB = 1;
  }
  result = this->fields.tdLvDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v6);
    p_tdLvDataMasterBase = (BattleServantConfConponent_o *)&this->fields.tdLvDataMasterBase;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    p_tdLvDataMasterBase->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B2C2F8(p_tdLvDataMasterBase, MasterData_WarQuestSelectionMaster, v9, v10, v11, v12, v13, v14);
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
  __int64 selectedTDId; // x1
  int32_t v9; // w21
  int32_t v10; // w20
  const MethodInfo *v11; // x1
  TreasureDvcEntity_o *v12; // x0

  if ( (byte_4185AE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, method);
    byte_4185AE9 = 1;
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
            v9 = (int)LimitCount;
            LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL);
            if ( LimitCount )
            {
              if ( v6 )
              {
                v10 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(v6, v9, *((_DWORD *)LimitCount + 7), 0LL);
                LimitCount = BattleServantData__get_TdDataMasterBase(this, v11);
                if ( LimitCount )
                {
                  LODWORD(selectedTDId) = v10;
                  return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)LimitCount,
                                                  selectedTDId,
                                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
                }
              }
            }
          }
LABEL_18:
          sub_B2C434(LimitCount, selectedTDId);
        }
      }
    }
    v12 = this->fields.TDvc;
    if ( v12 )
    {
      if ( TreasureDvcEntity__IsTDTypeChange(v12, 0LL) )
      {
        selectedTDId = (unsigned int)this->fields.selectedTDId;
        if ( (_DWORD)selectedTDId != -1 )
        {
          LimitCount = this->fields.tdDataMasterBase;
          if ( LimitCount )
            return (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)LimitCount,
                                            selectedTDId,
                                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
    sub_B2C434(0LL, method);
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
  int32_t MaxHp; // w21
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v15; // x23
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  __int64 v17; // x1
  bool isTurnBuff; // w8
  bool result; // w0
  int v20; // w22
  int v21; // w0
  int v22; // w8
  Il2CppObject *current; // x20
  _BOOL8 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B50 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&heal);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_17275/*"changeHp"*/, v12);
    byte_4185B50 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  MaxHp = BattleServantData__getMaxHp(this, *(const MethodInfo **)&heal);
  if ( !isForce )
  {
    buffData = this->fields.buffData;
    v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v15, this, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_20;
    isTurnBuff = BattleBuffData__isTurnBuff(buffData, 42, v15, 0, 0LL);
    result = 0;
    if ( isTurnBuff )
      return result;
  }
  v20 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  v21 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)(v21 + heal),
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
  v22 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  paramobjelist = this->fields.paramobjelist;
  this->fields.accumulationDamage = (this->fields.accumulationDamage + v20 - v22) & ~((this->fields.accumulationDamage
                                                                                     + v20
                                                                                     - v22) >> 31);
  if ( !paramobjelist )
LABEL_20:
    sub_B2C434(paramobjelist, v17);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v24 )
    {
      if ( !current )
        sub_B2C434(v24, v25);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17275/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4185B49 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B49 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v5, v6);
  return !BattleBuffData__isTurnBuff(buffData, 39, v4, 0, 0LL);
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
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x5
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
                                             v12);
    return Individuality__CheckSignedMultiIndividuality(ConcatServantAndBuffIndividualityies, resValues, 0LL);
  }
  if ( !info )
LABEL_16:
    sub_B2C434(isAlive, v10);
  if ( info->fields.isIndiv )
  {
    Individualities = BattleServantData__getIndividualities(this, 0LL, v11);
    return Individuality__CheckIndividualities_27368108(Individualities, indiv, 0LL);
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


bool __fastcall BattleServantData__isBuffClassRelatioAtk(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        float *val,
        bool isAct,
        const MethodInfo *method)
{
  BattleBuffData_CheckIndividualitiesData_o *v11; // x21
  __int64 v12; // x1
  BattleBuffData_o *buffData; // x0
  bool ActBuff; // w0
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4185B89 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B89 = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, command, 0LL, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B2C434(0LL, v12);
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
  __int64 v12; // x1
  BattleBuffData_o *buffData; // x0
  bool ActBuff; // w0
  bool result; // w0
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4185B8A & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_4185B8A = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B2C434(0LL, v12);
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
  __int64 v8; // x1

  if ( (byte_4185B4A & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, commandType);
    byte_4185B4A = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, commandType, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
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
    sub_B2C434(0LL, method);
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
  __int64 v8; // x1
  signed int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  il2cpp_array_size_t v11; // w22
  Il2CppClass **v12; // x23
  char *v13; // x23
  DataManager_o *v14; // t1
  int32_t v15; // w8
  int32_t AppearanceId; // w0
  __int64 v18; // x0

  if ( (byte_4185BAF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, list);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4185BAF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !list )
    goto LABEL_21;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        goto LABEL_22;
      v12 = &list->obj.klass + (int)v11;
      v14 = (DataManager_o *)v12[4];
      v13 = (char *)(v12 + 4);
      Instance = v14;
      if ( !v14 )
        goto LABEL_21;
      Instance = (DataManager_o *)BattleBuffData_BuffData__checkState((BattleBuffData_BuffData_o *)Instance, 256, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      max_length = list->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_11;
    }
    if ( v11 >= list->max_length )
    {
LABEL_22:
      v18 = sub_B2C460(Instance);
      sub_B2C400(v18, 0LL);
    }
    if ( *(_QWORD *)v13 )
    {
      if ( v10 )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v10,
                                      *(_DWORD *)(*(_QWORD *)v13 + 16LL),
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
    sub_B2C434(Instance, v8);
  }
LABEL_11:
  v15 = this->fields.appearanceId;
  if ( v15 >= 1 )
    this->fields.tmpAppearanceId = 0;
  return v15 > 0;
}


bool __fastcall BattleServantData__isChangeServant(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *changeSvtList; // x8

  changeSvtList = this->fields.changeSvtList;
  if ( !changeSvtList )
    sub_B2C434(this, method);
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
  __int64 v8; // x1

  if ( (byte_4185B7E & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, checkCount);
    byte_4185B7E = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return !BattleBuffData__isTurnBuff(buffData, 75, v6, checkCount, 0LL);
}


bool __fastcall BattleServantData__isGuts(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_array *v4; // x0
  __int64 v5; // x1
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
      sub_B2C434(v4, v5);
    return BattleBuffData__isGuts(buffData, &buff, v4, 0LL);
  }
}


bool __fastcall BattleServantData__isGuts_21295976(
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
  __int64 v14; // x1

  *buff = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)buff, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( this->fields.isDeadAnime )
    return 0;
  buffData = this->fields.buffData;
  v13 = BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(this, v10);
  if ( !buffData )
    sub_B2C434(v13, v14);
  return BattleBuffData__isGuts(buffData, buff, v13, 0LL);
}


bool __fastcall BattleServantData__isHeroine(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
  return ServantEntity__IsNameTrue(svtdata, 0LL);
}


bool __fastcall BattleServantData__isNobleAction(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t invokeAct; // [xsp+Ch] [xbp-4h] BYREF

  invokeAct = 0;
  return BattleServantData__isNobleAction_21300684(this, &invokeAct, v2);
}


bool __fastcall BattleServantData__isNobleAction_21300684(
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
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4185B4C & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B4C = 1;
  }
  buffData = this->fields.buffData;
  TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, method);
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, TreasureDvcCommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v6, v7);
  return BattleBuffData__isTurnBuff(buffData, 82, v5, 0, 0LL);
}


bool __fastcall BattleServantData__isNobleSeal(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4185B4B & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_4185B4B = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v5, v6);
  return BattleBuffData__isTurnBuff(buffData, 41, v4, 0, 0LL);
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
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, effectId);
  return BattleBuffData__isSphitBuff(buffData, effectId, 0LL);
}


bool __fastcall BattleServantData__isTDSeraled(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcLvEntity_o *TDvcLv; // x0
  __int64 v5; // x1
  struct System_Int32_array *funcId; // x8

  if ( !BattleServantData__get_TDvcLv(this, method) )
    return 1;
  TDvcLv = BattleServantData__get_TDvcLv(this, v3);
  if ( !TDvcLv || (funcId = TDvcLv->fields.funcId) == 0LL )
    sub_B2C434(TDvcLv, v5);
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
    sub_B2C434(this, targetRarityList);
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
  __int64 v8; // x1

  if ( (byte_4185B40 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvtIndiv);
    byte_4185B40 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_23203976(v6, this, 0LL, 0LL, opSvtIndiv, 0LL, 0LL);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__checkActBuff_30959496(buffData, 45, v6, 0LL);
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
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20
  peRenderTexture_ChangeLayerObject_o *v14; // x0

  if ( (byte_4185B20 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Predicate_BattleSkillInfoData___ctor__, v5);
    sub_B2C35C(&System_Predicate_BattleSkillInfoData__TypeInfo, v6);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass386_0__isUseSelfSkill_b__0__, v7);
    sub_B2C35C(&BattleServantData___c__DisplayClass386_0_TypeInfo, v8);
    byte_4185B20 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass386_0_o *)sub_B2C42C(BattleServantData___c__DisplayClass386_0_TypeInfo);
  BattleServantData___c__DisplayClass386_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleSkillInfoData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BattleServantData___c__DisplayClass386_0__isUseSelfSkill_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B2C434(v10, v11);
  }
  v14 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
  if ( v14 )
  {
    if ( BYTE4(v14->fields.renderer) )
      LOBYTE(v14) = 0;
    else
      LOBYTE(v14) = *((_BYTE *)&v14->fields.prevLayer + 4) != 0;
  }
  return (char)v14;
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
    sub_B2C434(0LL, method);
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

  if ( (byte_4185B9C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__, method);
    byte_4185B9C = 1;
  }
  actionHistory = this->fields.actionHistory;
  if ( !actionHistory )
    sub_B2C434(0LL, method);
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___Clear(
    (System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *)actionHistory,
    (const MethodInfo_210B308 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__);
}


void __fastcall BattleServantData__resetParamObject(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0

  if ( (byte_4185B3C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    byte_4185B3C = 1;
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)paramobjelist,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B51 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, funcName);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4185B51 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B2C434(0LL, funcName);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v13.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v11 )
    {
      if ( !current )
        sub_B2C434(v11, v12);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        funcName,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v13; // x1
  struct System_Collections_Generic_LinkedList_BattleServantActionHistory__o *actionHistory; // x0

  if ( (byte_4185B9D & 1) == 0 )
  {
    sub_B2C35C(&BattleServantActionHistory_TypeInfo, *(_QWORD *)&actUniqueId);
    sub_B2C35C(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__, v11);
    byte_4185B9D = 1;
  }
  v12 = sub_B2C42C(BattleServantActionHistory_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = actType;
  *(_DWORD *)(v12 + 20) = actUniqueId;
  *(_DWORD *)(v12 + 24) = wavecount;
  *(_BYTE *)(v12 + 28) = isOpponent;
  actionHistory = this->fields.actionHistory;
  if ( !actionHistory )
    sub_B2C434(0LL, v13);
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___AddLast(
    (System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *)actionHistory,
    (BattleServantSnapShotGroupBase_SnapShot_o *)v12,
    (const MethodInfo_210B1C4 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__);
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
    sub_B2C434(this, inDeckSvt);
  UserServantFromID = BattleInfoData__getUserServantFromID((BattleInfoData_o *)this, inDeckSvt->fields.userSvtId, 0LL);
  BattleServantData__setBaseServantData_21255168(
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


void __fastcall BattleServantData__setBaseServantData_21255168(
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
  __int64 v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  BaseBattleServantEvent_o *ServantEvent; // x0
  struct BattleDeckServantData_o *v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x23
  __int128 v85; // q1
  int32_t exceedCount; // w23
  const MethodInfo *v87; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // kr00_16
  struct BattleDeckServantData_o *v89; // x8
  int32_t BattleSvtId; // w22
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct BattleDeckServantData_o *v104; // x8
  struct System_String_o *name; // x1
  int32_t v106; // w0
  const MethodInfo *v107; // x2
  struct System_String_o *ServantOverwriteName; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  struct BattleDeckServantData_o *v121; // x8
  struct DropInfo_array *dropInfos; // x1
  struct System_Int32_array *individuality; // x1
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  struct ServantEntity_o *v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  struct ServantEntity_o *svtdata; // x8
  ServantLimitMaster_o *v139; // x22
  const MethodInfo *v140; // x1
  int32_t SvtId; // w24
  struct ServantLimitEntity_o *v142; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  struct ServantEntity_o *v149; // x8
  ServantLimitAddMaster_o *v150; // x23
  __int64 v151; // x24
  __int64 v152; // x26
  int32_t v153; // w26
  const MethodInfo *v154; // x2
  const MethodInfo *v155; // x1
  int32_t v156; // w26
  const MethodInfo *v157; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v159; // x1
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v162; // w1
  ServantLimitMaster_o *v163; // x0
  struct ServantLimitEntity_o *v164; // x0
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  BattleUserServantData_o *UserServantFromID; // x28
  __int64 v172; // x23
  struct BattleUserServantData_array *v173; // x0
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  struct BattleUserServantData_array *equipList; // x20
  il2cpp_array_size_t *p_max_length; // x24
  unsigned __int64 v188; // x21
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  System_Int32_array **v195; // x26
  Il2CppClass **v196; // x0
  Il2CppClass **v197; // x8
  __int64 *v198; // x8
  Il2CppClass *v199; // x9
  Il2CppClass *v200; // t1
  __int64 v201; // x8
  int32_t maxhp; // w10
  int32_t equiphp; // w11
  struct System_Int64_array **p_userCommandCodeIds; // x23
  struct System_Int64_array *userCommandCodeIds; // x1
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
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  unsigned __int64 v227; // x20
  __int64 v228; // x26
  System_String_array **v229; // x2
  System_String_array **v230; // x3
  System_Boolean_array **v231; // x4
  System_Int32_array **v232; // x5
  System_Int32_array *v233; // x6
  System_Int32_array *v234; // x7
  System_Int32_array **v235; // x1
  System_Int64_array *v236; // x24
  System_Func_long__bool__o *v237; // x21
  struct System_Int32_array **p_commandAssistIds; // x25
  struct System_Int32_array *v239; // x0
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v246; // x21
  struct System_Int32_array *v247; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v248; // x23
  int v249; // w20
  unsigned __int64 v250; // x21
  _BOOL8 v251; // x0
  __int64 v252; // x1
  struct System_Int32_array *v253; // x9
  __int64 v254; // x0
  int v255; // w8
  struct System_Int32_array *commandCardParam; // x1
  System_String_array **v257; // x2
  System_String_array **v258; // x3
  System_Boolean_array **v259; // x4
  System_Int32_array **v260; // x5
  System_Int32_array *v261; // x6
  System_Int32_array *v262; // x7
  struct System_Int32_array *v263; // x1
  System_Int32_array **BattleSkillIdList; // x0
  System_String_array **v265; // x2
  System_String_array **v266; // x3
  System_Boolean_array **v267; // x4
  System_Int32_array **v268; // x5
  System_Int32_array *v269; // x6
  System_Int32_array *v270; // x7
  System_Int32_array **v271; // x0
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v278; // x23
  System_Collections_Generic_IEnumerable_T__o *skillInfoList; // x21
  __int64 v280; // x24
  System_String_array **v281; // x2
  System_String_array **v282; // x3
  System_Boolean_array **v283; // x4
  System_Int32_array **v284; // x5
  System_Int32_array *v285; // x6
  System_Int32_array *v286; // x7
  __int64 v287; // x9
  int v288; // w8
  __int64 v289; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v290; // x25
  __int64 v291; // x9
  __int64 v292; // x8
  __int64 v293; // x2
  __int64 v294; // x9
  struct System_Int32_array *classPassive; // x20
  __int64 v296; // x8
  unsigned __int64 v297; // x23
  BattleUserServantData_o *v298; // x20
  __int64 v299; // x8
  __int64 v300; // x24
  unsigned __int64 v301; // x20
  const MethodInfo *v302; // x3
  __int64 v303; // x8
  __int64 v304; // x24
  unsigned __int64 v305; // x20
  unsigned __int64 v306; // x25
  struct BattleUserServantData_array *v307; // x8
  unsigned __int8 v308; // w22
  unsigned __int64 v309; // x20
  int v310; // w23
  unsigned __int64 max_length; // x9
  struct BattleUserServantData_array *v312; // x8
  __int64 v313; // x24
  __int64 v314; // x8
  __int64 v315; // x25
  unsigned __int64 v316; // x26
  int v317; // w21
  int v318; // w27
  __int64 v319; // x23
  struct System_Collections_Generic_List_CommandCodeInfo__o *v320; // x23
  CommandCodeSkillMaster_o *v321; // x22
  unsigned __int64 v322; // x20
  int v323; // w21
  struct System_Collections_Generic_List_CommandCodeInfo__o *v324; // x23
  CommandCodeInfo_o *v325; // x8
  int v326; // w8
  __int64 v327; // x23
  int i; // w25
  __int64 v329; // x8
  struct System_Collections_Generic_List_CommandCodeInfo__o *v330; // x26
  int32_t v331; // w24
  CommandCodeInfo_o *v332; // x8
  const MethodInfo *v333; // x3
  int32_t Value; // w0
  int32_t nplineCount; // w8
  int v336; // w8
  System_Collections_Generic_IEnumerable_TSource__o *TDErrorVoiceSeArray; // x0
  System_String_array **v338; // x2
  System_String_array **v339; // x3
  System_Boolean_array **v340; // x4
  System_Int32_array **v341; // x5
  System_Int32_array *v342; // x6
  System_Int32_array *v343; // x7
  struct System_Collections_Generic_List_string__o *v344; // x1
  System_Collections_Hashtable_o *v345; // x21
  System_String_array **v346; // x2
  System_String_array **v347; // x3
  System_Boolean_array **v348; // x4
  System_Int32_array **v349; // x5
  System_Int32_array *v350; // x6
  System_Int32_array *v351; // x7
  ServantCardMaster_o *v352; // x23
  __int64 v353; // x24
  unsigned __int64 v354; // x20
  __int64 v355; // x25
  __int64 v356; // x26
  struct System_Collections_Hashtable_o *commandtable; // x25
  __int64 v358; // x0
  __int64 v359; // x27
  __int64 v360; // x28
  __int64 v361; // x26
  BattleDeckServantData_o *v362; // x8
  BattleUserServantData_o *v363; // x20
  int32_t KillType; // w0
  BattleDeckServantData_o *v365; // x8
  bool isRaid; // w0
  int32_t RaidId; // w0
  struct System_String_o *StartRaidState; // x0
  System_String_array **v369; // x2
  System_String_array **v370; // x3
  System_Boolean_array **v371; // x4
  System_Int32_array **v372; // x5
  System_Int32_array *v373; // x6
  System_Int32_array *v374; // x7
  BattleDeckServantData_o *v375; // x8
  BattleDeckServantData_o *v376; // x8
  bool isSuperBoss; // w0
  int32_t SuperBossId; // w0
  bool isSendDamageForSuperBossId; // w0
  BattleDeckServantData_o *v380; // x21
  __int64 v381; // x22
  __int64 v382; // x23
  __int64 v383; // x21
  __int64 v384; // x22
  __int64 v385; // x21
  __int64 v386; // x22
  int32_t v387; // w0
  const MethodInfo *v388; // x2
  struct System_String_o *BattleServantOverwriteName; // x0
  System_String_array **v390; // x2
  System_String_array **v391; // x3
  System_Boolean_array **v392; // x4
  System_Int32_array **v393; // x5
  System_Int32_array *v394; // x6
  System_Int32_array *v395; // x7
  struct BattleDeckServantData_o *v396; // x8
  int32_t v397; // w21
  ServantChangeMaster_o *v398; // x22
  ServantChangeEntity_o *v399; // x0
  UserServantCollectionMaster_o *v400; // x22
  __int64 v401; // x21
  __int64 v402; // x22
  __int64 v403; // x23
  System_String_array **v404; // x2
  System_String_array **v405; // x3
  System_Boolean_array **v406; // x4
  System_Int32_array **v407; // x5
  System_Int32_array *v408; // x6
  System_Int32_array *v409; // x7
  struct BattleDeckServantData_o *v410; // x8
  int32_t v411; // w22
  int32_t v412; // w23
  WarQuestSelectionMaster_o *v413; // x0
  __int64 v414; // x23
  __int64 v415; // x24
  UserNpcSvtRecordMaster_o *v416; // x22
  System_Collections_Generic_IEnumerable_TSource__o *TdPlayed; // x0
  struct System_Int32_array *v418; // x1
  struct System_Int32_array *v419; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v420; // x0
  struct System_Int32_array **p_tdplayed; // x0
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  System_String_array **v423; // x2
  System_String_array **v424; // x3
  System_Boolean_array **v425; // x4
  System_Int32_array **v426; // x5
  System_Int32_array *v427; // x6
  System_Int32_array *v428; // x7
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  System_String_array **v430; // x2
  System_String_array **v431; // x3
  System_Boolean_array **v432; // x4
  System_Int32_array **v433; // x5
  System_Int32_array *v434; // x6
  System_Int32_array *v435; // x7
  struct System_Int32_array *classBoardSquareIds; // x1
  System_String_array **v437; // x2
  System_String_array **v438; // x3
  System_Boolean_array **v439; // x4
  System_Int32_array **v440; // x5
  System_Int32_array *v441; // x6
  System_Int32_array *v442; // x7
  const MethodInfo *v443; // x1
  __int64 v444; // x0
  const MethodInfo *v445; // [xsp+0h] [xbp-140h]
  int32_t eventIda; // [xsp+1Ch] [xbp-124h]
  BattleUserServantData_o *v448; // [xsp+28h] [xbp-118h]
  struct BattleDeckServantData_o **p_deckSvt; // [xsp+38h] [xbp-108h]
  BaseBattleServantEvent_o *v451; // [xsp+40h] [xbp-100h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtdata; // [xsp+48h] [xbp-F8h]
  BattleUserServantData_o *v454; // [xsp+58h] [xbp-E8h]
  Il2CppObject *object; // [xsp+60h] [xbp-E0h]
  unsigned __int8 objecta; // [xsp+60h] [xbp-E0h]
  struct BattleUserServantData_array **p_equipList; // [xsp+68h] [xbp-D8h]
  _DWORD v458[9]; // [xsp+90h] [xbp-B0h] BYREF
  int v459; // [xsp+B4h] [xbp-8Ch]
  ServantCardEntity_o *entity; // [xsp+B8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v461; // [xsp+C0h] [xbp-80h] BYREF
  int32_t skillIndex[3]; // [xsp+E4h] [xbp-5Ch] BYREF
  System_RuntimeFieldHandle_o v463; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v464; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v465; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v466; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v467; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v468; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v469; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v470; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v471; // 0:x0.16

  if ( (byte_4185AFC & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_long___, inDeckSvt);
    sub_B2C35C(&BattleData_TypeInfo, v15);
    sub_B2C35C(&BattleUserServantData___TypeInfo, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCardMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___, v23);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v24);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_B2C35C(&Method_System_Linq_Enumerable_Concat_int___, v26);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v27);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_string___, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__get_Current__, v31);
    sub_B2C35C(&Method_System_Func_long__bool___ctor__, v32);
    sub_B2C35C(&System_Func_long__bool__TypeInfo, v33);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v34);
    sub_B2C35C(&int___TypeInfo, v35);
    sub_B2C35C(&int_TypeInfo, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeInfo__Add__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_commandAssistData__FindAll__, v39);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, v40);
    sub_B2C35C(&Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__, v41);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v42);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeInfo___ctor__, v43);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___67301096, v44);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Count__, v45);
    sub_B2C35C(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__, v46);
    sub_B2C35C(&System_Collections_Generic_List_CommandCodeInfo__TypeInfo, v47);
    sub_B2C35C(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v48);
    sub_B2C35C(&NetworkManager_TypeInfo, v49);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v50);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v51);
    sub_B2C35C(&Method_System_Predicate_commandAssistData___ctor__, v52);
    sub_B2C35C(&Method_System_Predicate_BattleSkillInfoData___ctor__, v53);
    sub_B2C35C(&System_Predicate_commandAssistData__TypeInfo, v54);
    sub_B2C35C(&System_Predicate_BattleSkillInfoData__TypeInfo, v55);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A,
      v57);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass293_0__setBaseServantData_b__1__, v58);
    sub_B2C35C(&BattleServantData___c__DisplayClass293_0_TypeInfo, v59);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass293_1__setBaseServantData_b__0__, v60);
    sub_B2C35C(&BattleServantData___c__DisplayClass293_1_TypeInfo, v61);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass293_2__setBaseServantData_b__2__, v62);
    sub_B2C35C(&BattleServantData___c__DisplayClass293_2_TypeInfo, v63);
    sub_B2C35C(&StringLiteral_1/*""*/, v64);
    sub_B2C35C(&StringLiteral_6536/*"FULL_TD_POINT"*/, v65);
    byte_4185AFC = 1;
  }
  skillIndex[0] = 0;
  memset(&v461, 0, sizeof(v461));
  entity = 0LL;
  v459 = 0;
  v66 = sub_B2C42C(BattleServantData___c__DisplayClass293_0_TypeInfo);
  BattleServantData___c__DisplayClass293_0___ctor((BattleServantData___c__DisplayClass293_0_o *)v66, 0LL);
  if ( !v66 )
    goto LABEL_295;
  *(_QWORD *)(v66 + 16) = inDeckSvt;
  sub_B2C2F8((BattleServantConfConponent_o *)(v66 + 16), (System_Int32_array **)inDeckSvt, v69, v70, v71, v72, v73, v74);
  Instance = (__int64)battleInfo;
  if ( !battleInfo )
    goto LABEL_295;
  ServantEvent = BattleInfoData__GetServantEvent(battleInfo, 0LL);
  v76 = *(struct BattleDeckServantData_o **)(v66 + 16);
  v451 = ServantEvent;
  p_deckSvt = &this->fields.deckSvt;
  this->fields.deckSvt = v76;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.deckSvt,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
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
                        (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v458,
                        userSvtId,
                        0LL);
  v85 = *(_OWORD *)&v458[4];
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)v458;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = v85;
  if ( !userSvt )
    goto LABEL_295;
  exceedCount = userSvt->fields.exceedCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(exceedCount, 0LL);
  v68 = *(_QWORD *)&v88.fields.fakeValue;
  Instance = *(_QWORD *)&v88.fields.currentCryptoKey;
  v89 = this->fields.deckSvt;
  this->fields.exceedCount = v88;
  if ( !v89 )
    goto LABEL_295;
  if ( v89->fields.isFollowerSvt )
    this->fields.followerType = Follower__getType(infollowerType, 0LL);
  BattleServantData__CalculateLimitCountWithSpoilerProtection(this, userSvt, v87);
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
  v91 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.statestring, v91, v92, v93, v94, v95, v96, v97);
  v104 = this->fields.deckSvt;
  this->fields.atktdrate = userSvt->fields.tdAttackRate;
  if ( !v104 )
    goto LABEL_295;
  name = v104->fields.name;
  this->fields.svtName = name;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtName,
    (System_Int32_array **)name,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  this->fields.overkillTargetId = -1;
  v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvt->fields.svtId, 0LL);
  ServantOverwriteName = BattleServantData__getServantOverwriteName(this, v106, v107);
  this->fields.svtOverwriteName = ServantOverwriteName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtOverwriteName,
    (System_Int32_array **)ServantOverwriteName,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  this->fields.displayType = userSvt->fields.displayType;
  v121 = this->fields.deckSvt;
  this->fields.npcSvtType = userSvt->fields.npcSvtType;
  if ( !v121 )
    goto LABEL_295;
  dropInfos = v121->fields.dropInfos;
  this->fields.droplist = dropInfos;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.droplist,
    (System_Int32_array **)dropInfos,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  individuality = userSvt->fields.individuality;
  this->fields.svtIndividuality = individuality;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtIndividuality,
    (System_Int32_array **)individuality,
    v124,
    v125,
    v126,
    v127,
    v128,
    v129);
  this->fields.flgEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)userSvt, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = BattleUserServantData__getBattleSvtId(userSvt, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_295;
  v131 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     Instance,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = v131;
  sub_B2C2F8(
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
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  v139 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v140);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(this->fields.limitcount, 0LL);
  if ( !v139 )
    goto LABEL_295;
  if ( !ServantLimitMaster__TryGetEntity(v139, &this->fields.svtlimitent, SvtId, Instance, 0LL) )
  {
    v142 = ServantLimitMaster__GetEntity(v139, 100100, 0, 0LL);
    this->fields.svtlimitent = v142;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.svtlimitent,
      (System_Int32_array **)v142,
      v143,
      v144,
      v145,
      v146,
      v147,
      v148);
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  object = (Il2CppObject *)v66;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v149 = this->fields.svtdata;
  if ( !v149 )
    goto LABEL_295;
  v150 = (ServantLimitAddMaster_o *)Instance;
  v152 = *(_QWORD *)&v149->fields.id.fields.currentCryptoKey;
  v151 = *(_QWORD *)&v149->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v464.fields.currentCryptoKey = v152;
  *(_QWORD *)&v464.fields.fakeValue = v151;
  v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v464, 0LL);
  Instance = BattleServantData__getDispLimitCount(this, 1, v154);
  if ( !v150 )
    goto LABEL_295;
  ServantLimitAddMaster__TryGetEntity(v150, &this->fields.svtlimitaddent, v153, Instance, 0LL);
  v156 = BattleServantData__getSvtId(this, v155);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v157);
  if ( !ServantLimitMaster__TryGetEntity(v139, &this->fields.svtlimitDispent, v156, DispLimitCount, 0LL) )
  {
    if ( this->fields.svtlimitaddent )
    {
      Instance = BattleServantData__getSvtId(this, v159);
      svtlimitaddent = this->fields.svtlimitaddent;
      if ( !svtlimitaddent )
        goto LABEL_295;
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v162 = Instance;
      v163 = v139;
    }
    else
    {
      v162 = 100100;
      v163 = v139;
      battleCharaLimitCount = 0;
    }
    v164 = ServantLimitMaster__GetEntity(v163, v162, battleCharaLimitCount, 0LL);
    this->fields.svtlimitDispent = v164;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.svtlimitDispent,
      (System_Int32_array **)v164,
      v165,
      v166,
      v167,
      v168,
      v169,
      v170);
  }
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfo, this->fields.beforeUserSvtId, 0LL);
  Instance = (__int64)BattleUserServantData__getBattleEquipTargetList(userSvt, 0LL);
  v172 = Instance;
  if ( this->fields.shiftNpcId >= 1 && UserServantFromID && this->fields.beforeUserSvtId >= 1 )
  {
    Instance = (__int64)BattleUserServantData__getBattleEquipTargetList(UserServantFromID, 0LL);
    v172 = Instance;
  }
  v454 = userSvt;
  if ( !v172 )
    goto LABEL_295;
  v173 = (struct BattleUserServantData_array *)sub_B2C374(
                                                 BattleUserServantData___TypeInfo,
                                                 *(unsigned int *)(v172 + 24));
  this->fields.equipList = v173;
  p_equipList = &this->fields.equipList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.equipList,
    (System_Int32_array **)v173,
    v174,
    v175,
    v176,
    v177,
    v178,
    v179);
  equipList = this->fields.equipList;
  this->fields.equiphp = 0;
  this->fields.equipatk = 0;
  if ( !equipList )
    goto LABEL_295;
  p_max_length = &equipList->max_length;
  if ( (int)equipList->max_length >= 1 )
  {
    v188 = 0LL;
    while ( 1 )
    {
      if ( v188 >= *(unsigned int *)(v172 + 24) )
        goto LABEL_296;
      Instance = (__int64)BattleInfoData__getEquipFromID(battleInfo, *(_QWORD *)(v172 + 8 * v188 + 32), 0LL);
      v195 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B2C41C(Instance, equipList->obj.klass->_1.element_class);
        if ( !Instance )
          break;
      }
      if ( v188 >= *p_max_length )
        goto LABEL_296;
      v196 = &equipList->obj.klass + v188;
      v196[4] = (Il2CppClass *)v195;
      sub_B2C2F8((BattleServantConfConponent_o *)(v196 + 4), v195, v189, v190, v191, v192, v193, v194);
      equipList = *p_equipList;
      if ( !*p_equipList )
        goto LABEL_295;
      if ( v188 >= equipList->max_length )
        goto LABEL_296;
      v197 = &equipList->obj.klass + v188;
      v200 = v197[4];
      v198 = (__int64 *)(v197 + 4);
      v199 = v200;
      if ( v200 )
      {
        this->fields.equipatk += v199->_2.thread_static_fields_offset;
        if ( v188 >= equipList->max_length )
          goto LABEL_296;
        v201 = *v198;
        if ( !v201 )
          goto LABEL_295;
        this->fields.equiphp += *(_DWORD *)(v201 + 268);
      }
      p_max_length = &equipList->max_length;
      if ( (__int64)++v188 >= (int)equipList->max_length )
        goto LABEL_59;
    }
    v444 = sub_B2C454();
LABEL_297:
    sub_B2C400(v444, 0LL);
  }
LABEL_59:
  maxhp = this->fields.maxhp;
  equiphp = this->fields.equiphp;
  p_userCommandCodeIds = &this->fields.userCommandCodeIds;
  this->fields.atk += this->fields.equipatk;
  this->fields.maxhp = equiphp + maxhp;
  userCommandCodeIds = v454->fields.userCommandCodeIds;
  this->fields.userCommandCodeIds = userCommandCodeIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeIds,
    (System_Int32_array **)userCommandCodeIds,
    v180,
    v181,
    v182,
    v183,
    v184,
    v185);
  if ( this->fields.shiftNpcId >= 1 && UserServantFromID && this->fields.beforeUserSvtId >= 1 )
  {
    v212 = (System_Int32_array **)UserServantFromID->fields.userCommandCodeIds;
    *p_userCommandCodeIds = (struct System_Int64_array *)v212;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.userCommandCodeIds,
      v212,
      v206,
      v207,
      v208,
      v209,
      v210,
      v211);
  }
  v448 = UserServantFromID;
  eventIda = eventId;
  v213 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CommandCodeInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v213,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CommandCodeInfo___ctor__);
  p_commandCodeList_k__BackingField = &this->fields._commandCodeList_k__BackingField;
  this->fields._commandCodeList_k__BackingField = (struct System_Collections_Generic_List_CommandCodeInfo__o *)v213;
  sub_B2C2F8(
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
    v227 = 0LL;
    do
    {
      v228 = sub_B2C42C(BattleServantData___c__DisplayClass293_1_TypeInfo);
      BattleServantData___c__DisplayClass293_1___ctor((BattleServantData___c__DisplayClass293_1_o *)v228, 0LL);
      if ( v227 >= userCommandCode->max_length )
        goto LABEL_296;
      if ( !v228 )
        goto LABEL_295;
      v235 = (System_Int32_array **)userCommandCode->m_Items[v227];
      *(_QWORD *)(v228 + 16) = v235;
      sub_B2C2F8((BattleServantConfConponent_o *)(v228 + 16), v235, v229, v230, v231, v232, v233, v234);
      v236 = *p_userCommandCodeIds;
      v237 = (System_Func_long__bool__o *)sub_B2C42C(System_Func_long__bool__TypeInfo);
      System_Func_long__bool____ctor(
        v237,
        (Il2CppObject *)v228,
        Method_BattleServantData___c__DisplayClass293_1__setBaseServantData_b__0__,
        (const MethodInfo_270F374 *)Method_System_Func_long__bool___ctor__);
      if ( BasicHelper__Any_long_(
             v236,
             (System_Func_T__bool__o *)v237,
             (const MethodInfo_1726608 *)Method_BasicHelper_Any_long___) )
      {
        Instance = (__int64)*p_commandCodeList_k__BackingField;
        if ( !*p_commandCodeList_k__BackingField )
          goto LABEL_295;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v228 + 16),
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CommandCodeInfo__Add__);
      }
    }
    while ( (__int64)++v227 < (int)userCommandCode->max_length );
  }
  if ( !this->fields.commandAssistIds )
  {
    p_commandAssistIds = &this->fields.commandAssistIds;
    v239 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 5LL);
    this->fields.commandAssistIds = v239;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commandAssistIds,
      (System_Int32_array **)v239,
      v240,
      v241,
      v242,
      v243,
      v244,
      v245);
    if ( commandAssistDataList )
    {
      v246 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_commandAssistData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v246,
        object,
        Method_BattleServantData___c__DisplayClass293_0__setBaseServantData_b__1__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_commandAssistData___ctor__);
      Instance = (__int64)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                            (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)commandAssistDataList,
                            (System_Predicate_T__o *)v246,
                            (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_commandAssistData__FindAll__);
      v247 = *p_commandAssistIds;
      if ( !*p_commandAssistIds )
        goto LABEL_295;
      v248 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance;
      v249 = 0;
      v250 = 0LL;
      while ( (__int64)v250 < (int)v247->max_length )
      {
        if ( v248 )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v458,
            v248,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__);
          v461 = *(System_Collections_Generic_List_Enumerator_T__o *)v458;
          while ( 1 )
          {
            v251 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                     &v461,
                     (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__);
            if ( !v251 )
              break;
            if ( !v461.fields.current )
              sub_B2C434(v251, v252);
            if ( v250 == LODWORD(v461.fields.current[2].klass) )
            {
              v253 = *p_commandAssistIds;
              if ( !*p_commandAssistIds )
                sub_B2C434(v251, v252);
              if ( v250 >= v253->max_length )
              {
                v254 = sub_B2C460(v251);
                sub_B2C400(v254, 0LL);
              }
              v253->m_Items[v250 + 1] = (int32_t)v461.fields.current[1].klass;
            }
          }
          v458[v249 + 8] = 1185;
          v249 = ++v459;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v461,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__);
          if ( v249 )
          {
            v255 = v249 - 1;
            if ( v458[v249 + 7] == 1185 )
            {
              --v249;
              v459 = v255;
            }
          }
          v247 = *p_commandAssistIds;
          ++v250;
          if ( *p_commandAssistIds )
            continue;
        }
        goto LABEL_295;
      }
    }
  }
  commandCardParam = v454->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)commandCardParam,
    v221,
    v222,
    v223,
    v224,
    v225,
    v226);
  if ( this->fields.shiftNpcId >= 1 && v448 && this->fields.beforeUserSvtId >= 1 )
  {
    v263 = v448->fields.commandCardParam;
    this->fields.commandCardParam = v263;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.commandCardParam,
      (System_Int32_array **)v263,
      v257,
      v258,
      v259,
      v260,
      v261,
      v262);
  }
  BattleSkillIdList = (System_Int32_array **)BattleUserServantData__getBattleSkillIdList(v454, 0LL);
  object[1].monitor = BattleSkillIdList;
  sub_B2C2F8((BattleServantConfConponent_o *)&object[1].monitor, BattleSkillIdList, v265, v266, v267, v268, v269, v270);
  v271 = (System_Int32_array **)((__int64 (__fastcall *)(BattleUserServantData_o *, void *))v454->klass->vtable._6_getSkillLevelList.method)(
                                  v454,
                                  v454->klass[1]._1.image);
  object[2].klass = (Il2CppClass *)v271;
  sub_B2C2F8((BattleServantConfConponent_o *)&object[2], v271, v272, v273, v274, v275, v276, v277);
  v278 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v278,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( isContinue )
  {
    skillInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.skillInfoList;
    v278 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v278,
      skillInfoList,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___67301096);
  }
  Instance = (__int64)this->fields.skillInfoList;
  if ( !Instance )
    goto LABEL_295;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
  v280 = sub_B2C42C(BattleServantData___c__DisplayClass293_2_TypeInfo);
  BattleServantData___c__DisplayClass293_2___ctor((BattleServantData___c__DisplayClass293_2_o *)v280, 0LL);
  if ( !v280 )
    goto LABEL_295;
  *(_QWORD *)(v280 + 24) = object;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v280 + 24),
    (System_Int32_array **)object,
    v281,
    v282,
    v283,
    v284,
    v285,
    v286);
  v287 = *(_QWORD *)(v280 + 24);
  *(_DWORD *)(v280 + 16) = 0;
  if ( !v287 )
    goto LABEL_295;
  v288 = 0;
  while ( 1 )
  {
    v289 = *(_QWORD *)(v287 + 24);
    if ( !v289 )
      goto LABEL_295;
    if ( v288 >= *(_DWORD *)(v289 + 24) )
      break;
    v290 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v290,
      (Il2CppObject *)v280,
      Method_BattleServantData___c__DisplayClass293_2__setBaseServantData_b__2__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    if ( v278 )
    {
      Instance = (__int64)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v278,
                            (System_Predicate_T__o *)v290,
                            (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
      v291 = *(_QWORD *)(v280 + 24);
      if ( v291 )
      {
        v292 = *(_QWORD *)(v291 + 24);
        if ( v292 )
        {
          v293 = *(int *)(v280 + 16);
          if ( (unsigned int)v293 >= *(_DWORD *)(v292 + 24) )
            goto LABEL_296;
          v294 = *(_QWORD *)(v291 + 32);
          if ( v294 )
          {
            if ( (unsigned int)v293 >= *(_DWORD *)(v294 + 24) )
              goto LABEL_296;
            Instance = (__int64)BattleServantData__addSkillInfo(
                                  this,
                                  11,
                                  v293,
                                  *(_DWORD *)(v292 + 4 * v293 + 32),
                                  *(_DWORD *)(v294 + 4 * v293 + 32),
                                  -1LL,
                                  -1,
                                  (BattleSkillInfoData_o *)Instance,
                                  v445);
            v287 = *(_QWORD *)(v280 + 24);
            v288 = *(_DWORD *)(v280 + 16) + 1;
            *(_DWORD *)(v280 + 16) = v288;
            if ( v287 )
              continue;
          }
        }
      }
    }
    goto LABEL_295;
  }
  skillIndex[0] = 0;
  classPassive = v454->fields.classPassive;
  if ( !classPassive )
  {
    if ( !*p_svtdata )
      goto LABEL_295;
    classPassive = *(struct System_Int32_array **)&(*p_svtdata)[10].fields.fakeValue;
    if ( !classPassive )
      goto LABEL_295;
  }
  v296 = *(_QWORD *)&classPassive->max_length;
  if ( (int)v296 >= 1 )
  {
    v297 = 0LL;
    while ( v297 < (unsigned int)v296 )
    {
      Instance = (__int64)BattleServantData__addSkillInfo(
                            this,
                            10,
                            v297,
                            classPassive->m_Items[v297 + 1],
                            1,
                            -1LL,
                            -1,
                            0LL,
                            v445);
      LODWORD(v296) = classPassive->max_length;
      if ( (__int64)++v297 >= (int)v296 )
        goto LABEL_123;
    }
    goto LABEL_296;
  }
  LODWORD(v297) = 0;
LABEL_123:
  v298 = v454;
  skillIndex[0] = v297;
  Instance = (__int64)BattleUserServantData__GetAddPassiveSkillArray(v454, 0LL);
  if ( !Instance )
    goto LABEL_295;
  v299 = *(_QWORD *)(Instance + 24);
  v300 = Instance;
  if ( (int)v299 >= 1 )
  {
    v301 = 0LL;
    do
    {
      if ( v301 >= (unsigned int)v299 )
        goto LABEL_296;
      Instance = (__int64)BattleServantData__addSkillInfo(
                            this,
                            10,
                            (int)v297 + (int)v301,
                            *(_DWORD *)(v300 + 32 + 8 * v301),
                            *(_DWORD *)(v300 + 32 + 8 * v301 + 4),
                            -1LL,
                            -1,
                            0LL,
                            v445);
      LODWORD(v299) = *(_DWORD *)(v300 + 24);
      ++v301;
    }
    while ( (__int64)v301 < (int)v299 );
    LODWORD(v297) = v297 + v301;
    v298 = v454;
  }
  skillIndex[0] = v297;
  Instance = (__int64)BattleUserServantData__GetAppendPassiveSkillArray(v298, 0LL);
  if ( Instance )
  {
    v303 = *(_QWORD *)(Instance + 24);
    v304 = Instance;
    if ( (int)v303 >= 1 )
    {
      v305 = 0LL;
      do
      {
        if ( v305 >= (unsigned int)v303 )
          goto LABEL_296;
        v306 = *(_QWORD *)(v304 + 32 + 8 * v305);
        Instance = Follower__IsNpc(this->fields.followerType, 0LL);
        if ( HIDWORD(v306) || (Instance & 1) == 0 )
        {
          Instance = (__int64)BattleServantData__addSkillInfo(this, 10, v297, v306, SHIDWORD(v306), -1LL, -1, 0LL, v445);
          LODWORD(v297) = v297 + 1;
        }
        LODWORD(v303) = *(_DWORD *)(v304 + 24);
        ++v305;
      }
      while ( (__int64)v305 < (int)v303 );
      v298 = v454;
      skillIndex[0] = v297;
    }
  }
  BattleServantData__AddClassBoardSkillInfo(this, v298, skillIndex, v302);
  Instance = (__int64)v451;
  if ( !v451 )
    goto LABEL_295;
  Instance = ((__int64 (__fastcall *)(BaseBattleServantEvent_o *, __int64, BattleServantData_o *, Il2CppMethodPointer))v451->klass->vtable._4_IsApplyPassive.method)(
               v451,
               12LL,
               this,
               v451->klass->vtable._5_AddSpecialPassive.methodPtr);
  v307 = this->fields.equipList;
  if ( !v307 )
    goto LABEL_295;
  v308 = Instance;
  v309 = 0LL;
  v310 = 0;
  objecta = Instance;
  while ( 1 )
  {
    max_length = v307->max_length;
    if ( (v308 & ((__int64)v309 < (int)max_length)) == 0 )
      break;
    if ( v309 >= max_length )
      goto LABEL_296;
    Instance = (__int64)v307->m_Items[v309];
    if ( Instance )
    {
      Instance = (__int64)BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)Instance, 0LL);
      v312 = *p_equipList;
      if ( !*p_equipList )
        goto LABEL_295;
      if ( v309 >= v312->max_length )
        goto LABEL_296;
      v313 = Instance;
      Instance = (__int64)v312->m_Items[v309];
      if ( !Instance )
        goto LABEL_295;
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 408LL))(
                   Instance,
                   *(_QWORD *)(*(_QWORD *)Instance + 416LL));
      if ( !v313 )
        goto LABEL_295;
      v314 = *(_QWORD *)(v313 + 24);
      if ( (int)v314 >= 1 )
      {
        v315 = Instance;
        v316 = 0LL;
        v317 = v310;
        v318 = v310;
        v319 = Instance + 32;
        do
        {
          if ( v316 >= (unsigned int)v314 )
            goto LABEL_296;
          if ( !v315 )
            goto LABEL_295;
          if ( v316 >= *(unsigned int *)(v315 + 24) )
            goto LABEL_296;
          Instance = (__int64)BattleServantData__addSkillInfo(
                                this,
                                12,
                                v318 + (int)v316,
                                *(_DWORD *)(v313 + 32 + 4 * v316),
                                *(_DWORD *)(v319 + 4 * v316),
                                -1LL,
                                -1,
                                0LL,
                                v445);
          LODWORD(v314) = *(_DWORD *)(v313 + 24);
          ++v316;
        }
        while ( (__int64)v316 < (int)v314 );
        v308 = objecta;
        v310 = v317 + v316;
      }
      v307 = *p_equipList;
    }
    ++v309;
    if ( !v307 )
      goto LABEL_295;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v320 = *p_commandCodeList_k__BackingField;
  if ( !*p_commandCodeList_k__BackingField )
    goto LABEL_295;
  v321 = (CommandCodeSkillMaster_o *)Instance;
  v322 = 0LL;
  v323 = 0;
  while ( (__int64)v322 < v320->fields._size )
  {
    if ( v322 >= (unsigned int)v320->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( v320->fields._items->m_Items[v322] )
    {
      v324 = *p_commandCodeList_k__BackingField;
      if ( !*p_commandCodeList_k__BackingField )
        goto LABEL_295;
      if ( v322 >= (unsigned int)v324->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v325 = v324->fields._items->m_Items[v322];
      if ( !v325 )
        goto LABEL_295;
      if ( !v321 )
        goto LABEL_295;
      Instance = (__int64)CommandCodeSkillMaster__getCommandCodeSkillList(v321, v325->fields.commandCodeId, 0LL);
      if ( !Instance )
        goto LABEL_295;
      v326 = *(_DWORD *)(Instance + 24);
      v327 = Instance;
      if ( v326 >= 1 )
      {
        for ( i = 0; i < v326; ++i )
        {
          if ( i >= (unsigned int)v326 )
            goto LABEL_296;
          v329 = *(_QWORD *)(v327 + 8LL * i + 32);
          if ( !v329 )
            goto LABEL_295;
          v330 = *p_commandCodeList_k__BackingField;
          if ( !*p_commandCodeList_k__BackingField )
            goto LABEL_295;
          v331 = *(_DWORD *)(v329 + 28);
          if ( v322 >= (unsigned int)v330->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v332 = v330->fields._items->m_Items[v322];
          if ( !v332 )
            goto LABEL_295;
          Instance = (__int64)BattleServantData__addSkillInfo(
                                this,
                                22,
                                v323 + i,
                                v331,
                                1,
                                v332->fields.id,
                                -1,
                                0LL,
                                v445);
          v326 = *(_DWORD *)(v327 + 24);
        }
        v323 += i;
      }
    }
    v320 = *p_commandCodeList_k__BackingField;
    ++v322;
    if ( !*p_commandCodeList_k__BackingField )
      goto LABEL_295;
  }
  ((void (__fastcall *)(BaseBattleServantEvent_o *, BattleServantData_o *, Il2CppMethodPointer))v451->klass->vtable._5_AddSpecialPassive.method)(
    v451,
    this,
    v451->klass->vtable._6_AddPartySkill.methodPtr);
  ((void (__fastcall *)(BaseBattleServantEvent_o *, BattleServantData_o *, BattleInfoData_o *, void *))v451->klass->vtable._6_AddPartySkill.method)(
    v451,
    this,
    battleInfo,
    v451->klass[1]._1.image);
  BattleServantData__UpdateTreasureDevice(this, v454->fields.treasureDeviceId, v454->fields.treasureDeviceLv, v333);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6536/*"FULL_TD_POINT"*/, 0LL);
  nplineCount = this->fields.nplineCount;
  this->fields.lineMaxNp = Value;
  if ( nplineCount >= 1 )
  {
    v336 = nplineCount * Value;
    if ( v336 < this->fields.np )
      this->fields.np = v336;
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_295;
  TDErrorVoiceSeArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetTDErrorVoiceSeArray(
                                                                               (BattleDeckServantData_o *)Instance,
                                                                               0LL);
  v344 = TDErrorVoiceSeArray
       ? (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                               TDErrorVoiceSeArray,
                                                               (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_string___)
       : 0LL;
  this->fields.tdErrorStatusVoiceSeList = v344;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tdErrorStatusVoiceSeList,
    (System_Int32_array **)v344,
    v338,
    v339,
    v340,
    v341,
    v342,
    v343);
  v345 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v345, 0LL);
  this->fields.commandtable = v345;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandtable,
    (System_Int32_array **)v345,
    v346,
    v347,
    v348,
    v349,
    v350,
    v351);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  v352 = (ServantCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v353 = sub_B2C374(int___TypeInfo, 6LL);
  v463.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304((System_Array_o *)v353, v463, 0LL);
  if ( !v353 )
    goto LABEL_295;
  if ( *(int *)(v353 + 24) >= 1 )
  {
    v354 = 0LL;
    while ( 1 )
    {
      v356 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v355 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v465.fields.currentCryptoKey = v356;
      *(_QWORD *)&v465.fields.fakeValue = v355;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v465, 0LL);
      if ( v354 >= *(unsigned int *)(v353 + 24) )
        break;
      if ( !v352 )
        goto LABEL_295;
      Instance = ServantCardMaster__TryGetEntity(v352, &entity, Instance, *(_DWORD *)(v353 + 32 + 4 * v354), 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_295;
        commandtable = this->fields.commandtable;
        v458[0] = entity->fields.cardId;
        v358 = j_il2cpp_value_box_0(int_TypeInfo, v458);
        v360 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v359 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v361 = v358;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v466.fields.currentCryptoKey = v360;
        *(_QWORD *)&v466.fields.fakeValue = v359;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v466, 0LL);
        if ( !entity )
          goto LABEL_295;
        Instance = (__int64)ServantCardMaster__GetEntity(v352, Instance, entity->fields.cardId, 0LL);
        if ( !commandtable )
          goto LABEL_295;
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))commandtable->klass->vtable._30_set_Item.method)(
          commandtable,
          v361,
          Instance,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
      if ( (__int64)++v354 >= *(int *)(v353 + 24) )
        goto LABEL_208;
    }
LABEL_296:
    v444 = sub_B2C460(Instance);
    goto LABEL_297;
  }
LABEL_208:
  Instance = (__int64)*p_svtdata;
  if ( !*p_svtdata )
    goto LABEL_295;
  Instance = ServantEntity__GetDefaultDeadType((ServantEntity_o *)Instance, 0, 0LL);
  v362 = this->fields.deckSvt;
  this->fields.deadtype = Instance;
  if ( !v362 )
    goto LABEL_295;
  if ( BattleDeckServantData__isEscape(v362, 0LL) )
  {
    v363 = v454;
    KillType = 1;
  }
  else
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_295;
    v363 = v454;
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
  v365 = this->fields.deckSvt;
  this->fields.isAppear = Instance & 1;
  if ( !v365 )
    goto LABEL_295;
  isRaid = BattleDeckServantData__isRaid(v365, 0LL);
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.statestring,
      (System_Int32_array **)StartRaidState,
      v369,
      v370,
      v371,
      v372,
      v373,
      v374);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_295;
  Instance = BattleDeckServantData__isAddition((BattleDeckServantData_o *)Instance, 0LL);
  v375 = this->fields.deckSvt;
  this->fields.isAddition = Instance & 1;
  if ( !v375 )
    goto LABEL_295;
  Instance = BattleDeckServantData__isLeader(v375, 0LL);
  v376 = this->fields.deckSvt;
  this->fields.isLeader = Instance & 1;
  if ( !v376 )
    goto LABEL_295;
  isSuperBoss = BattleDeckServantData__isSuperBoss(v376, 0LL);
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
  v380 = this->fields.deckSvt;
  v382 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v381 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v467.fields.currentCryptoKey = v382;
  *(_QWORD *)&v467.fields.fakeValue = v381;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v467, 0LL);
  if ( !v380 )
    goto LABEL_295;
  this->fields.overwriteSvtVoiceId = BattleDeckServantData__getOverwriteSvtVoiceId(v380, Instance, 0LL);
  this->fields.battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                               v363->fields.battleVoice,
                               0LL);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v363->fields.battleVoice, 0LL)
    && !this->fields.overwriteSvtVoiceId )
  {
    v384 = *(_QWORD *)&v363->fields.battleVoice.fields.currentCryptoKey;
    v383 = *(_QWORD *)&v363->fields.battleVoice.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v468.fields.currentCryptoKey = v384;
    *(_QWORD *)&v468.fields.fakeValue = v383;
    this->fields.overwriteSvtVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v468, 0LL);
  }
  v386 = *(_QWORD *)&v363->fields.svtId.fields.currentCryptoKey;
  v385 = *(_QWORD *)&v363->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v469.fields.currentCryptoKey = v386;
  *(_QWORD *)&v469.fields.fakeValue = v385;
  v387 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v469, 0LL);
  BattleServantOverwriteName = BattleServantData__getBattleServantOverwriteName(this, v387, v388);
  this->fields.svtOverwriteBattleName = BattleServantOverwriteName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName,
    (System_Int32_array **)BattleServantOverwriteName,
    v390,
    v391,
    v392,
    v393,
    v394,
    v395);
  Instance = (__int64)this->fields.deckSvt;
  if ( !Instance )
    goto LABEL_295;
  Instance = BattleDeckServantData__getScale((BattleDeckServantData_o *)Instance, 0LL);
  v396 = this->fields.deckSvt;
  this->fields.actorScale = Instance;
  if ( !v396 )
    goto LABEL_295;
  Instance = (__int64)this->fields.aiState;
  this->fields.roleType = v396->fields.roleType;
  this->fields.maxActNum = v363->fields.maxActNum;
  this->fields._minActNum_k__BackingField = v363->fields.minActNum;
  this->fields.aiId = v363->fields.aiId;
  this->fields.actPriority = v363->fields.actPriority;
  if ( !Instance )
    goto LABEL_295;
  AiState__Initialize((AiState_o *)Instance, v363->fields.aiId, 0LL);
  v397 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v363->fields.svtId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !*p_svtdata )
    goto LABEL_295;
  v398 = (ServantChangeMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064((*p_svtdata)[1], 0LL);
  if ( !v398 )
    goto LABEL_295;
  v399 = ServantChangeMaster__TrueNameEntity(v398, Instance, 0LL);
  if ( v399 )
    v397 = v399->fields.svtId;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  v400 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v400 )
    goto LABEL_295;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v400, Instance, v397, 0LL);
  if ( !Instance )
    goto LABEL_295;
  v401 = Instance;
  this->fields.svtCommonFlag = *(_DWORD *)(Instance + 76);
  v403 = *(_QWORD *)(Instance + 24);
  v402 = *(_QWORD *)(Instance + 32);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v470.fields.currentCryptoKey = v403;
  *(_QWORD *)&v470.fields.fakeValue = v402;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v470, 0LL);
  v410 = this->fields.deckSvt;
  this->fields._servantCollectionId_k__BackingField = Instance;
  if ( !v410 )
    goto LABEL_295;
  if ( !v410->fields.isFollowerSvt )
  {
    v411 = Instance;
    v412 = *(_DWORD *)(v401 + 76);
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    this->fields.svtCommonFlag = BattleData__GetSavedServantCommonFlag(v411, v412, 0LL);
  }
  if ( !this->fields.isEnemy && !this->fields.followerType )
  {
    v418 = *(struct System_Int32_array **)(v401 + 136);
    goto LABEL_293;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_295;
  v413 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)Instance,
           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___);
  v415 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v414 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v416 = (UserNpcSvtRecordMaster_o *)v413;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v471.fields.currentCryptoKey = v415;
  *(_QWORD *)&v471.fields.fakeValue = v414;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v471, 0LL);
  if ( !v416 )
LABEL_295:
    sub_B2C434(Instance, v68);
  TdPlayed = (System_Collections_Generic_IEnumerable_TSource__o *)UserNpcSvtRecordMaster__GetTdPlayed(
                                                                    v416,
                                                                    Instance,
                                                                    0LL);
  v418 = *(struct System_Int32_array **)(v401 + 136);
  if ( !TdPlayed )
  {
LABEL_293:
    p_tdplayed = &this->fields.tdplayed;
    this->fields.tdplayed = v418;
    goto LABEL_294;
  }
  v419 = (struct System_Int32_array *)TdPlayed;
  if ( v418 )
  {
    v420 = System_Linq_Enumerable__Concat_int_(
             TdPlayed,
             (System_Collections_Generic_IEnumerable_TSource__o *)v418,
             (const MethodInfo_17423A4 *)Method_System_Linq_Enumerable_Concat_int___);
    v418 = System_Linq_Enumerable__ToArray_int_(
             v420,
             (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    goto LABEL_293;
  }
  p_tdplayed = &this->fields.tdplayed;
  this->fields.tdplayed = v419;
  v418 = v419;
LABEL_294:
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_tdplayed,
    (System_Int32_array **)v418,
    v404,
    v405,
    v406,
    v407,
    v408,
    v409);
  classBoardAddCommandSpells = v363->fields.classBoardAddCommandSpells;
  this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddCommandSpells,
    (System_Int32_array **)classBoardAddCommandSpells,
    v423,
    v424,
    v425,
    v426,
    v427,
    v428);
  classBoardAddPassiveSkills = v363->fields.classBoardAddPassiveSkills;
  this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddPassiveSkills,
    (System_Int32_array **)classBoardAddPassiveSkills,
    v430,
    v431,
    v432,
    v433,
    v434,
    v435);
  classBoardSquareIds = v363->fields.classBoardSquareIds;
  this->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._classBoardSquareIds_k__BackingField,
    (System_Int32_array **)classBoardSquareIds,
    v437,
    v438,
    v439,
    v440,
    v441,
    v442);
  BattleServantData__InitCommonAddIndividuality(this, v443);
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
  __int64 v8; // x1
  int32_t Value; // w0
  BattleBuffData_o *buffData; // x22
  int32_t uniqueId; // w23
  int32_t v12; // w21
  struct System_Int32_array *changeSvtList; // x8
  __int64 shiftDeckIndex; // x9
  char *v15; // x8
  int32_t v16; // w9
  struct System_Int32_array *shiftDeckList; // x8
  il2cpp_array_size_t v18; // w9
  BattleDeckServantData_o *v19; // x21
  BattleEntity_o *battle_ent; // x20
  int32_t Int; // w0
  const MethodInfo *v22; // x6
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  unsigned int MaxHp; // w0
  __int64 v26; // x1
  __int64 v27; // x0

  if ( (byte_4185BAA & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, data);
    byte_4185BAA = 1;
  }
  BattleServantData__OverwriteShiftDeckIndex(this, vals, (const MethodInfo *)vals);
  if ( !vals )
    goto LABEL_24;
  Value = DataVals__GetValue(vals, 0LL);
  buffData = this->fields.buffData;
  uniqueId = this->fields.uniqueId;
  v12 = Value;
  battle_info = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !buffData )
    goto LABEL_24;
  BattleBuffData__InitializeShift(buffData, uniqueId, battle_info, 0LL);
  this->fields.changeSvtIndex = v12;
  if ( v12 )
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
          v15 = (char *)changeSvtList + 4 * shiftDeckIndex;
LABEL_17:
          battle_info = (System_Int32_array *)BattleInfoData__getShiftServantData(
                                                (BattleInfoData_o *)battle_info,
                                                *((_DWORD *)v15 + 8),
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
  v16 = this->fields.shiftDeckIndex;
  battle_info = (System_Int32_array *)data->fields.battle_info;
  if ( v16 )
  {
    shiftDeckList = this->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_24;
    v18 = v16 - 1;
    if ( v18 < shiftDeckList->max_length )
    {
      if ( !battle_info )
        goto LABEL_24;
      v15 = (char *)shiftDeckList + 4 * (int)v18;
      goto LABEL_17;
    }
LABEL_25:
    v27 = sub_B2C460(battle_info);
    sub_B2C400(v27, 0LL);
  }
  if ( !battle_info )
LABEL_24:
    sub_B2C434(battle_info, v8);
  battle_info = (System_Int32_array *)BattleInfoData__getDefaultServantData(
                                        (BattleInfoData_o *)battle_info,
                                        this->fields.uniqueId,
                                        0LL);
LABEL_18:
  v19 = (BattleDeckServantData_o *)battle_info;
  if ( !battle_info )
    goto LABEL_24;
  LODWORD(battle_info->bounds) = this->fields.index + 1;
  battle_info->m_Items[9] = this->fields.uniqueId;
  battle_ent = data->fields.battle_ent;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v19, battle_ent, Int, 0LL, 0, v22);
  LODWORD(battle_ent) = BattleServantData__getMaxHp(this, v23);
  if ( (int)battle_ent < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                           this,
                           this->klass->vtable._10_set_hp.methodPtr) )
  {
    MaxHp = BattleServantData__getMaxHp(this, v24);
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
      this,
      MaxHp,
      this->klass->vtable._11_get_reducedhp.methodPtr);
    v26 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
            this,
            this->klass->vtable._10_set_hp.methodPtr);
    ((void (__fastcall *)(BattleServantData_o *, __int64, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
      this,
      v26,
      this->klass->vtable._15_get_IsAiNpc.methodPtr);
  }
}


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
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  int32_t lineMaxNp; // w1
  System_Int32_array **buffMst; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleBuffData_o *v24; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x24
  int v26; // w8
  _DWORD *v27; // x22
  unsigned int i; // w23
  char *v29; // x24
  char *v30; // x24
  void *v31; // t1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x21
  BattleDeckServantData_o *DeckServantData; // x0
  BattleEntity_o *battle_ent; // x25
  BattleDeckServantData_o *v36; // x26
  int32_t Int; // w0
  const MethodInfo *v38; // x6
  const MethodInfo *v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x5
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  unsigned int MaxHp; // w0
  unsigned int v56; // w0
  const MethodInfo *v57; // x2
  __int64 v58; // x0

  if ( (byte_4185B1B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, data);
    sub_B2C35C(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v9);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass362_0__setContinue_b__0__, v10);
    sub_B2C35C(&BattleServantData___c__DisplayClass362_0_TypeInfo, v11);
    byte_4185B1B = 1;
  }
  v12 = sub_B2C42C(BattleServantData___c__DisplayClass362_0_TypeInfo);
  BattleServantData___c__DisplayClass362_0___ctor((BattleServantData___c__DisplayClass362_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_27;
  *(_BYTE *)(v12 + 16) = isDeadContinue;
  lineMaxNp = this->fields.lineMaxNp;
  this->fields.status = 0;
  this->fields.np = 0;
  BattleServantData__addNp(this, lineMaxNp, 1, v15);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_27;
  buffMst = (System_Int32_array **)BattleBuffData__get_buffMst((BattleBuffData_o *)buffData, 0LL);
  *(_QWORD *)(v12 + 24) = buffMst;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 24), buffMst, v18, v19, v20, v21, v22, v23);
  v24 = this->fields.buffData;
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_BattleServantData___c__DisplayClass362_0__setContinue_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  if ( !v24 )
    goto LABEL_27;
  BattleBuffData__RemoveActiveBuffWithCondition(v24, (System_Func_BattleBuffData_BuffData__bool__o *)v25, 0LL);
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
  v26 = *((_DWORD *)buffData + 6);
  v27 = buffData;
  if ( v26 >= 1 )
  {
    for ( i = 0; (int)i < v26; ++i )
    {
      if ( i >= v26 )
      {
LABEL_28:
        v58 = sub_B2C460(buffData);
        sub_B2C400(v58, 0LL);
      }
      v29 = (char *)&v27[2 * i];
      v31 = (void *)*((_QWORD *)v29 + 4);
      v30 = v29 + 32;
      buffData = v31;
      if ( !v31 )
        goto LABEL_27;
      buffData = (void *)BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( ((unsigned __int8)buffData & 1) != 0 )
        goto LABEL_17;
      if ( i >= v27[6] )
        goto LABEL_28;
      buffData = *(void **)v30;
      if ( !*(_QWORD *)v30 )
        goto LABEL_27;
      buffData = (void *)BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( ((unsigned __int8)buffData & 1) != 0 )
      {
LABEL_17:
        if ( i >= v27[6] )
          goto LABEL_28;
        if ( !*(_QWORD *)v30 )
          goto LABEL_27;
        *(_DWORD *)(*(_QWORD *)v30 + 112LL) = 0;
      }
      v26 = v27[6];
    }
  }
  if ( !isResetTransform )
  {
    BattleServantData__ResetServantSelfSkill(this, v14);
    goto LABEL_26;
  }
  classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
  classBoardAddCommandSpells = this->fields.classBoardAddCommandSpells;
  this->fields.shiftNpcId = -1;
  this->fields.beforeUserSvtId = -1LL;
  if ( !data || (buffData = data->fields.battle_info) == 0LL )
LABEL_27:
    sub_B2C434(buffData, v14);
  DeckServantData = BattleInfoData__getDeckServantData((BattleInfoData_o *)buffData, this->fields.uniqueId, 0LL);
  battle_ent = data->fields.battle_ent;
  v36 = DeckServantData;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v36, battle_ent, Int, 0LL, 1, v38);
  this->fields.dressDispId = -1;
  *(_QWORD *)&this->fields.transformIndex = 0xFFFFFFFFLL;
  LODWORD(battle_ent) = BattleServantData__getMaxHp(this, v39);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)battle_ent,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    (unsigned int)battle_ent,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddPassiveSkills,
    (System_Int32_array **)classBoardAddPassiveSkills,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddCommandSpells,
    (System_Int32_array **)classBoardAddCommandSpells,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  BattleServantData__setTransformServant(this, data, -1, 0, 0, v52);
  BattleServantData__changeTransformServant(this, v53);
LABEL_26:
  this->fields.deckIndex = -1;
  MaxHp = BattleServantData__getMaxHp(this, v54);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v56 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v56,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  this->fields.isDeadAnime = 0;
  this->fields.isSilnetDead = 0;
  this->fields.IsVanishSkill = 0;
  BattleServantData__RemovePartAnimationSaveData(this, 0LL, v57);
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
    sub_B2C434(0LL, setHp);
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
    sub_B2C434(isSuperBoss, inDeckSvt);
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
        v25 = sub_B2C460(isSuperBoss);
        sub_B2C400(v25, 0LL);
      }
      v18 = BattleServantData__SetShiftDeckData(
              (BattleServantData_o *)isSuperBoss,
              battleInfo,
              *inDeckSvt,
              v17->m_Items[v13 + 1],
              v14);
      *inDeckSvt = v18;
      sub_B2C2F8((BattleServantConfConponent_o *)inDeckSvt, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
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
  __int64 v16; // x1
  AiState_o *aiState; // x0
  const MethodInfo *v18; // x1
  unsigned int v19; // w0
  __int64 InfoId; // x0
  __int64 v21; // x1
  BattleSkillInfoData_o *current; // x21
  struct System_Int32_array *skillinfoid_list; // x8
  __int64 v24; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v26; // x24
  int v27; // w25
  struct System_Int32_array *skillcharge_list; // x8
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_String_o *statestring; // x1
  int32_t lowLimitShift; // w8
  const MethodInfo *v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t tmpAppearanceId; // w8
  struct System_Int32_array *commandAssistIds; // x1
  BattleServantConfConponent_o *p_partAnimationSaveDict; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
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

  if ( (byte_4185AF5 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData_____,
      save);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v7);
    sub_B2C35C(&Method_System_Func_BattleServantData_PartAnimationSaveData__string___ctor__, v8);
    sub_B2C35C(
      &Method_System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData_____ctor__,
      v9);
    sub_B2C35C(&System_Func_BattleServantData_PartAnimationSaveData__string__TypeInfo, v10);
    sub_B2C35C(
      &System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____TypeInfo,
      v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v12);
    sub_B2C35C(&Method_BattleServantData___c__setSaveData_b__280_0__, v13);
    sub_B2C35C(&Method_BattleServantData___c__setSaveData_b__280_1__, v14);
    sub_B2C35C(&BattleServantData___c_TypeInfo, v15);
    byte_4185AF5 = 1;
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
  aiState = (AiState_o *)BattleServantData__get_AiStateManager(this, v18);
  if ( !aiState )
    goto LABEL_54;
  AiStateManager__SetSaveData((AiStateManager_o *)aiState, save->fields.aiStateManagerSave, 0LL);
  aiState = (AiState_o *)this->fields.buffData;
  if ( !aiState )
    goto LABEL_54;
  BattleBuffData__setSaveData((BattleBuffData_o *)aiState, save->fields.buffDataSave, 0LL);
  v19 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v19,
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
    sub_B2C434(aiState, v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aiState,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v86 = v85;
  while ( 1 )
  {
    InfoId = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v86,
               (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( (InfoId & 1) == 0 )
      break;
    current = (BattleSkillInfoData_o *)v86.fields.current;
    if ( !v86.fields.current )
      sub_B2C434(InfoId, v21);
    if ( !BYTE4(v86.fields.current[1].monitor) )
    {
      skillinfoid_list = save->fields.skillinfoid_list;
      if ( !skillinfoid_list )
LABEL_24:
        sub_B2C434(InfoId, v21);
      v24 = 8LL;
      while ( 1 )
      {
        max_length = skillinfoid_list->max_length;
        v26 = v24 - 8;
        if ( v24 - 8 >= (int)max_length )
          break;
        if ( v26 >= max_length )
        {
          v83 = sub_B2C460(InfoId);
          sub_B2C400(v83, 0LL);
        }
        v27 = *((_DWORD *)&skillinfoid_list->obj.klass + v24);
        InfoId = BattleSkillInfoData__getInfoId(current, 0LL);
        if ( v27 == (_DWORD)InfoId )
        {
          skillcharge_list = save->fields.skillcharge_list;
          if ( !skillcharge_list )
            sub_B2C434(InfoId, v21);
          if ( v26 >= skillcharge_list->max_length )
          {
            v84 = sub_B2C460(InfoId);
            sub_B2C400(v84, 0LL);
          }
          current->fields.chargeTurn = *((_DWORD *)&skillcharge_list->obj.klass + v24);
        }
        skillinfoid_list = save->fields.skillinfoid_list;
        ++v24;
        if ( !skillinfoid_list )
          goto LABEL_24;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v86,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  if ( (this->fields.deckIndex & 0x80000000) != 0 )
    this->fields.deckIndex = this->fields.index;
  this->fields.dressDispId = save->fields.dressDispId;
  this->fields.accumulationDamage = save->fields.accumulationDamage;
  statestring = save->fields.statestring;
  this->fields.statestring = statestring;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.statestring,
    (System_Int32_array **)statestring,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.shiftDeckIndex = save->fields.shiftDeckIndex;
  this->fields.changeSvtIndex = save->fields.changeSvtIndex;
  lowLimitShift = save->fields.lowLimitShift;
  this->fields.tmpAppearanceId = -1;
  this->fields.lowLimitShift = lowLimitShift;
  if ( BattleServantData__isChangeAppearance(this, v37) )
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandAssistIds,
    (System_Int32_array **)commandAssistIds,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  p_partAnimationSaveDict = (BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict;
  this->fields.partAnimationSaveDict = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict, 0LL, v47, v48, v49, v50, v51, v52);
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
      _9__280_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleServantData_PartAnimationSaveData__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__280_0,
        v57,
        Method_BattleServantData___c__setSaveData_b__280_0__,
        (const MethodInfo_2713350 *)Method_System_Func_BattleServantData_PartAnimationSaveData__string___ctor__);
      v58 = BattleServantData___c_TypeInfo->static_fields;
      v58->__9__280_0 = (struct System_Func_BattleServantData_PartAnimationSaveData__string__o *)_9__280_0;
      sub_B2C2F8(
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
      _9__280_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__280_1,
        v67,
        Method_BattleServantData___c__setSaveData_b__280_1__,
        (const MethodInfo_2713350 *)Method_System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData_____ctor__);
      v68 = BattleServantData___c_TypeInfo->static_fields;
      v68->__9__280_1 = (struct System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____o *)_9__280_1;
      sub_B2C2F8(
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
                                   (const MethodInfo_1A9B3C0 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData_____);
    p_partAnimationSaveDict->klass = (BattleServantConfConponent_c *)v75;
    sub_B2C2F8(p_partAnimationSaveDict, v75, v76, v77, v78, v79, v80, v81);
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

  if ( (byte_4185AF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_Deserialize_BattleServantData_SaveData___, inDeckSvt);
    sub_B2C35C(&JsonManager_TypeInfo, v14);
    byte_4185AF9 = 1;
  }
  if ( saveStr )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = (BattleServantData_SaveData_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                            (Il2CppObject *)saveStr,
                                            (const MethodInfo_1AACF6C *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
  }
  else
  {
    v15 = 0LL;
  }
  BattleServantData__setServantData_21251972(
    this,
    inDeckSvt,
    battleEnt,
    infollowerType,
    v15,
    0LL,
    commandAssistDataList,
    v7);
}


void __fastcall BattleServantData__setServantData_21251972(
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
  if ( (byte_4185AFA & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, inDeckSvt);
    this = (BattleServantData_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    byte_4185AFA = 1;
  }
  if ( !inDeckSvt )
    goto LABEL_41;
  ShiftList = (System_Int32_array **)BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  p_shiftDeckList = &v14->fields.shiftDeckList;
  v14->fields.shiftDeckList = (struct System_Int32_array *)ShiftList;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->fields.shiftDeckList, ShiftList, v18, v19, v20, v21, v22, v23);
  v24 = (System_Int32_array **)BattleDeckServantData__getChangeList(inDeckSvt, 0LL);
  p_changeSvtList = &v14->fields.changeSvtList;
  v14->fields.changeSvtList = (struct System_Int32_array *)v24;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->fields.changeSvtList, v24, v26, v27, v28, v29, v30, v31);
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
    v53 = sub_B2C460(this);
    sub_B2C400(v53, 0LL);
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
  this = (BattleServantData_o *)System_Math__Min_44967328(v34 + v42 + 1, v41, 0LL);
  shiftDeckList = v14->fields.shiftDeckList;
  v14->fields.shiftDeckIndex = (int)this;
  if ( !shiftDeckList )
LABEL_41:
    sub_B2C434(this, inDeckSvt);
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


void __fastcall BattleServantData__setServantData_21254888(
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
    sub_B2C434(this, 0LL);
  ShiftList = BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  this->fields.shiftDeckList = ShiftList;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  BattleServantData__setBaseServantData_21255168(
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
    sub_B2C434(deckSvt, data);
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
    v26 = sub_B2C460(deckSvt);
    sub_B2C400(v26, 0LL);
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
  __int64 v13; // x22
  __int64 v14; // x8
  const MethodInfo *v15; // x1
  BattleDeckServantData_o *ShiftServantData; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleDeckServantData_o *v23; // x22
  struct BattleDeckServantData_o *v24; // x8
  int64_t userSvtId; // x9
  BattleEntity_o *battle_ent; // x23
  int32_t Int; // w0
  const MethodInfo *v28; // x6
  unsigned __int64 v29; // x22
  signed __int64 size; // x24
  __int64 v31; // x23
  int32_t v32; // w8
  __int64 v33; // x0

  v6 = this;
  if ( (byte_4185B04 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, data);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    this = (BattleServantData_o *)sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4185B04 = 1;
  }
  if ( (npcId & 0x80000000) == 0 )
  {
    deckSvt = v6->fields.deckSvt;
    *(_QWORD *)&v6->fields.transformIndex = 0xFFFFFFFFLL;
    v6->fields.shiftNpcId = npcId;
    if ( !deckSvt )
      goto LABEL_39;
    v6->fields.beforeUserSvtId = deckSvt->fields.userSvtId;
    v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v6->fields.isEnemy )
    {
      this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
      if ( !this )
        goto LABEL_39;
      v13 = 0LL;
      while ( (int)v13 < this->fields.uniqueId )
      {
        this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
        if ( this )
        {
          if ( (unsigned int)v13 >= this->fields.uniqueId )
          {
LABEL_40:
            v33 = sub_B2C460(this);
            sub_B2C400(v33, 0LL);
          }
          v14 = *(&this->fields.userSvtId.fields.currentCryptoKey + v13);
          if ( v14 )
          {
            if ( v12 )
            {
              System_Collections_Generic_List_int___Add(
                v12,
                *(_DWORD *)(v14 + 40),
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v15);
              ++v13;
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
        v23 = ShiftServantData;
        this = (BattleServantData_o *)&v6->fields.deckSvt;
        v24 = v6->fields.deckSvt;
        if ( v24 )
        {
          userSvtId = v23->fields.userSvtId;
          v23->fields.isFollowerSvt = v24->fields.isFollowerSvt;
          v6->fields.transformUserSvtId = userSvtId;
          v6->fields.deckSvt = v23;
          sub_B2C2F8((BattleServantConfConponent_o *)this, (System_Int32_array **)v23, v17, v18, v19, v20, v21, v22);
          v23->fields.id = v6->fields.index + 1;
          v23->fields.uniqueId = v6->fields.uniqueId;
          battle_ent = data->fields.battle_ent;
          Int = Follower__getInt(v6->fields.followerType, 0LL);
          BattleServantData__setBaseServantData(v6, v23, battle_ent, Int, 0LL, 0, v28);
          if ( !v6->fields.isEnemy )
          {
            this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
            if ( !this )
              goto LABEL_39;
            v29 = 0LL;
            while ( (__int64)v29 < this->fields.uniqueId )
            {
              if ( !v12 )
                goto LABEL_39;
              size = v12->fields._size;
              this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
              if ( !this )
                goto LABEL_39;
              if ( v29 >= (unsigned int)this->fields.uniqueId )
                goto LABEL_40;
              v31 = *(&this->fields.userSvtId.fields.currentCryptoKey + v29);
              if ( (__int64)v29 >= size )
              {
                if ( !v31 )
                  goto LABEL_39;
                v32 = 0;
              }
              else
              {
                if ( v29 >= (unsigned int)v12->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                if ( !v31 )
                  goto LABEL_39;
                v32 = v12->fields._items->m_Items[v29 + 1];
              }
              *(_DWORD *)(v31 + 40) = v32;
              ++v29;
              this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
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
    sub_B2C434(this, data);
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
  sub_B2C2F8(
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
    sub_B2C434(this, 0LL);
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
  BattleData_o *v9; // x22
  BattleServantData_o *v10; // x19
  int32_t shiftNpcId; // w2
  int32_t uniqueId; // w1
  struct BattleDeckServantData_o *deckSvt; // x8
  BattleServantData_o *v14; // x24
  BattleUserServantData_o *UserServantFromID; // x21
  const MethodInfo *v16; // x4
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t atk; // w8
  int32_t hp; // w9
  int32_t maxActNum; // w10
  int32_t actPriority; // w10
  int32_t v27; // w9
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **individuality; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x22
  __int64 v43; // x23
  int32_t v44; // w0
  const MethodInfo *v45; // x2
  System_Int32_array **ServantOverwriteName; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t v53; // w0
  const MethodInfo *v54; // x2
  System_Int32_array **BattleServantOverwriteName; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x2
  BattleServantData_o *v63; // x0
  BattleUserServantData_o *v64; // x1
  BattleDeckServantData_o *DeckServantDataFromBothDeck; // x0
  BattleDeckServantData_o *v66; // x21
  BattleUserServantData_o *v67; // x20
  const MethodInfo *v68; // x4
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  int32_t v75; // w8
  int32_t v76; // w9
  int32_t v77; // w10
  int32_t v78; // w10
  int32_t v79; // w9
  System_Int32_array **name; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  __int64 v94; // x21
  __int64 v95; // x22
  int32_t v96; // w0
  const MethodInfo *v97; // x2
  System_Int32_array **v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  int32_t v105; // w0
  const MethodInfo *v106; // x2
  System_Int32_array **v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  const MethodInfo *v114; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16

  v9 = data;
  v10 = this;
  if ( (byte_4185B01 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, data);
    byte_4185B01 = 1;
  }
  shiftNpcId = v10->fields.shiftNpcId;
  if ( shiftNpcId >= 1 )
  {
    BattleServantData__setSkillShiftServant(v10, v9, shiftNpcId, *(const MethodInfo **)&overwriteLimitCount);
    return;
  }
  if ( !v9 )
    goto LABEL_35;
  this = (BattleServantData_o *)v9->fields.battle_info;
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
        data = *(BattleData_o **)&this->fields.uniqueId;
        v10->fields.transformUserSvtId = (int64_t)data;
        this = (BattleServantData_o *)v9->fields.battle_info;
        if ( this )
        {
          UserServantFromID = BattleInfoData__getUserServantFromID((BattleInfoData_o *)this, (int64_t)data, 0LL);
          BattleServantData__UpdateClassBoardSkillBuff(v10, UserServantFromID, v9, fromLoad, v16);
          v10->fields.deckSvt = (struct BattleDeckServantData_o *)v14;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v10->fields.deckSvt,
            (System_Int32_array **)v14,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
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
            v27 = v10->fields.equiphp + hp;
            v10->fields.atk = v10->fields.equipatk + atk;
            v10->fields.maxhp = v27;
            v10->fields.downstarrate = UserServantFromID->fields.starRate;
            v10->fields.downtdrate = UserServantFromID->fields.tdRate;
            v10->fields.atktdrate = UserServantFromID->fields.tdAttackRate;
            v10->fields.deathRate = UserServantFromID->fields.deathRate;
            v10->fields.criticalRate = UserServantFromID->fields.criticalRate;
            v10->fields.treasuredvcId = UserServantFromID->fields.treasureDeviceId;
            v10->fields.treasuredvcLevel = UserServantFromID->fields.treasureDeviceLv;
            v10->fields.transformSvtId = BattleUserServantData__getBattleSvtId(UserServantFromID, 0LL);
            v10->fields._imageSvtId_k__BackingField = UserServantFromID->fields.imageSvtId;
            v28 = *(System_Int32_array ***)&v14->fields.svtId.fields.fakeValue;
            v10->fields.svtName = (struct System_String_o *)v28;
            sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.svtName, v28, v29, v30, v31, v32, v33, v34);
            v10->fields.overkillTargetId = -1;
            individuality = (System_Int32_array **)UserServantFromID->fields.individuality;
            v10->fields.svtIndividuality = (struct System_Int32_array *)individuality;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v10->fields.svtIndividuality,
              individuality,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
            v43 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.currentCryptoKey;
            v42 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v115.fields.currentCryptoKey = v43;
            *(_QWORD *)&v115.fields.fakeValue = v42;
            v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v115, 0LL);
            ServantOverwriteName = (System_Int32_array **)BattleServantData__getServantOverwriteName(v10, v44, v45);
            v10->fields.svtOverwriteName = (struct System_String_o *)ServantOverwriteName;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v10->fields.svtOverwriteName,
              ServantOverwriteName,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52);
            v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                    UserServantFromID->fields.svtId,
                    0LL);
            BattleServantOverwriteName = (System_Int32_array **)BattleServantData__getBattleServantOverwriteName(
                                                                  v10,
                                                                  v53,
                                                                  v54);
            v10->fields.svtOverwriteBattleName = (struct System_String_o *)BattleServantOverwriteName;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v10->fields.svtOverwriteBattleName,
              BattleServantOverwriteName,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            if ( overwriteLimitCount >= 1 )
            {
              v10->fields._dispLimitCount_k__BackingField = UserServantFromID->fields.dispLimitCount;
              v10->fields._commandCardLimitCount_k__BackingField = UserServantFromID->fields.commandCardLimitCount;
              v10->fields._iconLimitCount_k__BackingField = UserServantFromID->fields.iconLimitCount;
            }
            v63 = v10;
            v64 = UserServantFromID;
LABEL_33:
            BattleServantData__OverwriteSkillsForTransformedServant(v63, v64, v62);
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
    v66 = DeckServantDataFromBothDeck;
    this = (BattleServantData_o *)v9->fields.battle_info;
    if ( this )
    {
      v67 = BattleInfoData__getUserServantFromID((BattleInfoData_o *)this, v66->fields.userSvtId, 0LL);
      BattleServantData__UpdateClassBoardSkillBuff(v10, v67, v9, fromLoad, v68);
      v10->fields.deckSvt = v66;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v10->fields.deckSvt,
        (System_Int32_array **)v66,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74);
      if ( v67 )
      {
        v75 = v67->fields.atk;
        v10->fields.atk = v75;
        v76 = v67->fields.hp;
        v10->fields.maxhp = v76;
        v10->fields.maxtpturn = v67->fields.chargeTurn;
        v77 = v67->fields.maxActNum;
        if ( v77 )
          v10->fields.maxActNum = v77;
        v78 = v67->fields.actPriority;
        if ( v78 )
          v10->fields.actPriority = v78;
        v79 = v10->fields.equiphp + v76;
        v10->fields.atk = v10->fields.equipatk + v75;
        v10->fields.maxhp = v79;
        v10->fields.downstarrate = v67->fields.starRate;
        v10->fields.downtdrate = v67->fields.tdRate;
        v10->fields.atktdrate = v67->fields.tdAttackRate;
        v10->fields.deathRate = v67->fields.deathRate;
        v10->fields.criticalRate = v67->fields.criticalRate;
        v10->fields.treasuredvcId = v67->fields.treasureDeviceId;
        v10->fields.treasuredvcLevel = v67->fields.treasureDeviceLv;
        v10->fields.transformSvtId = BattleUserServantData__getBattleSvtId(v67, 0LL);
        v10->fields._imageSvtId_k__BackingField = v67->fields.imageSvtId;
        name = (System_Int32_array **)v66->fields.name;
        v10->fields.svtName = (struct System_String_o *)name;
        sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.svtName, name, v81, v82, v83, v84, v85, v86);
        v10->fields.overkillTargetId = -1;
        v87 = (System_Int32_array **)v67->fields.individuality;
        v10->fields.svtIndividuality = (struct System_Int32_array *)v87;
        sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.svtIndividuality, v87, v88, v89, v90, v91, v92, v93);
        v95 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
        v94 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v116.fields.currentCryptoKey = v95;
        *(_QWORD *)&v116.fields.fakeValue = v94;
        v96 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v116, 0LL);
        v98 = (System_Int32_array **)BattleServantData__getServantOverwriteName(v10, v96, v97);
        v10->fields.svtOverwriteName = (struct System_String_o *)v98;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v10->fields.svtOverwriteName,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103,
          v104);
        v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v67->fields.svtId, 0LL);
        v107 = (System_Int32_array **)BattleServantData__getBattleServantOverwriteName(v10, v105, v106);
        v10->fields.svtOverwriteBattleName = (struct System_String_o *)v107;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v10->fields.svtOverwriteBattleName,
          v107,
          v108,
          v109,
          v110,
          v111,
          v112,
          v113);
        BattleServantData__CalculateLimitCountWithSpoilerProtection(v10, v67, v114);
        v63 = v10;
        v64 = v67;
        goto LABEL_33;
      }
    }
LABEL_35:
    sub_B2C434(this, data);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B55 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22100/*"shiftUpdateStatus"*/, v7);
    byte_4185B55 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B2C434(v10, v11);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22100/*"shiftUpdateStatus"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  if ( (byte_4185B60 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, *(_QWORD *)&param);
    this = (BattleServantData_o *)sub_B2C35C(
                                    &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                    v11);
    byte_4185B60 = 1;
  }
  skillInfoList = v10->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_10:
    sub_B2C434(this, *(_QWORD *)&param);
  v13 = 0LL;
  v14 = 0;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v13 >= size )
      return v14 & 1;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  if ( (byte_4185B5F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, *(_QWORD *)&param);
    this = (BattleServantData_o *)sub_B2C35C(
                                    &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                    v11);
    byte_4185B5F = 1;
  }
  skillInfoList = v10->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_10:
    sub_B2C434(this, *(_QWORD *)&param);
  v13 = 0LL;
  v14 = 0;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v13 >= size )
      return v14 & 1;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v14; // x1
  int32_t v15; // w20
  RemovedBuffInfo_o *v16; // x21
  const MethodInfo *v17; // x3

  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)individuality);
  if ( !this->fields.buffData )
    sub_B2C434(MaxHp, v14);
  v15 = MaxHp;
  v16 = BattleBuffData__subBuffFromIndividualites(
          this->fields.buffData,
          individuality,
          cntFromHead,
          cntFromTail,
          isCreateDummy,
          isForceSubState,
          0LL);
  BattleServantData__checkUpdateUpdownHp(this, v15, 0, v17);
  return v16;
}


// local variable allocation has failed, the output may be wrong!
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
        v24 = sub_B2C460(this);
        sub_B2C400(v24, 0LL);
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
    sub_B2C434(this, isEndEnemyTurn);
  }
  return v14;
}


void __fastcall BattleServantData__turnBuffProgressingIncrease(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B2C434(0LL, method);
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
  const MethodInfo *v20; // x1
  __int64 buffData; // x0
  int32_t ActValue_30954484; // w0
  const MethodInfo *v23; // x2
  int32_t v24; // w24
  int32_t v25; // w20
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t ActValue_30953980; // w24
  BattleLogicBuff_ReduceHpProcess_o *v29; // x26
  struct BattleLogicBuff_ConvertReduceRegainProcess_o *convertDamageProc; // x8
  int TotalConvertReduceToRegainParam_k__BackingField; // w8
  int v32; // w20
  bool v33; // w24
  DataVals_o *v34; // x24
  BattleBuffData_o *v35; // x27
  BattleBuffData_CheckIndividualitiesData_o *v36; // x28
  const MethodInfo *v37; // x2
  __int64 v38; // x27
  __int64 v39; // x8
  const MethodInfo *v40; // x2
  BattleActionData_o *NoEffectObject; // x0
  int32_t FixDamage; // w27
  const MethodInfo *v43; // x2
  int v44; // w24
  struct System_Int32_array *shiftDeckList; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v47; // x5
  __int64 v48; // x25
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  BattleActionData_o *v55; // x0
  int32_t Wave; // w0
  const MethodInfo *v57; // x5
  int32_t v58; // w25
  struct BattlePerformance_o *perf; // x8
  __int64 v60; // x1
  const MethodInfo *v61; // x3
  int v62; // w8
  __int64 v63; // x23
  unsigned int v64; // w20
  __int64 v65; // x25
  __int64 *v66; // x25
  __int64 v67; // t1
  __int64 v68; // x8
  int v69; // w9
  bool v70; // vf
  int v71; // w9
  struct BattleData_o *v72; // x8
  int32_t v73; // w22
  const MethodInfo *v74; // x2
  int maxtpturn; // w8
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x3
  __int64 v80; // x0
  System_Collections_Generic_List_Enumerator_T__o v82; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-80h] BYREF
  System_String_o *missText; // [xsp+38h] [xbp-68h] BYREF
  bool v85; // [xsp+44h] [xbp-5Ch] BYREF
  bool actflg; // [xsp+48h] [xbp-58h] BYREF
  int32_t digit; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4185B28 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, fieldIndiv);
    sub_B2C35C(&BattleActionData_DamageData_TypeInfo, v10);
    sub_B2C35C(&DataVals_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v14);
    sub_B2C35C(&int___TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v16);
    sub_B2C35C(&BattleLogicBuff_ReduceHpProcess_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_1/*""*/, v18);
    byte_4185B28 = 1;
  }
  actflg = 0;
  v85 = 0;
  missText = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.isGutsSleepRelease = 1;
  digit = 1000;
  v19 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v19, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !this->fields.isEnemy )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_95;
    ActValue_30954484 = BattleBuffData__getActValue_30954484((BattleBuffData_o *)buffData, 30, v19, 0LL);
    v24 = ActValue_30954484;
    if ( ActValue_30954484 <= 0 )
      v25 = ActValue_30954484;
    else
      v25 = 0;
    if ( BattleServantData__isGainNp(this, ActValue_30954484 > 0, v23) )
      v27 = v24;
    else
      v27 = v25;
    BattleServantData__addNp(this, v27, 1, v26);
  }
  actflg = 0;
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_95;
  ActValue_30953980 = BattleBuffData__getActValue_30953980((BattleBuffData_o *)buffData, 32, &actflg, v19, 0LL);
  v85 = 0;
  missText = 0LL;
  v29 = (BattleLogicBuff_ReduceHpProcess_o *)sub_B2C42C(BattleLogicBuff_ReduceHpProcess_TypeInfo);
  BattleLogicBuff_ReduceHpProcess___ctor(v29, this, 0LL);
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_95;
  buffData = BattleBuffData__getActValue(
               (BattleBuffData_o *)buffData,
               33,
               &v85,
               &missText,
               v19,
               (BattleLogicBuff_BaseProcess_o *)v29,
               0LL);
  if ( !v29 )
    goto LABEL_95;
  convertDamageProc = v29->fields.convertDamageProc;
  if ( !convertDamageProc )
    goto LABEL_95;
  TotalConvertReduceToRegainParam_k__BackingField = convertDamageProc->fields._TotalConvertReduceToRegainParam_k__BackingField;
  v32 = TotalConvertReduceToRegainParam_k__BackingField + ActValue_30953980;
  if ( actflg )
  {
    if ( (v32 & 0x80000000) != 0 )
    {
      v33 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v33 = 0;
    if ( TotalConvertReduceToRegainParam_k__BackingField < 1 || (v32 & 0x80000000) != 0 )
      goto LABEL_33;
  }
  v34 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
  DataVals___ctor(v34, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v35 = this->fields.buffData;
  v36 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v36, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v35 )
    goto LABEL_95;
  if ( BattleBuffData__isTurnBuff(v35, 42, v36, 1, 0LL) )
  {
    LODWORD(v38) = 0;
  }
  else
  {
    buffData = BattleServantData__getUpDownHeal(this, &digit, v37);
    if ( !v34 )
      goto LABEL_95;
    v39 = digit;
    v34->fields.isShowForcedEffect = 1;
    v38 = (int)buffData * (__int64)v32 / v39;
  }
  BattleServantData__provisionalHeal(this, v38, v37);
  buffData = BattleServantData__resultHeal(this, v38, v40);
  if ( !actiondata )
    goto LABEL_95;
  buffData = (__int64)BattleActionData__setHealData(actiondata, this->fields.uniqueId, v38, 0, 0, v34, 0, 0LL);
  if ( (int)v38 <= 0 )
  {
    if ( !v34 )
      goto LABEL_95;
    if ( !v34->fields.isShowForcedEffect )
    {
      if ( !logic )
        goto LABEL_95;
      NoEffectObject = BattleLogic__getNoEffectObject(logic, this->fields.uniqueId, 0, v34, 0, 0LL, 0LL);
      BattleActionData__addAction(actiondata, NoEffectObject, 0LL);
    }
  }
  v33 = 1;
LABEL_33:
  FixDamage = BattleLogicBuff_ReduceHpProcess__GetFixDamage(v29, 0LL);
  buffData = BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(v29, 0LL);
  v85 = buffData & 1;
  if ( (buffData & 1) != 0 )
  {
    v44 = FixDamage & ~(FixDamage >> 31);
    if ( !isAlive )
    {
      buffData = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                   this,
                   this->klass->vtable._14_set_resultHp.methodPtr);
      if ( (int)buffData <= v44 )
      {
        buffData = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                     this,
                     this->klass->vtable._14_set_resultHp.methodPtr);
        v44 = buffData - 1;
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
             this->klass->vtable._14_set_resultHp.methodPtr) <= v44 )
      {
        v44 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                this,
                this->klass->vtable._14_set_resultHp.methodPtr)
            - 1;
      }
    }
    BattleServantData__provisionalDamage(this, v44, v43);
    BattleServantData__ResultDamage(this, v44, 0LL, 0LL, 0, v47);
    v48 = sub_B2C42C(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v48, 0LL);
    if ( !v48 )
      goto LABEL_95;
    *(_DWORD *)(v48 + 28) = this->fields.uniqueId;
    buffData = sub_B2C374(int___TypeInfo, 1LL);
    if ( !buffData )
      goto LABEL_95;
    if ( !*(_DWORD *)(buffData + 24) )
      goto LABEL_96;
    *(_DWORD *)(buffData + 32) = v44;
    *(_QWORD *)(v48 + 96) = buffData;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v48 + 96),
      (System_Int32_array **)buffData,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    *(_DWORD *)(v48 + 16) = 0;
    *(_BYTE *)(v48 + 128) = 1;
    if ( !actiondata
      || (BattleActionData__setDamageData(actiondata, (BattleActionData_DamageData_o *)v48, 0LL, 0, 0, 0LL),
          (buffData = (__int64)this->fields.buffData) == 0)
      || (v55 = BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)buffData, this, 1, 0LL),
          BattleActionData__addSideEffectActionData(actiondata, v55, 1, 0LL),
          !logic) )
    {
LABEL_95:
      sub_B2C434(buffData, v20);
    }
    Wave = BattleLogic__getWave(logic, 0LL);
    BattleServantData__setActionHistory(this, -1, 5, Wave, 0, v57);
    v33 = 1;
  }
  if ( !this->fields.isEnemy )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_95;
    buffData = BattleBuffData__getActValue_30954484((BattleBuffData_o *)buffData, 31, v19, 0LL);
    if ( !actiondata )
      goto LABEL_95;
    v58 = buffData;
    BattleActionData__addCriticalStar(actiondata, buffData, 0LL);
    if ( !logic )
      goto LABEL_95;
    buffData = (__int64)logic->fields.data;
    if ( !buffData )
      goto LABEL_95;
    BattleData__addCriticalPoint((BattleData_o *)buffData, v58, 0, 0LL);
    perf = logic->fields.perf;
    if ( !perf )
      goto LABEL_95;
    buffData = (__int64)perf->fields.statusPerf;
    if ( !buffData )
      goto LABEL_95;
    BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)buffData, -1, 1, 0LL);
  }
  if ( BattleServantData__canUseSkill(this, -1, v43) )
  {
    buffData = (__int64)this->fields.skillInfoList;
    if ( !buffData )
      goto LABEL_95;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v82,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffData,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    for ( i = v82;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
          BattleSkillInfoData__TurnProgress((BattleSkillInfoData_o *)i.fields.current, 1, 0, -1, 0LL, 0LL) )
    {
      if ( !i.fields.current )
        sub_B2C434(0LL, v60);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  }
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_95;
  buffData = (__int64)BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
  if ( !buffData )
    goto LABEL_95;
  v62 = *(_DWORD *)(buffData + 24);
  v63 = buffData;
  if ( v62 >= 1 )
  {
    v64 = 0;
    while ( v64 < v62 )
    {
      v65 = v63 + 8LL * (int)v64;
      v67 = *(_QWORD *)(v65 + 32);
      v66 = (__int64 *)(v65 + 32);
      buffData = v67;
      if ( !v67 )
        goto LABEL_95;
      buffData = BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( (buffData & 1) != 0 )
        goto LABEL_77;
      if ( v64 >= *(_DWORD *)(v63 + 24) )
        break;
      buffData = *v66;
      if ( !*v66 )
        goto LABEL_95;
      buffData = BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( (buffData & 1) != 0 )
      {
LABEL_77:
        if ( v64 >= *(_DWORD *)(v63 + 24) )
          break;
        v68 = *v66;
        if ( !*v66 )
          goto LABEL_95;
        v69 = *(_DWORD *)(v68 + 112);
        v70 = __OFSUB__(v69, 1);
        v71 = v69 - 1;
        if ( v71 < 0 == v70 )
          *(_DWORD *)(v68 + 112) = v71;
      }
      v62 = *(_DWORD *)(v63 + 24);
      if ( (int)++v64 >= v62 )
        goto LABEL_82;
    }
LABEL_96:
    v80 = sub_B2C460(buffData);
    sub_B2C400(v80, 0LL);
  }
LABEL_82:
  if ( !logic )
    goto LABEL_95;
  v72 = logic->fields.data;
  if ( !v72 )
    goto LABEL_95;
  if ( !BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(this, v72->fields.wavecount, v72->fields.turnCount, v61)
    && !BattleServantData__isTDSeraled(this, v20)
    && !BattleServantData__isNobleSeal(this, v20)
    && this->fields.treasuredvcId >= 1 )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_95;
    v73 = BattleBuffData__getActValue_30954484((BattleBuffData_o *)buffData, 35, v19, 0LL);
    if ( BattleServantData__isGainNp(this, 1, v74) )
    {
      maxtpturn = this->fields.nexttpturn + ~v73;
      if ( this->fields.maxtpturn < maxtpturn )
        maxtpturn = this->fields.maxtpturn;
      this->fields.nexttpturn = maxtpturn & ~(maxtpturn >> 31);
    }
  }
  buffData = (__int64)this->fields.aiState;
  if ( !buffData )
    goto LABEL_95;
  AiState__fieldTurnProgressing((AiState_o *)buffData, 0LL);
  BattleServantData__updateHp(this, v76);
  BattleServantData__updateConditionsBuff(this, fieldIndiv, logic->fields.perf, v77);
  BattleServantData__updateBuff(this, 1, 1, v78);
  return v33;
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
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v26; // x20
  Il2CppObject *current; // x21
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4185B5D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, doAuraUpdate);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B2C35C(&Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__, v9);
    sub_B2C35C(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___, v11);
    sub_B2C35C(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass516_0__updateBuff_b__0__, v15);
    sub_B2C35C(&BattleServantData___c__DisplayClass516_0_TypeInfo, v16);
    byte_4185B5D = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v17 = sub_B2C42C(BattleServantData___c__DisplayClass516_0_TypeInfo);
  BattleServantData___c__DisplayClass516_0___ctor((BattleServantData___c__DisplayClass516_0_o *)v17, 0LL);
  if ( !v17
    || (*(_QWORD *)(v17 + 16) = this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v17 + 16),
          (System_Int32_array **)this,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        *(_BYTE *)(v17 + 24) = doAuraUpdate,
        *(_BYTE *)(v17 + 25) = doClassIconAuraUpdate,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_B2C434(paramobjelist, v19);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  v26 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v17 + 32);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v36,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v28 = *v26;
      if ( !*v26 )
      {
        v28 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_B2C42C(UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v28,
          (Il2CppObject *)v17,
          Method_BattleServantData___c__DisplayClass516_0__updateBuff_b__0__,
          (const MethodInfo_2B146C8 *)Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__);
        *v26 = v28;
        sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
      }
      if ( (BYTE3(UnityEngine_EventSystems_ExecuteEvents_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      }
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v28,
        (const MethodInfo_1AA36D8 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v36,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v16; // x1
  BattleActorControl_o *ServantActor; // x27
  const MethodInfo *v18; // x4
  BattleLogic_o *logic; // x28
  const MethodInfo *v20; // x1

  if ( (byte_4185BA7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, fieldInfividualities);
    byte_4185BA7 = 1;
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
  canSubStateBuffIndv = BattleServantData__getBuffIndividualities(this, 0, 0, 1, v18);
  if ( !buffData )
LABEL_17:
    sub_B2C434(canSubStateBuffIndv, v16);
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
  BattleServantData__checkUpdateResumptionHpFromLossMaxHp(this, v20);
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
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B5C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_17275/*"changeHp"*/, v7);
    byte_4185B5C = 1;
  }
  memset(&v15, 0, sizeof(v15));
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
    sub_B2C434(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v15.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v13 )
    {
      if ( !current )
        sub_B2C434(v13, v14);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17275/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B56 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22940/*"updateNp"*/, v7);
    byte_4185B56 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B2C434(v10, v11);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22940/*"updateNp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateNpGauge_21304720(
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
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v32; // x20
  Il2CppObject *current; // x21
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4185B57 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, incNpArray);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_B2C35C(&Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__, v9);
    sub_B2C35C(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___, v11);
    sub_B2C35C(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_BattleServantData___c__DisplayClass504_0__updateNpGauge_b__0__, v15);
    sub_B2C35C(&BattleServantData___c__DisplayClass504_0_TypeInfo, v16);
    byte_4185B57 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v17 = sub_B2C42C(BattleServantData___c__DisplayClass504_0_TypeInfo);
  BattleServantData___c__DisplayClass504_0___ctor((BattleServantData___c__DisplayClass504_0_o *)v17, 0LL);
  if ( !v17
    || (*(_QWORD *)(v17 + 16) = this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v17 + 16),
          (System_Int32_array **)this,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        *(_QWORD *)(v17 + 24) = incNpArray,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v17 + 24),
          (System_Int32_array **)incNpArray,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        *(_DWORD *)(v17 + 32) = index,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_B2C434(paramobjelist, v19);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  v32 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v17 + 40);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v34 = *v32;
      if ( !*v32 )
      {
        v34 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_B2C42C(UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v34,
          (Il2CppObject *)v17,
          Method_BattleServantData___c__DisplayClass504_0__updateNpGauge_b__0__,
          (const MethodInfo_2B146C8 *)Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__);
        *v32 = v34;
        sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
      }
      if ( (BYTE3(UnityEngine_EventSystems_ExecuteEvents_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      }
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v34,
        (const MethodInfo_1AA36D8 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B59 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22945/*"updateTDGauge"*/, v7);
    byte_4185B59 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B2C434(v10, v11);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22945/*"updateTDGauge"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4185B58 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22947/*"updateView"*/, v7);
    byte_4185B58 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_B2C434(v10, v11);
      UnityEngine_GameObject__SendMessage_40659236(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22947/*"updateView"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  __int64 v8; // x1

  buffData = this->fields.buffData;
  v7 = BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(this, *(const MethodInfo **)&maxhp);
  if ( !buffData )
    sub_B2C434(v7, v8);
  return BattleBuffData__useGuts(buffData, maxhp, motionName, v7, 0LL);
}


void __fastcall BattleServantData__useSkill(
        BattleServantData_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  SkillLvMaster_o *v7; // x20

  if ( (byte_4185B27 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4185B27 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !skillInfo)
    || (v7 = (SkillLvMaster_o *)Instance,
        Instance = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                             skillInfo,
                             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        !v7)
    || (Instance = SkillLvMaster__GetEntity(v7, (int32_t)Instance, skillInfo->fields.skilllv, 0LL)) == 0LL )
  {
    sub_B2C434(Instance, v6);
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
  __int64 v9; // x1
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0
  int32_t v11; // w0
  BattleBuffData_o *buffData; // x21
  int v13; // w23
  BattleBuffData_CheckIndividualitiesData_o *v14; // x22
  int32_t v15; // w8

  if ( (byte_4185B47 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&addPer);
    sub_B2C35C(&UseNoblePhantasmWaveTurnEvent_TypeInfo, v7);
    byte_4185B47 = 1;
  }
  this->fields.nexttpturn = this->fields.maxtpturn;
  v8 = (UseNoblePhantasmWaveTurnEvent_o *)sub_B2C42C(UseNoblePhantasmWaveTurnEvent_TypeInfo);
  UseNoblePhantasmWaveTurnEvent___ctor(v8, battleData, 0LL);
  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner
    || (ServantWaveTurnEventOwner__Add(waveTurnEventOwner, (ServantWaveTurnEvent_o *)v8, 0LL),
        v11 = BattleUtility__FloorToInt((float)((float)this->fields.np / (float)this->fields.lineMaxNp) * 100.0, 0LL),
        buffData = this->fields.buffData,
        v13 = v11,
        v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v14, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_B2C434(waveTurnEventOwner, v9);
  }
  if ( v13 <= 100 )
    v13 = 100;
  v15 = v13 + addPer + 100 * BattleBuffData__getActValue_30954484(buffData, 60, v14, 0LL);
  if ( v15 >= 500 )
    v15 = 500;
  this->fields.tmp_npper = v15;
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
  sub_B2C2F8(&this->fields, keyName);
  this->fields.saveDataArray = array;
  sub_B2C2F8(&this->fields.saveDataArray, array);
  return this;
}


void __fastcall BattleServantData_SaveData___ctor(BattleServantData_SaveData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0

  if ( (byte_41850D3 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_41850D3 = 1;
  }
  *(_QWORD *)&this->fields.deckIndex = -1LL;
  this->fields.dressDispId = -1;
  this->fields.shiftNpcId = -1;
  v3 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 5LL);
  this->fields.commandAssistIds = v3;
  sub_B2C2F8(&this->fields.commandAssistIds, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BattleServantData___c_StaticFields *static_fields; // x0

  if ( (byte_41850CD & 1) == 0 )
  {
    sub_B2C35C(&BattleServantData___c_TypeInfo, v1);
    byte_41850CD = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleServantData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleServantData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantData___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall BattleServantData___c___ctor(BattleServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c___EnumerateSkillIndividuality_b__606_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.type != 20;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData___c___EnumerateSkillIndividuality_b__606_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))x->klass->vtable._6_get_IndividualityArray.method)(
                                                            x,
                                                            x->klass->vtable._7_getCutInId.methodPtr);
}


int32_t __fastcall BattleServantData___c___GetAddSideEffectBuffList_b__429_1(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.addOrder;
}


bool __fastcall BattleServantData___c___ResetServantSelfSkill_b__363_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.type == 11;
}


bool __fastcall BattleServantData___c___getActiveSkillInfos_b__389_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B2C434(this, 0LL);
  return !s->fields.isPassive && s->fields.isUseSkill;
}


int32_t __fastcall BattleServantData___c___getAiParam_b__659_0(
        BattleServantData___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s;
}


int32_t __fastcall BattleServantData___c___getAttackSideEffectBuffList_b__428_0(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *a1,
        BattleBuffData_BuffData_o *a2,
        const MethodInfo *method)
{
  if ( !a1 || !a2 )
    sub_B2C434(this, a1);
  return a1->fields.addOrder - a2->fields.addOrder;
}


bool __fastcall BattleServantData___c___getPassiveSkills_b__310_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B2C434(this, 0LL);
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
  __int64 v9; // x1

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_41850CE & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____get_Key__,
      x.fields.key);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____get_Value__,
      v5);
    sub_B2C35C(&BattleServantData_PartAnimationSaveData_TypeInfo, v6);
    byte_41850CE = 1;
  }
  v7 = (Il2CppObject *)sub_B2C42C(BattleServantData_PartAnimationSaveData_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  v7[1].klass = (Il2CppClass *)key;
  sub_B2C2F8(&v7[1], key);
  v7[1].monitor = value;
  sub_B2C2F8(&v7[1].monitor, value);
  return (BattleServantData_PartAnimationSaveData_o *)v7;
}


System_String_o *__fastcall BattleServantData___c___setSaveData_b__280_0(
        BattleServantData___c_o *this,
        BattleServantData_PartAnimationSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.key;
}


BattlePlayAnimationComponent_SaveData_array *__fastcall BattleServantData___c___setSaveData_b__280_1(
        BattleServantData___c_o *this,
        BattleServantData_PartAnimationSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.saveDataArray;
}


void __fastcall BattleServantData___c__627_object____cctor(const MethodInfo_1F853E4 *method)
{
  BattleServantData___c__627_T__c *klass; // x20
  Il2CppClass *_0_BattleServantData___c__627_T; // x20
  __int64 v4; // x0
  BattleServantData___c__627_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BattleServantData___c__627_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleServantData___c__627_T__c *v16; // x19
  Il2CppClass *_2_BattleServantData___c__627_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(method->klass);
  _0_BattleServantData___c__627_T = klass->rgctx_data->_0_BattleServantData___c__627_T_;
  if ( (BYTE2(_0_BattleServantData___c__627_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_0_BattleServantData___c__627_T);
  v4 = sub_B2C42C(_0_BattleServantData___c__627_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AC505C(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BattleServantData___c__627_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AC505C(v8);
  methodPointer(v6, v8->rgctx_data->_1_BattleServantData___c__627_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(v16);
  _2_BattleServantData___c__627_T = v16->rgctx_data->_2_BattleServantData___c__627_T_;
  if ( (BYTE2(_2_BattleServantData___c__627_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_2_BattleServantData___c__627_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleServantData___c__627_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleServantData___c__627_object____ctor(
        BattleServantData___c__627_T__o *this,
        const MethodInfo_1F854C0 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__627_object____HasWaveTurnEvent_b__627_0(
        BattleServantData___c__627_T__o *this,
        ServantWaveTurnEvent_o *x,
        const MethodInfo_1F854D8 *method)
{
  Il2CppClass *_3_T; // x19

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE2(_3_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->klass->rgctx_data->_3_T);
  return sub_B2C41C(x, _3_T) != 0;
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, id);
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
      v10 = sub_B2C460(this);
      sub_B2C400(v10, 0LL);
    }
LABEL_10:
    sub_B2C434(this, x);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_41850CF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, ent);
    sub_B2C35C(&DataVals_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    this = (BattleServantData___c__DisplayClass311_0_o *)sub_B2C35C(
                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                           v7);
    byte_41850CF = 1;
  }
  if ( !ent || (svals = ent->fields.svals) == 0LL )
LABEL_20:
    sub_B2C434(this, ent);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = svals->max_length;
    if ( (__int64)v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_22;
    v11 = svals->m_Items[v9];
    v12 = (DataVals_o *)sub_B2C42C(DataVals_TypeInfo);
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
        v16 = sub_B2C460(this);
        sub_B2C400(v16, 0LL);
      }
      this = (BattleServantData___c__DisplayClass311_0_o *)v4->fields.funcMst;
      if ( !this )
        goto LABEL_20;
      this = (BattleServantData___c__DisplayClass311_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                             funcId->m_Items[v9 + 1],
                                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
                                                                 (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (BattleServantData___c__DisplayClass311_0_o *)v4->fields.retList;
            if ( !this )
              goto LABEL_20;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)this,
              v15,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
    sub_B2C434(this, buff);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return s->fields.type == 20 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass429_0___ctor(
        BattleServantData___c__DisplayClass429_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleServantData___c__DisplayClass429_0___GetAddSideEffectBuffList_b__0(
        BattleServantData___c__DisplayClass429_0_o *this,
        int32_t act,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x9
  BattleServantData___c__DisplayClass429_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (BattleServantData___c__DisplayClass429_0_o *)_4__this->fields.buffData) == 0LL) )
    sub_B2C434(this, act);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetFixBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                act,
                                                                                v4->fields.checkData,
                                                                                1,
                                                                                0LL);
}


void __fastcall BattleServantData___c__DisplayClass504_0___ctor(
        BattleServantData___c__DisplayClass504_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass504_0___updateNpGauge_b__0(
        BattleServantData___c__DisplayClass504_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass504_0_o *v5; // x20
  IEventMessageRecieve_c *klass; // x8
  struct System_Int32_array *incNpArray; // x21
  struct BattleServantData_o *_4__this; // x22
  unsigned int index; // w20
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_41850D0 & 1) == 0 )
  {
    this = (BattleServantData___c__DisplayClass504_0_o *)sub_B2C35C(&IEventMessageRecieve_TypeInfo, reciever);
    byte_41850D0 = 1;
  }
  if ( !reciever )
    sub_B2C434(this, reciever);
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
    p_method = sub_AC5258(reciever, IEventMessageRecieve_TypeInfo, 0LL, method);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, struct System_Int32_array *, _QWORD, _QWORD))p_method)(
    reciever,
    _4__this,
    incNpArray,
    index,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass516_0___ctor(
        BattleServantData___c__DisplayClass516_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass516_0___updateBuff_b__0(
        BattleServantData___c__DisplayClass516_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass516_0_o *v5; // x21
  struct BattleServantData_o *_4__this; // x20
  IEventMessageRecieve_c *klass; // x8
  _BOOL4 doAuraUpdate; // w22
  _BOOL4 doClassIconAuraUpdate; // w21
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_41850D1 & 1) == 0 )
  {
    this = (BattleServantData___c__DisplayClass516_0_o *)sub_B2C35C(&IEventMessageRecieve_TypeInfo, reciever);
    byte_41850D1 = 1;
  }
  if ( !reciever )
    sub_B2C434(this, reciever);
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
    p_method = sub_AC5258(reciever, IEventMessageRecieve_TypeInfo, 1LL, method);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, _BOOL4, _BOOL4, _QWORD))p_method)(
    reciever,
    _4__this,
    doAuraUpdate,
    doClassIconAuraUpdate,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass602_0___ctor(
        BattleServantData___c__DisplayClass602_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData___c__DisplayClass602_0___EnumerateIndividuality_b__0(
        BattleServantData___c__DisplayClass602_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_41850D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_41850D2 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.subBuffIndividualities,
            x,
            (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall BattleServantData___c__DisplayClass683_0___ctor(
        BattleServantData___c__DisplayClass683_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass683_0___GetCommandCodeInfo_b__0(
        BattleServantData___c__DisplayClass683_0_o *this,
        CommandCodeInfo_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B2C434(this, 0LL);
  return c->fields.id == this->fields.userCommandCodeId;
}


void __fastcall BattleServantData___c__DisplayClass720_0___ctor(
        BattleServantData___c__DisplayClass720_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass720_0___UpdateClassBoardSkillBuff_b__0(
        BattleServantData___c__DisplayClass720_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass720_0_o *v3; // x19
  struct AddSkillData_o *skillData; // x8

  if ( !s
    || (v3 = this,
        this = (BattleServantData___c__DisplayClass720_0_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._5_get_skillId.method)(
                                                               s,
                                                               s->klass->vtable._6_get_IndividualityArray.methodPtr,
                                                               method),
        (skillData = v3->fields.skillData) == 0LL) )
  {
    sub_B2C434(this, s);
  }
  return (_DWORD)this == skillData->fields.id;
}