void __fastcall BattleServantData___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData___ctor(BattleServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_WebOperation__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantSnapShotGroupDefault_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  AiState_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  ServantWaveTurnEventOwner_o *v38; // x20
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
  System_Int32_array **v52; // x1
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
  struct System_Int32_array *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7

  if ( (byte_434F6FD & 1) == 0 )
  {
    sub_B70694(&AiState_TypeInfo);
    sub_B70694(&BattleServantSnapShotGroupDefault_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__);
    sub_B70694(&System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    sub_B70694(&ServantWaveTurnEventOwner_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434F6FD = 1;
  }
  this->fields.deckIndex = -1;
  this->fields.transformUserSvtId = -1LL;
  this->fields.transformIndex = -1;
  this->fields.appearanceId = -1;
  *(int64_t *)((char *)&this->fields.beforeUserSvtId + 4) = -1LL;
  *(_QWORD *)&this->fields.shiftNpcId = -1LL;
  v3 = (System_Collections_Generic_LinkedList_WebOperation__o *)sub_B70764(System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo);
  System_Collections_Generic_LinkedList_WebOperation____ctor(
    v3,
    (const MethodInfo_2EBB1B8 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__);
  this->fields.actionHistory = (struct System_Collections_Generic_LinkedList_BattleServantActionHistory__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.actionHistory,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (BattleServantSnapShotGroupDefault_o *)sub_B70764(BattleServantSnapShotGroupDefault_TypeInfo);
  BattleServantSnapShotGroupDefault___ctor(v10, 0LL);
  this->fields._SnapShotDamagedOnLogicDead_k__BackingField = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._SnapShotDamagedOnLogicDead_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (AiState_o *)sub_B70764(AiState_TypeInfo);
  AiState___ctor(v17, 0LL);
  this->fields.aiState = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.aiState,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.actorScale = 100;
  *(_QWORD *)&this->fields.nplineCount = 0x6400000003LL;
  *(_QWORD *)&this->fields.roleType = 0xFFFFFFFF00000001LL;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  this->fields.skillInfoList = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillInfoList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.tdErrorStatusVoiceSeList = (struct System_Collections_Generic_List_string__o *)v31;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.tdErrorStatusVoiceSeList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.deadTurn = 1;
  v38 = (ServantWaveTurnEventOwner_o *)sub_B70764(ServantWaveTurnEventOwner_TypeInfo);
  ServantWaveTurnEventOwner___ctor(v38, 0LL);
  this->fields.waveTurnEventOwner = v38;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.waveTurnEventOwner,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.paramobjelist = (struct System_Collections_Generic_List_GameObject__o *)v45;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.paramobjelist,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.statestring, v52, v53, v54, v55, v56, v57, v58);
  this->fields.isGutsSleepRelease = 1;
  this->fields.wasAttackTargetId = -1;
  this->fields.nextPossibleTimePopEffect = -1.0;
  *(_QWORD *)&this->fields.selectedTDCardId = -1LL;
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
  this->fields.adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)v59;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.adjustmentList,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.fixNpSpeed = 1;
  this->fields.tempTreasuredvcLv = 1;
  v66 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  this->fields.wkzero = v66;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.wkzero,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields.tmpAppearanceId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData__AddAddPassiveSkillInfo(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvtData,
        int32_t *skillIndex,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  __int64 v6; // x8
  BattleServantData_o *v7; // x21
  unsigned __int64 v8; // x22
  int32_t *v9; // x8
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w4
  __int64 v13; // x0
  const MethodInfo *v14; // [xsp+0h] [xbp-40h]

  if ( !userSvtData
    || (v4 = this,
        (this = (BattleServantData_o *)BattleUserServantData__GetAddPassiveSkillArray(userSvtData, 0LL)) == 0LL) )
  {
    sub_B7076C(this, userSvtData);
  }
  v6 = *(_QWORD *)&this->fields.uniqueId;
  v7 = this;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
      {
        v13 = sub_B70798(this);
        sub_B70738(v13, 0LL);
      }
      v9 = (int32_t *)(&v7->fields.userSvtId.fields.currentCryptoKey + v8);
      v10 = *skillIndex;
      v11 = *v9;
      v12 = v9[1];
      ++*skillIndex;
      this = (BattleServantData_o *)BattleServantData__addSkillInfo(v4, 24, v10, v11, v12, -1LL, -1, 0LL, v14);
      LODWORD(v6) = v7->fields.uniqueId;
      ++v8;
    }
    while ( (__int64)v8 < (int)v6 );
  }
}


void __fastcall BattleServantData__AddAppendSkillInfo(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvtData,
        int32_t *skillIndex,
        const MethodInfo *method)
{
  void *AppendPassiveSkillArray; // x0
  __int64 v7; // x8
  _QWORD *v8; // x21
  unsigned __int64 v9; // x23
  unsigned __int64 v10; // x22
  int32_t v11; // w2
  __int64 v12; // x0
  const MethodInfo *v13; // [xsp+0h] [xbp-40h]

  if ( !userSvtData )
    sub_B7076C(this, 0LL);
  AppendPassiveSkillArray = BattleUserServantData__GetAppendPassiveSkillArray(userSvtData, 0LL);
  if ( AppendPassiveSkillArray )
  {
    v7 = *((_QWORD *)AppendPassiveSkillArray + 3);
    v8 = AppendPassiveSkillArray;
    if ( (int)v7 >= 1 )
    {
      v9 = 0LL;
      do
      {
        if ( v9 >= (unsigned int)v7 )
        {
          v12 = sub_B70798(AppendPassiveSkillArray);
          sub_B70738(v12, 0LL);
        }
        v10 = v8[v9 + 4];
        AppendPassiveSkillArray = (void *)Follower__IsNpc(this->fields.followerType, 0LL);
        if ( HIDWORD(v10) || ((unsigned __int8)AppendPassiveSkillArray & 1) == 0 )
        {
          v11 = (*skillIndex)++;
          AppendPassiveSkillArray = BattleServantData__addSkillInfo(
                                      this,
                                      25,
                                      v11,
                                      v10,
                                      SHIDWORD(v10),
                                      -1LL,
                                      -1,
                                      0LL,
                                      v13);
        }
        LODWORD(v7) = *((_DWORD *)v8 + 6);
        ++v9;
      }
      while ( (__int64)v9 < (int)v7 );
    }
  }
}


System_Collections_Generic_List_BattleSkillInfoData__o *__fastcall BattleServantData__AddClassBoardSkillInfo(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvtData,
        int32_t *skillIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  BattleSkillInfoData_o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  System_Collections_ICollection_o *ClassBoardSkillArray; // x22
  void *monitor; // x8
  unsigned __int64 v12; // x23
  int32_t *v13; // x8
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w4
  __int64 v18; // x0
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_434F6F1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    byte_434F6F1 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
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
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)monitor )
        {
          v18 = sub_B70798(IsNullOrEmpty);
          sub_B70738(v18, 0LL);
        }
        v13 = (int32_t *)(&ClassBoardSkillArray[2].klass + v12);
        v14 = *skillIndex;
        v15 = *v13;
        v16 = v13[1];
        ++*skillIndex;
        IsNullOrEmpty = BattleServantData__addSkillInfo(this, 26, v14, v15, v16, -1LL, -1, 0LL, v19);
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)IsNullOrEmpty,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
        LODWORD(monitor) = ClassBoardSkillArray[1].monitor;
        if ( (__int64)++v12 >= (int)monitor )
          return (System_Collections_Generic_List_BattleSkillInfoData__o *)v7;
      }
LABEL_12:
      sub_B7076C(IsNullOrEmpty, v9);
    }
  }
  return (System_Collections_Generic_List_BattleSkillInfoData__o *)v7;
}


void __fastcall BattleServantData__AddClassSkillInfo(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvtData,
        int32_t *skillIndex,
        const MethodInfo *method)
{
  struct System_Int32_array *classPassive; // x22
  BattleServantData_o *v6; // x20
  struct ServantEntity_o *svtdata; // x8
  __int64 v8; // x8
  unsigned __int64 v9; // x21
  __int64 v10; // x0
  const MethodInfo *v11; // [xsp+0h] [xbp-40h]

  if ( !userSvtData
    || (classPassive = userSvtData->fields.classPassive, v6 = this, !classPassive)
    && ((svtdata = this->fields.svtdata) == 0LL || (classPassive = svtdata->fields.classPassive) == 0LL) )
  {
    sub_B7076C(this, userSvtData);
  }
  v8 = *(_QWORD *)&classPassive->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v8 )
      {
        v10 = sub_B70798(this);
        sub_B70738(v10, 0LL);
      }
      this = (BattleServantData_o *)BattleServantData__addSkillInfo(
                                      v6,
                                      10,
                                      v9,
                                      classPassive->m_Items[v9 + 1],
                                      1,
                                      -1LL,
                                      -1,
                                      0LL,
                                      v11);
      *skillIndex = ++v9;
      LODWORD(v8) = classPassive->max_length;
    }
    while ( (__int64)v9 < (int)v8 );
  }
}


void __fastcall BattleServantData__AddPassiveBuffOnTransform(
        BattleServantData_o *this,
        BattleData_o *data,
        BattleLogicSkill_SkillExecArgs_o *skillExecArgs,
        const MethodInfo *method)
{
  struct BattleServantData___c_StaticFields **v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x21
  BattleServantData___c_c *v10; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__748_1; // x22
  Il2CppObject *v13; // x23
  struct BattleServantData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct BattleServantData___c_StaticFields *v21; // x8
  struct BattleServantData___c_StaticFields **v22; // x21
  unsigned __int64 v23; // x10
  int *p_monitor; // x11
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x21
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  BattleSkillInfoData_o *v36; // x0
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  struct BattleServantData___c_StaticFields *v41; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__748_0; // x20
  Il2CppObject *v43; // x21
  struct BattleServantData___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_434F6EF & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleServantData___ctor__);
    sub_B70694(&System_Action_BattleServantData__TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    sub_B70694(&Method_System_Func_BattleSkillInfoData__bool___ctor__);
    sub_B70694(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&BattleLogicSkill_SkillExecArgs_TypeInfo);
    sub_B70694(&Method_BattleServantData___c__AddPassiveBuffOnTransform_b__748_0__);
    sub_B70694(&Method_BattleServantData___c__AddPassiveBuffOnTransform_b__748_1__);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F6EF = 1;
  }
  if ( !skillExecArgs )
  {
    skillExecArgs = (BattleLogicSkill_SkillExecArgs_o *)sub_B70764(BattleLogicSkill_SkillExecArgs_TypeInfo);
    BattleLogicSkill_SkillExecArgs___ctor(skillExecArgs, 0LL);
    if ( !skillExecArgs )
      goto LABEL_58;
    *(_WORD *)&skillExecArgs->fields._RemoveAllUnfixedBuff_k__BackingField = 257;
  }
  if ( !skillExecArgs->fields._Timing_k__BackingField )
    skillExecArgs->fields._Timing_k__BackingField = 1;
  skillInfoList = this->fields.skillInfoList;
  v10 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v10 = BattleServantData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__748_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__748_1;
  if ( !_9__748_1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__748_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__748_1,
      v13,
      Method_BattleServantData___c__AddPassiveBuffOnTransform_b__748_1__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v14 = BattleServantData___c_TypeInfo->static_fields;
    v14->__9__748_1 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__748_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v14->__9__748_1,
      (System_Int32_array **)_9__748_1,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v7 = (struct BattleServantData___c_StaticFields **)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
                                                       (System_Func_TSource__bool__o *)_9__748_1,
                                                       (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  if ( !v7 )
LABEL_58:
    sub_B7076C(v7, v8);
  v21 = *v7;
  v22 = v7;
  if ( WORD1((*v7)[2].__9__444_0) )
  {
    v23 = 0LL;
    p_monitor = (int *)&v21[1].__9__444_0->monitor;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_monitor - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      ++v23;
      p_monitor += 4;
      if ( v23 >= WORD1((*v7)[2].__9__444_0) )
        goto LABEL_21;
    }
    v25 = (__int64)(&v21[2].__9__629_0 + 2 * *p_monitor);
  }
  else
  {
LABEL_21:
    v25 = sub_B08590(v7, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v27 = (*(__int64 (__fastcall **)(struct BattleServantData___c_StaticFields **, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  if ( !v27 )
    sub_B7076C(0LL, v26);
  while ( 1 )
  {
    v28 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_28;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_28:
      v31 = sub_B08590(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    v32 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v34 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_35;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_35:
      v35 = sub_B08590(v27, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v36 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
    if ( !data )
      sub_B7076C(v36, v36);
    BattleData__ActPassiveBuff(data, v36, skillExecArgs, 0, 0, 0LL);
  }
  v37 = *(_QWORD *)v27;
  if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
  {
    v38 = 0LL;
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
        goto LABEL_43;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_43:
    v40 = sub_B08590(v27, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v27, *(_QWORD *)(v40 + 8));
  if ( skillExecArgs->fields._RemoveAllUnfixedBuff_k__BackingField )
  {
    v7 = (struct BattleServantData___c_StaticFields **)BattleServantData___c_TypeInfo;
    if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v7 = (struct BattleServantData___c_StaticFields **)BattleServantData___c_TypeInfo;
    }
    v41 = v7[23];
    _9__748_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v41->__9__748_0;
    if ( !_9__748_0 )
    {
      if ( (*((_BYTE *)v7 + 307) & 4) != 0 && !*((_DWORD *)v7 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v41 = BattleServantData___c_TypeInfo->static_fields;
      }
      v43 = (Il2CppObject *)v41->__9;
      _9__748_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleServantData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__748_0,
        v43,
        Method_BattleServantData___c__AddPassiveBuffOnTransform_b__748_0__,
        (const MethodInfo_264C148 *)Method_System_Action_BattleServantData___ctor__);
      v44 = BattleServantData___c_TypeInfo->static_fields;
      v44->__9__748_0 = (struct System_Action_BattleServantData__o *)_9__748_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v44->__9__748_0,
        (System_Int32_array **)_9__748_0,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50);
    }
    if ( data )
    {
      BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)_9__748_0, 0LL);
      return;
    }
    goto LABEL_58;
  }
}


void __fastcall BattleServantData__AddPassiveSkillInfo(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  int32_t skillIndex; // [xsp+Ch] [xbp-14h] BYREF

  skillIndex = 0;
  BattleServantData__AddClassSkillInfo(this, userSvtData, &skillIndex, v3);
  BattleServantData__AddAddPassiveSkillInfo(this, userSvtData, &skillIndex, v6);
  BattleServantData__AddAppendSkillInfo(this, userSvtData, &skillIndex, v7);
  BattleServantData__AddClassBoardSkillInfo(this, userSvtData, &skillIndex, v8);
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


void __fastcall BattleServantData__ApplyCacheForTransformServant(
        BattleServantData_o *this,
        BattleServantSnapShotShiftServant_o *cache,
        const MethodInfo *method)
{
  int32_t SvtId_k__BackingField; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // kr00_16
  int TransformSvtId_k__BackingField; // w8
  int32_t DispLimitCount_k__BackingField; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // kr10_16

  if ( (byte_434F6FC & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F6FC = 1;
  }
  if ( cache )
  {
    SvtId_k__BackingField = cache->fields._SvtId_k__BackingField;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId_k__BackingField, 0LL);
    this->fields.svtId = v6;
    TransformSvtId_k__BackingField = cache->fields._TransformSvtId_k__BackingField;
    this->fields.transformSvtId = TransformSvtId_k__BackingField;
    if ( TransformSvtId_k__BackingField <= 0 )
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      this->fields.transformSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v6, 0LL);
    }
    this->fields.treasuredvcId = cache->fields._TreasuredvcId_k__BackingField;
    this->fields.treasuredvcLevel = cache->fields._TreasuredvcLevel_k__BackingField;
    DispLimitCount_k__BackingField = cache->fields._DispLimitCount_k__BackingField;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(DispLimitCount_k__BackingField, 0LL);
    this->fields._dispLimitCount_k__BackingField = v9;
    BattleServantData__changeTransformServant(this, *(const MethodInfo **)&v9.fields.fakeValue);
  }
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
  int32_t *p_afterLimitCount; // x24
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  __int64 v8; // x22
  __int64 v9; // x23
  int32_t v10; // w22
  __int64 v11; // x22
  __int64 v12; // x23
  const MethodInfo *v13; // x2
  int32_t DispLimitCount; // w22
  __int64 v15; // x22
  __int64 v16; // x23
  const MethodInfo *v17; // x1
  int32_t CommandDispLimitCount; // w22
  __int64 v19; // x22
  __int64 v20; // x23
  __int64 v21; // x22
  __int64 v22; // x23
  int32_t v23; // w22
  int32_t v24; // w23
  int32_t CardImageLimitCount; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // kr20_16
  struct BattleDeckServantData_o *v27; // x8
  __int64 v28; // x22
  __int64 v29; // x23
  __int64 v30; // x22
  __int64 v31; // x23
  int32_t v32; // w22
  int32_t v33; // w23
  int32_t ImageLimitCount; // w0
  __int64 v35; // x22
  __int64 v36; // x23
  __int64 v37; // x22
  __int64 v38; // x23
  int32_t v39; // w22
  int32_t v40; // w23
  int32_t v41; // w0
  __int64 v42; // x22
  __int64 v43; // x23
  __int64 v44; // x22
  __int64 v45; // x23
  int32_t v46; // w22
  int32_t v47; // w23
  int32_t v48; // w0
  __int64 v49; // x22
  __int64 v50; // x23
  int32_t v51; // w22
  int32_t IconLimitCount; // w0
  int32_t ServantImageLimitSealAfter; // w0
  __int64 v54; // x22
  __int64 v55; // x23
  int32_t v56; // w0
  int32_t v57; // w22
  int32_t v58; // w23
  struct BattleDeckServantData_o *v59; // x8
  WarQuestSelectionMaster_o *v60; // x0
  __int64 v61; // x22
  __int64 v62; // x23
  __int64 v63; // x24
  __int64 v64; // x25
  ServantLimitSpoilerProtectionMaster_o *v65; // x21
  int32_t v66; // w0
  __int64 v67; // x22
  __int64 v68; // x23
  int32_t v69; // w0
  int32_t v70; // w0
  int32_t v71; // w0
  int32_t v72; // w0
  __int64 v73; // x22
  __int64 v74; // x23
  int32_t v75; // w0
  int32_t v76; // w0
  int32_t v77; // w0
  int32_t v78; // w0
  __int64 v79; // x21
  __int64 v80; // x22
  int32_t v81; // w21
  BalanceConfig_c *v82; // x8
  __int64 v83; // x21
  __int64 v84; // x22
  __int64 v85; // x21
  __int64 v86; // x22
  __int64 v87; // x21
  __int64 v88; // x22
  __int64 v89; // x21
  __int64 v90; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // krC0_16
  __int64 v92; // x22
  __int64 v93; // x23
  int32_t v94; // w22
  int32_t v95; // w0
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v97; // w22
  int32_t v98; // w0
  int32_t v99; // w0
  int32_t v100; // w22
  int32_t v101; // w0
  int32_t v102; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // krF0_16
  struct BattleDeckServantData_o *v104; // x8
  __int64 v105; // x21
  __int64 v106; // x22
  __int64 v107; // x20
  __int64 v108; // x21
  __int64 v109; // x21
  __int64 v110; // x22
  int32_t v111; // w0
  __int64 v112; // x8
  int32_t v113; // w20
  int32_t v114; // w21
  int32_t v115; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // kr00_16
  int32_t v117; // w0
  int32_t v118; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x1.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x1.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x1.16

  v3 = userSvt;
  v4 = this;
  if ( (byte_434F628 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (BattleServantData_o *)sub_B70694(&OptionManager_TypeInfo);
    byte_434F628 = 1;
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
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  this = (BattleServantData_o *)Follower__IsNpc(v4->fields.followerType, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    deckSvt = v4->fields.deckSvt;
    if ( !deckSvt )
      goto LABEL_184;
    if ( deckSvt->fields.npcId <= 0 )
    {
      v9 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
      v8 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v119.fields.currentCryptoKey = v9;
      *(_QWORD *)&v119.fields.fakeValue = v8;
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v119, 0LL);
      this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                      v4->fields.limitcount,
                                      0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_184;
      this = (BattleServantData_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                      Master_WarQuestSelectionMaster,
                                      v10,
                                      (int32_t)this,
                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
        v11 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v120.fields.currentCryptoKey = v12;
        *(_QWORD *)&v120.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v120, 0LL) )
        {
          DispLimitCount = BattleServantData__getDispLimitCount(v4, 1, v13);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         DispLimitCount,
                                                         0LL);
        }
        v16 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v121.fields.currentCryptoKey = v16;
        *(_QWORD *)&v121.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v121, 0LL) )
        {
          CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(v4, v17);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                CommandDispLimitCount,
                                                                0LL);
        }
        v20 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v122.fields.currentCryptoKey = v20;
        *(_QWORD *)&v122.fields.fakeValue = v19;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v122, 0LL);
        if ( !(_DWORD)this )
        {
          v22 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
          v21 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v123.fields.currentCryptoKey = v22;
          *(_QWORD *)&v123.fields.fakeValue = v21;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v123, 0LL);
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v3->fields.limitCount, 0LL);
          if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ImageLimitCount_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
          }
          CardImageLimitCount = ImageLimitCount__GetCardImageLimitCount(v23, v24, 1, 0, 0LL);
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(CardImageLimitCount + 1, 0LL);
          userSvt = *(BattleUserServantData_o **)&v26.fields.fakeValue;
          this = *(BattleServantData_o **)&v26.fields.currentCryptoKey;
          v4->fields._iconLimitCount_k__BackingField = v26;
        }
        v27 = v4->fields.deckSvt;
        if ( v27 )
        {
          if ( v27->fields.isFollowerSvt && !Follower__IsNpc(v4->fields.followerType, 0LL) )
          {
            if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !OptionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            }
            if ( !OptionManager__GetFriendCostume(0LL) )
            {
              v29 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
              v28 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v124.fields.currentCryptoKey = v29;
              *(_QWORD *)&v124.fields.fakeValue = v28;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v124, 0LL) >= 11 )
              {
                v31 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
                v30 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v125.fields.currentCryptoKey = v31;
                *(_QWORD *)&v125.fields.fakeValue = v30;
                v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v125, 0LL);
                v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v3->fields.limitCount, 0LL);
                if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                }
                ImageLimitCount = ImageLimitCount__GetImageLimitCount(v32, v33, 0LL);
                v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                               ImageLimitCount,
                                                               0LL);
              }
              v36 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
              v35 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v126.fields.currentCryptoKey = v36;
              *(_QWORD *)&v126.fields.fakeValue = v35;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v126, 0LL) >= 11 )
              {
                v38 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
                v37 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v127.fields.currentCryptoKey = v38;
                *(_QWORD *)&v127.fields.fakeValue = v37;
                v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v127, 0LL);
                v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v3->fields.limitCount, 0LL);
                if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                }
                v41 = ImageLimitCount__GetImageLimitCount(v39, v40, 0LL);
                v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                      v41,
                                                                      0LL);
              }
              v43 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
              v42 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v128.fields.currentCryptoKey = v43;
              *(_QWORD *)&v128.fields.fakeValue = v42;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v128, 0LL) >= 11 )
              {
                v45 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
                v44 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v129.fields.currentCryptoKey = v45;
                *(_QWORD *)&v129.fields.fakeValue = v44;
                v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v129, 0LL);
                v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v3->fields.limitCount, 0LL);
                if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ImageLimitCount_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                }
                v48 = ImageLimitCount__GetCardImageLimitCount(v46, v47, 0, 0, 0LL);
                v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                               v48 + 1,
                                                               0LL);
              }
            }
          }
          v50 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v130.fields.currentCryptoKey = v50;
          *(_QWORD *)&v130.fields.fakeValue = v49;
          v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v130, 0LL);
          IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v3, 0, 0LL);
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         Master_WarQuestSelectionMaster,
                                         v51,
                                         IconLimitCount,
                                         0LL);
          if ( ServantImageLimitSealAfter >= 11 )
          {
            *p_afterLimitCount = ServantImageLimitSealAfter;
          }
          else
          {
            v3->fields.afterLimitCount = 2 * ServantImageLimitSealAfter;
            v55 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
            v54 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v131.fields.currentCryptoKey = v55;
            *(_QWORD *)&v131.fields.fakeValue = v54;
            v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v131, 0LL);
            v57 = *p_afterLimitCount;
            v58 = v56;
            if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ImageLimitCount_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            }
            ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v58, v57, 0LL);
          }
          v3->fields.afterIconLimitCount = ServantImageLimitSealAfter;
          v93 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
          v92 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v140.fields.currentCryptoKey = v93;
          *(_QWORD *)&v140.fields.fakeValue = v92;
          v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v140, 0LL);
          v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                  v4->fields._iconLimitCount_k__BackingField,
                  0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         Master_WarQuestSelectionMaster,
                                         v94,
                                         v95,
                                         0LL);
          v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         ServantLimitCountSealAfter,
                                                         0LL);
          v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v3->fields.svtId, 0LL);
          v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                  v4->fields._dispLimitCount_k__BackingField,
                  0LL);
          v99 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v97, v98, 0LL);
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         v99,
                                                         0LL);
          v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v3->fields.svtId, 0LL);
          v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                   v4->fields._commandCardLimitCount_k__BackingField,
                   0LL);
          v102 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v100, v101, 0LL);
          v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v102, 0LL);
          userSvt = *(BattleUserServantData_o **)&v103.fields.fakeValue;
          this = *(BattleServantData_o **)&v103.fields.currentCryptoKey;
          v4->fields._commandCardLimitCount_k__BackingField = v103;
          goto LABEL_160;
        }
LABEL_184:
        sub_B7076C(this, userSvt);
      }
    }
  }
  v59 = v4->fields.deckSvt;
  if ( !v59 )
    goto LABEL_184;
  if ( v59->fields.isFollowerSvt )
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
        v60 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
        v62 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
        v61 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
        v64 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v63 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        v65 = (ServantLimitSpoilerProtectionMaster_o *)v60;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v132.fields.currentCryptoKey = v64;
        *(_QWORD *)&v132.fields.fakeValue = v63;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v132, 0LL);
        if ( !v65 )
          goto LABEL_184;
        *(_QWORD *)&v145.fields.currentCryptoKey = v62;
        *(_QWORD *)&v145.fields.fakeValue = v61;
        v66 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v65, v145, (int32_t)this, 0LL);
        v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v66,
                                                       0LL);
        v67 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
        v68 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
        v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                v4->fields._dispLimitCount_k__BackingField,
                0LL);
        *(_QWORD *)&v146.fields.currentCryptoKey = v67;
        *(_QWORD *)&v146.fields.fakeValue = v68;
        v70 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v65, v146, v69, 0LL);
        v133 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v70, 0LL);
        v4->fields._dispLimitCount_k__BackingField = v133;
        v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v133, 0LL);
        v72 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v65, v71, 0LL);
        v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v72,
                                                       0LL);
        v73 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
        v74 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                v4->fields._commandCardLimitCount_k__BackingField,
                0LL);
        *(_QWORD *)&v147.fields.currentCryptoKey = v73;
        *(_QWORD *)&v147.fields.fakeValue = v74;
        v76 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v65, v147, v75, 0LL);
        v134 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v76, 0LL);
        v4->fields._commandCardLimitCount_k__BackingField = v134;
        v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v134, 0LL);
        v78 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v65, v77, 0LL);
        v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                              v78,
                                                              0LL);
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( !OptionManager__GetFriendImageLimitCount(0LL) )
      {
        v80 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v79 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v135.fields.currentCryptoKey = v80;
        *(_QWORD *)&v135.fields.fakeValue = v79;
        v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v135, 0LL);
        v82 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v82 = BalanceConfig_TypeInfo;
        }
        if ( v81 >= v82->static_fields->ServantLimitMax )
        {
          v84 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
          v83 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v136.fields.currentCryptoKey = v84;
          *(_QWORD *)&v136.fields.fakeValue = v83;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v136, 0LL) <= 10 )
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
        v86 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
        v85 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v137.fields.currentCryptoKey = v86;
        *(_QWORD *)&v137.fields.fakeValue = v85;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v137, 0LL) >= 11 )
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
        v88 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
        v87 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v138.fields.currentCryptoKey = v88;
        *(_QWORD *)&v138.fields.fakeValue = v87;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v138, 0LL) >= 11 )
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
        v90 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v89 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v139.fields.currentCryptoKey = v90;
        *(_QWORD *)&v139.fields.fakeValue = v89;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v139, 0LL);
        if ( (int)this >= 11 )
        {
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
          userSvt = *(BattleUserServantData_o **)&v91.fields.fakeValue;
          this = *(BattleServantData_o **)&v91.fields.currentCryptoKey;
          v4->fields._iconLimitCount_k__BackingField = v91;
        }
      }
    }
  }
LABEL_160:
  v104 = v4->fields.deckSvt;
  if ( !v104 )
    goto LABEL_184;
  if ( v104->fields.isFollowerSvt && Follower__IsNpc(v4->fields.followerType, 0LL) )
  {
    v106 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
    v105 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v141.fields.currentCryptoKey = v106;
    *(_QWORD *)&v141.fields.fakeValue = v105;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v141, 0LL) )
    {
      v107 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
      v108 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    }
    else
    {
      v110 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
      v109 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v142.fields.currentCryptoKey = v110;
      *(_QWORD *)&v142.fields.fakeValue = v109;
      v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v142, 0LL);
      v112 = *(_QWORD *)&v3->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v143.fields.fakeValue = *(_QWORD *)&v3->fields.limitCount.fields.fakeValue;
      v113 = v111;
      *(_QWORD *)&v143.fields.currentCryptoKey = v112;
      v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v143, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      v115 = ImageLimitCount__GetCardImageLimitCount(v113, v114, 1, 0, 0LL);
      v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v115 + 1, 0LL);
      v108 = *(_QWORD *)&v116.fields.fakeValue;
      v107 = *(_QWORD *)&v116.fields.currentCryptoKey;
      v4->fields._iconLimitCount_k__BackingField = v116;
    }
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v144.fields.currentCryptoKey = v107;
    *(_QWORD *)&v144.fields.fakeValue = v108;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v144, 0LL) <= 10 )
    {
      v117 = BasicHelper__DecryptValue_20858460(v4->fields._iconLimitCount_k__BackingField, 0LL);
      v118 = UnityEngine_Mathf__Clamp_41069588(v117, 1, 3, 0LL);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v118, 0LL);
    }
  }
}


bool __fastcall BattleServantData__CancelBuffExtendingLife(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B7076C(0LL, method);
  return BattleBuffData__CancelExtendingLife(buffData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__ChangeBuffValue(
        BattleServantData_o *this,
        int32_t changeValue,
        System_Int32_array *targetIndivi,
        bool isTurn,
        bool isAny,
        bool isAllowRemove,
        System_Collections_Generic_HashSet_BattleBuffData_BuffData__o **buffsToRemove,
        bool isExcludeUnSubStateIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v17; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  char v24; // w27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x24
  __int64 v26; // x1
  void *buffData; // x0
  const MethodInfo *v28; // x2
  int v29; // w8
  void *v30; // x25
  bool v31; // w10
  unsigned int v32; // w28
  int v33; // w21
  BattleBuffData_BuffData_o *v34; // x26
  int turn; // w9
  int32_t v36; // w19
  int v37; // w8
  int count; // w8
  bool v39; // cc
  _BOOL4 v40; // w8
  _BOOL4 v41; // w19
  BattleBuffData_o *v42; // x19
  __int64 v44; // x0
  BattleServantData_o *v45; // [xsp+0h] [xbp-70h]
  bool v46; // [xsp+Ch] [xbp-64h]
  BattleServantData___c__DisplayClass535_0_o v47; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_434F68F & 1) == 0 )
  {
    sub_B70694(&BattleServantData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_434F68F = 1;
  }
  v47.fields.targetIndivi = targetIndivi;
  *(_QWORD *)&v47.fields.isExcludeUnSubStateIndiv = isExcludeUnSubStateIndiv;
  *(_DWORD *)&v47.fields.isAny = isAny;
  sub_B70630(
    (BattleServantConfConponent_o *)&v47.fields.targetIndivi,
    (System_Int32_array **)targetIndivi,
    (System_String_array **)targetIndivi,
    (System_String_array **)isTurn,
    (System_Boolean_array **)isAny,
    (System_Int32_array **)isAllowRemove,
    (System_Int32_array *)buffsToRemove,
    (System_Int32_array *)isExcludeUnSubStateIndiv);
  v17 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v17,
    (const MethodInfo_2EB4850 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  *buffsToRemove = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v17;
  sub_B70630((BattleServantConfConponent_o *)buffsToRemove, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
  if ( !v47.fields.targetIndivi )
  {
    v24 = 0;
    return v24 & 1;
  }
  v24 = 0;
  if ( changeValue && *(_QWORD *)&v47.fields.targetIndivi->max_length )
  {
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    buffData = this->fields.buffData;
    if ( !buffData || (buffData = BattleBuffData__getActiveList((BattleBuffData_o *)buffData, 1, 0LL)) == 0LL )
LABEL_50:
      sub_B7076C(buffData, v26);
    v29 = *((_DWORD *)buffData + 6);
    v30 = buffData;
    v45 = this;
    if ( v29 < 1 )
    {
      v24 = 0;
      if ( !v25 )
        goto LABEL_50;
      goto LABEL_47;
    }
    v46 = isAllowRemove;
    v31 = !isAllowRemove;
    v32 = 0;
    v24 = 0;
    v33 = changeValue < 0 && v31;
    while ( 1 )
    {
      if ( v32 >= v29 )
      {
        v44 = sub_B70798(buffData);
        sub_B70738(v44, 0LL);
      }
      v34 = (BattleBuffData_BuffData_o *)*((_QWORD *)v30 + (int)v32 + 4);
      if ( !v34 )
        goto LABEL_50;
      if ( isTurn )
      {
        turn = v34->fields.turn;
        if ( turn >= 1 && ((turn < 3) & (unsigned __int8)v33) == 0 )
        {
          if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleServantData_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
          }
          buffData = (void *)BattleServantData___ChangeBuffValue_g__IsMatchIndividualityCond_535_0(v34, &v47, v28);
          if ( ((unsigned __int8)buffData & 1) != 0 )
          {
            v36 = v34->fields.turn;
            v37 = v36 + changeValue;
            v34->fields.turn = v36 + changeValue;
            if ( v36 + changeValue <= 0 )
            {
              if ( v46 )
              {
                v34->fields.turn = 0;
                buffData = *buffsToRemove;
                if ( !*buffsToRemove )
                  goto LABEL_50;
                System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                  (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)buffData,
                  (WarBoardAIRoute_RouteData_o *)v34,
                  (const MethodInfo_2EB5A0C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
                v37 = v34->fields.turn;
              }
              else
              {
                if ( (v36 & 1) != 0 )
                  v37 = 1;
                else
                  v37 = 2;
                v34->fields.turn = v37;
              }
            }
            goto LABEL_38;
          }
        }
      }
      else
      {
        count = v34->fields.count;
        v39 = count < 1;
        v40 = count == 1;
        if ( !v39 && (v40 & v33 & 1) == 0 )
        {
          if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleServantData_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
          }
          buffData = (void *)BattleServantData___ChangeBuffValue_g__IsMatchIndividualityCond_535_0(v34, &v47, v28);
          if ( ((unsigned __int8)buffData & 1) != 0 )
          {
            v36 = v34->fields.count;
            v37 = v36 + changeValue;
            v34->fields.count = v36 + changeValue;
            if ( v36 + changeValue <= 0 )
            {
              if ( v46 )
              {
                v34->fields.count = 0;
                buffData = *buffsToRemove;
                if ( !*buffsToRemove )
                  goto LABEL_50;
                System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
                  (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)buffData,
                  (WarBoardAIRoute_RouteData_o *)v34,
                  (const MethodInfo_2EB5A0C *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
                v37 = v34->fields.count;
              }
              else
              {
                v37 = 1;
                v34->fields.count = 1;
              }
            }
LABEL_38:
            v41 = v37 != v36;
            v24 |= v41;
            buffData = (void *)BattleBuffData_BuffData__IslinkageTarget(v34, 0LL);
            if ( v41 && ((unsigned __int8)buffData & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_50;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v25,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
            }
          }
        }
      }
      v29 = *((_DWORD *)v30 + 6);
      if ( (int)++v32 >= v29 )
      {
        if ( !v25 )
          goto LABEL_50;
LABEL_47:
        v42 = v45->fields.buffData;
        buffData = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                     (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
        if ( !v42 )
          goto LABEL_50;
        BattleBuffData__syncLinkageBuffChangeParam(v42, (BattleBuffData_BuffData_array *)buffData, 0LL);
        return v24 & 1;
      }
    }
  }
  return v24 & 1;
}


bool __fastcall BattleServantData__ChangeSkillRemainingTurn(
        BattleServantData_o *this,
        BattleSkillInfoData_o *skillInfo,
        BattleSkillInfoData_o *beforeDeathSkillInfo,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x21
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t BattleStartRemainingTurn; // w0
  int32_t chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_434F62F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_SkillLvMaster___);
    this = (BattleServantData_o *)sub_B70694(&DataManager_TypeInfo);
    byte_434F62F = 1;
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
  Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillLvMaster___);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_WarQuestSelectionMaster )
LABEL_20:
    sub_B7076C(this, skillInfo);
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


bool __fastcall BattleServantData__CheckAvoidFuncExecSelf(
        BattleServantData_o *this,
        System_Int32_array *funcIndividuality,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  BattleBuffData_CheckIndividualitiesData_o *v7; // x0
  __int64 v8; // x1
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434F6EB & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6EB = 1;
  }
  usedBuff = 0LL;
  BuffData = BattleServantData__get_BuffData(this, (const MethodInfo *)funcIndividuality);
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v6
    || (v7 = BattleBuffData_CheckIndividualitiesData__AddSelfIndividuality(v6, funcIndividuality, 0LL), !BuffData) )
  {
    sub_B7076C(v7, v8);
  }
  return BattleBuffData__checkActBuff_31767764(BuffData, 130, v7, &usedBuff, 0LL);
}


bool __fastcall BattleServantData__CheckAvoidance(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        BattleBuffData_BuffData_o **usedBuff,
        bool isSvtAction,
        System_Int32_array *notSvtIndivArray,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v9; // x0
  __int64 v10; // x1

  buffData = this->fields.buffData;
  v9 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         (const MethodInfo *)notSvtIndivArray);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__checkActBuff_31767764(buffData, 18, v9, usedBuff, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__CheckAvoidanceAttackDeathDamage(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o **usedBuff,
        int32_t damage,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualityData,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  *usedBuff = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)usedBuff,
    0LL,
    *(System_String_array ***)&damage,
    (System_String_array **)checkIndividualityData,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) > damage )
    return 0;
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B7076C(0LL, v12);
  FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 129, checkIndividualityData, 0, 0LL);
  *usedBuff = FirstMatchCondBuff;
  sub_B70630(
    (BattleServantConfConponent_o *)usedBuff,
    (System_Int32_array **)FirstMatchCondBuff,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  return *usedBuff != 0LL;
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
    sub_B7076C(v9, v10);
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
  System_Int32_array *Individualities_20739892; // x0

  v4 = buffIndiv;
  v5 = this;
  if ( opponentSvt )
  {
    this = (BattleServantData_o *)BattleServantData__getIndividualities_20739892(
                                    opponentSvt,
                                    buffIndiv,
                                    (const MethodInfo *)opponentSvt);
    v4 = (System_Int32_array *)this;
  }
  buffData = v5->fields.buffData;
  if ( !buffData )
    sub_B7076C(this, buffIndiv);
  BuffIndividualities = BattleBuffData__getBuffIndividualities(v5->fields.buffData, 0, 0, 0, 0, 0LL);
  Individualities_20739892 = BattleServantData__getIndividualities_20739892(v5, BuffIndividualities, v8);
  return BattleBuffData__CheckDisableForciblyAddStateBuffAvoid(buffData, Individualities_20739892, v4, 0LL);
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
            v17 = sub_B70798(SelectedNobleSeqId);
            sub_B70738(v17, 0LL);
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


bool __fastcall BattleServantData__CheckInvincible(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        BattleBuffData_BuffData_o **usedBuff,
        bool isSvtAction,
        System_Int32_array *notSvtIndivArray,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v9; // x0
  __int64 v10; // x1

  buffData = this->fields.buffData;
  v9 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         (const MethodInfo *)notSvtIndivArray);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__checkActBuff_31767764(buffData, 16, v9, usedBuff, 0LL);
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct BattleActionData_DamageData_o *v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x6
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x6
  int32_t v49; // w8
  const MethodInfo *v50; // x6
  BattleServantData_o *v51; // x2
  const MethodInfo *v52; // x2
  BattleServantData_o *v53; // x2
  const MethodInfo *v54; // x2
  double v55; // d0
  struct BattleBuffData_o *buffData; // x8
  BattleServantData___c__DisplayClass657_0_o v57; // [xsp+0h] [xbp-80h] BYREF
  BattleBuffData_BuffData_o *usedBuff; // [xsp+38h] [xbp-48h] BYREF

  v57.fields.__4__this = this;
  usedBuff = 0LL;
  memset(&v57.fields.isSvtAction, 0, 32);
  sub_B70630(
    (BattleServantConfConponent_o *)&v57,
    (System_Int32_array **)this,
    (System_String_array **)actor,
    (System_String_array **)command,
    (System_Boolean_array **)damageData,
    (System_Int32_array **)damage,
    (System_Int32_array *)minimumDamageFlg,
    (System_Int32_array *)hitStat);
  v57.fields.actor = actor;
  sub_B70630(
    (BattleServantConfConponent_o *)&v57.fields.actor,
    (System_Int32_array **)actor,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v57.fields.command = command;
  sub_B70630(
    (BattleServantConfConponent_o *)&v57.fields.command,
    (System_Int32_array **)command,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v57.fields.damageData = damageData;
  sub_B70630(
    (BattleServantConfConponent_o *)&v57.fields.damageData,
    (System_Int32_array **)damageData,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v57.fields.isSvtAction = v57.fields.actor != 0LL;
  if ( !data )
    goto LABEL_36;
  v57.fields.notSvtActorIndivArray = BattleData__GetNotSvtActorIndividualityArray(
                                       data,
                                       mainAction,
                                       v57.fields.actor != 0LL,
                                       0LL);
  sub_B70630(
    (BattleServantConfConponent_o *)&v57.fields.notSvtActorIndivArray,
    (System_Int32_array **)v57.fields.notSvtActorIndivArray,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( !v57.fields.damageData )
    goto LABEL_36;
  if ( v57.fields.damageData->fields.isSpecialInvincible )
  {
    *damage = 0.0;
    *minimumDamageFlg = 0;
    *hitStat = 1;
    if ( !v57.fields.actor || BattleServantData__checkPierceInvincible(v57.fields.actor, v57.fields.command, this, v44) )
      return;
LABEL_18:
    if ( v57.fields.actor )
      BattleServantData__checkBreakAvoidance(v57.fields.actor, v57.fields.command, this, v46);
    return;
  }
  if ( BattleServantData__CheckAvoidanceIndividuality(
         this,
         v57.fields.command,
         v57.fields.actor,
         &v57.fields.damageData->fields.defNoDamageBuffId,
         v57.fields.isSvtAction,
         v57.fields.notSvtActorIndivArray,
         v45) )
  {
    goto LABEL_8;
  }
  if ( !v57.fields.actor )
  {
    v51 = 0LL;
LABEL_16:
    if ( BattleServantData__CheckInvincible(
           this,
           v57.fields.command,
           v51,
           &usedBuff,
           v57.fields.isSvtAction,
           v57.fields.notSvtActorIndivArray,
           v48) )
    {
      *damage = 0.0;
      *minimumDamageFlg = 0;
      *hitStat = 1;
      goto LABEL_18;
    }
    if ( v57.fields.actor )
    {
      if ( BattleServantData__checkBreakAvoidance(v57.fields.actor, v57.fields.command, this, v46) )
        goto LABEL_23;
      v53 = v57.fields.actor;
    }
    else
    {
      v53 = 0LL;
    }
    if ( BattleServantData__CheckAvoidance(
           this,
           v57.fields.command,
           v53,
           &usedBuff,
           v57.fields.isSvtAction,
           v57.fields.notSvtActorIndivArray,
           v50) )
    {
LABEL_8:
      v49 = 2;
      *damage = 0.0;
      *minimumDamageFlg = 0;
LABEL_9:
      *hitStat = v49;
      return;
    }
    if ( !BattleServantData___CheckInvincibleAvoidanceBuff_g__CheckAvoidanceDeathDamageFunc_657_0(
            this,
            *damage,
            &v57,
            v54) )
      return;
    v36 = v57.fields.damageData;
    if ( v57.fields.damageData )
    {
      v55 = *damage == INFINITY ? -*damage : *damage;
      BattleActionData_DamageData__SaveResetDamageArray(v57.fields.damageData, (int)v55, *minimumDamageFlg, 0LL);
      *damage = 0.0;
      *minimumDamageFlg = 0;
      *hitStat = 2;
      buffData = this->fields.buffData;
      if ( buffData )
      {
        buffData->fields.isNoDamage = 1;
        return;
      }
    }
LABEL_36:
    sub_B7076C(v36, v37);
  }
  if ( !BattleServantData__checkPierceInvincible(v57.fields.actor, v57.fields.command, this, v47) )
  {
    v51 = v57.fields.actor;
    goto LABEL_16;
  }
  if ( BattleServantData__CheckInvincible(this, v57.fields.command, v57.fields.actor, &usedBuff, 1, 0LL, v48) )
  {
    v49 = 3;
    goto LABEL_9;
  }
LABEL_23:
  if ( BattleServantData__CheckAvoidance(this, v57.fields.command, v57.fields.actor, &usedBuff, 1, 0LL, v50)
    || BattleServantData___CheckInvincibleAvoidanceBuff_g__CheckAvoidanceDeathDamageFunc_657_0(this, *damage, &v57, v52) )
  {
    v49 = 4;
    goto LABEL_9;
  }
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
  bool v9; // w24
  System_Int32_array *NotSvtActorIndividualityArray; // x23
  const MethodInfo *v14; // x6
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  char v21; // w21
  System_Int32_array **v22; // x1
  struct BattleBuffData_o *v23; // x8
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x6
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct BattleBuffData_BuffData_o *v32; // x1
  BattleBuffData_BuffData_o *v33; // [xsp+8h] [xbp-48h] BYREF
  BattleBuffData_BuffData_o *v34; // [xsp+10h] [xbp-40h] BYREF
  BattleBuffData_BuffData_o *usedBuff; // [xsp+18h] [xbp-38h] BYREF

  v34 = 0LL;
  usedBuff = 0LL;
  v33 = 0LL;
  buffData = this->fields.buffData;
  if ( !buffData
    || (v8 = this, this = (BattleServantData_o *)data, buffData->fields.isNoDamage = 0, !data)
    || (v9 = actor != 0LL,
        NotSvtActorIndividualityArray = BattleData__GetNotSvtActorIndividualityArray(
                                          data,
                                          mainAction,
                                          actor != 0LL,
                                          0LL),
        this = (BattleServantData_o *)BattleServantData__checkSpecialInvincible(
                                        v8,
                                        command,
                                        actor,
                                        &usedBuff,
                                        v9,
                                        NotSvtActorIndividualityArray,
                                        v14),
        !damageData) )
  {
LABEL_23:
    sub_B7076C(this, data);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v21 = 1;
    damageData->fields.isSpecialInvincible = 1;
    v22 = (System_Int32_array **)usedBuff;
    damageData->fields._NoDamageAffectedBuff_k__BackingField = usedBuff;
    sub_B70630(
      (BattleServantConfConponent_o *)&damageData->fields._NoDamageAffectedBuff_k__BackingField,
      v22,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v23 = v8->fields.buffData;
    if ( !v23 )
      goto LABEL_23;
    goto LABEL_21;
  }
  this = (BattleServantData_o *)BattleServantData__CheckAvoidanceIndividuality(
                                  v8,
                                  command,
                                  actor,
                                  &damageData->fields.defNoDamageBuffId,
                                  actor != 0LL,
                                  NotSvtActorIndividualityArray,
                                  (const MethodInfo *)v19);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_19;
  if ( !actor
    || (this = (BattleServantData_o *)BattleServantData__checkPierceInvincible(actor, command, v8, v24),
        ((unsigned __int8)this & 1) == 0) )
  {
    if ( BattleServantData__CheckInvincible(v8, command, actor, &v34, actor != 0LL, NotSvtActorIndividualityArray, v25) )
    {
      v32 = v34;
LABEL_18:
      damageData->fields._NoDamageAffectedBuff_k__BackingField = v32;
      sub_B70630(
        (BattleServantConfConponent_o *)&damageData->fields._NoDamageAffectedBuff_k__BackingField,
        (System_Int32_array **)v32,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
LABEL_19:
      v23 = v8->fields.buffData;
      if ( !v23 )
        goto LABEL_23;
      v21 = 1;
      goto LABEL_21;
    }
    if ( !actor
      || (this = (BattleServantData_o *)BattleServantData__checkBreakAvoidance(
                                          actor,
                                          command,
                                          v8,
                                          (const MethodInfo *)v27),
          ((unsigned __int8)this & 1) == 0) )
    {
      if ( !BattleServantData__CheckAvoidance(
              v8,
              command,
              actor,
              &v33,
              actor != 0LL,
              NotSvtActorIndividualityArray,
              (const MethodInfo *)v30) )
        return;
      v32 = v33;
      goto LABEL_18;
    }
  }
  v23 = v8->fields.buffData;
  if ( !v23 )
    goto LABEL_23;
  v21 = 0;
LABEL_21:
  v23->fields.isNoDamage = v21;
}


bool __fastcall BattleServantData__CheckNotTargetSkill(
        BattleServantData_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Int32_array *NotTargetSkillIdArray; // x0

  if ( (byte_434F6E9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_IndexOf_int___);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6E9 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
  NotTargetSkillIdArray = BattleBuffData__GetNotTargetSkillIdArray(buffData, v6, 0LL);
  return System_Array__IndexOf_int_(
           NotTargetSkillIdArray,
           skillId,
           (const MethodInfo_1FCBFE4 *)Method_System_Array_IndexOf_int___) != -1;
}


bool __fastcall BattleServantData__CheckPierceSubdamage(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434F6B7 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6B7 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__checkActBuff_31767764(buffData, 132, v8, &usedBuff, 0LL);
}


bool __fastcall BattleServantData__CheckSelectedNobleSeqIsGroup(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0
  __int64 v4; // x1

  if ( this->fields.groupSeqIdFromMstTDSeqWeight > 0 )
    return (unsigned __int8)&dword_0 + 1;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
  if ( !TreasureDevice )
    sub_B7076C(0LL, v4);
  return TreasureDvcEntity__IsGroupId(TreasureDevice, 0LL);
}


bool __fastcall BattleServantData__CheckUpdateUpDownOnlyResultHp(
        BattleServantData_o *this,
        int32_t beforeMaxHp,
        bool isHeal,
        const MethodInfo *method)
{
  unsigned int v7; // w22
  unsigned int v8; // w23
  const MethodInfo *v9; // x3
  bool v10; // w19

  v7 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, bool, const MethodInfo *))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr,
         isHeal,
         method);
  v8 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._11_get_reducedhp.method)(
         this,
         this->klass->vtable._12_set_reducedhp.methodPtr);
  v10 = BattleServantData__checkUpdateUpdownHp(this, beforeMaxHp, isHeal, v9);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    v7,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
    this,
    v8,
    this->klass->vtable._13_get_resultHp.methodPtr);
  return v10;
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.svtOverwriteName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.svtOverwriteBattleName = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName, 0LL, v9, v10, v11, v12, v13, v14);
}


void __fastcall BattleServantData__ContinuePostProcess(BattleServantData_o *this, const MethodInfo *method)
{
  unsigned int MaxHp; // w20
  __int64 v4; // x1
  BattleBuffData_o *buffData; // x0

  MaxHp = BattleServantData__getMaxHp(this, method);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    MaxHp,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B7076C(0LL, v4);
  BattleBuffData__updateAuraBuffList(buffData, 0LL);
}


void __fastcall BattleServantData__ContinuePreProcess(
        BattleServantData_o *this,
        bool isDeadContinue,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *buffData; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  int32_t lineMaxNp; // w1
  System_Int32_array **buffMst; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleBuffData_o *v17; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x22
  int v19; // w8
  _DWORD *v20; // x20
  unsigned int i; // w21
  char *v22; // x22
  char *v23; // x22
  void *v24; // t1
  unsigned int MaxHp; // w0
  unsigned int v26; // w0
  const MethodInfo *v27; // x2
  __int64 v28; // x0

  if ( (byte_434F645 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass370_0__ContinuePreProcess_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass370_0_TypeInfo);
    byte_434F645 = 1;
  }
  v5 = sub_B70764(BattleServantData___c__DisplayClass370_0_TypeInfo);
  BattleServantData___c__DisplayClass370_0___ctor((BattleServantData___c__DisplayClass370_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_BYTE *)(v5 + 16) = isDeadContinue;
  lineMaxNp = this->fields.lineMaxNp;
  this->fields.status = 0;
  this->fields.np = 0;
  BattleServantData__addNp(this, lineMaxNp, 1, v8);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_22;
  buffMst = (System_Int32_array **)BattleBuffData__get_buffMst((BattleBuffData_o *)buffData, 0LL);
  *(_QWORD *)(v5 + 24) = buffMst;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), buffMst, v11, v12, v13, v14, v15, v16);
  v17 = this->fields.buffData;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_BattleServantData___c__DisplayClass370_0__ContinuePreProcess_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  if ( !v17
    || (BattleBuffData__RemoveActiveBuffWithCondition(v17, (System_Func_BattleBuffData_BuffData__bool__o *)v18, 0LL),
        (buffData = this->fields.buffData) == 0LL)
    || (buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL)) == 0LL )
  {
LABEL_22:
    sub_B7076C(buffData, v7);
  }
  v19 = *((_DWORD *)buffData + 6);
  v20 = buffData;
  if ( v19 >= 1 )
  {
    for ( i = 0; (int)i < v19; ++i )
    {
      if ( i >= v19 )
      {
LABEL_21:
        v28 = sub_B70798(buffData);
        sub_B70738(v28, 0LL);
      }
      v22 = (char *)&v20[2 * i];
      v24 = (void *)*((_QWORD *)v22 + 4);
      v23 = v22 + 32;
      buffData = v24;
      if ( !v24 )
        goto LABEL_22;
      buffData = (void *)BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( ((unsigned __int8)buffData & 1) != 0 )
        goto LABEL_16;
      if ( i >= v20[6] )
        goto LABEL_21;
      buffData = *(void **)v23;
      if ( !*(_QWORD *)v23 )
        goto LABEL_22;
      buffData = (void *)BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( ((unsigned __int8)buffData & 1) != 0 )
      {
LABEL_16:
        if ( i >= v20[6] )
          goto LABEL_21;
        if ( !*(_QWORD *)v23 )
          goto LABEL_22;
        *(_DWORD *)(*(_QWORD *)v23 + 112LL) = 0;
      }
      v19 = v20[6];
    }
  }
  this->fields.deckIndex = -1;
  MaxHp = BattleServantData__getMaxHp(this, v7);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v26 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v26,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  this->fields.isDeadAnime = 0;
  this->fields.isSilnetDead = 0;
  this->fields.IsVanishSkill = 0;
  BattleServantData__RemovePartAnimationSaveData(this, 0LL, v27);
}


BattleSkillInfoData_o *__fastcall BattleServantData__CreateFunctionSkillInfoData(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleSkillInfoData_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Int32_array *vals; // x8
  struct System_Int32_array *v9; // x8
  BattleSkillInfoData_o *result; // x0
  __int64 v11; // x0

  if ( (byte_434F647 & 1) == 0 )
  {
    sub_B70694(&BattleSkillInfoData_TypeInfo);
    byte_434F647 = 1;
  }
  v5 = (BattleSkillInfoData_o *)sub_B70764(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  v5->fields.svtUniqueId = this->fields.uniqueId;
  if ( !buff )
    goto LABEL_10;
  vals = buff->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !vals->max_length )
    goto LABEL_11;
  v6 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._4_set_skillId.method)(
         v5,
         (unsigned int)vals->m_Items[1],
         v5->klass->vtable._5_get_skillId.methodPtr);
  v9 = buff->fields.vals;
  if ( !v9 )
LABEL_10:
    sub_B7076C(v6, v7);
  if ( v9->max_length <= 1 )
  {
LABEL_11:
    v11 = sub_B70798(v6);
    sub_B70738(v11, 0LL);
  }
  result = v5;
  v5->fields.skilllv = v9->m_Items[2];
  return result;
}


void __fastcall BattleServantData__DeTransformOrResetSelfSkill(
        BattleServantData_o *this,
        BattleData_o *data,
        bool isResetTransform,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  System_Int32_array **classBoardAddPassiveSkills; // x22
  System_Int32_array **classBoardAddCommandSpells; // x21
  BattleDeckServantData_o *DeckServantData; // x0
  BattleEntity_o *battle_ent; // x25
  BattleDeckServantData_o *v10; // x26
  int32_t Int; // w0
  const MethodInfo *v12; // x6
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x6

  v4 = this;
  if ( isResetTransform )
  {
    classBoardAddPassiveSkills = (System_Int32_array **)this->fields.classBoardAddPassiveSkills;
    classBoardAddCommandSpells = (System_Int32_array **)this->fields.classBoardAddCommandSpells;
    this->fields.shiftNpcId = -1;
    this->fields.beforeUserSvtId = -1LL;
    if ( !data || (this = (BattleServantData_o *)data->fields.battle_info) == 0LL )
      sub_B7076C(this, data);
    DeckServantData = BattleInfoData__getDeckServantData((BattleInfoData_o *)this, v4->fields.uniqueId, 0LL);
    battle_ent = data->fields.battle_ent;
    v10 = DeckServantData;
    Int = Follower__getInt(v4->fields.followerType, 0LL);
    BattleServantData__setBaseServantData(v4, v10, battle_ent, Int, 0LL, 1, v12);
    LODWORD(battle_ent) = v4->fields.transformIndex;
    v4->fields.dressDispId = -1;
    *(_QWORD *)&v4->fields.transformIndex = 0xFFFFFFFFLL;
    v4->fields.classBoardAddPassiveSkills = (struct AddSkillData_array *)classBoardAddPassiveSkills;
    sub_B70630(
      (BattleServantConfConponent_o *)&v4->fields.classBoardAddPassiveSkills,
      classBoardAddPassiveSkills,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v4->fields.classBoardAddCommandSpells = (struct AddSkillData_array *)classBoardAddCommandSpells;
    sub_B70630(
      (BattleServantConfConponent_o *)&v4->fields.classBoardAddCommandSpells,
      classBoardAddCommandSpells,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( (_DWORD)battle_ent != -1 )
      BattleServantData__setTransformServant(v4, data, -1, 0, 0, 0LL, v25);
  }
  else
  {
    BattleServantData__ResetServantSelfSkill(this, (const MethodInfo *)data);
  }
}


System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateContinueFunctionSkill(
        BattleServantData_o *this,
        bool isKeepAlive,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_434F646 & 1) == 0 )
  {
    sub_B70694(&BattleServantData__EnumerateContinueFunctionSkill_d__373_TypeInfo);
    byte_434F646 = 1;
  }
  v5 = sub_B70764(BattleServantData__EnumerateContinueFunctionSkill_d__373_TypeInfo);
  BattleServantData__EnumerateContinueFunctionSkill_d__373___ctor(
    (BattleServantData__EnumerateContinueFunctionSkill_d__373_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 49) = isKeepAlive;
  return (System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *)v5;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData__EnumerateIndividuality(
        BattleServantData_o *this,
        System_Collections_Generic_IEnumerable_int__o *externalIndiv,
        const MethodInfo *method)
{
  __int64 v5; // x19
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_int__o *ServantIndividualityList; // x20
  const MethodInfo *v8; // x1
  System_Collections_Generic_IEnumerable_T__o *buffData; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *BuffParamList; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x8
  System_Func_int__bool__o *v19; // x21

  if ( (byte_434F6C9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Where_int___);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_BattleServantData___c__DisplayClass625_0__EnumerateIndividuality_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass625_0_TypeInfo);
    byte_434F6C9 = 1;
  }
  v5 = sub_B70764(BattleServantData___c__DisplayClass625_0_TypeInfo);
  BattleServantData___c__DisplayClass625_0___ctor((BattleServantData___c__DisplayClass625_0_o *)v5, 0LL);
  ServantIndividualityList = BattleServantData__GetServantIndividualityList(this, externalIndiv, v6);
  buffData = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__EnumerateSkillIndividuality(this, v8);
  if ( !ServantIndividualityList )
    goto LABEL_11;
  System_Collections_Generic_List_int___AddRange(
    ServantIndividualityList,
    buffData,
    (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
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
          (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__),
        (buffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buffData) == 0LL)
    || (buffData = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffParamList(
                                                                    (BattleBuffData_o *)buffData,
                                                                    44,
                                                                    0LL,
                                                                    0LL),
        !v5)
    || (*(_QWORD *)(v5 + 16) = buffData,
        sub_B70630(
          (BattleServantConfConponent_o *)(v5 + 16),
          (System_Int32_array **)buffData,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (v18 = *(_QWORD *)(v5 + 16)) == 0) )
  {
LABEL_11:
    sub_B7076C(buffData, v10);
  }
  if ( !*(_QWORD *)(v18 + 24) )
    return (System_Collections_Generic_IEnumerable_int__o *)ServantIndividualityList;
  v19 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v19,
    (Il2CppObject *)v5,
    Method_BattleServantData___c__DisplayClass625_0__EnumerateIndividuality_b__0__,
    (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Where_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)ServantIndividualityList,
                                                            (System_Func_TSource__bool__o *)v19,
                                                            (const MethodInfo_1CCCBB0 *)Method_System_Linq_Enumerable_Where_int___);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData__EnumerateSkillIndividuality(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  BattleServantData___c_c *v4; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__629_0; // x20
  Il2CppObject *v7; // x21
  struct BattleServantData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  BattleServantData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  struct BattleServantData___c_StaticFields *v18; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__629_1; // x20
  Il2CppObject *v20; // x21
  struct BattleServantData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_434F6CD & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    sub_B70694(&Method_System_Func_BattleSkillInfoData__bool___ctor__);
    sub_B70694(&Method_System_Func_BattleSkillInfoData__IEnumerable_int____ctor__);
    sub_B70694(&System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo);
    sub_B70694(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__629_0__);
    sub_B70694(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__629_1__);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F6CD = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  v4 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v4 = BattleServantData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__629_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__629_0;
  if ( !_9__629_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__629_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__629_0,
      v7,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__629_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v8 = BattleServantData___c_TypeInfo->static_fields;
    v8->__9__629_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__629_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__629_0,
      (System_Int32_array **)_9__629_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__629_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  v16 = BattleServantData___c_TypeInfo;
  v17 = v15;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v16 = BattleServantData___c_TypeInfo;
  }
  v18 = v16->static_fields;
  _9__629_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v18->__9__629_1;
  if ( !_9__629_1 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v18 = BattleServantData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__629_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__629_1,
      v20,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__629_1__,
      (const MethodInfo_29ADCC4 *)Method_System_Func_BattleSkillInfoData__IEnumerable_int____ctor__);
    v21 = BattleServantData___c_TypeInfo->static_fields;
    v21->__9__629_1 = (struct System_Func_BattleSkillInfoData__IEnumerable_int___o *)_9__629_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v21->__9__629_1,
      (System_Int32_array **)_9__629_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                            v17,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__629_1,
                                                            (const MethodInfo_1CC578C *)Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___);
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
    sub_B7076C(AiStateManager, v11);
  return AiStateManager__ExistAiThinking(AiStateManager, this, v8->fields.aiLogic, procState, v8, timingPriority, 0LL);
}


bool __fastcall BattleServantData__ExistsResurrection(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Int32_array *shiftDeckList; // x8
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-8h] BYREF

  buff = 0LL;
  if ( BattleServantData__isGuts_20724968(this, &buff, v2) )
    return 1;
  shiftDeckList = this->fields.shiftDeckList;
  return shiftDeckList && this->fields.shiftDeckIndex < (signed int)shiftDeckList->max_length;
}


void __fastcall BattleServantData__ExtendedUpdateOnTransformServant(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvt,
        const MethodInfo *method)
{
  AiState_o *aiState; // x8

  if ( !userSvt )
    goto LABEL_6;
  this->fields.level = userSvt->fields.lv;
  this->fields._minActNum_k__BackingField = userSvt->fields.minActNum;
  this->fields.npcSvtType = userSvt->fields.npcSvtType;
  this->fields.displayType = userSvt->fields.displayType;
  this->fields.npcSvtClassId = userSvt->fields.npcSvtClassId;
  userSvt = (BattleUserServantData_o *)(unsigned int)userSvt->fields.aiId;
  if ( (int)userSvt >= 1 )
  {
    aiState = this->fields.aiState;
    this->fields.aiId = (int)userSvt;
    if ( aiState )
    {
      AiState__UpdateAiGroupId(aiState, (int32_t)userSvt, 0LL);
      return;
    }
LABEL_6:
    sub_B7076C(this, userSvt);
  }
}


System_Int32_array *__fastcall BattleServantData__FilterDisplayingSkillIdArray(
        BattleServantData_o *this,
        System_Int32_array *skillIdArray,
        bool defaultDisplay,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass768_0_o *v7; // x21
  _QWORD **v8; // x20
  __int64 v9; // x19
  __int16 v10; // w8
  __int64 v11; // x19
  __int64 v12; // x19
  __int64 v13; // x19
  BattleDeckServantData_o *deckSvt; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x22
  _QWORD **v17; // x23
  __int64 v18; // x22
  __int16 v19; // w8
  __int64 v20; // x22
  __int64 v21; // x22
  __int64 v22; // x22
  System_Collections_Generic_HashSet_int__o *v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  System_Func_int__bool__o *v26; // x0
  System_Func_TSource__bool__o *v27; // x22
  __int64 *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_434F6FA & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_int___);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140920);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass768_0__FilterDisplayingSkillIdArray_b__0__);
    sub_B70694(&Method_BattleServantData___c__DisplayClass768_0__FilterDisplayingSkillIdArray_b__1__);
    sub_B70694(&BattleServantData___c__DisplayClass768_0_TypeInfo);
    byte_434F6FA = 1;
  }
  v7 = (BattleServantData___c__DisplayClass768_0_o *)sub_B70764(BattleServantData___c__DisplayClass768_0_TypeInfo);
  BattleServantData___c__DisplayClass768_0___ctor(v7, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdArray, 0LL) )
  {
    v8 = (_QWORD **)Method_System_Array_Empty_int___;
    v9 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v10 = *(_WORD *)(v9 + 306);
    if ( (v10 & 1) == 0 )
    {
      sub_B08394(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v10 = *(_WORD *)(v9 + 306);
    }
    if ( (v10 & 0x400) != 0 )
    {
      v11 = *v8[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_B08394(*v8[6]);
      if ( !*(_DWORD *)(v11 + 224) )
      {
        v12 = *v8[6];
        if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
          sub_B08394(*v8[6]);
        j_il2cpp_runtime_class_init_0(v12);
      }
    }
    v13 = *v8[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_B08394(*v8[6]);
    return **(System_Int32_array ***)(v13 + 184);
  }
  else
  {
    deckSvt = this->fields.deckSvt;
    if ( !deckSvt
      || (v16 = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetDisplayChangeSkillIdArray(
                                                                 deckSvt,
                                                                 0LL)) == 0LL )
    {
      v17 = (_QWORD **)Method_System_Array_Empty_int___;
      v18 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v19 = *(_WORD *)(v18 + 306);
      if ( (v19 & 1) == 0 )
      {
        sub_B08394(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v19 = *(_WORD *)(v18 + 306);
      }
      if ( (v19 & 0x400) != 0 )
      {
        v20 = *v17[6];
        if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
          sub_B08394(*v17[6]);
        if ( !*(_DWORD *)(v20 + 224) )
        {
          v21 = *v17[6];
          if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
            sub_B08394(*v17[6]);
          j_il2cpp_runtime_class_init_0(v21);
        }
      }
      v22 = *v17[6];
      if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
        sub_B08394(*v17[6]);
      v16 = **(System_Collections_Generic_IEnumerable_T__o ***)(v22 + 184);
    }
    v23 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_48947012(
      v23,
      v16,
      (const MethodInfo_2EADF44 *)Method_System_Collections_Generic_HashSet_int___ctor___69140920);
    if ( !v7 )
      sub_B7076C(v24, v25);
    v7->fields.displayChangeSkillIdHashSet = v23;
    sub_B70630(&v7->fields);
    v26 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
    v27 = (System_Func_TSource__bool__o *)v26;
    if ( defaultDisplay )
      v28 = &Method_BattleServantData___c__DisplayClass768_0__FilterDisplayingSkillIdArray_b__0__;
    else
      v28 = &Method_BattleServantData___c__DisplayClass768_0__FilterDisplayingSkillIdArray_b__1__;
    System_Func_int__bool____ctor(
      v26,
      (Il2CppObject *)v7,
      *v28,
      (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
    v29 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)skillIdArray,
            v27,
            (const MethodInfo_1CCCBB0 *)Method_System_Linq_Enumerable_Where_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v29,
             (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
}


int32_t __fastcall BattleServantData__FixMaxActNum(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_434F649 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F649 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v5, v6);
  return this->fields.maxActNum + BattleBuffData__getActValue_31763688(buffData, 110, v4, 0LL);
}


int32_t __fastcall BattleServantData__FixMinActNum(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_434F64A & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F64A = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v5, v6);
  return this->fields._minActNum_k__BackingField + BattleBuffData__getActValue_31763688(buffData, 110, v4, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__GetAddSideEffectBuffList(
        BattleServantData_o *this,
        BuffList_ACTION_array *targetActs,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleBuffData_CheckIndividualitiesData_o *v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  BattleServantData___c_c *v25; // x8
  struct BattleServantData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__445_1; // x20
  Il2CppObject *v28; // x21
  struct BattleServantData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_434F669 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    sub_B70694(&Method_System_Linq_Enumerable_SelectMany_BuffList_ACTION__BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData____ctor__);
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    sub_B70694(&System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_B70694(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__GetAddSideEffectBuffList_b__445_1__);
    sub_B70694(&Method_BattleServantData___c__DisplayClass445_0__GetAddSideEffectBuffList_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass445_0_TypeInfo);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F669 = 1;
  }
  v7 = sub_B70764(BattleServantData___c__DisplayClass445_0_TypeInfo);
  BattleServantData___c__DisplayClass445_0___ctor((BattleServantData___c__DisplayClass445_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  v16 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v16, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(v7 + 24) = v16;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Func_Voice_BATTLE__BattlePerformance_VoiceParam__o *)sub_B70764(System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData___TypeInfo);
  System_Func_Voice_BATTLE__BattlePerformance_VoiceParam____ctor(
    v23,
    (Il2CppObject *)v7,
    Method_BattleServantData___c__DisplayClass445_0__GetAddSideEffectBuffList_b__0__,
    (const MethodInfo_29A90A0 *)Method_System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData____ctor__);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_BuffList_ACTION__BattleBuffData_BuffData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetActs,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v23,
                                                               (const MethodInfo_1CC5724 *)Method_System_Linq_Enumerable_SelectMany_BuffList_ACTION__BattleBuffData_BuffData___);
  v25 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v25 = BattleServantData___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__445_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__445_1;
  if ( !_9__445_1 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__445_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__445_1,
      v28,
      Method_BattleServantData___c__GetAddSideEffectBuffList_b__445_1__,
      (const MethodInfo_29AD124 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    v29 = BattleServantData___c_TypeInfo->static_fields;
    v29->__9__445_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__445_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v29->__9__445_1,
      (System_Int32_array **)_9__445_1,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v24,
                                                               (System_Func_TSource__TKey__o *)_9__445_1,
                                                               (const MethodInfo_1CBFB4C *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            v36,
                                            (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleServantData_Adjustment_array *__fastcall BattleServantData__GetAdjustments(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0
  BattleServantConfConponent_o *p_adjustmentList; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1

  if ( (byte_434F617 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    byte_434F617 = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (BattleServantConfConponent_o *)&this->fields.adjustmentList;
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (BattleServantConfConponent_c *)v5;
    sub_B70630(p_adjustmentList, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
    adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      sub_B7076C(0LL, v12);
  }
  return (BattleServantData_Adjustment_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)adjustmentList,
                                                 (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__);
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


float __fastcall BattleServantData__GetBuffSelfSpecialDamageValue(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_434F6B3 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6B3 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return (float)BattleBuffData__getActValue_31763688(buffData, 134, v8, 0LL);
}


int32_t __fastcall BattleServantData__GetChangePersonality(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__GetChangePersonality(deckSvt, 0LL);
  else
    return -1;
}


int32_t __fastcall BattleServantData__GetChangePolicy(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__GetChangePolicy(deckSvt, 0LL);
  else
    return -1;
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_434F66D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_24202/*"ガッツ"*/);
    byte_434F66D = 1;
  }
  return BattleServantData__GetKilledMeOpponentIndividualityArray(this, (System_String_o *)method, v2);
}


int32_t __fastcall BattleServantData__GetCommandCardIndex(
        BattleServantData_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Int64_array *userCommandCodeIds; // x0

  if ( (byte_434F6D8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_IndexOf_long___);
    byte_434F6D8 = 1;
  }
  if ( userCommandCodeId >= 1 && (userCommandCodeIds = this->fields.userCommandCodeIds) != 0LL )
    return System_Array__IndexOf_long_(
             userCommandCodeIds,
             userCommandCodeId,
             (const MethodInfo_1FCC0C4 *)Method_System_Array_IndexOf_long___);
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

  if ( (byte_434F6D6 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_434F6D6 = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_B706AC(int___TypeInfo, userCommandCodeIds->max_length);
  v7 = this->fields.userCommandCodeIds;
  if ( !v7 )
LABEL_15:
    sub_B7076C(CommandCodeInfo, v5);
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
            v13 = sub_B70798(CommandCodeInfo);
            sub_B70738(v13, 0LL);
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

  if ( (byte_434F6D7 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_434F6D7 = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_B706AC(int___TypeInfo, userCommandCodeIds->max_length);
  v7 = this->fields.userCommandCodeIds;
  if ( !v7 )
LABEL_15:
    sub_B7076C(CommandCodeInfo, v5);
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
            v13 = sub_B70798(CommandCodeInfo);
            sub_B70738(v13, 0LL);
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
  BattleServantData___c__DisplayClass706_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_CommandCodeInfo__o *commandCodeList_k__BackingField; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_434F6E3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeInfo__Find__);
    sub_B70694(&Method_System_Predicate_CommandCodeInfo___ctor__);
    sub_B70694(&System_Predicate_CommandCodeInfo__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass706_0__GetCommandCodeInfo_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass706_0_TypeInfo);
    byte_434F6E3 = 1;
  }
  v5 = (BattleServantData___c__DisplayClass706_0_o *)sub_B70764(BattleServantData___c__DisplayClass706_0_TypeInfo);
  BattleServantData___c__DisplayClass706_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.userCommandCodeId = userCommandCodeId,
        commandCodeList_k__BackingField = this->fields._commandCodeList_k__BackingField,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_CommandCodeInfo__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass706_0__GetCommandCodeInfo_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_CommandCodeInfo___ctor__),
        !commandCodeList_k__BackingField) )
  {
    sub_B7076C(v6, v7);
  }
  return (CommandCodeInfo_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)commandCodeList_k__BackingField,
                                (System_Predicate_T__o *)v9,
                                (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_CommandCodeInfo__Find__);
}


int32_t __fastcall BattleServantData__GetCurrentShiftPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B7076C(this, method);
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

  if ( (byte_434F60E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_434F60E = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.tdErrorStatusVoiceSeList,
                    0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    tdErrorStatusVoiceSeList = this->fields.tdErrorStatusVoiceSeList;
    if ( !tdErrorStatusVoiceSeList )
      sub_B7076C(0LL, v3);
    tdErrorTouchCount = this->fields.tdErrorTouchCount;
    size = tdErrorStatusVoiceSeList->fields._size;
    if ( tdErrorTouchCount <= (int)size )
    {
      if ( size <= tdErrorTouchCount - 1 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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
  __int64 v3; // x24
  System_Collections_Generic_List_int__o *v4; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  DataManager_o **v13; // x27
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x23
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  __int64 v25; // x26
  int size; // w8
  int32_t *v27; // x24
  BattleBuffData_o *buffData; // x8
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v29; // x21
  int v30; // w8
  __int64 v31; // x24
  System_TimeZoneInfo_AdjustmentRule_o *v32; // x19
  _DWORD *dateData; // x8
  __int64 v35; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_434F633 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_SkillLvEntity__Invoke__);
    sub_B70694(&Method_System_Action_SkillLvEntity___ctor__);
    sub_B70694(&System_Action_SkillLvEntity__TypeInfo);
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_BattleServantData___c__DisplayClass318_0__GetHasSideEffectSkillEffectIds_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass318_0_TypeInfo);
    byte_434F633 = 1;
  }
  entity = 0LL;
  v3 = sub_B70764(BattleServantData___c__DisplayClass318_0_TypeInfo);
  BattleServantData___c__DisplayClass318_0___ctor((BattleServantData___c__DisplayClass318_0_o *)v3, 0LL);
  v4 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3 )
    goto LABEL_46;
  *(_QWORD *)(v3 + 24) = v4;
  v13 = (DataManager_o **)(v3 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)v4, v7, v8, v9, v10, v11, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            Instance,
                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  v15 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 Instance,
                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_FunctionMaster___);
  *(_QWORD *)(v3 + 16) = v15;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), v15, v16, v17, v18, v19, v20, v21);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    Instance,
    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
  v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_SkillLvEntity__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v23,
    (Il2CppObject *)v3,
    Method_BattleServantData___c__DisplayClass318_0__GetHasSideEffectSkillEffectIds_b__0__,
    (const MethodInfo_264C148 *)Method_System_Action_SkillLvEntity___ctor__);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_46;
  v25 = 0LL;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v25 >= size )
      break;
    if ( size <= (unsigned int)v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v27 = (int32_t *)skillInfoList->fields._items->m_Items[v25];
    if ( v27 )
    {
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v27 + 392LL))(
                                    v27,
                                    *(_QWORD *)(*(_QWORD *)v27 + 400LL));
      if ( (_DWORD)Instance )
      {
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v27 + 392LL))(
                                      v27,
                                      *(_QWORD *)(*(_QWORD *)v27 + 400LL));
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_46;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)Instance,
                                      v27[9],
                                      0LL);
        if ( Instance )
        {
          if ( !v23 )
            goto LABEL_46;
          System_Action_Uri___Invoke(
            (System_Action_Uri__o *)v23,
            (System_Uri_o *)Instance,
            (const MethodInfo_264C15C *)Method_System_Action_SkillLvEntity__Invoke__);
        }
      }
      skillInfoList = this->fields.skillInfoList;
      ++v25;
      if ( skillInfoList )
        continue;
    }
    goto LABEL_46;
  }
  Instance = (DataManager_o *)this->fields.buffData;
  if ( !Instance
    || (Instance = (DataManager_o *)BattleBuffData__GetAllCommandCodeBuff((BattleBuffData_o *)Instance, 0LL),
        (buffData = this->fields.buffData) == 0LL)
    || (v29 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)Instance,
        Instance = (DataManager_o *)BattleBuffData__GetAllCommandAssistBuff(buffData, 0LL),
        !v29) )
  {
LABEL_46:
    sub_B7076C(Instance, v6);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v30 = v29->fields._size;
  if ( v30 >= 1 )
  {
    v31 = 0LL;
    do
    {
      if ( v30 <= (unsigned int)v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v32 = v29->fields._items->m_Items[v31];
      entity = 0LL;
      if ( !v32 || !v22 )
        goto LABEL_46;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v22,
                                    &entity,
                                    v32->fields.m_dateStart.fields.dateData,
                                    (const MethodInfo_21C049C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
                                      (const MethodInfo_2EB0870 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          dateData = (_DWORD *)v32->fields.m_daylightTransitionStart.fields.m_timeOfDay.fields.dateData;
          if ( !dateData )
            goto LABEL_46;
          if ( dateData[6] < 2u )
          {
            v35 = sub_B70798(Instance);
            sub_B70738(v35, 0LL);
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
            if ( !v23 )
              goto LABEL_46;
            System_Action_Uri___Invoke(
              (System_Action_Uri__o *)v23,
              (System_Uri_o *)Instance,
              (const MethodInfo_264C15C *)Method_System_Action_SkillLvEntity__Invoke__);
          }
        }
      }
      v30 = v29->fields._size;
    }
    while ( (int)++v31 < v30 );
  }
  Instance = *v13;
  if ( !*v13 )
    goto LABEL_46;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Instance,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall BattleServantData__GetHideStatePersonality(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__GetHideStatePersonality(deckSvt, 0LL);
  else
    return -1;
}


int32_t __fastcall BattleServantData__GetHideStatePolicy(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__GetHideStatePolicy(deckSvt, 0LL);
  else
    return -1;
}


int32_t __fastcall BattleServantData__GetHideStateSubAttribute(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__GetHideStateSubAttribute(deckSvt, 0LL);
  else
    return -1;
}


int32_t __fastcall BattleServantData__GetIconImageLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v7; // x19
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t v12; // w19
  __int64 v13; // x20
  __int64 v14; // x21
  int32_t v15; // w20
  __int64 v16; // x20
  __int64 v17; // x21
  int32_t v18; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_434F643 & 1) == 0 )
  {
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    byte_434F643 = 1;
  }
  v4 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v4;
  *(_QWORD *)&v19.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v19, 0LL);
  if ( v5 )
    return v5 - (v5 < 11);
  v8 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v8;
  *(_QWORD *)&v20.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v20, 0LL);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B7076C(v9, v10);
  v12 = v9;
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
    v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v21.fields.currentCryptoKey = v14;
    *(_QWORD *)&v21.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetCardImageLimitCount(v15, v12, 1, 0, 0LL);
  }
  else
  {
    v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = v17;
    *(_QWORD *)&v22.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v22, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    return ImageLimitCount__GetImageLimitCount(v18, v12, 0LL);
  }
}


int32_t __fastcall BattleServantData__GetImageSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 imageSvtId_k__BackingField; // x0
  struct ServantEntity_o *svtdata; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_434F639 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F639 = 1;
  }
  imageSvtId_k__BackingField = (unsigned int)this->fields._imageSvtId_k__BackingField;
  if ( (int)imageSvtId_k__BackingField <= 0 )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_B7076C(imageSvtId_k__BackingField, method);
    v6 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
    v5 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    LODWORD(imageSvtId_k__BackingField) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v8, 0LL);
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
    sub_B7076C(0LL, v4);
  if ( !KilledMeOpponentIndividualityArray->max_length )
  {
    v6 = sub_B70798(KilledMeOpponentIndividualityArray);
    sub_B70738(v6, 0LL);
  }
  return KilledMeOpponentIndividualityArray->m_Items[0];
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantData__GetKilledMeOpponentIndividualityArray(
        BattleServantData_o *this,
        System_String_o *logCheckFunc,
        const MethodInfo *method)
{
  BattleServantSnapShotGroupDefault_o *SnapShotDamagedOnLogicDead_k__BackingField; // x0
  BattleBuffData_CheckIndividualitiesData_array *v5; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_434F66E & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData___TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F66E = 1;
  }
  SnapShotDamagedOnLogicDead_k__BackingField = this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
  if ( !SnapShotDamagedOnLogicDead_k__BackingField )
    goto LABEL_11;
  v5 = BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
         SnapShotDamagedOnLogicDead_k__BackingField,
         0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v5, 0LL) )
    return v5;
  v5 = (BattleBuffData_CheckIndividualitiesData_array *)sub_B706AC(
                                                          BattleBuffData_CheckIndividualitiesData___TypeInfo,
                                                          1LL);
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v5 )
LABEL_11:
    sub_B7076C(SnapShotDamagedOnLogicDead_k__BackingField, logCheckFunc);
  if ( v6 )
  {
    SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupDefault_o *)sub_B70754(
                                                                                          v6,
                                                                                          v5->obj.klass->_1.element_class);
    if ( !SnapShotDamagedOnLogicDead_k__BackingField )
    {
      v15 = sub_B7078C();
      sub_B70738(v15, 0LL);
    }
  }
  if ( !v5->max_length )
  {
    v14 = sub_B70798(SnapShotDamagedOnLogicDead_k__BackingField);
    sub_B70738(v14, 0LL);
  }
  v5->m_Items[0] = v6;
  sub_B70630((BattleServantConfConponent_o *)v5->m_Items, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  return v5;
}


BattleLogicServantAi_o *__fastcall BattleServantData__GetLogicServantAi(
        BattleServantData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !logic )
    sub_B7076C(this, 0LL);
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
    sub_B7076C(this, method);
  return shiftDeckList->max_length - this->fields.shiftSubCount;
}


int32_t __fastcall BattleServantData__GetMaxShiftIconPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B7076C(this, method);
  return shiftDeckList->max_length - this->fields.shiftSubCount - this->fields.lowLimitShift;
}


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

  if ( (byte_434F6EA & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6EA = 1;
  }
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  v12 = v11;
  if ( isSvtAction )
    BattleBuffData_CheckIndividualitiesData___ctor(v11, this, targetSvt, 0LL, command, 0LL, 0LL);
  else
    BattleBuffData_CheckIndividualitiesData___ctor_24123036(v11, this, 0LL, 0LL, notSvtIndivArray, 0LL, 0LL);
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
  return UnityEngine_Mathf__Max_41127884(0, this->fields._minActNum_k__BackingField - this->fields.actionCount, 0LL);
}


System_String_o *__fastcall BattleServantData__GetOverwriteBreakShiftVoice(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0

  result = (System_String_o *)this->fields.deckSvt;
  if ( result )
    return BattleDeckServantData__GetOverwriteBreakShiftVoiceName((BattleDeckServantData_o *)result, 0LL);
  return result;
}


System_String_o *__fastcall BattleServantData__GetOverwritePersonality(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  if ( (byte_434F6F8 & 1) == 0 )
  {
    sub_B70694(&string_TypeInfo);
    byte_434F6F8 = 1;
  }
  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__GetOverwritePersonality(deckSvt, 0LL);
  else
    return string_TypeInfo->static_fields->Empty;
}


System_String_o *__fastcall BattleServantData__GetOverwritePolicy(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  if ( (byte_434F6F7 & 1) == 0 )
  {
    sub_B70694(&string_TypeInfo);
    byte_434F6F7 = 1;
  }
  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__GetOverwritePolicy(deckSvt, 0LL);
  else
    return string_TypeInfo->static_fields->Empty;
}


System_String_o *__fastcall BattleServantData__GetOverwriteSubAttribute(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  if ( (byte_434F6F9 & 1) == 0 )
  {
    sub_B70694(&string_TypeInfo);
    byte_434F6F9 = 1;
  }
  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
    return BattleDeckServantData__GetOverwriteSubAttribute(deckSvt, 0LL);
  else
    return string_TypeInfo->static_fields->Empty;
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

  if ( (byte_434F6AB & 1) == 0 )
  {
    sub_B70694(&StringLiteral_24280/*"死亡時の非表示を防ぐバフ"*/);
    byte_434F6AB = 1;
  }
  KilledMeOpponentIndividuality = BattleServantData__GetKilledMeOpponentIndividuality(
                                    this,
                                    (System_String_o *)method,
                                    v2);
  BuffData = BattleServantData__get_BuffData(this, v5);
  if ( !BuffData )
    sub_B7076C(0LL, v7);
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
  return UnityEngine_Mathf__Max_41127884(0, v2, 0LL);
}


int32_t __fastcall BattleServantData__GetRevengeIdCheckOpponentOnly(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !buffData )
    sub_B7076C(this, 0LL);
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
  if ( (byte_434F61C & 1) == 0 )
  {
    sub_B70694(&Method_JsonManager_Deserialize_BattleServantData_SaveData___);
    sub_B70694(&JsonManager_TypeInfo);
    byte_434F61C = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (BattleServantData_SaveData_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                           (Il2CppObject *)str,
                                           (const MethodInfo_1D504B8 *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
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
      sub_B7076C(0LL, v5);
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
    sub_B7076C(TreasureDevice, v5);
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall BattleServantData__GetServantIndividualityList(
        BattleServantData_o *this,
        System_Collections_Generic_IEnumerable_int__o *externalIndividualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  System_Int32_array *Individuality; // x0
  System_Collections_Generic_IEnumerable_T__o *svtIndividuality; // x1
  ServantEntity_o *svtdata; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  int32_t v11; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_434F6CC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F6CC = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)this->fields.svtIndividuality;
  if ( !svtIndividuality )
  {
    svtdata = this->fields.svtdata;
    v10 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v10;
    *(_QWORD *)&v13.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v13, 0LL);
    Individuality = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                            this->fields._dispLimitCount_k__BackingField,
                                            0LL);
    if ( !svtdata )
LABEL_15:
      sub_B7076C(Individuality, svtIndividuality);
    Individuality = ServantEntity__getIndividuality(svtdata, v11, (int32_t)Individuality, 0LL);
    svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)Individuality;
  }
  if ( !v5 )
    goto LABEL_15;
  System_Collections_Generic_List_int___AddRange(
    v5,
    svtIndividuality,
    (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( externalIndividualities )
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)externalIndividualities,
      (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.commonAddIndividuality, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.commonAddIndividuality,
      (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  return v5;
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
  BattleBuffData_CheckIndividualitiesData_o *v3; // x20
  const MethodInfo *v4; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1

  if ( (byte_434F662 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_434F662 = 1;
  }
  v3 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v3, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  BuffData = BattleServantData__get_BuffData(this, v4);
  if ( !v3
    || !BuffData
    || (BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(
                                         BuffData,
                                         115,
                                         v3->fields._selfConcatSvtIndividualities_k__BackingField,
                                         0LL,
                                         1,
                                         0LL)) == 0LL )
  {
    sub_B7076C(BuffData, v6);
  }
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)BuffData,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleWarBoardInfo_WarBoardServantInfo_o *__fastcall BattleServantData__GetTakeoverServantData(
        BattleServantData_o *this,
        WarBoardBattleEvent_TakeoverSvtArg_o *arg,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x1
  bool isAction; // w22
  const MethodInfo *v8; // x1
  AiStateManager_o *AiStateManager; // x23
  ServantAiResetChecker_o *v10; // x24
  System_Int32_array **TakeOverAiStateArray; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  BattleBuffData_o *BuffData; // x23
  int32_t v24; // w24
  const MethodInfo *v25; // x1
  int32_t MaxHp; // w25
  const MethodInfo *v27; // x2
  System_Int32_array *Individualities; // x26
  const MethodInfo *v29; // x4
  System_Int32_array *BuffIndividualities; // x0
  System_Int32_array *fieldIndiv; // x27
  System_Int32_array *v32; // x28
  const MethodInfo *v33; // x4
  const MethodInfo *v34; // x1
  bool v35; // w8
  const MethodInfo *v36; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x1
  int32_t v48; // w0
  int32_t v49; // w22
  int32_t v50; // w23
  struct System_Collections_Generic_Dictionary_long__int__o *dicDistributeStar; // x22
  const MethodInfo *v52; // x1
  int64_t UserSvtId; // x0
  WarBoardBattleServantEvent_o *servantEvent; // x19
  const MethodInfo *v55; // x1
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  int64_t npcSvtEquipId; // x8

  if ( (byte_434F620 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_GetValue_long__int___);
    sub_B70694(&System_Math_TypeInfo);
    sub_B70694(&ServantAiResetChecker_TypeInfo);
    sub_B70694(&BattleWarBoardInfo_WarBoardServantInfo_TypeInfo);
    byte_434F620 = 1;
  }
  v5 = sub_B70764(BattleWarBoardInfo_WarBoardServantInfo_TypeInfo);
  BattleWarBoardInfo_WarBoardServantInfo___ctor((BattleWarBoardInfo_WarBoardServantInfo_o *)v5, 0LL);
  isAction = BattleServantData__isAction(this, v6);
  AiStateManager = BattleServantData__get_AiStateManager(this, v8);
  v10 = (ServantAiResetChecker_o *)sub_B70764(ServantAiResetChecker_TypeInfo);
  ServantAiResetChecker___ctor(v10, this, 0LL);
  if ( !AiStateManager )
    goto LABEL_22;
  TakeOverAiStateArray = (System_Int32_array **)AiStateManager__MakeTakeOverAiStateArray(
                                                  AiStateManager,
                                                  (AiResetChecker_o *)v10,
                                                  0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 112) = TakeOverAiStateArray;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 112), TakeOverAiStateArray, v13, v14, v15, v16, v17, v18);
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v19);
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  BattleBuffData__ResetNotTakeOverBuff((BattleBuffData_o *)TakeOverAiStateArray, 0LL);
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v20);
  if ( !arg )
    goto LABEL_22;
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  BattleBuffData__RemoveNoTurnBuff((BattleBuffData_o *)TakeOverAiStateArray, arg->fields.logic, 0LL);
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v21);
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  BattleBuffData__UpdateForceNoField((BattleBuffData_o *)TakeOverAiStateArray, 0LL);
  BuffData = BattleServantData__get_BuffData(this, v22);
  v24 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  MaxHp = BattleServantData__getMaxHp(this, v25);
  Individualities = BattleServantData__getIndividualities(this, 0LL, v27);
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 0, 0, 0, v29);
  fieldIndiv = arg->fields.fieldIndiv;
  v32 = BuffIndividualities;
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__getBuffIndividualities(this, 0, 0, 1, v33);
  if ( !BuffData )
    goto LABEL_22;
  BattleBuffData__ChangeBuffState(
    BuffData,
    v24,
    MaxHp,
    Individualities,
    v32,
    fieldIndiv,
    (System_Int32_array *)TakeOverAiStateArray,
    0LL);
  v35 = !isAction && BattleServantData__isAction(this, v34);
  *(_BYTE *)(v5 + 85) = v35;
  *(_QWORD *)(v5 + 16) = BattleServantData__getUserSvtId(this, v34);
  *(_DWORD *)(v5 + 24) = this->fields.maxDefeatPoint;
  *(_DWORD *)(v5 + 28) = this->fields.defeatPoint;
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__get_BuffData(this, v36);
  if ( !TakeOverAiStateArray )
    goto LABEL_22;
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)TakeOverAiStateArray, 0LL);
  *(_QWORD *)(v5 + 48) = SaveData;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 48), SaveData, v38, v39, v40, v41, v42, v43);
  *(_DWORD *)(v5 + 56) = BattleServantData__GetSkillChargeTurn(this, 0, v44);
  *(_DWORD *)(v5 + 60) = BattleServantData__GetSkillChargeTurn(this, 1, v45);
  *(_DWORD *)(v5 + 64) = BattleServantData__GetSkillChargeTurn(this, 2, v46);
  *(_DWORD *)(v5 + 36) = BattleServantData__getMaxHp(this, v47);
  v48 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  v49 = *(_DWORD *)(v5 + 36);
  v50 = v48;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  *(_DWORD *)(v5 + 32) = System_Math__Min_45556056(v50, v49, 0LL);
  *(_DWORD *)(v5 + 40) = this->fields.np;
  *(_DWORD *)(v5 + 44) = this->fields.nexttpturn;
  *(_DWORD *)(v5 + 68) = this->fields.aftSquareIndex;
  *(_DWORD *)(v5 + 72) = this->fields.befSquareIndex;
  *(_DWORD *)(v5 + 76) = this->fields.transformIndex;
  *(_DWORD *)(v5 + 80) = this->fields.transformLimitCount;
  *(_BYTE *)(v5 + 84) = this->fields.isSleepWaitMode;
  dicDistributeStar = arg->fields.dicDistributeStar;
  UserSvtId = BattleServantData__getUserSvtId(this, v52);
  *(_DWORD *)(v5 + 88) = BasicHelper__GetValue_long__int_(
                           (System_Collections_Generic_Dictionary_K__V__o *)dicDistributeStar,
                           UserSvtId,
                           0,
                           (const MethodInfo_1BDEAD8 *)Method_BasicHelper_GetValue_long__int___);
  *(_DWORD *)(v5 + 92) = this->fields.squareEffectSkillId;
  *(_DWORD *)(v5 + 96) = this->fields.squareEffectSkillLv;
  servantEvent = arg->fields.servantEvent;
  TakeOverAiStateArray = (System_Int32_array **)BattleServantData__getUserSvtId(this, v55);
  if ( !servantEvent )
LABEL_22:
    sub_B7076C(TakeOverAiStateArray, v12);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(servantEvent, (int64_t)TakeOverAiStateArray, 0LL);
  if ( EventServantInfo )
    npcSvtEquipId = EventServantInfo->fields.npcSvtEquipId;
  else
    npcSvtEquipId = 0LL;
  *(_QWORD *)(v5 + 104) = npcSvtEquipId;
  return (BattleWarBoardInfo_WarBoardServantInfo_o *)v5;
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

  if ( (byte_434F6A2 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6A2 = 1;
  }
  text = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getActValue_31763724(buffData, 90, &text, v8, 0LL);
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

  if ( (byte_434F6A0 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6A0 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getActMag_31764796(buffData, 91, v8, 0LL);
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
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  System_Collections_Generic_IEnumerable_TSource__o *BuffList; // x0
  bool v8; // w1
  __int16 *v9; // x0
  __int16 v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_434F67D & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_B70694(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_B70694(&Method_System_Nullable_bool___ctor__);
    byte_434F67D = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList(
                                                                      buffData,
                                                                      buffTypes,
                                                                      v6,
                                                                      0LL,
                                                                      0LL);
    if ( BuffList )
    {
      v8 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
             BuffList,
             (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
      v9 = &v11;
      v11 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v9,
        v8,
        (const MethodInfo_2434D44 *)Method_System_Nullable_bool___ctor__);
      LOBYTE(BuffList) = (_BYTE)v11 != 0;
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

  if ( (byte_434F67C & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F67C = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return 0;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
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
        const MethodInfo_1BE0E44 *method)
{
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  Il2CppClass *_0_BattleServantData___c__650_T; // x21
  __int16 v11; // w8
  Il2CppClass *v12; // x21
  Il2CppClass *v13; // x21
  Il2CppClass *v14; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x21
  Il2CppClass *v16; // x21
  __int16 v17; // w8
  Il2CppClass *v18; // x21
  Il2CppClass *v19; // x21
  Il2CppClass *v20; // x21
  Il2CppObject *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  Il2CppClass *v28; // x19
  char *static_fields; // x0

  if ( (byte_4353FA9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___);
    sub_B70694(&Method_System_Func_ServantWaveTurnEvent__bool___ctor__);
    sub_B70694(&System_Func_ServantWaveTurnEvent__bool__TypeInfo);
    byte_4353FA9 = 1;
  }
  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner )
    sub_B7076C(0LL, *(_QWORD *)&wave);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantWaveTurnEventOwner__EventEnumerator(
                                                              waveTurnEventOwner,
                                                              wave,
                                                              turn,
                                                              0LL);
  _0_BattleServantData___c__650_T = method->rgctx_data->_0_BattleServantData___c__650_T_;
  v11 = WORD1(_0_BattleServantData___c__650_T->vtable[0].methodPtr);
  if ( (v11 & 1) == 0 )
  {
    sub_B08394(method->rgctx_data->_0_BattleServantData___c__650_T_);
    v11 = WORD1(_0_BattleServantData___c__650_T->vtable[0].methodPtr);
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 = method->rgctx_data->_0_BattleServantData___c__650_T_;
    if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_BattleServantData___c__650_T_);
    if ( !v12->_2.cctor_finished )
    {
      v13 = method->rgctx_data->_0_BattleServantData___c__650_T_;
      if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_0_BattleServantData___c__650_T_);
      j_il2cpp_runtime_class_init_0(v13);
    }
  }
  v14 = method->rgctx_data->_0_BattleServantData___c__650_T_;
  if ( (BYTE2(v14->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_BattleServantData___c__650_T_);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v14->static_fields + 1);
  if ( !v15 )
  {
    v16 = method->rgctx_data->_0_BattleServantData___c__650_T_;
    v17 = WORD1(v16->vtable[0].methodPtr);
    if ( (v17 & 1) == 0 )
    {
      sub_B08394(method->rgctx_data->_0_BattleServantData___c__650_T_);
      v17 = WORD1(v16->vtable[0].methodPtr);
    }
    if ( (v17 & 0x400) != 0 )
    {
      v18 = method->rgctx_data->_0_BattleServantData___c__650_T_;
      if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
        sub_B08394(method->rgctx_data->_0_BattleServantData___c__650_T_);
      if ( !v18->_2.cctor_finished )
      {
        v19 = method->rgctx_data->_0_BattleServantData___c__650_T_;
        if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
          sub_B08394(method->rgctx_data->_0_BattleServantData___c__650_T_);
        j_il2cpp_runtime_class_init_0(v19);
      }
    }
    v20 = method->rgctx_data->_0_BattleServantData___c__650_T_;
    if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(method->rgctx_data->_0_BattleServantData___c__650_T_);
    v21 = *(Il2CppObject **)v20->static_fields;
    v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_ServantWaveTurnEvent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v15,
      v21,
      (intptr_t)method->rgctx_data->_1_BattleServantData___c__650_T___HasWaveTurnEvent_b__650_0,
      (const MethodInfo_29AC578 *)Method_System_Func_ServantWaveTurnEvent__bool___ctor__);
    v28 = method->rgctx_data->_0_BattleServantData___c__650_T_;
    if ( (BYTE2(v28->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(v28);
    static_fields = (char *)v28->static_fields;
    *((_QWORD *)static_fields + 1) = v15;
    sub_B70630(
      (BattleServantConfConponent_o *)(static_fields + 8),
      (System_Int32_array **)v15,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v9,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_1CAA848 *)Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___);
}


void __fastcall BattleServantData__InitCommonAddIndividuality(BattleServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 IsAnySupport; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_Int32_array *v12; // x1

  if ( (byte_434F625 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&StringLiteral_7370/*"INDIVIDUALITY_IS_SUPPORT"*/);
    byte_434F625 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  IsAnySupport = Follower__IsAnySupport(this->fields.followerType, 0LL);
  if ( (IsAnySupport & 1) != 0 )
  {
    IsAnySupport = ConstantMaster__getValue((System_String_o *)StringLiteral_7370/*"INDIVIDUALITY_IS_SUPPORT"*/, 0LL);
    if ( v3 )
    {
      System_Collections_Generic_List_int___Add(
        v3,
        IsAnySupport,
        (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      goto LABEL_7;
    }
LABEL_11:
    sub_B7076C(IsAnySupport, v5);
  }
  if ( !v3 )
    goto LABEL_11;
LABEL_7:
  if ( v3->fields._size < 1 )
    v12 = 0LL;
  else
    v12 = System_Collections_Generic_List_int___ToArray(
            v3,
            (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.commonAddIndividuality = v12;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commonAddIndividuality,
    (System_Int32_array **)v12,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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

  if ( (byte_434F6C7 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_TypeInfo);
    byte_434F6C7 = 1;
  }
  p_buffData = &this->fields.buffData;
  if ( this->fields.buffData )
  {
    MaxHp = BattleServantData__getMaxHp(this, method);
  }
  else
  {
    v6 = (BattleBuffData_o *)sub_B70764(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v6, 0LL);
    *p_buffData = v6;
    sub_B70630(
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
    sub_B7076C(0LL, v4);
  BattleBuffData__Initialize(*p_buffData, 0LL);
  if ( MaxHp >= 1 )
    BattleServantData__checkUpdateUpdownHp(this, MaxHp, 0, v13);
}


bool __fastcall BattleServantData__IsAntiSmoothNpSeqIdLotteried(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_Int32_array *ValueAsIntArray; // x20
  const MethodInfo *v6; // x1
  int32_t SelectedNobleSeqId; // w0

  if ( (byte_434F6E4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_IndexOf_int___);
    sub_B70694(&StringLiteral_11808/*"SEQ_IDS_20220729"*/);
    byte_434F6E4 = 1;
  }
  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)data);
  if ( TreasureDevice )
  {
    ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray((System_String_o *)StringLiteral_11808/*"SEQ_IDS_20220729"*/, 0LL);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)ValueAsIntArray, 0LL) )
    {
      LOBYTE(TreasureDevice) = 0;
    }
    else
    {
      SelectedNobleSeqId = BattleServantData__GetSelectedNobleSeqId(this, v6);
      LOBYTE(TreasureDevice) = System_Array__IndexOf_int_(
                                 ValueAsIntArray,
                                 SelectedNobleSeqId,
                                 (const MethodInfo_1FCBFE4 *)Method_System_Array_IndexOf_int___) >= 0;
    }
  }
  return (char)TreasureDevice;
}


bool __fastcall BattleServantData__IsBreakShiftVoiceEnabled(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0
  System_Nullable_bool__o v4; // w0
  __int64 v5; // x1
  BattleDeckServantData_o *v7; // x0

  if ( (byte_434F6FB & 1) == 0 )
  {
    sub_B70694(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_B70694(&Method_System_Nullable_bool__get_HasValue__);
    byte_434F6FB = 1;
  }
  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
  {
    v4 = BattleDeckServantData__IsVoiceEnabledOnBreakShift(deckSvt, 0LL);
    if ( (*(_WORD *)&v4 & 0xFF00) != 0 )
    {
      return v4.fields.value;
    }
    else
    {
      v7 = this->fields.deckSvt;
      if ( !v7 )
        sub_B7076C(0LL, v5);
      return !BattleDeckServantData__IsNoMotionOnBreakShift(v7, 0LL);
    }
  }
  else
  {
    return 0;
  }
}


bool __fastcall BattleServantData__IsContainsSeqId(
        BattleServantData_o *this,
        BattleData_o *data,
        int32_t seqId,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x20
  System_Xml_XmlQualifiedName_o **v7; // x25
  System_Int32_c **v8; // x24
  System_Xml_XmlQualifiedName_o **v9; // x23
  Il2CppObject *current; // x22
  __int64 v11; // x1
  int64_t v12; // x21
  System_Xml_XmlQualifiedName_o **v13; // x28
  int32_t v14; // w27
  System_Int32_c **v15; // x19
  System_Xml_XmlQualifiedName_o **v16; // x25
  System_Xml_Schema_XmlSchemaObject_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  __int64 v20; // x0
  __int64 v21; // x1
  WebViewManager_o *Instance; // x0
  __int64 v23; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x21
  __int64 v29; // x22
  int32_t v30; // w21
  __int128 v31; // q0
  int v32; // w19
  int v33; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-B0h] BYREF
  UserServantEntity_o *entity; // [xsp+50h] [xbp-90h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *v39; // [xsp+58h] [xbp-88h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *v40; // [xsp+60h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+70h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  v6 = this;
  if ( (byte_434F6E5 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&string_TypeInfo);
    sub_B70694(&StringLiteral_22843/*"svtId"*/);
    sub_B70694(&StringLiteral_23445/*"userSvtId"*/);
    this = (BattleServantData_o *)sub_B70694(&StringLiteral_22335/*"seqId"*/);
    byte_434F6E5 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v40 = 0LL;
  value = 0LL;
  entity = 0LL;
  v39 = 0LL;
  if ( !data || (this = (BattleServantData_o *)data->fields.firstNpPlayList) == 0LL )
    sub_B7076C(this, data);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v7 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_22335/*"seqId"*/;
  v8 = &int_TypeInfo;
  v9 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_23445/*"userSvtId"*/;
  v42.fields.current = (Il2CppObject *)v37.fields.fakeValue;
  *(_OWORD *)&v42.fields.list = *(_OWORD *)&v37.fields.currentCryptoKey;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v42,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
        {
          v32 = 0;
          v33 = 1;
          goto LABEL_43;
        }
        current = v42.fields.current;
        if ( v42.fields.current
          && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v42.fields.current,
               *v7,
               &value,
               (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
        {
          if ( !value )
            sub_B7076C(0LL, v11);
          if ( value->klass->_1.element_class != (*v8)->_1.element_class )
          {
            MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)sub_B70A60(value);
LABEL_47:
            sub_B7076C(MasterData_WarQuestSelectionMaster, v25);
          }
          if ( *(_DWORD *)j_il2cpp_object_unbox_0(value) == seqId )
            break;
        }
      }
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
             (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
             *v9,
             &v40,
             (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
        && v40 )
      {
        if ( (System_String_c *)v40->klass == string_TypeInfo )
        {
          v12 = System_Int64__Parse((System_String_o *)v40, 0LL);
          goto LABEL_17;
        }
        if ( (System_Int64_c *)v40->klass == long_TypeInfo )
        {
          v12 = *(_QWORD *)j_il2cpp_object_unbox_0(v40);
          goto LABEL_17;
        }
      }
      v12 = 0LL;
LABEL_17:
      if ( v6->fields.isEnemy || v6->fields.followerType )
        break;
      v31 = *(_OWORD *)&v6->fields.userSvtId.fields.fakeValue;
      *(_OWORD *)&v37.fields.currentCryptoKey = *(_OWORD *)&v6->fields.userSvtId.fields.currentCryptoKey;
      *(_OWORD *)&v37.fields.fakeValue = v31;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v36 = v37;
      if ( v12 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v36, 0LL) )
        goto LABEL_44;
    }
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)current,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_22843/*"svtId"*/,
           &v39,
           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v13 = v7;
      v14 = seqId;
      v15 = v8;
      v16 = v9;
      v17 = v39;
      v19 = *(_QWORD *)&v6->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&v6->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v43.fields.currentCryptoKey = v19;
      *(_QWORD *)&v43.fields.fakeValue = v18;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v43, 0LL);
      if ( !v17 )
        sub_B7076C(v20, v21);
      v8 = v15;
      if ( v17->klass->_1.element_class != (*v15)->_1.element_class )
      {
        v26 = sub_B70A60(v17);
LABEL_51:
        sub_B7076C(v26, v27);
      }
      seqId = v14;
      v9 = v16;
      v7 = v13;
      if ( *(_DWORD *)j_il2cpp_object_unbox_0(v17) == (_DWORD)v20 )
        break;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v23);
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_47;
    v26 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            v12,
            (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( (v26 & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_51;
      v29 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v44.fields.currentCryptoKey = v29;
      *(_QWORD *)&v44.fields.fakeValue = v28;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v44, 0LL);
      if ( v30 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v6->fields.svtId, 0LL) )
        break;
    }
  }
LABEL_44:
  v32 = 1;
  v33 = 3;
LABEL_43:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  return v32 & ((unsigned int)(v33 + 1) >> 2);
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
    sub_B7076C(0LL, method);
  return BattleDeckServantData__getEnableNpInfo(deckSvt, 0LL);
}


bool __fastcall BattleServantData__IsEquip(BattleServantData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct BattleUserServantData_array *equipList; // x22
  __int64 v6; // x8
  SkillLvMaster_o *v7; // x19
  unsigned __int64 v8; // x23
  Il2CppClass **v9; // x21
  DataManager_o **v10; // x21
  DataManager_o *v11; // t1
  DataManager_o *v12; // x20
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v14; // x21
  unsigned __int64 v15; // x24
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o **p_lookup; // x25
  __int64 v18; // x0

  if ( (byte_434F6E8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F6E8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (equipList = this->fields.equipList) == 0LL) )
  {
LABEL_26:
    sub_B7076C(Instance, v4);
  }
  v6 = *(_QWORD *)&equipList->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = (SkillLvMaster_o *)Instance;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
    {
LABEL_25:
      v18 = sub_B70798(Instance);
      sub_B70738(v18, 0LL);
    }
    v9 = &equipList->obj.klass + v8;
    v11 = (DataManager_o *)v9[4];
    v10 = (DataManager_o **)(v9 + 4);
    Instance = v11;
    if ( v11 )
    {
      Instance = (DataManager_o *)BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)Instance, 0LL);
      if ( v8 >= equipList->max_length )
        goto LABEL_25;
      v12 = Instance;
      Instance = *v10;
      if ( !*v10 )
        goto LABEL_26;
      Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
                                    Instance,
                                    Instance->klass[1]._1.this_arg.data);
      if ( !v12 )
        goto LABEL_26;
      datalist = v12->fields.datalist;
      if ( (int)datalist >= 1 )
        break;
    }
LABEL_22:
    LODWORD(v6) = equipList->max_length;
    if ( (__int64)++v8 >= (int)v6 )
      return 0;
  }
  v14 = Instance;
  v15 = 0LL;
  p_lookup = &Instance->fields.lookup;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)datalist )
      goto LABEL_25;
    if ( !v14 )
      goto LABEL_26;
    if ( v15 >= LODWORD(v14->fields.datalist) )
      goto LABEL_25;
    v4 = *((unsigned int *)&v12->fields.lookup + v15);
    if ( (int)v4 >= 1 )
    {
      if ( !v7 )
        goto LABEL_26;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(v7, v4, *((_DWORD *)p_lookup + v15), 0LL);
      if ( Instance )
        return 1;
    }
    LODWORD(datalist) = v12->fields.datalist;
    if ( (__int64)++v15 >= (int)datalist )
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


bool __fastcall BattleServantData__IsFixNpFastSpeed(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.fixNpSpeed == 3;
}


bool __fastcall BattleServantData__IsFixNpNormalSpeed(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.fixNpSpeed == 2;
}


bool __fastcall BattleServantData__IsFixNpSpeed(BattleServantData_o *this, const MethodInfo *method)
{
  return (this->fields.fixNpSpeed | 1) == 3;
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
    sub_B7076C(0LL, v3);
  return BattleDeckServantData__IsHideClassSkillNpcFollower(deckSvt, 0LL);
}


bool __fastcall BattleServantData__IsMoveToSubMember(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_434F6D4 & 1) == 0 )
  {
    sub_B70694(&Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___);
    byte_434F6D4 = 1;
  }
  return BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(
           this,
           wave,
           turn,
           (const MethodInfo_1BE0E44 *)Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___);
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


bool __fastcall BattleServantData__IsNotDeathDamage(
        BattleServantData_o *this,
        int32_t damage,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._13_get_resultHp.method)(
           this,
           this->klass->vtable._14_set_resultHp.methodPtr,
           method) > damage;
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
    sub_B7076C(0LL, v6);
  return TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDevice, 0LL);
}


bool __fastcall BattleServantData__IsPlayableVoice(
        BattleServantData_o *this,
        VoicePlayCondMaster_o *condMst,
        int32_t type,
        System_Collections_Generic_KeyValuePair_string__int__o *pairVoiceIdWeight,
        const MethodInfo *method)
{
  int32_t SvtId; // w21
  const MethodInfo *v10; // x2
  int32_t DispLimitCount; // w0
  int32_t overwriteSvtVoiceId; // w24
  int32_t v13; // w23
  System_String_o *FileName; // x22
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v16; // x1
  System_String_o *Weight; // x2
  const MethodInfo_2163590 *v18; // x4
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_KeyValuePair_string__int__o v26; // [xsp+8h] [xbp-48h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+18h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o v28; // 0:x0.16

  if ( (byte_434F6F6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__int___ctor__);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&Voice_TypeInfo);
    byte_434F6F6 = 1;
  }
  condEntity = 0LL;
  SvtId = BattleServantData__getSvtId(this, (const MethodInfo *)condMst);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v10);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  v13 = DispLimitCount;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  if ( !ServantAssetLoadManager__ExistsBattleVoice(SvtId, v13, overwriteSvtVoiceId, type, 0LL) )
    return 0;
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager__GetPrefixVoiceId(
                                                  Instance,
                                                  SvtId,
                                                  v13,
                                                  FileName,
                                                  0LL),
        !condMst) )
  {
    sub_B7076C(Instance, v16);
  }
  if ( !VoicePlayCondMaster__isVoicePlay_21124464(
          condMst,
          SvtId,
          (System_String_o *)Instance,
          &condEntity,
          0LL,
          -1LL,
          -1,
          0LL,
          0LL) )
    return 0;
  Weight = (System_String_o *)(unsigned int)VoicePlayCondMaster__GetWeight(condMst, condEntity, 10, 0LL);
  v28.fields.key = (struct System_String_o *)&v26;
  *(_QWORD *)&v28.fields.value = FileName;
  v26 = (System_Collections_Generic_KeyValuePair_string__int__o)0LL;
  System_Collections_Generic_KeyValuePair_string__int____ctor(
    v28,
    Weight,
    Method_System_Collections_Generic_KeyValuePair_string__int___ctor__,
    v18);
  *pairVoiceIdWeight = v26;
  sub_B70630((BattleServantConfConponent_o *)pairVoiceIdWeight, 0LL, v19, v20, v21, v22, v23, v24);
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
    sub_B7076C(DispLimitCount, v6);
  return TreasureDvcEntity__getFixAppearanceInfoArray(TreasureDevice, DispLimitCount, 0LL) != 0LL;
}


bool __fastcall BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_434F6D5 & 1) == 0 )
  {
    sub_B70694(&Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___);
    byte_434F6D5 = 1;
  }
  return BattleServantData__HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent_(
           this,
           wave,
           turn,
           (const MethodInfo_1BE0E44 *)Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___);
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

  if ( (byte_434F652 & 1) == 0 )
  {
    sub_B70694(&BattleCommandData_TypeInfo);
    byte_434F652 = 1;
  }
  if ( !this->fields.TDvc || !this->fields._SvtTDvc )
    return 0LL;
  v3 = (BattleCommandData_o *)sub_B70764(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v3, 0LL);
  SvtTDvc = BattleServantData__get_SvtTDvc(this, v4);
  if ( !SvtTDvc || !v3 )
    sub_B7076C(SvtTDvc, v6);
  v3->fields._type = SvtTDvc->fields.cardId;
  v3->fields.treasureDvc = BattleServantData__getTreasureDvcId(this, 1, v7);
  return v3;
}


void __fastcall BattleServantData__OverwriteOwnSkillsForTransformedServant(
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
    sub_B7076C(this, userSvt);
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
          v14 = sub_B70798(this);
          sub_B70738(v14, 0LL);
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


void __fastcall BattleServantData__OverwriteShiftDeckIndex(
        BattleServantData_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  int32_t Param; // w0

  if ( !vals )
    sub_B7076C(this, 0LL);
  Param = DataVals__GetParam(vals, 116, -1, 0LL);
  if ( (Param & 0x80000000) == 0 )
    this->fields.shiftDeckIndex = Param;
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
    sub_B7076C(0LL, ev);
  ServantWaveTurnEventOwner__Add(waveTurnEventOwner, ev, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__RemoveBuffsWithUpdateView(
        BattleServantData_o *this,
        System_Func_BattleBuffData_BuffData____o *removeBuffMethod,
        System_Int32_array *fieldIndiv,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleServantData_o *v8; // x20
  BattleBuffData_o *buffData; // x23
  System_Int32_array *IgnoreAuraBuffIds; // x0
  char v11; // w23
  const MethodInfo *v12; // x3
  BattleBuffData_BuffData_array *v13; // x21
  BattleBuffData_o *v14; // x23
  System_Int32_array *v15; // x0
  char v16; // w23
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  int max_length; // w8
  unsigned int v20; // w22
  BattleBuffData_BuffData_o *v21; // x8
  __int64 v23; // x0

  v8 = this;
  if ( (byte_434F657 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B70694(&Method_System_Func_BattleBuffData_BuffData____Invoke__);
    byte_434F657 = 1;
  }
  buffData = v8->fields.buffData;
  if ( !buffData )
    goto LABEL_17;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(v8->fields.buffData, 0LL);
  this = (BattleServantData_o *)BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0LL);
  if ( !removeBuffMethod )
    goto LABEL_17;
  v11 = (char)this;
  this = (BattleServantData_o *)System_Func_object___Invoke(
                                  (System_Func_object__o *)removeBuffMethod,
                                  (const MethodInfo_2994AC4 *)Method_System_Func_BattleBuffData_BuffData____Invoke__);
  v13 = (BattleBuffData_BuffData_array *)this;
  if ( (v11 & 1) != 0 )
  {
    v14 = v8->fields.buffData;
    if ( !v14 )
      goto LABEL_17;
    v15 = BattleBuffData__GetIgnoreAuraBuffIds(v8->fields.buffData, 0LL);
    this = (BattleServantData_o *)BattleBuffData__checkBuffId(v14, v15, 0LL);
    v16 = (char)this;
    if ( !logic )
      goto LABEL_17;
  }
  else
  {
    v16 = 1;
    if ( !logic )
      goto LABEL_17;
  }
  BattleServantData__updateConditionsBuff(v8, fieldIndiv, logic->fields.perf, v12);
  BattleServantData__updateHp(v8, v17);
  BattleServantData__updateBuff(v8, v16 & 1, 1, v18);
  if ( !v13 )
    goto LABEL_17;
  max_length = v13->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        v23 = sub_B70798(this);
        sub_B70738(v23, 0LL);
      }
      v21 = v13->m_Items[v20];
      if ( !v21 )
        break;
      BattleLogic__removeDoNotSelectCommandCardBuff(logic, v21->fields.buffId, v8, 0LL);
      max_length = v13->max_length;
      if ( (int)++v20 >= max_length )
        return v13;
    }
LABEL_17:
    sub_B7076C(this, removeBuffMethod);
  }
  return v13;
}


void __fastcall BattleServantData__RemoveClassBoardCommandSpellOnTransform(
        BattleServantData_o *this,
        BattleUserServantData_o *afterUserSvtData,
        BattleData_o *data,
        const MethodInfo *method)
{
  void *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x22
  int32_t npcSvtClassId; // w8
  int32_t classId; // w9
  struct ServantEntity_o *svtdata; // x9

  if ( (byte_434F6EE & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_434F6EE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !afterUserSvtData )
    goto LABEL_18;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (void *)BattleUserServantData__getBattleSvtId(afterUserSvtData, 0LL);
  if ( !v9 )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v9,
                                     (int32_t)Master_WarQuestSelectionMaster,
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  npcSvtClassId = afterUserSvtData->fields.npcSvtClassId;
  if ( !npcSvtClassId )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_18;
    npcSvtClassId = *((_DWORD *)Master_WarQuestSelectionMaster + 20);
  }
  classId = this->fields.npcSvtClassId;
  if ( !classId )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      goto LABEL_18;
    classId = svtdata->fields.classId;
  }
  if ( classId == npcSvtClassId )
    return;
  Master_WarQuestSelectionMaster = BattleServantData__get_BuffData(this, v8);
  if ( !data || !Master_WarQuestSelectionMaster )
LABEL_18:
    sub_B7076C(Master_WarQuestSelectionMaster, v8);
  BattleBuffData__RemoveClassBoardCommandSpellBuff(
    (BattleBuffData_o *)Master_WarQuestSelectionMaster,
    this->fields.classBoardAddCommandSpells,
    data->fields.logic,
    0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__RemoveNoTurnBuffWithUpdateView(
        BattleServantData_o *this,
        System_Int32_array *fieldIndiv,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Func_Task_ContingentProperties__o *v22; // x21
  const MethodInfo *v23; // x4

  if ( (byte_434F655 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData_____ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData____TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass422_0__RemoveNoTurnBuffWithUpdateView_g__RemoveBuff_0__);
    sub_B70694(&BattleServantData___c__DisplayClass422_0_TypeInfo);
    byte_434F655 = 1;
  }
  v7 = sub_B70764(BattleServantData___c__DisplayClass422_0_TypeInfo);
  BattleServantData___c__DisplayClass422_0___ctor((BattleServantData___c__DisplayClass422_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = logic;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)logic, v16, v17, v18, v19, v20, v21);
  v22 = (System_Func_Task_ContingentProperties__o *)sub_B70764(System_Func_BattleBuffData_BuffData____TypeInfo);
  System_Func_Task_ContingentProperties____ctor(
    v22,
    (Il2CppObject *)v7,
    Method_BattleServantData___c__DisplayClass422_0__RemoveNoTurnBuffWithUpdateView_g__RemoveBuff_0__,
    (const MethodInfo_2994AB0 *)Method_System_Func_BattleBuffData_BuffData_____ctor__);
  return BattleServantData__RemoveBuffsWithUpdateView(
           this,
           (System_Func_BattleBuffData_BuffData____o *)v22,
           fieldIndiv,
           *(BattleLogic_o **)(v7 + 24),
           v23);
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

  if ( (byte_434F6F4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____Remove__);
    byte_434F6F4 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(key, 0LL);
  p_partAnimationSaveDict = (BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict;
  if ( IsNullOrEmpty )
  {
    p_partAnimationSaveDict->klass = 0LL;
    sub_B70630(p_partAnimationSaveDict, 0LL, v5, v6, v7, v8, v9, v10);
  }
  else
  {
    klass = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)p_partAnimationSaveDict->klass;
    if ( klass )
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
        klass,
        (System_Xml_XmlQualifiedName_o *)key,
        (const MethodInfo_2F51454 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____Remove__);
  }
}


void __fastcall BattleServantData__RemovePassiveBuffOnTransform(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleData_o *v20; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x20

  if ( (byte_434F6ED & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleServantData___ctor__);
    sub_B70694(&System_Action_BattleServantData__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass746_0__RemovePassiveBuffOnTransform_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass746_0_TypeInfo);
    byte_434F6ED = 1;
  }
  v5 = sub_B70764(BattleServantData___c__DisplayClass746_0_TypeInfo);
  BattleServantData___c__DisplayClass746_0___ctor((BattleServantData___c__DisplayClass746_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 24) = data,
        sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)data, v14, v15, v16, v17, v18, v19),
        v20 = *(BattleData_o **)(v5 + 24),
        v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleServantData__TypeInfo),
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v21,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass746_0__RemovePassiveBuffOnTransform_b__0__,
          (const MethodInfo_264C148 *)Method_System_Action_BattleServantData___ctor__),
        !v20) )
  {
    sub_B7076C(v6, v7);
  }
  BattleData__ExecFuncAllServant(v20, (System_Action_BattleServantData__o *)v21, 0LL);
}


void __fastcall BattleServantData__RemovePassiveSkill(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  BattleServantData___c_c *v4; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__745_0; // x20
  Il2CppObject *v7; // x21
  struct BattleServantData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_434F6EC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
    sub_B70694(&Method_System_Predicate_BattleSkillInfoData___ctor__);
    sub_B70694(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__RemovePassiveSkill_b__745_0__);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F6EC = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  v4 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v4 = BattleServantData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__745_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__745_0;
  if ( !_9__745_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__745_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__745_0,
      v7,
      Method_BattleServantData___c__RemovePassiveSkill_b__745_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    v8 = BattleServantData___c_TypeInfo->static_fields;
    v8->__9__745_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__745_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__745_0,
      (System_Int32_array **)_9__745_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !skillInfoList )
    sub_B7076C(v4, method);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)skillInfoList,
    (System_Predicate_T__o *)_9__745_0,
    (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
}


void __fastcall BattleServantData__ReplaceSelfSkillInfo(
        BattleServantData_o *this,
        int32_t index,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass315_0_o *v9; // x23
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x24
  WarBoardData_SquareRangeSearch_o *v14; // x0
  WarBoardData_SquareRangeSearch_o *v15; // x22
  int32_t v16; // w24
  BattleSkillInfoData_o *SkillData; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v18; // x20
  const MethodInfo *v19; // [xsp+0h] [xbp-40h]

  if ( (byte_434F630 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___);
    sub_B70694(&Method_System_Func_BattleSkillInfoData__bool___ctor__);
    sub_B70694(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__);
    sub_B70694(&Method_BattleServantData___c__DisplayClass315_0__ReplaceSelfSkillInfo_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass315_0_TypeInfo);
    byte_434F630 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass315_0_o *)sub_B70764(BattleServantData___c__DisplayClass315_0_TypeInfo);
  BattleServantData___c__DisplayClass315_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  v9->fields.skillInfoType = 11;
  v9->fields.index = index;
  skillInfoList = this->fields.skillInfoList;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleSkillInfoData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleServantData___c__DisplayClass315_0__ReplaceSelfSkillInfo_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
  v14 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___);
  if ( !v14 )
    return;
  v15 = v14;
  v10 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.skillInfoList;
  if ( !v10
    || (v16 = System_Collections_Generic_List_WarBoardManager_TaskList___IndexOf(
                v10,
                (WarBoardManager_TaskList_o *)v15,
                (const MethodInfo_3026738 *)Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__),
        SkillData = BattleSkillInfoData__MakeSkillData(v9->fields.skillInfoType, 0LL),
        v10 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)BattleServantData__SetSkillInfo(
                                                                               this,
                                                                               SkillData,
                                                                               v9->fields.skillInfoType,
                                                                               v9->fields.index,
                                                                               skillId,
                                                                               skillLv,
                                                                               -1LL,
                                                                               -1,
                                                                               v19),
        !this->fields.skillInfoList)
    || (v18 = v10,
        System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.skillInfoList,
          v16,
          (WarBoardManager_TaskList_o *)v10,
          (const MethodInfo_30253E0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__),
        !v18) )
  {
LABEL_10:
    sub_B7076C(v10, v11);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_WarBoardManager_TaskList__o *, BattleServantData_o *, Il2CppMethodPointer))v18->klass->vtable._11_Add.method)(
    v18,
    this,
    v18->klass->vtable._12_unknown.methodPtr);
  LODWORD(v18[1].monitor) = v15[2].klass;
  LODWORD(v18[1].klass) = v15[1].fields.squareIndex;
}


void __fastcall BattleServantData__ResetAdjustment(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0

  if ( (byte_434F618 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Clear__);
    byte_434F618 = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)adjustmentList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__Clear__);
}


void __fastcall BattleServantData__ResetOverwriteTreasureDevice(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t tempTreasuredvcId; // w1

  tempTreasuredvcId = this->fields.tempTreasuredvcId;
  if ( tempTreasuredvcId )
  {
    BattleServantData__UpdateTreasureDevice(this, tempTreasuredvcId, this->fields.tempTreasuredvcLv, v2);
    *(_QWORD *)&this->fields.tempTreasuredvcId = 0x100000000LL;
  }
}


void __fastcall BattleServantData__ResetSelectedTreasureDevice(BattleServantData_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.selectedTDCardId = -1LL;
}


void __fastcall BattleServantData__ResetServantSelfSkill(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x20
  BattleServantData___c_c *v4; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__375_0; // x21
  Il2CppObject *v7; // x22
  struct BattleServantData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  BattleSkillInfoData_o *v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  BattleSkillInfoData_o *v31; // x21
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0

  if ( (byte_434F648 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    sub_B70694(&Method_System_Func_BattleSkillInfoData__bool___ctor__);
    sub_B70694(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_BattleServantData___c__ResetServantSelfSkill_b__375_0__);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F648 = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  v4 = BattleServantData___c_TypeInfo;
  if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v4 = BattleServantData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__375_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__375_0;
  if ( !_9__375_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__375_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__375_0,
      v7,
      Method_BattleServantData___c__ResetServantSelfSkill_b__375_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_BattleSkillInfoData__bool___ctor__);
    v8 = BattleServantData___c_TypeInfo->static_fields;
    v8->__9__375_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__375_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__375_0,
      (System_Int32_array **)_9__375_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__375_0,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  if ( !v15 )
    sub_B7076C(0LL, v16);
  klass = v15->klass;
  v18 = v15;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_B08590(v15, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v18,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_B7076C(0LL, v22);
  while ( 1 )
  {
    v32 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_33;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_33:
      v35 = sub_B08590(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v23, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v26 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_24;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_24:
      v27 = sub_B08590(v23, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v28 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
    v31 = v28;
    if ( !v28 )
      sub_B7076C(0LL, v29);
    v28->fields.sealedTurn = 0;
    if ( !BattleServantData__ChangeSkillRemainingTurn(this, v28, v28, v30) )
      v31->fields.chargeTurn = 0;
  }
  v36 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v37 = 0LL;
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_40;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_40:
    v39 = sub_B08590(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8));
}


void __fastcall BattleServantData__ResultDamage(
        BattleServantData_o *this,
        int32_t damage,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandOpponent,
        System_Int32_array *addOpponentIndividualityArray,
        int32_t minHp,
        const MethodInfo *method)
{
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  BattleServantSnapShotGroupBase_o *SnapShotDamagedOnLogicDead_k__BackingField; // x0

  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, BattleServantData_o *, BattleCommandData_o *, System_Int32_array *, int32_t, const MethodInfo *))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr,
         opponent,
         commandOpponent,
         addOpponentIndividualityArray,
         minHp,
         method) >= 1 )
  {
    SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupBase_o *)this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
    if ( !SnapShotDamagedOnLogicDead_k__BackingField )
      goto LABEL_7;
    BattleServantSnapShotGroupBase__Clear(SnapShotDamagedOnLogicDead_k__BackingField, 0LL);
  }
  BattleServantData__SubValueToResultHp(this, damage, minHp, v14);
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) > 0 )
    return;
  SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupBase_o *)this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
  if ( !SnapShotDamagedOnLogicDead_k__BackingField )
LABEL_7:
    sub_B7076C(SnapShotDamagedOnLogicDead_k__BackingField, v13);
  BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
    (BattleServantSnapShotGroupDefault_o *)SnapShotDamagedOnLogicDead_k__BackingField,
    this,
    opponent,
    commandOpponent,
    addOpponentIndividualityArray,
    0LL);
}


void __fastcall BattleServantData__SaveNpPlay(BattleServantData_o *this, BattleData_o *data, const MethodInfo *method)
{
  struct System_Collections_Generic_List_Dictionary_string__object___o *SelectedNobleSeqId; // x0
  __int64 v6; // x1
  int32_t v7; // w22
  PlayerServantNoblePhantasmUsageData_o *playerServantNoblePhantasmUsageData; // x21
  __int64 v9; // x23
  __int64 v10; // x24
  const MethodInfo *v11; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v12; // x21
  __int64 v13; // x2
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  System_Xml_Schema_XmlSchemaObject_o *v16; // x0
  __int64 v17; // x22
  __int64 v18; // x23
  __int64 v19; // x2
  System_Int32_c *v20; // x0
  System_Xml_Schema_XmlSchemaObject_o *v21; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  System_String_o *v24; // x20
  int32_t Int; // w0
  int v26; // w8
  __int64 v27; // x2
  System_Xml_Schema_XmlSchemaObject_o *v28; // x0
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF
  int64_t UserSvtId; // [xsp+10h] [xbp-50h] BYREF
  int32_t SelectedNobleGroupSeqId; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_434F6E6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_22843/*"svtId"*/);
    sub_B70694(&StringLiteral_23445/*"userSvtId"*/);
    sub_B70694(&StringLiteral_22335/*"seqId"*/);
    byte_434F6E6 = 1;
  }
  SelectedNobleGroupSeqId = 0;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)BattleServantData__GetSelectedNobleSeqId(
                                                                                                 this,
                                                                                                 (const MethodInfo *)data);
  if ( !data )
    goto LABEL_25;
  v7 = (int)SelectedNobleSeqId;
  playerServantNoblePhantasmUsageData = data->fields.playerServantNoblePhantasmUsageData;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v10;
  *(_QWORD *)&v32.fields.fakeValue = v9;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                                                 v32,
                                                                                                 0LL);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_25;
  PlayerServantNoblePhantasmUsageData__AddNoblePhantasmUsage(
    playerServantNoblePhantasmUsageData,
    (int32_t)SelectedNobleSeqId,
    v7,
    this->fields.followerType,
    this->fields.isEnemy,
    0LL);
  ++this->fields.playedNPCount;
  if ( !BattleServantData__CheckFirstNpPlay(this, data, v11) )
    return;
  v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v12,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  LODWORD(UserSvtId) = v7;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)j_il2cpp_value_box_0(
                                                                                                 int_TypeInfo,
                                                                                                 &UserSvtId,
                                                                                                 v13);
  if ( !v12 )
    goto LABEL_25;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v12,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22335/*"seqId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)SelectedNobleSeqId,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( this->fields.isEnemy || this->fields.followerType )
  {
    UserSvtId = 0LL;
    v16 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId, v15);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v12,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23445/*"userSvtId"*/,
      v16,
      (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v33.fields.currentCryptoKey = v18;
    *(_QWORD *)&v33.fields.fakeValue = v17;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v33, 0LL);
    v20 = int_TypeInfo;
  }
  else
  {
    UserSvtId = BattleServantData__getUserSvtId(this, v14);
    v28 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId, v27);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v12,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23445/*"userSvtId"*/,
      v28,
      (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v20 = int_TypeInfo;
    v29 = 0;
  }
  v21 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(v20, &v29, v19);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v12,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22843/*"svtId"*/,
    v21,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  SelectedNobleSeqId = data->fields.firstNpPlayList;
  if ( !SelectedNobleSeqId )
LABEL_25:
    sub_B7076C(SelectedNobleSeqId, v6);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SelectedNobleSeqId,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
  if ( BattleServantData__CheckSelectedNobleSeqIsGroup(this, v22) )
  {
    SelectedNobleGroupSeqId = BattleServantData__GetSelectedNobleGroupSeqId(this, v23);
    v24 = System_Int32__ToString((int32_t)&SelectedNobleGroupSeqId, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v24, 0, 0LL);
    if ( this->fields.isEnemy || this->fields.followerType )
      v26 = 2;
    else
      v26 = 1;
    UnityEngine_PlayerPrefs__SetInt(v24, v26 | Int, 0LL);
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
  if ( (byte_434F615 & 1) == 0 )
  {
    sub_B70694(&BattleServantData_Adjustment_TypeInfo);
    byte_434F615 = 1;
  }
  v15 = sub_B70764(BattleServantData_Adjustment_TypeInfo);
  BattleServantData_Adjustment___ctor((BattleServantData_Adjustment_o *)v15, 0LL);
  if ( !v15 )
    sub_B7076C(v16, v17);
  *(float *)(v15 + 20) = x;
  *(float *)(v15 + 24) = y;
  *(_BYTE *)(v15 + 16) = isCritical;
  *(_BYTE *)(v15 + 17) = isWeak;
  *(_BYTE *)(v15 + 18) = isRegist;
  *(_BYTE *)(v15 + 19) = isNoDamage;
  *(float *)(v15 + 28) = z;
  BattleServantData__SetAdjustment_20671100(this, (BattleServantData_Adjustment_o *)v15, v18);
}


void __fastcall BattleServantData__SetAdjustment_20671100(
        BattleServantData_o *this,
        BattleServantData_Adjustment_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x0
  BattleServantConfConponent_o *p_adjustmentList; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1

  if ( (byte_434F616 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    byte_434F616 = 1;
  }
  adjustmentList = this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (BattleServantConfConponent_o *)&this->fields.adjustmentList;
    v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v7,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (BattleServantConfConponent_c *)v7;
    sub_B70630(p_adjustmentList, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
    adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      sub_B7076C(0LL, v14);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)adjustmentList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)data,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__);
}


void __fastcall BattleServantData__SetCommandAssistSkill(
        BattleServantData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct System_Int32_array *commandAssistIds; // x8
  EventCommandAssistMaster_o *v8; // x21
  unsigned __int64 v9; // x22
  unsigned __int64 max_length; // x9
  __int64 v11; // x0
  const MethodInfo *v12; // [xsp+0h] [xbp-30h]

  if ( (byte_434F623 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_434F623 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int32_t *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  commandAssistIds = this->fields.commandAssistIds;
  if ( !commandAssistIds )
LABEL_14:
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
  v8 = (EventCommandAssistMaster_o *)Master_WarQuestSelectionMaster;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = commandAssistIds->max_length;
    if ( (__int64)v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
    {
      v11 = sub_B70798(Master_WarQuestSelectionMaster);
      sub_B70738(v11, 0LL);
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
  int32_t Item; // w21
  __int128 v6; // q1
  int32_t v7; // w21
  int32_t v8; // w0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20
  ServantLimitAddMaster_o *v10; // x21
  int32_t v11; // w22
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t battleCharaLimitCount; // w2
  int32_t svtId; // w1
  __int64 v28; // x21
  __int64 v29; // x22
  System_Int32_array **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtdata; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  BattleServantData_o *v39; // x20
  int32_t v40; // w21
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+28h] [xbp-58h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  v4 = this;
  if ( (byte_434F634 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_20537/*"limitCount"*/);
    sub_B70694(&StringLiteral_22843/*"svtId"*/);
    sub_B70694(&StringLiteral_20082/*"index"*/);
    sub_B70694(&StringLiteral_23445/*"userSvtId"*/);
    this = (BattleServantData_o *)sub_B70694(&StringLiteral_23281/*"uniqueId"*/);
    byte_434F634 = 1;
  }
  entity = 0LL;
  if ( !fakeInfo )
    goto LABEL_29;
  v4->fields.index = System_Collections_Generic_Dictionary_string__int___get_Item(
                       fakeInfo,
                       (System_String_o *)StringLiteral_20082/*"index"*/,
                       (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v4->fields.uniqueId = System_Collections_Generic_Dictionary_string__int___get_Item(
                          fakeInfo,
                          (System_String_o *)StringLiteral_23281/*"uniqueId"*/,
                          (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  Item = System_Collections_Generic_Dictionary_string__int___get_Item(
           fakeInfo,
           (System_String_o *)StringLiteral_23445/*"userSvtId"*/,
           (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v48, Item, 0LL);
  v6 = *(_OWORD *)&v48.fields.fakeValue;
  *(_OWORD *)&v4->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)&v48.fields.currentCryptoKey;
  *(_OWORD *)&v4->fields.userSvtId.fields.fakeValue = v6;
  v7 = System_Collections_Generic_Dictionary_string__int___get_Item(
         fakeInfo,
         (System_String_o *)StringLiteral_22843/*"svtId"*/,
         (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v4->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v7, 0LL);
  v8 = System_Collections_Generic_Dictionary_string__int___get_Item(
         fakeInfo,
         (System_String_o *)StringLiteral_20537/*"limitCount"*/,
         (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v4->fields.limitcount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v8, 0LL);
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_29;
  v10 = (ServantLimitAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)this,
                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v4->fields.svtId, 0LL);
  this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                  v4->fields.limitcount,
                                  0LL);
  if ( !v10 )
    goto LABEL_29;
  this = (BattleServantData_o *)ServantLimitAddMaster__TryGetEntity(v10, &entity, v11, (int32_t)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v29 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v50.fields.currentCryptoKey = v29;
    *(_QWORD *)&v50.fields.fakeValue = v28;
    this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v50, 0LL);
    if ( MasterData_WarQuestSelectionMaster )
    {
      v30 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     (int32_t)this,
                                     (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v4->fields.svtdata = (struct ServantEntity_o *)v30;
      p_svtdata = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v4->fields.svtdata;
      sub_B70630((BattleServantConfConponent_o *)&v4->fields.svtdata, v30, v32, v33, v34, v35, v36, v37);
      this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        v38 = *p_svtdata;
        if ( *p_svtdata )
        {
          v39 = this;
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v38[1], 0LL);
          this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                          v4->fields.limitcount,
                                          0LL);
          if ( v39 )
          {
            battleCharaLimitCount = (int)this;
            this = v39;
            svtId = v40;
            goto LABEL_28;
          }
        }
      }
    }
LABEL_29:
    sub_B7076C(this, fakeInfo);
  }
  if ( !entity )
    goto LABEL_29;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_29;
  v12 = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 entity->fields.svtId,
                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v4->fields.svtdata = (struct ServantEntity_o *)v12;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.svtdata, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)entity;
  v4->fields.svtlimitaddent = entity;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.svtlimitaddent, v19, v20, v21, v22, v23, v24, v25);
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_29;
  this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !entity || !this )
    goto LABEL_29;
  battleCharaLimitCount = entity->fields.battleCharaLimitCount;
  svtId = entity->fields.svtId;
LABEL_28:
  v41 = (System_Int32_array **)ServantLimitMaster__GetEntity(
                                 (ServantLimitMaster_o *)this,
                                 svtId,
                                 battleCharaLimitCount,
                                 0LL);
  v4->fields.svtlimitDispent = (struct ServantLimitEntity_o *)v41;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.svtlimitDispent, v41, v42, v43, v44, v45, v46, v47);
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
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x0
  BattleServantConfConponent_o *p_partAnimationSaveDict; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1

  if ( (byte_434F6F2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData_____ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TypeInfo);
    byte_434F6F2 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)saveDataArray, 0LL) )
  {
    partAnimationSaveDict = this->fields.partAnimationSaveDict;
    if ( !partAnimationSaveDict )
    {
      p_partAnimationSaveDict = (BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict;
      v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TypeInfo);
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
        v9,
        (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData_____ctor__);
      p_partAnimationSaveDict->klass = (BattleServantConfConponent_c *)v9;
      sub_B70630(p_partAnimationSaveDict, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
      partAnimationSaveDict = (struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *)p_partAnimationSaveDict->klass;
      if ( !p_partAnimationSaveDict->klass )
        sub_B7076C(0LL, v16);
    }
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)partAnimationSaveDict,
      (System_Xml_XmlQualifiedName_o *)key,
      (System_Xml_Schema_XmlSchemaObject_o *)saveDataArray,
      (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____set_Item__);
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
    sub_B7076C(0LL, v4);
  this->fields.selectedTDCardId = SvtTDvc->fields.cardId;
  this->fields.selectedTDId = BattleServantData__getTreasureDvcId(this, 1, v5);
}


void __fastcall BattleServantData__SetServantCommandCard(BattleServantData_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  ServantCardMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v13; // x22
  unsigned __int64 v14; // x27
  __int64 v15; // x23
  __int64 v16; // x24
  __int64 v17; // x2
  struct System_Collections_Hashtable_o *commandtable; // x23
  __int64 v19; // x0
  __int64 v20; // x25
  __int64 v21; // x26
  __int64 v22; // x24
  __int64 v23; // x0
  int32_t cardId; // [xsp+14h] [xbp-5Ch] BYREF
  ServantCardEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v26; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_434F670 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantCardMaster___);
    sub_B70694(&System_Collections_Hashtable_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A);
    byte_434F670 = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Hashtable_o *)sub_B70764(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39248100(v3, 0LL);
  this->fields.commandtable = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandtable,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ServantCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                Instance,
                                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v13 = sub_B706AC(int___TypeInfo, 6LL);
  v26.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264((System_Array_o *)v13, v26, 0LL);
  if ( !v13 )
    goto LABEL_22;
  if ( *(int *)(v13 + 24) >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v27.fields.currentCryptoKey = v16;
      *(_QWORD *)&v27.fields.fakeValue = v15;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v27, 0LL);
      if ( v14 >= *(unsigned int *)(v13 + 24) )
      {
        v23 = sub_B70798(Instance);
        sub_B70738(v23, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = (DataManager_o *)ServantCardMaster__TryGetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    &entity,
                                    (int32_t)Instance,
                                    *(_DWORD *)(v13 + 32 + 4 * v14),
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        commandtable = this->fields.commandtable;
        cardId = entity->fields.cardId;
        v19 = j_il2cpp_value_box_0(int_TypeInfo, &cardId, v17);
        v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v22 = v19;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v28.fields.currentCryptoKey = v21;
        *(_QWORD *)&v28.fields.fakeValue = v20;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v28, 0LL);
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
          v22,
          Instance,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
      if ( (__int64)++v14 >= *(int *)(v13 + 24) )
        return;
    }
LABEL_22:
    sub_B7076C(Instance, v11);
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
      sub_B7076C(0LL, v7);
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

  if ( (byte_434F6DC & 1) == 0 )
  {
    sub_B70694(&System_Math_TypeInfo);
    byte_434F6DC = 1;
  }
  BattleServantData__setShiftServant(this, data, shiftValue, *(const MethodInfo **)&shiftValue);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  if ( !defHp )
    sub_B7076C(v9, v10);
  v11 = v9;
  TotalDamage = SimpleHpData__get_TotalDamage((SimpleHpData_o *)defHp, 0LL);
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = System_Math__Max_45601072(1, v11 - TotalDamage, 0LL);
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
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  __int64 v19; // x25
  __int64 v20; // x25
  SkillEntity_o *v21; // x0
  __int64 v22; // x25
  __int64 v23; // x25
  int32_t v24; // w8
  __int64 v25; // x22
  __int64 v26; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v28; // x22
  __int64 v29; // x23
  ServantSkillMaster_o *v30; // x21
  int32_t v31; // w22
  ServantSkillEntity_o *EntityFromSkillId; // x0
  ServantSkillEntity_o *v33; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v16 = this;
  if ( (byte_434F631 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (BattleServantData_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_434F631 = 1;
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
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v20 = **(_QWORD **)(v19 + 192);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_B08394(v20);
  this = **(BattleServantData_o ***)(v20 + 184);
  if ( !this )
    goto LABEL_33;
  this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
  entity = 0LL;
  if ( !this )
    goto LABEL_33;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    skillId,
    (const MethodInfo_21C049C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  v21 = (SkillEntity_o *)entity;
  if ( entity )
  {
    skillInfo->fields.isUseSkill = 1;
    skillInfo->fields.isPassive = SkillEntity__isPassive(v21, 0LL);
    v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
      sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v23 = **(_QWORD **)(v22 + 192);
    if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
      sub_B08394(v23);
    this = **(BattleServantData_o ***)(v23 + 184);
    if ( !this )
      goto LABEL_33;
    this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !this )
      goto LABEL_33;
    this = (BattleServantData_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, skillId, skillLv, 0LL);
    if ( !this )
      goto LABEL_33;
    v24 = *(&this->fields.uniqueId + 1);
    skillInfo->fields.sealedTurn = 0;
    skillInfo->fields.chargeTurn = 0;
    skillInfo->fields.priority = v24;
  }
  else
  {
    skillInfo->fields.isUseSkill = 0;
  }
  if ( type != 11 )
    return skillInfo;
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v26 = **(_QWORD **)(v25 + 192);
  if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
    sub_B08394(v26);
  this = **(BattleServantData_o ***)(v26 + 184);
  if ( !this )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)this,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v29 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  v30 = (ServantSkillMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v36.fields.currentCryptoKey = v29;
  *(_QWORD *)&v36.fields.fakeValue = v28;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v36, 0LL);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v30 )
LABEL_33:
    sub_B7076C(this, skillInfo);
  EntityFromSkillId = ServantSkillMaster__getEntityFromSkillId(v30, v31, index + 1, (int32_t)this, 0LL);
  if ( EntityFromSkillId )
  {
    v33 = EntityFromSkillId;
    skillInfo->fields.strengthStatus = ServantSkillEntity__GetStrengthStatus(EntityFromSkillId, 0LL);
    skillInfo->fields.skillRecord = v33->fields.skillNum;
  }
  return skillInfo;
}


void __fastcall BattleServantData__SetSummonNpc(
        BattleServantData_o *this,
        BattleDeckServantData_o *inDeckSvt,
        const MethodInfo *method)
{
  if ( !inDeckSvt )
    sub_B7076C(this, 0LL);
  this->fields.summonNpcId = inDeckSvt->fields.npcId;
}


void __fastcall BattleServantData__SetTakeoverServantData(
        BattleServantData_o *this,
        BattleWarBoardInfo_WarBoardServantInfo_o *takeoverData,
        const MethodInfo *method)
{
  System_Array_o *v5; // x21
  __int64 v6; // x1
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v8; // x21
  const MethodInfo *v9; // x1
  System_RuntimeFieldHandle_o v10; // 0:w1.4

  if ( (byte_434F61E & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__4E81D9BE7E36896BB3900CE16AFF3BCF5CD86C2A70B54B90EFF875B6FABD3457);
    byte_434F61E = 1;
  }
  if ( takeoverData )
  {
    this->fields.maxDefeatPoint = takeoverData->fields.maxDefeatPoint;
    this->fields.defeatPoint = takeoverData->fields.defeatPoint;
    if ( takeoverData->fields.buffDataSave )
    {
      v5 = (System_Array_o *)sub_B706AC(int___TypeInfo, 6LL);
      v10.fields.value = Field__PrivateImplementationDetails__4E81D9BE7E36896BB3900CE16AFF3BCF5CD86C2A70B54B90EFF875B6FABD3457;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v5, v10, 0LL);
      buffData = this->fields.buffData;
      if ( !buffData )
        goto LABEL_14;
      buffData = (BattleBuffData_o *)BattleBuffData__GetSkillTypePassiveBuff(buffData, (System_Int32_array *)v5, 0LL);
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
        sub_B7076C(buffData, v6);
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
  BattleBuffData_o *v7; // x21
  BalanceConfig_c *v8; // x0
  __int64 currentHp; // x1
  BattleBuffData_BuffData_array *ActiveList; // x0
  const MethodInfo *v11; // x2
  int32_t tmpAppearanceId; // w8
  const MethodInfo *v13; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v15; // x21
  int32_t i; // w22
  BattleSkillInfoData_o *SelfSkillInfo; // x0
  int32_t currentNp; // w8
  int32_t nextNpTurn; // w8
  __int64 v20; // x0

  if ( (byte_434F61F & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_BasicHelper_IndexValue_int____69237232);
    sub_B70694(&BattleBuffData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_434F61F = 1;
  }
  if ( takeoverData )
  {
    this->fields.transformIndex = takeoverData->fields.transformIndex;
    this->fields.transformLimitCount = takeoverData->fields.transformLimitCount;
    BattleServantData__loadTransformServant(this, data, (const MethodInfo *)data);
    if ( takeoverData->fields.buffDataSave )
    {
      v7 = (BattleBuffData_o *)sub_B70764(BattleBuffData_TypeInfo);
      BattleBuffData___ctor(v7, 0LL);
      if ( !v7 )
        goto LABEL_22;
      BattleBuffData__setSaveData(v7, takeoverData->fields.buffDataSave, 0LL);
      this->fields.tmpAppearanceId = -1;
      ActiveList = BattleBuffData__getActiveList(v7, 1, 0LL);
      if ( BattleServantData__isChangeAppearanceBuff(this, ActiveList, v11) )
      {
        tmpAppearanceId = this->fields.tmpAppearanceId;
        this->fields.tmpAppearanceId = -1;
        this->fields.appearanceId = tmpAppearanceId;
      }
    }
    v8 = (BalanceConfig_c *)sub_B706AC(int___TypeInfo, 3LL);
    if ( !v8 )
LABEL_22:
      sub_B7076C(v8, currentHp);
    namespaze = (unsigned int)v8->_1.namespaze;
    v15 = (System_Int32_array *)v8;
    if ( !namespaze
      || (LODWORD(v8->_1.byval_arg.data) = takeoverData->fields.skill1Ct, namespaze == 1)
      || (HIDWORD(v8->_1.byval_arg.data) = takeoverData->fields.skill2Ct, namespaze <= 2) )
    {
      v20 = sub_B70798(v8);
      sub_B70738(v20, 0LL);
    }
    v8->_1.byval_arg.bits = takeoverData->fields.skill3Ct;
    for ( i = 0; ; ++i )
    {
      v8 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v8 = BalanceConfig_TypeInfo;
      }
      if ( i >= v8->static_fields->SvtSkillListMax )
        break;
      SelfSkillInfo = BattleServantData__getSelfSkillInfo(this, i, v13);
      if ( SelfSkillInfo )
        SelfSkillInfo->fields.chargeTurn = BasicHelper__IndexValue_int_(
                                             v15,
                                             i,
                                             0,
                                             (const MethodInfo_1BDECF8 *)Method_BasicHelper_IndexValue_int____69237232);
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


bool __fastcall BattleServantData__SubValueToResultHp(
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


bool __fastcall BattleServantData__TryCheckVoicePatternId(
        BattleServantData_o *this,
        int32_t *voicePatternId,
        const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
  {
    LODWORD(deckSvt) = BattleDeckServantData__GetVoicePatternId(deckSvt, 0LL);
    *voicePatternId = (int)deckSvt;
    if ( !this->fields.isEnemy )
    {
      if ( !Follower__IsNpc(this->fields.followerType, 0LL) )
      {
        LOBYTE(deckSvt) = 0;
        return (char)deckSvt;
      }
      LODWORD(deckSvt) = *voicePatternId;
    }
    LOBYTE(deckSvt) = (_DWORD)deckSvt != -1;
  }
  else
  {
    *voicePatternId = -1;
  }
  return (char)deckSvt;
}


bool __fastcall BattleServantData__TryGetOverwriteSubAttributeBuff(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o **buff,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_434F63B & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F63B = 1;
  }
  BuffData = BattleServantData__get_BuffData(this, (const MethodInfo *)buff);
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !BuffData )
    sub_B7076C(v7, v8);
  FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(BuffData, 128, v6, 0, 0LL);
  *buff = FirstMatchCondBuff;
  sub_B70630(
    (BattleServantConfConponent_o *)buff,
    (System_Int32_array **)FirstMatchCondBuff,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  return *buff != 0LL;
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

  if ( (byte_434F6F3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TryGetValue__);
    byte_434F6F3 = 1;
  }
  *saveDataArray = 0LL;
  sub_B70630(
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
                                      (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TryGetValue__);
  return (char)partAnimationSaveDict;
}


bool __fastcall BattleServantData__TryGetPlayableVoiceInfoList(
        BattleServantData_o *this,
        System_Collections_Generic_List_KeyValuePair_string__int___o **voiceInfoList,
        Voice_BATTLE_array *types,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  ServantVoicePatternMaster_o *MasterData_WarQuestSelectionMaster; // x22
  VoicePlayCondMaster_o *Master_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_KeyValuePair_string__int___o *v10; // x24
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  __int64 v18; // x8
  unsigned __int64 v19; // x28
  int32_t v20; // w24
  const MethodInfo *v21; // x4
  Il2CppObject *FileName; // x25
  ServantAssetLoadManager_o *v23; // x26
  const MethodInfo *v24; // x1
  int32_t SvtId; // w27
  const MethodInfo *v26; // x2
  __int64 v27; // x2
  Il2CppObject *v28; // x0
  System_String_o *v29; // x0
  int32_t v30; // w26
  System_String_o *v31; // x25
  const MethodInfo *v32; // x1
  int32_t v33; // w27
  const MethodInfo *v34; // x2
  __int64 v36; // x0
  int32_t VoicePrefix; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o pairVoiceIdWeight; // [xsp+18h] [xbp-68h] BYREF
  int32_t voicePatternId; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_434F6F5 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantVoicePatternMaster___);
    sub_B70694(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_KeyValuePair_string__int___Add__);
    sub_B70694(&Method_System_Collections_Generic_List_KeyValuePair_string__int____ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__);
    sub_B70694(&System_Collections_Generic_List_KeyValuePair_string__int___TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Voice_TypeInfo);
    sub_B70694(&StringLiteral_23882/*"{0:D0}_{1}"*/);
    byte_434F6F5 = 1;
  }
  voicePatternId = 0;
  pairVoiceIdWeight.fields.key = 0LL;
  *(_QWORD *)&pairVoiceIdWeight.fields.value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (ServantVoicePatternMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantVoicePatternMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v10 = (System_Collections_Generic_List_KeyValuePair_string__int___o *)sub_B70764(System_Collections_Generic_List_KeyValuePair_string__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_string__int_____ctor(
    v10,
    (const MethodInfo_2ECC8A4 *)Method_System_Collections_Generic_List_KeyValuePair_string__int____ctor__);
  *voiceInfoList = v10;
  sub_B70630((BattleServantConfConponent_o *)voiceInfoList, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
  if ( !types )
    goto LABEL_24;
  v18 = *(_QWORD *)&types->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    do
    {
      if ( v19 >= (unsigned int)v18 )
      {
        v36 = sub_B70798(Instance);
        sub_B70738(v36, 0LL);
      }
      v20 = types->m_Items[v19 + 1];
      if ( !BattleServantData__TryCheckVoicePatternId(this, &voicePatternId, v17) )
        goto LABEL_18;
      if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
      FileName = (Il2CppObject *)Voice__getFileName(v20, 0LL);
      v23 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      SvtId = BattleServantData__getSvtId(this, v24);
      Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v26);
      if ( !v23 )
        goto LABEL_24;
      VoicePrefix = ServantAssetLoadManager__getVoicePrefix(v23, SvtId, (int32_t)Instance, 0LL);
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix, v27);
      v29 = System_String__Format_44753704((System_String_o *)StringLiteral_23882/*"{0:D0}_{1}"*/, v28, FileName, 0LL);
      v30 = voicePatternId;
      v31 = v29;
      v33 = BattleServantData__getSvtId(this, v32);
      Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v34);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_24;
      Instance = (DataManager_o *)ServantVoicePatternMaster__IsSatisfyPlayCondition(
                                    MasterData_WarQuestSelectionMaster,
                                    v30,
                                    v33,
                                    v31,
                                    (int32_t)Instance,
                                    -1,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_18:
        Instance = (DataManager_o *)BattleServantData__IsPlayableVoice(
                                      this,
                                      Master_WarQuestSelectionMaster,
                                      v20,
                                      &pairVoiceIdWeight,
                                      v21);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)*voiceInfoList;
          if ( !*voiceInfoList )
            goto LABEL_24;
          System_Collections_Generic_List_KeyValuePair_string__int____Add(
            (System_Collections_Generic_List_KeyValuePair_string__int___o *)Instance,
            pairVoiceIdWeight,
            (const MethodInfo_2ECD634 *)Method_System_Collections_Generic_List_KeyValuePair_string__int___Add__);
        }
      }
      LODWORD(v18) = types->max_length;
    }
    while ( (__int64)++v19 < (int)v18 );
  }
  if ( !*voiceInfoList )
LABEL_24:
    sub_B7076C(Instance, v7);
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
    sub_B7076C(this, actBuff);
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
  System_Int32_array **classBoardSquareIds; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **classBoardAddCommandSpells; // x1
  BattleServantConfConponent_o *v27; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x22
  int32_t npcSvtClassId; // w19
  int32_t classId; // w20
  struct ServantEntity_o *svtdata; // x8
  int32_t klass_high; // w25
  _BOOL8 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  BattleServantConfConponent_c *klass; // x28
  unsigned __int64 v37; // x22
  __int64 v38; // x24
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *skillInfoList; // x25
  BattleServantData_o *v47; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v48; // x26
  System_Collections_ICollection_o *v49; // x24
  int v50; // w19
  const MethodInfo *v51; // x3
  System_Int32_array **classBoardAddPassiveSkills; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x0
  struct AddSkillData_array **p_classBoardAddCommandSpells; // [xsp+10h] [xbp-B0h]
  BattleServantConfConponent_o *p_classBoardAddPassiveSkills; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+28h] [xbp-98h] BYREF
  int v63[2]; // [xsp+40h] [xbp-80h]
  int v64; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+50h] [xbp-70h] BYREF
  int32_t skillIndex; // [xsp+6Ch] [xbp-54h] BYREF

  v11 = this;
  if ( (byte_434F6F0 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
    sub_B70694(&Method_System_Predicate_BattleSkillInfoData___ctor__);
    sub_B70694(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass749_0__UpdateClassBoardSkillBuff_b__0__);
    this = (BattleServantData_o *)sub_B70694(&BattleServantData___c__DisplayClass749_0_TypeInfo);
    byte_434F6F0 = 1;
  }
  skillIndex = 0;
  memset(&v65, 0, sizeof(v65));
  v64 = 0;
  if ( !afterUserSvtData )
    goto LABEL_46;
  classBoardSquareIds = (System_Int32_array **)afterUserSvtData->fields.classBoardSquareIds;
  v11->fields._classBoardSquareIds_k__BackingField = (struct System_Int32_array *)classBoardSquareIds;
  sub_B70630(
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
    this = (BattleServantData_o *)BattleUserServantData__getBattleSvtId(afterUserSvtData, 0LL);
    if ( Master_WarQuestSelectionMaster )
    {
      this = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      Master_WarQuestSelectionMaster,
                                      (int32_t)this,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
              &v62,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
              (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
            klass_high = -1;
            v65 = v62;
            p_classBoardAddCommandSpells = &v11->fields.classBoardAddCommandSpells;
            while ( 1 )
            {
              v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v65,
                      (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
              if ( !v33 )
                break;
              if ( !v65.fields.current )
              {
                skillIndex = klass_high;
                sub_B7076C(v33, v34);
              }
              if ( LODWORD(v65.fields.current[1].klass) == 26 && klass_high < SHIDWORD(v65.fields.current[1].klass) )
                klass_high = HIDWORD(v65.fields.current[1].klass);
            }
            skillIndex = klass_high;
            v63[0] = 203;
            v64 = 1;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v65,
              (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
            v64 = 0;
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
              v49 = (System_Collections_ICollection_o *)BattleServantData__AddClassBoardSkillInfo(
                                                          v11,
                                                          afterUserSvtData,
                                                          &skillIndex,
                                                          v35);
              this = (BattleServantData_o *)BasicHelper__IsNullOrEmpty(v49, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !v49 )
                  goto LABEL_46;
                System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                  &v62,
                  (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v49,
                  (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
                v65 = v62;
                while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                          &v65,
                          (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
                {
                  if ( v65.fields.current )
                    BattleData__ActPassiveBuff(data, (BattleSkillInfoData_o *)v65.fields.current, 0LL, 0, 0, 0LL);
                }
                v63[0] = 371;
                v50 = ++v64;
                System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                  &v65,
                  (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
                if ( v50 && v63[v50 - 1] == 371 )
                  v64 = v50 - 1;
              }
              this = (BattleServantData_o *)BattleServantData__get_BuffData(v11, (const MethodInfo *)afterUserSvtData);
              if ( this )
              {
                BattleBuffData__updateAuraBuffList((BattleBuffData_o *)this, 0LL);
                BattleServantData__updateBuff(v11, 1, 1, v51);
                classBoardAddPassiveSkills = (System_Int32_array **)afterUserSvtData->fields.classBoardAddPassiveSkills;
                v11->fields.classBoardAddPassiveSkills = (struct AddSkillData_array *)classBoardAddPassiveSkills;
                sub_B70630(p_classBoardAddPassiveSkills, classBoardAddPassiveSkills, v53, v54, v55, v56, v57, v58);
                classBoardAddCommandSpells = (System_Int32_array **)afterUserSvtData->fields.classBoardAddCommandSpells;
                v27 = (BattleServantConfConponent_o *)p_classBoardAddCommandSpells;
                goto LABEL_44;
              }
            }
            else
            {
              v37 = 0LL;
              while ( 1 )
              {
                v38 = sub_B70764(BattleServantData___c__DisplayClass749_0_TypeInfo);
                BattleServantData___c__DisplayClass749_0___ctor((BattleServantData___c__DisplayClass749_0_o *)v38, 0LL);
                if ( v37 >= LODWORD(klass->_1.namespaze) )
                {
                  v59 = sub_B70798(this);
                  sub_B70738(v59, 0LL);
                }
                if ( !v38 )
                  break;
                v45 = (System_Int32_array **)*((_QWORD *)&klass->_1.byval_arg.data + v37);
                *(_QWORD *)(v38 + 16) = v45;
                sub_B70630((BattleServantConfConponent_o *)(v38 + 16), v45, v39, v40, v41, v42, v43, v44);
                skillInfoList = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v11->fields.skillInfoList;
                v47 = v11;
                v48 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleSkillInfoData__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v48,
                  (Il2CppObject *)v38,
                  Method_BattleServantData___c__DisplayClass749_0__UpdateClassBoardSkillBuff_b__0__,
                  (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
                if ( !skillInfoList )
                  break;
                System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                  skillInfoList,
                  (System_Predicate_T__o *)v48,
                  (const MethodInfo_30271D8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
                ++v37;
                v11 = v47;
                if ( (__int64)v37 >= SLODWORD(klass->_1.namespaze) )
                  goto LABEL_33;
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_B7076C(this, afterUserSvtData);
  }
  v19 = (System_Int32_array **)afterUserSvtData->fields.classBoardAddPassiveSkills;
  v11->fields.classBoardAddPassiveSkills = (struct AddSkillData_array *)v19;
  sub_B70630((BattleServantConfConponent_o *)&v11->fields.classBoardAddPassiveSkills, v19, v13, v14, v15, v16, v17, v18);
  classBoardAddCommandSpells = (System_Int32_array **)afterUserSvtData->fields.classBoardAddCommandSpells;
  v27 = (BattleServantConfConponent_o *)&v11->fields.classBoardAddCommandSpells;
LABEL_44:
  v11->fields.classBoardAddCommandSpells = (struct AddSkillData_array *)classBoardAddCommandSpells;
  sub_B70630(v27, classBoardAddCommandSpells, v20, v21, v22, v23, v24, v25);
}


void __fastcall BattleServantData__UpdateFixNpSpeed(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w8
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_434F619 & 1) == 0 )
  {
    sub_B70694(&OptionManager_TypeInfo);
    byte_434F619 = 1;
  }
  if ( BattleServantData__IsOnlyFirstForcedOneSpeed(this, (const MethodInfo *)data) )
    goto LABEL_4;
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetTDPlaySpeed(0LL) && BattleServantData__CheckFirstNpPlay(this, data, v7) )
  {
LABEL_4:
    v5 = 2;
  }
  else if ( BattleServantData__IsNpEffectSpeedFix(this, v6) )
  {
    v8 = UserServantCollectionEntity__CheckSvtCommonFlag(this->fields.svtCommonFlag, 4, 0LL);
    if ( !this )
      sub_B7076C(v8, v9);
    if ( v8 )
      v5 = 3;
    else
      v5 = 2;
  }
  else
  {
    v5 = 1;
  }
  this->fields.fixNpSpeed = v5;
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

  if ( (byte_434F614 & 1) == 0 )
  {
    sub_B70694(&ServantAssetArgs_TypeInfo);
    byte_434F614 = 1;
  }
  v3 = (ServantAssetArgs_o *)sub_B70764(ServantAssetArgs_TypeInfo);
  ServantAssetArgs___ctor(v3, this, 0LL);
  this->fields._LoadedAssetArgs_k__BackingField = v3;
  sub_B70630(
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


void __fastcall BattleServantData__UpdateNpImmediately(
        BattleServantData_o *this,
        int32_t inputNp,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass521_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x20

  if ( (byte_434F687 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_GameObject___ctor__);
    sub_B70694(&System_Action_GameObject__TypeInfo);
    sub_B70694(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_B70694(&Method_BasicHelper_ForEach_GameObject___);
    sub_B70694(&Method_BattleServantData___c__DisplayClass521_0__UpdateNpImmediately_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass521_0_TypeInfo);
    byte_434F687 = 1;
  }
  v5 = (BattleServantData___c__DisplayClass521_0_o *)sub_B70764(BattleServantData___c__DisplayClass521_0_TypeInfo);
  BattleServantData___c__DisplayClass521_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.inputNp = inputNp;
  v8 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.paramobjelist,
         (const MethodInfo_1BDCE20 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_GameObject__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleServantData___c__DisplayClass521_0__UpdateNpImmediately_b__0__,
    (const MethodInfo_264C148 *)Method_System_Action_GameObject___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_GameObject___);
}


void __fastcall BattleServantData__UpdateStatusUIByTransform(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F682 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_15255/*"UpdateStatusByTransform"*/);
    byte_434F682 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_B7076C(v5, v6);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_15255/*"UpdateStatusByTransform"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__UpdateTdGauge(
        BattleServantData_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass524_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_T__o *v10; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x20

  if ( (byte_434F68A & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_GameObject___ctor__);
    sub_B70694(&System_Action_GameObject__TypeInfo);
    sub_B70694(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_B70694(&Method_BasicHelper_ForEach_GameObject___);
    sub_B70694(&Method_BattleServantData___c__DisplayClass524_0__UpdateTdGauge_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass524_0_TypeInfo);
    byte_434F68A = 1;
  }
  v7 = (BattleServantData___c__DisplayClass524_0_o *)sub_B70764(BattleServantData___c__DisplayClass524_0_TypeInfo);
  BattleServantData___c__DisplayClass524_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  v7->fields.now = now;
  v7->fields.max = max;
  v10 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.paramobjelist,
          (const MethodInfo_1BDCE20 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_GameObject__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BattleServantData___c__DisplayClass524_0__UpdateTdGauge_b__0__,
    (const MethodInfo_264C148 *)Method_System_Action_GameObject___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v10,
    (System_Action_T__o *)v11,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_GameObject___);
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
  void *TdDataMasterBase; // x0
  __int64 v12; // x1
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

  if ( (byte_434F62D & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F62D = 1;
  }
  this->fields.treasuredvcId = id;
  this->fields.treasuredvcLevel = lv;
  if ( id < 1 )
  {
    this->fields.TDvc = 0LL;
    sub_B70630(
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
                                             (const MethodInfo_21C0440 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    this->fields.TDvc = Entity;
    sub_B70630(
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
    sub_B70630(
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
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v41, 0LL);
    EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(v30, this->fields.treasuredvcId, 0LL);
    this->fields._SvtTDvc = EntityFromIDID;
    sub_B70630(
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
      sub_B7076C(TdDataMasterBase, v12);
    v40 = *((_DWORD *)TdDataMasterBase + 6);
  }
  this->fields.nplineCount = v40;
}


void __fastcall BattleServantData__ValidateOnGetGuts(BattleServantData_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall BattleServantData___ChangeBuffValue_g__IsMatchIndividualityCond_535_0(
        BattleBuffData_BuffData_o *data,
        BattleServantData___c__DisplayClass535_0_o *a2,
        const MethodInfo *method)
{
  System_Int32_array *Individualty; // x0
  System_Int32_array *v5; // x20

  if ( !data )
    sub_B7076C(0LL, a2);
  Individualty = BattleBuffData_BuffData__GetIndividualty(data, 0, a2->fields.isExcludeUnSubStateIndiv, 0, 0LL);
  v5 = Individualty;
  if ( !a2->fields.isAny )
    return Individuality__ContainsIndividualities(v5, a2->fields.targetIndivi, 0LL);
  if ( Individuality__CheckIndividualities(Individualty, a2->fields.targetIndivi, 0LL) )
    return 1;
  return !a2->fields.isAny && Individuality__ContainsIndividualities(v5, a2->fields.targetIndivi, 0LL);
}


bool __fastcall BattleServantData___CheckInvincibleAvoidanceBuff_g__CheckAvoidanceDeathDamageFunc_657_0(
        BattleServantData_o *this,
        float checkDamage,
        BattleServantData___c__DisplayClass657_0_o *a3,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21
  int32_t v9; // w0
  const MethodInfo *v10; // x4
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct BattleActionData_DamageData_o *damageData; // x8
  System_Int32_array **v20; // x1
  bool v21; // w19
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  usedBuff = 0LL;
  v8 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         a3->fields.isSvtAction,
         a3->fields.actor,
         a3->fields.command,
         a3->fields.notSvtActorIndivArray,
         v4);
  v9 = BattleUtility__FloorToInt(checkDamage, 0LL);
  v11 = BattleServantData__CheckAvoidanceAttackDeathDamage(this, &usedBuff, v9, v8, v10);
  damageData = a3->fields.damageData;
  if ( !damageData )
    sub_B7076C(v11, v12);
  v20 = (System_Int32_array **)usedBuff;
  v21 = v11;
  damageData->fields._NoDamageAffectedBuff_k__BackingField = usedBuff;
  sub_B70630(
    (BattleServantConfConponent_o *)&damageData->fields._NoDamageAffectedBuff_k__BackingField,
    v20,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  return v21;
}


void __fastcall BattleServantData___setTransformServant_g__RemoveBuffGrantedByBeforePassiveSkill_305_0(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvt,
        BattleServantData___c__DisplayClass305_0_o *a3,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x21
  BattleInfoData_o *battle_info; // x22
  __int64 v8; // x23
  __int64 v9; // x24
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v6 = this;
  if ( (byte_434F6FE & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F6FE = 1;
  }
  if ( !a3->fields.data )
    goto LABEL_13;
  battle_info = a3->fields.data->fields.battle_info;
  v9 = *(_QWORD *)&v6->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&v6->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v14, 0LL);
  if ( !battle_info )
LABEL_13:
    sub_B7076C(this, userSvt);
  if ( BattleInfoData__IsUseNewTransformLogic(battle_info, (int32_t)this, 0LL) )
  {
    BattleServantData__RemovePassiveSkill(v6, v10);
    if ( !a3->fields.fromLoad )
    {
      BattleServantData__RemovePassiveBuffOnTransform(v6, a3->fields.data, v12);
      BattleServantData__RemoveClassBoardCommandSpellOnTransform(v6, userSvt, a3->fields.data, v13);
    }
  }
  else
  {
    BattleServantData__UpdateClassBoardSkillBuff(v6, userSvt, a3->fields.data, a3->fields.fromLoad, v11);
  }
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
    sub_B7076C(MaxHp, v12);
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
  int v7; // w22
  int v8; // w0
  __int64 v9; // x1
  int v10; // w0
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F67E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_17537/*"changeHp"*/);
    byte_434F67E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v7 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, bool, const MethodInfo *))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr,
         noAccumulation,
         method);
  v8 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)(v8 - damage),
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
    v10 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
            this,
            this->klass->vtable._10_set_hp.methodPtr);
    this->fields.accumulationDamage = (this->fields.accumulationDamage + v7 - v10) & ~((this->fields.accumulationDamage
                                                                                      + v7
                                                                                      - v10) >> 31);
  }
LABEL_6:
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B7076C(v13, v14);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17537/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


int32_t __fastcall BattleServantData__addNp(
        BattleServantData_o *this,
        int32_t intp,
        bool flg,
        const MethodInfo *method)
{
  bool isUseTreasure; // w0
  __int64 v8; // x1
  int lineMaxNp; // w8
  int32_t v10; // w10
  int32_t v11; // w9
  int v12; // w8
  bool v13; // cc
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F68B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23317/*"updateNp"*/);
    byte_434F68B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  isUseTreasure = Follower__isUseTreasure(this->fields.followerType, 0LL);
  lineMaxNp = this->fields.lineMaxNp;
  if ( isUseTreasure )
    v10 = intp;
  else
    v10 = 0;
  v11 = v10 + this->fields.np;
  this->fields.np = v11;
  if ( v10 >= 1 && v11 < lineMaxNp && (double)lineMaxNp * 0.99 <= (double)v11 )
  {
    v11 = lineMaxNp;
    this->fields.np = lineMaxNp;
  }
  v12 = lineMaxNp * this->fields.nplineCount;
  v13 = v12 < v11;
  if ( v12 >= v11 )
    v12 = v11;
  if ( v13 || v12 <= 0 )
  {
    this->fields.np = v12 & ~(v12 >> 31);
    if ( !flg )
      return this->fields.np;
  }
  else if ( !flg )
  {
    return this->fields.np;
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, v8);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v16 )
    {
      if ( !current )
        sub_B7076C(v16, v17);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_23317/*"updateNp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_WarBoardManager_TaskList__o *paramobjelist; // x0

  if ( (byte_434F66A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Contains__);
    byte_434F66A = 1;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_7;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         paramobjelist,
         (WarBoardManager_TaskList_o *)obj,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    return;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
LABEL_7:
    sub_B7076C(paramobjelist, obj);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)paramobjelist,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *skillInfoList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x27
  int v20; // w27
  BattleSkillInfoData_o *v21; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x27
  int v25; // w21
  BattleSkillInfoData_o *SkillData; // x0
  const MethodInfo *v27; // x3
  const MethodInfo *v29; // [xsp+0h] [xbp-C0h]
  int32_t v31; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-A0h] BYREF
  int v33[4]; // [xsp+38h] [xbp-88h] BYREF
  int v34; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_434F62E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__);
    byte_434F62E = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v34 = 0;
  skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_35;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    skillInfoList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v35 = v32;
  v31 = commandAssistId;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v17 )
      break;
    current = v35.fields.current;
    if ( !v35.fields.current )
      sub_B7076C(v17, v18);
    if ( LODWORD(v35.fields.current[1].klass) == type
      && HIDWORD(v35.fields.current[1].klass) == index
      && ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v35.fields.current->klass->vtable[5].method)(
           v35.fields.current,
           v35.fields.current->klass->vtable[6].methodPtr) == skillId
      && HIDWORD(current[2].klass) == skillLv )
    {
      v20 = 236;
      goto LABEL_13;
    }
  }
  v20 = 92;
LABEL_13:
  v33[0] = v20;
  v34 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  if ( v20 == 92 )
  {
    v34 = 0;
    skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
    if ( !skillInfoList )
      goto LABEL_35;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      skillInfoList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    v35 = v32;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
      if ( !v22 )
        break;
      v24 = v35.fields.current;
      if ( !v35.fields.current )
        sub_B7076C(v22, v23);
      if ( LODWORD(v35.fields.current[1].klass) == type && HIDWORD(v35.fields.current[1].klass) == index )
        goto LABEL_23;
    }
    v24 = 0LL;
LABEL_23:
    *(_DWORD *)((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFFBLL) = 167;
    v25 = ++v34;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    if ( v25 && v33[v25 - 1] == 167 )
      v34 = v25 - 1;
    if ( v24 )
    {
      skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
      if ( !skillInfoList )
        goto LABEL_35;
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)skillInfoList,
        (WarBoardManager_TaskList_o *)v24,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__);
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
                                                                                                     v31,
                                                                                                     v29);
    if ( skillInfoList )
    {
      v21 = (BattleSkillInfoData_o *)skillInfoList;
      ((void (__fastcall *)(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *, BattleServantData_o *, Il2CppMethodPointer))skillInfoList->klass->vtable._11_Add.method)(
        skillInfoList,
        this,
        skillInfoList->klass->vtable._12_unknown.methodPtr);
      BattleServantData__ChangeSkillRemainingTurn(this, v21, beforeDeathSkillInfo, v27);
      skillInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.skillInfoList;
      if ( skillInfoList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)skillInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
        return v21;
      }
    }
LABEL_35:
    sub_B7076C(skillInfoList, *(_QWORD *)&type);
  }
  v21 = 0LL;
  v34 = 0;
  return v21;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__canUseSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  System_Boolean_array *SkillSealSelect; // x0
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21
  __int64 v10; // x0

  if ( (byte_434F6BF & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6BF = 1;
  }
  if ( index != -1 )
  {
    SkillSealSelect = BattleServantData__getSkillSealSelect(this, *(const MethodInfo **)&index);
    if ( !SkillSealSelect )
      goto LABEL_12;
    if ( SkillSealSelect->max_length <= index )
    {
      v10 = sub_B70798(SkillSealSelect);
      sub_B70738(v10, 0LL);
    }
    if ( SkillSealSelect->m_Items[index + 4] )
      return 0;
  }
  if ( !BattleServantData__isAction(this, *(const MethodInfo **)&index) )
    return 0;
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_12:
    sub_B7076C(SkillSealSelect, *(_QWORD *)&index);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x20
  struct ServantEntity_o *Entity; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ServantLimitMaster_o *v16; // x20
  const MethodInfo *v17; // x1
  int32_t SvtId; // w22
  struct ServantLimitEntity_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct ServantEntity_o *svtdata; // x8
  ServantLimitAddMaster_o *v27; // x21
  __int64 v28; // x22
  __int64 v29; // x23
  int32_t v30; // w23
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  int32_t v33; // w23
  const MethodInfo *v34; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v40; // w1
  ServantLimitMaster_o *v41; // x0
  struct ServantLimitEntity_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_434F62B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F62B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v49.fields.currentCryptoKey = v7;
  *(_QWORD *)&v49.fields.fakeValue = v6;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v49, 0LL);
  if ( !v8 )
    goto LABEL_25;
  Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v8,
                                       (int32_t)Instance,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = Entity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtdata,
    (System_Int32_array **)Entity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  v16 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v17);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                this->fields.limitcount,
                                0LL);
  if ( !v16 )
    goto LABEL_25;
  if ( !ServantLimitMaster__TryGetEntity(v16, &this->fields.svtlimitent, SvtId, (int32_t)Instance, 0LL) )
  {
    v19 = ServantLimitMaster__GetEntity(v16, 100100, 0, 0LL);
    this->fields.svtlimitent = v19;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtlimitent,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_25;
  v27 = (ServantLimitAddMaster_o *)Instance;
  v29 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v28 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v50.fields.currentCryptoKey = v29;
  *(_QWORD *)&v50.fields.fakeValue = v28;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v50, 0LL);
  Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v31);
  if ( !v27 )
    goto LABEL_25;
  ServantLimitAddMaster__TryGetEntity(v27, &this->fields.svtlimitaddent, v30, (int32_t)Instance, 0LL);
  v33 = BattleServantData__getSvtId(this, v32);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v34);
  if ( !ServantLimitMaster__TryGetEntity(v16, &this->fields.svtlimitDispent, v33, DispLimitCount, 0LL) )
  {
    if ( !this->fields.svtlimitaddent )
    {
      v40 = 100100;
      v41 = v16;
      battleCharaLimitCount = 0;
      goto LABEL_23;
    }
    Instance = (DataManager_o *)BattleServantData__getSvtId(this, v36);
    svtlimitaddent = this->fields.svtlimitaddent;
    if ( svtlimitaddent )
    {
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v40 = (int)Instance;
      v41 = v16;
LABEL_23:
      v42 = ServantLimitMaster__GetEntity(v41, v40, battleCharaLimitCount, 0LL);
      this->fields.svtlimitDispent = v42;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.svtlimitDispent,
        (System_Int32_array **)v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      goto LABEL_24;
    }
LABEL_25:
    sub_B7076C(Instance, v4);
  }
LABEL_24:
  BattleServantData__UpdateTreasureDevice(this, this->fields.treasuredvcId, this->fields.treasuredvcLevel, v37);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__changeNp(
        BattleServantData_o *this,
        int32_t intp,
        bool flg,
        const MethodInfo *method)
{
  int32_t v7; // w8
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F68C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_17542/*"changeNp"*/);
    byte_434F68C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v7 = this->fields.lineMaxNp * this->fields.nplineCount;
  if ( v7 >= intp )
    v7 = intp;
  this->fields.np = v7 & ~(v7 >> 31);
  if ( flg )
  {
    paramobjelist = this->fields.paramobjelist;
    if ( !paramobjelist )
      sub_B7076C(0LL, *(_QWORD *)&intp);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
          sub_B7076C(v10, v11);
        UnityEngine_GameObject__SendMessage_41091392(
          (UnityEngine_GameObject_o *)current,
          (System_String_o *)StringLiteral_17542/*"changeNp"*/,
          (Il2CppObject *)this,
          1,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall BattleServantData__changeTransformServant(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t transformSvtId; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v4; // kr00_16

  if ( (byte_434F62A & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F62A = 1;
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

  if ( (byte_434F681 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17545/*"changeUpdateStatus"*/);
    byte_434F681 = 1;
  }
  BattleServantData__sendParamMessage(this, (System_String_o *)StringLiteral_17545/*"changeUpdateStatus"*/, v2);
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
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434F6AA & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6AA = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
  return BattleBuffData__checkActBuff_31767764(buffData, 47, v6, &usedBuff, 0LL);
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
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434F6B5 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6B5 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__checkActBuff_31767764(buffData, 17, v8, &usedBuff, 0LL);
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
  System_Int32_array *Individualities_20739892; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Int32_array *v14; // x21

  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, v4);
  Individualities_20739892 = BattleServantData__getIndividualities_20739892(this, BuffIndividualities, v10);
  v14 = Individualities_20739892;
  if ( !opSvt )
  {
    if ( buffData )
      return BattleBuffData__checkActBuff(buffData, 38, v14, buffIndiv, 0LL);
LABEL_6:
    sub_B7076C(Individualities_20739892, v12);
  }
  Individualities_20739892 = BattleServantData__getIndividualities_20739892(opSvt, buffIndiv, v13);
  if ( !buffData )
    goto LABEL_6;
  buffIndiv = Individualities_20739892;
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
    sub_B7076C(0LL, buffIdlist);
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
    sub_B7076C(0LL, indv);
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
    sub_B7076C(0LL, entryIndex);
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
    sub_B7076C(MaxHp, v10);
  v14 = *(_QWORD *)&fieldList->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
      {
        v16 = sub_B70798(MaxHp);
        sub_B70738(v16, 0LL);
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
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434F6B6 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6B6 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__checkActBuff_31767764(buffData, 69, v8, &usedBuff, 0LL);
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
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434F6B4 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6B4 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__checkActBuff_31767764(buffData, 15, v8, &usedBuff, 0LL);
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
  int32_t ActValue_31763688; // w0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  int CorrectedValueFuncGainNp; // w20

  if ( (byte_434F6C4 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6C4 = 1;
  }
  if ( this->fields.isEnemy )
    return 0;
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v6, v7);
  ActValue_31763688 = BattleBuffData__getActValue_31763688(buffData, 50, v5, 0LL);
  CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(this, ActValue_31763688, v9);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantTreasureDvcMaster_o *v8; // x20
  BattleServantConfConponent_o *p_SvtTDvc; // x19
  System_Int32_array **EntityFromSvtIdOnly; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_434F6E7 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F6E7 = 1;
  }
  if ( !this->fields._SvtTDvc )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_10;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v8 = (ServantTreasureDvcMaster_o *)MasterData_WarQuestSelectionMaster;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = v7;
    *(_QWORD *)&v17.fields.fakeValue = v6;
    Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v17, 0LL);
    if ( !v8 )
LABEL_10:
      sub_B7076C(Instance, v4);
    p_SvtTDvc = (BattleServantConfConponent_o *)&this->fields._SvtTDvc;
    EntityFromSvtIdOnly = (System_Int32_array **)ServantTreasureDvcMaster__getEntityFromSvtIdOnly(
                                                   v8,
                                                   (int32_t)Instance,
                                                   0,
                                                   0LL);
    p_SvtTDvc->klass = (BattleServantConfConponent_c *)EntityFromSvtIdOnly;
    sub_B70630(p_SvtTDvc, EntityFromSvtIdOnly, v11, v12, v13, v14, v15, v16);
  }
}


bool __fastcall BattleServantData__checkSpecialInvincible(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        BattleBuffData_BuffData_o **usedBuff,
        bool isSvtAction,
        System_Int32_array *notSvtIndivArray,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v9; // x0
  __int64 v10; // x1

  buffData = this->fields.buffData;
  v9 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         (const MethodInfo *)notSvtIndivArray);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__checkActBuff_31767764(buffData, 95, v9, usedBuff, 0LL);
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

  if ( (byte_434F6C6 & 1) == 0 )
  {
    sub_B70694(&System_Math_TypeInfo);
    byte_434F6C6 = 1;
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
    sub_B7076C(MaxHp, v4);
  ResumptionHpFromLossMaxHp = BattleBuffData__getResumptionHpFromLossMaxHp(MaxHp, 1, 0LL);
  v7 = this->fields.maxhp;
  v8 = ResumptionHpFromLossMaxHp;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = System_Math__Max_45601072(0, v5 - v7, 0LL);
  v10 = System_Math__Min_45556056(v9, v8, 0LL);
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
  bool isNobleAction_20729088; // w8
  int32_t invokeAct; // [xsp+Ch] [xbp-14h] BYREF

  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)battleData);
  if ( TreasureDevice )
  {
    if ( !flg )
      goto LABEL_13;
    if ( !TreasureDeviceConditionUtil__IsSatisfyEachCondition(this, battleData, 0LL) )
      goto LABEL_9;
    invokeAct = 0;
    isNobleAction_20729088 = BattleServantData__isNobleAction_20729088(this, &invokeAct, v8);
    LOBYTE(TreasureDevice) = 0;
    if ( isNobleAction_20729088 )
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

  if ( (byte_434F6E0 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B70694(&double___TypeInfo);
    byte_434F6E0 = 1;
  }
  if ( !param || (this = (BattleServantData_o *)sub_B706AC(double___TypeInfo, param->max_length)) == 0LL )
    sub_B7076C(this, param);
  uniqueId = (unsigned int)this->fields.uniqueId;
  if ( (__int64)(uniqueId << 32) >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= param->max_length || v5 >= uniqueId )
      {
        v6 = sub_B70798(this);
        sub_B70738(v6, 0LL);
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

  if ( (byte_434F6DF & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B70694(&long___TypeInfo);
    byte_434F6DF = 1;
  }
  if ( !param || (this = (BattleServantData_o *)sub_B706AC(long___TypeInfo, param->max_length)) == 0LL )
    sub_B7076C(this, param);
  uniqueId = (unsigned int)this->fields.uniqueId;
  if ( (__int64)(uniqueId << 32) >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= param->max_length || v5 >= uniqueId )
      {
        v6 = sub_B70798(this);
        sub_B70738(v6, 0LL);
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
  System_Collections_Generic_List_WarBoardManager_TaskList__o *paramobjelist; // x0

  if ( (byte_434F66C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Remove__);
    byte_434F66C = 1;
  }
  paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_8;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         paramobjelist,
         (WarBoardManager_TaskList_o *)obj,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    paramobjelist = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.paramobjelist;
    if ( paramobjelist )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        paramobjelist,
        (WarBoardManager_TaskList_o *)obj,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_GameObject__Remove__);
      return;
    }
LABEL_8:
    sub_B7076C(paramobjelist, obj);
  }
}


void __fastcall BattleServantData__fixUpdateStatus(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F683 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_19040/*"fixUpdateStatus"*/);
    byte_434F683 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_B7076C(v5, v6);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_19040/*"fixUpdateStatus"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__forceDead(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_c *klass; // x8
  int32_t v4; // w0
  const MethodInfo *v5; // x6
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Int32_array *shiftDeckList; // x8

  klass = this->klass;
  this->fields.deadtype = 0;
  v4 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))klass->vtable._13_get_resultHp.method)(
         this,
         klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(this, v4, 0LL, 0LL, 0LL, 0, v5);
  v6 = ((__int64 (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
         this,
         0LL,
         this->klass->vtable._11_get_reducedhp.methodPtr);
  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_B7076C(v6, v7);
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
    sub_B7076C(0LL, ids);
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
    sub_B7076C(0LL, indv);
  return BattleBuffData__getActiveIndividualitiesNum(buffData, indv, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleServantData__getActiveSkillInfos(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  void *All; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__401_0; // x20
  Il2CppObject *v7; // x21
  struct BattleServantData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_434F64F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
    sub_B70694(&Method_System_Predicate_BattleSkillInfoData___ctor__);
    sub_B70694(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__getActiveSkillInfos_b__401_0__);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F64F = 1;
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
  _9__401_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__401_0;
  if ( !_9__401_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__401_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__401_0,
      v7,
      Method_BattleServantData___c__getActiveSkillInfos_b__401_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    v8 = BattleServantData___c_TypeInfo->static_fields;
    v8->__9__401_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__401_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__401_0,
      (System_Int32_array **)_9__401_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)skillInfoList,
                (System_Predicate_T__o *)_9__401_0,
                (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_B7076C(All, method);
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
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
  if ( (byte_434F638 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F638 = 1;
  }
  svtdata = v2->fields.svtdata;
  if ( !svtdata )
    sub_B7076C(this, method);
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v7, 0LL);
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
  __int64 FieldSpace; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  int v18; // w8
  System_Double_array *v19; // x19
  BattleRaidInfo_o *RaidInfo; // x20
  __int64 maxHp; // x8
  double v22; // d0
  double v23; // d1
  BattleBuffData_o *v24; // x19
  BattleServantData_o *BuffIDList; // x0
  const MethodInfo *v26; // x2
  struct BattleBuffData_o *v27; // x19
  bool v28; // w3
  bool v29; // w1
  BattleBuffData_o *v30; // x0
  BattleServantData___c_c *v31; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Converter_long__int__o *_9__682_0; // x22
  Il2CppObject *v34; // x23
  struct BattleServantData___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array *v42; // x21
  int32_t SameIndivualityBuffSum; // w22
  const MethodInfo *v44; // x2
  int32_t np; // w8
  BattleBuffData_o *buffData; // x19
  System_Double_array *v47; // x0
  struct BattleBuffData_o *v48; // x19
  __int64 v49; // x8
  double v50; // d8
  struct System_Int32_array *shiftDeckList; // x8
  int v52; // w21
  const MethodInfo *v53; // x1
  double totalDamage; // d0
  BattleRaidInfo_o *v55; // x20
  __int64 v57; // x0
  int32_t targetIndex; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_434F6DE & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_ConvertAll_long__int___);
    sub_B70694(&Method_System_Converter_long__int___ctor__);
    sub_B70694(&System_Converter_long__int__TypeInfo);
    sub_B70694(&double___TypeInfo);
    sub_B70694(&Method_BattleServantData___c__getAiParam_b__682_0__);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F6DE = 1;
  }
  targetIndex = 0;
  FieldSpace = sub_B706AC(double___TypeInfo, 1LL);
  v18 = param - 2;
  v19 = (System_Double_array *)FieldSpace;
  switch ( v18 )
  {
    case 0:
      targetIndex = -1;
      if ( !bData )
        goto LABEL_104;
      FieldSpace = BattleData__getFieldSpace(bData, this->fields.uniqueId, &targetIndex, 0, 0LL);
      if ( !v19 )
        goto LABEL_104;
      goto LABEL_78;
    case 1:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_105;
      np = *(_DWORD *)(FieldSpace + 44);
      goto LABEL_101;
    case 2:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_105;
      np = *(_DWORD *)(FieldSpace + 40);
      goto LABEL_101;
    case 3:
      v52 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
              this,
              this->klass->vtable._10_set_hp.methodPtr);
      FieldSpace = BattleServantData__getMaxHp(this, v53);
      if ( !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_105;
      v22 = (double)v52 * 1000.0;
      v23 = (double)(int)FieldSpace;
      goto LABEL_73;
    case 4:
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      np = this->fields.np;
      goto LABEL_101;
    case 5:
      FieldSpace = (__int64)BattleServantData__get_TreasureDevice(this, v16);
      if ( !FieldSpace )
        goto LABEL_41;
      if ( !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
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
      if ( !v19 )
        goto LABEL_104;
LABEL_78:
      if ( !v19->max_length )
        goto LABEL_105;
      totalDamage = (double)(int)FieldSpace;
      goto LABEL_102;
    case 8:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_105;
      np = *(_DWORD *)(FieldSpace + 32);
      goto LABEL_101;
    case 9:
      FieldSpace = sub_B706AC(double___TypeInfo, 2LL);
      if ( !FieldSpace )
        goto LABEL_104;
      v19 = (System_Double_array *)FieldSpace;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      *(double *)(FieldSpace + 32) = (double)turn;
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._21_getThisTurnActCount.method)(
                     this,
                     this->klass->vtable._22_getAiParam.methodPtr);
      if ( v19->max_length <= 1 )
        goto LABEL_105;
      v19->m_Items[1] = (double)(int)FieldSpace;
      return v19;
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
      BuffIDList = (BattleServantData_o *)BattleServantData__getIndividualities(this, 0LL, v17);
      goto LABEL_47;
    case 12:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v48 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v48 )
        goto LABEL_104;
      v28 = (FieldSpace & 1) == 0;
      v30 = v48;
      v29 = 0;
      goto LABEL_46;
    case 13:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v27 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v27 )
        goto LABEL_104;
      v28 = (FieldSpace & 1) == 0;
      v29 = 1;
      v30 = v27;
LABEL_46:
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffIndividualities(v30, v29, 0, v28, 1, 0LL);
      goto LABEL_47;
    case 14:
    case 15:
      if ( !bData )
        goto LABEL_104;
      RaidInfo = BattleData__getRaidInfo(bData, this->fields.raidId, 0LL);
      FieldSpace = sub_B706AC(double___TypeInfo, 1LL);
      if ( !RaidInfo )
        goto LABEL_104;
      v19 = (System_Double_array *)FieldSpace;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      maxHp = RaidInfo->fields.maxHp;
      v22 = (double)(maxHp - RaidInfo->fields.totalDamage) * 1000.0;
      v23 = (double)maxHp;
LABEL_73:
      totalDamage = v22 / v23;
      goto LABEL_102;
    case 16:
      if ( !bData )
        goto LABEL_104;
      v55 = BattleData__getRaidInfo(bData, this->fields.raidId, 0LL);
      FieldSpace = sub_B706AC(double___TypeInfo, 1LL);
      if ( !v55 )
        goto LABEL_104;
      v19 = (System_Double_array *)FieldSpace;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_105;
      totalDamage = (double)v55->fields.totalDamage;
      goto LABEL_102;
    case 20:
      FieldSpace = (__int64)this->fields.buffData;
      if ( !FieldSpace )
        goto LABEL_104;
      FieldSpace = BattleBuffData__getMaxBuffCount((BattleBuffData_o *)FieldSpace, checkParams, 0, 0LL);
      if ( !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_105;
      totalDamage = (double)FieldSpace;
      goto LABEL_102;
    case 21:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v24 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v24 )
        goto LABEL_104;
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffActiveIDList(v24, FieldSpace & 1, 0LL);
LABEL_47:
      v47 = BattleServantData__convertDouble(BuffIDList, (System_Int32_array *)BuffIDList, v26);
      goto LABEL_48;
    case 23:
      if ( !bData )
        goto LABEL_104;
      FieldSpace = BattleData__get_IsInTactical(bData, 0LL);
      v49 = 528LL;
      if ( (FieldSpace & 1) != 0 )
        v49 = 532LL;
      if ( !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_105;
      np = *(_DWORD *)((char *)&bData->klass + v49);
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
      v31 = BattleServantData___c_TypeInfo;
      if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
        v31 = BattleServantData___c_TypeInfo;
      }
      static_fields = v31->static_fields;
      _9__682_0 = static_fields->__9__682_0;
      if ( !_9__682_0 )
      {
        if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v31);
          static_fields = BattleServantData___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)static_fields->__9;
        _9__682_0 = (System_Converter_long__int__o *)sub_B70764(System_Converter_long__int__TypeInfo);
        System_Converter_long__int____ctor(
          _9__682_0,
          v34,
          Method_BattleServantData___c__getAiParam_b__682_0__,
          (const MethodInfo_21BC2E0 *)Method_System_Converter_long__int___ctor__);
        v35 = BattleServantData___c_TypeInfo->static_fields;
        v35->__9__682_0 = _9__682_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v35->__9__682_0,
          (System_Int32_array **)_9__682_0,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      FieldSpace = (__int64)System_Array__ConvertAll_long__int_(
                              checkParams,
                              (System_Converter_TInput__TOutput__o *)_9__682_0,
                              (const MethodInfo_1FC9B6C *)Method_System_Array_ConvertAll_long__int___);
      if ( !this->fields.buffData )
        goto LABEL_104;
      v42 = (System_Int32_array *)FieldSpace;
      SameIndivualityBuffSum = BattleBuffData__getSameIndivualityBuffSum(
                                 this->fields.buffData,
                                 (System_Int32_array *)FieldSpace,
                                 0,
                                 0,
                                 0,
                                 0LL);
      FieldSpace = BattleServantData__getSameIndiualityServantSum(this, v42, v44);
      if ( !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_105;
      np = FieldSpace + SameIndivualityBuffSum;
LABEL_101:
      totalDamage = (double)np;
LABEL_102:
      v19->m_Items[0] = totalDamage;
      break;
    case 26:
      v50 = 0.0;
      if ( !this->fields.isSystemAlive )
      {
        FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                       this,
                       this->klass->vtable._10_set_hp.methodPtr);
        if ( (int)FieldSpace <= 0 )
        {
          shiftDeckList = this->fields.shiftDeckList;
          if ( !shiftDeckList || this->fields.shiftDeckIndex >= (signed int)shiftDeckList->max_length )
            v50 = 1.0;
        }
      }
      if ( !v19 )
LABEL_104:
        sub_B7076C(FieldSpace, v16);
      if ( !v19->max_length )
      {
LABEL_105:
        v57 = sub_B70798(FieldSpace);
        sub_B70738(v57, 0LL);
      }
      v19->m_Items[0] = v50;
      break;
    default:
LABEL_41:
      v47 = (System_Double_array *)sub_B706AC(double___TypeInfo, 0LL);
LABEL_48:
      v19 = v47;
      break;
  }
  return v19;
}


AiState_o *__fastcall BattleServantData__getAiState(BattleServantData_o *this, const MethodInfo *method)
{
  AiStateManager_o *AiStateManager; // x0
  __int64 v4; // x1
  AiState_o *result; // x0

  AiStateManager = BattleServantData__get_AiStateManager(this, method);
  if ( !AiStateManager )
    sub_B7076C(0LL, v4);
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

  if ( (byte_434F6E1 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F6E1 = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v6, 0LL);
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
    sub_B7076C(TDvcLv, v8);
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

  if ( (byte_434F673 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F673 = 1;
  }
  *multiatk = 1;
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v11, v12);
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
  struct System_Collections_Hashtable_o *commandtable; // x21
  __int64 v6; // x2
  struct System_Collections_Hashtable_o *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x0
  System_Int32_array **v10; // x20
  __int64 v11; // x9
  _BOOL4 flash; // w21
  __int64 v13; // x0
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_434F674 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&int_TypeInfo);
    this = (BattleServantData_o *)sub_B70694(&ServantCardEntity_TypeInfo);
    byte_434F674 = 1;
  }
  if ( !command )
    goto LABEL_26;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type, v6);
  if ( !commandtable )
    goto LABEL_26;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B706AC(int___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_26;
    if ( this->fields.uniqueId )
    {
      LODWORD(this->fields.userSvtId.fields.currentCryptoKey) = 100;
      return (System_Int32_array *)this;
    }
LABEL_28:
    v13 = sub_B70798(this);
    sub_B70738(v13, 0LL);
  }
  v7 = v4->fields.commandtable;
  v14 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v8);
  if ( !v7 )
    goto LABEL_26;
  v9 = ((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v7->klass->vtable._29_get_Item.method)(
         v7,
         this,
         v7->klass->vtable._30_set_Item.methodPtr);
  v10 = (System_Int32_array **)v9;
  if ( v9 )
  {
    v11 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v9 + 300LL) < (unsigned int)v11
      || *(ServantCardEntity_c **)(*(_QWORD *)(*(_QWORD *)v9 + 200LL) + 8 * v11 - 8) != ServantCardEntity_TypeInfo )
    {
      this = (BattleServantData_o *)sub_B70A60(v9);
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
      sub_B7076C(this, command);
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


BattleBuffData_BuffData_array *__fastcall BattleServantData__getAttackSideEffectBuffList(
        BattleServantData_o *this,
        int32_t attackAct,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  BattleBuffData_o *buffData; // x24
  BattleBuffData_CheckIndividualitiesData_o *v11; // x25
  BattleBuffData_BuffData_array *BuffList_31751548; // x0
  __int64 v13; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v15; // x20
  unsigned int v16; // w22
  Il2CppClass **v17; // x8
  Il2CppClass *v18; // x21
  __int64 v20; // x0

  if ( (byte_434F666 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_434F666 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffData = this->fields.buffData;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_22;
  BuffList_31751548 = BattleBuffData__getBuffList_31751548(buffData, attackAct, v11, 1, 0, 0LL, 0LL);
  if ( !BuffList_31751548 )
    goto LABEL_22;
  max_length = BuffList_31751548->max_length;
  v15 = BuffList_31751548;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v20 = sub_B70798(BuffList_31751548);
        sub_B70738(v20, 0LL);
      }
      v17 = &v15->obj.klass + (int)v16;
      v18 = v17[4];
      if ( !v18 )
        break;
      if ( !BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)v17[4], 0LL)
        && !BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)v18, 0LL)
        && (BuffList_31751548 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCardBuff(
                                                                   (BattleBuffData_BuffData_o *)v18,
                                                                   0LL),
            ((unsigned __int8)BuffList_31751548 & 1) == 0)
        || (BuffList_31751548 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isActiveCommandCode(
                                                                   (BattleBuffData_BuffData_o *)v18,
                                                                   0LL),
            ((unsigned __int8)BuffList_31751548 & 1) != 0)
        || (BuffList_31751548 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCardBuff(
                                                                   (BattleBuffData_BuffData_o *)v18,
                                                                   0LL),
            ((unsigned __int8)BuffList_31751548 & 1) != 0)
        && LOBYTE(v18->_1.generic_class)
        || (BuffList_31751548 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                                   (BattleBuffData_BuffData_o *)v18,
                                                                   0LL),
            ((unsigned __int8)BuffList_31751548 & 1) != 0)
        && LOBYTE(v18->vtable[5].methodPtr) )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
      }
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_B7076C(BuffList_31751548, v13);
  }
LABEL_20:
  if ( !v9 )
    goto LABEL_22;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getAttackSideEffectBuffList_20722468(
        BattleServantData_o *this,
        BuffList_ACTION_array *attackActs,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  void *AttackSideEffectBuffList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__444_0; // x20
  Il2CppObject *v17; // x21
  struct BattleServantData___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v26; // x0

  if ( (byte_434F668 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__getAttackSideEffectBuffList_b__444_0__);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F668 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !attackActs )
    goto LABEL_20;
  v13 = *(_QWORD *)&attackActs->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
      {
        v26 = sub_B70798(AttackSideEffectBuffList);
        sub_B70738(v26, 0LL);
      }
      AttackSideEffectBuffList = BattleServantData__getAttackSideEffectBuffList(
                                   this,
                                   attackActs->m_Items[v14 + 1],
                                   command,
                                   opSvt,
                                   v12);
      if ( !v9 )
        break;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
        (System_Collections_Generic_IEnumerable_T__o *)AttackSideEffectBuffList,
        (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      LODWORD(v13) = attackActs->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_9;
    }
LABEL_20:
    sub_B7076C(AttackSideEffectBuffList, v11);
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
  _9__444_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__444_0;
  if ( !_9__444_0 )
  {
    if ( (*((_BYTE *)AttackSideEffectBuffList + 307) & 4) != 0 && !*((_DWORD *)AttackSideEffectBuffList + 56) )
    {
      j_il2cpp_runtime_class_init_0(AttackSideEffectBuffList);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__444_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__444_0,
      v17,
      Method_BattleServantData___c__getAttackSideEffectBuffList_b__444_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v18 = BattleServantData___c_TypeInfo->static_fields;
    v18->__9__444_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__444_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v18->__9__444_0,
      (System_Int32_array **)_9__444_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v9 )
    goto LABEL_20;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__444_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


int32_t __fastcall BattleServantData__getAttackType(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  struct System_Collections_Hashtable_o *commandtable; // x21
  __int64 v6; // x2
  struct System_Collections_Hashtable_o *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x9
  BattleServantData_o *v11; // x0
  BattleCommandData_o *v12; // x1
  BattleServantData_o *v13; // x2
  int32_t *v14; // x3
  const MethodInfo *v15; // x4
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_434F672 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    this = (BattleServantData_o *)sub_B70694(&ServantCardEntity_TypeInfo);
    byte_434F672 = 1;
  }
  if ( !command )
    goto LABEL_13;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type, v6);
  if ( !commandtable )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return 1;
  v7 = v4->fields.commandtable;
  v16 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v8);
  if ( !v7
    || (this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v7->klass->vtable._29_get_Item.method)(
                                        v7,
                                        this,
                                        v7->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_B7076C(this, command);
  }
  v9 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[v9 - 1] == ServantCardEntity_TypeInfo )
  {
    return this->fields.svtId.fields.fakeValue;
  }
  v11 = (BattleServantData_o *)sub_B70A60(this);
  return (unsigned int)BattleServantData__getAttackRaito(v11, v12, v13, v14, v15);
}


int32_t __fastcall BattleServantData__getAttri(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  AttriMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t v7; // w20
  struct ServantEntity_o *svtdata; // x8
  WarEntity_o *v9; // [xsp+0h] [xbp-20h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F63A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_AttriMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
    byte_434F63A = 1;
  }
  v9 = 0LL;
  buff = 0LL;
  if ( BattleServantData__TryGetOverwriteSubAttributeBuff(this, &buff, v2) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (AttriMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_AttriMaster___);
    if ( buff && Master_WarQuestSelectionMaster )
      return AttriMaster__GetAttrValue(Master_WarQuestSelectionMaster, buff->fields.param, 0LL);
LABEL_23:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  }
  Master_WarQuestSelectionMaster = (AttriMaster_o *)this->fields.deckSvt;
  if ( Master_WarQuestSelectionMaster
    && (Master_WarQuestSelectionMaster = (AttriMaster_o *)BattleDeckServantData__getChangeAttri(
                                                            (BattleDeckServantData_o *)Master_WarQuestSelectionMaster,
                                                            0LL),
        (_DWORD)Master_WarQuestSelectionMaster) )
  {
    v7 = (int)Master_WarQuestSelectionMaster;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (AttriMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_AttriMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_23;
    Master_WarQuestSelectionMaster = (AttriMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                        &v9,
                                                        v7,
                                                        (const MethodInfo_21C049C *)Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_23;
      return *(&v9->fields.id + 1);
    }
    else
    {
      return 10;
    }
  }
  else
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      goto LABEL_23;
    return svtdata->fields.attri;
  }
}


System_Int32_array *__fastcall BattleServantData__getAuraIdList(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *AuraBuffList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v6; // x20
  System_Int32_array *v7; // x19
  int32_t v8; // w21
  BattleBuffData_BuffData_o *v9; // x8
  char *v10; // x9
  __int64 v12; // x0

  if ( (byte_434F6DB & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    byte_434F6DB = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return this->fields.wkzero;
  AuraBuffList = BattleBuffData__getAuraBuffList(buffData, 0LL);
  if ( !AuraBuffList )
    goto LABEL_16;
  v6 = AuraBuffList;
  AuraBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_B706AC(
                                                                                 int___TypeInfo,
                                                                                 (unsigned int)AuraBuffList->fields._size);
  if ( !AuraBuffList )
    goto LABEL_16;
  v7 = (System_Int32_array *)AuraBuffList;
  if ( AuraBuffList->fields._size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v6->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v9 = v6->fields._items->m_Items[v8];
      if ( !v9 )
        break;
      if ( (unsigned int)v8 >= AuraBuffList->fields._size )
      {
        v12 = sub_B70798(AuraBuffList);
        sub_B70738(v12, 0LL);
      }
      v10 = (char *)AuraBuffList + 4 * v8++;
      *((_DWORD *)v10 + 8) = v9->fields.auraEffectId;
      if ( v8 >= AuraBuffList->fields._size )
        return v7;
    }
LABEL_16:
    sub_B7076C(AuraBuffList, v5);
  }
  return v7;
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
    sub_B7076C(this, method);
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
  BattleBuffData_CheckIndividualitiesData_o *v11; // x21
  __int64 v12; // x1
  BattleBuffData_o *buffData; // x0
  struct ServantEntity_o *svtdata; // x8
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_434F63C & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F63C = 1;
  }
  value = 0;
  if ( !isAttack )
    command = 0LL;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, command, command, 0LL, 0LL);
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
    sub_B7076C(buffData, v12);
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
  struct BattleDeckServantData_o *deckSvt; // x8
  ServantEntity_o *v6; // x20
  const MethodInfo *v7; // x2
  int32_t DispLimitCount; // w0
  __int64 v9; // x22
  __int64 v10; // x23
  int32_t v11; // w21
  int32_t v12; // w22
  int32_t LimitCountByDispLimit; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_434F627 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    this = (BattleServantData_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F627 = 1;
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
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        svtId,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_B7076C(this, *(_QWORD *)&svtId);
  }
  v6 = (ServantEntity_o *)this;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL) )
    return 0LL;
  DispLimitCount = BattleServantData__getDispLimitCount(v4, 0, v7);
  v10 = *(_QWORD *)&v4->fields.limitcount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v4->fields.limitcount.fields.fakeValue;
  v11 = DispLimitCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v15, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v11, v12, 0LL);
  return ServantEntity__getBattleName(v6, v4->fields.battleVoice != 0, LimitCountByDispLimit, 0LL);
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

  if ( (byte_434F6B1 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6B1 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return (float)BattleBuffData__getActValue_31763688(buffData, 13, v8, 0LL);
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
  bool v11; // zf
  BattleBuffData_o *buffData; // x22
  int32_t v13; // w23
  const MethodInfo *v14; // x4
  System_Int32_array *Individualities_20739892; // x24
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v17; // x2
  System_Int32_array *v18; // x0
  System_Int32_array *v19; // x25
  BattleBuffData_CheckIndividualitiesData_o *v20; // x26
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_434F6B8 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&int___TypeInfo);
    byte_434F6B8 = 1;
  }
  v11 = !upOnly;
  buffData = this->fields.buffData;
  if ( v11 )
    v13 = 36;
  else
    v13 = 106;
  Individualities_20739892 = BattleServantData__getIndividualities_20739892(this, buffIndiv, (const MethodInfo *)opSvt);
  if ( opSvt )
  {
    BuffIndividualities = BattleServantData__getBuffIndividualities(opSvt, 1, 0, 0, v14);
    v18 = BattleServantData__getIndividualities_20739892(opSvt, BuffIndividualities, v17);
  }
  else
  {
    v18 = (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  }
  v19 = v18;
  v20 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v20, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v21, v22);
  return BattleBuffData__getActMag_31764532(
           buffData,
           v13,
           Individualities_20739892,
           v19,
           missText,
           v20,
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

  if ( (byte_434F6BA & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6BA = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v8, v9);
  return BattleBuffData__getActMag_31764796(buffData, 61, v7, 0LL);
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
    sub_B7076C(0LL, isActiveOnly);
  return BattleBuffData__getBuffIndividualities(
           buffData,
           isActiveOnly,
           isIncludeIgnoreIndiv,
           isIgnoreIndivUnreleaseable,
           0,
           0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getBuffList(
        BattleServantData_o *this,
        int32_t buffAction,
        bool checkOnly,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_434F658 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F658 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getBuffList_31751548(buffData, buffAction, v8, 1, checkOnly, 0LL, 0LL);
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

  if ( (byte_434F6A8 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6A8 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
  return BattleBuffData__getActMag_31764796(buffData, 49, v6, 0LL);
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

  if ( (byte_434F6BE & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6BE = 1;
  }
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v11, v12);
  return BattleBuffData__getBuffList_31751548(buffData, 87, v10, isAct, 0, 0LL, 0LL);
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
      return BattleUtility__FloorToInt_24011364(
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

  if ( (byte_434F6A9 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6A9 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
  return BattleBuffData__getActMag_31764796(buffData, 68, v6, 0LL);
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

  if ( (byte_434F6A7 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6A7 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
  return BattleBuffData__getActMag_31764796(buffData, 48, v6, 0LL);
}


float __fastcall BattleServantData__getBuffSelfDamageValue(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x21
  bool v7; // w0
  BattleBuffData_o *buffData; // x22
  bool v9; // w24
  BattleBuffData_CheckIndividualitiesData_o *v10; // x23
  int32_t v11; // w1

  v6 = this;
  if ( (byte_434F6B2 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6B2 = 1;
  }
  if ( !targetSvt
    || (v7 = BattleServantData__CheckPierceSubdamage(targetSvt, command, v6, method),
        buffData = v6->fields.buffData,
        v9 = v7,
        v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v10, v6, targetSvt, 0LL, command, 0LL, 0LL),
        !buffData) )
  {
    sub_B7076C(this, command);
  }
  if ( v9 )
    v11 = 133;
  else
    v11 = 14;
  return (float)BattleBuffData__getActValue_31763688(buffData, v11, v10, 0LL);
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
    return BattleUtility__FloorToInt_24011364(v9 * v10, 0LL);
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
    return BattleUtility__FloorToInt_24011364(v9 * v10, 0LL);
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
  BattleBuffData_o *buffData; // x22
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  System_Int32_array *Individualities_20739892; // x24
  BattleBuffData_CheckIndividualitiesData_o *v14; // x25
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_434F6B9 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6B9 = 1;
  }
  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, method);
  Individualities_20739892 = BattleServantData__getIndividualities_20739892(this, BuffIndividualities, v11);
  if ( opSvt )
    buffIndiv = BattleServantData__getIndividualities_20739892(opSvt, buffIndiv, v12);
  v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v14, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v15, v16);
  return BattleBuffData__getActMag_31764532(buffData, 37, Individualities_20739892, buffIndiv, missText, v14, 0LL, 0LL);
}


float __fastcall BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
        BattleServantData_o *this,
        System_Int32_array *indiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_434F6BB & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6BB = 1;
  }
  buffData = this->fields.buffData;
  if ( opSvt )
    indiv = BattleServantData__getIndividualities_20739892(opSvt, indiv, (const MethodInfo *)opSvt);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_24123036(v8, this, opSvt, 0LL, indiv, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getActMag_31764796(buffData, 62, v8, 0LL);
}


int32_t __fastcall BattleServantData__getCameraActionId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B7076C(0LL, method);
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
      sub_B7076C(npcSvtClassId, method);
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
      sub_B7076C(npcSvtClassId, method);
    LODWORD(npcSvtClassId) = svtdata->fields.classId;
  }
  return npcSvtClassId;
}


System_Int32_array *__fastcall BattleServantData__getCommandArray(
        BattleServantData_o *this,
        int32_t commandTypeBit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct ServantEntity_o *svtdata; // x8
  struct System_Int32_array *cardIds; // x22
  __int64 v10; // x8
  unsigned __int64 v11; // x23
  struct ServantEntity_o *v13; // x8
  __int64 v14; // x0

  if ( (byte_434F635 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_434F635 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_18;
  cardIds = svtdata->fields.cardIds;
  if ( !cardIds )
    goto LABEL_18;
  v10 = *(_QWORD *)&cardIds->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v14 = sub_B70798(v6);
        sub_B70738(v14, 0LL);
      }
      v7 = (unsigned int)cardIds->m_Items[v11 + 1];
      if ( ((1 << (v7 - 1)) & commandTypeBit) != 0 )
      {
        if ( !v5 )
          goto LABEL_18;
        System_Collections_Generic_List_int___Add(
          v5,
          v7,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v10) = cardIds->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v10 );
  }
  if ( !v5 )
    goto LABEL_18;
  if ( v5->fields._size > 0 )
    return System_Collections_Generic_List_int___ToArray(
             v5,
             (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v13 = this->fields.svtdata;
  if ( !v13 )
LABEL_18:
    sub_B7076C(v6, v7);
  return v13->fields.cardIds;
}


float __fastcall BattleServantData__getCommandCardATK(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x21
  int32_t CommandType; // w0
  __int64 *v8; // x8
  int32_t v9; // w0
  int32_t v10; // w0
  float Magnification; // s0
  float v12; // s8
  BattleBuffData_CheckIndividualitiesData_o *v13; // x23
  BattleBuffData_CheckIndividualitiesData_o *v14; // x22
  float ActMag_31764796; // s0
  float v16; // s9
  float v17; // s0

  v6 = this;
  if ( (byte_434F692 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&StringLiteral_5591/*"ENEMY_ATTACK_RATE_ARTS"*/);
    sub_B70694(&StringLiteral_5592/*"ENEMY_ATTACK_RATE_BUSTER"*/);
    this = (BattleServantData_o *)sub_B70694(&StringLiteral_5593/*"ENEMY_ATTACK_RATE_QUICK"*/);
    byte_434F692 = 1;
  }
  if ( !v6->fields.isEnemy )
    goto LABEL_12;
  if ( !command )
    goto LABEL_18;
  CommandType = BattleCommandData__getCommandType(command, 0LL);
  if ( !BattleCommand__isARTS(CommandType, 0LL) )
  {
    v9 = BattleCommandData__getCommandType(command, 0LL);
    if ( BattleCommand__isQUICK(v9, 0LL) )
    {
      v8 = &StringLiteral_5593/*"ENEMY_ATTACK_RATE_QUICK"*/;
      goto LABEL_11;
    }
    v10 = BattleCommandData__getCommandType(command, 0LL);
    if ( BattleCommand__isBUSTER(v10, 0LL) )
    {
      v8 = &StringLiteral_5592/*"ENEMY_ATTACK_RATE_BUSTER"*/;
      goto LABEL_11;
    }
LABEL_12:
    Magnification = BattleCommand__getMagnification(command, 0LL);
    goto LABEL_13;
  }
  v8 = &StringLiteral_5591/*"ENEMY_ATTACK_RATE_ARTS"*/;
LABEL_11:
  Magnification = ConstantMaster__getRateValue((System_String_o *)*v8, 0LL);
LABEL_13:
  v12 = Magnification;
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v13, v6, targetSvt, command, 0LL, 0LL, 0LL);
  v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v14, targetSvt, v6, 0LL, command, 0LL, 0LL);
  this = (BattleServantData_o *)v6->fields.buffData;
  if ( !this
    || (ActMag_31764796 = BattleBuffData__getActMag_31764796((BattleBuffData_o *)this, 1, v13, 0LL), !targetSvt)
    || (this = (BattleServantData_o *)targetSvt->fields.buffData) == 0LL
    || (v16 = ActMag_31764796, v17 = BattleBuffData__getActMag_31764796((BattleBuffData_o *)this, 2, v14, 0LL), !command) )
  {
LABEL_18:
    sub_B7076C(this, command);
  }
  return (float)(v12 * fmaxf((float)(v16 + 1.0) - v17, 0.0)) + (float)((float)command->fields.addAtk / 1000.0);
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
  float ActMag_31764796; // s0
  float v13; // s9
  float v14; // s0

  if ( (byte_434F693 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F693 = 1;
  }
  NpMagnification = BattleCommand__getNpMagnification(command, 0LL);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, opSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_31764796 = BattleBuffData__getActMag_31764796(buffData, 22, v8, 0LL), !opSvt)
    || (buffData = opSvt->fields.buffData) == 0LL
    || (v13 = ActMag_31764796, v14 = BattleBuffData__getActMag_31764796(buffData, 23, v9, 0LL), !command) )
  {
    sub_B7076C(buffData, v10);
  }
  return (float)(NpMagnification * fmaxf((float)(v13 + 1.0) - v14, 0.0))
       + (float)((float)command->fields.addTdGauge / 1000.0);
}


int32_t __fastcall BattleServantData__getCommandDispLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w19
  int32_t LimitCountByImageLimit; // w0
  __int64 v8; // x20
  __int64 v9; // x21
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  ServantLimitAddMaster_o *v15; // x22
  int32_t v16; // w0
  __int64 v17; // x8
  int32_t v18; // w19
  int32_t battleCharaLimitCount; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // kr00_16
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_434F641 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F641 = 1;
  }
  entity = 0LL;
  result = this->fields.dressDispId;
  if ( result <= 0 )
  {
    v5 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v22.fields.currentCryptoKey = v5;
    *(_QWORD *)&v22.fields.fakeValue = v4;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v22, 0LL) )
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v23.fields.currentCryptoKey = v5;
      *(_QWORD *)&v23.fields.fakeValue = v4;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v23, 0LL) >= 11 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v27.fields.currentCryptoKey = v5;
        *(_QWORD *)&v27.fields.fakeValue = v4;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v27, 0LL);
      }
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v24.fields.currentCryptoKey = v5;
      *(_QWORD *)&v24.fields.fakeValue = v4;
      v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v24, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v6 - 1, 0LL);
      goto LABEL_31;
    }
    v8 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( this->fields.isEnemy )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_42;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v15 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v25.fields.currentCryptoKey = v14;
      *(_QWORD *)&v25.fields.fakeValue = v13;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v25, 0LL);
      v17 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v26.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v18 = v16;
      *(_QWORD *)&v26.fields.currentCryptoKey = v17;
      Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v26, 0LL);
      if ( !v15 )
        goto LABEL_42;
      Instance = (WebViewManager_o *)ServantLimitAddMaster__TryGetEntity(v15, &entity, v18, (int32_t)Instance, 0LL);
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
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
          v9 = *(_QWORD *)&v20.fields.fakeValue;
          v8 = *(_QWORD *)&v20.fields.currentCryptoKey;
          goto LABEL_32;
        }
LABEL_42:
        sub_B7076C(Instance, v11);
      }
    }
LABEL_32:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v8;
    *(_QWORD *)&v27.fields.fakeValue = v9;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v27, 0LL);
  }
  return result;
}


System_Int32_array *__fastcall BattleServantData__getCommandList(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B7076C(this, method);
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

  if ( (byte_434F65D & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F65D = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getBuffList_31751548(buffData, 57, v8, 1, 0, 0LL, 0LL);
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
  float ActMag_31764796; // s0
  float v13; // s9
  float v14; // s0

  if ( (byte_434F694 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F694 = 1;
  }
  CriticalMagnification = BattleCommand__getCriticalMagnification(command, 0LL);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, opSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_31764796 = BattleBuffData__getActMag_31764796(buffData, 26, v8, 0LL), !opSvt)
    || (buffData = opSvt->fields.buffData) == 0LL
    || (v13 = ActMag_31764796, v14 = BattleBuffData__getActMag_31764796(buffData, 27, v9, 0LL), !command) )
  {
    sub_B7076C(buffData, v10);
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
  System_Collections_Generic_List_int__o *v11; // x24
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *Individualities; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0

  if ( (byte_434F69C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_434F69C = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getIndividualities(
                                                                     this,
                                                                     command,
                                                                     v12);
  if ( !v11 )
    sub_B7076C(Individualities, v14);
  System_Collections_Generic_List_int___AddRange(
    v11,
    Individualities,
    (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                         this,
                                                                         isActiveOnly,
                                                                         isIncludeIgnoreIndiv,
                                                                         isIgnoreIndivUnreleaseable,
                                                                         v15);
  System_Collections_Generic_List_int___AddRange(
    v11,
    BuffIndividualities,
    (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleServantData__getConcatSvtIndividualities(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        System_Int32_array *addIndividualityArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *Individualities; // x21
  const MethodInfo *v8; // x4
  System_Collections_Generic_IEnumerable_TSource__o *BuffIndividualities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20

  if ( (byte_434F69B & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Concat_int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_434F69B = 1;
  }
  Individualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getIndividualities(
                                                                           this,
                                                                           command,
                                                                           (const MethodInfo *)addIndividualityArray);
  BuffIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getBuffIndividualities(
                                                                               this,
                                                                               1,
                                                                               0,
                                                                               0,
                                                                               v8);
  v10 = System_Linq_Enumerable__Concat_int_(
          Individualities,
          BuffIndividualities,
          (const MethodInfo_1CB525C *)Method_System_Linq_Enumerable_Concat_int___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividualityArray, 0LL) )
    v10 = System_Linq_Enumerable__Concat_int_(
            v10,
            (System_Collections_Generic_IEnumerable_TSource__o *)addIndividualityArray,
            (const MethodInfo_1CB525C *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v10,
           (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_434F6D9 & 1) == 0 )
  {
    sub_B70694(&BattleServantData_ConnectData_TypeInfo);
    byte_434F6D9 = 1;
  }
  uniqueId = this->fields.uniqueId;
  v4 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  atk = this->fields.atk;
  v6 = v4;
  v7 = (BattleServantData_ConnectData_o *)sub_B70764(BattleServantData_ConnectData_TypeInfo);
  BattleServantData_ConnectData___ctor(v7, uniqueId, v6, atk, 0LL);
  return v7;
}


int32_t __fastcall BattleServantData__getCorrectedValueFuncGainNp(
        BattleServantData_o *this,
        int32_t tmpVal,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_434F6A6 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6A6 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
  return BattleBuffData__getActValue_31763688(buffData, 71, v6, 0LL) * tmpVal / 1000;
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
    sub_B7076C(UpDownCriticalRate, v9);
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
  if ( (byte_434F6C5 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6C5 = 1;
  }
  svtlimitent = v4->fields.svtlimitent;
  if ( !svtlimitent
    || (criticalWeight = svtlimitent->fields.criticalWeight,
        buffData = v4->fields.buffData,
        v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v8, v4, 0LL, command, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_B7076C(this, command);
  }
  v9 = BattleBuffData__getActMag_31764796(buffData, 29, v8, 0LL) * (float)criticalWeight;
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

  if ( (byte_434F660 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F660 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getBuffList_31751548(buffData, 64, v8, 1, 0, 0LL, 0LL);
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

  if ( (byte_434F65E & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F65E = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, deadAttackcommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getBuffList_31751548(buffData, 58, v8, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDeadBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        bool isAllReturnDeadBuff,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x21
  BattleBuffData_BuffData_array *BuffListMatchingLastAttackOpponentIndividuality; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  const MethodInfo *v10; // x1
  int32_t RevengeTargetUniqueIdFromOpponent; // w22
  const MethodInfo *v12; // x1
  int max_length; // w8
  int32_t v14; // w21
  unsigned int v15; // w24
  Il2CppClass **v16; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x23
  int32_t v18; // w8
  __int64 v20; // x0

  v6 = this;
  if ( (byte_434F659 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_BuffData___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    this = (BattleServantData_o *)sub_B70694(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_434F659 = 1;
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
    return (BattleBuffData_BuffData_array *)sub_B706AC(BattleBuffData_BuffData___TypeInfo, 0LL);
  this = (BattleServantData_o *)v6->fields.buffData;
  if ( !this )
LABEL_26:
    sub_B7076C(this, data);
  BuffListMatchingLastAttackOpponentIndividuality = BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(
                                                      (BattleBuffData_o *)this,
                                                      51,
                                                      data,
                                                      v6,
                                                      1,
                                                      0LL);
  if ( !isAllReturnDeadBuff )
  {
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    RevengeTargetUniqueIdFromOpponent = BattleServantData__getRevengeTargetUniqueIdFromOpponent(v6, v10);
    this = (BattleServantData_o *)BattleServantData__getRevengeTargetUniqueId(v6, v12);
    if ( BuffListMatchingLastAttackOpponentIndividuality )
    {
      max_length = BuffListMatchingLastAttackOpponentIndividuality->max_length;
      if ( max_length < 1 )
      {
LABEL_22:
        if ( v9 )
          return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                    (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
      }
      else
      {
        v14 = (int)this;
        v15 = 0;
        while ( 1 )
        {
          if ( v15 >= max_length )
          {
            v20 = sub_B70798(this);
            sub_B70738(v20, 0LL);
          }
          v16 = &BuffListMatchingLastAttackOpponentIndividuality->obj.klass + (int)v15;
          v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)v16[4];
          if ( !v17 )
            break;
          this = (BattleServantData_o *)BattleBuffData_BuffData__checkState(
                                          (BattleBuffData_BuffData_o *)v16[4],
                                          2048,
                                          0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            v18 = RevengeTargetUniqueIdFromOpponent;
          else
            v18 = v14;
          if ( (v18 & 0x80000000) == 0
            || (this = (BattleServantData_o *)BattleBuffData_BuffData__checkState(
                                                (BattleBuffData_BuffData_o *)v17,
                                                0x40000,
                                                0LL),
                ((unsigned __int8)this & 1) == 0) )
          {
            if ( !v9 )
              goto LABEL_26;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              v17,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
          }
          max_length = BuffListMatchingLastAttackOpponentIndividuality->max_length;
          if ( (int)++v15 >= max_length )
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

  if ( (byte_434F6D3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
    byte_434F6D3 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_9;
  v5 = *(_QWORD *)&v3->max_length;
  if ( v5 )
  {
    if ( !(_DWORD)v5 )
    {
      v8 = sub_B70798(v3);
      sub_B70738(v8, 0LL);
    }
    v6 = *(__int64 *)((char *)v3->m_Items + (((v5 << 32) - 0x100000000LL) >> 29));
    if ( v6 )
      return *(_DWORD *)(v6 + 20);
LABEL_9:
    sub_B7076C(v3, v4);
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
    sub_B7076C(0LL, method);
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
      sub_B7076C(0LL, v5);
    LODWORD(TDvcLv) = TDvcLv->fields.tdPointDef;
  }
  return (int)TDvcLv;
}


int32_t __fastcall BattleServantData__getDispLimitCount(
        BattleServantData_o *this,
        bool changeImageLimit,
        const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v6; // x19
  __int64 v7; // x21
  int32_t v8; // w19
  int32_t LimitCountByImageLimit; // w0
  __int64 v10; // x19
  __int64 v11; // x21
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x23
  __int64 v16; // x24
  ServantLimitAddMaster_o *v17; // x22
  int32_t v18; // w0
  __int64 v19; // x8
  int32_t v20; // w20
  int32_t battleCharaLimitCount; // w19
  __int64 v22; // x0
  __int64 v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // kr00_16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // kr10_16
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_434F642 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F642 = 1;
  }
  entity = 0LL;
  result = this->fields.dressDispId;
  if ( result <= 0 )
  {
    v7 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v7;
    *(_QWORD *)&v27.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v27, 0LL) )
    {
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v28.fields.currentCryptoKey = v7;
      *(_QWORD *)&v28.fields.fakeValue = v6;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v28, 0LL) >= 11 )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v32.fields.currentCryptoKey = v7;
        *(_QWORD *)&v32.fields.fakeValue = v6;
        return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v32, 0LL);
      }
      if ( !changeImageLimit )
      {
        if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v33.fields.currentCryptoKey = v7;
        *(_QWORD *)&v33.fields.fakeValue = v6;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Decrement(v33, 0LL);
        v23 = *(_QWORD *)&v25.fields.fakeValue;
        v22 = *(_QWORD *)&v25.fields.currentCryptoKey;
        goto LABEL_41;
      }
      if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v29.fields.currentCryptoKey = v7;
      *(_QWORD *)&v29.fields.fakeValue = v6;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v29, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v8 - 1, 0LL);
LABEL_32:
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
      v23 = *(_QWORD *)&v24.fields.fakeValue;
      v22 = *(_QWORD *)&v24.fields.currentCryptoKey;
LABEL_41:
      v10 = v22;
      v11 = v23;
      goto LABEL_42;
    }
    v10 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v11 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( this->fields.isEnemy )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_48;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v17 = (ServantLimitAddMaster_o *)MasterData_WarQuestSelectionMaster;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v30.fields.currentCryptoKey = v16;
      *(_QWORD *)&v30.fields.fakeValue = v15;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v30, 0LL);
      v19 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v31.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v20 = v18;
      *(_QWORD *)&v31.fields.currentCryptoKey = v19;
      Instance = (WebViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v31, 0LL);
      if ( !v17 )
        goto LABEL_48;
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
          goto LABEL_32;
        }
LABEL_48:
        sub_B7076C(Instance, v13);
      }
    }
LABEL_42:
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v32.fields.currentCryptoKey = v10;
    *(_QWORD *)&v32.fields.fakeValue = v11;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v32, 0LL);
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
    sub_B7076C(0LL, method);
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

  if ( (byte_434F63F & 1) == 0 )
  {
    sub_B70694(&ServantLimitAddMaster_TypeInfo);
    byte_434F63F = 1;
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
    sub_B7076C(v4, method);
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

  if ( (byte_434F661 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F661 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v5, v6);
  return BattleBuffData__getBuffList_31751548(buffData, 76, v4, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getFixCommandCardBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_434F65C & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F65C = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v5, v6);
  return BattleBuffData__getBuffList_31751548(buffData, 74, v4, 1, 0, 0LL, 0LL);
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

  if ( (byte_434F6AC & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6AC = 1;
  }
  if ( isTreasureDevice )
    TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, (const MethodInfo *)opSvt);
  else
    TreasureDvcCommand = 0LL;
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, TreasureDvcCommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v10, v11);
  return BattleBuffData__getActMag_31764796(buffData, 63, v9, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getGutsBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B7076C(0LL, data);
  return BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(buffData, 89, data, this, 1, 0LL);
}


System_Int32_array *__fastcall BattleServantData__getIndividualities(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  const MethodInfo *v6; // x2
  BattleServantData_c *v7; // x0
  BattleServantData_c *v8; // x0
  System_Collections_Generic_IEnumerable_T__o *CriticalIndividuality; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_T__o *klass; // x1
  const MethodInfo_30B642C *v14; // x2
  const MethodInfo *v15; // x2
  System_Int32_array *ServantCommandIndividuality; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_434F6CA & 1) == 0 )
  {
    sub_B70694(&BattleServantData_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_434F6CA = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( command )
  {
    if ( command->fields.critical )
    {
      v7 = BattleServantData_TypeInfo;
      if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleServantData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
      }
      if ( BattleServantData__get_CriticalIndividuality((const MethodInfo *)v7) != -1 )
      {
        v8 = BattleServantData_TypeInfo;
        if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleServantData_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
        }
        CriticalIndividuality = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__get_CriticalIndividuality((const MethodInfo *)v8);
        if ( !v5 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v5,
          (int32_t)CriticalIndividuality,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    if ( !BattleCommandData__isTreasureDvc(command, 0LL) )
    {
      CriticalIndividuality = (System_Collections_Generic_IEnumerable_T__o *)BattleCommandData__getIndividualities(
                                                                               command,
                                                                               0LL);
      if ( v5 )
      {
        System_Collections_Generic_List_int___AddRange(
          v5,
          CriticalIndividuality,
          (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__);
        ServantCommandIndividuality = BattleServantData__getServantCommandIndividuality(this, command, v15);
        v14 = (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__;
        klass = (System_Collections_Generic_IEnumerable_T__o *)ServantCommandIndividuality;
        goto LABEL_21;
      }
LABEL_23:
      sub_B7076C(CriticalIndividuality, v10);
    }
    if ( BattleServantData__get_TreasureDevice(this, v11) )
    {
      CriticalIndividuality = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__get_TreasureDevice(
                                                                               this,
                                                                               v12);
      if ( CriticalIndividuality && v5 )
      {
        klass = (System_Collections_Generic_IEnumerable_T__o *)CriticalIndividuality[4].klass;
        v14 = (const MethodInfo_30B642C *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_21:
        System_Collections_Generic_List_int___AddRange(v5, klass, v14);
        goto LABEL_22;
      }
      goto LABEL_23;
    }
  }
LABEL_22:
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__EnumerateIndividuality(
                                                               this,
                                                               (System_Collections_Generic_IEnumerable_int__o *)v5,
                                                               v6);
  return System_Linq_Enumerable__ToArray_int_(
           v17,
           (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleServantData__getIndividualities_20739892(
        BattleServantData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_434F6CB & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_434F6CB = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__EnumerateIndividuality(
                                                              this,
                                                              (System_Collections_Generic_IEnumerable_int__o *)addIndiv,
                                                              method);
  return System_Linq_Enumerable__ToArray_int_(
           v5,
           (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleServantData__getLevel(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.level;
}


System_String_o *__fastcall BattleServantData__getLevelLabel(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x0
  int32_t level; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434F63E & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_23922/*"{0}"*/);
    byte_434F63E = 1;
  }
  level = this->fields.level;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &level, v2);
  return System_String__Format((System_String_o *)StringLiteral_23922/*"{0}"*/, v4, 0LL);
}


int32_t __fastcall BattleServantData__getLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_434F640 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F640 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v6, 0LL);
}


int32_t __fastcall BattleServantData__getLimitImageIndex(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t SvtId; // w19
  const MethodInfo *v4; // x2
  int32_t DispLimitCount; // w20

  if ( (byte_434F644 & 1) == 0 )
  {
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_434F644 = 1;
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
  BattleBuffData_CheckIndividualitiesData_o *v3; // x20
  CrashReporter_o *buffData; // x0
  __int64 v5; // x1
  __int64 maxhp; // x21
  BattleBuffData_o *v7; // x8
  __int64 v8; // x8

  if ( (byte_434F677 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_B70694(&StringLiteral_15936/*"[BattleServantData.getMaxHp] buffData is null"*/);
    byte_434F677 = 1;
  }
  v3 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v3, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  buffData = (CrashReporter_o *)this->fields.buffData;
  if ( !buffData
    && ((buffData = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0LL
     || (CrashReporter__SendReport_28140028(buffData, (System_String_o *)StringLiteral_15936/*"[BattleServantData.getMaxHp] buffData is null"*/, 0LL, 0LL, 0LL),
         (buffData = (CrashReporter_o *)this->fields.buffData) == 0LL))
    || (maxhp = this->fields.maxhp,
        buffData = (CrashReporter_o *)BattleBuffData__getActValue_31763688((BattleBuffData_o *)buffData, 52, v3, 0LL),
        (v7 = this->fields.buffData) == 0LL) )
  {
    sub_B7076C(buffData, v5);
  }
  v8 = (int)buffData * maxhp / 1000 + maxhp + BattleBuffData__getActValue_31763688(v7, 53, v3, 0LL);
  if ( v8 <= 1 )
    v8 = 1LL;
  if ( v8 >= 0x7FFFFFFF )
    return 0x7FFFFFFF;
  else
    return v8;
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
  struct System_Collections_Hashtable_o *commandtable; // x21
  __int64 v6; // x2
  struct System_Collections_Hashtable_o *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x9
  BattleServantData_o *v11; // x0
  BattleCommandData_o *v12; // x1
  const MethodInfo *v13; // x2
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_434F671 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    this = (BattleServantData_o *)sub_B70694(&ServantCardEntity_TypeInfo);
    byte_434F671 = 1;
  }
  if ( !command )
    goto LABEL_13;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type, v6);
  if ( !commandtable )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return 40;
  v7 = v4->fields.commandtable;
  v14 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v8);
  if ( !v7
    || (this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v7->klass->vtable._29_get_Item.method)(
                                        v7,
                                        this,
                                        v7->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_B7076C(this, command);
  }
  v9 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[v9 - 1] == ServantCardEntity_TypeInfo )
  {
    return this->fields.uniqueId;
  }
  v11 = (BattleServantData_o *)sub_B70A60(this);
  return BattleServantData__getAttackType(v11, v12, v13);
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
    sub_B7076C(0LL, checkIndividualities);
  return BattleBuffData__getBuffList_31751548(buffData, 73, checkIndividualities, 1, 0, 0LL, 0LL);
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

  if ( (byte_434F6C3 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6C3 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 39, v4, 0, 0LL),
        v8 = this->fields.buffData,
        v9 = isTurnBuff,
        v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v10, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v8) )
  {
    sub_B7076C(v5, v6);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
  return BattleDeckServantData__getTDName(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDRuby(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B7076C(0LL, method);
  return BattleDeckServantData__getTDRuby(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDVoice(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_B7076C(0LL, method);
  return BattleDeckServantData__getEnemyTreasureDeviceVoiceId(deckSvt, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleServantData__getPassiveSkills(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  void *All; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__317_0; // x20
  Il2CppObject *v7; // x21
  struct BattleServantData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_434F632 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
    sub_B70694(&Method_System_Predicate_BattleSkillInfoData___ctor__);
    sub_B70694(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__getPassiveSkills_b__317_0__);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F632 = 1;
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
  _9__317_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__317_0;
  if ( !_9__317_0 )
  {
    if ( (*((_BYTE *)All + 307) & 4) != 0 && !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__317_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__317_0,
      v7,
      Method_BattleServantData___c__getPassiveSkills_b__317_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    v8 = BattleServantData___c_TypeInfo->static_fields;
    v8->__9__317_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__317_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__317_0,
      (System_Int32_array **)_9__317_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)skillInfoList,
                (System_Predicate_T__o *)_9__317_0,
                (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_B7076C(All, method);
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


int32_t __fastcall BattleServantData__getRarity(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B7076C(this, method);
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
    sub_B7076C(0LL, isAtkSide);
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

  if ( (byte_434F65F & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F65F = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v5, v6);
  return BattleBuffData__getBuffList_31751548(buffData, 65, v4, 1, 0, 0LL, 0LL);
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

  if ( (byte_434F6D1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
    byte_434F6D1 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
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
        v11 = sub_B70798(v3);
        sub_B70738(v11, 0LL);
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
    sub_B7076C(v3, v4);
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

  if ( (byte_434F6D2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
    byte_434F6D2 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
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
        v11 = sub_B70798(v3);
        sub_B70738(v11, 0LL);
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
    sub_B7076C(v3, v4);
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
    sub_B7076C(0LL, indv);
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
        v12 = sub_B70798(Individualities);
        sub_B70738(v12, 0LL);
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
    sub_B7076C(Individualities, v5);
  }
  return 0;
}


BattleServantData_SaveData_o *__fastcall BattleServantData__getSaveData(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  AiState_o *aiState; // x0
  __int64 v7; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x8
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v38; // x8
  System_Int32_array **v39; // x0
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
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v52; // x24
  __int64 v53; // x25
  int size; // w8
  __int64 v55; // x8
  BattleSkillInfoData_o *v56; // x24
  __int64 v57; // x26
  __int64 v58; // x26
  System_Int32_array **statestring; // x1
  System_Int32_array **commandAssistIds; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x20
  BattleServantData___c_c *v68; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_string__object___string__o *_9__281_0; // x21
  Il2CppObject *v71; // x22
  struct BattleServantData___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_Int32_array **v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v88; // x0

  if ( (byte_434F61A & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleServantData_PartAnimationSaveData___);
    sub_B70694(&Method_System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___ctor__);
    sub_B70694(&System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_B70694(&BattleServantData_SaveData_TypeInfo);
    sub_B70694(&Method_BattleServantData___c__getSaveData_b__281_0__);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F61A = 1;
  }
  v5 = sub_B70764(BattleServantData_SaveData_TypeInfo);
  BattleServantData_SaveData___ctor((BattleServantData_SaveData_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_34;
  *(_DWORD *)(v5 + 16) = this->fields.index;
  *(_DWORD *)(v5 + 20) = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                           this,
                           this->klass->vtable._10_set_hp.methodPtr);
  *(_DWORD *)(v5 + 72) = this->fields.deckIndex;
  *(_DWORD *)(v5 + 24) = this->fields.np;
  *(_DWORD *)(v5 + 28) = this->fields.nexttpturn;
  *(_DWORD *)(v5 + 32) = this->fields.isEntry;
  *(_DWORD *)(v5 + 36) = this->fields.isDeadAnime;
  aiState = this->fields.aiState;
  if ( !aiState )
    goto LABEL_34;
  SaveData = (System_Int32_array **)AiState__getSaveData(aiState, 0LL);
  *(_QWORD *)(v5 + 56) = SaveData;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 56), SaveData, v9, v10, v11, v12, v13, v14);
  aiState = (AiState_o *)BattleServantData__get_AiStateManager(this, v15);
  if ( !aiState )
    goto LABEL_34;
  v16 = (System_Int32_array **)AiStateManager__GetSaveData((AiStateManager_o *)aiState, 0LL);
  *(_QWORD *)(v5 + 192) = v16;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 192), v16, v17, v18, v19, v20, v21, v22);
  aiState = (AiState_o *)this->fields.buffData;
  if ( !aiState )
    goto LABEL_34;
  v23 = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)aiState, 0LL);
  *(_QWORD *)(v5 + 64) = v23;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 64), v23, v24, v25, v26, v27, v28, v29);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_34;
  v31 = (System_Int32_array **)sub_B706AC(int___TypeInfo, (unsigned int)skillInfoList->fields._size);
  *(_QWORD *)(v5 + 40) = v31;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), v31, v32, v33, v34, v35, v36, v37);
  v38 = this->fields.skillInfoList;
  if ( !v38 )
    goto LABEL_34;
  v39 = (System_Int32_array **)sub_B706AC(int___TypeInfo, (unsigned int)v38->fields._size);
  *(_QWORD *)(v5 + 48) = v39;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 48), v39, v40, v41, v42, v43, v44, v45);
  v52 = this->fields.skillInfoList;
  if ( !v52 )
    goto LABEL_34;
  v53 = 0LL;
  while ( 1 )
  {
    size = v52->fields._size;
    if ( (int)v53 >= size )
      break;
    if ( size <= (unsigned int)v53 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v55 = (__int64)v52->fields._items + 8 * v53;
    v56 = *(BattleSkillInfoData_o **)(v55 + 32);
    if ( v56 )
    {
      v57 = *(_QWORD *)(v5 + 40);
      aiState = (AiState_o *)BattleSkillInfoData__getInfoId(*(BattleSkillInfoData_o **)(v55 + 32), 0LL);
      if ( v57 )
      {
        if ( (unsigned int)v53 >= *(_DWORD *)(v57 + 24) )
          goto LABEL_35;
        *(_DWORD *)(v57 + 4 * v53 + 32) = (_DWORD)aiState;
        v58 = *(_QWORD *)(v5 + 48);
        aiState = (AiState_o *)BattleSkillInfoData__getChargeTurn(v56, 0LL);
        if ( v58 )
        {
          if ( (unsigned int)v53 >= *(_DWORD *)(v58 + 24) )
          {
LABEL_35:
            v88 = sub_B70798(aiState);
            sub_B70738(v88, 0LL);
          }
          *(_DWORD *)(v58 + 4 * v53 + 32) = (_DWORD)aiState;
          v52 = this->fields.skillInfoList;
          ++v53;
          if ( v52 )
            continue;
        }
      }
    }
    goto LABEL_34;
  }
  *(_DWORD *)(v5 + 116) = this->fields.shiftNpcId;
  *(_QWORD *)(v5 + 120) = this->fields.beforeUserSvtId;
  *(_DWORD *)(v5 + 76) = this->fields.transformIndex;
  *(_DWORD *)(v5 + 172) = this->fields.transformLimitCount;
  *(_DWORD *)(v5 + 80) = this->fields.dressDispId;
  *(_DWORD *)(v5 + 84) = this->fields.accumulationDamage;
  statestring = (System_Int32_array **)this->fields.statestring;
  *(_QWORD *)(v5 + 88) = statestring;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 88), statestring, v46, v47, v48, v49, v50, v51);
  *(_DWORD *)(v5 + 96) = this->fields.summonNpcId;
  *(_DWORD *)(v5 + 100) = this->fields.uniqueId;
  *(_DWORD *)(v5 + 104) = this->fields.shiftDeckIndex;
  *(_DWORD *)(v5 + 108) = this->fields.changeSvtIndex;
  *(_DWORD *)(v5 + 132) = this->fields.lowLimitShift;
  *(_BYTE *)(v5 + 112) = this->fields.isSleepWaitMode;
  *(_BYTE *)(v5 + 128) = this->fields.IsAlreadyDrop;
  *(_DWORD *)(v5 + 136) = this->fields.playedNPCount;
  *(_DWORD *)(v5 + 156) = this->fields.maxDefeatPoint;
  *(_DWORD *)(v5 + 140) = this->fields.defeatPoint;
  *(_DWORD *)(v5 + 144) = this->fields.befSquareIndex;
  *(_DWORD *)(v5 + 148) = this->fields.aftSquareIndex;
  *(_BYTE *)(v5 + 152) = this->fields.isAppliedHaveStars;
  *(_DWORD *)(v5 + 160) = this->fields.squareEffectSkillId;
  *(_DWORD *)(v5 + 164) = this->fields.squareEffectSkillLv;
  *(_DWORD *)(v5 + 168) = this->fields.deadtype;
  *(_DWORD *)(v5 + 200) = this->fields.tdErrorTouchCount;
  *(_BYTE *)(v5 + 204) = this->fields.flgEntryFunction;
  commandAssistIds = (System_Int32_array **)this->fields.commandAssistIds;
  *(_QWORD *)(v5 + 208) = commandAssistIds;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 208), commandAssistIds, v61, v62, v63, v64, v65, v66);
  if ( !data || (aiState = (AiState_o *)data->fields.perf) == 0LL )
LABEL_34:
    sub_B7076C(aiState, v7);
  BattlePerformance__SetActorPartAnimationData((BattlePerformance_o *)aiState, this->fields.uniqueId, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.partAnimationSaveDict, 0LL) )
  {
    partAnimationSaveDict = this->fields.partAnimationSaveDict;
    v68 = BattleServantData___c_TypeInfo;
    if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v68 = BattleServantData___c_TypeInfo;
    }
    static_fields = v68->static_fields;
    _9__281_0 = (System_Func_KeyValuePair_string__object___string__o *)static_fields->__9__281_0;
    if ( !_9__281_0 )
    {
      if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68);
        static_fields = BattleServantData___c_TypeInfo->static_fields;
      }
      v71 = (Il2CppObject *)static_fields->__9;
      _9__281_0 = (System_Func_KeyValuePair_string__object___string__o *)sub_B70764(System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__TypeInfo);
      System_Func_KeyValuePair_string__object___string____ctor(
        _9__281_0,
        v71,
        Method_BattleServantData___c__getSaveData_b__281_0__,
        (const MethodInfo_299EFF4 *)Method_System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___ctor__);
      v72 = BattleServantData___c_TypeInfo->static_fields;
      v72->__9__281_0 = (struct System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__o *)_9__281_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v72->__9__281_0,
        (System_Int32_array **)_9__281_0,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)partAnimationSaveDict,
                                                                 (System_Func_TSource__TResult__o *)_9__281_0,
                                                                 (const MethodInfo_1CC1444 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___);
    v80 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v79,
                                   (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleServantData_PartAnimationSaveData___);
    *(_QWORD *)(v5 + 216) = v80;
    sub_B70630((BattleServantConfConponent_o *)(v5 + 216), v80, v81, v82, v83, v84, v85, v86);
  }
  return (BattleServantData_SaveData_o *)v5;
}


System_String_o *__fastcall BattleServantData__getSaveDataToString(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19

  if ( (byte_434F61B & 1) == 0 )
  {
    sub_B70694(&JsonManager_TypeInfo);
    byte_434F61B = 1;
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


BattleSkillInfoData_o *__fastcall BattleServantData__getSelfSkillInfo(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass399_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_434F64D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
    sub_B70694(&Method_System_Predicate_BattleSkillInfoData___ctor__);
    sub_B70694(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass399_0__getSelfSkillInfo_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass399_0_TypeInfo);
    byte_434F64D = 1;
  }
  v5 = (BattleServantData___c__DisplayClass399_0_o *)sub_B70764(BattleServantData___c__DisplayClass399_0_TypeInfo);
  BattleServantData___c__DisplayClass399_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleSkillInfoData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass399_0__getSelfSkillInfo_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B7076C(v6, v7);
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
}


System_Int32_array *__fastcall BattleServantData__getServantCommandIndividuality(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  struct System_Collections_Hashtable_o *commandtable; // x21
  __int64 v6; // x2
  struct System_Collections_Hashtable_o *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x9
  BattleServantData_o *v11; // x0
  const MethodInfo *v12; // x1
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_434F675 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&int_TypeInfo);
    this = (BattleServantData_o *)sub_B70694(&ServantCardEntity_TypeInfo);
    byte_434F675 = 1;
  }
  if ( !command )
    goto LABEL_13;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type, v6);
  if ( !commandtable )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  v7 = v4->fields.commandtable;
  v13 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v8);
  if ( !v7
    || (this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v7->klass->vtable._29_get_Item.method)(
                                        v7,
                                        this,
                                        v7->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_B7076C(this, command);
  }
  v9 = *(&ServantCardEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[v9 - 1] == ServantCardEntity_TypeInfo )
  {
    return *(System_Int32_array **)&this->fields.exceedCount.fields.currentCryptoKey;
  }
  v11 = (BattleServantData_o *)sub_B70A60(this);
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

  if ( (byte_434F63D & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F63D = 1;
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
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL);
    if ( !svtdata )
      sub_B7076C(v7, v8);
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
  struct BattleDeckServantData_o *deckSvt; // x8
  ServantEntity_o *v6; // x20
  const MethodInfo *v7; // x2
  int32_t DispLimitCount; // w0
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w19
  int32_t v12; // w21
  int32_t LimitCountByDispLimit; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = this;
  if ( (byte_434F626 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&ImageLimitCount_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&OptionManager_TypeInfo);
    this = (BattleServantData_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F626 = 1;
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
  this = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                        svtId,
                                        (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_B7076C(this, *(_QWORD *)&svtId);
  }
  v6 = (ServantEntity_o *)this;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL) )
    return 0LL;
  DispLimitCount = BattleServantData__getDispLimitCount(v4, 0, v7);
  v10 = *(_QWORD *)&v4->fields.limitcount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v4->fields.limitcount.fields.fakeValue;
  v11 = DispLimitCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v15, 0LL);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v11, v12, 0LL);
  return ServantEntity__getName(v6, LimitCountByDispLimit, -1, 0LL);
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
      sub_B7076C(DispLimitCount, v8);
    return ServantEntity__getBattleName(svtdata, battleVoice != 0, DispLimitCount, 0LL);
  }
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getShortenUserEquipSkill(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  bool IsConstantMasterIndvAddBuffActive; // w0
  BattleBuffData_o *buffData; // x20
  bool v5; // w22
  BattleBuffData_CheckIndividualitiesData_o *v6; // x0
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21
  BattleServantData_o *v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_434F664 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F664 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  buffData = this->fields.buffData;
  v5 = IsConstantMasterIndvAddBuffActive;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  v7 = v6;
  if ( v5 )
    v8 = this;
  else
    v8 = 0LL;
  BattleBuffData_CheckIndividualitiesData___ctor(v6, v8, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getBuffList_31751548(buffData, 85, v7, 1, 0, 0LL, 0LL);
}


SkillLvEntity_o *__fastcall BattleServantData__getSkillFromBuff(
        SkillLvMaster_o *skillLvMst,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  SkillLvMaster_o *v4; // x20
  struct System_Int32_array *vals; // x8
  __int64 v7; // x0

  v4 = skillLvMst;
  if ( (byte_434F667 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    skillLvMst = (SkillLvMaster_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F667 = 1;
  }
  if ( !v4 )
  {
    skillLvMst = (SkillLvMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillLvMst )
      goto LABEL_11;
    skillLvMst = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)skillLvMst,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v4 = skillLvMst;
  }
  if ( !buff )
    goto LABEL_11;
  vals = buff->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( vals->max_length < 2 )
  {
    v7 = sub_B70798(skillLvMst);
    sub_B70738(v7, 0LL);
  }
  if ( !v4 )
LABEL_11:
    sub_B7076C(skillLvMst, buff);
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

  if ( (byte_434F6C1 & 1) == 0 )
  {
    sub_B70694(&bool___TypeInfo);
    byte_434F6C1 = 1;
  }
  BuffParamList = (BattleBuffData_o *)sub_B706AC(bool___TypeInfo, 3LL);
  if ( !this->fields.buffData
    || (v5 = (System_Boolean_array *)BuffParamList,
        (BuffParamList = (BattleBuffData_o *)BattleBuffData__getBuffParamList(this->fields.buffData, 99, this, 0LL)) == 0LL) )
  {
LABEL_21:
    sub_B7076C(BuffParamList, v4);
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
    v12 = sub_B70798(BuffParamList);
    sub_B70738(v12, 0LL);
  }
  return v5;
}


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

  if ( (byte_434F6C2 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6C2 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData || (SkillSealSelectTurnList = BattleBuffData__getSkillSealSelectTurnList(buffData, v6, 0LL)) == 0LL )
    sub_B7076C(SkillSealSelectTurnList, v8);
  if ( SkillSealSelectTurnList->max_length <= index )
  {
    v10 = sub_B70798(SkillSealSelectTurnList);
    sub_B70738(v10, 0LL);
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

  if ( (byte_434F6C0 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6C0 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 40, v4, 0, 0LL),
        v8 = this->fields.buffData,
        v9 = isTurnBuff,
        v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v10, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v8) )
  {
    sub_B7076C(v5, v6);
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

  if ( (byte_434F65B & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F65B = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v5, v6);
  return BattleBuffData__getBuffList_31751548(buffData, 54, v4, 1, 0, 0LL, 0LL);
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
    sub_B7076C(this, method);
  return svtlimitDispent->fields.stepProbability;
}


System_String_o *__fastcall BattleServantData__getStrParam(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B7076C(this, method);
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
    sub_B7076C(0LL, index);
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
  if ( (byte_434F637 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F637 = 1;
  }
  svtdata = v2->fields.svtdata;
  if ( !svtdata )
    sub_B7076C(this, method);
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v7, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getTTurnEndBufflist(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_434F65A & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F65A = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v5, v6);
  return BattleBuffData__getBuffList_31751548(buffData, 55, v4, 1, 0, 0LL, 0LL);
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

  if ( (byte_434F663 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F663 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v5, v6);
  return BattleBuffData__getBuffList_31751548(buffData, 86, v4, 1, 0, 0LL, 0LL);
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

  if ( (byte_434F665 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_BuffData_TypeInfo);
    byte_434F665 = 1;
  }
  v3 = BattleServantData__getTdTypeChangeBuff(this, method);
  v4 = (BattleBuffData_BuffData_o *)sub_B70764(BattleBuffData_BuffData_TypeInfo);
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
        v11 = sub_B70798(v5);
        sub_B70738(v11, 0LL);
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
    sub_B7076C(v5, v6);
  }
LABEL_12:
  if ( v4->fields.addOrder == -1 )
    return 0LL;
  else
    return v4;
}


BattleSkillInfoData_o *__fastcall BattleServantData__getTempSkillInfo(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass400_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_434F64E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
    sub_B70694(&Method_System_Predicate_BattleSkillInfoData___ctor__);
    sub_B70694(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass400_0__getTempSkillInfo_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass400_0_TypeInfo);
    byte_434F64E = 1;
  }
  v5 = (BattleServantData___c__DisplayClass400_0_o *)sub_B70764(BattleServantData___c__DisplayClass400_0_TypeInfo);
  BattleServantData___c__DisplayClass400_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleSkillInfoData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass400_0__getTempSkillInfo_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B7076C(v6, v7);
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                    (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
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
    sub_B7076C(0LL, v3);
  return SvtTDvc->fields.cardId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getTreasureDvcCardId_20649316(
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
    sub_B7076C(this, useTDTypeChangedValue);
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
    sub_B7076C(0LL, v3);
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
    sub_B7076C(LimitCount, v8);
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
    sub_B7076C(0LL, v3);
  return SvtTDvc->fields.motion;
}


System_String_o *__fastcall BattleServantData__getTreasureDvcName(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0
  __int64 v5; // x1
  System_String_o **p_name; // x8

  if ( (byte_434F650 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434F650 = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_B7076C(0LL, v5);
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

  if ( (byte_434F651 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434F651 = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_B7076C(0LL, v5);
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

  if ( (byte_434F695 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F695 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getActMag_31764796(buffData, 3, v8, 0LL);
}


int32_t __fastcall BattleServantData__getUpDownCriticalRate(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x23
  BattleServantData_o *v10; // x24
  BattleBuffData_CheckIndividualitiesData_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_434F6A1 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6A1 = 1;
  }
  buffData = this->fields.buffData;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
    v10 = opSvt;
  else
    v10 = 0LL;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, v10, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v12, v13);
  return BattleBuffData__getActValue_31763724(buffData, 46, missText, v11, 0LL);
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

  if ( (byte_434F6AE & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6AE = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getActMag_31764796(buffData, 25, v8, 0LL);
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
  if ( (byte_434F696 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F696 = 1;
  }
  if ( !targetSvt
    || (v9 = BattleServantData__checkPierceDefence(targetSvt, command, v8, (const MethodInfo *)pierce),
        buffData = v8->fields.buffData,
        v11 = v9,
        v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v12, v8, targetSvt, 0LL, command, 0LL, 0LL),
        !buffData) )
  {
    sub_B7076C(this, command);
  }
  if ( v11 || pierce )
    v13 = 5;
  else
    v13 = 4;
  return BattleBuffData__getActMag_31764796(buffData, v13, v12, 0LL);
}


float __fastcall BattleServantData__getUpDownDropNp(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        bool isAttack,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_434F6AD & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6AD = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    command = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, command, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v11, v12);
  return BattleBuffData__getActMag_31764796(buffData, 24, v10, 0LL);
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

  if ( (byte_434F6A4 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6A4 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
  return BattleBuffData__getActMag_31764796(buffData, 56, v6, 0LL);
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

  if ( (byte_434F6B0 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6B0 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getActMag_31764796(buffData, 67, v8, 0LL);
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

  if ( (byte_434F6A5 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6A5 = 1;
  }
  *digit = 1000;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
  return BattleBuffData__getActValue_31763688(buffData, 70, v6, 0LL);
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

  if ( (byte_434F6A3 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6A3 = 1;
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
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B7076C(v10, v11);
  return BattleBuffData__getActValue_31763688(buffData, 34, v9, 0LL);
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

  if ( (byte_434F697 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F697 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getActMag_31764796(buffData, 6, v8, 0LL);
}


float __fastcall BattleServantData__getUpdownCriticalAtk(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  BattleBuffData_o *buffData; // x22
  BuffList_ActInfo_o *v9; // x23
  BattleBuffData_CheckIndividualitiesData_o *v10; // x24
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_434F69A & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F69A = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(11, targetSvt, 0LL);
  buffData = this->fields.buffData;
  v9 = ActInfo;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_B7076C(v11, v12);
  return BattleBuffData__getActMag_31764736(buffData, v9, v10, 0LL);
}


float __fastcall BattleServantData__getUpdownDropStar(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        bool isAttack,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_434F69F & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F69F = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    command = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, command, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v11, v12);
  return BattleBuffData__getActMag_31764796(buffData, 28, v10, 0LL);
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

  if ( (byte_434F69D & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F69D = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getActMag_31764796(buffData, 12, v8, 0LL);
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
  int32_t ActValue_31763688; // w23
  const MethodInfo *v19; // x4
  System_Int32_array **BuffIndividualities; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleBuffData_o *v27; // x8

  if ( (byte_434F698 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F698 = 1;
  }
  v7 = sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
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
  buffData = (BattleBuffData_o *)BattleBuffData__getActValue_31763688(
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
  sub_B70630((BattleServantConfConponent_o *)(v7 + 56), (System_Int32_array **)buffData, v12, v13, v14, v15, v16, v17);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActValue_31763688 = BattleBuffData__getActValue_31763688(
                              buffData,
                              8,
                              (BattleBuffData_CheckIndividualitiesData_o *)v7,
                              0LL),
        BuffIndividualities = (System_Int32_array **)BattleServantData__getBuffIndividualities(targetSvt, 1, 0, 0, v19),
        *(_QWORD *)(v7 + 56) = BuffIndividualities,
        sub_B70630((BattleServantConfConponent_o *)(v7 + 56), BuffIndividualities, v21, v22, v23, v24, v25, v26),
        (buffData = this->fields.buffData) == 0LL)
    || (buffData = (BattleBuffData_o *)BattleBuffData__getActValue_31763688(
                                         buffData,
                                         9,
                                         (BattleBuffData_CheckIndividualitiesData_o *)v7,
                                         0LL),
        (v27 = this->fields.buffData) == 0LL) )
  {
LABEL_10:
    sub_B7076C(buffData, v8);
  }
  return (float)(ActValue_31763688
               + v11
               + (int)buffData
               + BattleBuffData__getActValue_31763688(v27, 78, (BattleBuffData_CheckIndividualitiesData_o *)v7, 0LL))
       / 1000.0;
}


float __fastcall BattleServantData__getUpdownPowerSpecial(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  bool IsConstantMasterIndvAddBuffActive; // w23
  __int64 v8; // x21
  System_Int32_array *BuffIndividualities; // x0
  System_Int32_array **v10; // x1
  const MethodInfo *v11; // x4
  MethodInfo *v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_434F699 & 1) == 0 )
  {
    sub_B70694(&BuffList_TypeInfo);
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F699 = 1;
  }
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v8 = sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(
    (BattleBuffData_CheckIndividualitiesData_o *)v8,
    this,
    targetSvt,
    command,
    0LL,
    0LL,
    0LL);
  if ( !targetSvt )
    goto LABEL_13;
  BuffIndividualities = BattleServantData__getBuffIndividualities(targetSvt, 0, 0, 0, v11);
  v10 = (System_Int32_array **)BuffIndividualities;
  if ( IsConstantMasterIndvAddBuffActive )
  {
    BuffIndividualities = BattleServantData__getIndividualities_20739892(targetSvt, BuffIndividualities, v12);
    if ( !v8 )
      goto LABEL_13;
    v10 = (System_Int32_array **)BuffIndividualities;
  }
  else if ( !v8 )
  {
    goto LABEL_13;
  }
  *(_QWORD *)(v8 + 56) = v10;
  sub_B70630((BattleServantConfConponent_o *)(v8 + 56), v10, (System_String_array **)v12, v13, v14, v15, v16, v17);
  BuffIndividualities = (System_Int32_array *)this->fields.buffData;
  if ( !BuffIndividualities )
LABEL_13:
    sub_B7076C(BuffIndividualities, v10);
  return (float)BattleBuffData__getActValue_31763688(
                  (BattleBuffData_o *)BuffIndividualities,
                  79,
                  (BattleBuffData_CheckIndividualitiesData_o *)v8,
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

  if ( (byte_434F69E & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F69E = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v9, v10);
  return BattleBuffData__getActMag_31764796(buffData, 10, v8, 0LL);
}


int64_t __fastcall BattleServantData__getUserSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  __int128 v3; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-30h]

  if ( (byte_434F636 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_434F636 = 1;
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
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45183140(&v5, 0LL);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(svtlimitaddent, isEffect);
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

  if ( (byte_434F6CE & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_434F6CE = 1;
  }
  result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
  svtdata = this->fields.svtdata;
  if ( !svtdata || !result )
    sub_B7076C(result, v4);
  if ( !result->max_length )
  {
    v6 = sub_B70798(result);
    sub_B70738(v6, 0LL);
  }
  result->m_Items[1] = svtdata->fields.attackAttri;
  return result;
}


int32_t __fastcall BattleServantData__getWeaponScale(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_B7076C(this, method);
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

  if ( (byte_434F60D & 1) == 0 )
  {
    sub_B70694(&AiStateManager_TypeInfo);
    byte_434F60D = 1;
  }
  aiStateManager = this->fields._aiStateManager;
  if ( !aiStateManager )
  {
    aiState = this->fields.aiState;
    aiStateManager = (AiStateManager_o *)sub_B70764(AiStateManager_TypeInfo);
    AiStateManager___ctor(aiStateManager, aiState, 0LL);
    this->fields._aiStateManager = aiStateManager;
    sub_B70630(
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
    sub_B7076C(this, method);
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

  if ( (byte_434F613 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_TypeInfo);
    byte_434F613 = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
  {
    p_buffData = (BattleServantConfConponent_o *)&this->fields.buffData;
    buffData = (BattleBuffData_o *)sub_B70764(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(buffData, 0LL);
    p_buffData->klass = (BattleServantConfConponent_c *)buffData;
    sub_B70630(p_buffData, (System_Int32_array **)buffData, v5, v6, v7, v8, v9, v10);
  }
  return buffData;
}


int32_t __fastcall BattleServantData__get_CriticalIndividuality(const MethodInfo *method)
{
  BattleServantData_c *v1; // x0
  int32_t Value; // w0
  BattleServantData_c *v3; // x8
  int32_t v4; // w19

  if ( (byte_434F6C8 & 1) == 0 )
  {
    sub_B70694(&BattleServantData_TypeInfo);
    sub_B70694(&StringLiteral_3514/*"CRITICAL_INDIVIDUALITY"*/);
    byte_434F6C8 = 1;
  }
  v1 = BattleServantData_TypeInfo;
  if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
    v1 = BattleServantData_TypeInfo;
  }
  if ( !v1->static_fields->_CriticalIndividuality )
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_3514/*"CRITICAL_INDIVIDUALITY"*/, 0LL);
    v3 = BattleServantData_TypeInfo;
    v4 = Value;
    if ( (BYTE3(BattleServantData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData_TypeInfo);
      v3 = BattleServantData_TypeInfo;
    }
    v3->static_fields->_CriticalIndividuality = v4;
    v1 = BattleServantData_TypeInfo;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = BattleServantData_TypeInfo;
  }
  return v1->static_fields->_CriticalIndividuality;
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

  if ( (byte_434F64B & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F64B = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData
    && (v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo),
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
    sub_B7076C(0LL, method);
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

  if ( (byte_434F60F & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F60F = 1;
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
            sub_B7076C(LimitCount, v9);
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
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL);
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
      v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v22, 0LL);
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
      sub_B7076C(LimitCount, v9);
    }
  }
  return this->fields._TDvcLv;
}


TreasureDvcMaster_o *__fastcall BattleServantData__get_TdDataMasterBase(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  TreasureDvcMaster_o *result; // x0
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  BattleServantConfConponent_o *p_tdDataMasterBase; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_434F611 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F611 = 1;
  }
  result = this->fields.tdDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v5);
    p_tdDataMasterBase = (BattleServantConfConponent_o *)&this->fields.tdDataMasterBase;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    p_tdDataMasterBase->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B70630(p_tdDataMasterBase, MasterData_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
    return (TreasureDvcMaster_o *)p_tdDataMasterBase->klass;
  }
  return result;
}


TreasureDvcLvMaster_o *__fastcall BattleServantData__get_TdLvDataMasterBase(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  TreasureDvcLvMaster_o *result; // x0
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  BattleServantConfConponent_o *p_tdLvDataMasterBase; // x19
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_434F612 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F612 = 1;
  }
  result = this->fields.tdLvDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7076C(0LL, v5);
    p_tdLvDataMasterBase = (BattleServantConfConponent_o *)&this->fields.tdLvDataMasterBase;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    p_tdLvDataMasterBase->klass = (BattleServantConfConponent_c *)MasterData_WarQuestSelectionMaster;
    sub_B70630(p_tdLvDataMasterBase, MasterData_WarQuestSelectionMaster, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_434F610 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    byte_434F610 = 1;
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
                                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
                }
              }
            }
          }
LABEL_18:
          sub_B7076C(LimitCount, selectedTDId);
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
                                            (const MethodInfo_21C0440 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
    sub_B7076C(0LL, method);
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
  int32_t MaxHp; // w21
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  __int64 v11; // x1
  bool isTurnBuff; // w8
  bool result; // w0
  int v14; // w22
  int v15; // w0
  int v16; // w8
  Il2CppObject *current; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F67F & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_17537/*"changeHp"*/);
    byte_434F67F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  MaxHp = BattleServantData__getMaxHp(this, *(const MethodInfo **)&heal);
  if ( !isForce )
  {
    buffData = this->fields.buffData;
    v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_20;
    isTurnBuff = BattleBuffData__isTurnBuff(buffData, 42, v9, 0, 0LL);
    result = 0;
    if ( isTurnBuff )
      return result;
  }
  v14 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  v15 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    (unsigned int)(v15 + heal),
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
  v16 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  paramobjelist = this->fields.paramobjelist;
  this->fields.accumulationDamage = (this->fields.accumulationDamage + v14 - v16) & ~((this->fields.accumulationDamage
                                                                                     + v14
                                                                                     - v16) >> 31);
  if ( !paramobjelist )
LABEL_20:
    sub_B7076C(paramobjelist, v11);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B7076C(v18, v19);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17537/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_434F678 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F678 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v5, v6);
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
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x5
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  System_Int32_array *Individualities; // x0
  System_Int32_array_array *signedTargetsArray; // [xsp+0h] [xbp-30h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-28h] BYREF

  signedTargetsArray = 0LL;
  isAlive = BattleServantData__isAlive(this, 0, (const MethodInfo *)indiv);
  if ( !isAlive )
  {
    buff = 0LL;
    isAlive = BattleServantData__isGuts_20724968(this, &buff, v11);
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
  isAlive = AiBaseEntity__TryGetMultiIndividuality(aiBaseEnt, &signedTargetsArray, 0LL);
  if ( isAlive )
  {
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             this,
                                             0LL,
                                             0,
                                             0,
                                             0,
                                             v13);
    return Individuality__CheckSignedMultiIndividuality(ConcatServantAndBuffIndividualityies, signedTargetsArray, 0LL);
  }
  if ( !info )
LABEL_16:
    sub_B7076C(isAlive, v10);
  if ( info->fields.isIndiv )
  {
    Individualities = BattleServantData__getIndividualities(this, 0LL, v12);
    return Individuality__CheckIndividualities_27796092(Individualities, indiv, 0LL);
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
  const MethodInfo *v6; // x2
  struct System_Int32_array *shiftDeckList; // x8
  const MethodInfo *v8; // x1
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-18h] BYREF

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
    buff = 0LL;
    if ( BattleServantData__isGuts_20724968(this, &buff, v6)
      || isCheckDefeatPoint && BattleServantData__getDefeatPoint(this, v8) > 0 )
    {
      return 1;
    }
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

  if ( (byte_434F6BC & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6BC = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, command, 0LL, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B7076C(0LL, v12);
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

  if ( (byte_434F6BD & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6BD = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B7076C(0LL, v12);
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

  if ( (byte_434F679 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F679 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, commandType, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
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
    sub_B7076C(0LL, method);
  ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
  return BattleServantData__isChangeAppearanceBuff(this, ActiveList, v6);
}


bool __fastcall BattleServantData__isChangeAppearanceBuff(
        BattleServantData_o *this,
        BattleBuffData_BuffData_array *list,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x21
  il2cpp_array_size_t v9; // w22
  Il2CppClass **v10; // x23
  char *v11; // x23
  DataManager_o *v12; // t1
  int32_t v13; // w8
  int32_t AppearanceId; // w0
  __int64 v16; // x0

  if ( (byte_434F6E2 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F6E2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !list )
    goto LABEL_21;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        goto LABEL_22;
      v10 = &list->obj.klass + (int)v9;
      v12 = (DataManager_o *)v10[4];
      v11 = (char *)(v10 + 4);
      Instance = v12;
      if ( !v12 )
        goto LABEL_21;
      Instance = (DataManager_o *)BattleBuffData_BuffData__checkState((BattleBuffData_BuffData_o *)Instance, 256, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      max_length = list->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_11;
    }
    if ( v9 >= list->max_length )
    {
LABEL_22:
      v16 = sub_B70798(Instance);
      sub_B70738(v16, 0LL);
    }
    if ( *(_QWORD *)v11 )
    {
      if ( v8 )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      *(_DWORD *)(*(_QWORD *)v11 + 16LL),
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
    sub_B7076C(Instance, v6);
  }
LABEL_11:
  v13 = this->fields.appearanceId;
  if ( v13 >= 1 )
    this->fields.tmpAppearanceId = 0;
  return v13 > 0;
}


bool __fastcall BattleServantData__isChangeServant(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *changeSvtList; // x8

  changeSvtList = this->fields.changeSvtList;
  if ( !changeSvtList )
    sub_B7076C(this, method);
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


bool __fastcall BattleServantData__isGainNp(BattleServantData_o *this, bool checkCount, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_434F6AF & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F6AF = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
  return !BattleBuffData__isTurnBuff(buffData, 75, v6, checkCount, 0LL);
}


bool __fastcall BattleServantData__isGuts(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-8h] BYREF

  buff = 0LL;
  return BattleServantData__isGuts_20724968(this, &buff, v2);
}


bool __fastcall BattleServantData__isGuts_20724968(
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
  sub_B70630((BattleServantConfConponent_o *)buff, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( this->fields.isDeadAnime || this->fields.isSystemDead )
    return 0;
  buffData = this->fields.buffData;
  v13 = BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(this, v10);
  if ( !buffData )
    sub_B7076C(v13, v14);
  return BattleBuffData__isGuts(buffData, buff, v13, 0LL);
}


bool __fastcall BattleServantData__isHeroine(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_B7076C(0LL, method);
  return ServantEntity__checkIsHeroineSvt(svtdata, 0LL);
}


bool __fastcall BattleServantData__isJustHit(BattleServantData_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleServantData__isLogicDeadAndNoRevive(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-8h] BYREF

  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    buff = 0LL;
    return !BattleServantData__isGuts_20724968(this, &buff, v3);
  }
  else
  {
    return 0;
  }
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
    sub_B7076C(0LL, method);
  return ServantEntity__IsNameTrue(svtdata, 0LL);
}


bool __fastcall BattleServantData__isNobleAction(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t invokeAct; // [xsp+Ch] [xbp-4h] BYREF

  invokeAct = 0;
  return BattleServantData__isNobleAction_20729088(this, &invokeAct, v2);
}


bool __fastcall BattleServantData__isNobleAction_20729088(
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

  if ( (byte_434F67B & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F67B = 1;
  }
  buffData = this->fields.buffData;
  TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, method);
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, TreasureDvcCommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v6, v7);
  return BattleBuffData__isTurnBuff(buffData, 82, v5, 0, 0LL);
}


bool __fastcall BattleServantData__isNobleSeal(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_434F67A & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F67A = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v5, v6);
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
    sub_B7076C(this, method);
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
    sub_B7076C(0LL, effectId);
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
    sub_B7076C(TDvcLv, v5);
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
    sub_B7076C(this, targetRarityList);
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
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434F66F & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434F66F = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_24123036(v6, this, 0LL, 0LL, opSvtIndiv, 0LL, 0LL);
  if ( !buffData )
    sub_B7076C(v7, v8);
  return BattleBuffData__checkActBuff_31767764(buffData, 45, v6, &usedBuff, 0LL);
}


bool __fastcall BattleServantData__isUseSelfSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  BattleServantData___c__DisplayClass398_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20
  peRenderTexture_ChangeLayerObject_o *v10; // x0

  if ( (byte_434F64C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
    sub_B70694(&Method_System_Predicate_BattleSkillInfoData___ctor__);
    sub_B70694(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass398_0__isUseSelfSkill_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass398_0_TypeInfo);
    byte_434F64C = 1;
  }
  v5 = (BattleServantData___c__DisplayClass398_0_o *)sub_B70764(BattleServantData___c__DisplayClass398_0_TypeInfo);
  BattleServantData___c__DisplayClass398_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.index = index,
        skillInfoList = this->fields.skillInfoList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleSkillInfoData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass398_0__isUseSelfSkill_b__0__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleSkillInfoData___ctor__),
        !skillInfoList) )
  {
    sub_B7076C(v6, v7);
  }
  v10 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)skillInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
  if ( v10 )
  {
    if ( BYTE4(v10->fields.renderer) )
      LOBYTE(v10) = 0;
    else
      LOBYTE(v10) = *((_BYTE *)&v10->fields.prevLayer + 4) != 0;
  }
  return (char)v10;
}


void __fastcall BattleServantData__loadTransformServant(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6
  int32_t transformIndex; // w2

  transformIndex = this->fields.transformIndex;
  if ( (transformIndex & 0x80000000) == 0 || (this->fields.shiftNpcId & 0x80000000) == 0 )
    BattleServantData__setTransformServant(this, data, transformIndex, this->fields.transformLimitCount, 1, 0LL, v3);
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
    sub_B7076C(0LL, method);
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

  if ( (byte_434F6CF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__);
    byte_434F6CF = 1;
  }
  actionHistory = this->fields.actionHistory;
  if ( !actionHistory )
    sub_B7076C(0LL, method);
  System_Collections_Generic_LinkedList_WebOperation___Clear(
    (System_Collections_Generic_LinkedList_WebOperation__o *)actionHistory,
    (const MethodInfo_2EBB8EC *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__);
}


void __fastcall BattleServantData__resetParamObject(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0

  if ( (byte_434F66B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Clear__);
    byte_434F66B = 1;
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)paramobjelist,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall BattleServantData__resetReducedHp(BattleServantData_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
    this,
    0LL,
    this->klass->vtable._13_get_resultHp.methodPtr);
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
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F680 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F680 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, funcName);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v9.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        funcName,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__setActionHistory(
        BattleServantData_o *this,
        int32_t actUniqueId,
        int32_t actType,
        int32_t wavecount,
        bool isOpponent,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x1
  struct System_Collections_Generic_LinkedList_BattleServantActionHistory__o *actionHistory; // x0

  if ( (byte_434F6D0 & 1) == 0 )
  {
    sub_B70694(&BattleServantActionHistory_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__);
    byte_434F6D0 = 1;
  }
  v11 = sub_B70764(BattleServantActionHistory_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = actType;
  *(_DWORD *)(v11 + 20) = actUniqueId;
  *(_DWORD *)(v11 + 24) = wavecount;
  *(_BYTE *)(v11 + 28) = isOpponent;
  actionHistory = this->fields.actionHistory;
  if ( !actionHistory )
    sub_B7076C(0LL, v12);
  System_Collections_Generic_LinkedList_WebOperation___AddLast(
    (System_Collections_Generic_LinkedList_WebOperation__o *)actionHistory,
    (System_Net_WebOperation_o *)v11,
    (const MethodInfo_2EBB7A8 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__);
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
    sub_B7076C(this, inDeckSvt);
  UserServantFromID = BattleInfoData__getUserServantFromID((BattleInfoData_o *)this, inDeckSvt->fields.userSvtId, 0LL);
  BattleServantData__setBaseServantData_20682236(
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


void __fastcall BattleServantData__setBaseServantData_20682236(
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
  __int64 v16; // x28
  __int64 Instance; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BaseBattleServantEvent_o *ServantEvent; // x0
  struct BattleDeckServantData_o *v26; // x1
  BaseBattleServantEvent_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x23
  __int128 v36; // q1
  int32_t exceedCount; // w23
  const MethodInfo *v38; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // kr00_16
  struct BattleDeckServantData_o *v40; // x8
  int32_t BattleSvtId; // w23
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct BattleDeckServantData_o *v55; // x8
  struct System_String_o *name; // x1
  int32_t v57; // w0
  const MethodInfo *v58; // x2
  struct System_String_o *ServantOverwriteName; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct BattleDeckServantData_o *v72; // x8
  struct DropInfo_array *dropInfos; // x1
  struct System_Int32_array *individuality; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x23
  struct ServantEntity_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct ServantEntity_o *svtdata; // x8
  ServantLimitMaster_o *v90; // x23
  const MethodInfo *v91; // x1
  int32_t SvtId; // w25
  struct ServantLimitEntity_o *v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  struct ServantEntity_o *v100; // x8
  ServantLimitAddMaster_o *v101; // x24
  __int64 v102; // x25
  __int64 v103; // x26
  int32_t v104; // w26
  const MethodInfo *v105; // x2
  const MethodInfo *v106; // x1
  int32_t v107; // w26
  const MethodInfo *v108; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v110; // x1
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v113; // w1
  ServantLimitMaster_o *v114; // x0
  struct ServantLimitEntity_o *v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  BattleUserServantData_o *UserServantFromID; // x26
  __int64 v123; // x23
  struct BattleUserServantData_array *v124; // x0
  struct BattleUserServantData_array **p_equipList; // x24
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  struct BattleUserServantData_array *equipList; // x20
  il2cpp_array_size_t *p_max_length; // x22
  unsigned __int64 v140; // x21
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x25
  Il2CppClass **v148; // x0
  Il2CppClass **v149; // x8
  __int64 *v150; // x8
  Il2CppClass *v151; // x9
  Il2CppClass *v152; // t1
  __int64 v153; // x8
  int32_t maxhp; // w10
  int32_t equiphp; // w11
  struct System_Int64_array **p_userCommandCodeIds; // x23
  struct System_Int64_array *userCommandCodeIds; // x1
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  System_Int32_array **v164; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v165; // x26
  struct System_Collections_Generic_List_CommandCodeInfo__o **p_commandCodeList_k__BackingField; // x25
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  unsigned __int64 v179; // x20
  __int64 v180; // x26
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_Int32_array **v187; // x1
  System_Int64_array *v188; // x24
  System_Func_long__bool__o *v189; // x21
  struct System_Int32_array **p_commandAssistIds; // x22
  struct System_Int32_array *v191; // x0
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v198; // x21
  struct System_Int32_array *v199; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v200; // x23
  int v201; // w20
  unsigned __int64 v202; // x21
  _BOOL8 v203; // x0
  __int64 v204; // x1
  struct System_Int32_array *v205; // x9
  __int64 v206; // x0
  int v207; // w8
  struct System_Int32_array *commandCardParam; // x1
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  struct System_Int32_array *v215; // x1
  System_Int32_array **BattleSkillIdList; // x0
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  System_Int32_array **v223; // x0
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v230; // x22
  System_Collections_Generic_IEnumerable_T__o *skillInfoList; // x21
  __int64 v232; // x23
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  const MethodInfo *v239; // x2
  __int64 v240; // x9
  int v241; // w8
  __int64 v242; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v243; // x24
  __int64 v244; // x9
  __int64 v245; // x8
  __int64 v246; // x2
  __int64 v247; // x9
  struct BattleUserServantData_array *v248; // x8
  struct BattleUserServantData_array **v249; // x22
  unsigned __int8 v250; // w26
  unsigned __int64 v251; // x20
  int v252; // w27
  unsigned __int64 max_length; // x9
  struct BattleUserServantData_array *v254; // x8
  __int64 v255; // x23
  __int64 v256; // x8
  __int64 v257; // x24
  unsigned __int64 v258; // x26
  __int64 v259; // x22
  struct System_Collections_Generic_List_CommandCodeInfo__o *v260; // x23
  CommandCodeSkillMaster_o *v261; // x22
  unsigned __int64 v262; // x20
  int v263; // w21
  struct System_Collections_Generic_List_CommandCodeInfo__o *v264; // x23
  CommandCodeInfo_o *v265; // x8
  int v266; // w8
  __int64 v267; // x23
  int i; // w26
  __int64 v269; // x8
  struct System_Collections_Generic_List_CommandCodeInfo__o *v270; // x27
  int32_t v271; // w24
  CommandCodeInfo_o *v272; // x8
  const MethodInfo *v273; // x3
  int32_t Value; // w0
  int32_t nplineCount; // w8
  int v276; // w8
  System_Collections_Generic_IEnumerable_TSource__o *TDErrorVoiceSeArray; // x0
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  struct System_Collections_Generic_List_string__o *v284; // x1
  System_Collections_Hashtable_o *v285; // x21
  System_String_array **v286; // x2
  System_String_array **v287; // x3
  System_Boolean_array **v288; // x4
  System_Int32_array **v289; // x5
  System_Int32_array *v290; // x6
  System_Int32_array *v291; // x7
  ServantCardMaster_o *v292; // x23
  __int64 v293; // x24
  unsigned __int64 v294; // x20
  __int64 v295; // x25
  __int64 v296; // x26
  __int64 v297; // x2
  struct System_Collections_Hashtable_o *commandtable; // x25
  __int64 v299; // x0
  __int64 v300; // x27
  __int64 v301; // x28
  __int64 v302; // x26
  BattleDeckServantData_o *v303; // x8
  BattleUserServantData_o *v304; // x20
  int32_t KillType; // w0
  BattleDeckServantData_o *v306; // x8
  bool isRaid; // w0
  int32_t RaidId; // w0
  struct System_String_o *StartRaidState; // x0
  System_String_array **v310; // x2
  System_String_array **v311; // x3
  System_Boolean_array **v312; // x4
  System_Int32_array **v313; // x5
  System_Int32_array *v314; // x6
  System_Int32_array *v315; // x7
  BattleDeckServantData_o *v316; // x8
  BattleDeckServantData_o *v317; // x8
  bool isSuperBoss; // w0
  int32_t SuperBossId; // w0
  bool isSendDamageForSuperBossId; // w0
  BattleDeckServantData_o *v321; // x21
  __int64 v322; // x22
  __int64 v323; // x23
  __int64 v324; // x21
  __int64 v325; // x22
  __int64 v326; // x21
  __int64 v327; // x22
  int32_t v328; // w0
  const MethodInfo *v329; // x2
  struct System_String_o *BattleServantOverwriteName; // x0
  System_String_array **v331; // x2
  System_String_array **v332; // x3
  System_Boolean_array **v333; // x4
  System_Int32_array **v334; // x5
  System_Int32_array *v335; // x6
  System_Int32_array *v336; // x7
  struct BattleDeckServantData_o *v337; // x8
  int32_t v338; // w21
  ServantChangeMaster_o *v339; // x22
  ServantChangeEntity_o *v340; // x0
  UserServantCollectionMaster_o *v341; // x22
  __int64 v342; // x21
  __int64 v343; // x22
  __int64 v344; // x23
  System_String_array **v345; // x2
  System_String_array **v346; // x3
  System_Boolean_array **v347; // x4
  System_Int32_array **v348; // x5
  System_Int32_array *v349; // x6
  System_Int32_array *v350; // x7
  struct BattleDeckServantData_o *v351; // x8
  int32_t v352; // w22
  int32_t v353; // w23
  WarQuestSelectionMaster_o *v354; // x0
  __int64 v355; // x23
  __int64 v356; // x24
  UserNpcSvtRecordMaster_o *v357; // x22
  System_Collections_Generic_IEnumerable_TSource__o *TdPlayed; // x0
  struct System_Int32_array *v359; // x1
  struct System_Int32_array *v360; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v361; // x0
  struct System_Int32_array **p_tdplayed; // x0
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  System_String_array **v364; // x2
  System_String_array **v365; // x3
  System_Boolean_array **v366; // x4
  System_Int32_array **v367; // x5
  System_Int32_array *v368; // x6
  System_Int32_array *v369; // x7
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  System_String_array **v371; // x2
  System_String_array **v372; // x3
  System_Boolean_array **v373; // x4
  System_Int32_array **v374; // x5
  System_Int32_array *v375; // x6
  System_Int32_array *v376; // x7
  struct System_Int32_array *classBoardSquareIds; // x1
  System_String_array **v378; // x2
  System_String_array **v379; // x3
  System_Boolean_array **v380; // x4
  System_Int32_array **v381; // x5
  System_Int32_array *v382; // x6
  System_Int32_array *v383; // x7
  const MethodInfo *v384; // x1
  __int64 v385; // x0
  const MethodInfo *v386; // [xsp+0h] [xbp-120h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtdata; // [xsp+20h] [xbp-100h]
  BattleUserServantData_o *v390; // [xsp+28h] [xbp-F8h]
  struct BattleDeckServantData_o **p_deckSvt; // [xsp+30h] [xbp-F0h]
  __int64 v392; // [xsp+38h] [xbp-E8h]
  BattleUserServantData_o *userSvtData; // [xsp+40h] [xbp-E0h]
  unsigned __int8 v394; // [xsp+48h] [xbp-D8h]
  BattleInfoData_o *v395; // [xsp+58h] [xbp-C8h]
  _DWORD v396[9]; // [xsp+80h] [xbp-A0h] BYREF
  int v397; // [xsp+A4h] [xbp-7Ch]
  ServantCardEntity_o *entity; // [xsp+A8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v399; // [xsp+B0h] [xbp-70h] BYREF
  System_RuntimeFieldHandle_o v400; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v401; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v402; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v403; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v404; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v405; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v406; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v407; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v408; // 0:x0.16

  if ( (byte_434F624 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_long___);
    sub_B70694(&BattleData_TypeInfo);
    sub_B70694(&BattleUserServantData___TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantCardMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Concat_int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__get_Current__);
    sub_B70694(&Method_System_Func_long__bool___ctor__);
    sub_B70694(&System_Func_long__bool__TypeInfo);
    sub_B70694(&System_Collections_Hashtable_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_commandAssistData__FindAll__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
    sub_B70694(&Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___69154536);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__);
    sub_B70694(&System_Collections_Generic_List_CommandCodeInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B70694(&Method_System_Predicate_commandAssistData___ctor__);
    sub_B70694(&Method_System_Predicate_BattleSkillInfoData___ctor__);
    sub_B70694(&System_Predicate_commandAssistData__TypeInfo);
    sub_B70694(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A);
    sub_B70694(&Method_BattleServantData___c__DisplayClass299_0__setBaseServantData_b__1__);
    sub_B70694(&BattleServantData___c__DisplayClass299_0_TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass299_1__setBaseServantData_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass299_1_TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass299_2__setBaseServantData_b__2__);
    sub_B70694(&BattleServantData___c__DisplayClass299_2_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_6628/*"FULL_TD_POINT"*/);
    byte_434F624 = 1;
  }
  memset(&v399, 0, sizeof(v399));
  entity = 0LL;
  v397 = 0;
  v16 = sub_B70764(BattleServantData___c__DisplayClass299_0_TypeInfo);
  BattleServantData___c__DisplayClass299_0___ctor((BattleServantData___c__DisplayClass299_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_271;
  *(_QWORD *)(v16 + 16) = inDeckSvt;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)inDeckSvt, v19, v20, v21, v22, v23, v24);
  if ( !battleInfo )
    goto LABEL_271;
  ServantEvent = BattleInfoData__GetServantEvent(battleInfo, 0LL);
  v26 = *(struct BattleDeckServantData_o **)(v16 + 16);
  v27 = ServantEvent;
  p_deckSvt = &this->fields.deckSvt;
  this->fields.deckSvt = v26;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.deckSvt,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_271;
  this->fields.index = deckSvt->fields.id - 1;
  this->fields.uniqueId = deckSvt->fields.uniqueId;
  userSvtId = deckSvt->fields.userSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(
                        (CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)v396,
                        userSvtId,
                        0LL);
  v36 = *(_OWORD *)&v396[4];
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)v396;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = v36;
  if ( !userSvt )
    goto LABEL_271;
  exceedCount = userSvt->fields.exceedCount;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(exceedCount, 0LL);
  v18 = *(_QWORD *)&v39.fields.fakeValue;
  Instance = *(_QWORD *)&v39.fields.currentCryptoKey;
  v40 = this->fields.deckSvt;
  this->fields.exceedCount = v39;
  if ( !v40 )
    goto LABEL_271;
  if ( v40->fields.isFollowerSvt )
    this->fields.followerType = Follower__getType(infollowerType, 0LL);
  BattleServantData__CalculateLimitCountWithSpoilerProtection(this, userSvt, v38);
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
  v42 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.statestring, v42, v43, v44, v45, v46, v47, v48);
  v55 = this->fields.deckSvt;
  this->fields.atktdrate = userSvt->fields.tdAttackRate;
  if ( !v55 )
    goto LABEL_271;
  name = v55->fields.name;
  this->fields.svtName = name;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtName,
    (System_Int32_array **)name,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.overkillTargetId = -1;
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(userSvt->fields.svtId, 0LL);
  ServantOverwriteName = BattleServantData__getServantOverwriteName(this, v57, v58);
  this->fields.svtOverwriteName = ServantOverwriteName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtOverwriteName,
    (System_Int32_array **)ServantOverwriteName,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.displayType = userSvt->fields.displayType;
  v72 = this->fields.deckSvt;
  this->fields.npcSvtType = userSvt->fields.npcSvtType;
  if ( !v72 )
    goto LABEL_271;
  dropInfos = v72->fields.dropInfos;
  this->fields.droplist = dropInfos;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.droplist,
    (System_Int32_array **)dropInfos,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  individuality = userSvt->fields.individuality;
  this->fields.svtIndividuality = individuality;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtIndividuality,
    (System_Int32_array **)individuality,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.flgEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)userSvt, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_271;
  v392 = (__int64)v27;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = BattleUserServantData__getBattleSvtId(userSvt, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_271;
  v82 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    Instance,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = v82;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtdata,
    (System_Int32_array **)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_271;
  this->fields.svtType = svtdata->fields.type;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_271;
  p_svtdata = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtdata;
  v90 = (ServantLimitMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v91);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(this->fields.limitcount, 0LL);
  if ( !v90 )
    goto LABEL_271;
  if ( !ServantLimitMaster__TryGetEntity(v90, &this->fields.svtlimitent, SvtId, Instance, 0LL) )
  {
    v93 = ServantLimitMaster__GetEntity(v90, 100100, 0, 0LL);
    this->fields.svtlimitent = v93;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtlimitent,
      (System_Int32_array **)v93,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_271;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v100 = this->fields.svtdata;
  if ( !v100 )
    goto LABEL_271;
  v101 = (ServantLimitAddMaster_o *)Instance;
  v103 = *(_QWORD *)&v100->fields.id.fields.currentCryptoKey;
  v102 = *(_QWORD *)&v100->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v401.fields.currentCryptoKey = v103;
  *(_QWORD *)&v401.fields.fakeValue = v102;
  v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v401, 0LL);
  Instance = BattleServantData__getDispLimitCount(this, 1, v105);
  if ( !v101 )
    goto LABEL_271;
  ServantLimitAddMaster__TryGetEntity(v101, &this->fields.svtlimitaddent, v104, Instance, 0LL);
  v107 = BattleServantData__getSvtId(this, v106);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v108);
  if ( !ServantLimitMaster__TryGetEntity(v90, &this->fields.svtlimitDispent, v107, DispLimitCount, 0LL) )
  {
    if ( this->fields.svtlimitaddent )
    {
      Instance = BattleServantData__getSvtId(this, v110);
      svtlimitaddent = this->fields.svtlimitaddent;
      if ( !svtlimitaddent )
        goto LABEL_271;
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v113 = Instance;
      v114 = v90;
    }
    else
    {
      v113 = 100100;
      v114 = v90;
      battleCharaLimitCount = 0;
    }
    v115 = ServantLimitMaster__GetEntity(v114, v113, battleCharaLimitCount, 0LL);
    this->fields.svtlimitDispent = v115;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtlimitDispent,
      (System_Int32_array **)v115,
      v116,
      v117,
      v118,
      v119,
      v120,
      v121);
  }
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfo, this->fields.beforeUserSvtId, 0LL);
  Instance = (__int64)BattleUserServantData__getBattleEquipTargetList(userSvt, 0LL);
  v123 = Instance;
  if ( this->fields.shiftNpcId >= 1 && UserServantFromID && this->fields.beforeUserSvtId >= 1 )
  {
    Instance = (__int64)BattleUserServantData__getBattleEquipTargetList(UserServantFromID, 0LL);
    v123 = Instance;
  }
  userSvtData = userSvt;
  if ( !v123 )
    goto LABEL_271;
  v395 = battleInfo;
  v124 = (struct BattleUserServantData_array *)sub_B706AC(
                                                 BattleUserServantData___TypeInfo,
                                                 *(unsigned int *)(v123 + 24));
  p_equipList = &this->fields.equipList;
  this->fields.equipList = v124;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.equipList,
    (System_Int32_array **)v124,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  equipList = this->fields.equipList;
  this->fields.equiphp = 0;
  this->fields.equipatk = 0;
  if ( !equipList )
    goto LABEL_271;
  p_max_length = &equipList->max_length;
  if ( (int)equipList->max_length >= 1 )
  {
    v140 = 0LL;
    while ( 1 )
    {
      if ( v140 >= *(unsigned int *)(v123 + 24) )
        goto LABEL_272;
      Instance = (__int64)BattleInfoData__getEquipFromID(v395, *(_QWORD *)(v123 + 8 * v140 + 32), 0LL);
      v147 = (System_Int32_array **)Instance;
      if ( Instance )
      {
        Instance = sub_B70754(Instance, equipList->obj.klass->_1.element_class);
        if ( !Instance )
          break;
      }
      if ( v140 >= *p_max_length )
        goto LABEL_272;
      v148 = &equipList->obj.klass + v140;
      v148[4] = (Il2CppClass *)v147;
      sub_B70630((BattleServantConfConponent_o *)(v148 + 4), v147, v141, v142, v143, v144, v145, v146);
      equipList = *p_equipList;
      if ( !*p_equipList )
        goto LABEL_271;
      if ( v140 >= equipList->max_length )
        goto LABEL_272;
      v149 = &equipList->obj.klass + v140;
      v152 = v149[4];
      v150 = (__int64 *)(v149 + 4);
      v151 = v152;
      if ( v152 )
      {
        this->fields.equipatk += v151->_2.thread_static_fields_offset;
        if ( v140 >= equipList->max_length )
          goto LABEL_272;
        v153 = *v150;
        if ( !v153 )
          goto LABEL_271;
        this->fields.equiphp += *(_DWORD *)(v153 + 268);
      }
      p_max_length = &equipList->max_length;
      if ( (__int64)++v140 >= (int)equipList->max_length )
        goto LABEL_59;
    }
    v385 = sub_B7078C();
LABEL_273:
    sub_B70738(v385, 0LL);
  }
LABEL_59:
  maxhp = this->fields.maxhp;
  equiphp = this->fields.equiphp;
  p_userCommandCodeIds = &this->fields.userCommandCodeIds;
  this->fields.atk += this->fields.equipatk;
  this->fields.maxhp = equiphp + maxhp;
  userCommandCodeIds = userSvtData->fields.userCommandCodeIds;
  this->fields.userCommandCodeIds = userCommandCodeIds;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.userCommandCodeIds,
    (System_Int32_array **)userCommandCodeIds,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  if ( this->fields.shiftNpcId >= 1 && UserServantFromID && this->fields.beforeUserSvtId >= 1 )
  {
    v164 = (System_Int32_array **)UserServantFromID->fields.userCommandCodeIds;
    *p_userCommandCodeIds = (struct System_Int64_array *)v164;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.userCommandCodeIds,
      v164,
      v158,
      v159,
      v160,
      v161,
      v162,
      v163);
  }
  v390 = UserServantFromID;
  v165 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_CommandCodeInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v165,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_CommandCodeInfo___ctor__);
  p_commandCodeList_k__BackingField = &this->fields._commandCodeList_k__BackingField;
  this->fields._commandCodeList_k__BackingField = (struct System_Collections_Generic_List_CommandCodeInfo__o *)v165;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._commandCodeList_k__BackingField,
    (System_Int32_array **)v165,
    v167,
    v168,
    v169,
    v170,
    v171,
    v172);
  if ( userCommandCode && *p_userCommandCodeIds && (int)userCommandCode->max_length >= 1 )
  {
    v179 = 0LL;
    do
    {
      v180 = sub_B70764(BattleServantData___c__DisplayClass299_1_TypeInfo);
      BattleServantData___c__DisplayClass299_1___ctor((BattleServantData___c__DisplayClass299_1_o *)v180, 0LL);
      if ( v179 >= userCommandCode->max_length )
        goto LABEL_272;
      if ( !v180 )
        goto LABEL_271;
      v187 = (System_Int32_array **)userCommandCode->m_Items[v179];
      *(_QWORD *)(v180 + 16) = v187;
      sub_B70630((BattleServantConfConponent_o *)(v180 + 16), v187, v181, v182, v183, v184, v185, v186);
      v188 = *p_userCommandCodeIds;
      v189 = (System_Func_long__bool__o *)sub_B70764(System_Func_long__bool__TypeInfo);
      System_Func_long__bool____ctor(
        v189,
        (Il2CppObject *)v180,
        Method_BattleServantData___c__DisplayClass299_1__setBaseServantData_b__0__,
        (const MethodInfo_29A9CE8 *)Method_System_Func_long__bool___ctor__);
      if ( BasicHelper__Any_long_(
             v188,
             (System_Func_T__bool__o *)v189,
             (const MethodInfo_1BDC9E4 *)Method_BasicHelper_Any_long___) )
      {
        Instance = (__int64)*p_commandCodeList_k__BackingField;
        if ( !*p_commandCodeList_k__BackingField )
          goto LABEL_271;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          *(EventMissionProgressRequest_Argument_ProgressData_o **)(v180 + 16),
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_CommandCodeInfo__Add__);
      }
    }
    while ( (__int64)++v179 < (int)userCommandCode->max_length );
  }
  if ( !this->fields.commandAssistIds )
  {
    p_commandAssistIds = &this->fields.commandAssistIds;
    v191 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 5LL);
    this->fields.commandAssistIds = v191;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.commandAssistIds,
      (System_Int32_array **)v191,
      v192,
      v193,
      v194,
      v195,
      v196,
      v197);
    if ( commandAssistDataList )
    {
      v198 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_commandAssistData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v198,
        (Il2CppObject *)v16,
        Method_BattleServantData___c__DisplayClass299_0__setBaseServantData_b__1__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_commandAssistData___ctor__);
      Instance = (__int64)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                            (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)commandAssistDataList,
                            (System_Predicate_T__o *)v198,
                            (const MethodInfo_3026010 *)Method_System_Collections_Generic_List_commandAssistData__FindAll__);
      v199 = *p_commandAssistIds;
      if ( !*p_commandAssistIds )
        goto LABEL_271;
      v200 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance;
      v201 = 0;
      v202 = 0LL;
      while ( (__int64)v202 < (int)v199->max_length )
      {
        if ( v200 )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v396,
            v200,
            (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__);
          v399 = *(System_Collections_Generic_List_Enumerator_T__o *)v396;
          while ( 1 )
          {
            v203 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                     &v399,
                     (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__);
            if ( !v203 )
              break;
            if ( !v399.fields.current )
              sub_B7076C(v203, v204);
            if ( v202 == LODWORD(v399.fields.current[2].klass) )
            {
              v205 = *p_commandAssistIds;
              if ( !*p_commandAssistIds )
                sub_B7076C(v203, v204);
              if ( v202 >= v205->max_length )
              {
                v206 = sub_B70798(v203);
                sub_B70738(v206, 0LL);
              }
              v205->m_Items[v202 + 1] = (int32_t)v399.fields.current[1].klass;
            }
          }
          v396[v201 + 8] = 1185;
          v201 = ++v397;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v399,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__);
          if ( v201 )
          {
            v207 = v201 - 1;
            if ( v396[v201 + 7] == 1185 )
            {
              --v201;
              v397 = v207;
            }
          }
          v199 = *p_commandAssistIds;
          ++v202;
          if ( *p_commandAssistIds )
            continue;
        }
        goto LABEL_271;
      }
    }
  }
  commandCardParam = userSvtData->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandCardParam,
    (System_Int32_array **)commandCardParam,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  if ( this->fields.shiftNpcId >= 1 && v390 && this->fields.beforeUserSvtId >= 1 )
  {
    v215 = v390->fields.commandCardParam;
    this->fields.commandCardParam = v215;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.commandCardParam,
      (System_Int32_array **)v215,
      v209,
      v210,
      v211,
      v212,
      v213,
      v214);
  }
  BattleSkillIdList = (System_Int32_array **)BattleUserServantData__getBattleSkillIdList(userSvtData, 0LL);
  *(_QWORD *)(v16 + 24) = BattleSkillIdList;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 24), BattleSkillIdList, v217, v218, v219, v220, v221, v222);
  v223 = (System_Int32_array **)((__int64 (__fastcall *)(BattleUserServantData_o *, void *))userSvtData->klass->vtable._6_getSkillLevelList.method)(
                                  userSvtData,
                                  userSvtData->klass[1]._1.image);
  *(_QWORD *)(v16 + 32) = v223;
  sub_B70630((BattleServantConfConponent_o *)(v16 + 32), v223, v224, v225, v226, v227, v228, v229);
  v230 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v230,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( isContinue )
  {
    skillInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.skillInfoList;
    v230 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)v230,
      skillInfoList,
      (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___69154536);
  }
  Instance = (__int64)this->fields.skillInfoList;
  if ( !Instance )
    goto LABEL_271;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
  v232 = sub_B70764(BattleServantData___c__DisplayClass299_2_TypeInfo);
  BattleServantData___c__DisplayClass299_2___ctor((BattleServantData___c__DisplayClass299_2_o *)v232, 0LL);
  if ( !v232 )
    goto LABEL_271;
  *(_QWORD *)(v232 + 24) = v16;
  sub_B70630(
    (BattleServantConfConponent_o *)(v232 + 24),
    (System_Int32_array **)v16,
    v233,
    v234,
    v235,
    v236,
    v237,
    v238);
  v240 = *(_QWORD *)(v232 + 24);
  *(_DWORD *)(v232 + 16) = 0;
  if ( !v240 )
    goto LABEL_271;
  v241 = 0;
  while ( 1 )
  {
    v242 = *(_QWORD *)(v240 + 24);
    if ( !v242 )
      goto LABEL_271;
    if ( v241 >= *(_DWORD *)(v242 + 24) )
      break;
    v243 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v243,
      (Il2CppObject *)v232,
      Method_BattleServantData___c__DisplayClass299_2__setBaseServantData_b__2__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleSkillInfoData___ctor__);
    if ( v230 )
    {
      Instance = (__int64)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                            (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v230,
                            (System_Predicate_T__o *)v243,
                            (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
      v244 = *(_QWORD *)(v232 + 24);
      if ( v244 )
      {
        v245 = *(_QWORD *)(v244 + 24);
        if ( v245 )
        {
          v246 = *(int *)(v232 + 16);
          if ( (unsigned int)v246 >= *(_DWORD *)(v245 + 24) )
            goto LABEL_272;
          v247 = *(_QWORD *)(v244 + 32);
          if ( v247 )
          {
            if ( (unsigned int)v246 >= *(_DWORD *)(v247 + 24) )
              goto LABEL_272;
            Instance = (__int64)BattleServantData__addSkillInfo(
                                  this,
                                  11,
                                  v246,
                                  *(_DWORD *)(v245 + 4 * v246 + 32),
                                  *(_DWORD *)(v247 + 4 * v246 + 32),
                                  -1LL,
                                  -1,
                                  (BattleSkillInfoData_o *)Instance,
                                  v386);
            v240 = *(_QWORD *)(v232 + 24);
            v241 = *(_DWORD *)(v232 + 16) + 1;
            *(_DWORD *)(v232 + 16) = v241;
            if ( v240 )
              continue;
          }
        }
      }
    }
    goto LABEL_271;
  }
  BattleServantData__AddPassiveSkillInfo(this, userSvtData, v239);
  Instance = v392;
  if ( !v392 )
    goto LABEL_271;
  Instance = (*(__int64 (__fastcall **)(__int64, __int64, BattleServantData_o *, _QWORD))(*(_QWORD *)v392 + 376LL))(
               v392,
               12LL,
               this,
               *(_QWORD *)(*(_QWORD *)v392 + 384LL));
  v248 = this->fields.equipList;
  v249 = &this->fields.equipList;
  if ( !v248 )
    goto LABEL_271;
  v250 = Instance;
  v251 = 0LL;
  v252 = 0;
  v394 = Instance;
  while ( 1 )
  {
    max_length = v248->max_length;
    if ( (v250 & ((__int64)v251 < (int)max_length)) == 0 )
      break;
    if ( v251 >= max_length )
      goto LABEL_272;
    Instance = (__int64)v248->m_Items[v251];
    if ( Instance )
    {
      Instance = (__int64)BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)Instance, 0LL);
      v254 = *v249;
      if ( !*v249 )
        goto LABEL_271;
      if ( v251 >= v254->max_length )
        goto LABEL_272;
      v255 = Instance;
      Instance = (__int64)v254->m_Items[v251];
      if ( !Instance )
        goto LABEL_271;
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 408LL))(
                   Instance,
                   *(_QWORD *)(*(_QWORD *)Instance + 416LL));
      if ( !v255 )
        goto LABEL_271;
      v256 = *(_QWORD *)(v255 + 24);
      if ( (int)v256 >= 1 )
      {
        v257 = Instance;
        v258 = 0LL;
        v259 = Instance + 32;
        do
        {
          if ( v258 >= (unsigned int)v256 )
            goto LABEL_272;
          if ( !v257 )
            goto LABEL_271;
          if ( v258 >= *(unsigned int *)(v257 + 24) )
            goto LABEL_272;
          Instance = (__int64)BattleServantData__addSkillInfo(
                                this,
                                12,
                                v252 + (int)v258,
                                *(_DWORD *)(v255 + 32 + 4 * v258),
                                *(_DWORD *)(v259 + 4 * v258),
                                -1LL,
                                -1,
                                0LL,
                                v386);
          LODWORD(v256) = *(_DWORD *)(v255 + 24);
          ++v258;
        }
        while ( (__int64)v258 < (int)v256 );
        v252 += v258;
        v250 = v394;
      }
      v249 = &this->fields.equipList;
      v248 = this->fields.equipList;
    }
    ++v251;
    if ( !v248 )
      goto LABEL_271;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_271;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v260 = *p_commandCodeList_k__BackingField;
  if ( !*p_commandCodeList_k__BackingField )
    goto LABEL_271;
  v261 = (CommandCodeSkillMaster_o *)Instance;
  v262 = 0LL;
  v263 = 0;
  while ( (__int64)v262 < v260->fields._size )
  {
    if ( v262 >= (unsigned int)v260->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( v260->fields._items->m_Items[v262] )
    {
      v264 = *p_commandCodeList_k__BackingField;
      if ( !*p_commandCodeList_k__BackingField )
        goto LABEL_271;
      if ( v262 >= (unsigned int)v264->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v265 = v264->fields._items->m_Items[v262];
      if ( !v265 )
        goto LABEL_271;
      if ( !v261 )
        goto LABEL_271;
      Instance = (__int64)CommandCodeSkillMaster__getCommandCodeSkillList(v261, v265->fields.commandCodeId, 0LL);
      if ( !Instance )
        goto LABEL_271;
      v266 = *(_DWORD *)(Instance + 24);
      v267 = Instance;
      if ( v266 >= 1 )
      {
        for ( i = 0; i < v266; ++i )
        {
          if ( i >= (unsigned int)v266 )
            goto LABEL_272;
          v269 = *(_QWORD *)(v267 + 8LL * i + 32);
          if ( !v269 )
            goto LABEL_271;
          v270 = *p_commandCodeList_k__BackingField;
          if ( !*p_commandCodeList_k__BackingField )
            goto LABEL_271;
          v271 = *(_DWORD *)(v269 + 28);
          if ( v262 >= (unsigned int)v270->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v272 = v270->fields._items->m_Items[v262];
          if ( !v272 )
            goto LABEL_271;
          Instance = (__int64)BattleServantData__addSkillInfo(
                                this,
                                22,
                                v263 + i,
                                v271,
                                1,
                                v272->fields.id,
                                -1,
                                0LL,
                                v386);
          v266 = *(_DWORD *)(v267 + 24);
        }
        v263 += i;
      }
    }
    v260 = *p_commandCodeList_k__BackingField;
    ++v262;
    if ( !*p_commandCodeList_k__BackingField )
      goto LABEL_271;
  }
  (*(void (__fastcall **)(__int64, BattleServantData_o *, _QWORD))(*(_QWORD *)v392 + 392LL))(
    v392,
    this,
    *(_QWORD *)(*(_QWORD *)v392 + 400LL));
  (*(void (__fastcall **)(__int64, BattleServantData_o *, BattleInfoData_o *, _QWORD))(*(_QWORD *)v392 + 408LL))(
    v392,
    this,
    v395,
    *(_QWORD *)(*(_QWORD *)v392 + 416LL));
  BattleServantData__UpdateTreasureDevice(
    this,
    userSvtData->fields.treasureDeviceId,
    userSvtData->fields.treasureDeviceLv,
    v273);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6628/*"FULL_TD_POINT"*/, 0LL);
  nplineCount = this->fields.nplineCount;
  this->fields.lineMaxNp = Value;
  if ( nplineCount >= 1 )
  {
    v276 = nplineCount * Value;
    if ( v276 < this->fields.np )
      this->fields.np = v276;
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_271;
  TDErrorVoiceSeArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetTDErrorVoiceSeArray(
                                                                               (BattleDeckServantData_o *)Instance,
                                                                               0LL);
  v284 = TDErrorVoiceSeArray
       ? (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                               TDErrorVoiceSeArray,
                                                               (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_string___)
       : 0LL;
  this->fields.tdErrorStatusVoiceSeList = v284;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.tdErrorStatusVoiceSeList,
    (System_Int32_array **)v284,
    v278,
    v279,
    v280,
    v281,
    v282,
    v283);
  v285 = (System_Collections_Hashtable_o *)sub_B70764(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39248100(v285, 0LL);
  this->fields.commandtable = v285;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandtable,
    (System_Int32_array **)v285,
    v286,
    v287,
    v288,
    v289,
    v290,
    v291);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_271;
  v292 = (ServantCardMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v293 = sub_B706AC(int___TypeInfo, 6LL);
  v400.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264((System_Array_o *)v293, v400, 0LL);
  if ( !v293 )
    goto LABEL_271;
  if ( *(int *)(v293 + 24) >= 1 )
  {
    v294 = 0LL;
    while ( 1 )
    {
      v296 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v295 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v402.fields.currentCryptoKey = v296;
      *(_QWORD *)&v402.fields.fakeValue = v295;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v402, 0LL);
      if ( v294 >= *(unsigned int *)(v293 + 24) )
        break;
      if ( !v292 )
        goto LABEL_271;
      Instance = ServantCardMaster__TryGetEntity(v292, &entity, Instance, *(_DWORD *)(v293 + 32 + 4 * v294), 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_271;
        commandtable = this->fields.commandtable;
        v396[0] = entity->fields.cardId;
        v299 = j_il2cpp_value_box_0(int_TypeInfo, v396, v297);
        v301 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v300 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v302 = v299;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v403.fields.currentCryptoKey = v301;
        *(_QWORD *)&v403.fields.fakeValue = v300;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v403, 0LL);
        if ( !entity )
          goto LABEL_271;
        Instance = (__int64)ServantCardMaster__GetEntity(v292, Instance, entity->fields.cardId, 0LL);
        if ( !commandtable )
          goto LABEL_271;
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))commandtable->klass->vtable._30_set_Item.method)(
          commandtable,
          v302,
          Instance,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
      if ( (__int64)++v294 >= *(int *)(v293 + 24) )
        goto LABEL_184;
    }
LABEL_272:
    v385 = sub_B70798(Instance);
    goto LABEL_273;
  }
LABEL_184:
  Instance = (__int64)*p_svtdata;
  if ( !*p_svtdata )
    goto LABEL_271;
  Instance = ServantEntity__GetDefaultDeadType((ServantEntity_o *)Instance, 0, 0LL);
  v303 = this->fields.deckSvt;
  this->fields.deadtype = Instance;
  if ( !v303 )
    goto LABEL_271;
  if ( BattleDeckServantData__isEscape(v303, 0LL) )
  {
    v304 = userSvtData;
    KillType = 1;
  }
  else
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_271;
    v304 = userSvtData;
    if ( BattleDeckServantData__isDeadStand((BattleDeckServantData_o *)Instance, 0LL) )
    {
      KillType = 2;
    }
    else
    {
      Instance = (__int64)*p_deckSvt;
      if ( !*p_deckSvt )
        goto LABEL_271;
      if ( BattleDeckServantData__isDeadEffect((BattleDeckServantData_o *)Instance, 0LL) )
      {
        KillType = 3;
      }
      else
      {
        Instance = (__int64)*p_deckSvt;
        if ( !*p_deckSvt )
          goto LABEL_271;
        if ( BattleDeckServantData__isDeadWait((BattleDeckServantData_o *)Instance, 0LL) )
        {
          KillType = 4;
        }
        else
        {
          Instance = (__int64)*p_deckSvt;
          if ( !*p_deckSvt )
            goto LABEL_271;
          if ( BattleDeckServantData__IsDeadEnergy((BattleDeckServantData_o *)Instance, 0LL) )
          {
            KillType = 5;
          }
          else
          {
            Instance = (__int64)*p_deckSvt;
            if ( !*p_deckSvt )
              goto LABEL_271;
            if ( !BattleDeckServantData__ExistKillType((BattleDeckServantData_o *)Instance, 0LL) )
              goto LABEL_205;
            Instance = (__int64)*p_deckSvt;
            if ( !*p_deckSvt )
              goto LABEL_271;
            KillType = BattleDeckServantData__GetKillType((BattleDeckServantData_o *)Instance, 0LL);
          }
        }
      }
    }
  }
  this->fields.deadtype = KillType;
LABEL_205:
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_271;
  Instance = BattleDeckServantData__isAppear((BattleDeckServantData_o *)Instance, 0LL);
  v306 = this->fields.deckSvt;
  this->fields.isAppear = Instance & 1;
  if ( !v306 )
    goto LABEL_271;
  isRaid = BattleDeckServantData__isRaid(v306, 0LL);
  this->fields.isRaid = isRaid;
  if ( isRaid )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_271;
    RaidId = BattleDeckServantData__getRaidId((BattleDeckServantData_o *)Instance, 0LL);
    this->fields.raidId = RaidId;
    StartRaidState = BattleInfoData__getStartRaidState(v395, eventId, RaidId, 0LL);
    this->fields.statestring = StartRaidState;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.statestring,
      (System_Int32_array **)StartRaidState,
      v310,
      v311,
      v312,
      v313,
      v314,
      v315);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_271;
  Instance = BattleDeckServantData__isAddition((BattleDeckServantData_o *)Instance, 0LL);
  v316 = this->fields.deckSvt;
  this->fields.isAddition = Instance & 1;
  if ( !v316 )
    goto LABEL_271;
  Instance = BattleDeckServantData__isLeader(v316, 0LL);
  v317 = this->fields.deckSvt;
  this->fields.isLeader = Instance & 1;
  if ( !v317 )
    goto LABEL_271;
  isSuperBoss = BattleDeckServantData__isSuperBoss(v317, 0LL);
  this->fields.isSuperBoss = isSuperBoss;
  if ( isSuperBoss )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_271;
    SuperBossId = BattleDeckServantData__getSuperBossId((BattleDeckServantData_o *)Instance, 0LL);
    this->fields.superBossId = SuperBossId;
    this->fields.superbossnokorihp = BattleInfoData__getSuperBossNokoriHp(v395, SuperBossId, 0LL);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_271;
  isSendDamageForSuperBossId = BattleDeckServantData__isSendDamageForSuperBossId(
                                 (BattleDeckServantData_o *)Instance,
                                 0LL);
  this->fields.isSendDamageForSuperBossId = isSendDamageForSuperBossId;
  if ( isSendDamageForSuperBossId )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_271;
    this->fields.sendDamageForSuperBossId = BattleDeckServantData__getSendDamageForSuperBossId(
                                              (BattleDeckServantData_o *)Instance,
                                              0LL);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_271;
  this->fields.hpBarType = BattleDeckServantData__getHpBarType((BattleDeckServantData_o *)Instance, 0LL);
  v321 = this->fields.deckSvt;
  v323 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v322 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v404.fields.currentCryptoKey = v323;
  *(_QWORD *)&v404.fields.fakeValue = v322;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v404, 0LL);
  if ( !v321 )
    goto LABEL_271;
  this->fields.overwriteSvtVoiceId = BattleDeckServantData__getOverwriteSvtVoiceId(v321, Instance, 0LL);
  this->fields.battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                               v304->fields.battleVoice,
                               0LL);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v304->fields.battleVoice, 0LL)
    && !this->fields.overwriteSvtVoiceId )
  {
    v325 = *(_QWORD *)&v304->fields.battleVoice.fields.currentCryptoKey;
    v324 = *(_QWORD *)&v304->fields.battleVoice.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v405.fields.currentCryptoKey = v325;
    *(_QWORD *)&v405.fields.fakeValue = v324;
    this->fields.overwriteSvtVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v405, 0LL);
  }
  v327 = *(_QWORD *)&v304->fields.svtId.fields.currentCryptoKey;
  v326 = *(_QWORD *)&v304->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v406.fields.currentCryptoKey = v327;
  *(_QWORD *)&v406.fields.fakeValue = v326;
  v328 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v406, 0LL);
  BattleServantOverwriteName = BattleServantData__getBattleServantOverwriteName(this, v328, v329);
  this->fields.svtOverwriteBattleName = BattleServantOverwriteName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName,
    (System_Int32_array **)BattleServantOverwriteName,
    v331,
    v332,
    v333,
    v334,
    v335,
    v336);
  Instance = (__int64)this->fields.deckSvt;
  if ( !Instance )
    goto LABEL_271;
  Instance = BattleDeckServantData__getScale((BattleDeckServantData_o *)Instance, 0LL);
  v337 = this->fields.deckSvt;
  this->fields.actorScale = Instance;
  if ( !v337 )
    goto LABEL_271;
  Instance = (__int64)this->fields.aiState;
  this->fields.roleType = v337->fields.roleType;
  this->fields.maxActNum = v304->fields.maxActNum;
  this->fields._minActNum_k__BackingField = v304->fields.minActNum;
  this->fields.aiId = v304->fields.aiId;
  this->fields.actPriority = v304->fields.actPriority;
  if ( !Instance )
    goto LABEL_271;
  AiState__Initialize((AiState_o *)Instance, v304->fields.aiId, 0LL);
  v338 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v304->fields.svtId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_271;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !*p_svtdata )
    goto LABEL_271;
  v339 = (ServantChangeMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984((*p_svtdata)[1], 0LL);
  if ( !v339 )
    goto LABEL_271;
  v340 = ServantChangeMaster__TrueNameEntity(v339, Instance, 0LL);
  if ( v340 )
    v338 = v340->fields.svtId;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_271;
  v341 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v341 )
    goto LABEL_271;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(v341, Instance, v338, 0LL);
  if ( !Instance )
    goto LABEL_271;
  v342 = Instance;
  this->fields.svtCommonFlag = *(_DWORD *)(Instance + 76);
  v344 = *(_QWORD *)(Instance + 24);
  v343 = *(_QWORD *)(Instance + 32);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v407.fields.currentCryptoKey = v344;
  *(_QWORD *)&v407.fields.fakeValue = v343;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v407, 0LL);
  v351 = this->fields.deckSvt;
  this->fields._servantCollectionId_k__BackingField = Instance;
  if ( !v351 )
    goto LABEL_271;
  if ( !v351->fields.isFollowerSvt )
  {
    v352 = Instance;
    v353 = *(_DWORD *)(v342 + 76);
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    this->fields.svtCommonFlag = BattleData__GetSavedServantCommonFlag(v352, v353, 0LL);
  }
  if ( !this->fields.isEnemy && !this->fields.followerType )
  {
    v359 = *(struct System_Int32_array **)(v342 + 136);
    goto LABEL_269;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_271;
  v354 = DataManager__GetMasterData_WarQuestSelectionMaster_(
           (DataManager_o *)Instance,
           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___);
  v356 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v355 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v357 = (UserNpcSvtRecordMaster_o *)v354;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v408.fields.currentCryptoKey = v356;
  *(_QWORD *)&v408.fields.fakeValue = v355;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v408, 0LL);
  if ( !v357 )
LABEL_271:
    sub_B7076C(Instance, v18);
  TdPlayed = (System_Collections_Generic_IEnumerable_TSource__o *)UserNpcSvtRecordMaster__GetTdPlayed(
                                                                    v357,
                                                                    Instance,
                                                                    0LL);
  v359 = *(struct System_Int32_array **)(v342 + 136);
  if ( !TdPlayed )
  {
LABEL_269:
    p_tdplayed = &this->fields.tdplayed;
    this->fields.tdplayed = v359;
    goto LABEL_270;
  }
  v360 = (struct System_Int32_array *)TdPlayed;
  if ( v359 )
  {
    v361 = System_Linq_Enumerable__Concat_int_(
             TdPlayed,
             (System_Collections_Generic_IEnumerable_TSource__o *)v359,
             (const MethodInfo_1CB525C *)Method_System_Linq_Enumerable_Concat_int___);
    v359 = System_Linq_Enumerable__ToArray_int_(
             v361,
             (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    goto LABEL_269;
  }
  p_tdplayed = &this->fields.tdplayed;
  this->fields.tdplayed = v360;
  v359 = v360;
LABEL_270:
  sub_B70630(
    (BattleServantConfConponent_o *)p_tdplayed,
    (System_Int32_array **)v359,
    v345,
    v346,
    v347,
    v348,
    v349,
    v350);
  classBoardAddCommandSpells = v304->fields.classBoardAddCommandSpells;
  this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddCommandSpells,
    (System_Int32_array **)classBoardAddCommandSpells,
    v364,
    v365,
    v366,
    v367,
    v368,
    v369);
  classBoardAddPassiveSkills = v304->fields.classBoardAddPassiveSkills;
  this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.classBoardAddPassiveSkills,
    (System_Int32_array **)classBoardAddPassiveSkills,
    v371,
    v372,
    v373,
    v374,
    v375,
    v376);
  classBoardSquareIds = v304->fields.classBoardSquareIds;
  this->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._classBoardSquareIds_k__BackingField,
    (System_Int32_array **)classBoardSquareIds,
    v378,
    v379,
    v380,
    v381,
    v382,
    v383);
  BattleServantData__InitCommonAddIndividuality(this, v384);
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

  if ( (byte_434F6DD & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_434F6DD = 1;
  }
  BattleServantData__OverwriteShiftDeckIndex(this, vals, (const MethodInfo *)vals);
  if ( !vals )
    goto LABEL_24;
  Value = DataVals__GetValue(vals, 0LL);
  buffData = this->fields.buffData;
  uniqueId = this->fields.uniqueId;
  v12 = Value;
  battle_info = (System_Int32_array *)sub_B706AC(int___TypeInfo, 1LL);
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
    v27 = sub_B70798(battle_info);
    sub_B70738(v27, 0LL);
  }
  if ( !battle_info )
LABEL_24:
    sub_B7076C(battle_info, v8);
  battle_info = (System_Int32_array *)BattleInfoData__getDefaultServantData(
                                        (BattleInfoData_o *)battle_info,
                                        this->fields.uniqueId,
                                        0LL);
LABEL_18:
  v19 = (BattleDeckServantData_o *)battle_info;
  if ( !battle_info )
    goto LABEL_24;
  LODWORD(battle_info->bounds) = this->fields.index + 1;
  battle_info->m_Items[13] = this->fields.uniqueId;
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


void __fastcall BattleServantData__setInitBattle(
        BattleServantData_o *this,
        bool isResetDeadAnime,
        const MethodInfo *method)
{
  unsigned int v5; // w0

  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_reducedhp.method)(
    this,
    0LL,
    this->klass->vtable._13_get_resultHp.methodPtr);
  v5 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v5,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  this->fields.reservationspecial = 0;
  if ( isResetDeadAnime )
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
    sub_B7076C(0LL, setHp);
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
    sub_B7076C(isSuperBoss, inDeckSvt);
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
        v25 = sub_B70798(isSuperBoss);
        sub_B70738(v25, 0LL);
      }
      v18 = BattleServantData__SetShiftDeckData(
              (BattleServantData_o *)isSuperBoss,
              battleInfo,
              *inDeckSvt,
              v17->m_Items[v13 + 1],
              v14);
      *inDeckSvt = v18;
      sub_B70630((BattleServantConfConponent_o *)inDeckSvt, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
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
  AiState_o *aiState; // x0
  const MethodInfo *v7; // x1
  unsigned int v8; // w0
  __int64 InfoId; // x0
  __int64 v10; // x1
  BattleSkillInfoData_o *current; // x21
  struct System_Int32_array *skillinfoid_list; // x8
  __int64 v13; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v15; // x24
  int v16; // w25
  struct System_Int32_array *skillcharge_list; // x8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_String_o *statestring; // x1
  int32_t lowLimitShift; // w8
  const MethodInfo *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t tmpAppearanceId; // w8
  struct System_Int32_array *commandAssistIds; // x1
  BattleServantConfConponent_o *p_partAnimationSaveDict; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *partAnimSaveDataArray; // x19
  BattleServantData___c_c *v43; // x0
  struct BattleServantData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__286_0; // x20
  Il2CppObject *v46; // x22
  struct BattleServantData___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct BattleServantData___c_StaticFields *v54; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__286_1; // x22
  Il2CppObject *v56; // x23
  struct BattleServantData___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 v72; // x0
  __int64 v73; // x0
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_434F61D & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData_____);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_B70694(&Method_System_Func_BattleServantData_PartAnimationSaveData__string___ctor__);
    sub_B70694(&Method_System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData_____ctor__);
    sub_B70694(&System_Func_BattleServantData_PartAnimationSaveData__string__TypeInfo);
    sub_B70694(&System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_B70694(&Method_BattleServantData___c__setSaveData_b__286_0__);
    sub_B70694(&Method_BattleServantData___c__setSaveData_b__286_1__);
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434F61D = 1;
  }
  memset(&v75, 0, sizeof(v75));
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
  aiState = (AiState_o *)BattleServantData__get_AiStateManager(this, v7);
  if ( !aiState )
    goto LABEL_54;
  AiStateManager__SetSaveData((AiStateManager_o *)aiState, save->fields.aiStateManagerSave, 0LL);
  aiState = (AiState_o *)this->fields.buffData;
  if ( !aiState )
    goto LABEL_54;
  BattleBuffData__setSaveData((BattleBuffData_o *)aiState, save->fields.buffDataSave, 0LL);
  v8 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v8,
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
      0LL,
      0LL);
  }
  aiState = (AiState_o *)this->fields.skillInfoList;
  if ( !aiState )
LABEL_54:
    sub_B7076C(aiState, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v74,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)aiState,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v75 = v74;
  while ( 1 )
  {
    InfoId = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v75,
               (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( (InfoId & 1) == 0 )
      break;
    current = (BattleSkillInfoData_o *)v75.fields.current;
    if ( !v75.fields.current )
      sub_B7076C(InfoId, v10);
    if ( !BYTE4(v75.fields.current[1].monitor) )
    {
      skillinfoid_list = save->fields.skillinfoid_list;
      if ( !skillinfoid_list )
LABEL_24:
        sub_B7076C(InfoId, v10);
      v13 = 8LL;
      while ( 1 )
      {
        max_length = skillinfoid_list->max_length;
        v15 = v13 - 8;
        if ( v13 - 8 >= (int)max_length )
          break;
        if ( v15 >= max_length )
        {
          v72 = sub_B70798(InfoId);
          sub_B70738(v72, 0LL);
        }
        v16 = *((_DWORD *)&skillinfoid_list->obj.klass + v13);
        InfoId = BattleSkillInfoData__getInfoId(current, 0LL);
        if ( v16 == (_DWORD)InfoId )
        {
          skillcharge_list = save->fields.skillcharge_list;
          if ( !skillcharge_list )
            sub_B7076C(InfoId, v10);
          if ( v15 >= skillcharge_list->max_length )
          {
            v73 = sub_B70798(InfoId);
            sub_B70738(v73, 0LL);
          }
          current->fields.chargeTurn = *((_DWORD *)&skillcharge_list->obj.klass + v13);
        }
        skillinfoid_list = save->fields.skillinfoid_list;
        ++v13;
        if ( !skillinfoid_list )
          goto LABEL_24;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v75,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  if ( (this->fields.deckIndex & 0x80000000) != 0 )
    this->fields.deckIndex = this->fields.index;
  this->fields.dressDispId = save->fields.dressDispId;
  this->fields.accumulationDamage = save->fields.accumulationDamage;
  statestring = save->fields.statestring;
  this->fields.statestring = statestring;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.statestring,
    (System_Int32_array **)statestring,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.shiftDeckIndex = save->fields.shiftDeckIndex;
  this->fields.changeSvtIndex = save->fields.changeSvtIndex;
  lowLimitShift = save->fields.lowLimitShift;
  this->fields.tmpAppearanceId = -1;
  this->fields.lowLimitShift = lowLimitShift;
  if ( BattleServantData__isChangeAppearance(this, v26) )
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
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandAssistIds,
    (System_Int32_array **)commandAssistIds,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  p_partAnimationSaveDict = (BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict;
  this->fields.partAnimationSaveDict = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.partAnimationSaveDict, 0LL, v36, v37, v38, v39, v40, v41);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)save->fields.partAnimSaveDataArray, 0LL) )
  {
    partAnimSaveDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)save->fields.partAnimSaveDataArray;
    v43 = BattleServantData___c_TypeInfo;
    if ( (BYTE3(BattleServantData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v43 = BattleServantData___c_TypeInfo;
    }
    static_fields = v43->static_fields;
    _9__286_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__286_0;
    if ( !_9__286_0 )
    {
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        static_fields = BattleServantData___c_TypeInfo->static_fields;
      }
      v46 = (Il2CppObject *)static_fields->__9;
      _9__286_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_BattleServantData_PartAnimationSaveData__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__286_0,
        v46,
        Method_BattleServantData___c__setSaveData_b__286_0__,
        (const MethodInfo_29ADCC4 *)Method_System_Func_BattleServantData_PartAnimationSaveData__string___ctor__);
      v47 = BattleServantData___c_TypeInfo->static_fields;
      v47->__9__286_0 = (struct System_Func_BattleServantData_PartAnimationSaveData__string__o *)_9__286_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v47->__9__286_0,
        (System_Int32_array **)_9__286_0,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      v43 = BattleServantData___c_TypeInfo;
    }
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = BattleServantData___c_TypeInfo;
    }
    v54 = v43->static_fields;
    _9__286_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v54->__9__286_1;
    if ( !_9__286_1 )
    {
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v54 = BattleServantData___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)v54->__9;
      _9__286_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__286_1,
        v56,
        Method_BattleServantData___c__setSaveData_b__286_1__,
        (const MethodInfo_29ADCC4 *)Method_System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData_____ctor__);
      v57 = BattleServantData___c_TypeInfo->static_fields;
      v57->__9__286_1 = (struct System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____o *)_9__286_1;
      sub_B70630(
        (BattleServantConfConponent_o *)&v57->__9__286_1,
        (System_Int32_array **)_9__286_1,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
    v64 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData___(
                                   partAnimSaveDataArray,
                                   (System_Func_TSource__TKey__o *)_9__286_0,
                                   (System_Func_TSource__TElement__o *)_9__286_1,
                                   (const MethodInfo_1CC8B8C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData_____);
    p_partAnimationSaveDict->klass = (BattleServantConfConponent_c *)v64;
    sub_B70630(p_partAnimationSaveDict, v64, v65, v66, v67, v68, v69, v70);
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
  BattleServantData_SaveData_o *v14; // x4

  if ( (byte_434F621 & 1) == 0 )
  {
    sub_B70694(&Method_JsonManager_Deserialize_BattleServantData_SaveData___);
    sub_B70694(&JsonManager_TypeInfo);
    byte_434F621 = 1;
  }
  if ( saveStr )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v14 = (BattleServantData_SaveData_o *)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                            (Il2CppObject *)saveStr,
                                            (const MethodInfo_1D504B8 *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
  }
  else
  {
    v14 = 0LL;
  }
  BattleServantData__setServantData_20679040(
    this,
    inDeckSvt,
    battleEnt,
    infollowerType,
    v14,
    0LL,
    commandAssistDataList,
    v7);
}


void __fastcall BattleServantData__setServantData_20679040(
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
  System_Int32_array **ShiftList; // x0
  struct System_Int32_array **p_shiftDeckList; // x26
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x0
  struct System_Int32_array **p_changeSvtList; // x28
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x4
  int v33; // w27
  int32_t shiftDeckIndex; // w8
  int32_t changeSvtIndex; // w9
  struct System_Int32_array *v36; // x9
  unsigned int max_length; // w10
  int32_t DispBreakShift; // w0
  struct System_Int32_array *v39; // x26
  int32_t v40; // w1
  int32_t v41; // w28
  struct System_Int32_array *shiftDeckList; // x8
  char *v43; // x8
  BattleInfoData_o *battleInfo; // x1
  BattleInfoData_o *v45; // x2
  int32_t inited; // w25
  const MethodInfo *v47; // x6
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  __int64 v52; // x0
  BattleDeckServantData_o *inDeckSvta; // [xsp+8h] [xbp-58h] BYREF

  v14 = this;
  inDeckSvta = inDeckSvt;
  if ( (byte_434F622 & 1) == 0 )
  {
    sub_B70694(&System_Math_TypeInfo);
    this = (BattleServantData_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F622 = 1;
  }
  if ( !inDeckSvt )
    goto LABEL_41;
  ShiftList = (System_Int32_array **)BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  p_shiftDeckList = &v14->fields.shiftDeckList;
  v14->fields.shiftDeckList = (struct System_Int32_array *)ShiftList;
  sub_B70630((BattleServantConfConponent_o *)&v14->fields.shiftDeckList, ShiftList, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)BattleDeckServantData__getChangeList(inDeckSvt, 0LL);
  p_changeSvtList = &v14->fields.changeSvtList;
  v14->fields.changeSvtList = (struct System_Int32_array *)v23;
  sub_B70630((BattleServantConfConponent_o *)&v14->fields.changeSvtList, v23, v25, v26, v27, v28, v29, v30);
  v14->fields._IsChangeDropItemByShift_k__BackingField = BattleDeckServantData__IsChangeDropItemByShift(inDeckSvt, 0LL);
  this = (BattleServantData_o *)BattleDeckServantData__GetDefShiftPosition(inDeckSvt, -1LL, 0LL);
  v33 = (int)this;
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
      v36 = *p_shiftDeckList;
      if ( !*p_shiftDeckList )
        goto LABEL_41;
      max_length = v36->max_length;
      --shiftDeckIndex;
      goto LABEL_23;
    }
    v36 = *p_changeSvtList;
    if ( !*p_changeSvtList )
      goto LABEL_41;
    max_length = v36->max_length;
LABEL_23:
    if ( shiftDeckIndex < max_length )
    {
      v43 = (char *)v36 + 4 * shiftDeckIndex;
      goto LABEL_25;
    }
LABEL_42:
    v52 = sub_B70798(this);
    sub_B70738(v52, 0LL);
  }
  DispBreakShift = BattleDeckServantData__GetDispBreakShift(inDeckSvt, 0LL);
  if ( DispBreakShift < 1 )
    goto LABEL_29;
  v39 = *p_shiftDeckList;
  if ( !v39 )
    goto LABEL_29;
  v40 = v39->max_length;
  if ( v14->fields.shiftDeckIndex >= v40 )
    goto LABEL_29;
  v41 = DispBreakShift;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v40 = v39->max_length;
  }
  this = (BattleServantData_o *)System_Math__Min_45556056(v33 + v41 + 1, v40, 0LL);
  shiftDeckList = v14->fields.shiftDeckList;
  v14->fields.shiftDeckIndex = (int)this;
  if ( !shiftDeckList )
LABEL_41:
    sub_B7076C(this, inDeckSvt);
  if ( (int)this - 1 >= shiftDeckList->max_length )
    goto LABEL_42;
  v43 = (char *)shiftDeckList + 4 * (int)this - 4;
LABEL_25:
  if ( battleEnt )
    battleInfo = battleEnt->fields.battleInfo;
  else
    battleInfo = 0LL;
  inDeckSvta = BattleServantData__SetShiftDeckData(this, battleInfo, inDeckSvt, *((_DWORD *)v43 + 8), v32);
LABEL_29:
  if ( battleEnt )
    v45 = battleEnt->fields.battleInfo;
  else
    v45 = 0LL;
  inited = BattleServantData__setInitQuestShift(v14, &inDeckSvta, v45, v31);
  BattleServantData__setBaseServantData(v14, inDeckSvta, battleEnt, infollowerType, commandAssistDataList, 0, v47);
  BattleServantData__InitializeBuff(v14, v48);
  BattleServantData__setInitQuest(v14, inited, v49);
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
    BattleServantData__loadTransformServant(v14, battleData, v50);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleServantData_SaveData_o *, Il2CppMethodPointer))v14->klass->vtable._17_setSaveData.method)(
                                  v14,
                                  saveData,
                                  v14->klass->vtable._18_getAiState.methodPtr);
  if ( !battleEnt )
    goto LABEL_41;
  BattleServantData__SetCommandAssistSkill(v14, battleEnt->fields.eventId, v51);
}


void __fastcall BattleServantData__setServantData_20681956(
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
    sub_B7076C(this, 0LL);
  ShiftList = BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  this->fields.shiftDeckList = ShiftList;
  sub_B70630(
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
  sub_B70630(
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
  BattleServantData__setBaseServantData_20682236(
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
    sub_B7076C(deckSvt, data);
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
    v26 = sub_B70798(deckSvt);
    sub_B70738(v26, 0LL);
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
  struct BattleDeckServantData_o *deckSvt; // x8
  System_Collections_Generic_List_int__o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x8
  const MethodInfo *v11; // x1
  BattleDeckServantData_o *ShiftServantData; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleDeckServantData_o *v19; // x22
  struct BattleDeckServantData_o *v20; // x8
  int64_t userSvtId; // x9
  BattleEntity_o *battle_ent; // x23
  int32_t Int; // w0
  const MethodInfo *v24; // x6
  unsigned __int64 v25; // x22
  signed __int64 size; // x24
  __int64 v27; // x23
  int32_t v28; // w8
  __int64 v29; // x0

  v6 = this;
  if ( (byte_434F62C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (BattleServantData_o *)sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_434F62C = 1;
  }
  if ( (npcId & 0x80000000) == 0 )
  {
    deckSvt = v6->fields.deckSvt;
    *(_QWORD *)&v6->fields.transformIndex = 0xFFFFFFFFLL;
    v6->fields.shiftNpcId = npcId;
    if ( !deckSvt )
      goto LABEL_39;
    v6->fields.beforeUserSvtId = deckSvt->fields.userSvtId;
    v8 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v6->fields.isEnemy )
    {
      this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
      if ( !this )
        goto LABEL_39;
      v9 = 0LL;
      while ( (int)v9 < this->fields.uniqueId )
      {
        this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
        if ( this )
        {
          if ( (unsigned int)v9 >= this->fields.uniqueId )
          {
LABEL_40:
            v29 = sub_B70798(this);
            sub_B70738(v29, 0LL);
          }
          v10 = *(&this->fields.userSvtId.fields.currentCryptoKey + v9);
          if ( v10 )
          {
            if ( v8 )
            {
              System_Collections_Generic_List_int___Add(
                v8,
                *(_DWORD *)(v10 + 40),
                (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
              this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v11);
              ++v9;
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
        v19 = ShiftServantData;
        this = (BattleServantData_o *)&v6->fields.deckSvt;
        v20 = v6->fields.deckSvt;
        if ( v20 )
        {
          userSvtId = v19->fields.userSvtId;
          v19->fields.isFollowerSvt = v20->fields.isFollowerSvt;
          v6->fields.transformUserSvtId = userSvtId;
          v6->fields.deckSvt = v19;
          sub_B70630((BattleServantConfConponent_o *)this, (System_Int32_array **)v19, v13, v14, v15, v16, v17, v18);
          v19->fields.id = v6->fields.index + 1;
          v19->fields.uniqueId = v6->fields.uniqueId;
          battle_ent = data->fields.battle_ent;
          Int = Follower__getInt(v6->fields.followerType, 0LL);
          BattleServantData__setBaseServantData(v6, v19, battle_ent, Int, 0LL, 0, v24);
          if ( !v6->fields.isEnemy )
          {
            this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
            if ( !this )
              goto LABEL_39;
            v25 = 0LL;
            while ( (__int64)v25 < this->fields.uniqueId )
            {
              if ( !v8 )
                goto LABEL_39;
              size = v8->fields._size;
              this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
              if ( !this )
                goto LABEL_39;
              if ( v25 >= (unsigned int)this->fields.uniqueId )
                goto LABEL_40;
              v27 = *(&this->fields.userSvtId.fields.currentCryptoKey + v25);
              if ( (__int64)v25 >= size )
              {
                if ( !v27 )
                  goto LABEL_39;
                v28 = 0;
              }
              else
              {
                if ( v25 >= (unsigned int)v8->fields._size )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                if ( !v27 )
                  goto LABEL_39;
                v28 = v8->fields._items->m_Items[v25 + 1];
              }
              *(_DWORD *)(v27 + 40) = v28;
              ++v25;
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
    sub_B7076C(this, data);
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
  sub_B70630(
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
    sub_B7076C(this, 0LL);
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
        BattleLogicSkill_SkillExecArgs_o *skillExecArgs,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  void *battle_info; // x0
  int64_t v21; // x1
  const MethodInfo *v22; // x3
  int shiftNpcId; // w2
  struct BattleDeckServantData_o *deckSvt; // x8
  struct BattleDeckServantData_o *v25; // x23
  BattleUserServantData_o *UserServantFromID; // x21
  const MethodInfo *v27; // x3
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t v34; // w8
  int32_t v35; // w9
  int32_t v36; // w10
  int32_t v37; // w10
  int32_t v38; // w9
  struct System_String_o *v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Int32_array *v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x23
  __int64 v54; // x24
  int32_t v55; // w0
  const MethodInfo *v56; // x2
  struct System_String_o *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int32_t v64; // w0
  const MethodInfo *v65; // x2
  struct System_String_o *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  const MethodInfo *v73; // x1
  const MethodInfo *v74; // x2
  struct BattleDeckServantData_o *v75; // x22
  int v76; // w24
  const MethodInfo *v77; // x3
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int32_t atk; // w8
  int32_t hp; // w9
  int32_t maxActNum; // w10
  int32_t actPriority; // w10
  int32_t v88; // w9
  struct System_String_o *name; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct System_Int32_array *individuality; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  __int64 v103; // x22
  __int64 v104; // x23
  int32_t v105; // w0
  const MethodInfo *v106; // x2
  struct System_String_o *ServantOverwriteName; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  int32_t v114; // w0
  const MethodInfo *v115; // x2
  struct System_String_o *BattleServantOverwriteName; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  const MethodInfo *v123; // x2
  BattleInfoData_o *v124; // x22
  __int64 v125; // x23
  __int64 v126; // x24
  const MethodInfo *v127; // x1
  const MethodInfo *v128; // x2
  const MethodInfo *v129; // x2
  System_String_array **v130; // x2
  MethodInfo *v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  struct System_Int32_array *classBoardSquareIds; // x1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  BattleServantData___c__DisplayClass305_0_o dataa; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v153; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v154; // 0:x0.16

  if ( (byte_434F629 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_434F629 = 1;
  }
  dataa.fields.__4__this = 0LL;
  *(_QWORD *)&dataa.fields.fromLoad = 0LL;
  dataa.fields.data = data;
  sub_B70630(
    (BattleServantConfConponent_o *)&dataa,
    (System_Int32_array **)data,
    *(System_String_array ***)&transformIndex,
    *(System_String_array ***)&overwriteLimitCount,
    (System_Boolean_array **)fromLoad,
    (System_Int32_array **)skillExecArgs,
    (System_Int32_array *)method,
    v7);
  dataa.fields.__4__this = this;
  sub_B70630(
    (BattleServantConfConponent_o *)&dataa.fields.__4__this,
    (System_Int32_array **)this,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  dataa.fields.fromLoad = fromLoad;
  shiftNpcId = this->fields.shiftNpcId;
  if ( shiftNpcId >= 1 )
  {
    BattleServantData__setSkillShiftServant(this, dataa.fields.data, shiftNpcId, v22);
    return;
  }
  if ( transformIndex == -1 )
  {
    if ( !dataa.fields.data )
      goto LABEL_55;
    battle_info = dataa.fields.data->fields.battle_info;
    if ( !battle_info )
      goto LABEL_55;
    battle_info = BattleInfoData__GetDeckServantDataFromBothDeck(
                    (BattleInfoData_o *)battle_info,
                    this->fields.uniqueId,
                    0LL);
    if ( !battle_info )
      return;
    if ( !dataa.fields.data )
      goto LABEL_55;
    v75 = (struct BattleDeckServantData_o *)battle_info;
    battle_info = dataa.fields.data->fields.battle_info;
    if ( !battle_info )
      goto LABEL_55;
    battle_info = BattleInfoData__getUserServantFromID(
                    (BattleInfoData_o *)battle_info,
                    this->fields.transformUserSvtId,
                    0LL);
    v76 = battle_info ? *((unsigned __int8 *)battle_info + 536) : 0;
    *(_QWORD *)&this->fields.transformIndex = 0xFFFFFFFFLL;
    this->fields.transformUserSvtId = -1LL;
    if ( !dataa.fields.data
      || (battle_info = dataa.fields.data->fields.battle_info) == 0LL
      || (UserServantFromID = BattleInfoData__getUserServantFromID(
                                (BattleInfoData_o *)battle_info,
                                v75->fields.userSvtId,
                                0LL),
          BattleServantData___setTransformServant_g__RemoveBuffGrantedByBeforePassiveSkill_305_0(
            this,
            UserServantFromID,
            &dataa,
            v77),
          this->fields.deckSvt = v75,
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.deckSvt,
            (System_Int32_array **)v75,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83),
          !UserServantFromID) )
    {
LABEL_55:
      sub_B7076C(battle_info, v21);
    }
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
    v88 = this->fields.equiphp + hp;
    this->fields.atk = this->fields.equipatk + atk;
    this->fields.maxhp = v88;
    this->fields.downstarrate = UserServantFromID->fields.starRate;
    this->fields.downtdrate = UserServantFromID->fields.tdRate;
    this->fields.atktdrate = UserServantFromID->fields.tdAttackRate;
    this->fields.deathRate = UserServantFromID->fields.deathRate;
    this->fields.criticalRate = UserServantFromID->fields.criticalRate;
    this->fields.treasuredvcId = UserServantFromID->fields.treasureDeviceId;
    this->fields.treasuredvcLevel = UserServantFromID->fields.treasureDeviceLv;
    this->fields.transformSvtId = BattleUserServantData__getBattleSvtId(UserServantFromID, 0LL);
    this->fields._imageSvtId_k__BackingField = UserServantFromID->fields.imageSvtId;
    name = v75->fields.name;
    this->fields.svtName = name;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtName,
      (System_Int32_array **)name,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
    this->fields.overkillTargetId = -1;
    individuality = UserServantFromID->fields.individuality;
    this->fields.svtIndividuality = individuality;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtIndividuality,
      (System_Int32_array **)individuality,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
    v104 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.currentCryptoKey;
    v103 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v153.fields.currentCryptoKey = v104;
    *(_QWORD *)&v153.fields.fakeValue = v103;
    v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v153, 0LL);
    ServantOverwriteName = BattleServantData__getServantOverwriteName(this, v105, v106);
    this->fields.svtOverwriteName = ServantOverwriteName;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtOverwriteName,
      (System_Int32_array **)ServantOverwriteName,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(UserServantFromID->fields.svtId, 0LL);
    BattleServantOverwriteName = BattleServantData__getBattleServantOverwriteName(this, v114, v115);
    this->fields.svtOverwriteBattleName = BattleServantOverwriteName;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName,
      (System_Int32_array **)BattleServantOverwriteName,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
    if ( v76 )
      BattleServantData__ExtendedUpdateOnTransformServant(this, UserServantFromID, v123);
    BattleServantData__CalculateLimitCountWithSpoilerProtection(this, UserServantFromID, v123);
  }
  else
  {
    if ( !dataa.fields.data )
      goto LABEL_55;
    battle_info = dataa.fields.data->fields.battle_info;
    if ( !battle_info )
      goto LABEL_55;
    battle_info = BattleInfoData__getTransformDeckServantData(
                    (BattleInfoData_o *)battle_info,
                    this->fields.uniqueId,
                    transformIndex,
                    0LL);
    deckSvt = this->fields.deckSvt;
    if ( !deckSvt )
      goto LABEL_55;
    v25 = (struct BattleDeckServantData_o *)battle_info;
    if ( !battle_info )
      goto LABEL_55;
    *((_BYTE *)battle_info + 56) = deckSvt->fields.isFollowerSvt;
    this->fields.transformIndex = transformIndex;
    this->fields.transformLimitCount = overwriteLimitCount;
    v21 = *((_QWORD *)battle_info + 3);
    this->fields.transformUserSvtId = v21;
    if ( !dataa.fields.data )
      goto LABEL_55;
    battle_info = dataa.fields.data->fields.battle_info;
    if ( !battle_info )
      goto LABEL_55;
    UserServantFromID = BattleInfoData__getUserServantFromID((BattleInfoData_o *)battle_info, v21, 0LL);
    BattleServantData___setTransformServant_g__RemoveBuffGrantedByBeforePassiveSkill_305_0(
      this,
      UserServantFromID,
      &dataa,
      v27);
    this->fields.deckSvt = v25;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.deckSvt,
      (System_Int32_array **)v25,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    if ( !UserServantFromID )
      goto LABEL_55;
    v34 = UserServantFromID->fields.atk;
    this->fields.atk = v34;
    v35 = UserServantFromID->fields.hp;
    this->fields.maxhp = v35;
    this->fields.maxtpturn = UserServantFromID->fields.chargeTurn;
    v36 = UserServantFromID->fields.maxActNum;
    if ( v36 )
      this->fields.maxActNum = v36;
    v37 = UserServantFromID->fields.actPriority;
    if ( v37 )
      this->fields.actPriority = v37;
    v38 = this->fields.equiphp + v35;
    this->fields.atk = this->fields.equipatk + v34;
    this->fields.maxhp = v38;
    this->fields.downstarrate = UserServantFromID->fields.starRate;
    this->fields.downtdrate = UserServantFromID->fields.tdRate;
    this->fields.atktdrate = UserServantFromID->fields.tdAttackRate;
    this->fields.deathRate = UserServantFromID->fields.deathRate;
    this->fields.criticalRate = UserServantFromID->fields.criticalRate;
    this->fields.treasuredvcId = UserServantFromID->fields.treasureDeviceId;
    this->fields.treasuredvcLevel = UserServantFromID->fields.treasureDeviceLv;
    this->fields.transformSvtId = BattleUserServantData__getBattleSvtId(UserServantFromID, 0LL);
    this->fields._imageSvtId_k__BackingField = UserServantFromID->fields.imageSvtId;
    v39 = v25->fields.name;
    this->fields.svtName = v39;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtName,
      (System_Int32_array **)v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    this->fields.overkillTargetId = -1;
    v46 = UserServantFromID->fields.individuality;
    this->fields.svtIndividuality = v46;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtIndividuality,
      (System_Int32_array **)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    v54 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.currentCryptoKey;
    v53 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v152.fields.currentCryptoKey = v54;
    *(_QWORD *)&v152.fields.fakeValue = v53;
    v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v152, 0LL);
    v57 = BattleServantData__getServantOverwriteName(this, v55, v56);
    this->fields.svtOverwriteName = v57;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtOverwriteName,
      (System_Int32_array **)v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
    v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(UserServantFromID->fields.svtId, 0LL);
    v66 = BattleServantData__getBattleServantOverwriteName(this, v64, v65);
    this->fields.svtOverwriteBattleName = v66;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.svtOverwriteBattleName,
      (System_Int32_array **)v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    if ( UserServantFromID->fields.isAfterTransformKey )
      BattleServantData__ExtendedUpdateOnTransformServant(this, UserServantFromID, v74);
    if ( overwriteLimitCount >= 1 )
    {
      this->fields._dispLimitCount_k__BackingField = UserServantFromID->fields.dispLimitCount;
      this->fields._commandCardLimitCount_k__BackingField = UserServantFromID->fields.commandCardLimitCount;
      this->fields._iconLimitCount_k__BackingField = UserServantFromID->fields.iconLimitCount;
    }
  }
  BattleServantData__changeTransformServant(this, v73);
  if ( !dataa.fields.data )
    goto LABEL_55;
  v124 = dataa.fields.data->fields.battle_info;
  v126 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v125 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v154.fields.currentCryptoKey = v126;
  *(_QWORD *)&v154.fields.fakeValue = v125;
  battle_info = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v154, 0LL);
  if ( !v124 )
    goto LABEL_55;
  if ( BattleInfoData__IsUseNewTransformLogic(v124, (int32_t)battle_info, 0LL) )
  {
    BattleServantData__SetServantCommandCard(this, v127);
    BattleServantData__OverwriteOwnSkillsForTransformedServant(this, UserServantFromID, v128);
    BattleServantData__AddPassiveSkillInfo(this, UserServantFromID, v129);
    if ( !dataa.fields.fromLoad )
      BattleServantData__AddPassiveBuffOnTransform(this, dataa.fields.data, skillExecArgs, v131);
    classBoardSquareIds = UserServantFromID->fields.classBoardSquareIds;
    this->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._classBoardSquareIds_k__BackingField,
      (System_Int32_array **)classBoardSquareIds,
      v130,
      (System_String_array **)v131,
      v132,
      v133,
      v134,
      v135);
    classBoardAddPassiveSkills = UserServantFromID->fields.classBoardAddPassiveSkills;
    this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.classBoardAddPassiveSkills,
      (System_Int32_array **)classBoardAddPassiveSkills,
      v138,
      v139,
      v140,
      v141,
      v142,
      v143);
    classBoardAddCommandSpells = UserServantFromID->fields.classBoardAddCommandSpells;
    this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.classBoardAddCommandSpells,
      (System_Int32_array **)classBoardAddCommandSpells,
      v145,
      v146,
      v147,
      v148,
      v149,
      v150);
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
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630(
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
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F684 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_22470/*"shiftUpdateStatus"*/);
    byte_434F684 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_B7076C(v5, v6);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_22470/*"shiftUpdateStatus"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x26
  __int64 v12; // x24
  char v13; // w25
  int size; // w8

  v10 = this;
  if ( (byte_434F691 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    this = (BattleServantData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    byte_434F691 = 1;
  }
  skillInfoList = v10->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_10:
    sub_B7076C(this, *(_QWORD *)&param);
  v12 = 0LL;
  v13 = 0;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v12 >= size )
      return v13 & 1;
    if ( size <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (BattleServantData_o *)skillInfoList->fields._items->m_Items[v12];
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
      v13 |= (unsigned __int8)this;
      ++v12;
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
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x26
  __int64 v12; // x24
  char v13; // w25
  int size; // w8

  v10 = this;
  if ( (byte_434F690 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    this = (BattleServantData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    byte_434F690 = 1;
  }
  skillInfoList = v10->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_10:
    sub_B7076C(this, *(_QWORD *)&param);
  v12 = 0LL;
  v13 = 0;
  while ( 1 )
  {
    size = skillInfoList->fields._size;
    if ( (int)v12 >= size )
      return v13 & 1;
    if ( size <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (BattleServantData_o *)skillInfoList->fields._items->m_Items[v12];
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
      v13 |= (unsigned __int8)this;
      ++v12;
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
    sub_B7076C(MaxHp, v14);
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


BattleBuffData_BuffData_array *__fastcall BattleServantData__turnBuffProgressing(
        BattleServantData_o *this,
        bool isEndEnemyTurn,
        System_Int32_array *fieldIndiv,
        BattleLogic_o *logic,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  __int64 v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Func_Task_ContingentProperties__o *v25; // x21
  const MethodInfo *v26; // x4

  if ( (byte_434F656 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_BattleBuffData_BuffData_____ctor__);
    sub_B70694(&System_Func_BattleBuffData_BuffData____TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass423_0__turnBuffProgressing_g__RemoveBuff_0__);
    sub_B70694(&BattleServantData___c__DisplayClass423_0_TypeInfo);
    byte_434F656 = 1;
  }
  v10 = sub_B70764(BattleServantData___c__DisplayClass423_0_TypeInfo);
  BattleServantData___c__DisplayClass423_0___ctor((BattleServantData___c__DisplayClass423_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B7076C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = logic;
  sub_B70630((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)logic, v19, v20, v21, v22, v23, v24);
  *(_BYTE *)(v10 + 32) = isEndEnemyTurn;
  v25 = (System_Func_Task_ContingentProperties__o *)sub_B70764(System_Func_BattleBuffData_BuffData____TypeInfo);
  System_Func_Task_ContingentProperties____ctor(
    v25,
    (Il2CppObject *)v10,
    Method_BattleServantData___c__DisplayClass423_0__turnBuffProgressing_g__RemoveBuff_0__,
    (const MethodInfo_2994AB0 *)Method_System_Func_BattleBuffData_BuffData_____ctor__);
  return BattleServantData__RemoveBuffsWithUpdateView(
           this,
           (System_Func_BattleBuffData_BuffData____o *)v25,
           fieldIndiv,
           *(BattleLogic_o **)(v10 + 24),
           v26);
}


void __fastcall BattleServantData__turnBuffProgressingIncrease(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_B7076C(0LL, method);
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
  BattleBuffData_CheckIndividualitiesData_o *v10; // x22
  const MethodInfo *v11; // x1
  __int64 buffData; // x0
  int32_t ActValue_31763688; // w0
  const MethodInfo *v14; // x2
  int32_t v15; // w24
  int32_t v16; // w20
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t ActValue_31763184; // w24
  BattleLogicBuff_ReduceHpProcess_o *v20; // x26
  struct BattleLogicBuff_ConvertReduceRegainProcess_o *convertDamageProc; // x8
  int TotalConvertReduceToRegainParam_k__BackingField; // w8
  int v23; // w20
  bool v24; // w24
  DataVals_o *v25; // x24
  BattleBuffData_o *v26; // x27
  BattleBuffData_CheckIndividualitiesData_o *v27; // x28
  const MethodInfo *v28; // x2
  __int64 v29; // x27
  __int64 v30; // x8
  const MethodInfo *v31; // x2
  BattleActionData_o *NoEffectObject; // x0
  int32_t FixDamage; // w27
  const MethodInfo *v34; // x2
  int v35; // w24
  struct System_Int32_array *shiftDeckList; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v38; // x6
  __int64 v39; // x25
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  BattleActionData_o *v46; // x0
  int32_t Wave; // w0
  const MethodInfo *v48; // x5
  int32_t v49; // w25
  struct BattlePerformance_o *perf; // x8
  __int64 v51; // x1
  const MethodInfo *v52; // x3
  int v53; // w8
  __int64 v54; // x23
  unsigned int v55; // w20
  __int64 v56; // x25
  __int64 *v57; // x25
  __int64 v58; // t1
  __int64 v59; // x8
  int v60; // w9
  bool v61; // vf
  int v62; // w9
  struct BattleData_o *v63; // x8
  int32_t v64; // w22
  const MethodInfo *v65; // x2
  int maxtpturn; // w8
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x3
  __int64 v71; // x0
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-80h] BYREF
  System_String_o *missText; // [xsp+38h] [xbp-68h] BYREF
  bool v76; // [xsp+44h] [xbp-5Ch] BYREF
  bool actflg; // [xsp+48h] [xbp-58h] BYREF
  int32_t digit; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_434F654 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&BattleActionData_DamageData_TypeInfo);
    sub_B70694(&DataVals_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_B70694(&BattleLogicBuff_ReduceHpProcess_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434F654 = 1;
  }
  actflg = 0;
  v76 = 0;
  missText = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.isGutsSleepRelease = 1;
  digit = 1000;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !this->fields.isEnemy )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_95;
    ActValue_31763688 = BattleBuffData__getActValue_31763688((BattleBuffData_o *)buffData, 30, v10, 0LL);
    v15 = ActValue_31763688;
    if ( ActValue_31763688 <= 0 )
      v16 = ActValue_31763688;
    else
      v16 = 0;
    if ( BattleServantData__isGainNp(this, ActValue_31763688 > 0, v14) )
      v18 = v15;
    else
      v18 = v16;
    BattleServantData__addNp(this, v18, 1, v17);
  }
  actflg = 0;
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_95;
  ActValue_31763184 = BattleBuffData__getActValue_31763184((BattleBuffData_o *)buffData, 32, &actflg, v10, 0LL);
  v76 = 0;
  missText = 0LL;
  v20 = (BattleLogicBuff_ReduceHpProcess_o *)sub_B70764(BattleLogicBuff_ReduceHpProcess_TypeInfo);
  BattleLogicBuff_ReduceHpProcess___ctor(v20, this, 0LL);
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_95;
  buffData = BattleBuffData__getActValue(
               (BattleBuffData_o *)buffData,
               33,
               &v76,
               &missText,
               v10,
               (BattleLogicBuff_BaseProcess_o *)v20,
               0LL);
  if ( !v20 )
    goto LABEL_95;
  convertDamageProc = v20->fields.convertDamageProc;
  if ( !convertDamageProc )
    goto LABEL_95;
  TotalConvertReduceToRegainParam_k__BackingField = convertDamageProc->fields._TotalConvertReduceToRegainParam_k__BackingField;
  v23 = TotalConvertReduceToRegainParam_k__BackingField + ActValue_31763184;
  if ( actflg )
  {
    if ( (v23 & 0x80000000) != 0 )
    {
      v24 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v24 = 0;
    if ( TotalConvertReduceToRegainParam_k__BackingField < 1 || (v23 & 0x80000000) != 0 )
      goto LABEL_33;
  }
  v25 = (DataVals_o *)sub_B70764(DataVals_TypeInfo);
  DataVals___ctor(v25, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v26 = this->fields.buffData;
  v27 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v27, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v26 )
    goto LABEL_95;
  if ( BattleBuffData__isTurnBuff(v26, 42, v27, 1, 0LL) )
  {
    LODWORD(v29) = 0;
  }
  else
  {
    buffData = BattleServantData__getUpDownHeal(this, &digit, v28);
    if ( !v25 )
      goto LABEL_95;
    v30 = digit;
    v25->fields.isShowForcedEffect = 1;
    v29 = (int)buffData * (__int64)v23 / v30;
  }
  BattleServantData__provisionalHeal(this, v29, v28);
  buffData = BattleServantData__resultHeal(this, v29, v31);
  if ( !actiondata )
    goto LABEL_95;
  buffData = (__int64)BattleActionData__setHealData(actiondata, this->fields.uniqueId, v29, 0, 0, v25, 0, 0LL);
  if ( (int)v29 <= 0 )
  {
    if ( !v25 )
      goto LABEL_95;
    if ( !v25->fields.isShowForcedEffect )
    {
      if ( !logic )
        goto LABEL_95;
      NoEffectObject = BattleLogic__getNoEffectObject(logic, this->fields.uniqueId, 0, v25, 0, 0LL, 0LL);
      BattleActionData__addAction(actiondata, NoEffectObject, 0LL);
    }
  }
  v24 = 1;
LABEL_33:
  FixDamage = BattleLogicBuff_ReduceHpProcess__GetFixDamage(v20, 0LL);
  buffData = BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(v20, 0LL);
  v76 = buffData & 1;
  if ( (buffData & 1) != 0 )
  {
    v35 = FixDamage & ~(FixDamage >> 31);
    if ( !isAlive )
    {
      buffData = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                   this,
                   this->klass->vtable._14_set_resultHp.methodPtr);
      if ( (int)buffData <= v35 )
      {
        buffData = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                     this,
                     this->klass->vtable._14_set_resultHp.methodPtr);
        v35 = buffData - 1;
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
             this->klass->vtable._14_set_resultHp.methodPtr) <= v35 )
      {
        v35 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                this,
                this->klass->vtable._14_set_resultHp.methodPtr)
            - 1;
      }
    }
    BattleServantData__provisionalDamage(this, v35, v34);
    BattleServantData__ResultDamage(this, v35, 0LL, 0LL, 0LL, 0, v38);
    v39 = sub_B70764(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v39, 0LL);
    if ( !v39 )
      goto LABEL_95;
    *(_DWORD *)(v39 + 28) = this->fields.uniqueId;
    buffData = sub_B706AC(int___TypeInfo, 1LL);
    if ( !buffData )
      goto LABEL_95;
    if ( !*(_DWORD *)(buffData + 24) )
      goto LABEL_96;
    *(_DWORD *)(buffData + 32) = v35;
    *(_QWORD *)(v39 + 96) = buffData;
    sub_B70630(
      (BattleServantConfConponent_o *)(v39 + 96),
      (System_Int32_array **)buffData,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    *(_DWORD *)(v39 + 16) = 0;
    *(_BYTE *)(v39 + 128) = 1;
    if ( !actiondata
      || (BattleActionData__setDamageData(actiondata, (BattleActionData_DamageData_o *)v39, 0LL, 0, 0, 0LL),
          (buffData = (__int64)this->fields.buffData) == 0)
      || (v46 = BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)buffData, this, 1, 0LL),
          BattleActionData__addSideEffectActionData(actiondata, v46, 1, 0LL),
          !logic) )
    {
LABEL_95:
      sub_B7076C(buffData, v11);
    }
    Wave = BattleLogic__getWave(logic, 0LL);
    BattleServantData__setActionHistory(this, -1, 5, Wave, 0, v48);
    v24 = 1;
  }
  if ( !this->fields.isEnemy )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_95;
    buffData = BattleBuffData__getActValue_31763688((BattleBuffData_o *)buffData, 31, v10, 0LL);
    if ( !actiondata )
      goto LABEL_95;
    v49 = buffData;
    BattleActionData__addCriticalStar(actiondata, buffData, 0LL);
    if ( !logic )
      goto LABEL_95;
    buffData = (__int64)logic->fields.data;
    if ( !buffData )
      goto LABEL_95;
    BattleData__addCriticalPoint((BattleData_o *)buffData, v49, 0, 0LL);
    perf = logic->fields.perf;
    if ( !perf )
      goto LABEL_95;
    buffData = (__int64)perf->fields.statusPerf;
    if ( !buffData )
      goto LABEL_95;
    BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)buffData, -1, 1, 0LL);
  }
  if ( BattleServantData__canUseSkill(this, -1, v34) )
  {
    buffData = (__int64)this->fields.skillInfoList;
    if ( !buffData )
      goto LABEL_95;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v73,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buffData,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    for ( i = v73;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
          BattleSkillInfoData__TurnProgress((BattleSkillInfoData_o *)i.fields.current, 1, 0, -1, 0LL, 0LL) )
    {
      if ( !i.fields.current )
        sub_B7076C(0LL, v51);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  }
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_95;
  buffData = (__int64)BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
  if ( !buffData )
    goto LABEL_95;
  v53 = *(_DWORD *)(buffData + 24);
  v54 = buffData;
  if ( v53 >= 1 )
  {
    v55 = 0;
    while ( v55 < v53 )
    {
      v56 = v54 + 8LL * (int)v55;
      v58 = *(_QWORD *)(v56 + 32);
      v57 = (__int64 *)(v56 + 32);
      buffData = v58;
      if ( !v58 )
        goto LABEL_95;
      buffData = BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( (buffData & 1) != 0 )
        goto LABEL_77;
      if ( v55 >= *(_DWORD *)(v54 + 24) )
        break;
      buffData = *v57;
      if ( !*v57 )
        goto LABEL_95;
      buffData = BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( (buffData & 1) != 0 )
      {
LABEL_77:
        if ( v55 >= *(_DWORD *)(v54 + 24) )
          break;
        v59 = *v57;
        if ( !*v57 )
          goto LABEL_95;
        v60 = *(_DWORD *)(v59 + 112);
        v61 = __OFSUB__(v60, 1);
        v62 = v60 - 1;
        if ( v62 < 0 == v61 )
          *(_DWORD *)(v59 + 112) = v62;
      }
      v53 = *(_DWORD *)(v54 + 24);
      if ( (int)++v55 >= v53 )
        goto LABEL_82;
    }
LABEL_96:
    v71 = sub_B70798(buffData);
    sub_B70738(v71, 0LL);
  }
LABEL_82:
  if ( !logic )
    goto LABEL_95;
  v63 = logic->fields.data;
  if ( !v63 )
    goto LABEL_95;
  if ( !BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(this, v63->fields.wavecount, v63->fields.turnCount, v52)
    && !BattleServantData__isTDSeraled(this, v11)
    && !BattleServantData__isNobleSeal(this, v11)
    && this->fields.treasuredvcId >= 1 )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_95;
    v64 = BattleBuffData__getActValue_31763688((BattleBuffData_o *)buffData, 35, v10, 0LL);
    if ( BattleServantData__isGainNp(this, 1, v65) )
    {
      maxtpturn = this->fields.nexttpturn + ~v64;
      if ( this->fields.maxtpturn < maxtpturn )
        maxtpturn = this->fields.maxtpturn;
      this->fields.nexttpturn = maxtpturn & ~(maxtpturn >> 31);
    }
  }
  buffData = (__int64)this->fields.aiState;
  if ( !buffData )
    goto LABEL_95;
  AiState__fieldTurnProgressing((AiState_o *)buffData, 0LL);
  BattleServantData__updateHp(this, v67);
  BattleServantData__updateConditionsBuff(this, fieldIndiv, logic->fields.perf, v68);
  BattleServantData__updateBuff(this, 1, 1, v69);
  return v24;
}


void __fastcall BattleServantData__updateBuff(
        BattleServantData_o *this,
        bool doAuraUpdate,
        bool doClassIconAuraUpdate,
        const MethodInfo *method)
{
  __int64 v7; // x19
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v16; // x20
  Il2CppObject *current; // x21
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_434F68E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__);
    sub_B70694(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo);
    sub_B70694(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    sub_B70694(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass534_0__updateBuff_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass534_0_TypeInfo);
    byte_434F68E = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v7 = sub_B70764(BattleServantData___c__DisplayClass534_0_TypeInfo);
  BattleServantData___c__DisplayClass534_0___ctor((BattleServantData___c__DisplayClass534_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_BYTE *)(v7 + 24) = doAuraUpdate,
        *(_BYTE *)(v7 + 25) = doClassIconAuraUpdate,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_B7076C(paramobjelist, v9);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  v16 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v7 + 32);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v18 = *v16;
      if ( !*v16 )
      {
        v18 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_B70764(UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v18,
          (Il2CppObject *)v7,
          Method_BattleServantData___c__DisplayClass534_0__updateBuff_b__0__,
          (const MethodInfo_29FB830 *)Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__);
        *v16 = v18;
        sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
      }
      if ( (BYTE3(UnityEngine_EventSystems_ExecuteEvents_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      }
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v18,
        (const MethodInfo_1CD1138 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_434F6DA & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F6DA = 1;
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
    sub_B7076C(canSubStateBuffIndv, v16);
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
  int32_t MaxHp; // w20
  const MethodInfo *v4; // x1
  unsigned int v5; // w0
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F68D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_17537/*"changeHp"*/);
    byte_434F68D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  MaxHp = BattleServantData__getMaxHp(this, method);
  if ( MaxHp < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                 this,
                 this->klass->vtable._10_set_hp.methodPtr) )
  {
    v5 = BattleServantData__getMaxHp(this, v4);
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
      this,
      v5,
      this->klass->vtable._11_get_reducedhp.methodPtr);
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v8 )
    {
      if ( !current )
        sub_B7076C(v8, v9);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17537/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateNpGauge(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F685 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23317/*"updateNp"*/);
    byte_434F685 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_B7076C(v5, v6);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_23317/*"updateNp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateNpGauge_20733124(
        BattleServantData_o *this,
        System_Int32_array *incNpArray,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x19
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v22; // x20
  Il2CppObject *current; // x21
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_434F686 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__);
    sub_B70694(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo);
    sub_B70694(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    sub_B70694(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_BattleServantData___c__DisplayClass520_0__updateNpGauge_b__0__);
    sub_B70694(&BattleServantData___c__DisplayClass520_0_TypeInfo);
    byte_434F686 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v7 = sub_B70764(BattleServantData___c__DisplayClass520_0_TypeInfo);
  BattleServantData___c__DisplayClass520_0___ctor((BattleServantData___c__DisplayClass520_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 24) = incNpArray,
        sub_B70630(
          (BattleServantConfConponent_o *)(v7 + 24),
          (System_Int32_array **)incNpArray,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        *(_DWORD *)(v7 + 32) = index,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_B7076C(paramobjelist, v9);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  v22 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v7 + 40);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v24 = *v22;
      if ( !*v22 )
      {
        v24 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_B70764(UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v24,
          (Il2CppObject *)v7,
          Method_BattleServantData___c__DisplayClass520_0__updateNpGauge_b__0__,
          (const MethodInfo_29FB830 *)Method_UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve___ctor__);
        *v22 = v24;
        sub_B70630((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
      }
      if ( (BYTE3(UnityEngine_EventSystems_ExecuteEvents_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      }
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v24,
        (const MethodInfo_1CD1138 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F689 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23322/*"updateTDGauge"*/);
    byte_434F689 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_B7076C(v5, v6);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_23322/*"updateTDGauge"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateView(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F688 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23324/*"updateView"*/);
    byte_434F688 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)paramobjelist,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_B7076C(v5, v6);
      UnityEngine_GameObject__SendMessage_41091392(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_23324/*"updateView"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_B7076C(v7, v8);
  return BattleBuffData__useGuts(buffData, maxhp, motionName, v7, 0LL);
}


void __fastcall BattleServantData__useSkill(
        BattleServantData_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v5; // x1
  SkillLvMaster_o *v6; // x20

  if ( (byte_434F653 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434F653 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !skillInfo)
    || (v6 = (SkillLvMaster_o *)Instance,
        Instance = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                             skillInfo,
                             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        !v6)
    || (Instance = SkillLvMaster__GetEntity(v6, (int32_t)Instance, skillInfo->fields.skilllv, 0LL)) == 0LL )
  {
    sub_B7076C(Instance, v5);
  }
  skillInfo->fields.chargeTurn = *((_DWORD *)Instance + 6);
}


void __fastcall BattleServantData__usedTpWeapon(
        BattleServantData_o *this,
        int32_t addPer,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  UseNoblePhantasmWaveTurnEvent_o *v7; // x22
  __int64 v8; // x1
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0
  int32_t v10; // w0
  BattleBuffData_o *buffData; // x21
  int v12; // w23
  BattleBuffData_CheckIndividualitiesData_o *v13; // x22
  int32_t v14; // w8

  if ( (byte_434F676 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B70694(&UseNoblePhantasmWaveTurnEvent_TypeInfo);
    byte_434F676 = 1;
  }
  this->fields.nexttpturn = this->fields.maxtpturn;
  v7 = (UseNoblePhantasmWaveTurnEvent_o *)sub_B70764(UseNoblePhantasmWaveTurnEvent_TypeInfo);
  UseNoblePhantasmWaveTurnEvent___ctor(v7, battleData, 0LL);
  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner
    || (ServantWaveTurnEventOwner__Add(waveTurnEventOwner, (ServantWaveTurnEvent_o *)v7, 0LL),
        v10 = BattleUtility__FloorToInt((float)((float)this->fields.np / (float)this->fields.lineMaxNp) * 100.0, 0LL),
        buffData = this->fields.buffData,
        v12 = v10,
        v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v13, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_B7076C(waveTurnEventOwner, v8);
  }
  if ( v12 <= 100 )
    v12 = 100;
  v14 = v12 + addPer + 100 * BattleBuffData__getActValue_31763688(buffData, 60, v13, 0LL);
  if ( v14 >= 500 )
    v14 = 500;
  this->fields.tmp_npper = v14;
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
  sub_B70630(&this->fields);
  this->fields.saveDataArray = array;
  sub_B70630(&this->fields.saveDataArray);
  return this;
}


void __fastcall BattleServantData_SaveData___ctor(BattleServantData_SaveData_o *this, const MethodInfo *method)
{
  if ( (byte_434ED04 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    byte_434ED04 = 1;
  }
  *(_QWORD *)&this->fields.deckIndex = -1LL;
  this->fields.dressDispId = -1;
  this->fields.shiftNpcId = -1;
  this->fields.commandAssistIds = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 5LL);
  sub_B70630(&this->fields.commandAssistIds);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData__EnumerateContinueFunctionSkill_d__373___ctor(
        BattleServantData__EnumerateContinueFunctionSkill_d__373_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleServantData__EnumerateContinueFunctionSkill_d__373__MoveNext(
        BattleServantData__EnumerateContinueFunctionSkill_d__373_o *this,
        const MethodInfo *method)
{
  BattleServantData__EnumerateContinueFunctionSkill_d__373_o *v2; // x19
  int32_t _1__state; // w8
  BattleServantData_o *_4__this; // x20
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  struct BattleBuffData_BuffData_array **p__7__wrap1; // x21
  int v8; // w8
  int32_t *p__7__wrap2; // x23
  __int64 v10; // x8
  BattleBuffData_BuffData_o *v11; // x22
  struct BattleBuffData_BuffData_array *v12; // x9
  int max_length; // w10
  bool result; // w0
  struct BattleSkillInfoData_o **p__2__current; // x19
  __int64 v16; // x0

  v2 = this;
  if ( (byte_434ED02 & 1) == 0 )
  {
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__373_o *)sub_B70694(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_434ED02 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap2 = &v2->fields.__7__wrap2;
    p__7__wrap1 = &v2->fields.__7__wrap1;
    v2->fields.__1__state = -1;
    goto LABEL_14;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_21;
  buffData = _4__this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B70764(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, _4__this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_21;
  v2->fields.__7__wrap1 = BattleBuffData__getBuffList_31751548(buffData, 131, v6, 1, 0, 0LL, 0LL);
  p__7__wrap1 = &v2->fields.__7__wrap1;
  sub_B70630(&v2->fields.__7__wrap1);
  v8 = 0;
  v2->fields.__7__wrap2 = 0;
  for ( p__7__wrap2 = &v2->fields.__7__wrap2; ; *p__7__wrap2 = v8 )
  {
    v12 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
      goto LABEL_21;
    max_length = v12->max_length;
    if ( v8 >= max_length )
    {
      *p__7__wrap1 = 0LL;
      sub_B70630(p__7__wrap1);
      return 0;
    }
    if ( v8 >= (unsigned int)max_length )
    {
      v16 = sub_B70798(this);
      sub_B70738(v16, 0LL);
    }
    v10 = (__int64)v12 + 8 * v8;
    v11 = *(BattleBuffData_BuffData_o **)(v10 + 32);
    if ( !v2->fields.isKeepAlive )
      break;
    if ( !v11 )
      goto LABEL_21;
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__373_o *)BattleBuffData_BuffData__get_GeneralParamOwner(
                                                                           *(BattleBuffData_BuffData_o **)(v10 + 32),
                                                                           0LL);
    if ( !this )
      goto LABEL_21;
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__373_o *)((__int64 (__fastcall *)(BattleServantData__EnumerateContinueFunctionSkill_d__373_o *, Il2CppMethodPointer))this->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
                                                                           this,
                                                                           this->klass->vtable._6_System_Collections_Generic_IEnumerator_BattleSkillInfoData__get_Current.methodPtr);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
LABEL_14:
    v8 = *p__7__wrap2 + 1;
  }
  if ( !_4__this )
LABEL_21:
    sub_B7076C(this, method);
  v2->fields.__2__current = BattleServantData__CreateFunctionSkillInfoData(_4__this, v11, 0LL);
  p__2__current = &v2->fields.__2__current;
  sub_B70630(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateContinueFunctionSkill_d__373__System_Collections_Generic_IEnumerable_BattleSkillInfoData__GetEnumerator(
        BattleServantData__EnumerateContinueFunctionSkill_d__373_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  BattleServantData__EnumerateContinueFunctionSkill_d__373_o *v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *result; // x0

  if ( (byte_434ED03 & 1) == 0 )
  {
    sub_B70694(&BattleServantData__EnumerateContinueFunctionSkill_d__373_TypeInfo);
    byte_434ED03 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (BattleServantData__EnumerateContinueFunctionSkill_d__373_o *)sub_B70764(BattleServantData__EnumerateContinueFunctionSkill_d__373_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v4 )
      sub_B7076C(CurrentManagedThreadId, v6);
    v4->fields.__4__this = this->fields.__4__this;
    sub_B70630(&v4->fields.__4__this);
  }
  result = (System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v4;
  v4->fields.isKeepAlive = this->fields.__3__isKeepAlive;
  return result;
}


BattleSkillInfoData_o *__fastcall BattleServantData__EnumerateContinueFunctionSkill_d__373__System_Collections_Generic_IEnumerator_BattleSkillInfoData__get_Current(
        BattleServantData__EnumerateContinueFunctionSkill_d__373_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantData__EnumerateContinueFunctionSkill_d__373__System_Collections_IEnumerator_Reset(
        BattleServantData__EnumerateContinueFunctionSkill_d__373_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleServantData__EnumerateContinueFunctionSkill_d__373_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleServantData__EnumerateContinueFunctionSkill_d__373__System_Collections_IEnumerator_get_Current(
        BattleServantData__EnumerateContinueFunctionSkill_d__373_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleServantData__EnumerateContinueFunctionSkill_d__373__System_IDisposable_Dispose(
        BattleServantData__EnumerateContinueFunctionSkill_d__373_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleServantData___c_StaticFields *static_fields; // x0

  if ( (byte_434ECF7 & 1) == 0 )
  {
    sub_B70694(&BattleServantData___c_TypeInfo);
    byte_434ECF7 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleServantData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleServantData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantData___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall BattleServantData___c___ctor(BattleServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c___AddPassiveBuffOnTransform_b__748_0(
        BattleServantData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( (byte_434ECF9 & 1) == 0 )
  {
    this = (BattleServantData___c_o *)sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    byte_434ECF9 = 1;
  }
  if ( !x
    || (this = (BattleServantData___c_o *)BattleServantData__get_BuffData(x, 0LL)) == 0LL
    || (this = (BattleServantData___c_o *)this[4].monitor) == 0LL )
  {
    sub_B7076C(this, x);
  }
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
}


bool __fastcall BattleServantData___c___AddPassiveBuffOnTransform_b__748_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return BattleSkillInfoData__IsReplacePassiveTypeOnTransform(x->fields.type, 0LL);
}


bool __fastcall BattleServantData___c___EnumerateSkillIndividuality_b__629_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.type != 20;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData___c___EnumerateSkillIndividuality_b__629_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))x->klass->vtable._6_get_IndividualityArray.method)(
                                                            x,
                                                            x->klass->vtable._7_getCutInId.methodPtr);
}


int32_t __fastcall BattleServantData___c___GetAddSideEffectBuffList_b__445_1(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.addOrder;
}


bool __fastcall BattleServantData___c___RemovePassiveSkill_b__745_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return BattleSkillInfoData__IsPassive(s->fields.type, 0LL);
}


bool __fastcall BattleServantData___c___ResetServantSelfSkill_b__375_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.type == 11;
}


bool __fastcall BattleServantData___c___getActiveSkillInfos_b__401_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return !s->fields.isPassive && s->fields.isUseSkill;
}


int32_t __fastcall BattleServantData___c___getAiParam_b__682_0(
        BattleServantData___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s;
}


int32_t __fastcall BattleServantData___c___getAttackSideEffectBuffList_b__444_0(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *a1,
        BattleBuffData_BuffData_o *a2,
        const MethodInfo *method)
{
  if ( !a1 || !a2 )
    sub_B7076C(this, a1);
  return a1->fields.addOrder - a2->fields.addOrder;
}


bool __fastcall BattleServantData___c___getPassiveSkills_b__317_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return s->fields.isPassive;
}


BattleServantData_PartAnimationSaveData_o *__fastcall BattleServantData___c___getSaveData_b__281_0(
        BattleServantData___c_o *this,
        System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____o x,
        const MethodInfo *method)
{
  struct BattlePlayAnimationComponent_SaveData_array *value; // x19
  struct System_String_o *key; // x20
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_434ECF8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____get_Value__);
    sub_B70694(&BattleServantData_PartAnimationSaveData_TypeInfo);
    byte_434ECF8 = 1;
  }
  v5 = (Il2CppObject *)sub_B70764(BattleServantData_PartAnimationSaveData_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5[1].klass = (Il2CppClass *)key;
  sub_B70630(&v5[1]);
  v5[1].monitor = value;
  sub_B70630(&v5[1].monitor);
  return (BattleServantData_PartAnimationSaveData_o *)v5;
}


System_String_o *__fastcall BattleServantData___c___setSaveData_b__286_0(
        BattleServantData___c_o *this,
        BattleServantData_PartAnimationSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.key;
}


BattlePlayAnimationComponent_SaveData_array *__fastcall BattleServantData___c___setSaveData_b__286_1(
        BattleServantData___c_o *this,
        BattleServantData_PartAnimationSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.saveDataArray;
}


void __fastcall BattleServantData___c__650_object____cctor(const MethodInfo_1F37B44 *method)
{
  BattleServantData___c__650_T__c *klass; // x20
  Il2CppClass *_0_BattleServantData___c__650_T; // x20
  __int64 v4; // x0
  BattleServantData___c__650_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BattleServantData___c__650_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleServantData___c__650_T__c *v16; // x19
  Il2CppClass *_2_BattleServantData___c__650_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(method->klass);
  _0_BattleServantData___c__650_T = klass->rgctx_data->_0_BattleServantData___c__650_T_;
  if ( (BYTE2(_0_BattleServantData___c__650_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_0_BattleServantData___c__650_T);
  v4 = sub_B70764(_0_BattleServantData___c__650_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_B08394(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BattleServantData___c__650_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_B08394(v8);
  methodPointer(v6, v8->rgctx_data->_1_BattleServantData___c__650_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B08394(v16);
  _2_BattleServantData___c__650_T = v16->rgctx_data->_2_BattleServantData___c__650_T_;
  if ( (BYTE2(_2_BattleServantData___c__650_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_2_BattleServantData___c__650_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleServantData___c__650_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B70630(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleServantData___c__650_object____ctor(
        BattleServantData___c__650_T__o *this,
        const MethodInfo_1F37C20 *method)
{
  if ( !this )
    sub_B7076C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__650_object____HasWaveTurnEvent_b__650_0(
        BattleServantData___c__650_T__o *this,
        ServantWaveTurnEvent_o *x,
        const MethodInfo_1F37C38 *method)
{
  Il2CppClass *_3_T; // x19

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE2(_3_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->klass->rgctx_data->_3_T);
  return sub_B70754(x, _3_T) != 0;
}


void __fastcall BattleServantData___c__DisplayClass299_0___ctor(
        BattleServantData___c__DisplayClass299_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass299_0___setBaseServantData_b__1(
        BattleServantData___c__DisplayClass299_0_o *this,
        commandAssistData_o *x,
        const MethodInfo *method)
{
  struct BattleDeckServantData_o *inDeckSvt; // x8

  if ( !x || (inDeckSvt = this->fields.inDeckSvt) == 0LL )
    sub_B7076C(this, x);
  return x->fields.userSvtId == inDeckSvt->fields.userSvtId;
}


void __fastcall BattleServantData___c__DisplayClass299_1___ctor(
        BattleServantData___c__DisplayClass299_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass299_1___setBaseServantData_b__0(
        BattleServantData___c__DisplayClass299_1_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct CommandCodeInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_B7076C(this, id);
  return info->fields.id == id;
}


void __fastcall BattleServantData___c__DisplayClass299_2___ctor(
        BattleServantData___c__DisplayClass299_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass299_2___setBaseServantData_b__2(
        BattleServantData___c__DisplayClass299_2_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass299_2_o *v4; // x20
  struct BattleServantData___c__DisplayClass299_0_o *CS___8__locals1; // x9
  struct System_Int32_array *skillIdList; // x10
  __int64 i; // x8
  struct System_Int32_array *skillLvList; // x9
  __int64 v10; // x0

  if ( !x )
    goto LABEL_10;
  v4 = this;
  this = (BattleServantData___c__DisplayClass299_2_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._5_get_skillId.method)(
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
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
LABEL_10:
    sub_B7076C(this, x);
  }
  return 0;
}


void __fastcall BattleServantData___c__DisplayClass315_0___ctor(
        BattleServantData___c__DisplayClass315_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass315_0___ReplaceSelfSkillInfo_b__0(
        BattleServantData___c__DisplayClass315_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.type == this->fields.skillInfoType && x->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass318_0___ctor(
        BattleServantData___c__DisplayClass318_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass318_0___GetHasSideEffectSkillEffectIds_b__0(
        BattleServantData___c__DisplayClass318_0_o *this,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass318_0_o *v4; // x20
  struct System_String_array *svals; // x8
  unsigned __int64 v6; // x23
  unsigned __int64 max_length; // x9
  System_String_o *v8; // x22
  DataVals_o *v9; // x21
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v11; // x9
  int32_t v12; // w21
  __int64 v13; // x0

  v4 = this;
  if ( (byte_434ECFA & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B70694(&DataVals_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    this = (BattleServantData___c__DisplayClass318_0_o *)sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    byte_434ECFA = 1;
  }
  if ( !ent || (svals = ent->fields.svals) == 0LL )
LABEL_20:
    sub_B7076C(this, ent);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = svals->max_length;
    if ( (__int64)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_22;
    v8 = svals->m_Items[v6];
    v9 = (DataVals_o *)sub_B70764(DataVals_TypeInfo);
    DataVals___ctor(v9, v8, 0LL);
    funcId = ent->fields.funcId;
    if ( !funcId )
      goto LABEL_20;
    v11 = funcId->max_length;
    if ( (__int64)v6 < (int)v11 )
    {
      if ( v6 >= v11 )
      {
LABEL_22:
        v13 = sub_B70798(this);
        sub_B70738(v13, 0LL);
      }
      this = (BattleServantData___c__DisplayClass318_0_o *)v4->fields.funcMst;
      if ( !this )
        goto LABEL_20;
      this = (BattleServantData___c__DisplayClass318_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                             funcId->m_Items[v6 + 1],
                                                             (const MethodInfo_21C0440 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        if ( !v9 )
          goto LABEL_20;
        DataVals__SetTempType(v9, v4->fields.funcMst, (int32_t)this->fields.retList, 0LL);
        this = (BattleServantData___c__DisplayClass318_0_o *)DataVals__GetParam(v9, 34, 0, 0LL);
        if ( (int)this >= 1 )
        {
          v12 = (int)this;
          this = (BattleServantData___c__DisplayClass318_0_o *)v4->fields.retList;
          if ( !this )
            goto LABEL_20;
          this = (BattleServantData___c__DisplayClass318_0_o *)System_Collections_Generic_List_int___Contains(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 v12,
                                                                 (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (BattleServantData___c__DisplayClass318_0_o *)v4->fields.retList;
            if ( !this )
              goto LABEL_20;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)this,
              v12,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
    svals = ent->fields.svals;
    ++v6;
    if ( !svals )
      goto LABEL_20;
  }
}


void __fastcall BattleServantData___c__DisplayClass370_0___ctor(
        BattleServantData___c__DisplayClass370_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass370_0___ContinuePreProcess_b__0(
        BattleServantData___c__DisplayClass370_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t buffId; // w19
  BattleServantData___c__DisplayClass370_0_o *v4; // x20
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
    this = (BattleServantData___c__DisplayClass370_0_o *)v4->fields.buffMst;
    if ( this )
    {
      IsUnSubStateWhenAliveContinue = BuffMaster__IsUnSubStateWhenAliveContinue((BuffMaster_o *)this, buffId, 0LL);
      return !IsUnSubStateWhenAliveContinue;
    }
LABEL_13:
    sub_B7076C(this, buff);
  }
  this = (BattleServantData___c__DisplayClass370_0_o *)this->fields.buffMst;
  if ( !this )
    goto LABEL_13;
  IsUnSubStateWhenAliveContinue = BuffMaster__IsUnSubStateWhenDeadContinue((BuffMaster_o *)this, buffId, 0LL);
  return !IsUnSubStateWhenAliveContinue;
}


void __fastcall BattleServantData___c__DisplayClass398_0___ctor(
        BattleServantData___c__DisplayClass398_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass398_0___isUseSelfSkill_b__0(
        BattleServantData___c__DisplayClass398_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return s->fields.type == 11 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass399_0___ctor(
        BattleServantData___c__DisplayClass399_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass399_0___getSelfSkillInfo_b__0(
        BattleServantData___c__DisplayClass399_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return s->fields.type == 11 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass400_0___ctor(
        BattleServantData___c__DisplayClass400_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass400_0___getTempSkillInfo_b__0(
        BattleServantData___c__DisplayClass400_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_B7076C(this, 0LL);
  return s->fields.type == 20 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass422_0___ctor(
        BattleServantData___c__DisplayClass422_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData___c__DisplayClass422_0___RemoveNoTurnBuffWithUpdateView_g__RemoveBuff_0(
        BattleServantData___c__DisplayClass422_0_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x8
  BattleBuffData_o *buffData; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (buffData = _4__this->fields.buffData) == 0LL )
    sub_B7076C(this, method);
  return BattleBuffData__RemoveNoTurnBuff(buffData, this->fields.logic, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass423_0___ctor(
        BattleServantData___c__DisplayClass423_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData___c__DisplayClass423_0___turnBuffProgressing_g__RemoveBuff_0(
        BattleServantData___c__DisplayClass423_0_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !_4__this->fields.buffData )
    sub_B7076C(this, method);
  return BattleBuffData__turnProgressing(
           _4__this->fields.buffData,
           this->fields.logic,
           this->fields.isEndEnemyTurn,
           _4__this->fields.uniqueId,
           0LL);
}


void __fastcall BattleServantData___c__DisplayClass445_0___ctor(
        BattleServantData___c__DisplayClass445_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleServantData___c__DisplayClass445_0___GetAddSideEffectBuffList_b__0(
        BattleServantData___c__DisplayClass445_0_o *this,
        int32_t act,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x9
  BattleServantData___c__DisplayClass445_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (BattleServantData___c__DisplayClass445_0_o *)_4__this->fields.buffData) == 0LL) )
    sub_B7076C(this, act);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetFixBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                act,
                                                                                v4->fields.checkData,
                                                                                1,
                                                                                0LL);
}


void __fastcall BattleServantData___c__DisplayClass520_0___ctor(
        BattleServantData___c__DisplayClass520_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass520_0___updateNpGauge_b__0(
        BattleServantData___c__DisplayClass520_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass520_0_o *v5; // x20
  IEventMessageRecieve_c *klass; // x8
  struct System_Int32_array *incNpArray; // x21
  struct BattleServantData_o *_4__this; // x22
  unsigned int index; // w20
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_434ECFB & 1) == 0 )
  {
    this = (BattleServantData___c__DisplayClass520_0_o *)sub_B70694(&IEventMessageRecieve_TypeInfo);
    byte_434ECFB = 1;
  }
  if ( !reciever )
    sub_B7076C(this, reciever);
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
    p_method = sub_B08590(reciever, IEventMessageRecieve_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, struct System_Int32_array *, _QWORD, _QWORD))p_method)(
    reciever,
    _4__this,
    incNpArray,
    index,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass521_0___ctor(
        BattleServantData___c__DisplayClass521_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass521_0___UpdateNpImmediately_b__0(
        BattleServantData___c__DisplayClass521_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  int32_t inputNp; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434ECFC & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_15250/*"UpdateNpImmediately"*/);
    byte_434ECFC = 1;
  }
  inputNp = this->fields.inputNp;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &inputNp, method);
  if ( !x )
    sub_B7076C(v5, v6);
  UnityEngine_GameObject__SendMessage_41091392(x, (System_String_o *)StringLiteral_15250/*"UpdateNpImmediately"*/, v5, 1, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass524_0___ctor(
        BattleServantData___c__DisplayClass524_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass524_0___UpdateTdGauge_b__0(
        BattleServantData___c__DisplayClass524_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // w8
  __int64 v8; // x0

  if ( (byte_434ECFD & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_15256/*"UpdateTdGauge"*/);
    byte_434ECFD = 1;
  }
  v5 = sub_B706AC(int___TypeInfo, 2LL);
  if ( !v5 )
    goto LABEL_9;
  v7 = *(_DWORD *)(v5 + 24);
  if ( !v7 || (*(_DWORD *)(v5 + 32) = this->fields.now, v7 == 1) )
  {
    v8 = sub_B70798(v5);
    sub_B70738(v8, 0LL);
  }
  *(_DWORD *)(v5 + 36) = this->fields.max;
  if ( !x )
LABEL_9:
    sub_B7076C(v5, v6);
  UnityEngine_GameObject__SendMessage_41091392(x, (System_String_o *)StringLiteral_15256/*"UpdateTdGauge"*/, (Il2CppObject *)v5, 1, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass534_0___ctor(
        BattleServantData___c__DisplayClass534_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass534_0___updateBuff_b__0(
        BattleServantData___c__DisplayClass534_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass534_0_o *v5; // x21
  struct BattleServantData_o *_4__this; // x20
  IEventMessageRecieve_c *klass; // x8
  _BOOL4 doAuraUpdate; // w22
  _BOOL4 doClassIconAuraUpdate; // w21
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_434ECFE & 1) == 0 )
  {
    this = (BattleServantData___c__DisplayClass534_0_o *)sub_B70694(&IEventMessageRecieve_TypeInfo);
    byte_434ECFE = 1;
  }
  if ( !reciever )
    sub_B7076C(this, reciever);
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
    p_method = sub_B08590(reciever, IEventMessageRecieve_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, _BOOL4, _BOOL4, _QWORD))p_method)(
    reciever,
    _4__this,
    doAuraUpdate,
    doClassIconAuraUpdate,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass625_0___ctor(
        BattleServantData___c__DisplayClass625_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass625_0___EnumerateIndividuality_b__0(
        BattleServantData___c__DisplayClass625_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_434ECFF & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    byte_434ECFF = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.subBuffIndividualities,
            x,
            (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall BattleServantData___c__DisplayClass706_0___ctor(
        BattleServantData___c__DisplayClass706_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass706_0___GetCommandCodeInfo_b__0(
        BattleServantData___c__DisplayClass706_0_o *this,
        CommandCodeInfo_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_B7076C(this, 0LL);
  return c->fields.id == this->fields.userCommandCodeId;
}


void __fastcall BattleServantData___c__DisplayClass746_0___ctor(
        BattleServantData___c__DisplayClass746_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass746_0___RemovePassiveBuffOnTransform_b__0(
        BattleServantData___c__DisplayClass746_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x8
  struct BattleData_o *data; // x9

  if ( !x
    || (_4__this = this->fields.__4__this) == 0LL
    || (data = this->fields.data) == 0LL
    || (this = (BattleServantData___c__DisplayClass746_0_o *)x->fields.buffData) == 0LL )
  {
    sub_B7076C(this, x);
  }
  BattleBuffData__RemovePassiveReplacedOnTransform(
    (BattleBuffData_o *)this,
    _4__this->fields.uniqueId,
    data->fields.logic,
    0LL);
}


void __fastcall BattleServantData___c__DisplayClass749_0___ctor(
        BattleServantData___c__DisplayClass749_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass749_0___UpdateClassBoardSkillBuff_b__0(
        BattleServantData___c__DisplayClass749_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass749_0_o *v3; // x19
  struct AddSkillData_o *skillData; // x8

  if ( !s
    || (v3 = this,
        this = (BattleServantData___c__DisplayClass749_0_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._5_get_skillId.method)(
                                                               s,
                                                               s->klass->vtable._6_get_IndividualityArray.methodPtr,
                                                               method),
        (skillData = v3->fields.skillData) == 0LL) )
  {
    sub_B7076C(this, s);
  }
  return (_DWORD)this == skillData->fields.id;
}


void __fastcall BattleServantData___c__DisplayClass768_0___ctor(
        BattleServantData___c__DisplayClass768_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData___c__DisplayClass768_0___FilterDisplayingSkillIdArray_b__0(
        BattleServantData___c__DisplayClass768_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *displayChangeSkillIdHashSet; // x0

  if ( (byte_434ED00 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_434ED00 = 1;
  }
  displayChangeSkillIdHashSet = this->fields.displayChangeSkillIdHashSet;
  if ( !displayChangeSkillIdHashSet )
    sub_B7076C(0LL, *(_QWORD *)&x);
  return !System_Collections_Generic_HashSet_int___Contains(
            displayChangeSkillIdHashSet,
            -x,
            (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData___c__DisplayClass768_0___FilterDisplayingSkillIdArray_b__1(
        BattleServantData___c__DisplayClass768_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *displayChangeSkillIdHashSet; // x0

  if ( (byte_434ED01 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_434ED01 = 1;
  }
  displayChangeSkillIdHashSet = this->fields.displayChangeSkillIdHashSet;
  if ( !displayChangeSkillIdHashSet )
    sub_B7076C(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           displayChangeSkillIdHashSet,
           x,
           (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}