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
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_LinkedList_T__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  BattleServantSnapShotGroupDefault_o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 v29; // x2
  AiState_o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_object__o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x1
  __int64 v44; // x2
  ServantWaveTurnEventOwner_o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_object__o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x1
  __int64 v57; // x2
  System_Collections_Generic_List_object__o *v58; // x20
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x1
  __int64 v62; // x2
  System_Collections_Generic_List_object__o *v63; // x20
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Int32_array *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3

  if ( (byte_49FEB04 & 1) == 0 )
  {
    sub_1B640C8(&AiState_TypeInfo, method);
    sub_1B640C8(&BattleServantSnapShotGroupDefault_TypeInfo, v4);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePointData___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_BattlePointData__TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v16);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B640C8(&ServantWaveTurnEventOwner_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_1/*""*/, v19);
    byte_49FEB04 = 1;
  }
  this->fields.deckIndex = -1;
  this->fields.transformUserSvtId = -1LL;
  this->fields.transformIndex = -1;
  this->fields.appearanceId = -1;
  *(_QWORD *)&this->fields.shiftNpcId = -1LL;
  *(int64_t *)((char *)&this->fields.beforeUserSvtId + 4) = -1LL;
  v20 = (System_Collections_Generic_LinkedList_T__o *)sub_1B64314(
                                                        System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo,
                                                        method,
                                                        v2);
  System_Collections_Generic_LinkedList_object____ctor(
    v20,
    (const MethodInfo_33EF06C *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__);
  this->fields.actionHistory = (struct System_Collections_Generic_LinkedList_BattleServantActionHistory__o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.actionHistory, (int32_t)v20, v21, v22);
  v25 = (BattleServantSnapShotGroupDefault_o *)sub_1B64314(BattleServantSnapShotGroupDefault_TypeInfo, v23, v24);
  BattleServantSnapShotGroupDefault___ctor(v25, 0LL);
  this->fields._SnapShotDamagedOnLogicDead_k__BackingField = v25;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._SnapShotDamagedOnLogicDead_k__BackingField,
    (int32_t)v25,
    v26,
    v27);
  v30 = (AiState_o *)sub_1B64314(AiState_TypeInfo, v28, v29);
  AiState___ctor(v30, 0LL);
  this->fields.aiState = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiState, (int32_t)v30, v31, v32);
  this->fields.actorScale = 100;
  *(_QWORD *)&this->fields.nplineCount = 0x6400000003LL;
  *(_QWORD *)&this->fields.roleType = 0xFFFFFFFF00000001LL;
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  this->fields.skillInfoList = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)v35;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillInfoList, (int32_t)v35, v36, v37);
  v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.tdErrorStatusVoiceSeList = (struct System_Collections_Generic_List_string__o *)v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tdErrorStatusVoiceSeList, (int32_t)v40, v41, v42);
  this->fields.deadTurn = 1;
  v45 = (ServantWaveTurnEventOwner_o *)sub_1B64314(ServantWaveTurnEventOwner_TypeInfo, v43, v44);
  ServantWaveTurnEventOwner___ctor(v45, 0LL);
  this->fields.waveTurnEventOwner = v45;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.waveTurnEventOwner, (int32_t)v45, v46, v47);
  v50 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v48,
                                                       v49);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.paramobjelist = (struct System_Collections_Generic_List_GameObject__o *)v50;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.paramobjelist, (int32_t)v50, v51, v52);
  v53 = (int)StringLiteral_1/*""*/;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statestring, v53, v54, v55);
  this->fields.isGutsSleepRelease = 1;
  this->fields.nextPossibleTimePopEffect = -1.0;
  *(_QWORD *)&this->fields.selectedTDCardId = -1LL;
  this->fields.wasAttackTargetId = -1;
  v58 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo,
                                                       v56,
                                                       v57);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
  this->fields.adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)v58;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.adjustmentList, (int32_t)v58, v59, v60);
  this->fields.fixNpSpeed = 1;
  v63 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattlePointData__TypeInfo,
                                                       v61,
                                                       v62);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattlePointData___ctor__);
  this->fields.battlePointList = (struct System_Collections_Generic_List_BattlePointData__o *)v63;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battlePointList, (int32_t)v63, v64, v65);
  this->fields.tempTreasuredvcLv = 1;
  v66 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.wkzero = v66;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.wkzero, (int32_t)v66, v67, v68);
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
  __int64 v6; // x1
  __int64 v7; // x8
  BattleServantData_o *v8; // x21
  unsigned __int64 v9; // x22
  int32_t *v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w4
  const MethodInfo *v14; // [xsp+0h] [xbp-40h]

  if ( !userSvtData
    || (v4 = this,
        (this = (BattleServantData_o *)BattleUserServantData__GetAddPassiveSkillArray(userSvtData, 0LL)) == 0LL) )
  {
    sub_1B64324(this);
  }
  v7 = *(_QWORD *)&this->fields.uniqueId;
  v8 = this;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
        sub_1B6432C(this, v6);
      v10 = (int32_t *)(&v8->fields.userSvtId.fields.currentCryptoKey + v9);
      v11 = *skillIndex;
      v12 = *v10;
      v13 = v10[1];
      ++*skillIndex;
      this = (BattleServantData_o *)BattleServantData__addSkillInfo(v4, 24, v11, v12, v13, -1LL, -1, 0LL, v14);
      LODWORD(v7) = v8->fields.uniqueId;
      ++v9;
    }
    while ( (__int64)v9 < (int)v7 );
  }
}


void __fastcall BattleServantData__AddAppendSkillInfo(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvtData,
        int32_t *skillIndex,
        const MethodInfo *method)
{
  void *AppendPassiveSkillArray; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  _QWORD *v9; // x21
  unsigned __int64 v10; // x24
  __int64 v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // [xsp+0h] [xbp-50h]

  if ( !userSvtData )
    sub_1B64324(this);
  AppendPassiveSkillArray = BattleUserServantData__GetAppendPassiveSkillArray(userSvtData, 0LL);
  if ( AppendPassiveSkillArray )
  {
    v8 = *((_QWORD *)AppendPassiveSkillArray + 3);
    v9 = AppendPassiveSkillArray;
    if ( (int)v8 >= 1 )
    {
      v10 = 0LL;
      do
      {
        if ( v10 >= (unsigned int)v8 )
          sub_1B6432C(AppendPassiveSkillArray, v7);
        v11 = v9[v10 + 4];
        AppendPassiveSkillArray = (void *)Follower__IsNpc(this->fields.followerType, 0LL);
        if ( ((unsigned __int8)AppendPassiveSkillArray & 1) == 0 || HIDWORD(v11) )
        {
          v12 = (*skillIndex)++;
          AppendPassiveSkillArray = BattleServantData__addSkillInfo(
                                      this,
                                      25,
                                      v12,
                                      v11,
                                      SHIDWORD(v11),
                                      -1LL,
                                      -1,
                                      0LL,
                                      v13);
        }
        LODWORD(v8) = *((_DWORD *)v9 + 6);
        ++v10;
      }
      while ( (__int64)v10 < (int)v8 );
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__AddBattlePoint(
        BattleServantData_o *this,
        int32_t battlePointId,
        int32_t value,
        bool isOverwrite,
        const MethodInfo *method)
{
  BattlePointData_o *BattlePointData; // x0

  BattlePointData = BattleServantData__GetBattlePointData(this, battlePointId, *(const MethodInfo **)&value);
  if ( BattlePointData )
    LOBYTE(BattlePointData) = BattlePointData__AddPoint(BattlePointData, value, isOverwrite, 0LL);
  return (char)BattlePointData;
}


System_Collections_Generic_List_BattleSkillInfoData__o *__fastcall BattleServantData__AddClassBoardSkillInfo(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvtData,
        int32_t *skillIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  BattleSkillInfoData_o *IsNullOrEmpty; // x0
  System_Collections_ICollection_o *ClassBoardSkillArray; // x22
  __int64 v12; // x1
  void *monitor; // x8
  unsigned __int64 v14; // x23
  int32_t *v15; // x8
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w4
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  BattleSkillInfoData_o *v24; // x1
  Il2CppClass **v25; // x0
  const MethodInfo *v27; // [xsp+0h] [xbp-50h]

  if ( (byte_49FEAF3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, userSvtData);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v8);
    byte_49FEAF3 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                      userSvtData,
                                                      skillIndex);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( !userSvtData )
    goto LABEL_16;
  ClassBoardSkillArray = (System_Collections_ICollection_o *)BattleUserServantData__GetClassBoardSkillArray(
                                                               userSvtData,
                                                               0LL);
  IsNullOrEmpty = (BattleSkillInfoData_o *)BasicHelper__IsNullOrEmpty(ClassBoardSkillArray, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !ClassBoardSkillArray )
      goto LABEL_16;
    monitor = ClassBoardSkillArray[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)monitor )
          sub_1B6432C(IsNullOrEmpty, v12);
        v15 = (int32_t *)(&ClassBoardSkillArray[2].klass + v14);
        v16 = *skillIndex;
        v17 = *v15;
        v18 = v15[1];
        ++*skillIndex;
        IsNullOrEmpty = BattleServantData__addSkillInfo(this, 26, v16, v17, v18, -1LL, -1, 0LL, v27);
        if ( !v9 )
          break;
        items = v9->fields._items;
        v22 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        v24 = IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
        }
        LODWORD(monitor) = ClassBoardSkillArray[1].monitor;
        if ( (__int64)++v14 >= (int)monitor )
          return (System_Collections_Generic_List_BattleSkillInfoData__o *)v9;
      }
LABEL_16:
      sub_1B64324(IsNullOrEmpty);
    }
  }
  return (System_Collections_Generic_List_BattleSkillInfoData__o *)v9;
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
  const MethodInfo *v10; // [xsp+0h] [xbp-40h]

  if ( !userSvtData
    || (classPassive = userSvtData->fields.classPassive, v6 = this, !classPassive)
    && ((svtdata = this->fields.svtdata) == 0LL || (classPassive = svtdata->fields.classPassive) == 0LL) )
  {
    sub_1B64324(this);
  }
  v8 = *(_QWORD *)&classPassive->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v8 )
        sub_1B6432C(this, userSvtData);
      this = (BattleServantData_o *)BattleServantData__addSkillInfo(
                                      v6,
                                      10,
                                      v9,
                                      classPassive->m_Items[v9 + 1],
                                      1,
                                      -1LL,
                                      -1,
                                      0LL,
                                      v10);
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
  BattleLogicSkill_SkillExecArgs_o *v4; // x20
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
  Il2CppObject ***v17; // x0
  BattleServantData___c_c *v18; // x0
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x21
  System_Func_object__bool__o *_9__760_1; // x22
  Il2CppObject *v21; // x23
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject **v25; // x8
  Il2CppObject ***v26; // x21
  __int64 v27; // x9
  int *p_monitor; // x10
  __int64 v29; // x0
  __int64 v30; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  BattleSkillInfoData_o *v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  System_Action_object__o *v46; // x20
  Il2CppObject *v47; // x21
  struct BattleServantData___c_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3

  v4 = skillExecArgs;
  if ( (byte_49FEAF1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleServantData__TypeInfo, data);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___, v7);
    sub_1B640C8(&System_Func_BattleSkillInfoData__bool__TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&BattleLogicSkill_SkillExecArgs_TypeInfo, v13);
    sub_1B640C8(&Method_BattleServantData___c__AddPassiveBuffOnTransform_b__760_0__, v14);
    sub_1B640C8(&Method_BattleServantData___c__AddPassiveBuffOnTransform_b__760_1__, v15);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v16);
    byte_49FEAF1 = 1;
  }
  if ( !v4 )
  {
    v4 = (BattleLogicSkill_SkillExecArgs_o *)sub_1B64314(BattleLogicSkill_SkillExecArgs_TypeInfo, data, skillExecArgs);
    BattleLogicSkill_SkillExecArgs___ctor(v4, 0LL);
    if ( !v4 )
      goto LABEL_54;
    *(_WORD *)&v4->fields._RemoveAllUnfixedBuff_k__BackingField = 257;
  }
  if ( !v4->fields._Timing_k__BackingField )
    v4->fields._Timing_k__BackingField = 1;
  v18 = BattleServantData___c_TypeInfo;
  skillInfoList = this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v18 = BattleServantData___c_TypeInfo;
  }
  _9__760_1 = (System_Func_object__bool__o *)v18->static_fields->__9__760_1;
  if ( !_9__760_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = BattleServantData___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__760_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_BattleSkillInfoData__bool__TypeInfo,
                                                 data,
                                                 skillExecArgs);
    System_Func_object__bool____ctor(
      _9__760_1,
      v21,
      Method_BattleServantData___c__AddPassiveBuffOnTransform_b__760_1__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__760_1 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__760_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__760_1, (int32_t)_9__760_1, v23, v24);
  }
  v17 = (Il2CppObject ***)System_Linq_Enumerable__Where_object_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
                            (System_Func_TSource__bool__o *)_9__760_1,
                            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  if ( !v17 )
LABEL_54:
    sub_1B64324(v17);
  v25 = *v17;
  v26 = v17;
  v27 = *((unsigned __int16 *)*v17 + 151);
  if ( *((_WORD *)*v17 + 151) )
  {
    p_monitor = (int *)&v25[22]->monitor;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_monitor - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v27;
      p_monitor += 4;
      if ( !v27 )
        goto LABEL_19;
    }
    v29 = (__int64)&v25[2 * *p_monitor + 39];
  }
  else
  {
LABEL_19:
    v29 = sub_1BB60A8(v17, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(Il2CppObject ***, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  if ( !v30 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v31 = *(_QWORD *)v30;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_26;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_26:
      v34 = sub_1BB60A8(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v30;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v37 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_33;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_33:
      v38 = sub_1BB60A8(v30, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v39 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
    if ( !data )
      sub_1B64324(v39);
    BattleData__ActPassiveBuff(data, v39, v4, 0, 0, 0LL);
  }
  v40 = *(_QWORD *)v30;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_41;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_41:
    v43 = sub_1BB60A8(v30, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v30, *(_QWORD *)(v43 + 8));
  if ( v4->fields._RemoveAllUnfixedBuff_k__BackingField )
  {
    v17 = (Il2CppObject ***)BattleServantData___c_TypeInfo;
    if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v17 = (Il2CppObject ***)BattleServantData___c_TypeInfo;
    }
    v46 = (System_Action_object__o *)v17[23][15];
    if ( !v46 )
    {
      if ( !*((_DWORD *)v17 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = (Il2CppObject ***)BattleServantData___c_TypeInfo;
      }
      v47 = *v17[23];
      v46 = (System_Action_object__o *)sub_1B64314(System_Action_BattleServantData__TypeInfo, v44, v45);
      System_Action_object____ctor(v46, v47, Method_BattleServantData___c__AddPassiveBuffOnTransform_b__760_0__, 0LL);
      v48 = BattleServantData___c_TypeInfo->static_fields;
      v48->__9__760_0 = (struct System_Action_BattleServantData__o *)v46;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v48->__9__760_0, (int32_t)v46, v49, v50);
    }
    if ( data )
    {
      BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)v46, 0LL);
      return;
    }
    goto LABEL_54;
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

  if ( (byte_49FEAFE & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, cache);
    byte_49FEAFE = 1;
  }
  if ( cache )
  {
    SvtId_k__BackingField = cache->fields._SvtId_k__BackingField;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(SvtId_k__BackingField, 0LL);
    this->fields.svtId = v6;
    TransformSvtId_k__BackingField = cache->fields._TransformSvtId_k__BackingField;
    this->fields.transformSvtId = TransformSvtId_k__BackingField;
    if ( TransformSvtId_k__BackingField <= 0 )
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      this->fields.transformSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL);
    }
    *(_QWORD *)&this->fields.treasuredvcId = *(_QWORD *)&cache->fields._TreasuredvcId_k__BackingField;
    DispLimitCount_k__BackingField = cache->fields._DispLimitCount_k__BackingField;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
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
  BattleServantData_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t *p_afterLimitCount; // x24
  Il2CppObject *Master_object; // x21
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
  Il2CppObject *v66; // x0
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
  int32_t v123; // w8
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
  if ( (byte_49FEA2B & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, userSvt);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    this = (BattleServantData_o *)sub_1B640C8(&OptionManager_TypeInfo, v10);
    byte_49FEA2B = 1;
  }
  if ( !userSvt )
    goto LABEL_146;
  p_afterLimitCount = &userSvt->fields.afterLimitCount;
  v4->fields.limitcount = userSvt->fields.limitCount;
  v4->fields._dispLimitCount_k__BackingField = userSvt->fields.dispLimitCount;
  v4->fields._commandCardLimitCount_k__BackingField = userSvt->fields.commandCardLimitCount;
  v4->fields._iconLimitCount_k__BackingField = userSvt->fields.iconLimitCount;
  *(_QWORD *)&userSvt->fields.afterLimitCount = -1LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  this = (BattleServantData_o *)Follower__IsNpc(v4->fields.followerType, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    deckSvt = v4->fields.deckSvt;
    if ( !deckSvt )
      goto LABEL_146;
    if ( deckSvt->fields.npcId <= 0 )
    {
      v15 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v125.fields.currentCryptoKey = v15;
      *(_QWORD *)&v125.fields.fakeValue = v14;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v125, 0LL);
      this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                      v4->fields.limitcount,
                                      0LL);
      if ( !Master_object )
        goto LABEL_146;
      this = (BattleServantData_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                      (ServantLimitImageMaster_o *)Master_object,
                                      v16,
                                      (int32_t)this,
                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v18 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
        v17 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v126.fields.currentCryptoKey = v18;
        *(_QWORD *)&v126.fields.fakeValue = v17;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v126, 0LL) )
        {
          DispLimitCount = BattleServantData__getDispLimitCount(v4, 1, v19);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         DispLimitCount,
                                                         0LL);
        }
        v22 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
        v21 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v127.fields.currentCryptoKey = v22;
        *(_QWORD *)&v127.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v127, 0LL) )
        {
          CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(v4, v23);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                CommandDispLimitCount,
                                                                0LL);
        }
        v26 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v25 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v128.fields.currentCryptoKey = v26;
        *(_QWORD *)&v128.fields.fakeValue = v25;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v128, 0LL);
        if ( !(_DWORD)this )
        {
          v28 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
          v27 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v129.fields.currentCryptoKey = v28;
          *(_QWORD *)&v129.fields.fakeValue = v27;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v129, 0LL);
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvt->fields.limitCount, 0LL);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            if ( !OptionManager__GetFriendCostume(0LL) )
            {
              v35 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
              v34 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v130.fields.currentCryptoKey = v35;
              *(_QWORD *)&v130.fields.fakeValue = v34;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v130, 0LL) >= 11 )
              {
                v37 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
                v36 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v131.fields.currentCryptoKey = v37;
                *(_QWORD *)&v131.fields.fakeValue = v36;
                v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v131, 0LL);
                v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                        userSvt->fields.limitCount,
                        0LL);
                if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                ImageLimitCount = ImageLimitCount__GetImageLimitCount(v38, v39, 0LL);
                v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                               ImageLimitCount,
                                                               0LL);
              }
              v42 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
              v41 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v132.fields.currentCryptoKey = v42;
              *(_QWORD *)&v132.fields.fakeValue = v41;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v132, 0LL) >= 11 )
              {
                v44 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
                v43 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v133.fields.currentCryptoKey = v44;
                *(_QWORD *)&v133.fields.fakeValue = v43;
                v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v133, 0LL);
                v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                        userSvt->fields.limitCount,
                        0LL);
                if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                v47 = ImageLimitCount__GetImageLimitCount(v45, v46, 0LL);
                v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                      v47,
                                                                      0LL);
              }
              v49 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
              v48 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v134.fields.currentCryptoKey = v49;
              *(_QWORD *)&v134.fields.fakeValue = v48;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v134, 0LL) >= 11 )
              {
                v51 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
                v50 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v135.fields.currentCryptoKey = v51;
                *(_QWORD *)&v135.fields.fakeValue = v50;
                v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v135, 0LL);
                v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                        userSvt->fields.limitCount,
                        0LL);
                if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                v54 = ImageLimitCount__GetCardImageLimitCount(v52, v53, 0, 0, 0LL);
                v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                               v54 + 1,
                                                               0LL);
              }
            }
          }
          v56 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
          v55 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v136.fields.currentCryptoKey = v56;
          *(_QWORD *)&v136.fields.fakeValue = v55;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v136, 0LL);
          IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)userSvt, 0, 0LL);
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         (ServantLimitImageMaster_o *)Master_object,
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
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v137.fields.currentCryptoKey = v61;
            *(_QWORD *)&v137.fields.fakeValue = v60;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v137, 0LL);
            v63 = *p_afterLimitCount;
            v64 = v62;
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v64, v63, 0LL);
          }
          userSvt->fields.afterIconLimitCount = ServantImageLimitSealAfter;
          v99 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
          v98 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v146.fields.currentCryptoKey = v99;
          *(_QWORD *)&v146.fields.fakeValue = v98;
          v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v146, 0LL);
          v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                   v4->fields._iconLimitCount_k__BackingField,
                   0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         (ServantLimitImageMaster_o *)Master_object,
                                         v100,
                                         v101,
                                         0LL);
          v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         ServantLimitCountSealAfter,
                                                         0LL);
          v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvt->fields.svtId, 0LL);
          v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                   v4->fields._dispLimitCount_k__BackingField,
                   0LL);
          v105 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)Master_object,
                   v103,
                   v104,
                   0LL);
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         v105,
                                                         0LL);
          v106 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvt->fields.svtId, 0LL);
          v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                   v4->fields._commandCardLimitCount_k__BackingField,
                   0LL);
          v108 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)Master_object,
                   v106,
                   v107,
                   0LL);
          v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v108, 0LL);
          this = *(BattleServantData_o **)&v109.fields.currentCryptoKey;
          v4->fields._commandCardLimitCount_k__BackingField = v109;
          goto LABEL_122;
        }
LABEL_146:
        sub_1B64324(this);
      }
    }
  }
  v65 = v4->fields.deckSvt;
  if ( !v65 )
    goto LABEL_146;
  if ( v65->fields.isFollowerSvt )
  {
    this = (BattleServantData_o *)Follower__IsNpc(v4->fields.followerType, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetSpoilerSetting(0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v66 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
        v68 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
        v67 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
        v70 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v69 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        v71 = (ServantLimitSpoilerProtectionMaster_o *)v66;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v138.fields.currentCryptoKey = v70;
        *(_QWORD *)&v138.fields.fakeValue = v69;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v138, 0LL);
        if ( !v71 )
          goto LABEL_146;
        *(_QWORD *)&v151.fields.currentCryptoKey = v68;
        *(_QWORD *)&v151.fields.fakeValue = v67;
        v72 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v151, (int32_t)this, 0LL);
        v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v72,
                                                       0LL);
        v73 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
        v74 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                v4->fields._dispLimitCount_k__BackingField,
                0LL);
        *(_QWORD *)&v152.fields.currentCryptoKey = v73;
        *(_QWORD *)&v152.fields.fakeValue = v74;
        v76 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v152, v75, 0LL);
        v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v76, 0LL);
        v4->fields._dispLimitCount_k__BackingField = v139;
        v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v139, 0LL);
        v78 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v71, v77, 0LL);
        v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v78,
                                                       0LL);
        v79 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
        v80 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
        v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                v4->fields._commandCardLimitCount_k__BackingField,
                0LL);
        *(_QWORD *)&v153.fields.currentCryptoKey = v79;
        *(_QWORD *)&v153.fields.fakeValue = v80;
        v82 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v71, v153, v81, 0LL);
        v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v82, 0LL);
        v4->fields._commandCardLimitCount_k__BackingField = v140;
        v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v140, 0LL);
        v84 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v71, v83, 0LL);
        v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                              v84,
                                                              0LL);
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetFriendImageLimitCount(0LL) )
      {
        v86 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v85 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v141.fields.currentCryptoKey = v86;
        *(_QWORD *)&v141.fields.fakeValue = v85;
        v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v141, 0LL);
        v88 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v88 = BalanceConfig_TypeInfo;
        }
        if ( v87 >= v88->static_fields->ServantLimitMax )
        {
          v90 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
          v89 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v142.fields.currentCryptoKey = v90;
          *(_QWORD *)&v142.fields.fakeValue = v89;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v142, 0LL) <= 10 )
          {
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                           0,
                                                           0LL);
          }
        }
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleServantData_o *)OptionManager__GetFriendCostume(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        v92 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
        v91 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v143.fields.currentCryptoKey = v92;
        *(_QWORD *)&v143.fields.fakeValue = v91;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v143, 0LL) >= 11 )
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         0,
                                                         0LL);
        }
        v94 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
        v93 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v144.fields.currentCryptoKey = v94;
        *(_QWORD *)&v144.fields.fakeValue = v93;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v144, 0LL) >= 11 )
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                0,
                                                                0LL);
        }
        v96 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v95 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v145.fields.currentCryptoKey = v96;
        *(_QWORD *)&v145.fields.fakeValue = v95;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v145, 0LL);
        if ( (int)this >= 11 )
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
          this = *(BattleServantData_o **)&v97.fields.currentCryptoKey;
          v4->fields._iconLimitCount_k__BackingField = v97;
        }
      }
    }
  }
LABEL_122:
  v110 = v4->fields.deckSvt;
  if ( !v110 )
    goto LABEL_146;
  if ( v110->fields.isFollowerSvt && Follower__IsNpc(v4->fields.followerType, 0LL) )
  {
    v112 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
    v111 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v147.fields.currentCryptoKey = v112;
    *(_QWORD *)&v147.fields.fakeValue = v111;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v147, 0LL) )
    {
      v113 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
      v114 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    }
    else
    {
      v116 = *(_QWORD *)&userSvt->fields.svtId.fields.currentCryptoKey;
      v115 = *(_QWORD *)&userSvt->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v148.fields.currentCryptoKey = v116;
      *(_QWORD *)&v148.fields.fakeValue = v115;
      v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v148, 0LL);
      v118 = *(_QWORD *)&userSvt->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v149.fields.fakeValue = *(_QWORD *)&userSvt->fields.limitCount.fields.fakeValue;
      v119 = v117;
      *(_QWORD *)&v149.fields.currentCryptoKey = v118;
      v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v149, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v121 = ImageLimitCount__GetCardImageLimitCount(v119, v120, 1, 0, 0LL);
      v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v121 + 1, 0LL);
      v114 = *(_QWORD *)&v122.fields.fakeValue;
      v113 = *(_QWORD *)&v122.fields.currentCryptoKey;
      v4->fields._iconLimitCount_k__BackingField = v122;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v150.fields.currentCryptoKey = v113;
    *(_QWORD *)&v150.fields.fakeValue = v114;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v150, 0LL) <= 10 )
    {
      v123 = BasicHelper__DecryptValue_40698696(v4->fields._iconLimitCount_k__BackingField, 0LL);
      if ( v123 >= 3 )
        v123 = 3;
      if ( v123 <= 1 )
        v124 = 1;
      else
        v124 = v123;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v124, 0LL);
    }
  }
}


bool __fastcall BattleServantData__CancelBuffExtendingLife(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B64324(0LL);
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
  bool v14; // w27
  bool v15; // w28
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_HashSet_T__o *v24; // x24
  int32_t v25; // w2
  char v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  char v29; // w27
  System_Collections_Generic_List_object__o *v30; // x24
  void *buffData; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  int v34; // w8
  void *v35; // x25
  unsigned int v36; // w28
  BattleBuffData_BuffData_o *v37; // x26
  int turn; // w9
  int32_t v39; // w19
  int v40; // w8
  int count; // w8
  bool v42; // cc
  bool v43; // w8
  _BOOL4 v44; // w19
  char v45; // w3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  BattleBuffData_o *v50; // x19
  BattleServantData___c__DisplayClass546_0_o v53; // [xsp+10h] [xbp-70h] BYREF

  v14 = isAny;
  v15 = isExcludeUnSubStateIndiv;
  if ( (byte_49FEA91 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__, *(_QWORD *)&changeValue);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v20);
    sub_1B640C8(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v21);
    byte_49FEA91 = 1;
  }
  v53.fields.targetIndivi = targetIndivi;
  *(_QWORD *)&v53.fields.isExcludeUnSubStateIndiv = v15;
  v53.fields.isAny = v14;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v53.fields.targetIndivi,
    (int32_t)targetIndivi,
    (int32_t)targetIndivi,
    isTurn);
  v24 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                     v22,
                                                     v23);
  System_Collections_Generic_HashSet_object____ctor(
    v24,
    (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  *buffsToRemove = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)buffsToRemove, (int32_t)v24, v25, v26);
  if ( !v53.fields.targetIndivi )
  {
    v29 = 0;
    return v29 & 1;
  }
  v29 = 0;
  if ( changeValue && *(_QWORD *)&v53.fields.targetIndivi->max_length )
  {
    v30 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                         v27,
                                                         v28);
    System_Collections_Generic_List_object____ctor(
      v30,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    buffData = this->fields.buffData;
    if ( !buffData || (buffData = BattleBuffData__getActiveList((BattleBuffData_o *)buffData, 1, 0LL)) == 0LL )
LABEL_47:
      sub_1B64324(buffData);
    v34 = *((_DWORD *)buffData + 6);
    v35 = buffData;
    if ( v34 < 1 )
    {
      v29 = 0;
      if ( !v30 )
        goto LABEL_47;
      goto LABEL_44;
    }
    v36 = 0;
    v29 = 0;
    while ( 1 )
    {
      if ( v36 >= v34 )
        sub_1B6432C(buffData, v32);
      v37 = (BattleBuffData_BuffData_o *)*((_QWORD *)v35 + (int)v36 + 4);
      if ( !v37 )
        goto LABEL_47;
      if ( isTurn )
      {
        turn = v37->fields.turn;
        if ( turn >= 1 && (turn >= 3 || changeValue >= 0 || isAllowRemove) )
        {
          buffData = (void *)BattleServantData___ChangeBuffValue_g__IsMatchIndividualityCond_546_0(v37, &v53, v33);
          if ( ((unsigned __int8)buffData & 1) != 0 )
          {
            v39 = v37->fields.turn;
            v40 = v39 + changeValue;
            v37->fields.turn = v39 + changeValue;
            if ( v39 + changeValue <= 0 )
            {
              if ( isAllowRemove )
              {
                v37->fields.turn = 0;
                buffData = *buffsToRemove;
                if ( !*buffsToRemove )
                  goto LABEL_47;
                System_Collections_Generic_HashSet_object___Add(
                  (System_Collections_Generic_HashSet_T__o *)buffData,
                  (Il2CppObject *)v37,
                  (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
                v40 = v37->fields.turn;
              }
              else
              {
                if ( (v39 & 1) != 0 )
                  v40 = 1;
                else
                  v40 = 2;
                v37->fields.turn = v40;
              }
            }
            goto LABEL_32;
          }
        }
      }
      else
      {
        count = v37->fields.count;
        v42 = count < 1;
        v43 = count == 1;
        if ( !v42 && (!v43 || changeValue >= 0 || isAllowRemove) )
        {
          buffData = (void *)BattleServantData___ChangeBuffValue_g__IsMatchIndividualityCond_546_0(v37, &v53, v33);
          if ( ((unsigned __int8)buffData & 1) != 0 )
          {
            v39 = v37->fields.count;
            v40 = v39 + changeValue;
            v37->fields.count = v39 + changeValue;
            if ( v39 + changeValue <= 0 )
            {
              if ( isAllowRemove )
              {
                v37->fields.count = 0;
                buffData = *buffsToRemove;
                if ( !*buffsToRemove )
                  goto LABEL_47;
                System_Collections_Generic_HashSet_object___Add(
                  (System_Collections_Generic_HashSet_T__o *)buffData,
                  (Il2CppObject *)v37,
                  (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
                v40 = v37->fields.count;
              }
              else
              {
                v40 = 1;
                v37->fields.count = 1;
              }
            }
LABEL_32:
            v44 = v40 != v39;
            v29 |= v44;
            buffData = (void *)BattleBuffData_BuffData__IslinkageTarget(v37, 0LL);
            if ( v44 && ((unsigned __int8)buffData & 1) != 0 )
            {
              if ( !v30 )
                goto LABEL_47;
              items = v30->fields._items;
              v47 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
              ++v30->fields._version;
              if ( !items )
                goto LABEL_47;
              size = v30->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v30,
                  (Il2CppObject *)v37,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
              }
              else
              {
                v49 = &items->obj.klass + size;
                v30->fields._size = size + 1;
                v49[4] = (Il2CppClass *)v37;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v37, (int32_t)v33, v45);
              }
            }
          }
        }
      }
      v34 = *((_DWORD *)v35 + 6);
      if ( (int)++v36 >= v34 )
      {
        if ( !v30 )
          goto LABEL_47;
LABEL_44:
        v50 = this->fields.buffData;
        buffData = System_Collections_Generic_List_object___ToArray(
                     v30,
                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
        if ( !v50 )
          goto LABEL_47;
        BattleBuffData__syncLinkageBuffChangeParam(v50, (BattleBuffData_BuffData_array *)buffData, 0LL);
        return v29 & 1;
      }
    }
  }
  return v29 & 1;
}


bool __fastcall BattleServantData__ChangeSkillRemainingTurn(
        BattleServantData_o *this,
        BattleSkillInfoData_o *skillInfo,
        BattleSkillInfoData_o *beforeDeathSkillInfo,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x21
  __int64 v7; // x1
  Il2CppObject *Master_object; // x21
  int32_t BattleStartRemainingTurn; // w0
  int32_t chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_49FEA32 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, skillInfo);
    this = (BattleServantData_o *)sub_1B640C8(&DataManager_TypeInfo, v7);
    byte_49FEA32 = 1;
  }
  if ( v6->fields.isEnemy )
    goto LABEL_15;
  if ( !skillInfo )
    goto LABEL_19;
  if ( skillInfo->fields.type != 11 )
    goto LABEL_15;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  entity = 0LL;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
LABEL_19:
    sub_1B64324(this);
  if ( !SkillLvMaster__TryGetEntity(
          (SkillLvMaster_o *)Master_object,
          &entity,
          (int32_t)this,
          skillInfo->fields.skilllv,
          0LL) )
  {
LABEL_15:
    LOBYTE(BattleStartRemainingTurn) = 0;
    return BattleStartRemainingTurn;
  }
  this = (BattleServantData_o *)entity;
  if ( !entity )
    goto LABEL_19;
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
  __int64 v6; // x1
  __int64 v7; // x2
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  BattleBuffData_CheckIndividualitiesData_o *v9; // x0
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEAED & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, funcIndividuality);
    byte_49FEAED = 1;
  }
  usedBuff = 0LL;
  BuffData = BattleServantData__get_BuffData(this, (const MethodInfo *)funcIndividuality);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      v6,
                                                      v7);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v8
    || (v9 = BattleBuffData_CheckIndividualitiesData__AddSelfIndividuality(v8, funcIndividuality, 0LL), !BuffData) )
  {
    sub_1B64324(v9);
  }
  return BattleBuffData__checkActBuff_42109236(BuffData, 130, v9, &usedBuff, 0LL);
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

  buffData = this->fields.buffData;
  v9 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         (const MethodInfo *)notSvtIndivArray);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__checkActBuff_42109236(buffData, 18, v9, usedBuff, 0LL);
}


bool __fastcall BattleServantData__CheckAvoidanceAttackDeathDamage(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o **usedBuff,
        int32_t damage,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualityData,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  *usedBuff = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)usedBuff, 0, damage, (int32_t)checkIndividualityData);
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) > damage )
    return 0;
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B64324(0LL);
  FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 129, checkIndividualityData, 0, 0LL);
  *usedBuff = FirstMatchCondBuff;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)usedBuff, (int32_t)FirstMatchCondBuff, v12, v13);
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
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0

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
    sub_1B64324(v9);
  FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 93, v9, 0, 0LL);
  if ( FirstMatchCondBuff )
    *targetBuffId = FirstMatchCondBuff->fields.buffId;
  return FirstMatchCondBuff != 0LL;
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
  System_Int32_array *Individualities_42531456; // x0

  v4 = buffIndiv;
  v5 = this;
  if ( opponentSvt )
  {
    this = (BattleServantData_o *)BattleServantData__getIndividualities_42531456(
                                    opponentSvt,
                                    buffIndiv,
                                    (const MethodInfo *)opponentSvt);
    v4 = (System_Int32_array *)this;
  }
  buffData = v5->fields.buffData;
  if ( !buffData )
    sub_1B64324(this);
  BuffIndividualities = BattleBuffData__getBuffIndividualities(v5->fields.buffData, 0, 0, 0, 0, 0LL);
  Individualities_42531456 = BattleServantData__getIndividualities_42531456(v5, BuffIndividualities, v8);
  return BattleBuffData__CheckDisableForciblyAddStateBuffAvoid(buffData, Individualities_42531456, v4, 0LL);
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
            sub_1B6432C(SelectedNobleSeqId, v8);
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

  buffData = this->fields.buffData;
  v9 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         (const MethodInfo *)notSvtIndivArray);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__checkActBuff_42109236(buffData, 16, v9, usedBuff, 0LL);
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct BattleActionData_DamageData_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x6
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x6
  int32_t v32; // w8
  const MethodInfo *v33; // x6
  BattleServantData_o *v34; // x2
  const MethodInfo *v35; // x2
  BattleServantData_o *v36; // x2
  const MethodInfo *v37; // x2
  int32_t v38; // w1
  struct BattleBuffData_o *buffData; // x8
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-88h] BYREF
  BattleServantData___c__DisplayClass668_0_o v41; // [xsp+10h] [xbp-80h] BYREF

  usedBuff = 0LL;
  v41.fields.__4__this = this;
  memset(&v41.fields.isSvtAction, 0, 40);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v41, (int32_t)this, (int32_t)actor, (int32_t)command);
  v41.fields.actor = actor;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v41.fields.actor, (int32_t)actor, v18, v19);
  v41.fields.command = command;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v41.fields.command, (int32_t)command, v20, v21);
  v41.fields.damageData = damageData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v41.fields.damageData, (int32_t)damageData, v22, v23);
  v41.fields.isSvtAction = v41.fields.actor != 0LL;
  if ( !data )
    goto LABEL_36;
  v41.fields.notSvtActorIndivArray = BattleData__GetNotSvtActorIndividualityArray(
                                       data,
                                       mainAction,
                                       v41.fields.actor != 0LL,
                                       0LL);
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v41.fields.notSvtActorIndivArray,
    (int32_t)v41.fields.notSvtActorIndivArray,
    v25,
    v26);
  if ( !v41.fields.damageData )
    goto LABEL_36;
  if ( v41.fields.damageData->fields.isSpecialInvincible )
  {
    *damage = 0.0;
    *minimumDamageFlg = 0;
    *hitStat = 1;
    if ( !v41.fields.actor || BattleServantData__checkPierceInvincible(v41.fields.actor, v41.fields.command, this, v27) )
      return;
LABEL_18:
    if ( v41.fields.actor )
      BattleServantData__checkBreakAvoidance(v41.fields.actor, v41.fields.command, this, v29);
    return;
  }
  if ( BattleServantData__CheckAvoidanceIndividuality(
         this,
         v41.fields.command,
         v41.fields.actor,
         &v41.fields.damageData->fields.defNoDamageBuffId,
         v41.fields.isSvtAction,
         v41.fields.notSvtActorIndivArray,
         v28) )
  {
    goto LABEL_8;
  }
  if ( !v41.fields.actor )
  {
    v34 = 0LL;
LABEL_16:
    if ( BattleServantData__CheckInvincible(
           this,
           v41.fields.command,
           v34,
           &usedBuff,
           v41.fields.isSvtAction,
           v41.fields.notSvtActorIndivArray,
           v31) )
    {
      *damage = 0.0;
      *minimumDamageFlg = 0;
      *hitStat = 1;
      goto LABEL_18;
    }
    if ( v41.fields.actor )
    {
      if ( BattleServantData__checkBreakAvoidance(v41.fields.actor, v41.fields.command, this, v29) )
        goto LABEL_23;
      v36 = v41.fields.actor;
    }
    else
    {
      v36 = 0LL;
    }
    if ( BattleServantData__CheckAvoidance(
           this,
           v41.fields.command,
           v36,
           &usedBuff,
           v41.fields.isSvtAction,
           v41.fields.notSvtActorIndivArray,
           v33) )
    {
LABEL_8:
      v32 = 2;
      *damage = 0.0;
      *minimumDamageFlg = 0;
LABEL_9:
      *hitStat = v32;
      return;
    }
    if ( !BattleServantData___CheckInvincibleAvoidanceBuff_g__CheckAvoidanceDeathDamageFunc_668_0(
            this,
            *damage,
            &v41,
            v37) )
      return;
    v24 = v41.fields.damageData;
    if ( v41.fields.damageData )
    {
      v38 = *damage == INFINITY ? 0x80000000 : (int)*damage;
      BattleActionData_DamageData__SaveResetDamageArray(v41.fields.damageData, v38, *minimumDamageFlg, 0LL);
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
    sub_1B64324(v24);
  }
  if ( !BattleServantData__checkPierceInvincible(v41.fields.actor, v41.fields.command, this, v30) )
  {
    v34 = v41.fields.actor;
    goto LABEL_16;
  }
  if ( BattleServantData__CheckInvincible(this, v41.fields.command, v41.fields.actor, &usedBuff, 1, 0LL, v31) )
  {
    v32 = 3;
    goto LABEL_9;
  }
LABEL_23:
  if ( BattleServantData__CheckAvoidance(this, v41.fields.command, v41.fields.actor, &usedBuff, 1, 0LL, v33)
    || BattleServantData___CheckInvincibleAvoidanceBuff_g__CheckAvoidanceDeathDamageFunc_668_0(this, *damage, &v41, v35) )
  {
    v32 = 4;
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
  bool v8; // w24
  BattleServantData_o *v11; // x19
  System_Int32_array *NotSvtActorIndividualityArray; // x23
  const MethodInfo *v14; // x6
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x6
  char v18; // w21
  int32_t v19; // w1
  struct BattleBuffData_o *v20; // x8
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x6
  const MethodInfo *v23; // x6
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x6
  BattleBuffData_BuffData_o *v27; // x1
  BattleBuffData_BuffData_o *v28; // [xsp+0h] [xbp-50h] BYREF
  BattleBuffData_BuffData_o *v29; // [xsp+8h] [xbp-48h] BYREF
  BattleBuffData_BuffData_o *usedBuff; // [xsp+18h] [xbp-38h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  buffData = this->fields.buffData;
  if ( !buffData
    || (buffData->fields.isNoDamage = 0, !data)
    || (v8 = actor != 0LL,
        v11 = this,
        NotSvtActorIndividualityArray = BattleData__GetNotSvtActorIndividualityArray(
                                          data,
                                          mainAction,
                                          actor != 0LL,
                                          0LL),
        this = (BattleServantData_o *)BattleServantData__checkSpecialInvincible(
                                        v11,
                                        command,
                                        actor,
                                        &usedBuff,
                                        v8,
                                        NotSvtActorIndividualityArray,
                                        v14),
        !damageData) )
  {
LABEL_24:
    sub_1B64324(this);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = 1;
    damageData->fields.isSpecialInvincible = 1;
    v19 = (int)usedBuff;
    damageData->fields._NoDamageAffectedBuff_k__BackingField = usedBuff;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&damageData->fields._NoDamageAffectedBuff_k__BackingField,
      v19,
      v15,
      v16);
    v20 = v11->fields.buffData;
    if ( !v20 )
      goto LABEL_24;
    goto LABEL_22;
  }
  this = (BattleServantData_o *)BattleServantData__CheckAvoidanceIndividuality(
                                  v11,
                                  command,
                                  actor,
                                  &damageData->fields.defNoDamageBuffId,
                                  actor != 0LL,
                                  NotSvtActorIndividualityArray,
                                  v17);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_20;
  if ( !actor )
  {
    if ( BattleServantData__CheckInvincible(v11, command, 0LL, &v29, 0, NotSvtActorIndividualityArray, v22) )
    {
LABEL_15:
      v27 = v29;
LABEL_19:
      damageData->fields._NoDamageAffectedBuff_k__BackingField = v27;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&damageData->fields._NoDamageAffectedBuff_k__BackingField,
        (int32_t)v27,
        v24,
        (int32_t)v25);
LABEL_20:
      v20 = v11->fields.buffData;
      if ( !v20 )
        goto LABEL_24;
      v18 = 1;
      goto LABEL_22;
    }
LABEL_17:
    if ( !BattleServantData__CheckAvoidance(v11, command, actor, &v28, actor != 0LL, NotSvtActorIndividualityArray, v26) )
      return;
    v27 = v28;
    goto LABEL_19;
  }
  this = (BattleServantData_o *)BattleServantData__checkPierceInvincible(actor, command, v11, v21);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( BattleServantData__CheckInvincible(v11, command, actor, &v29, 1, NotSvtActorIndividualityArray, v23) )
      goto LABEL_15;
    this = (BattleServantData_o *)BattleServantData__checkBreakAvoidance(actor, command, v11, v25);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_10;
    goto LABEL_17;
  }
LABEL_10:
  v20 = v11->fields.buffData;
  if ( !v20 )
    goto LABEL_24;
  v18 = 0;
LABEL_22:
  v20->fields.isNoDamage = v18;
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

  if ( (byte_49FEAEB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&skillId);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    byte_49FEAEB = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&skillId,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v8);
  NotTargetSkillIdArray = BattleBuffData__GetNotTargetSkillIdArray(buffData, v7, 0LL);
  return System_Array__IndexOf_int_(
           NotTargetSkillIdArray,
           skillId,
           (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) != -1;
}


bool __fastcall BattleServantData__CheckPierceSubdamage(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FEAB9 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAB9 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__checkActBuff_42109236(buffData, 132, v8, &usedBuff, 0LL);
}


bool __fastcall BattleServantData__CheckSelectedNobleSeqIsGroup(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0

  if ( this->fields.groupSeqIdFromMstTDSeqWeight > 0 )
    return (unsigned __int8)&dword_0 + 1;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
  if ( !TreasureDevice )
    sub_1B64324(0LL);
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
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3

  this->fields.svtOverwriteName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteName, 0, v2, v3);
  this->fields.svtOverwriteBattleName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteBattleName, 0, v5, v6);
}


void __fastcall BattleServantData__ContinuePostProcess(BattleServantData_o *this, const MethodInfo *method)
{
  unsigned int MaxHp; // w20
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
    sub_1B64324(0LL);
  BattleBuffData__updateAuraBuffList(buffData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__ContinuePreProcess(
        BattleServantData_o *this,
        bool isDeadContinue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  void *buffData; // x0
  const MethodInfo *v9; // x3
  int32_t lineMaxNp; // w1
  BuffMaster_o *buffMst; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  BattleBuffData_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_object__bool__o *v17; // x22
  const MethodInfo *v18; // x1
  int v19; // w8
  _DWORD *v20; // x20
  unsigned int i; // w21
  char *v22; // x22
  char *v23; // x22
  void *v24; // t1
  unsigned int MaxHp; // w0
  unsigned int v26; // w0
  const MethodInfo *v27; // x2

  if ( (byte_49FEA48 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, isDeadContinue);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass382_0__ContinuePreProcess_b__0__, v5);
    sub_1B640C8(&BattleServantData___c__DisplayClass382_0_TypeInfo, v6);
    byte_49FEA48 = 1;
  }
  v7 = sub_1B64314(BattleServantData___c__DisplayClass382_0_TypeInfo, isDeadContinue, method);
  BattleServantData___c__DisplayClass382_0___ctor((BattleServantData___c__DisplayClass382_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_21;
  *(_BYTE *)(v7 + 16) = isDeadContinue;
  lineMaxNp = this->fields.lineMaxNp;
  this->fields.status = 0;
  this->fields.np = 0;
  BattleServantData__addNp(this, lineMaxNp, 1, v9);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_21;
  buffMst = BattleBuffData__get_buffMst((BattleBuffData_o *)buffData, 0LL);
  *(_QWORD *)(v7 + 24) = buffMst;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)buffMst, v12, v13);
  v14 = this->fields.buffData;
  v17 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v15, v16);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_BattleServantData___c__DisplayClass382_0__ContinuePreProcess_b__0__,
    0LL);
  if ( !v14
    || (BattleBuffData__RemoveActiveBuffWithCondition(v14, (System_Func_BattleBuffData_BuffData__bool__o *)v17, 0LL),
        (buffData = this->fields.buffData) == 0LL)
    || (buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL)) == 0LL )
  {
LABEL_21:
    sub_1B64324(buffData);
  }
  v19 = *((_DWORD *)buffData + 6);
  v20 = buffData;
  if ( v19 >= 1 )
  {
    for ( i = 0; (int)i < v19; ++i )
    {
      if ( i >= v19 )
LABEL_22:
        sub_1B6432C(buffData, v18);
      v22 = (char *)&v20[2 * i];
      v24 = (void *)*((_QWORD *)v22 + 4);
      v23 = v22 + 32;
      buffData = v24;
      if ( !v24 )
        goto LABEL_21;
      buffData = (void *)BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( ((unsigned __int8)buffData & 1) != 0 )
        goto LABEL_16;
      if ( i >= v20[6] )
        goto LABEL_22;
      buffData = *(void **)v23;
      if ( !*(_QWORD *)v23 )
        goto LABEL_21;
      buffData = (void *)BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( ((unsigned __int8)buffData & 1) != 0 )
      {
LABEL_16:
        if ( i >= v20[6] )
          goto LABEL_22;
        if ( !*(_QWORD *)v23 )
          goto LABEL_21;
        *(_DWORD *)(*(_QWORD *)v23 + 112LL) = 0;
      }
      v19 = v20[6];
    }
  }
  this->fields.deckIndex = -1;
  MaxHp = BattleServantData__getMaxHp(this, v18);
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

  if ( (byte_49FEA4A & 1) == 0 )
  {
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, buff);
    byte_49FEA4A = 1;
  }
  v5 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, buff, method);
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
    sub_1B64324(v6);
  if ( v9->max_length <= 1 )
LABEL_11:
    sub_1B6432C(v6, v7);
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
  struct AddSkillData_array *classBoardAddPassiveSkills; // x22
  struct AddSkillData_array *classBoardAddCommandSpells; // x21
  BattleDeckServantData_o *DeckServantData; // x0
  BattleEntity_o *battle_ent; // x25
  BattleDeckServantData_o *v10; // x26
  int32_t Int; // w0
  const MethodInfo *v12; // x6
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x6

  v4 = this;
  if ( isResetTransform )
  {
    classBoardAddPassiveSkills = this->fields.classBoardAddPassiveSkills;
    classBoardAddCommandSpells = this->fields.classBoardAddCommandSpells;
    this->fields.shiftNpcId = -1;
    this->fields.beforeUserSvtId = -1LL;
    if ( !data || (this = (BattleServantData_o *)data->fields.battle_info) == 0LL )
      sub_1B64324(this);
    DeckServantData = BattleInfoData__getDeckServantData((BattleInfoData_o *)this, v4->fields.uniqueId, 0LL);
    battle_ent = data->fields.battle_ent;
    v10 = DeckServantData;
    Int = Follower__getInt(v4->fields.followerType, 0LL);
    BattleServantData__setBaseServantData(v4, v10, battle_ent, Int, 0LL, 1, v12);
    LODWORD(battle_ent) = v4->fields.transformIndex;
    v4->fields.dressDispId = -1;
    *(_QWORD *)&v4->fields.transformIndex = 0xFFFFFFFFLL;
    v4->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&v4->fields.classBoardAddPassiveSkills,
      (int32_t)classBoardAddPassiveSkills,
      v13,
      v14);
    v4->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&v4->fields.classBoardAddCommandSpells,
      (int32_t)classBoardAddCommandSpells,
      v15,
      v16);
    if ( (_DWORD)battle_ent != -1 )
      BattleServantData__setTransformServant(v4, data, -1, 0, 0, 0LL, v17);
  }
  else
  {
    BattleServantData__ResetServantSelfSkill(this, (const MethodInfo *)data);
  }
}


System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill(
        BattleServantData_o *this,
        BattleCommandData_o *commandSelf,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FEAFF & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_TypeInfo, commandSelf);
    byte_49FEAFF = 1;
  }
  v5 = sub_1B64314(BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_TypeInfo, commandSelf, method);
  BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784___ctor(
    (BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 56) = commandSelf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)commandSelf, v9, v10);
  return (System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateContinueFunctionSkill(
        BattleServantData_o *this,
        bool isKeepAlive,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FEA49 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData__EnumerateContinueFunctionSkill_d__385_TypeInfo, isKeepAlive);
    byte_49FEA49 = 1;
  }
  v5 = sub_1B64314(BattleServantData__EnumerateContinueFunctionSkill_d__385_TypeInfo, isKeepAlive, method);
  BattleServantData__EnumerateContinueFunctionSkill_d__385___ctor(
    (BattleServantData__EnumerateContinueFunctionSkill_d__385_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v7, v8);
  *(_BYTE *)(v5 + 49) = isKeepAlive;
  return (System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *)v5;
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
  __int64 v9; // x19
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_int__o *ServantIndividualityList; // x20
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_T__o *buffData; // x0
  System_Collections_Generic_IEnumerable_T__o *BuffParamList; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  System_Func_int__bool__o *v20; // x21

  if ( (byte_49FEACB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, externalIndiv);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass636_0__EnumerateIndividuality_b__0__, v7);
    sub_1B640C8(&BattleServantData___c__DisplayClass636_0_TypeInfo, v8);
    byte_49FEACB = 1;
  }
  v9 = sub_1B64314(BattleServantData___c__DisplayClass636_0_TypeInfo, externalIndiv, method);
  BattleServantData___c__DisplayClass636_0___ctor((BattleServantData___c__DisplayClass636_0_o *)v9, 0LL);
  ServantIndividualityList = BattleServantData__GetServantIndividualityList(this, externalIndiv, v10);
  buffData = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__EnumerateSkillIndividuality(this, v12);
  if ( !ServantIndividualityList )
    goto LABEL_11;
  System_Collections_Generic_List_int___AddRange(
    ServantIndividualityList,
    buffData,
    (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
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
          (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__),
        (buffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buffData) == 0LL)
    || (buffData = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffParamList(
                                                                    (BattleBuffData_o *)buffData,
                                                                    44,
                                                                    0LL,
                                                                    0LL),
        !v9)
    || (*(_QWORD *)(v9 + 16) = buffData,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)buffData, v15, v16),
        (v19 = *(_QWORD *)(v9 + 16)) == 0) )
  {
LABEL_11:
    sub_1B64324(buffData);
  }
  if ( !*(_QWORD *)(v19 + 24) )
    return (System_Collections_Generic_IEnumerable_int__o *)ServantIndividualityList;
  v20 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v17, v18);
  System_Func_int__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_BattleServantData___c__DisplayClass636_0__EnumerateIndividuality_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Where_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)ServantIndividualityList,
                                                            (System_Func_TSource__bool__o *)v20,
                                                            (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
}


System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateSkillBeforeFunctionSkill(
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
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  BattleBuffData_o *buffData; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  BattleBuffData_CheckIndividualitiesData_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  System_Func_object__bool__o *v25; // x23
  System_Collections_Generic_IEnumerable_TSource__o *BuffList_42092284; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Func_object__object__o *v29; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  BattleServantData___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_object__int__o *_9__785_1; // x20
  Il2CppObject *v36; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_49FEB00 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleServantData_CreateFunctionSkillInfoData__, data);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleSkillInfoData___, v7);
    sub_1B640C8(&System_Func_BattleSkillInfoData__int__TypeInfo, v8);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__BattleSkillInfoData__TypeInfo, v9);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v10);
    sub_1B640C8(&Method_BattleServantData___c__EnumerateSkillBeforeFunctionSkill_b__785_1__, v11);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass785_0__EnumerateSkillBeforeFunctionSkill_b__0__, v12);
    sub_1B640C8(&BattleServantData___c__DisplayClass785_0_TypeInfo, v13);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v14);
    byte_49FEB00 = 1;
  }
  v15 = sub_1B64314(BattleServantData___c__DisplayClass785_0_TypeInfo, data, method);
  BattleServantData___c__DisplayClass785_0___ctor((BattleServantData___c__DisplayClass785_0_o *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = data,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)data, v17, v18),
        buffData = this->fields.buffData,
        v22 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v20,
                                                             v21),
        BattleBuffData_CheckIndividualitiesData___ctor(v22, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        v25 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v23, v24),
        System_Func_object__bool____ctor(
          v25,
          (Il2CppObject *)v15,
          Method_BattleServantData___c__DisplayClass785_0__EnumerateSkillBeforeFunctionSkill_b__0__,
          0LL),
        !buffData) )
  {
    sub_1B64324(v16);
  }
  BuffList_42092284 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList_42092284(
                                                                             buffData,
                                                                             138,
                                                                             v22,
                                                                             1,
                                                                             0,
                                                                             (System_Func_BattleBuffData_BuffData__bool__o *)v25,
                                                                             0LL);
  v29 = (System_Func_object__object__o *)sub_1B64314(
                                           System_Func_BattleBuffData_BuffData__BattleSkillInfoData__TypeInfo,
                                           v27,
                                           v28);
  System_Func_object__object____ctor(
    v29,
    (Il2CppObject *)this,
    Method_BattleServantData_CreateFunctionSkillInfoData__,
    0LL);
  v30 = System_Linq_Enumerable__Select_object__object_(
          BuffList_42092284,
          (System_Func_TSource__TResult__o *)v29,
          (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleSkillInfoData___);
  v33 = BattleServantData___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v33 = BattleServantData___c_TypeInfo;
  }
  _9__785_1 = (System_Func_object__int__o *)v33->static_fields->__9__785_1;
  if ( !_9__785_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = BattleServantData___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__785_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleSkillInfoData__int__TypeInfo, v31, v32);
    System_Func_object__int____ctor(
      _9__785_1,
      v36,
      Method_BattleServantData___c__EnumerateSkillBeforeFunctionSkill_b__785_1__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__785_1 = (struct System_Func_BattleSkillInfoData__int__o *)_9__785_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__785_1, (int32_t)_9__785_1, v38, v39);
  }
  return (System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                            v34,
                                                                            (System_Func_TSource__TKey__o *)_9__785_1,
                                                                            (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
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
  BattleServantData___c_c *v10; // x0
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Func_object__bool__o *_9__640_0; // x20
  Il2CppObject *v13; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  BattleServantData___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__object__o *_9__640_1; // x20
  Il2CppObject *v23; // x21
  struct BattleServantData___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49FEACF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___, v4);
    sub_1B640C8(&System_Func_BattleSkillInfoData__bool__TypeInfo, v5);
    sub_1B640C8(&System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo, v6);
    sub_1B640C8(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__640_0__, v7);
    sub_1B640C8(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__640_1__, v8);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v9);
    byte_49FEACF = 1;
  }
  v10 = BattleServantData___c_TypeInfo;
  skillInfoList = this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v10 = BattleServantData___c_TypeInfo;
  }
  _9__640_0 = (System_Func_object__bool__o *)v10->static_fields->__9__640_0;
  if ( !_9__640_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleServantData___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__640_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleSkillInfoData__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(
      _9__640_0,
      v13,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__640_0__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__640_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__640_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__640_0, (int32_t)_9__640_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__640_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  v20 = BattleServantData___c_TypeInfo;
  v21 = v17;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v20 = BattleServantData___c_TypeInfo;
  }
  _9__640_1 = (System_Func_object__object__o *)v20->static_fields->__9__640_1;
  if ( !_9__640_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleServantData___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__640_1 = (System_Func_object__object__o *)sub_1B64314(
                                                   System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo,
                                                   v18,
                                                   v19);
    System_Func_object__object____ctor(
      _9__640_1,
      v23,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__640_1__,
      0LL);
    v24 = BattleServantData___c_TypeInfo->static_fields;
    v24->__9__640_1 = (struct System_Func_BattleSkillInfoData__IEnumerable_int___o *)_9__640_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->__9__640_1, (int32_t)_9__640_1, v25, v26);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                            v21,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__640_1,
                                                            (const MethodInfo_2E6B8C0 *)Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___);
}


System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(
        BattleServantData_o *this,
        BattleSkillInfoData_o *receivedSkill,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FEB01 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_TypeInfo, receivedSkill);
    byte_49FEB01 = 1;
  }
  v5 = sub_1B64314(BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_TypeInfo, receivedSkill, method);
  BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786___ctor(
    (BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 56) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 48) = receivedSkill;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)receivedSkill, v9, v10);
  return (System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *)v5;
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
    sub_1B64324(AiStateManager);
  return AiStateManager__ExistAiThinking(AiStateManager, this, v8->fields.aiLogic, procState, v8, timingPriority, 0LL);
}


bool __fastcall BattleServantData__ExistsResurrection(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Int32_array *shiftDeckList; // x8
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-18h] BYREF

  buff = 0LL;
  if ( BattleServantData__isGuts_42516480(this, &buff, v2) )
    return 1;
  shiftDeckList = this->fields.shiftDeckList;
  return shiftDeckList && this->fields.shiftDeckIndex < (signed int)shiftDeckList->max_length;
}


void __fastcall BattleServantData__ExtendedUpdateOnTransformServant(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvt,
        const MethodInfo *method)
{
  int aiId; // w1
  AiState_o *aiState; // x8

  if ( !userSvt )
    goto LABEL_6;
  this->fields.level = userSvt->fields.lv;
  this->fields._minActNum_k__BackingField = userSvt->fields.minActNum;
  *(_QWORD *)&this->fields.displayType = *(_QWORD *)&userSvt->fields.displayType;
  this->fields.npcSvtClassId = userSvt->fields.npcSvtClassId;
  aiId = userSvt->fields.aiId;
  if ( aiId >= 1 )
  {
    aiState = this->fields.aiState;
    this->fields.aiId = aiId;
    if ( aiState )
    {
      AiState__UpdateAiGroupId(aiState, aiId, 0LL);
      return;
    }
LABEL_6:
    sub_1B64324(this);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleServantData__FilterDisplayingSkillIdArray(
        BattleServantData_o *this,
        System_Int32_array *skillIdArray,
        bool defaultDisplay,
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
  __int64 v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  _QWORD *v18; // x19
  __int64 v19; // x8
  __int64 v20; // x0
  __int64 v21; // x0
  BattleDeckServantData_o *deckSvt; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x22
  _QWORD *v25; // x22
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x0
  System_Collections_Generic_HashSet_int__o *v29; // x23
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_int__bool__o *v35; // x0
  System_Func_TSource__bool__o *v36; // x22
  __int64 *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0

  if ( (byte_49FEAFC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, skillIdArray);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, v10);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v11);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass780_0__FilterDisplayingSkillIdArray_b__0__, v12);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass780_0__FilterDisplayingSkillIdArray_b__1__, v13);
    sub_1B640C8(&BattleServantData___c__DisplayClass780_0_TypeInfo, v14);
    byte_49FEAFC = 1;
  }
  v15 = sub_1B64314(BattleServantData___c__DisplayClass780_0_TypeInfo, skillIdArray, defaultDisplay);
  BattleServantData___c__DisplayClass780_0___ctor((BattleServantData___c__DisplayClass780_0_o *)v15, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdArray, 0LL) )
  {
    v18 = Method_System_Array_Empty_int___;
    v19 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v19 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v19 = v18[7];
    }
    v20 = *(_QWORD *)(v19 + 16);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1BB5FA4(v20);
    if ( !*(_DWORD *)(v20 + 224) )
      j_il2cpp_runtime_class_init_0(v20);
    v21 = *(_QWORD *)(v18[7] + 16LL);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1BB5FA4(v21);
    return **(System_Int32_array ***)(v21 + 184);
  }
  else
  {
    deckSvt = this->fields.deckSvt;
    if ( !deckSvt
      || (v24 = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetDisplayChangeSkillIdArray(
                                                                 deckSvt,
                                                                 0LL)) == 0LL )
    {
      v25 = Method_System_Array_Empty_int___;
      v26 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v26 )
      {
        sub_1BB6000(Method_System_Array_Empty_int___);
        v26 = v25[7];
      }
      v27 = *(_QWORD *)(v26 + 16);
      if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
        v27 = sub_1BB5FA4(v27);
      if ( !*(_DWORD *)(v27 + 224) )
        j_il2cpp_runtime_class_init_0(v27);
      v28 = *(_QWORD *)(v25[7] + 16LL);
      if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
        v28 = sub_1BB5FA4(v28);
      v24 = **(System_Collections_Generic_IEnumerable_T__o ***)(v28 + 184);
    }
    v29 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v16,
                                                         v17);
    System_Collections_Generic_HashSet_int____ctor_53885596(
      v29,
      v24,
      (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
    if ( !v15 )
      sub_1B64324(v30);
    *(_QWORD *)(v15 + 16) = v29;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)v29, v31, v32);
    v35 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v33, v34);
    v36 = (System_Func_TSource__bool__o *)v35;
    if ( defaultDisplay )
      v37 = &Method_BattleServantData___c__DisplayClass780_0__FilterDisplayingSkillIdArray_b__0__;
    else
      v37 = &Method_BattleServantData___c__DisplayClass780_0__FilterDisplayingSkillIdArray_b__1__;
    System_Func_int__bool____ctor(v35, (Il2CppObject *)v15, *v37, 0LL);
    v38 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)skillIdArray,
            v36,
            (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v38,
             (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
}


int32_t __fastcall BattleServantData__FixMaxActNum(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEA4C & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA4C = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
  return this->fields.maxActNum + BattleBuffData__getActValue_42105172(buffData, 110, v5, 0LL);
}


int32_t __fastcall BattleServantData__FixMinActNum(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEA4D & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA4D = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
  return this->fields._minActNum_k__BackingField + BattleBuffData__getActValue_42105172(buffData, 110, v5, 0LL);
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
  __int64 v16; // x22
  __int64 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  BattleBuffData_CheckIndividualitiesData_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  System_Func_T__TResult__o *v27; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  BattleServantData___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_object__int__o *_9__457_1; // x20
  Il2CppObject *v34; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0

  if ( (byte_49FEA6B & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, targetActs);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_BuffList_ACTION__BattleBuffData_BuffData___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v9);
    sub_1B640C8(&System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData___TypeInfo, v10);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v11);
    sub_1B640C8(&Method_BattleServantData___c__GetAddSideEffectBuffList_b__457_1__, v12);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass457_0__GetAddSideEffectBuffList_b__0__, v13);
    sub_1B640C8(&BattleServantData___c__DisplayClass457_0_TypeInfo, v14);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v15);
    byte_49FEA6B = 1;
  }
  v16 = sub_1B64314(BattleServantData___c__DisplayClass457_0_TypeInfo, targetActs, opSvt);
  BattleServantData___c__DisplayClass457_0___ctor((BattleServantData___c__DisplayClass457_0_o *)v16, 0LL);
  if ( !v16 )
    sub_1B64324(v17);
  *(_QWORD *)(v16 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)this, v18, v19);
  v22 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v20,
                                                       v21);
  BattleBuffData_CheckIndividualitiesData___ctor(v22, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(v16 + 24) = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)v22, v23, v24);
  v27 = (System_Func_T__TResult__o *)sub_1B64314(
                                       System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData___TypeInfo,
                                       v25,
                                       v26);
  System_Func_Int32Enum__object____ctor(
    v27,
    (Il2CppObject *)v16,
    Method_BattleServantData___c__DisplayClass457_0__GetAddSideEffectBuffList_b__0__,
    0LL);
  v28 = System_Linq_Enumerable__SelectMany_Int32Enum__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)targetActs,
          (System_Func_TSource__IEnumerable_TResult___o *)v27,
          (const MethodInfo_2E6B850 *)Method_System_Linq_Enumerable_SelectMany_BuffList_ACTION__BattleBuffData_BuffData___);
  v31 = BattleServantData___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v31 = BattleServantData___c_TypeInfo;
  }
  _9__457_1 = (System_Func_object__int__o *)v31->static_fields->__9__457_1;
  if ( !_9__457_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = BattleServantData___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__457_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__int__TypeInfo, v29, v30);
    System_Func_object__int____ctor(
      _9__457_1,
      v34,
      Method_BattleServantData___c__GetAddSideEffectBuffList_b__457_1__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__457_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__457_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__457_1, (int32_t)_9__457_1, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__457_1,
                                                               (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_object_(
                                            v38,
                                            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleServantData_Adjustment_array *__fastcall BattleServantData__GetAdjustments(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *adjustmentList; // x0
  ServantStatusBattleListViewItem_o *p_adjustmentList; // x19
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FEA14 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v5);
    byte_49FEA14 = 1;
  }
  adjustmentList = (System_Collections_Generic_List_object__o *)this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (ServantStatusBattleListViewItem_o *)&this->fields.adjustmentList;
    v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo,
                                                        method,
                                                        v2);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B6406C(p_adjustmentList, (int32_t)v8, v9, v10);
    adjustmentList = (System_Collections_Generic_List_object__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      sub_1B64324(0LL);
  }
  return (BattleServantData_Adjustment_array *)System_Collections_Generic_List_object___ToArray(
                                                 adjustmentList,
                                                 (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattlePointData_o *__fastcall BattleServantData__GetBattlePointData(
        BattleServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleServantData___c__DisplayClass281_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_BattlePointData__o *battlePointList; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FEA18 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePointData___, *(_QWORD *)&battlePointId);
    sub_1B640C8(&System_Func_BattlePointData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass281_0__GetBattlePointData_b__0__, v6);
    sub_1B640C8(&BattleServantData___c__DisplayClass281_0_TypeInfo, v7);
    byte_49FEA18 = 1;
  }
  v8 = (BattleServantData___c__DisplayClass281_0_o *)sub_1B64314(
                                                       BattleServantData___c__DisplayClass281_0_TypeInfo,
                                                       *(_QWORD *)&battlePointId,
                                                       method);
  BattleServantData___c__DisplayClass281_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  v8->fields.battlePointId = battlePointId;
  battlePointList = this->fields.battlePointList;
  v13 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattlePointData__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_BattleServantData___c__DisplayClass281_0__GetBattlePointData_b__0__,
    0LL);
  return (BattlePointData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                (System_Collections_Generic_IEnumerable_TSource__o *)battlePointList,
                                (System_Func_TSource__bool__o *)v13,
                                (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePointData___);
}


int32_t __fastcall BattleServantData__GetBattlePointPhase(
        BattleServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  BattlePointData_o *BattlePointData; // x0

  BattlePointData = BattleServantData__GetBattlePointData(this, battlePointId, method);
  if ( BattlePointData )
    LODWORD(BattlePointData) = BattlePointData__get_Phase(BattlePointData, 0LL);
  return (int)BattlePointData;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__GetBeforeStartTacticalFunctionBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEB03 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEB03 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
  return BattleBuffData__getBuffList_42092284(buffData, 142, v5, 1, 0, 0LL, 0LL);
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
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_49FEAB5 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAB5 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return (float)BattleBuffData__getActValue_42105172(buffData, 134, v8, 0LL);
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

  if ( (byte_49FEA6F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_25191/*"ガッツ"*/, method);
    byte_49FEA6F = 1;
  }
  return BattleServantData__GetKilledMeOpponentIndividualityArray(this, (System_String_o *)method, v2);
}


int32_t __fastcall BattleServantData__GetCommandCardIndex(
        BattleServantData_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Int64_array *userCommandCodeIds; // x0

  if ( (byte_49FEADA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_long___, userCommandCodeId);
    byte_49FEADA = 1;
  }
  if ( userCommandCodeId >= 1 && (userCommandCodeIds = this->fields.userCommandCodeIds) != 0LL )
    return System_Array__IndexOf_long_(
             userCommandCodeIds,
             userCommandCodeId,
             (const MethodInfo_2F31F78 *)Method_System_Array_IndexOf_long___);
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

  if ( (byte_49FEAD8 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_49FEAD8 = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_1B64170(int___TypeInfo, userCommandCodeIds->max_length);
  v7 = this->fields.userCommandCodeIds;
  if ( !v7 )
LABEL_15:
    sub_1B64324(CommandCodeInfo);
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
LABEL_18:
            sub_1B6432C(CommandCodeInfo, v5);
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

  if ( (byte_49FEAD9 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_49FEAD9 = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_1B64170(int___TypeInfo, userCommandCodeIds->max_length);
  v7 = this->fields.userCommandCodeIds;
  if ( !v7 )
LABEL_15:
    sub_1B64324(CommandCodeInfo);
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
LABEL_18:
            sub_1B6432C(CommandCodeInfo, v5);
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
  BattleServantData___c__DisplayClass717_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *commandCodeList_k__BackingField; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FEAE5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeInfo__Find__, userCommandCodeId);
    sub_1B640C8(&System_Predicate_CommandCodeInfo__TypeInfo, v5);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass717_0__GetCommandCodeInfo_b__0__, v6);
    sub_1B640C8(&BattleServantData___c__DisplayClass717_0_TypeInfo, v7);
    byte_49FEAE5 = 1;
  }
  v8 = (BattleServantData___c__DisplayClass717_0_o *)sub_1B64314(
                                                       BattleServantData___c__DisplayClass717_0_TypeInfo,
                                                       userCommandCodeId,
                                                       method);
  BattleServantData___c__DisplayClass717_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.userCommandCodeId = userCommandCodeId,
        commandCodeList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._commandCodeList_k__BackingField,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_CommandCodeInfo__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_BattleServantData___c__DisplayClass717_0__GetCommandCodeInfo_b__0__,
          0LL),
        !commandCodeList_k__BackingField) )
  {
    sub_1B64324(v9);
  }
  return (CommandCodeInfo_o *)System_Collections_Generic_List_object___Find(
                                commandCodeList_k__BackingField,
                                (System_Predicate_T__o *)v13,
                                (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_CommandCodeInfo__Find__);
}


int32_t __fastcall BattleServantData__GetCurrentShiftPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_1B64324(this);
  return shiftDeckList->max_length - this->fields.shiftDeckIndex;
}


System_String_o *__fastcall BattleServantData__GetCurrentTDErrorStatusVoiceSe(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *tdErrorStatusVoiceSeList; // x0
  int32_t tdErrorTouchCount; // w8

  if ( (byte_49FEA0B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v3);
    byte_49FEA0B = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.tdErrorStatusVoiceSeList, 0LL) )
    return 0LL;
  tdErrorStatusVoiceSeList = (System_Collections_Generic_List_object__o *)this->fields.tdErrorStatusVoiceSeList;
  if ( !tdErrorStatusVoiceSeList )
    sub_1B64324(0LL);
  tdErrorTouchCount = this->fields.tdErrorTouchCount;
  if ( tdErrorTouchCount > tdErrorStatusVoiceSeList->fields._size )
    return 0LL;
  else
    return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                tdErrorStatusVoiceSeList,
                                tdErrorTouchCount - 1,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__GetFieldIndividualityChangedFunctionBuff(
        BattleServantData_o *this,
        System_Int32_array *questIndividualityArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  BattleBuffData_o *buffData; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  BattleBuffData_CheckIndividualitiesData_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_object__bool__o *v18; // x19

  if ( (byte_49FEB02 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, questIndividualityArray);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass787_0__GetFieldIndividualityChangedFunctionBuff_b__0__, v6);
    sub_1B640C8(&BattleServantData___c__DisplayClass787_0_TypeInfo, v7);
    byte_49FEB02 = 1;
  }
  v8 = sub_1B64314(BattleServantData___c__DisplayClass787_0_TypeInfo, questIndividualityArray, method);
  BattleServantData___c__DisplayClass787_0___ctor((BattleServantData___c__DisplayClass787_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = questIndividualityArray,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)questIndividualityArray, v10, v11),
        buffData = this->fields.buffData,
        v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v13,
                                                             v14),
        BattleBuffData_CheckIndividualitiesData___ctor(v15, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        v18 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v16, v17),
        System_Func_object__bool____ctor(
          v18,
          (Il2CppObject *)v8,
          Method_BattleServantData___c__DisplayClass787_0__GetFieldIndividualityChangedFunctionBuff_b__0__,
          0LL),
        !buffData) )
  {
    sub_1B64324(v9);
  }
  return BattleBuffData__getBuffList_42092284(
           buffData,
           140,
           v15,
           1,
           0,
           (System_Func_BattleBuffData_BuffData__bool__o *)v18,
           0LL);
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
  __int64 v22; // x24
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_int__o *v25; // x21
  __int64 Instance; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x23
  int32_t v37; // w24
  int32_t *v38; // x25
  BattleBuffData_o *buffData; // x8
  System_Collections_Generic_List_object__o *v40; // x20
  int32_t v41; // w24
  __int64 v42; // x25
  __int64 v43; // x1
  _DWORD *v44; // x8
  __int64 *v46; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FEA36 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_SkillLvEntity__TypeInfo, method);
    sub_1B640C8(&BuffList_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_FunctionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v17);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass330_0__GetHasSideEffectSkillEffectIds_b__0__, v20);
    sub_1B640C8(&BattleServantData___c__DisplayClass330_0_TypeInfo, v21);
    byte_49FEA36 = 1;
  }
  entity = 0LL;
  v22 = sub_1B64314(BattleServantData___c__DisplayClass330_0_TypeInfo, method, v2);
  BattleServantData___c__DisplayClass330_0___ctor((BattleServantData___c__DisplayClass330_0_o *)v22, 0LL);
  v25 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v23, v24);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v22 )
    goto LABEL_18;
  *(_QWORD *)(v22 + 24) = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)v25, v27, v28);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v30 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_FunctionMaster___);
  *(_QWORD *)(v22 + 16) = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)v30, v31, v32);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v46 = (__int64 *)(v22 + 24);
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v33 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___);
  v36 = sub_1B64314(System_Action_SkillLvEntity__TypeInfo, v34, v35);
  System_Action_object____ctor(
    (System_Action_object__o *)v36,
    (Il2CppObject *)v22,
    Method_BattleServantData___c__DisplayClass330_0__GetHasSideEffectSkillEffectIds_b__0__,
    0LL);
  Instance = (__int64)this->fields.skillInfoList;
  if ( !Instance )
    goto LABEL_18;
  v37 = 0;
  while ( v37 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v37,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( !Instance )
      goto LABEL_18;
    v38 = (int32_t *)Instance;
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
           Instance,
           *(_QWORD *)(*(_QWORD *)Instance + 400LL)) )
    {
      Instance = (*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v38 + 392LL))(
                   v38,
                   *(_QWORD *)(*(_QWORD *)v38 + 400LL));
      if ( !MasterData_object )
        goto LABEL_18;
      Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, Instance, v38[9], 0LL);
      if ( Instance )
      {
        if ( !v36 )
          goto LABEL_18;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v36 + 24))(
          *(_QWORD *)(v36 + 64),
          Instance,
          *(_QWORD *)(v36 + 40));
      }
    }
    Instance = (__int64)this->fields.skillInfoList;
    ++v37;
    if ( !Instance )
      goto LABEL_18;
  }
  Instance = (__int64)this->fields.buffData;
  if ( !Instance
    || (Instance = (__int64)BattleBuffData__GetAllCommandCodeBuff((BattleBuffData_o *)Instance, 0LL),
        (buffData = this->fields.buffData) == 0LL)
    || (v40 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (__int64)BattleBuffData__GetAllCommandAssistBuff(buffData, 0LL),
        !v40) )
  {
LABEL_18:
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___AddRange(
    v40,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( v40->fields._size >= 1 )
  {
    v41 = 0;
    do
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v40,
                            v41,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      entity = 0LL;
      if ( !Instance || !v33 )
        goto LABEL_18;
      v42 = Instance;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v33,
             &entity,
             *(_DWORD *)(Instance + 16),
             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
      {
        Instance = (__int64)BuffList_TypeInfo;
        if ( !BuffList_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          Instance = (__int64)BuffList_TypeInfo;
        }
        if ( !entity )
          goto LABEL_18;
        Instance = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 24LL);
        if ( !Instance )
          goto LABEL_18;
        Instance = System_Collections_Generic_HashSet_Int32Enum___Contains(
                     (System_Collections_Generic_HashSet_T__o *)Instance,
                     HIDWORD(entity[1].klass),
                     (const MethodInfo_3366224 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__);
        if ( (Instance & 1) != 0 )
        {
          v44 = *(_DWORD **)(v42 + 40);
          if ( !v44 )
            goto LABEL_18;
          if ( v44[6] < 2u )
            sub_1B6432C(Instance, v43);
          if ( !MasterData_object )
            goto LABEL_18;
          Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v44[8], v44[9], 0LL);
          if ( Instance )
          {
            if ( !v36 )
              goto LABEL_18;
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v36 + 24))(
              *(_QWORD *)(v36 + 64),
              Instance,
              *(_QWORD *)(v36 + 40));
          }
        }
      }
    }
    while ( ++v41 < v40->fields._size );
  }
  Instance = *v46;
  if ( !*v46 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Instance,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  __int64 v9; // x20
  __int64 v10; // x21
  __int64 v11; // x0
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t v13; // w20
  __int64 v14; // x19
  __int64 v15; // x21
  int32_t v16; // w19
  __int64 v17; // x19
  __int64 v18; // x21
  int32_t v19; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FEA46 & 1) == 0 )
  {
    sub_1B640C8(&ImageLimitCount_TypeInfo, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&OptionManager_TypeInfo, v4);
    byte_49FEA46 = 1;
  }
  v6 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v6;
  *(_QWORD *)&v20.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
  if ( v7 )
    return v7 - (v7 < 11);
  v10 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v10;
  *(_QWORD *)&v21.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v21, 0LL);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_1B64324(v11);
  v13 = v11;
  if ( !deckSvt->fields.isFollowerSvt || Follower__IsNpc(this->fields.followerType, 0LL) )
    goto LABEL_15;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
LABEL_15:
    v15 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v15;
    *(_QWORD *)&v22.fields.fakeValue = v14;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v22, 0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    return ImageLimitCount__GetCardImageLimitCount(v16, v13, 1, 0, 0LL);
  }
  else
  {
    v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v18;
    *(_QWORD *)&v23.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_49FEA3C & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FEA3C = 1;
  }
  imageSvtId_k__BackingField = (unsigned int)this->fields._imageSvtId_k__BackingField;
  if ( (int)imageSvtId_k__BackingField <= 0 )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_1B64324(imageSvtId_k__BackingField);
    v6 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
    v5 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    LODWORD(imageSvtId_k__BackingField) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8, 0LL);
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

  KilledMeOpponentIndividualityArray = BattleServantData__GetKilledMeOpponentIndividualityArray(
                                         this,
                                         logCheckFunc,
                                         method);
  if ( !KilledMeOpponentIndividualityArray )
    sub_1B64324(0LL);
  if ( !KilledMeOpponentIndividualityArray->max_length )
    sub_1B6432C(KilledMeOpponentIndividualityArray, v4);
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
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v14; // x0

  if ( (byte_49FEA70 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData___TypeInfo, logCheckFunc);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v4);
    byte_49FEA70 = 1;
  }
  SnapShotDamagedOnLogicDead_k__BackingField = this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
  if ( !SnapShotDamagedOnLogicDead_k__BackingField )
    goto LABEL_11;
  v6 = BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
         SnapShotDamagedOnLogicDead_k__BackingField,
         0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v6, 0LL) )
    return v6;
  v6 = (BattleBuffData_CheckIndividualitiesData_array *)sub_1B64170(
                                                          BattleBuffData_CheckIndividualitiesData___TypeInfo,
                                                          1LL);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      v7,
                                                      v8);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v6 )
LABEL_11:
    sub_1B64324(SnapShotDamagedOnLogicDead_k__BackingField);
  if ( v9 )
  {
    SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupDefault_o *)sub_1B64204(
                                                                                          v9,
                                                                                          v6->obj.klass->_1.element_class);
    if ( !SnapShotDamagedOnLogicDead_k__BackingField )
    {
      v14 = sub_1B64348(0LL);
      sub_1B641F0(v14, 0LL);
    }
  }
  if ( !v6->max_length )
    sub_1B6432C(SnapShotDamagedOnLogicDead_k__BackingField, v10);
  v6->m_Items[0] = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v6->m_Items, (int32_t)v9, v11, v12);
  return v6;
}


BattleLogicServantAi_o *__fastcall BattleServantData__GetLogicServantAi(
        BattleServantData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !logic )
    sub_1B64324(this);
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
    sub_1B64324(this);
  return shiftDeckList->max_length - this->fields.shiftSubCount;
}


int32_t __fastcall BattleServantData__GetMaxShiftIconPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_1B64324(this);
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
  BattleBuffData_CheckIndividualitiesData_o *v12; // x23

  if ( (byte_49FEAEC & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, isSvtAction);
    byte_49FEAEC = 1;
  }
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       isSvtAction,
                                                       targetSvt);
  v12 = v11;
  if ( isSvtAction )
    BattleBuffData_CheckIndividualitiesData___ctor(v11, this, targetSvt, 0LL, command, 0LL, 0LL);
  else
    BattleBuffData_CheckIndividualitiesData___ctor_42147648(v11, this, 0LL, 0LL, notSvtIndivArray, 0LL, 0LL);
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
  int v2; // w8

  v2 = this->fields._minActNum_k__BackingField - this->fields.actionCount;
  return v2 & ~(v2 >> 31);
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

  if ( (byte_49FEAFA & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    byte_49FEAFA = 1;
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

  if ( (byte_49FEAF9 & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    byte_49FEAF9 = 1;
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

  if ( (byte_49FEAFB & 1) == 0 )
  {
    sub_1B640C8(&string_TypeInfo, method);
    byte_49FEAFB = 1;
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

  if ( (byte_49FEAAD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_25278/*"死亡時の非表示を防ぐバフ"*/, method);
    byte_49FEAAD = 1;
  }
  KilledMeOpponentIndividuality = BattleServantData__GetKilledMeOpponentIndividuality(
                                    this,
                                    (System_String_o *)method,
                                    v2);
  BuffData = BattleServantData__get_BuffData(this, v5);
  if ( !BuffData )
    sub_1B64324(0LL);
  return BattleBuffData__GetFirstMatchCondBuff(BuffData, 127, KilledMeOpponentIndividuality, 0, 0LL);
}


int32_t __fastcall BattleServantData__GetRemainActionCount(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__FixMaxActNum(this, method) - this->fields.actionCount;
}


int32_t __fastcall BattleServantData__GetRemainingNeedActCount(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t fixed; // w0

  fixed = BattleServantData__FixMinActNum(this, method);
  return (fixed - this->fields.actionCount) & ~((fixed - this->fields.actionCount) >> 31);
}


int32_t __fastcall BattleServantData__GetRevengeIdCheckOpponentOnly(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !buffData )
    sub_1B64324(this);
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

  if ( (byte_49FEA1E & 1) == 0 )
  {
    sub_1B640C8(&Method_JsonManager_Deserialize_BattleServantData_SaveData___, str);
    sub_1B640C8(&JsonManager_TypeInfo, v4);
    byte_49FEA1E = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (BattleServantData_SaveData_o *)JsonManager__Deserialize_object_(
                                           (Il2CppObject *)str,
                                           (const MethodInfo_2E9ED70 *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
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
      sub_1B64324(0LL);
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
    sub_1B64324(TreasureDevice);
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

  if ( (byte_49FEACE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, externalIndividualities);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FEACE = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   externalIndividualities,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)this->fields.svtIndividuality;
  if ( !svtIndividuality )
  {
    svtdata = this->fields.svtdata;
    v13 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v16.fields.currentCryptoKey = v13;
    *(_QWORD *)&v16.fields.fakeValue = v12;
    v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
    Individuality = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                            this->fields._dispLimitCount_k__BackingField,
                                            0LL);
    if ( !svtdata )
LABEL_14:
      sub_1B64324(Individuality);
    Individuality = ServantEntity__getIndividuality(svtdata, v14, (int32_t)Individuality, 0LL);
    svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)Individuality;
  }
  if ( !v8 )
    goto LABEL_14;
  System_Collections_Generic_List_int___AddRange(
    v8,
    svtIndividuality,
    (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( externalIndividualities )
    System_Collections_Generic_List_int___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)externalIndividualities,
      (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.commonAddIndividuality, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.commonAddIndividuality,
      (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
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

  if ( (byte_49FEA64 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    byte_49FEA64 = 1;
  }
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
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
    sub_1B64324(BuffData);
  }
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)BuffData,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  BattleBuffData_o *TakeOverAiStateArray; // x0
  int32_t v17; // w2
  int32_t v18; // w3
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
  bool v35; // w0
  const MethodInfo *v36; // x1
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x1
  int32_t v44; // w0
  int32_t v45; // w22
  int32_t v46; // w23
  struct System_Collections_Generic_Dictionary_long__int__o *dicDistributeStar; // x22
  const MethodInfo *v48; // x1
  int64_t UserSvtId; // x0
  WarBoardBattleServantEvent_o *servantEvent; // x20
  const MethodInfo *v51; // x1
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  int64_t npcSvtEquipId; // x8

  if ( (byte_49FEA22 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_GetValue_long__int___, arg);
    sub_1B640C8(&System_Math_TypeInfo, v5);
    sub_1B640C8(&ServantAiResetChecker_TypeInfo, v6);
    sub_1B640C8(&BattleWarBoardInfo_WarBoardServantInfo_TypeInfo, v7);
    byte_49FEA22 = 1;
  }
  v8 = sub_1B64314(BattleWarBoardInfo_WarBoardServantInfo_TypeInfo, arg, method);
  BattleWarBoardInfo_WarBoardServantInfo___ctor((BattleWarBoardInfo_WarBoardServantInfo_o *)v8, 0LL);
  isAction = BattleServantData__isAction(this, v9);
  AiStateManager = BattleServantData__get_AiStateManager(this, v11);
  v15 = (ServantAiResetChecker_o *)sub_1B64314(ServantAiResetChecker_TypeInfo, v13, v14);
  ServantAiResetChecker___ctor(v15, this, 0LL);
  if ( !AiStateManager )
    goto LABEL_21;
  TakeOverAiStateArray = (BattleBuffData_o *)AiStateManager__MakeTakeOverAiStateArray(
                                               AiStateManager,
                                               (AiResetChecker_o *)v15,
                                               0LL);
  if ( !v8 )
    goto LABEL_21;
  *(_QWORD *)(v8 + 112) = TakeOverAiStateArray;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 112), (int32_t)TakeOverAiStateArray, v17, v18);
  TakeOverAiStateArray = BattleServantData__get_BuffData(this, v19);
  if ( !TakeOverAiStateArray )
    goto LABEL_21;
  BattleBuffData__ResetNotTakeOverBuff(TakeOverAiStateArray, 0LL);
  TakeOverAiStateArray = BattleServantData__get_BuffData(this, v20);
  if ( !arg )
    goto LABEL_21;
  if ( !TakeOverAiStateArray )
    goto LABEL_21;
  BattleBuffData__RemoveNoTurnBuff(TakeOverAiStateArray, arg->fields.logic, 0LL);
  TakeOverAiStateArray = BattleServantData__get_BuffData(this, v21);
  if ( !TakeOverAiStateArray )
    goto LABEL_21;
  BattleBuffData__UpdateForceNoField(TakeOverAiStateArray, 0LL);
  BuffData = BattleServantData__get_BuffData(this, v22);
  v24 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  MaxHp = BattleServantData__getMaxHp(this, v25);
  Individualities = BattleServantData__getIndividualities(this, 0LL, v27);
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 0, 0, 0, v29);
  fieldIndiv = arg->fields.fieldIndiv;
  v32 = BuffIndividualities;
  TakeOverAiStateArray = (BattleBuffData_o *)BattleServantData__getBuffIndividualities(this, 0, 0, 1, v33);
  if ( !BuffData )
    goto LABEL_21;
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
  *(_BYTE *)(v8 + 85) = v35;
  *(_QWORD *)(v8 + 16) = BattleServantData__getUserSvtId(this, v34);
  *(_QWORD *)(v8 + 24) = *(_QWORD *)&this->fields.maxDefeatPoint;
  TakeOverAiStateArray = BattleServantData__get_BuffData(this, v36);
  if ( !TakeOverAiStateArray )
    goto LABEL_21;
  SaveData = BattleBuffData__getSaveData(TakeOverAiStateArray, 0LL);
  *(_QWORD *)(v8 + 48) = SaveData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 48), (int32_t)SaveData, v38, v39);
  *(_DWORD *)(v8 + 56) = BattleServantData__GetSkillChargeTurn(this, 0, v40);
  *(_DWORD *)(v8 + 60) = BattleServantData__GetSkillChargeTurn(this, 1, v41);
  *(_DWORD *)(v8 + 64) = BattleServantData__GetSkillChargeTurn(this, 2, v42);
  *(_DWORD *)(v8 + 36) = BattleServantData__getMaxHp(this, v43);
  v44 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  v45 = *(_DWORD *)(v8 + 36);
  v46 = v44;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  *(_DWORD *)(v8 + 32) = System_Math__Min_62194364(v46, v45, 0LL);
  *(_DWORD *)(v8 + 40) = this->fields.np;
  *(_DWORD *)(v8 + 44) = this->fields.nexttpturn;
  *(_QWORD *)(v8 + 68) = *(_QWORD *)&this->fields.aftSquareIndex;
  *(_QWORD *)(v8 + 76) = *(_QWORD *)&this->fields.transformIndex;
  *(_BYTE *)(v8 + 84) = this->fields.isSleepWaitMode;
  dicDistributeStar = arg->fields.dicDistributeStar;
  UserSvtId = BattleServantData__getUserSvtId(this, v48);
  *(_DWORD *)(v8 + 88) = BasicHelper__GetValue_long__int_(
                           (System_Collections_Generic_Dictionary_K__V__o *)dicDistributeStar,
                           UserSvtId,
                           0,
                           (const MethodInfo_2E27D6C *)Method_BasicHelper_GetValue_long__int___);
  *(_QWORD *)(v8 + 92) = *(_QWORD *)&this->fields.squareEffectSkillId;
  servantEvent = arg->fields.servantEvent;
  TakeOverAiStateArray = (BattleBuffData_o *)BattleServantData__getUserSvtId(this, v51);
  if ( !servantEvent )
LABEL_21:
    sub_1B64324(TakeOverAiStateArray);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(servantEvent, (int64_t)TakeOverAiStateArray, 0LL);
  if ( EventServantInfo )
    npcSvtEquipId = EventServantInfo->fields.npcSvtEquipId;
  else
    npcSvtEquipId = 0LL;
  *(_QWORD *)(v8 + 104) = npcSvtEquipId;
  return (BattleWarBoardInfo_WarBoardServantInfo_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__GetTdIdChangeByBattlePoint(
        BattleServantData_o *this,
        int32_t tdId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  DataMasterBase_TMaster__TEntity__PKType__o *TdDataMasterBase; // x0
  const MethodInfo *v6; // x3
  int32_t tdIdChangeByBattlePoint; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = tdId;
  if ( (byte_49FEA1A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, *(_QWORD *)&tdId);
    byte_49FEA1A = 1;
  }
  entity = 0LL;
  tdIdChangeByBattlePoint = 0;
  TdDataMasterBase = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleServantData__get_TdDataMasterBase(
                                                                     this,
                                                                     *(const MethodInfo **)&tdId);
  if ( !TdDataMasterBase )
    sub_1B64324(0LL);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         TdDataMasterBase,
         &entity,
         v3,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__)
    && BattleServantData__TryGetTdIdChangeByBattlePoint(
         this,
         (TreasureDvcEntity_o *)entity,
         &tdIdChangeByBattlePoint,
         v6) )
  {
    return tdIdChangeByBattlePoint;
  }
  return v3;
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
  System_String_o *text; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FEAA4 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAA4 = 1;
  }
  text = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getActValue_42105208(buffData, 90, &text, v8, 0LL);
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

  if ( (byte_49FEAA2 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAA2 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getActMag_42106216(buffData, 91, v8, 0LL);
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
  unsigned __int16 *v12; // x0
  unsigned __int16 v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FEA7F & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffTypes);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___, v5);
    sub_1B640C8(&Method_System_Nullable_bool__GetValueOrDefault__, v6);
    sub_1B640C8(&Method_System_Nullable_bool___ctor__, v7);
    byte_49FEA7F = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
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
      v11 = System_Linq_Enumerable__Any_object_(
              BuffList,
              (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
      v12 = &v14;
      v14 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v12,
        v11,
        (const MethodInfo_35CA22C *)Method_System_Nullable_bool___ctor__);
      LOBYTE(BuffList) = v14 > 0xFFu;
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

  if ( (byte_49FEA7E & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA7E = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return 0;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
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
bool __fastcall BattleServantData__HasWaveTurnEvent_object_(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo_2E2B0A0 *method)
{
  __int64 v8; // x1
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *v12; // x20
  Il2CppClass *_1_BattleServantData___c__661_T; // x8
  Il2CppClass *v14; // x0
  System_Func_object__bool__o *v15; // x21
  Il2CppClass *v16; // x0
  Il2CppClass *v17; // x0
  Il2CppObject *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppClass *v21; // x0
  Il2CppClass *v22; // x0

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___, *(_QWORD *)&wave);
    sub_1B640C8(&System_Func_ServantWaveTurnEvent__bool__TypeInfo, v8);
    if ( !method->rgctx_data )
      sub_1BB6000(method);
  }
  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner )
    sub_1B64324(0LL);
  v12 = ServantWaveTurnEventOwner__EventEnumerator(waveTurnEventOwner, wave, turn, 0LL);
  _1_BattleServantData___c__661_T = method->rgctx_data->_1_BattleServantData___c__661_T_;
  if ( (BYTE5(_1_BattleServantData___c__661_T->vtable[0].methodPtr) & 1) == 0 )
    _1_BattleServantData___c__661_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_1_BattleServantData___c__661_T_);
  if ( !_1_BattleServantData___c__661_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_1_BattleServantData___c__661_T);
  v14 = method->rgctx_data->_1_BattleServantData___c__661_T_;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1BB5FA4(v14);
  v15 = (System_Func_object__bool__o *)*((_QWORD *)v14->static_fields + 1);
  if ( !v15 )
  {
    v16 = method->rgctx_data->_1_BattleServantData___c__661_T_;
    if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
      v16 = (Il2CppClass *)sub_1BB5FA4(v16);
    if ( !v16->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v16);
    v17 = method->rgctx_data->_1_BattleServantData___c__661_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1BB5FA4(v17);
    v18 = *(Il2CppObject **)v17->static_fields;
    v15 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ServantWaveTurnEvent__bool__TypeInfo, v10, v11);
    System_Func_object__bool____ctor(
      v15,
      v18,
      (intptr_t)method->rgctx_data->_2_BattleServantData___c__661_T___HasWaveTurnEvent_b__661_0,
      0LL);
    v21 = method->rgctx_data->_1_BattleServantData___c__661_T_;
    if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1BB5FA4(v21);
    *((_QWORD *)v21->static_fields + 1) = v15;
    v22 = method->rgctx_data->_1_BattleServantData___c__661_T_;
    if ( (BYTE5(v22->vtable[0].methodPtr) & 1) == 0 )
      v22 = (Il2CppClass *)sub_1BB5FA4(v22);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v22->static_fields + 8), (int32_t)v15, v19, v20);
  }
  return System_Linq_Enumerable__Any_object__48531816(
           (System_Collections_Generic_IEnumerable_TSource__o *)v12,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  struct System_Int32_array *v16; // x1

  if ( (byte_49FEA28 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B640C8(&StringLiteral_7323/*"INDIVIDUALITY_IS_SUPPORT"*/, v8);
    byte_49FEA28 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  IsAnySupport = Follower__IsAnySupport(this->fields.followerType, 0LL);
  if ( (IsAnySupport & 1) != 0 )
  {
    IsAnySupport = ConstantMaster__getValue((System_String_o *)StringLiteral_7323/*"INDIVIDUALITY_IS_SUPPORT"*/, 0LL);
    if ( v9 )
    {
      items = v9->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( items )
      {
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            IsAnySupport,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size + 1] = IsAnySupport;
        }
        goto LABEL_11;
      }
    }
LABEL_9:
    sub_1B64324(IsAnySupport);
  }
  if ( !v9 )
    goto LABEL_9;
LABEL_11:
  if ( v9->fields._size < 1 )
    v16 = 0LL;
  else
    v16 = System_Collections_Generic_List_int___ToArray(
            v9,
            (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.commonAddIndividuality = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commonAddIndividuality, (int32_t)v16, v11, v12);
}


void __fastcall BattleServantData__InitializeBuff(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o **p_buffData; // x20
  int MaxHp; // w21
  BattleBuffData_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x3

  if ( (byte_49FEAC9 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_TypeInfo, method);
    byte_49FEAC9 = 1;
  }
  p_buffData = &this->fields.buffData;
  if ( this->fields.buffData )
  {
    MaxHp = BattleServantData__getMaxHp(this, method);
  }
  else
  {
    v6 = (BattleBuffData_o *)sub_1B64314(BattleBuffData_TypeInfo, method, v2);
    BattleBuffData___ctor(v6, 0LL);
    *p_buffData = v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buffData, (int32_t)v6, v7, v8);
    MaxHp = -1;
  }
  if ( !*p_buffData )
    sub_1B64324(0LL);
  BattleBuffData__Initialize(*p_buffData, 0LL);
  if ( MaxHp >= 1 )
    BattleServantData__checkUpdateUpdownHp(this, MaxHp, 0, v9);
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

  if ( (byte_49FEAE6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, data);
    sub_1B640C8(&StringLiteral_11476/*"SEQ_IDS_20220729"*/, v4);
    byte_49FEAE6 = 1;
  }
  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)data);
  if ( TreasureDevice )
  {
    ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray((System_String_o *)StringLiteral_11476/*"SEQ_IDS_20220729"*/, 0LL);
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
                                 (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___) >= 0;
    }
  }
  return (char)TreasureDevice;
}


bool __fastcall BattleServantData__IsBreakShiftVoiceEnabled(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleDeckServantData_o *deckSvt; // x0
  System_Nullable_bool__o v5; // w0
  BattleDeckServantData_o *v7; // x0

  if ( (byte_49FEAFD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Nullable_bool__GetValueOrDefault__, method);
    sub_1B640C8(&Method_System_Nullable_bool__get_HasValue__, v3);
    byte_49FEAFD = 1;
  }
  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
  {
    v5 = BattleDeckServantData__IsVoiceEnabledOnBreakShift(deckSvt, 0LL);
    if ( v5.fields.hasValue )
    {
      return (*(_WORD *)&v5 & 0xFF00) != 0LL;
    }
    else
    {
      v7 = this->fields.deckSvt;
      if ( !v7 )
        sub_1B64324(0LL);
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
  Il2CppObject **v22; // x27
  const MethodInfo_317AC04 **v23; // x28
  Il2CppObject **v24; // x24
  Il2CppObject **v25; // x23
  Il2CppObject *current; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  int64_t v32; // x21
  const MethodInfo_317AC04 **v33; // x26
  Il2CppObject **v34; // x28
  int32_t v35; // w27
  Il2CppObject **v36; // x29
  Il2CppObject **v37; // x19
  Il2CppObject *v38; // x22
  __int64 v39; // x23
  __int64 v40; // x24
  __int64 v41; // x0
  __int64 v42; // x2
  __int64 v43; // x3
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  _BOOL8 v46; // x0
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v49; // w21
  __int128 v50; // q0
  char v51; // w19
  int v52; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+50h] [xbp-A0h] BYREF
  Il2CppObject *v57; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *v58; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v6 = this;
  if ( (byte_49FEAE7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, data);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&long_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__, v14);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&string_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_23610/*"svtId"*/, v19);
    sub_1B640C8(&StringLiteral_24354/*"userSvtId"*/, v20);
    this = (BattleServantData_o *)sub_1B640C8(&StringLiteral_23007/*"seqId"*/, v21);
    byte_49FEAE7 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v58 = 0LL;
  value = 0LL;
  entity = 0LL;
  v57 = 0LL;
  if ( !data || (this = (BattleServantData_o *)data->fields.firstNpPlayList) == 0LL )
    sub_1B64324(this);
  v22 = (Il2CppObject **)&StringLiteral_23007/*"seqId"*/;
  v23 = (const MethodInfo_317AC04 **)&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__;
  v24 = (Il2CppObject **)&StringLiteral_24354/*"userSvtId"*/;
  v25 = (Il2CppObject **)&StringLiteral_23610/*"svtId"*/;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v55,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v60.fields._current = (Il2CppObject *)v55.fields.fakeValue;
  *(_OWORD *)&v60.fields._list = *(_OWORD *)&v55.fields.currentCryptoKey;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v60,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
        {
          v51 = 0;
          v52 = 10;
          goto LABEL_40;
        }
        current = v60.fields._current;
        if ( v60.fields._current
          && System_Collections_Generic_Dictionary_object__object___TryGetValue(
               (System_Collections_Generic_Dictionary_object__object__o *)v60.fields._current,
               *v22,
               &value,
               *v23) )
        {
          if ( !value )
            sub_1B64324(0LL);
          if ( value->klass->_1.element_class != int_TypeInfo->_1.element_class )
          {
            sub_1B645E4(value);
LABEL_44:
            sub_1B64324(Instance);
          }
          if ( *(_DWORD *)j_il2cpp_object_unbox_0(value, int_TypeInfo, v27, v28) == seqId )
            break;
        }
      }
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)current,
             *v24,
             &v58,
             *v23)
        && v58 )
      {
        if ( (System_String_c *)v58->klass == string_TypeInfo )
        {
          v32 = System_Int64__Parse((System_String_o *)v58, 0LL);
          goto LABEL_17;
        }
        if ( (System_Int64_c *)v58->klass == long_TypeInfo )
        {
          v32 = *(_QWORD *)j_il2cpp_object_unbox_0(v58, v29, v30, v31);
          goto LABEL_17;
        }
      }
      v32 = 0LL;
LABEL_17:
      if ( v6->fields.isEnemy || v6->fields.followerType )
        break;
      v50 = *(_OWORD *)&v6->fields.userSvtId.fields.fakeValue;
      *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v6->fields.userSvtId.fields.currentCryptoKey;
      *(_OWORD *)&v55.fields.fakeValue = v50;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v54 = v55;
      if ( v32 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v54, 0LL) )
        goto LABEL_41;
    }
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)current,
           *v25,
           &v57,
           *v23) )
    {
      v33 = v23;
      v34 = v22;
      v35 = seqId;
      v36 = v24;
      v37 = v25;
      v38 = v57;
      v40 = *(_QWORD *)&v6->fields.svtId.fields.currentCryptoKey;
      v39 = *(_QWORD *)&v6->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v61.fields.currentCryptoKey = v40;
      *(_QWORD *)&v61.fields.fakeValue = v39;
      v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v61, 0LL);
      if ( !v38 )
        goto LABEL_48;
      if ( v38->klass->_1.element_class != int_TypeInfo->_1.element_class )
      {
        sub_1B645E4(v38);
LABEL_48:
        sub_1B64324(v41);
      }
      v24 = v36;
      v25 = v37;
      seqId = v35;
      v22 = v34;
      v23 = v33;
      if ( *(_DWORD *)j_il2cpp_object_unbox_0(v38, int_TypeInfo, v42, v43) == (_DWORD)v41 )
        break;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1B64324(0LL);
    v46 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            v32,
            (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v46 )
    {
      if ( !entity )
        sub_1B64324(v46);
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v62.fields.currentCryptoKey = klass;
      *(_QWORD *)&v62.fields.fakeValue = monitor;
      v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v62, 0LL);
      if ( v49 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6->fields.svtId, 0LL) )
        break;
    }
  }
LABEL_41:
  v51 = 1;
  v52 = 8;
LABEL_40:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  return v51 & (v52 == 8);
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
    sub_1B64324(0LL);
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
  bool v9; // w23
  SkillLvMaster_o *v10; // x19
  unsigned __int64 v11; // x24
  Il2CppClass **v12; // x21
  DataManager_o **v13; // x21
  DataManager_o *v14; // t1
  DataManager_o *v15; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v17; // x21
  unsigned __int64 v18; // x25
  bool *p_DispLog; // x26

  if ( (byte_49FEAEA & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEAEA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (equipList = this->fields.equipList) == 0LL) )
  {
LABEL_25:
    sub_1B64324(Instance);
  }
  v8 = *(_QWORD *)&equipList->max_length;
  v9 = (int)v8 > 0;
  if ( (int)v8 >= 1 )
  {
    v10 = (SkillLvMaster_o *)Instance;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v8 )
        goto LABEL_24;
      v12 = &equipList->obj.klass + v11;
      v14 = (DataManager_o *)v12[4];
      v13 = (DataManager_o **)(v12 + 4);
      Instance = v14;
      if ( v14 )
      {
        Instance = (DataManager_o *)BattleUserServantData__getBattleSkillIdList(
                                      (BattleUserServantData_o *)Instance,
                                      0LL);
        if ( v11 >= equipList->max_length )
          goto LABEL_24;
        v15 = Instance;
        Instance = *v13;
        if ( !*v13 )
          goto LABEL_25;
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
                                      Instance,
                                      Instance->klass[1]._1.this_arg.data);
        if ( !v15 )
          goto LABEL_25;
        m_CancellationTokenSource = v15->fields.m_CancellationTokenSource;
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_22:
      LODWORD(v8) = equipList->max_length;
      v9 = (__int64)++v11 < (int)v8;
      if ( (__int64)v11 >= (int)v8 )
        return v9;
    }
    v17 = Instance;
    v18 = 0LL;
    p_DispLog = &Instance->fields._DispLog;
    while ( v18 < (unsigned int)m_CancellationTokenSource )
    {
      if ( !v17 )
        goto LABEL_25;
      if ( v18 >= LODWORD(v17->fields.m_CancellationTokenSource) )
        break;
      v6 = *((unsigned int *)&v15->fields._DispLog + v18);
      if ( (int)v6 >= 1 )
      {
        if ( !v10 )
          goto LABEL_25;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity(v10, v6, *(_DWORD *)&p_DispLog[4 * v18], 0LL);
        if ( Instance )
          return v9;
      }
      LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
      if ( (__int64)++v18 >= (int)m_CancellationTokenSource )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B6432C(Instance, v6);
  }
  return v9;
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
  return (this->fields.fixNpSpeed & 0xFFFFFFFE) == 2;
}


bool __fastcall BattleServantData__IsFollwerSupport(BattleServantData_o *this, const MethodInfo *method)
{
  return !Follower__IsNpc(this->fields.followerType, 0LL) && this->fields.followerType != 0;
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
    sub_1B64324(0LL);
  return BattleDeckServantData__IsHideClassSkillNpcFollower(deckSvt, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__IsMoveToSubMember(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_49FEAD6 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___, *(_QWORD *)&wave);
    byte_49FEAD6 = 1;
  }
  return BattleServantData__HasWaveTurnEvent_object_(
           this,
           wave,
           turn,
           (const MethodInfo_2E2B0A0 *)Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___);
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

  if ( !BattleServantData__get_TreasureDevice(this, method) || this->fields.playedNPCount > 0 )
    return 0;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
  if ( !TreasureDevice )
    sub_1B64324(0LL);
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
  __int64 v12; // x1
  int32_t SvtId; // w22
  const MethodInfo *v14; // x2
  int32_t DispLimitCount; // w0
  int32_t overwriteSvtVoiceId; // w25
  int32_t v17; // w24
  const MethodInfo_33E4B14 *v18; // x4
  System_String_o *FileName; // x23
  ServantAssetLoadManager_o *Instance; // x0
  Il2CppObject *Weight; // x2
  const MethodInfo_33E4B14 *v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_KeyValuePair_string__int__o v28; // [xsp+18h] [xbp-68h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v30; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o v31; // 0:x0.16

  if ( (byte_49FEAF8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__int___ctor__, condMst);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_1B640C8(&Voice_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49FEAF8 = 1;
  }
  condEntity = 0LL;
  SvtId = BattleServantData__getSvtId(this, (const MethodInfo *)condMst);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v14);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  v17 = DispLimitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( !ServantAssetLoadManager__ExistsBattleVoice(SvtId, v17, overwriteSvtVoiceId, type, 0LL) )
    goto LABEL_12;
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager__GetPrefixVoiceId(
                                                  Instance,
                                                  SvtId,
                                                  v17,
                                                  FileName,
                                                  0LL),
        !condMst) )
  {
    sub_1B64324(Instance);
  }
  if ( VoicePlayCondMaster__isVoicePlay_39977484(
         condMst,
         SvtId,
         (System_String_o *)Instance,
         &condEntity,
         0LL,
         -1LL,
         -1,
         0LL,
         this,
         0LL) )
  {
    Weight = (Il2CppObject *)(unsigned int)VoicePlayCondMaster__GetWeight(condMst, condEntity, 10, 0LL);
    v30.fields.key = (Il2CppObject *)&v28;
    *(_QWORD *)&v30.fields.value = FileName;
    v28 = (System_Collections_Generic_KeyValuePair_string__int__o)0LL;
    System_Collections_Generic_KeyValuePair_object__int____ctor(
      v30,
      Weight,
      Method_System_Collections_Generic_KeyValuePair_string__int___ctor__,
      v22);
    *pairVoiceIdWeight = v28;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)pairVoiceIdWeight, 0, v23, v24);
    return 1;
  }
  else
  {
LABEL_12:
    *(_QWORD *)&v31.fields.value = StringLiteral_1/*""*/;
    v31.fields.key = (Il2CppObject *)&v28;
    v28 = (System_Collections_Generic_KeyValuePair_string__int__o)0LL;
    System_Collections_Generic_KeyValuePair_object__int____ctor(
      v31,
      0LL,
      Method_System_Collections_Generic_KeyValuePair_string__int___ctor__,
      v18);
    *pairVoiceIdWeight = v28;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)pairVoiceIdWeight, 0, v26, v27);
    return 0;
  }
}


bool __fastcall BattleServantData__IsTDAppearance(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x19
  const MethodInfo *v4; // x2
  __int64 DispLimitCount; // x0

  TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v4);
  if ( !TreasureDevice )
    sub_1B64324(DispLimitCount);
  return TreasureDvcEntity__getFixAppearanceInfoArray(TreasureDevice, DispLimitCount, 0LL) != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_49FEAD7 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___, *(_QWORD *)&wave);
    byte_49FEAD7 = 1;
  }
  return BattleServantData__HasWaveTurnEvent_object_(
           this,
           wave,
           turn,
           (const MethodInfo_2E2B0A0 *)Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___);
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

  if ( (byte_49FEA55 & 1) == 0 )
  {
    sub_1B640C8(&BattleCommandData_TypeInfo, method);
    byte_49FEA55 = 1;
  }
  if ( !this->fields.TDvc || !this->fields._SvtTDvc )
    return 0LL;
  v4 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, method, v2);
  BattleCommandData___ctor(v4, 0LL);
  SvtTDvc = BattleServantData__get_SvtTDvc(this, v5);
  if ( !SvtTDvc || !v4 )
    sub_1B64324(SvtTDvc);
  v4->fields._type = SvtTDvc->fields.cardId;
  v4->fields.treasureDvc = BattleServantData__getTreasureDvcId(this, 1, v7);
  return v4;
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
  __int64 v10; // x1
  int32_t v11; // w25
  int32_t v12; // w24
  BattleServantData_o *v13; // x23
  const MethodInfo *v14; // x4

  if ( !userSvt
    || (v4 = this,
        BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(userSvt, 0LL),
        this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleUserServantData_o *, void *))userSvt->klass->vtable._6_getSkillLevelList.method)(
                                        userSvt,
                                        userSvt->klass[1]._1.image),
        !BattleSkillIdList) )
  {
LABEL_15:
    sub_1B64324(this);
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
LABEL_14:
          sub_1B6432C(this, v10);
        v11 = BattleSkillIdList->m_Items[v8 + 1];
        v12 = *((_DWORD *)&p_userSvtId->fields.currentCryptoKey + v8);
        v13 = this;
        if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._5_isAiTarget.method)(
               this,
               this->klass->vtable._6_setBuffState.methodPtr) != v11
          || HIDWORD(v13->fields.userSvtId.fields.currentCryptoKey) != v12 )
        {
          BattleServantData__ReplaceSelfSkillInfo(v4, v8, v11, v12, v14);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
  ServantWaveTurnEventOwner__Add(waveTurnEventOwner, ev, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__RemoveBuffsWithUpdateView(
        BattleServantData_o *this,
        System_Func_BattleBuffData_BuffData____o *removeBuffMethod,
        System_Int32_array *fieldIndiv,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x23
  BattleServantData_o *v6; // x20
  System_Int32_array *IgnoreAuraBuffIds; // x0
  char v11; // w23
  const MethodInfo *v12; // x3
  BattleBuffData_BuffData_array *v13; // x21
  BattleBuffData_o *v14; // x23
  System_Int32_array *v15; // x0
  char v16; // w23
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  int max_length; // w8
  unsigned int v21; // w22
  BattleBuffData_BuffData_o *v22; // x8

  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_15;
  v6 = this;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(this->fields.buffData, 0LL);
  this = (BattleServantData_o *)BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0LL);
  if ( !removeBuffMethod )
    goto LABEL_15;
  v11 = (char)this;
  this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))removeBuffMethod->fields.m_target)(
                                  removeBuffMethod->fields.original_method_info,
                                  *(_QWORD *)&removeBuffMethod->fields.extra_arg);
  v13 = (BattleBuffData_BuffData_array *)this;
  if ( (v11 & 1) != 0 )
  {
    v14 = v6->fields.buffData;
    if ( !v14 )
      goto LABEL_15;
    v15 = BattleBuffData__GetIgnoreAuraBuffIds(v6->fields.buffData, 0LL);
    this = (BattleServantData_o *)BattleBuffData__checkBuffId(v14, v15, 0LL);
    v16 = (char)this;
  }
  else
  {
    v16 = 1;
  }
  if ( !logic
    || (BattleServantData__updateConditionsBuff(v6, fieldIndiv, logic->fields.perf, v12),
        BattleServantData__updateHp(v6, v17),
        BattleServantData__updateBuff(v6, v16 & 1, 1, v18),
        !v13) )
  {
LABEL_15:
    sub_1B64324(this);
  }
  max_length = v13->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1B6432C(this, v19);
      v22 = v13->m_Items[v21];
      if ( !v22 )
        break;
      BattleLogic__removeDoNotSelectCommandCardBuff(logic, v22->fields.buffId, v6, 0LL);
      max_length = v13->max_length;
      if ( (int)++v21 >= max_length )
        return v13;
    }
    goto LABEL_15;
  }
  return v13;
}


void __fastcall BattleServantData__RemoveClassBoardCommandSpellOnTransform(
        BattleServantData_o *this,
        BattleUserServantData_o *afterUserSvtData,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  void *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  const MethodInfo *v11; // x1
  int32_t npcSvtClassId; // w8
  int32_t classId; // w9
  struct ServantEntity_o *svtdata; // x9

  if ( (byte_49FEAF0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, afterUserSvtData);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    byte_49FEAF0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !afterUserSvtData )
    goto LABEL_17;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (void *)BattleUserServantData__getBattleSvtId(afterUserSvtData, 0LL);
  if ( !v10 )
    goto LABEL_17;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    v10,
                    (int32_t)Master_object,
                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  npcSvtClassId = afterUserSvtData->fields.npcSvtClassId;
  if ( !npcSvtClassId )
  {
    if ( !Master_object )
      goto LABEL_17;
    npcSvtClassId = *((_DWORD *)Master_object + 20);
  }
  classId = this->fields.npcSvtClassId;
  if ( !classId )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      goto LABEL_17;
    classId = svtdata->fields.classId;
  }
  if ( classId == npcSvtClassId )
    return;
  Master_object = BattleServantData__get_BuffData(this, v11);
  if ( !data || !Master_object )
LABEL_17:
    sub_1B64324(Master_object);
  BattleBuffData__RemoveClassBoardCommandSpellBuff(
    (BattleBuffData_o *)Master_object,
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_object__o *v17; // x21
  const MethodInfo *v18; // x4

  if ( (byte_49FEA58 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_BattleBuffData_BuffData____TypeInfo, fieldIndiv);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass434_0__RemoveNoTurnBuffWithUpdateView_g__RemoveBuff_0__, v7);
    sub_1B640C8(&BattleServantData___c__DisplayClass434_0_TypeInfo, v8);
    byte_49FEA58 = 1;
  }
  v9 = sub_1B64314(BattleServantData___c__DisplayClass434_0_TypeInfo, fieldIndiv, logic);
  BattleServantData___c__DisplayClass434_0___ctor((BattleServantData___c__DisplayClass434_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = logic;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)logic, v13, v14);
  v17 = (System_Func_object__o *)sub_1B64314(System_Func_BattleBuffData_BuffData____TypeInfo, v15, v16);
  System_Func_object____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_BattleServantData___c__DisplayClass434_0__RemoveNoTurnBuffWithUpdateView_g__RemoveBuff_0__,
    0LL);
  return BattleServantData__RemoveBuffsWithUpdateView(
           this,
           (System_Func_BattleBuffData_BuffData____o *)v17,
           fieldIndiv,
           *(BattleLogic_o **)(v9 + 24),
           v18);
}


void __fastcall BattleServantData__RemovePartAnimationSaveData(
        BattleServantData_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  bool IsNullOrEmpty; // w8
  ServantStatusBattleListViewItem_o *p_partAnimationSaveDict; // x0
  System_Collections_Generic_Dictionary_object__object__o *klass; // x0

  if ( (byte_49FEAF6 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____Remove__,
      key);
    byte_49FEAF6 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(key, 0LL);
  p_partAnimationSaveDict = (ServantStatusBattleListViewItem_o *)&this->fields.partAnimationSaveDict;
  if ( IsNullOrEmpty )
  {
    p_partAnimationSaveDict->klass = 0LL;
    sub_1B6406C(p_partAnimationSaveDict, 0, v5, v6);
  }
  else
  {
    klass = (System_Collections_Generic_Dictionary_object__object__o *)p_partAnimationSaveDict->klass;
    if ( klass )
      System_Collections_Generic_Dictionary_object__object___Remove(
        klass,
        (Il2CppObject *)key,
        (const MethodInfo_317A8F4 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____Remove__);
  }
}


void __fastcall BattleServantData__RemovePassiveBuffOnTransform(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  BattleData_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_object__o *v16; // x20

  if ( (byte_49FEAEF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleServantData__TypeInfo, data);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass758_0__RemovePassiveBuffOnTransform_b__0__, v5);
    sub_1B640C8(&BattleServantData___c__DisplayClass758_0_TypeInfo, v6);
    byte_49FEAEF = 1;
  }
  v7 = sub_1B64314(BattleServantData___c__DisplayClass758_0_TypeInfo, data, method);
  BattleServantData___c__DisplayClass758_0___ctor((BattleServantData___c__DisplayClass758_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10),
        *(_QWORD *)(v7 + 24) = data,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)data, v11, v12),
        v13 = *(BattleData_o **)(v7 + 24),
        v16 = (System_Action_object__o *)sub_1B64314(System_Action_BattleServantData__TypeInfo, v14, v15),
        System_Action_object____ctor(
          v16,
          (Il2CppObject *)v7,
          Method_BattleServantData___c__DisplayClass758_0__RemovePassiveBuffOnTransform_b__0__,
          0LL),
        !v13) )
  {
    sub_1B64324(v8);
  }
  BattleData__ExecFuncAllServant(v13, (System_Action_BattleServantData__o *)v16, 0LL);
}


void __fastcall BattleServantData__RemovePassiveSkill(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleServantData___c_c *v7; // x0
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *_9__757_0; // x20
  Il2CppObject *v10; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FEAEE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__, method);
    sub_1B640C8(&System_Predicate_BattleSkillInfoData__TypeInfo, v4);
    sub_1B640C8(&Method_BattleServantData___c__RemovePassiveSkill_b__757_0__, v5);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v6);
    byte_49FEAEE = 1;
  }
  v7 = BattleServantData___c_TypeInfo;
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v7 = BattleServantData___c_TypeInfo;
  }
  _9__757_0 = (System_Predicate_object__o *)v7->static_fields->__9__757_0;
  if ( !_9__757_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleServantData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__757_0 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleSkillInfoData__TypeInfo, method, v2);
    System_Predicate_object____ctor(_9__757_0, v10, Method_BattleServantData___c__RemovePassiveSkill_b__757_0__, 0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__757_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__757_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__757_0, (int32_t)_9__757_0, v12, v13);
  }
  if ( !skillInfoList )
    sub_1B64324(v7);
  System_Collections_Generic_List_object___RemoveAll(
    skillInfoList,
    (System_Predicate_T__o *)_9__757_0,
    (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
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
  BattleServantData___c__DisplayClass327_0_o *v14; // x23
  System_Collections_Generic_List_object__o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x22
  System_Func_object__bool__o *v19; // x24
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x22
  int32_t v22; // w24
  BattleSkillInfoData_o *SkillData; // x0
  int32_t skillInfoType; // w2
  int32_t v25; // w3
  BattleSkillInfoData_o *v26; // x23
  const MethodInfo *v27; // [xsp+0h] [xbp-50h]

  if ( (byte_49FEA33 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___, *(_QWORD *)&index);
    sub_1B640C8(&System_Func_BattleSkillInfoData__bool__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__, v11);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass327_0__ReplaceSelfSkillInfo_b__0__, v12);
    sub_1B640C8(&BattleServantData___c__DisplayClass327_0_TypeInfo, v13);
    byte_49FEA33 = 1;
  }
  v14 = (BattleServantData___c__DisplayClass327_0_o *)sub_1B64314(
                                                        BattleServantData___c__DisplayClass327_0_TypeInfo,
                                                        *(_QWORD *)&index,
                                                        *(_QWORD *)&skillId);
  BattleServantData___c__DisplayClass327_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_10;
  v14->fields.skillInfoType = 11;
  v14->fields.index = index;
  skillInfoList = this->fields.skillInfoList;
  v19 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleSkillInfoData__bool__TypeInfo, v16, v17);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v14,
    Method_BattleServantData___c__DisplayClass327_0__ReplaceSelfSkillInfo_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___);
  if ( !v20 )
    return;
  v21 = v20;
  v15 = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !v15 )
    goto LABEL_10;
  v22 = System_Collections_Generic_List_object___IndexOf(
          v15,
          v21,
          (const MethodInfo_34AE414 *)Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__);
  SkillData = BattleSkillInfoData__MakeSkillData(v14->fields.skillInfoType, 0LL);
  skillInfoType = v14->fields.skillInfoType;
  v25 = v14->fields.index;
  v26 = SkillData;
  BattleServantData__SetSkillInfo(this, SkillData, skillInfoType, v25, skillId, skillLv, -1LL, -1, v27);
  v15 = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !v15
    || (System_Collections_Generic_List_object___set_Item(
          v15,
          v22,
          (Il2CppObject *)v26,
          (const MethodInfo_34AD458 *)Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__),
        !v26) )
  {
LABEL_10:
    sub_1B64324(v15);
  }
  ((void (__fastcall *)(BattleSkillInfoData_o *, BattleServantData_o *, Il2CppMethodPointer))v26->klass->vtable._11_PreAddProcess.method)(
    v26,
    this,
    v26->klass->vtable._12_IsChangeable.methodPtr);
  v26->fields.sealedTurn = (int32_t)v21[3].klass;
  v26->fields.chargeTurn = (int32_t)v21[2].monitor;
}


void __fastcall BattleServantData__ResetAdjustment(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_49FEA15 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B640C8(
                                    &Method_System_Collections_Generic_List_BattleServantData_Adjustment__Clear__,
                                    method);
    byte_49FEA15 = 1;
  }
  adjustmentList = v2->fields.adjustmentList;
  if ( !adjustmentList )
    sub_1B64324(this);
  size = adjustmentList->fields._size;
  v5 = adjustmentList->fields._version + 1;
  adjustmentList->fields._size = 0;
  adjustmentList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)adjustmentList->fields._items, 0, size, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantData___c_c *v11; // x0
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Func_object__bool__o *_9__387_0; // x21
  Il2CppObject *v14; // x22
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  BattleSkillInfoData_o *v33; // x0
  const MethodInfo *v34; // x3
  BattleSkillInfoData_o *v35; // x21
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_49FEA4B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___, method);
    sub_1B640C8(&System_Func_BattleSkillInfoData__bool__TypeInfo, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&Method_BattleServantData___c__ResetServantSelfSkill_b__387_0__, v9);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v10);
    byte_49FEA4B = 1;
  }
  v11 = BattleServantData___c_TypeInfo;
  skillInfoList = this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v11 = BattleServantData___c_TypeInfo;
  }
  _9__387_0 = (System_Func_object__bool__o *)v11->static_fields->__9__387_0;
  if ( !_9__387_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleServantData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__387_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleSkillInfoData__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(
      _9__387_0,
      v14,
      Method_BattleServantData___c__ResetServantSelfSkill_b__387_0__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__387_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__387_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__387_0, (int32_t)_9__387_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__387_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  if ( !v18 )
    sub_1B64324(0LL);
  klass = v18->klass;
  v20 = v18;
  v21 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BB60A8(v18, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v20,
          *(_QWORD *)(p_method + 8));
  if ( !v24 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_21;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_21:
      v28 = sub_1BB60A8(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_28;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_28:
      v32 = sub_1BB60A8(v24, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v33 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    v35 = v33;
    if ( !v33 )
      sub_1B64324(0LL);
    v33->fields.sealedTurn = 0;
    if ( !BattleServantData__ChangeSkillRemainingTurn(this, v33, v33, v34) )
      v35->fields.chargeTurn = 0;
  }
  v36 = *(_QWORD *)v24;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_37;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_37:
    v39 = sub_1BB60A8(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v24, *(_QWORD *)(v39 + 8));
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
  const MethodInfo *v13; // x3
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
  BattleServantData__SubValueToResultHp(this, damage, minHp, v13);
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) > 0 )
    return;
  SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupBase_o *)this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
  if ( !SnapShotDamagedOnLogicDead_k__BackingField )
LABEL_7:
    sub_1B64324(SnapShotDamagedOnLogicDead_k__BackingField);
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
  System_Collections_Generic_Dictionary_object__object__o *v22; // x21
  const MethodInfo *v23; // x1
  Il2CppObject *v24; // x0
  __int64 v25; // x22
  __int64 v26; // x23
  System_Int32_c *v27; // x0
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Collections_Generic_Dictionary_string__object__array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  System_String_o *v37; // x20
  int32_t Int; // w0
  int v39; // w8
  Il2CppObject *v40; // x0
  int64_t UserSvtId; // [xsp+8h] [xbp-58h] BYREF
  int32_t v42; // [xsp+18h] [xbp-48h] BYREF
  int32_t SelectedNobleGroupSeqId; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_49FEAE8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__Add__, data);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&long_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_23610/*"svtId"*/, v11);
    sub_1B640C8(&StringLiteral_24354/*"userSvtId"*/, v12);
    sub_1B640C8(&StringLiteral_23007/*"seqId"*/, v13);
    byte_49FEAE8 = 1;
  }
  SelectedNobleGroupSeqId = 0;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)BattleServantData__GetSelectedNobleSeqId(
                                                                                                 this,
                                                                                                 (const MethodInfo *)data);
  if ( !data )
    goto LABEL_27;
  v15 = (int)SelectedNobleSeqId;
  playerServantNoblePhantasmUsageData = data->fields.playerServantNoblePhantasmUsageData;
  v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v18;
  *(_QWORD *)&v44.fields.fakeValue = v17;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                                                 v44,
                                                                                                 0LL);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_27;
  PlayerServantNoblePhantasmUsageData__AddNoblePhantasmUsage(
    playerServantNoblePhantasmUsageData,
    (int32_t)SelectedNobleSeqId,
    v15,
    this->fields.followerType,
    this->fields.isEnemy,
    0LL);
  ++this->fields.playedNPCount;
  if ( !BattleServantData__CheckFirstNpPlay(this, data, v19) )
    return;
  v22 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     v20,
                                                                     v21);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v22,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  LODWORD(UserSvtId) = v15;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)j_il2cpp_value_box_0(
                                                                                                 int_TypeInfo,
                                                                                                 &UserSvtId);
  if ( !v22 )
    goto LABEL_27;
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_23007/*"seqId"*/,
    (Il2CppObject *)SelectedNobleSeqId,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( this->fields.isEnemy || this->fields.followerType )
  {
    UserSvtId = 0LL;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId);
    System_Collections_Generic_Dictionary_object__object___Add(
      v22,
      (Il2CppObject *)StringLiteral_24354/*"userSvtId"*/,
      v24,
      (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v26 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v25 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v45.fields.currentCryptoKey = v26;
    *(_QWORD *)&v45.fields.fakeValue = v25;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v45, 0LL);
    v27 = int_TypeInfo;
  }
  else
  {
    UserSvtId = BattleServantData__getUserSvtId(this, v23);
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId);
    System_Collections_Generic_Dictionary_object__object___Add(
      v22,
      (Il2CppObject *)StringLiteral_24354/*"userSvtId"*/,
      v40,
      (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v27 = int_TypeInfo;
    v42 = 0;
  }
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(v27, &v42);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_23610/*"svtId"*/,
    v28,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  SelectedNobleSeqId = data->fields.firstNpPlayList;
  if ( !SelectedNobleSeqId
    || (items = SelectedNobleSeqId->fields._items,
        v32 = Method_System_Collections_Generic_List_Dictionary_string__object___Add__,
        ++SelectedNobleSeqId->fields._version,
        !items) )
  {
LABEL_27:
    sub_1B64324(SelectedNobleSeqId);
  }
  size = SelectedNobleSeqId->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)SelectedNobleSeqId,
      (Il2CppObject *)v22,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    SelectedNobleSeqId->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v22;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v22, v29, v30);
  }
  if ( BattleServantData__CheckSelectedNobleSeqIsGroup(this, v35) )
  {
    SelectedNobleGroupSeqId = BattleServantData__GetSelectedNobleGroupSeqId(this, v36);
    v37 = System_Int32__ToString((int32_t)&SelectedNobleGroupSeqId, 0LL);
    Int = UnityEngine_PlayerPrefs__GetInt(v37, 0, 0LL);
    if ( this->fields.isEnemy || this->fields.followerType )
      v39 = 2;
    else
      v39 = 1;
    UnityEngine_PlayerPrefs__SetInt(v37, v39 | Int, 0LL);
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
  if ( (byte_49FEA12 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData_Adjustment_TypeInfo, isCritical);
    byte_49FEA12 = 1;
  }
  v15 = sub_1B64314(BattleServantData_Adjustment_TypeInfo, isCritical, isWeak);
  BattleServantData_Adjustment___ctor((BattleServantData_Adjustment_o *)v15, 0LL);
  if ( !v15 )
    sub_1B64324(v16);
  *(float *)(v15 + 20) = x;
  *(float *)(v15 + 24) = y;
  *(_BYTE *)(v15 + 16) = isCritical;
  *(_BYTE *)(v15 + 17) = isWeak;
  *(_BYTE *)(v15 + 18) = isRegist;
  *(_BYTE *)(v15 + 19) = isNoDamage;
  *(float *)(v15 + 28) = z;
  BattleServantData__SetAdjustment_42460228(this, (BattleServantData_Adjustment_o *)v15, v17);
}


void __fastcall BattleServantData__SetAdjustment_42460228(
        BattleServantData_o *this,
        BattleServantData_Adjustment_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *adjustmentList; // x0
  ServantStatusBattleListViewItem_o *p_adjustmentList; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_49FEA13 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__, data);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo, v7);
    byte_49FEA13 = 1;
  }
  adjustmentList = (System_Collections_Generic_List_object__o *)this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (ServantStatusBattleListViewItem_o *)&this->fields.adjustmentList;
    v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo,
                                                         data,
                                                         method);
    System_Collections_Generic_List_object____ctor(
      v10,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B6406C(p_adjustmentList, (int32_t)v10, v11, v12);
    adjustmentList = (System_Collections_Generic_List_object__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      goto LABEL_9;
  }
  items = adjustmentList->fields._items;
  v14 = Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__;
  ++adjustmentList->fields._version;
  if ( !items )
LABEL_9:
    sub_1B64324(adjustmentList);
  size = adjustmentList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adjustmentList,
      (Il2CppObject *)data,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    adjustmentList->fields._size = size + 1;
    v16[4] = (Il2CppClass *)data;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__SetCommandAssistSkill(
        BattleServantData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t *Master_object; // x0
  __int64 v7; // x1
  struct System_Int32_array *commandAssistIds; // x8
  EventCommandAssistMaster_o *v9; // x21
  unsigned __int64 v10; // x22
  unsigned __int64 max_length; // x9
  const MethodInfo *v12; // [xsp+0h] [xbp-40h]

  if ( (byte_49FEA26 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventCommandAssistMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    byte_49FEA26 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int32_t *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  commandAssistIds = this->fields.commandAssistIds;
  if ( !commandAssistIds )
LABEL_13:
    sub_1B64324(Master_object);
  v9 = (EventCommandAssistMaster_o *)Master_object;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = commandAssistIds->max_length;
    if ( (__int64)v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      sub_1B6432C(Master_object, v7);
    if ( v9 )
    {
      Master_object = (int32_t *)EventCommandAssistMaster__GetCurrentEntity(
                                   v9,
                                   eventId,
                                   commandAssistIds->m_Items[v10 + 1],
                                   -1,
                                   0,
                                   0LL);
      if ( Master_object )
        Master_object = (int32_t *)BattleServantData__addSkillInfo(
                                     this,
                                     23,
                                     v10,
                                     Master_object[13],
                                     Master_object[14],
                                     -1LL,
                                     Master_object[4],
                                     0LL,
                                     v12);
      commandAssistIds = this->fields.commandAssistIds;
      ++v10;
      if ( commandAssistIds )
        continue;
    }
    goto LABEL_13;
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
  __int128 v18; // q0
  int32_t v19; // w21
  int32_t v20; // w0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v22; // x21
  int32_t v23; // w22
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t battleCharaLimitCount; // w2
  int32_t svtId; // w1
  __int64 v32; // x21
  __int64 v33; // x22
  Il2CppObject *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtdata; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x8
  BattleServantData_o *v39; // x20
  int32_t v40; // w21
  ServantLimitEntity_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44[2]; // [xsp+0h] [xbp-90h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v4 = this;
  if ( (byte_49FEA37 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, fakeInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_21020/*"limitCount"*/, v12);
    sub_1B640C8(&StringLiteral_23610/*"svtId"*/, v13);
    sub_1B640C8(&StringLiteral_20538/*"index"*/, v14);
    sub_1B640C8(&StringLiteral_24354/*"userSvtId"*/, v15);
    this = (BattleServantData_o *)sub_1B640C8(&StringLiteral_24081/*"uniqueId"*/, v16);
    byte_49FEA37 = 1;
  }
  entity = 0LL;
  if ( !fakeInfo )
    goto LABEL_26;
  v4->fields.index = System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)fakeInfo,
                       (Il2CppObject *)StringLiteral_20538/*"index"*/,
                       (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v4->fields.uniqueId = System_Collections_Generic_Dictionary_object__int___get_Item(
                          (System_Collections_Generic_Dictionary_object__int__o *)fakeInfo,
                          (Il2CppObject *)StringLiteral_24081/*"uniqueId"*/,
                          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)fakeInfo,
           (Il2CppObject *)StringLiteral_24354/*"userSvtId"*/,
           (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v44, Item, 0LL);
  v18 = *(_OWORD *)&v44[0].fields.fakeValue;
  v44[1] = v44[0];
  *(_OWORD *)&v4->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)&v44[0].fields.currentCryptoKey;
  *(_OWORD *)&v4->fields.userSvtId.fields.fakeValue = v18;
  v19 = System_Collections_Generic_Dictionary_object__int___get_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)fakeInfo,
          (Il2CppObject *)StringLiteral_23610/*"svtId"*/,
          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v4->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v19, 0LL);
  v20 = System_Collections_Generic_Dictionary_object__int___get_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)fakeInfo,
          (Il2CppObject *)StringLiteral_21020/*"limitCount"*/,
          (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v4->fields.limitcount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v20, 0LL);
  this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  v22 = DataManager__GetMasterData_object_(
          (DataManager_o *)this,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v4->fields.svtId, 0LL);
  this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                  v4->fields.limitcount,
                                  0LL);
  if ( !v22 )
    goto LABEL_26;
  this = (BattleServantData_o *)ServantLimitAddMaster__TryGetEntity(
                                  (ServantLimitAddMaster_o *)v22,
                                  &entity,
                                  v23,
                                  (int32_t)this,
                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v33 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
    v32 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v46.fields.currentCryptoKey = v33;
    *(_QWORD *)&v46.fields.fakeValue = v32;
    this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v46, 0LL);
    if ( MasterData_object )
    {
      v34 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              (int32_t)this,
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      p_svtdata = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v4->fields.svtdata;
      v4->fields.svtdata = (struct ServantEntity_o *)v34;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.svtdata, (int32_t)v34, v36, v37);
      this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        v38 = *p_svtdata;
        if ( *p_svtdata )
        {
          v39 = this;
          v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v38[1], 0LL);
          this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                          v4->fields.limitcount,
                                          0LL);
          if ( v39 )
          {
            battleCharaLimitCount = (int)this;
            this = v39;
            svtId = v40;
            goto LABEL_25;
          }
        }
      }
    }
LABEL_26:
    sub_1B64324(this);
  }
  if ( !entity )
    goto LABEL_26;
  if ( !MasterData_object )
    goto LABEL_26;
  v24 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          entity->fields.svtId,
          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v4->fields.svtdata = (struct ServantEntity_o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.svtdata, (int32_t)v24, v25, v26);
  v27 = (int)entity;
  v4->fields.svtlimitaddent = entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.svtlimitaddent, v27, v28, v29);
  this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !entity || !this )
    goto LABEL_26;
  battleCharaLimitCount = entity->fields.battleCharaLimitCount;
  svtId = entity->fields.svtId;
LABEL_25:
  v41 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, svtId, battleCharaLimitCount, 0LL);
  v4->fields.svtlimitDispent = v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.svtlimitDispent, (int32_t)v41, v42, v43);
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
  ServantStatusBattleListViewItem_o *p_partAnimationSaveDict; // x21
  System_Collections_Generic_Dictionary_object__object__o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FEAF4 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData_____ctor__,
      key);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____set_Item__,
      v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TypeInfo, v8);
    byte_49FEAF4 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)saveDataArray, 0LL) )
  {
    partAnimationSaveDict = this->fields.partAnimationSaveDict;
    if ( !partAnimationSaveDict )
    {
      p_partAnimationSaveDict = (ServantStatusBattleListViewItem_o *)&this->fields.partAnimationSaveDict;
      v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                         System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TypeInfo,
                                                                         v9,
                                                                         v10);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v13,
        (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData_____ctor__);
      p_partAnimationSaveDict->klass = (ServantStatusBattleListViewItem_c *)v13;
      sub_1B6406C(p_partAnimationSaveDict, (int32_t)v13, v14, v15);
      partAnimationSaveDict = (struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *)p_partAnimationSaveDict->klass;
      if ( !p_partAnimationSaveDict->klass )
        sub_1B64324(0LL);
    }
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)partAnimationSaveDict,
      (Il2CppObject *)key,
      &saveDataArray->obj,
      (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____set_Item__);
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
    sub_1B64324(0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  System_Array_o *v15; // x0
  System_Array_o *v16; // x22
  unsigned __int64 v17; // x27
  __int64 v18; // x23
  __int64 v19; // x24
  __int64 v20; // x1
  struct System_Collections_Hashtable_o *commandtable; // x23
  __int64 v22; // x0
  __int64 v23; // x25
  __int64 v24; // x26
  __int64 v25; // x24
  int32_t cardId; // [xsp+4h] [xbp-6Ch] BYREF
  ServantCardEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v28; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_49FEA72 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCardMaster___, method);
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, v4);
    sub_1B640C8(&int___TypeInfo, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A,
      v9);
    byte_49FEA72 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, method, v2);
  System_Collections_Hashtable___ctor_61954820(v10, 0LL);
  this->fields.commandtable = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandtable, (int32_t)v10, v11, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v15 = (System_Array_o *)sub_1B64170(int___TypeInfo, 6LL);
  v28.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  v16 = v15;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v15, v28, 0LL);
  if ( !v16 )
    goto LABEL_20;
  if ( SLODWORD(v16[1].monitor) >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      v19 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v29.fields.currentCryptoKey = v19;
      *(_QWORD *)&v29.fields.fakeValue = v18;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v29, 0LL);
      if ( v17 >= LODWORD(v16[1].monitor) )
        sub_1B6432C(Instance, v20);
      if ( !MasterData_object )
        break;
      Instance = (DataManager_o *)ServantCardMaster__TryGetEntity(
                                    (ServantCardMaster_o *)MasterData_object,
                                    &entity,
                                    (int32_t)Instance,
                                    *((_DWORD *)&v16[2].klass + v17),
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        commandtable = this->fields.commandtable;
        cardId = entity->fields.cardId;
        v22 = j_il2cpp_value_box_0(int_TypeInfo, &cardId);
        v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v25 = v22;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v30.fields.currentCryptoKey = v24;
        *(_QWORD *)&v30.fields.fakeValue = v23;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v30, 0LL);
        if ( !entity )
          break;
        Instance = (DataManager_o *)ServantCardMaster__GetEntity(
                                      (ServantCardMaster_o *)MasterData_object,
                                      (int32_t)Instance,
                                      entity->fields.cardId,
                                      0LL);
        if ( !commandtable )
          break;
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, DataManager_o *, Il2CppMethodPointer))commandtable->klass->vtable._30_set_Item.method)(
          commandtable,
          v25,
          Instance,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
      if ( (__int64)++v17 >= SLODWORD(v16[1].monitor) )
        return;
    }
LABEL_20:
    sub_1B64324(Instance);
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
      sub_1B64324(0LL);
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

  if ( (byte_49FEADE & 1) == 0 )
  {
    sub_1B640C8(&System_Math_TypeInfo, data);
    byte_49FEADE = 1;
  }
  BattleServantData__setShiftServant(this, data, shiftValue, *(const MethodInfo **)&shiftValue);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  if ( !defHp )
    sub_1B64324(v9);
  v10 = v9;
  TotalDamage = SimpleHpData__get_TotalDamage((SimpleHpData_o *)defHp, 0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = System_Math__Max_62194036(1, v10 - TotalDamage, 0LL);
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
  __int64 v24; // x0
  __int64 v25; // x0
  Il2CppObject *v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  int32_t v29; // w8
  __int64 v30; // x0
  __int64 v31; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v33; // x22
  __int64 v34; // x23
  ServantSkillMaster_o *v35; // x21
  int32_t v36; // w22
  ServantSkillEntity_o *EntityFromSkillId; // x0
  ServantSkillEntity_o *v38; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v16 = this;
  if ( (byte_49FEA34 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, skillInfo);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v18);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v19);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    this = (BattleServantData_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v21);
    byte_49FEA34 = 1;
  }
  entity = 0LL;
  if ( !skillInfo )
    goto LABEL_32;
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
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1BB5FA4(v24);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BB5FA4(v25);
  this = **(BattleServantData_o ***)(v25 + 184);
  if ( !this )
    goto LABEL_32;
  this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  entity = 0LL;
  if ( !this )
    goto LABEL_32;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    skillId,
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  v26 = entity;
  if ( entity )
  {
    skillInfo->fields.isUseSkill = 1;
    skillInfo->fields.isPassive = SkillEntity__isPassive((SkillEntity_o *)v26, 0LL);
    v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
      v27 = sub_1BB5FA4(v27);
    v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1BB5FA4(v28);
    this = **(BattleServantData_o ***)(v28 + 184);
    if ( !this )
      goto LABEL_32;
    this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !this )
      goto LABEL_32;
    this = (BattleServantData_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, skillId, skillLv, 0LL);
    if ( !this )
      goto LABEL_32;
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
  v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
    v30 = sub_1BB5FA4(v30);
  v31 = *(_QWORD *)(*(_QWORD *)(v30 + 192) + 16LL);
  if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
    v31 = sub_1BB5FA4(v31);
  this = **(BattleServantData_o ***)(v31 + 184);
  if ( !this )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v34 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  v35 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v34;
  *(_QWORD *)&v41.fields.fakeValue = v33;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v35 )
LABEL_32:
    sub_1B64324(this);
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
    sub_1B64324(this);
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

  if ( (byte_49FEA20 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, takeoverData);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__4E81D9BE7E36896BB3900CE16AFF3BCF5CD86C2A70B54B90EFF875B6FABD3457,
      v5);
    byte_49FEA20 = 1;
  }
  if ( takeoverData )
  {
    *(_QWORD *)&this->fields.maxDefeatPoint = *(_QWORD *)&takeoverData->fields.maxDefeatPoint;
    if ( takeoverData->fields.buffDataSave )
    {
      v6 = (System_Array_o *)sub_1B64170(int___TypeInfo, 6LL);
      v10.fields.value = Field__PrivateImplementationDetails__4E81D9BE7E36896BB3900CE16AFF3BCF5CD86C2A70B54B90EFF875B6FABD3457;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v6, v10, 0LL);
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
        sub_1B64324(buffData);
      }
      BattleBuffData__UpdateBaseAddOrder(buffData, 0LL);
    }
    this->fields.isSleepWaitMode = takeoverData->fields.isSleepWaitMode;
    *(_QWORD *)&this->fields.aftSquareIndex = *(_QWORD *)&takeoverData->fields.aftSquareIndex;
    *(_QWORD *)&this->fields.squareEffectSkillId = *(_QWORD *)&takeoverData->fields.squareEffectSkillId;
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
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v20; // x21
  int32_t v21; // w22
  BattleSkillInfoData_o *SelfSkillInfo; // x0
  __int64 currentHp; // x1
  int32_t *p_currentNp; // x8
  int32_t *p_nextNpTurn; // x19
  int32_t nextNpTurn; // t1
  int32_t *p_nexttpturn; // x8

  if ( (byte_49FEA21 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, takeoverData);
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, v7);
    sub_1B640C8(&BattleBuffData_TypeInfo, v8);
    sub_1B640C8(&int___TypeInfo, v9);
    byte_49FEA21 = 1;
  }
  if ( takeoverData )
  {
    *(_QWORD *)&this->fields.transformIndex = *(_QWORD *)&takeoverData->fields.transformIndex;
    BattleServantData__loadTransformServant(this, data, (const MethodInfo *)data);
    if ( takeoverData->fields.buffDataSave )
    {
      v12 = (BattleBuffData_o *)sub_1B64314(BattleBuffData_TypeInfo, v10, v11);
      BattleBuffData___ctor(v12, 0LL);
      if ( !v12 )
        goto LABEL_21;
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
    v13 = (BalanceConfig_c *)sub_1B64170(int___TypeInfo, 3LL);
    if ( !v13 )
LABEL_21:
      sub_1B64324(v13);
    namespaze = (unsigned int)v13->_1.namespaze;
    v20 = (System_Int32_array *)v13;
    if ( !namespaze
      || (LODWORD(v13->_1.byval_arg.data) = takeoverData->fields.skill1Ct, namespaze == 1)
      || (HIDWORD(v13->_1.byval_arg.data) = takeoverData->fields.skill2Ct, namespaze <= 2) )
    {
      sub_1B6432C(v13, v17);
    }
    v21 = 0;
    v13->_1.byval_arg.bits = takeoverData->fields.skill3Ct;
    while ( 1 )
    {
      v13 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v13 = BalanceConfig_TypeInfo;
      }
      if ( v21 >= v13->static_fields->SvtSkillListMax )
        break;
      SelfSkillInfo = BattleServantData__getSelfSkillInfo(this, v21, v18);
      if ( SelfSkillInfo )
        SelfSkillInfo->fields.chargeTurn = BasicHelper__IndexValue_int_(
                                             v20,
                                             v21,
                                             0,
                                             (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232);
      ++v21;
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
      goto LABEL_21;
    }
    ((void (__fastcall *)(BattleServantData_o *, __int64, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
      this,
      currentHp,
      this->klass->vtable._11_get_reducedhp.methodPtr);
    p_currentNp = &takeoverData->fields.currentNp;
    if ( takeoverData->fields.currentNp == -1 )
      p_currentNp = &this->fields.np;
    this->fields.np = *p_currentNp;
    nextNpTurn = takeoverData->fields.nextNpTurn;
    p_nextNpTurn = &takeoverData->fields.nextNpTurn;
    if ( nextNpTurn == -1 )
      p_nexttpturn = &this->fields.nexttpturn;
    else
      p_nexttpturn = p_nextNpTurn;
    this->fields.nexttpturn = *p_nexttpturn;
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
  BattleBuffData_o *BuffData; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  __int64 v9; // x0
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FEA3E & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buff);
    byte_49FEA3E = 1;
  }
  BuffData = BattleServantData__get_BuffData(this, (const MethodInfo *)buff);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      v6,
                                                      v7);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !BuffData )
    sub_1B64324(v9);
  FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(BuffData, 128, v8, 0, 0LL);
  *buff = FirstMatchCondBuff;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)buff, (int32_t)FirstMatchCondBuff, v11, v12);
  return *buff != 0LL;
}


bool __fastcall BattleServantData__TryGetPartAnimationSaveData(
        BattleServantData_o *this,
        System_String_o *key,
        BattlePlayAnimationComponent_SaveData_array **saveDataArray,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x0

  if ( (byte_49FEAF5 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TryGetValue__,
      key);
    byte_49FEAF5 = 1;
  }
  *saveDataArray = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)saveDataArray, 0, (int32_t)saveDataArray, (int32_t)method);
  partAnimationSaveDict = this->fields.partAnimationSaveDict;
  if ( partAnimationSaveDict )
    LOBYTE(partAnimationSaveDict) = System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                      (System_Collections_Generic_Dictionary_object__object__o *)partAnimationSaveDict,
                                      (Il2CppObject *)key,
                                      (Il2CppObject **)saveDataArray,
                                      (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TryGetValue__);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *Master_object; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_T__o *v23; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  __int64 v28; // x8
  unsigned __int64 v29; // x28
  int32_t v30; // w24
  const MethodInfo *v31; // x4
  Il2CppObject *FileName; // x25
  Il2CppObject *v33; // x26
  const MethodInfo *v34; // x1
  int32_t SvtId; // w27
  const MethodInfo *v36; // x2
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  int32_t v39; // w26
  System_String_o *v40; // x25
  const MethodInfo *v41; // x1
  int32_t v42; // w27
  const MethodInfo *v43; // x2
  int32_t v44; // w3
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v48; // x8
  int32_t VoicePrefix; // [xsp+4h] [xbp-7Ch] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o pairVoiceIdWeight; // [xsp+8h] [xbp-78h] BYREF
  int32_t voicePatternId; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v53; // 0:x1.16

  if ( (byte_49FEAF7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoicePatternMaster___, voiceInfoList);
    sub_1B640C8(&Method_DataManager_GetMaster_VoicePlayCondMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_KeyValuePair_string__int___Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_KeyValuePair_string__int____ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_KeyValuePair_string__int___TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v15);
    sub_1B640C8(&Voice_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_24843/*"{0:D0}_{1}"*/, v17);
    byte_49FEAF7 = 1;
  }
  voicePatternId = 0;
  pairVoiceIdWeight.fields.key = 0LL;
  *(_QWORD *)&pairVoiceIdWeight.fields.value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoicePatternMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v23 = (System_Collections_Generic_List_T__o *)sub_1B64314(
                                                  System_Collections_Generic_List_KeyValuePair_string__int___TypeInfo,
                                                  v21,
                                                  v22);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v23,
    (const MethodInfo_340293C *)Method_System_Collections_Generic_List_KeyValuePair_string__int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_string__int___o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)voiceInfoList, (int32_t)v23, v24, v25);
  if ( !types )
    goto LABEL_25;
  v28 = *(_QWORD *)&types->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0LL;
    do
    {
      if ( v29 >= (unsigned int)v28 )
        sub_1B6432C(Instance, v26);
      v30 = types->m_Items[v29 + 1];
      if ( !BattleServantData__TryCheckVoicePatternId(this, &voicePatternId, v27) )
        goto LABEL_16;
      if ( !Voice_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
      FileName = (Il2CppObject *)Voice__getFileName(v30, 0LL);
      v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      SvtId = BattleServantData__getSvtId(this, v34);
      Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v36);
      if ( !v33 )
        goto LABEL_25;
      VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                      (ServantAssetLoadManager_o *)v33,
                      SvtId,
                      (int32_t)Instance,
                      0LL);
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix);
      v38 = System_String__Format_61389768((System_String_o *)StringLiteral_24843/*"{0:D0}_{1}"*/, v37, FileName, 0LL);
      v39 = voicePatternId;
      v40 = v38;
      v42 = BattleServantData__getSvtId(this, v41);
      Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v43);
      if ( !MasterData_object )
        goto LABEL_25;
      Instance = (DataManager_o *)ServantVoicePatternMaster__IsSatisfyPlayCondition(
                                    (ServantVoicePatternMaster_o *)MasterData_object,
                                    v39,
                                    v42,
                                    v40,
                                    (int32_t)Instance,
                                    -1,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_16:
        Instance = (DataManager_o *)BattleServantData__IsPlayableVoice(
                                      this,
                                      (VoicePlayCondMaster_o *)Master_object,
                                      v30,
                                      &pairVoiceIdWeight,
                                      v31);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)*voiceInfoList;
          if ( !*voiceInfoList )
            goto LABEL_25;
          v53 = (System_Collections_Generic_KeyValuePair_object__int__o)pairVoiceIdWeight;
          v45 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v46 = Method_System_Collections_Generic_List_KeyValuePair_string__int___Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !v45 )
            goto LABEL_25;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v45 + 24) )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              (System_Collections_Generic_List_T__o *)Instance,
              v53,
              *(const MethodInfo_34031BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = v45 + 16 * m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(System_Collections_Generic_KeyValuePair_object__int__o *)(v48 + 32) = v53;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 32), 0, v53.fields.value, v44);
          }
        }
      }
      LODWORD(v28) = types->max_length;
    }
    while ( (__int64)++v29 < (int)v28 );
  }
  if ( !*voiceInfoList )
LABEL_25:
    sub_1B64324(Instance);
  return (*voiceInfoList)->fields._size > 0;
}


bool __fastcall BattleServantData__TryGetTdIdChangeByBattlePoint(
        BattleServantData_o *this,
        TreasureDvcEntity_o *tdEnt,
        int32_t *tdIdChangeByBattlePoint,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *BattlePointList; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  BattlePointData_o *v20; // x0
  int32_t id; // w22
  int32_t Phase; // w2
  bool v23; // w22
  int v24; // w23
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  int32_t tdIdChangeByBattlePointa; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FEA1B & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, tdEnt);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__GetEnumerator__, v9);
    byte_49FEA1B = 1;
  }
  tdIdChangeByBattlePointa = 0;
  if ( !tdEnt )
    goto LABEL_30;
  BattlePointList = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)BattleServantData__get_BattlePointList(
                                                                                this,
                                                                                (const MethodInfo *)tdEnt);
  if ( !BattlePointList )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_ReadOnlyCollection_object___GetEnumerator(
                 BattlePointList,
                 (const MethodInfo_366EE9C *)Method_System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattlePointData__c **)v18 - 1) != System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_17:
      v19 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo, 0LL);
    }
    v20 = (BattlePointData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                 Enumerator,
                                 *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1B64324(0LL);
    id = v20->fields.id;
    Phase = BattlePointData__get_Phase(v20, 0LL);
    if ( TreasureDvcEntity__TryGetTdIdChangeByBattlePoint(tdEnt, id, Phase, &tdIdChangeByBattlePointa, 0LL) )
    {
      v23 = 1;
      v24 = 5;
      *tdIdChangeByBattlePoint = tdIdChangeByBattlePointa;
      goto LABEL_23;
    }
  }
  v23 = 0;
  v24 = 6;
LABEL_23:
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_27;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_27:
    v28 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( v24 == 6 )
  {
LABEL_30:
    v23 = 0;
    *tdIdChangeByBattlePoint = 0;
  }
  return v23;
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
    sub_1B64324(this);
  }
}


void __fastcall BattleServantData__UpdateBattlePointSetting(
        BattleServantData_o *this,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *battlePointList; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_object__o *v17; // x20

  if ( (byte_49FEA25 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattlePointData__TypeInfo, battleEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePointData__ForEach__, v5);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass307_0__UpdateBattlePointSetting_b__0__, v6);
    sub_1B640C8(&BattleServantData___c__DisplayClass307_0_TypeInfo, v7);
    byte_49FEA25 = 1;
  }
  v8 = sub_1B64314(BattleServantData___c__DisplayClass307_0_TypeInfo, battleEntity, method);
  BattleServantData___c__DisplayClass307_0___ctor((BattleServantData___c__DisplayClass307_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11),
        *(_QWORD *)(v8 + 24) = battleEntity,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)battleEntity, v12, v13),
        battlePointList = (System_Collections_Generic_List_object__o *)this->fields.battlePointList,
        v17 = (System_Action_object__o *)sub_1B64314(System_Action_BattlePointData__TypeInfo, v15, v16),
        System_Action_object____ctor(
          v17,
          (Il2CppObject *)v8,
          Method_BattleServantData___c__DisplayClass307_0__UpdateBattlePointSetting_b__0__,
          0LL),
        !battlePointList) )
  {
    sub_1B64324(v9);
  }
  System_Collections_Generic_List_object___ForEach(
    battlePointList,
    (System_Action_T__o *)v17,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BattlePointData__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__UpdateBattlePointUserInterface(
        BattleServantData_o *this,
        int32_t uiUpdateType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  System_String_o *v13; // x20
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA19 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&uiUpdateType);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_15108/*"UpdateBattlePoint"*/, v9);
    sub_1B640C8(&StringLiteral_15109/*"UpdateBattlePointImmediately"*/, v10);
    byte_49FEA19 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( uiUpdateType != 2 )
  {
    if ( uiUpdateType == 1 )
      v11 = &StringLiteral_15109/*"UpdateBattlePointImmediately"*/;
    else
      v11 = &StringLiteral_15108/*"UpdateBattlePoint"*/;
    paramobjelist = this->fields.paramobjelist;
    if ( !paramobjelist )
      sub_1B64324(0LL);
    v13 = (System_String_o *)*v11;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)paramobjelist,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v16.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v15 )
      {
        if ( !current )
          sub_1B64324(v15);
        UnityEngine_GameObject__SendMessage_69108052(
          (UnityEngine_GameObject_o *)current,
          v13,
          (Il2CppObject *)this,
          1,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall BattleServantData__UpdateClassBoardSkillBuff(
        BattleServantData_o *this,
        BattleUserServantData_o *afterUserSvtData,
        BattleData_o *data,
        bool fromLoad,
        const MethodInfo *method)
{
  BattleServantData_o *v8; // x20
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
  struct System_Int32_array *classBoardSquareIds; // x1
  int32_t v20; // w2
  char v21; // w3
  struct AddSkillData_array *v22; // x1
  int32_t v23; // w2
  char v24; // w3
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  ServantStatusBattleListViewItem_o *p_classBoardAddCommandSpells; // x0
  Il2CppObject *Master_object; // x22
  const MethodInfo *v28; // x1
  int32_t npcSvtClassId; // w19
  int32_t classId; // w21
  struct ServantEntity_o *svtdata; // x8
  int klass_high; // w26
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  const MethodInfo *v36; // x3
  ServantStatusBattleListViewItem_c *klass; // x29
  unsigned __int64 v38; // x28
  __int64 v39; // x24
  __int64 v40; // x1
  int32_t v41; // w2
  char v42; // w3
  __int64 v43; // x1
  System_Collections_Generic_List_object__o *skillInfoList; // x25
  __int64 v45; // x1
  __int64 v46; // x2
  System_Predicate_object__o *v47; // x26
  System_Collections_ICollection_o *v48; // x24
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x3
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  int32_t v52; // w2
  char v53; // w3
  BattleData_o *v54; // [xsp+8h] [xbp-B8h]
  ServantStatusBattleListViewItem_o *p_classBoardAddPassiveSkills; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+40h] [xbp-80h] BYREF
  int32_t skillIndex; // [xsp+5Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_49FEAF2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, afterUserSvtData);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__, v15);
    sub_1B640C8(&System_Predicate_BattleSkillInfoData__TypeInfo, v16);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass761_0__UpdateClassBoardSkillBuff_b__0__, v17);
    this = (BattleServantData_o *)sub_1B640C8(&BattleServantData___c__DisplayClass761_0_TypeInfo, v18);
    byte_49FEAF2 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  if ( !afterUserSvtData )
    goto LABEL_44;
  classBoardSquareIds = afterUserSvtData->fields.classBoardSquareIds;
  v8->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v8->fields._classBoardSquareIds_k__BackingField,
    (int32_t)classBoardSquareIds,
    (int32_t)data,
    fromLoad);
  if ( !fromLoad )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
    this = (BattleServantData_o *)BattleUserServantData__getBattleSvtId(afterUserSvtData, 0LL);
    if ( Master_object )
    {
      this = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      (int32_t)this,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      npcSvtClassId = afterUserSvtData->fields.npcSvtClassId;
      if ( !npcSvtClassId )
      {
        if ( !this )
          goto LABEL_44;
        npcSvtClassId = this->fields.exceedCount.fields.currentCryptoKey;
      }
      classId = v8->fields.npcSvtClassId;
      if ( !classId )
      {
        svtdata = v8->fields.svtdata;
        if ( !svtdata )
          goto LABEL_44;
        classId = svtdata->fields.classId;
      }
      this = (BattleServantData_o *)BattleServantData__get_BuffData(v8, v28);
      if ( data )
      {
        if ( this )
        {
          BattleBuffData__RemoveClassBoardSkillBuff(
            (BattleBuffData_o *)this,
            v8->fields.classBoardAddPassiveSkills,
            v8->fields.classBoardAddCommandSpells,
            classId != npcSvtClassId,
            data->fields.logic,
            0LL);
          this = (BattleServantData_o *)v8->fields.skillInfoList;
          if ( this )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v56,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
            klass_high = -1;
            v57 = v56;
            v54 = data;
            while ( 1 )
            {
              v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v57,
                      (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
              if ( !v33 )
                break;
              if ( !v57.fields._current )
                sub_1B64324(v33);
              if ( LODWORD(v57.fields._current[1].klass) == 26 && klass_high < SHIDWORD(v57.fields._current[1].klass) )
                klass_high = HIDWORD(v57.fields._current[1].klass);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v57,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
            skillIndex = klass_high + 1;
            p_classBoardAddPassiveSkills = (ServantStatusBattleListViewItem_o *)&v8->fields.classBoardAddPassiveSkills;
            this = (BattleServantData_o *)BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)v8->fields.classBoardAddPassiveSkills,
                                            0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
              goto LABEL_33;
            klass = p_classBoardAddPassiveSkills->klass;
            if ( !p_classBoardAddPassiveSkills->klass )
              goto LABEL_44;
            if ( SLODWORD(klass->_1.namespaze) < 1 )
            {
LABEL_33:
              v48 = (System_Collections_ICollection_o *)BattleServantData__AddClassBoardSkillInfo(
                                                          v8,
                                                          afterUserSvtData,
                                                          &skillIndex,
                                                          v36);
              this = (BattleServantData_o *)BasicHelper__IsNullOrEmpty(v48, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !v48 )
                  goto LABEL_44;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v56,
                  (System_Collections_Generic_List_object__o *)v48,
                  (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
                v57 = v56;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v57,
                          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
                {
                  if ( v57.fields._current )
                    BattleData__ActPassiveBuff(v54, (BattleSkillInfoData_o *)v57.fields._current, 0LL, 0, 0, 0LL);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v57,
                  (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
              }
              this = (BattleServantData_o *)BattleServantData__get_BuffData(v8, v49);
              if ( this )
              {
                BattleBuffData__updateAuraBuffList((BattleBuffData_o *)this, 0LL);
                BattleServantData__updateBuff(v8, 1, 1, v50);
                classBoardAddPassiveSkills = afterUserSvtData->fields.classBoardAddPassiveSkills;
                v8->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
                sub_1B6406C(p_classBoardAddPassiveSkills, (int32_t)classBoardAddPassiveSkills, v52, v53);
                classBoardAddCommandSpells = afterUserSvtData->fields.classBoardAddCommandSpells;
                p_classBoardAddCommandSpells = (ServantStatusBattleListViewItem_o *)&v8->fields.classBoardAddCommandSpells;
                goto LABEL_42;
              }
            }
            else
            {
              v38 = 0LL;
              while ( 1 )
              {
                v39 = sub_1B64314(BattleServantData___c__DisplayClass761_0_TypeInfo, v34, v35);
                BattleServantData___c__DisplayClass761_0___ctor((BattleServantData___c__DisplayClass761_0_o *)v39, 0LL);
                if ( v38 >= LODWORD(klass->_1.namespaze) )
                  sub_1B6432C(this, v40);
                if ( !v39 )
                  break;
                v43 = *((_QWORD *)&klass->_1.byval_arg.data + v38);
                *(_QWORD *)(v39 + 16) = v43;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 16), v43, v41, v42);
                skillInfoList = (System_Collections_Generic_List_object__o *)v8->fields.skillInfoList;
                v47 = (System_Predicate_object__o *)sub_1B64314(
                                                      System_Predicate_BattleSkillInfoData__TypeInfo,
                                                      v45,
                                                      v46);
                System_Predicate_object____ctor(
                  v47,
                  (Il2CppObject *)v39,
                  Method_BattleServantData___c__DisplayClass761_0__UpdateClassBoardSkillBuff_b__0__,
                  0LL);
                if ( !skillInfoList )
                  break;
                System_Collections_Generic_List_object___RemoveAll(
                  skillInfoList,
                  (System_Predicate_T__o *)v47,
                  (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
                if ( (__int64)++v38 >= SLODWORD(klass->_1.namespaze) )
                  goto LABEL_33;
              }
            }
          }
        }
      }
    }
LABEL_44:
    sub_1B64324(this);
  }
  v22 = afterUserSvtData->fields.classBoardAddPassiveSkills;
  v8->fields.classBoardAddPassiveSkills = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v8->fields.classBoardAddPassiveSkills, (int32_t)v22, v20, v21);
  classBoardAddCommandSpells = afterUserSvtData->fields.classBoardAddCommandSpells;
  p_classBoardAddCommandSpells = (ServantStatusBattleListViewItem_o *)&v8->fields.classBoardAddCommandSpells;
LABEL_42:
  v8->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_1B6406C(p_classBoardAddCommandSpells, (int32_t)classBoardAddCommandSpells, v23, v24);
}


void __fastcall BattleServantData__UpdateFixNpSpeed(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w8
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_49FEA16 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, data);
    byte_49FEA16 = 1;
  }
  if ( BattleServantData__IsOnlyFirstForcedOneSpeed(this, (const MethodInfo *)data) )
    goto LABEL_4;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetTDPlaySpeed(0LL) && BattleServantData__CheckFirstNpPlay(this, data, v7) )
  {
LABEL_4:
    v5 = 2;
  }
  else if ( BattleServantData__IsNpEffectSpeedFix(this, v6) )
  {
    if ( UserServantCollectionEntity__CheckSvtCommonFlag(this->fields.svtCommonFlag, 4, 0LL) )
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
  __int64 v2; // x2
  ServantAssetArgs_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FEA11 & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetArgs_TypeInfo, method);
    byte_49FEA11 = 1;
  }
  v4 = (ServantAssetArgs_o *)sub_1B64314(ServantAssetArgs_TypeInfo, method, v2);
  ServantAssetArgs___ctor(v4, this, 0LL);
  this->fields._LoadedAssetArgs_k__BackingField = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._LoadedAssetArgs_k__BackingField, (int32_t)v4, v5, v6);
  return this->fields._LoadedAssetArgs_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__UpdateNpImmediately(
        BattleServantData_o *this,
        int32_t inputNp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleServantData___c__DisplayClass532_0_o *v9; // x21
  __int64 v10; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_object__o *v14; // x20

  if ( (byte_49FEA89 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__TypeInfo, *(_QWORD *)&inputNp);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_GameObject___, v5);
    sub_1B640C8(&Method_BasicHelper_ForEach_GameObject___, v6);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass532_0__UpdateNpImmediately_b__0__, v7);
    sub_1B640C8(&BattleServantData___c__DisplayClass532_0_TypeInfo, v8);
    byte_49FEA89 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass532_0_o *)sub_1B64314(
                                                       BattleServantData___c__DisplayClass532_0_TypeInfo,
                                                       *(_QWORD *)&inputNp,
                                                       method);
  BattleServantData___c__DisplayClass532_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  v9->fields.inputNp = inputNp;
  v11 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.paramobjelist,
          (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v14 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, v12, v13);
  System_Action_object____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_BattleServantData___c__DisplayClass532_0__UpdateNpImmediately_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v11,
    (System_Action_T__o *)v14,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_GameObject___);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA84 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_15122/*"UpdateStatusByTransform"*/, v7);
    byte_49FEA84 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_1B64324(v10);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_15122/*"UpdateStatusByTransform"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__UpdateTdGauge(
        BattleServantData_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantData___c__DisplayClass535_0_o *v11; // x22
  __int64 v12; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_object__o *v16; // x20

  if ( (byte_49FEA8C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_GameObject__TypeInfo, *(_QWORD *)&now);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_GameObject___, v7);
    sub_1B640C8(&Method_BasicHelper_ForEach_GameObject___, v8);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass535_0__UpdateTdGauge_b__0__, v9);
    sub_1B640C8(&BattleServantData___c__DisplayClass535_0_TypeInfo, v10);
    byte_49FEA8C = 1;
  }
  v11 = (BattleServantData___c__DisplayClass535_0_o *)sub_1B64314(
                                                        BattleServantData___c__DisplayClass535_0_TypeInfo,
                                                        *(_QWORD *)&now,
                                                        *(_QWORD *)&max);
  BattleServantData___c__DisplayClass535_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  v11->fields.now = now;
  v11->fields.max = max;
  v13 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.paramobjelist,
          (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v16 = (System_Action_object__o *)sub_1B64314(System_Action_GameObject__TypeInfo, v14, v15);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_BattleServantData___c__DisplayClass535_0__UpdateTdGauge_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v13,
    (System_Action_T__o *)v16,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__UpdateTreasureDevice(
        BattleServantData_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *TdDataMasterBase; // x0
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  struct TreasureDvcLvEntity_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x20
  __int64 v17; // x21
  int32_t v18; // w0
  struct ServantTreasureDvcEntity_o *EntityFromIDID; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  int32_t v24; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_49FEA30 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, *(_QWORD *)&id);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_49FEA30 = 1;
  }
  this->fields.treasuredvcId = id;
  this->fields.treasuredvcLevel = lv;
  if ( id < 1 )
  {
    this->fields.TDvc = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TDvc, 0, lv, (int32_t)method);
    v24 = 0;
  }
  else
  {
    TdDataMasterBase = BattleServantData__get_TdDataMasterBase(this, *(const MethodInfo **)&id);
    if ( !TdDataMasterBase )
      goto LABEL_12;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)TdDataMasterBase,
               this->fields.treasuredvcId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    this->fields.TDvc = (struct TreasureDvcEntity_o *)Entity;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TDvc, (int32_t)Entity, v10, v11);
    TdDataMasterBase = BattleServantData__get_TdLvDataMasterBase(this, v12);
    if ( !TdDataMasterBase )
      goto LABEL_12;
    v13 = TreasureDvcLvMaster__GetEntity(
            (TreasureDvcLvMaster_o *)TdDataMasterBase,
            this->fields.treasuredvcId,
            this->fields.treasuredvcLevel,
            0LL);
    this->fields._TDvcLv = v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._TDvcLv, (int32_t)v13, v14, v15);
    v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v17;
    *(_QWORD *)&v25.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v25, 0LL);
    EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(v18, this->fields.treasuredvcId, 0LL);
    this->fields._SvtTDvc = EntityFromIDID;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._SvtTDvc, (int32_t)EntityFromIDID, v20, v21);
    BattleServantData__checkServantTreasureDvcEntity(this, v22);
    TdDataMasterBase = BattleServantData__get_TDvcLv(this, v23);
    if ( !TdDataMasterBase )
LABEL_12:
      sub_1B64324(TdDataMasterBase);
    v24 = *((_DWORD *)TdDataMasterBase + 6);
  }
  this->fields.nplineCount = v24;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__UsedTpWeapon(
        BattleServantData_o *this,
        int32_t addPer,
        BattleData_o *battleData,
        bool isTempNpSetOnly,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t v10; // w0
  BattleBuffData_o *buffData; // x23
  int v12; // w25
  __int64 v13; // x1
  __int64 v14; // x2
  BattleBuffData_CheckIndividualitiesData_o *v15; // x24
  BattleBuffData_o *ActValue_42105172; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // w8
  __int64 v19; // x1
  __int64 v20; // x2
  UseNoblePhantasmWaveTurnEvent_o *v21; // x21
  int32_t maxtpturn; // w8

  if ( (byte_49FEA78 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&addPer);
    sub_1B640C8(&UseNoblePhantasmWaveTurnEvent_TypeInfo, v9);
    byte_49FEA78 = 1;
  }
  v10 = BattleUtility__FloorToInt((float)((float)this->fields.np / (float)this->fields.lineMaxNp) * 100.0, 0LL);
  buffData = this->fields.buffData;
  v12 = v10;
  v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v13,
                                                       v14);
  BattleBuffData_CheckIndividualitiesData___ctor(v15, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_20;
  if ( v12 <= 100 )
    v12 = 100;
  ActValue_42105172 = (BattleBuffData_o *)BattleBuffData__getActValue_42105172(buffData, 60, v15, 0LL);
  v18 = v12 + addPer + 100 * (_DWORD)ActValue_42105172;
  if ( v18 >= 500 )
    v18 = 500;
  this->fields.tmp_npper = v18;
  if ( isTempNpSetOnly )
  {
    ActValue_42105172 = BattleServantData__get_BuffData(this, v17);
    if ( ActValue_42105172 )
    {
      BattleBuffData__ResetTargetUseBuff(ActValue_42105172, 96, 0, 0LL);
      return;
    }
LABEL_20:
    sub_1B64324(ActValue_42105172);
  }
  if ( !battleData )
    goto LABEL_20;
  ActValue_42105172 = (BattleBuffData_o *)battleData->fields.perf;
  if ( !ActValue_42105172 )
    goto LABEL_20;
  if ( !BattlePerformance__isPositionTactical((BattlePerformance_o *)ActValue_42105172, 0LL) )
    goto LABEL_17;
  ActValue_42105172 = (BattleBuffData_o *)this->fields.deckSvt;
  if ( !ActValue_42105172 )
    goto LABEL_20;
  if ( BattleDeckServantData__IsUseTdBeforeTactical((BattleDeckServantData_o *)ActValue_42105172, 0LL) )
  {
    this->fields.isUseTdBetweenEnemyTurnEndAndTactical = 1;
  }
  else
  {
LABEL_17:
    v21 = (UseNoblePhantasmWaveTurnEvent_o *)sub_1B64314(UseNoblePhantasmWaveTurnEvent_TypeInfo, v19, v20);
    UseNoblePhantasmWaveTurnEvent___ctor(v21, battleData, 0LL);
    ActValue_42105172 = (BattleBuffData_o *)this->fields.waveTurnEventOwner;
    if ( !ActValue_42105172 )
      goto LABEL_20;
    ServantWaveTurnEventOwner__Add((ServantWaveTurnEventOwner_o *)ActValue_42105172, (ServantWaveTurnEvent_o *)v21, 0LL);
  }
  maxtpturn = this->fields.maxtpturn;
  this->fields.np = 0;
  this->fields.nexttpturn = maxtpturn;
}


bool __fastcall BattleServantData___ChangeBuffValue_g__IsMatchIndividualityCond_546_0(
        BattleBuffData_BuffData_o *data,
        BattleServantData___c__DisplayClass546_0_o *a2,
        const MethodInfo *method)
{
  System_Int32_array *Individualty; // x0
  System_Int32_array *v5; // x20

  if ( !data )
    sub_1B64324(0LL);
  Individualty = BattleBuffData_BuffData__GetIndividualty(data, 0, a2->fields.isExcludeUnSubStateIndiv, 0, 0LL);
  v5 = Individualty;
  if ( !a2->fields.isAny )
    return Individuality__ContainsIndividualities(v5, a2->fields.targetIndivi, 0LL);
  if ( Individuality__CheckIndividualities(Individualty, a2->fields.targetIndivi, 0LL) )
    return 1;
  return !a2->fields.isAny && Individuality__ContainsIndividualities(v5, a2->fields.targetIndivi, 0LL);
}


bool __fastcall BattleServantData___CheckInvincibleAvoidanceBuff_g__CheckAvoidanceDeathDamageFunc_668_0(
        BattleServantData_o *this,
        float checkDamage,
        BattleServantData___c__DisplayClass668_0_o *a3,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21
  int32_t v9; // w0
  const MethodInfo *v10; // x4
  _BOOL8 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct BattleActionData_DamageData_o *damageData; // x8
  int32_t v15; // w1
  bool v16; // w19
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
    sub_1B64324(v11);
  v15 = (int)usedBuff;
  v16 = v11;
  damageData->fields._NoDamageAffectedBuff_k__BackingField = usedBuff;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&damageData->fields._NoDamageAffectedBuff_k__BackingField,
    v15,
    v12,
    v13);
  return v16;
}


BattlePointData_o *__fastcall BattleServantData___setSaveData_b__297_2(
        BattleServantData_o *this,
        BattlePointData_SaveData_o *x,
        const MethodInfo *method)
{
  BattlePointData_o *v5; // x21

  if ( (byte_49FEB05 & 1) == 0 )
  {
    sub_1B640C8(&BattlePointData_TypeInfo, x);
    byte_49FEB05 = 1;
  }
  v5 = (BattlePointData_o *)sub_1B64314(BattlePointData_TypeInfo, x, method);
  BattlePointData___ctor_42564108(v5, x, this, 0LL);
  return v5;
}


void __fastcall BattleServantData___setTransformServant_g__RemoveBuffGrantedByBeforePassiveSkill_317_0(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvt,
        BattleServantData___c__DisplayClass317_0_o *a3,
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
  if ( (byte_49FEB06 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userSvt);
    byte_49FEB06 = 1;
  }
  if ( !a3->fields.data )
    goto LABEL_12;
  battle_info = a3->fields.data->fields.battle_info;
  v9 = *(_QWORD *)&v6->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&v6->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
  if ( !battle_info )
LABEL_12:
    sub_1B64324(this);
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
  int32_t v12; // w21
  const MethodInfo *v13; // x3

  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)buff);
  if ( !this->fields.buffData )
    sub_1B64324(MaxHp);
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
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA80 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&damage);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_17740/*"changeHp"*/, v11);
    byte_49FEA80 = 1;
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
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v17 )
    {
      if ( !current )
        sub_1B64324(v17);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17740/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FEA8D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&intp);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_24210/*"updateNp"*/, v11);
    byte_49FEA8D = 1;
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
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v20 )
    {
      if ( !current )
        sub_1B64324(v20);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_24210/*"updateNp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *paramobjelist; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x8

  if ( (byte_49FEA6C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    byte_49FEA6C = 1;
  }
  paramobjelist = (System_Collections_Generic_List_object__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_10;
  if ( System_Collections_Generic_List_object___Contains(
         paramobjelist,
         (Il2CppObject *)obj,
         (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    return;
  }
  paramobjelist = (System_Collections_Generic_List_object__o *)this->fields.paramobjelist;
  if ( !paramobjelist
    || (items = paramobjelist->fields._items,
        v10 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++paramobjelist->fields._version,
        !items) )
  {
LABEL_10:
    sub_1B64324(paramobjelist);
  }
  size = paramobjelist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      paramobjelist,
      (Il2CppObject *)obj,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &items->obj.klass + size;
    paramobjelist->fields._size = size + 1;
    v12[4] = (Il2CppClass *)obj;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)obj, v7, v8);
  }
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
  System_Collections_Generic_List_object__o *skillInfoList; // x0
  _BOOL8 v22; // x0
  Il2CppObject *current; // x27
  BattleSkillInfoData_o *SkillData; // x27
  _BOOL8 v25; // x0
  Il2CppObject *v26; // x27
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  const MethodInfo *v35; // [xsp+0h] [xbp-B0h]
  BattleSkillInfoData_o *beforeDeathSkillInfoa; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FEA31 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__, v20);
    byte_49FEA31 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    skillInfoList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v22 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1B64324(v22);
    if ( LODWORD(v38.fields._current[1].klass) == type
      && HIDWORD(v38.fields._current[1].klass) == index
      && ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v38.fields._current->klass->vtable[5].method)(
           v38.fields._current,
           v38.fields._current->klass->vtable[6].methodPtr) == skillId
      && HIDWORD(current[2].klass) == skillLv )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
      return 0LL;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    skillInfoList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v38 = v37;
  do
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v25 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
      goto LABEL_21;
    }
    v26 = v38.fields._current;
    if ( !v38.fields._current )
      sub_1B64324(v25);
  }
  while ( LODWORD(v38.fields._current[1].klass) != type || HIDWORD(v38.fields._current[1].klass) != index );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_30;
  System_Collections_Generic_List_object___Remove(
    skillInfoList,
    v26,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__);
LABEL_21:
  SkillData = BattleSkillInfoData__MakeSkillData(type, 0LL);
  skillInfoList = (System_Collections_Generic_List_object__o *)BattleServantData__SetSkillInfo(
                                                                 this,
                                                                 SkillData,
                                                                 type,
                                                                 index,
                                                                 skillId,
                                                                 skillLv,
                                                                 userCommandCodeId,
                                                                 commandAssistId,
                                                                 v35);
  if ( !SkillData
    || (((void (__fastcall *)(BattleSkillInfoData_o *, BattleServantData_o *, Il2CppMethodPointer))SkillData->klass->vtable._11_PreAddProcess.method)(
          SkillData,
          this,
          SkillData->klass->vtable._12_IsChangeable.methodPtr),
        BattleServantData__ChangeSkillRemainingTurn(this, SkillData, beforeDeathSkillInfoa, v27),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0LL)
    || (items = skillInfoList->fields._items,
        v31 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__,
        ++skillInfoList->fields._version,
        !items) )
  {
LABEL_30:
    sub_1B64324(skillInfoList);
  }
  size = skillInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      skillInfoList,
      (Il2CppObject *)SkillData,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    skillInfoList->fields._size = size + 1;
    v33[4] = (Il2CppClass *)SkillData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)SkillData, v28, v29);
  }
  return SkillData;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__canUseSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  System_Boolean_array *SkillSealSelect; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v9; // x21

  if ( (byte_49FEAC1 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&index);
    byte_49FEAC1 = 1;
  }
  if ( index != -1 )
  {
    SkillSealSelect = BattleServantData__getSkillSealSelect(this, *(const MethodInfo **)&index);
    if ( !SkillSealSelect )
      goto LABEL_12;
    if ( SkillSealSelect->max_length <= index )
      sub_1B6432C(SkillSealSelect, *(_QWORD *)&index);
    if ( SkillSealSelect->m_Items[index + 4] )
      return 0;
  }
  if ( !BattleServantData__isAction(this, *(const MethodInfo **)&index) )
    return 0;
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      v6,
                                                      v7);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_12:
    sub_1B64324(SkillSealSelect);
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  Il2CppObject *Entity; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x20
  const MethodInfo *v17; // x1
  int32_t SvtId; // w22
  struct ServantLimitEntity_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct ServantEntity_o *svtdata; // x8
  ServantLimitAddMaster_o *v23; // x21
  __int64 v24; // x22
  __int64 v25; // x23
  int32_t v26; // w23
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  int32_t v29; // w23
  const MethodInfo *v30; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x3
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v36; // w1
  ServantLimitMaster_o *v37; // x0
  struct ServantLimitEntity_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_49FEA2E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FEA2E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v11 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v11;
  *(_QWORD *)&v41.fields.fakeValue = v10;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
  if ( !v12 )
    goto LABEL_23;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v12,
             (int32_t)Instance,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = (struct ServantEntity_o *)Entity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtdata, (int32_t)Entity, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  v16 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v17);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                               this->fields.limitcount,
                               0LL);
  if ( !v16 )
    goto LABEL_23;
  if ( !ServantLimitMaster__TryGetEntity(
          (ServantLimitMaster_o *)v16,
          &this->fields.svtlimitent,
          SvtId,
          (int32_t)Instance,
          0LL) )
  {
    v19 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v16, 100100, 0, 0LL);
    this->fields.svtlimitent = v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtlimitent, (int32_t)v19, v20, v21);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_23;
  v23 = (ServantLimitAddMaster_o *)Instance;
  v25 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v24 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v25;
  *(_QWORD *)&v42.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v42, 0LL);
  Instance = (Il2CppObject *)BattleServantData__getDispLimitCount(this, 1, v27);
  if ( !v23 )
    goto LABEL_23;
  ServantLimitAddMaster__TryGetEntity(v23, &this->fields.svtlimitaddent, v26, (int32_t)Instance, 0LL);
  v29 = BattleServantData__getSvtId(this, v28);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v30);
  if ( !ServantLimitMaster__TryGetEntity(
          (ServantLimitMaster_o *)v16,
          &this->fields.svtlimitDispent,
          v29,
          DispLimitCount,
          0LL) )
  {
    if ( !this->fields.svtlimitaddent )
    {
      v36 = 100100;
      v37 = (ServantLimitMaster_o *)v16;
      battleCharaLimitCount = 0;
      goto LABEL_21;
    }
    Instance = (Il2CppObject *)BattleServantData__getSvtId(this, v32);
    svtlimitaddent = this->fields.svtlimitaddent;
    if ( svtlimitaddent )
    {
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v36 = (int)Instance;
      v37 = (ServantLimitMaster_o *)v16;
LABEL_21:
      v38 = ServantLimitMaster__GetEntity(v37, v36, battleCharaLimitCount, 0LL);
      this->fields.svtlimitDispent = v38;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtlimitDispent, (int32_t)v38, v39, v40);
      goto LABEL_22;
    }
LABEL_23:
    sub_1B64324(Instance);
  }
LABEL_22:
  BattleServantData__UpdateTreasureDevice(this, this->fields.treasuredvcId, this->fields.treasuredvcLevel, v33);
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
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FEA8E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&intp);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_17745/*"changeNp"*/, v11);
    byte_49FEA8E = 1;
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
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)paramobjelist,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v16.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v15 )
      {
        if ( !current )
          sub_1B64324(v15);
        UnityEngine_GameObject__SendMessage_69108052(
          (UnityEngine_GameObject_o *)current,
          (System_String_o *)StringLiteral_17745/*"changeNp"*/,
          (Il2CppObject *)this,
          1,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall BattleServantData__changeTransformServant(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t transformSvtId; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v4; // kr00_16

  if ( (byte_49FEA2D & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FEA2D = 1;
  }
  transformSvtId = this->fields.transformSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(transformSvtId, 0LL);
  this->fields.svtId = v4;
  BattleServantData__changeBaseUpdateServant(this, *(const MethodInfo **)&v4.fields.fakeValue);
}


void __fastcall BattleServantData__changeUpdateStatus(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FEA83 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17748/*"changeUpdateStatus"*/, method);
    byte_49FEA83 = 1;
  }
  BattleServantData__sendParamMessage(this, (System_String_o *)StringLiteral_17748/*"changeUpdateStatus"*/, v2);
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
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEAAC & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_49FEAAC = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v7);
  return BattleBuffData__checkActBuff_42109236(buffData, 47, v6, &usedBuff, 0LL);
}


bool __fastcall BattleServantData__checkBreakAvoidance(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FEAB7 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAB7 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__checkActBuff_42109236(buffData, 17, v8, &usedBuff, 0LL);
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
  System_Int32_array *Individualities_42531456; // x0
  const MethodInfo *v12; // x2
  System_Int32_array *v13; // x21

  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, v4);
  Individualities_42531456 = BattleServantData__getIndividualities_42531456(this, BuffIndividualities, v10);
  v13 = Individualities_42531456;
  if ( !opSvt )
  {
    if ( buffData )
      return BattleBuffData__checkActBuff(buffData, 38, v13, buffIndiv, 0LL);
LABEL_6:
    sub_1B64324(Individualities_42531456);
  }
  Individualities_42531456 = BattleServantData__getIndividualities_42531456(opSvt, buffIndiv, v12);
  if ( !buffData )
    goto LABEL_6;
  buffIndiv = Individualities_42531456;
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x21
  BattleBuffData_BuffData_array *v16; // [xsp+0h] [xbp-40h] BYREF
  BattleBuffData_BuffData_array *onList; // [xsp+8h] [xbp-38h] BYREF

  v16 = 0LL;
  onList = 0LL;
  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)fieldList);
  if ( !this->fields.buffData )
    goto LABEL_12;
  v10 = MaxHp;
  BattleBuffData__checkFieldBuff(this->fields.buffData, fieldList, aliveSvtData, &onList, &v16, logic, 0LL);
  MaxHp = BattleServantData__checkUpdateUpdownHp(this, v10, 1, v11);
  if ( (MaxHp & 1) == 0 )
    return;
  if ( !fieldList )
LABEL_12:
    sub_1B64324(MaxHp);
  v14 = *(_QWORD *)&fieldList->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
        sub_1B6432C(MaxHp, v12);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FEAB8 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAB8 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__checkActBuff_42109236(buffData, 69, v8, &usedBuff, 0LL);
}


bool __fastcall BattleServantData__checkPierceInvincible(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FEAB6 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAB6 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__checkActBuff_42109236(buffData, 15, v8, &usedBuff, 0LL);
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
  _BOOL4 isEnemy; // w22
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  __int64 v7; // x0
  int32_t ActValue_42105172; // w0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  int CorrectedValueFuncGainNp; // w20

  if ( (byte_49FEAC6 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEAC6 = 1;
  }
  isEnemy = this->fields.isEnemy;
  if ( !this->fields.isEnemy )
  {
    buffData = this->fields.buffData;
    v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                        BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                        method,
                                                        v2);
    BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      sub_1B64324(v7);
    ActValue_42105172 = BattleBuffData__getActValue_42105172(buffData, 50, v6, 0LL);
    CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(this, ActValue_42105172, v9);
    if ( CorrectedValueFuncGainNp >= 1 && !BattleServantData__isGainNp(this, 1, v10) )
      CorrectedValueFuncGainNp = 0;
    BattleServantData__addNp(this, CorrectedValueFuncGainNp, 0, v11);
  }
  return !isEnemy;
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
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  ServantTreasureDvcMaster_o *v9; // x20
  ServantStatusBattleListViewItem_o *p_SvtTDvc; // x19
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_49FEAE9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___, method);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEAE9 = 1;
  }
  if ( !this->fields._SvtTDvc )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    v8 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v9 = (ServantTreasureDvcMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v14.fields.currentCryptoKey = v8;
    *(_QWORD *)&v14.fields.fakeValue = v7;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v14, 0LL);
    if ( !v9 )
LABEL_9:
      sub_1B64324(Instance);
    p_SvtTDvc = (ServantStatusBattleListViewItem_o *)&this->fields._SvtTDvc;
    EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v9, (int32_t)Instance, 0, 0LL);
    p_SvtTDvc->klass = (ServantStatusBattleListViewItem_c *)EntityFromSvtIdOnly;
    sub_1B6406C(p_SvtTDvc, (int32_t)EntityFromSvtIdOnly, v12, v13);
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

  buffData = this->fields.buffData;
  v9 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
         this,
         isSvtAction,
         targetSvt,
         command,
         notSvtIndivArray,
         (const MethodInfo *)notSvtIndivArray);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__checkActBuff_42109236(buffData, 95, v9, usedBuff, 0LL);
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

  if ( (byte_49FEAC8 & 1) == 0 )
  {
    sub_1B640C8(&System_Math_TypeInfo, method);
    byte_49FEAC8 = 1;
  }
  MaxHp = (BattleBuffData_o *)BattleServantData__getMaxHp(this, method);
  if ( !this->fields.buffData )
    goto LABEL_10;
  v4 = (int)MaxHp;
  if ( BattleBuffData__getResumptionHpFromLossMaxHp(this->fields.buffData, 0, 0LL) < 1 )
    return 0;
  MaxHp = this->fields.buffData;
  if ( !MaxHp )
LABEL_10:
    sub_1B64324(MaxHp);
  ResumptionHpFromLossMaxHp = BattleBuffData__getResumptionHpFromLossMaxHp(MaxHp, 1, 0LL);
  v6 = this->fields.maxhp;
  v7 = ResumptionHpFromLossMaxHp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Max_62194036(0, v4 - v6, 0LL);
  v9 = System_Math__Min_62194364(v8, v7, 0LL);
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
      v11 = v9
          - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
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
        (unsigned int)(v11 + v12),
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
  bool isNobleAction_42520640; // w8
  int32_t invokeAct; // [xsp+Ch] [xbp-24h] BYREF

  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)battleData);
  if ( TreasureDevice )
  {
    if ( !flg )
      goto LABEL_13;
    if ( !TreasureDeviceConditionUtil__IsSatisfyEachCondition(this, battleData, 0LL) )
      goto LABEL_9;
    invokeAct = 0;
    isNobleAction_42520640 = BattleServantData__isNobleAction_42520640(this, &invokeAct, v8);
    LOBYTE(TreasureDevice) = 0;
    if ( isNobleAction_42520640 )
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
  __int64 v4; // x1
  unsigned __int64 uniqueId; // x8
  unsigned __int64 max_length; // x10
  unsigned __int64 v7; // x9

  if ( (byte_49FEAE2 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B640C8(&double___TypeInfo, param);
    byte_49FEAE2 = 1;
  }
  if ( !param || (this = (BattleServantData_o *)sub_1B64170(double___TypeInfo, param->max_length)) == 0LL )
    sub_1B64324(this);
  uniqueId = (unsigned int)this->fields.uniqueId;
  if ( (__int64)(uniqueId << 32) >= 1 )
  {
    max_length = param->max_length;
    v7 = 0LL;
    do
    {
      if ( v7 >= max_length || v7 >= uniqueId )
        sub_1B6432C(this, v4);
      *((double *)&this->fields.userSvtId.fields.currentCryptoKey + v7) = (double)param->m_Items[v7 + 1];
      ++v7;
    }
    while ( (int)uniqueId != v7 );
  }
  return (System_Double_array *)this;
}


System_Int64_array *__fastcall BattleServantData__convertLong(
        BattleServantData_o *this,
        System_Int32_array *param,
        const MethodInfo *method)
{
  __int64 v4; // x1
  unsigned __int64 uniqueId; // x8
  unsigned __int64 v6; // x9

  if ( (byte_49FEAE1 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B640C8(&long___TypeInfo, param);
    byte_49FEAE1 = 1;
  }
  if ( !param || (this = (BattleServantData_o *)sub_1B64170(long___TypeInfo, param->max_length)) == 0LL )
    sub_1B64324(this);
  uniqueId = (unsigned int)this->fields.uniqueId;
  if ( (__int64)(uniqueId << 32) >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= param->max_length || v6 >= uniqueId )
        sub_1B6432C(this, v4);
      *(&this->fields.userSvtId.fields.currentCryptoKey + v6) = param->m_Items[v6 + 1];
      ++v6;
    }
    while ( (__int64)v6 < (int)uniqueId );
  }
  return (System_Int64_array *)this;
}


void __fastcall BattleServantData__delParamObject(
        BattleServantData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0

  if ( (byte_49FEA6E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Contains__, obj);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Remove__, v5);
    byte_49FEA6E = 1;
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_8;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)paramobjelist,
         (Il2CppObject *)obj,
         (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    paramobjelist = this->fields.paramobjelist;
    if ( paramobjelist )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)paramobjelist,
        (Il2CppObject *)obj,
        (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_GameObject__Remove__);
      return;
    }
LABEL_8:
    sub_1B64324(paramobjelist);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA85 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_19369/*"fixUpdateStatus"*/, v7);
    byte_49FEA85 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_1B64324(v10);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_19369/*"fixUpdateStatus"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__forceDead(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_c *klass; // x8
  int32_t v4; // w0
  const MethodInfo *v5; // x6
  __int64 v6; // x0
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
    sub_1B64324(v6);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  void *All; // x0
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *v10; // x20
  Il2CppObject *v11; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FEA52 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, v4);
    sub_1B640C8(&System_Predicate_BattleSkillInfoData__TypeInfo, v5);
    sub_1B640C8(&Method_BattleServantData___c__getActiveSkillInfos_b__413_0__, v6);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v7);
    byte_49FEA52 = 1;
  }
  All = BattleServantData___c_TypeInfo;
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    All = BattleServantData___c_TypeInfo;
  }
  v10 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 56LL);
  if ( !v10 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleServantData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)**((_QWORD **)All + 23);
    v10 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleSkillInfoData__TypeInfo, method, v2);
    System_Predicate_object____ctor(v10, v11, Method_BattleServantData___c__getActiveSkillInfos_b__413_0__, 0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__413_0 = (struct System_Predicate_BattleSkillInfoData__o *)v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__413_0, (int32_t)v10, v13, v14);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_object___FindAll(
                skillInfoList,
                (System_Predicate_T__o *)v10,
                (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_1B64324(All);
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)All,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
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
  if ( (byte_49FEA3B & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FEA3B = 1;
  }
  svtdata = v2->fields.svtdata;
  if ( !svtdata )
    sub_1B64324(this);
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v7, 0LL);
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
  __int64 FieldSpace; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  int v22; // w8
  System_Double_array *v23; // x19
  BattleRaidInfo_o *RaidInfo; // x20
  __int64 maxHp; // x8
  double v26; // d0
  double v27; // d1
  int32_t np; // w8
  int v29; // w21
  const MethodInfo *v30; // x1
  double totalDamage; // d0
  System_Double_array *v32; // x0
  BattleBuffData_o *buffData; // x19
  BattleServantData_o *BuffIDList; // x0
  const MethodInfo *v35; // x2
  struct BattleBuffData_o *v36; // x19
  bool v37; // w3
  BattleBuffData_o *v38; // x0
  bool v39; // w1
  struct BattleBuffData_o *v40; // x19
  BattleRaidInfo_o *v41; // x20
  BattleBuffData_o *v42; // x19
  __int64 v43; // x8
  __int64 v44; // x8
  BattleServantData___c_c *v45; // x0
  System_Converter_long__int__o *_9__693_0; // x22
  Il2CppObject *v47; // x23
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Int32_array *v51; // x21
  int32_t SameIndivualityBuffSum; // w22
  const MethodInfo *v53; // x2
  struct System_Int32_array *shiftDeckList; // x8
  int32_t targetIndex; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FEAE0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_ConvertAll_long__int___, bData);
    sub_1B640C8(&System_Converter_long__int__TypeInfo, v15);
    sub_1B640C8(&double___TypeInfo, v16);
    sub_1B640C8(&Method_BattleServantData___c__getAiParam_b__693_0__, v17);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v18);
    byte_49FEAE0 = 1;
  }
  targetIndex = 0;
  FieldSpace = sub_1B64170(double___TypeInfo, 1LL);
  v22 = param - 2;
  v23 = (System_Double_array *)FieldSpace;
  switch ( v22 )
  {
    case 0:
      targetIndex = -1;
      if ( !bData )
        goto LABEL_104;
      FieldSpace = BattleData__getFieldSpace(bData, this->fields.uniqueId, &targetIndex, 0, 0LL);
      if ( !v23 )
        goto LABEL_104;
      goto LABEL_36;
    case 1:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v23 )
        goto LABEL_104;
      if ( !v23->max_length )
        goto LABEL_100;
      np = *(_DWORD *)(FieldSpace + 44);
      goto LABEL_92;
    case 2:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v23 )
        goto LABEL_104;
      if ( !v23->max_length )
        goto LABEL_100;
      np = *(_DWORD *)(FieldSpace + 40);
      goto LABEL_92;
    case 3:
      v29 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
              this,
              this->klass->vtable._10_set_hp.methodPtr);
      FieldSpace = BattleServantData__getMaxHp(this, v30);
      if ( !v23 )
        goto LABEL_104;
      if ( !v23->max_length )
        goto LABEL_100;
      v26 = (double)v29 * 1000.0;
      v27 = (double)(int)FieldSpace;
      goto LABEL_23;
    case 4:
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      np = this->fields.np;
      goto LABEL_92;
    case 5:
      FieldSpace = (__int64)BattleServantData__get_TreasureDevice(this, v20);
      if ( !FieldSpace )
        goto LABEL_31;
      if ( !v23 )
        goto LABEL_104;
      if ( !v23->max_length )
        goto LABEL_100;
      np = this->fields.nexttpturn;
      goto LABEL_92;
    case 6:
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      totalDamage = (double)actCnt;
      goto LABEL_93;
    case 7:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._21_getThisTurnActCount.method)(
                     this,
                     this->klass->vtable._22_getAiParam.methodPtr);
      if ( !v23 )
        goto LABEL_104;
LABEL_36:
      if ( !v23->max_length )
        goto LABEL_100;
      totalDamage = (double)(int)FieldSpace;
      goto LABEL_93;
    case 8:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v23 )
        goto LABEL_104;
      if ( !v23->max_length )
        goto LABEL_100;
      np = *(_DWORD *)(FieldSpace + 32);
      goto LABEL_92;
    case 9:
      FieldSpace = sub_1B64170(double___TypeInfo, 2LL);
      if ( !FieldSpace )
        goto LABEL_104;
      v23 = (System_Double_array *)FieldSpace;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      *(double *)(FieldSpace + 32) = (double)turn;
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._21_getThisTurnActCount.method)(
                     this,
                     this->klass->vtable._22_getAiParam.methodPtr);
      if ( v23->max_length <= 1 )
        goto LABEL_100;
      v23->m_Items[1] = (double)(int)FieldSpace;
      return v23;
    case 10:
      if ( !aiBaseEntity )
        goto LABEL_104;
      buffData = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !buffData )
        goto LABEL_104;
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffIDList(buffData, FieldSpace & 1, 0LL);
      goto LABEL_69;
    case 11:
      BuffIDList = (BattleServantData_o *)BattleServantData__getIndividualities(this, 0LL, v21);
      goto LABEL_69;
    case 12:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v36 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v36 )
        goto LABEL_104;
      v37 = (FieldSpace & 1) == 0;
      v38 = v36;
      v39 = 0;
      goto LABEL_56;
    case 13:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v40 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v40 )
        goto LABEL_104;
      v37 = (FieldSpace & 1) == 0;
      v39 = 1;
      v38 = v40;
LABEL_56:
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffIndividualities(v38, v39, 0, v37, 1, 0LL);
      goto LABEL_69;
    case 14:
    case 15:
      if ( !bData )
        goto LABEL_104;
      RaidInfo = BattleData__getRaidInfo(bData, this->fields.raidId, 0LL);
      FieldSpace = sub_1B64170(double___TypeInfo, 1LL);
      if ( !RaidInfo )
        goto LABEL_104;
      v23 = (System_Double_array *)FieldSpace;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      maxHp = RaidInfo->fields.maxHp;
      v26 = (double)(maxHp - RaidInfo->fields.totalDamage) * 1000.0;
      v27 = (double)maxHp;
LABEL_23:
      totalDamage = v26 / v27;
      goto LABEL_93;
    case 16:
      if ( !bData )
        goto LABEL_104;
      v41 = BattleData__getRaidInfo(bData, this->fields.raidId, 0LL);
      FieldSpace = sub_1B64170(double___TypeInfo, 1LL);
      if ( !v41 )
        goto LABEL_104;
      v23 = (System_Double_array *)FieldSpace;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      totalDamage = (double)v41->fields.totalDamage;
      goto LABEL_93;
    case 20:
      FieldSpace = (__int64)this->fields.buffData;
      if ( !FieldSpace )
        goto LABEL_104;
      FieldSpace = BattleBuffData__getMaxBuffCount((BattleBuffData_o *)FieldSpace, checkParams, 0, 0LL);
      if ( !v23 )
        goto LABEL_104;
      if ( !v23->max_length )
        goto LABEL_100;
      totalDamage = (double)FieldSpace;
      goto LABEL_93;
    case 21:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v42 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v42 )
        goto LABEL_104;
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffActiveIDList(v42, FieldSpace & 1, 0LL);
LABEL_69:
      v32 = BattleServantData__convertDouble(BuffIDList, (System_Int32_array *)BuffIDList, v35);
      goto LABEL_70;
    case 23:
      if ( !bData )
        goto LABEL_104;
      FieldSpace = BattleData__get_IsInTactical(bData, 0LL);
      v43 = 536LL;
      if ( (FieldSpace & 1) != 0 )
        v43 = 540LL;
      if ( !v23 )
        goto LABEL_104;
      if ( !v23->max_length )
        goto LABEL_100;
      np = *(_DWORD *)((char *)&bData->klass + v43);
      goto LABEL_92;
    case 24:
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      v44 = 20LL;
      if ( this->fields.deckIndex < 0 )
        v44 = 16LL;
      np = *(_DWORD *)((char *)&this->klass + v44);
      goto LABEL_92;
    case 25:
      v45 = BattleServantData___c_TypeInfo;
      if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
        v45 = BattleServantData___c_TypeInfo;
      }
      _9__693_0 = v45->static_fields->__9__693_0;
      if ( !_9__693_0 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = BattleServantData___c_TypeInfo;
        }
        v47 = (Il2CppObject *)v45->static_fields->__9;
        _9__693_0 = (System_Converter_long__int__o *)sub_1B64314(System_Converter_long__int__TypeInfo, v20, v21);
        System_Converter_long__int____ctor(_9__693_0, v47, Method_BattleServantData___c__getAiParam_b__693_0__, 0LL);
        static_fields = BattleServantData___c_TypeInfo->static_fields;
        static_fields->__9__693_0 = _9__693_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__693_0, (int32_t)_9__693_0, v49, v50);
      }
      FieldSpace = (__int64)System_Array__ConvertAll_long__int_(
                              checkParams,
                              (System_Converter_TInput__TOutput__o *)_9__693_0,
                              (const MethodInfo_2F2E774 *)Method_System_Array_ConvertAll_long__int___);
      if ( !this->fields.buffData )
        goto LABEL_104;
      v51 = (System_Int32_array *)FieldSpace;
      SameIndivualityBuffSum = BattleBuffData__getSameIndivualityBuffSum(
                                 this->fields.buffData,
                                 (System_Int32_array *)FieldSpace,
                                 0,
                                 0,
                                 0,
                                 0LL);
      FieldSpace = BattleServantData__getSameIndiualityServantSum(this, v51, v53);
      if ( !v23 )
        goto LABEL_104;
      if ( !v23->max_length )
        goto LABEL_100;
      np = FieldSpace + SameIndivualityBuffSum;
LABEL_92:
      totalDamage = (double)np;
      goto LABEL_93;
    case 26:
      if ( this->fields.isSystemAlive
        || (FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                           this,
                           this->klass->vtable._10_set_hp.methodPtr),
            (int)FieldSpace > 0)
        || (shiftDeckList = this->fields.shiftDeckList, totalDamage = 1.0, shiftDeckList)
        && this->fields.shiftDeckIndex < (signed int)shiftDeckList->max_length )
      {
        totalDamage = 0.0;
      }
      if ( !v23 )
LABEL_104:
        sub_1B64324(FieldSpace);
      if ( !v23->max_length )
LABEL_100:
        sub_1B6432C(FieldSpace, v20);
LABEL_93:
      v23->m_Items[0] = totalDamage;
      break;
    default:
LABEL_31:
      v32 = (System_Double_array *)sub_1B64170(double___TypeInfo, 0LL);
LABEL_70:
      v23 = v32;
      break;
  }
  return v23;
}


AiState_o *__fastcall BattleServantData__getAiState(BattleServantData_o *this, const MethodInfo *method)
{
  AiStateManager_o *AiStateManager; // x0
  AiState_o *result; // x0

  AiStateManager = BattleServantData__get_AiStateManager(this, method);
  if ( !AiStateManager )
    sub_1B64324(0LL);
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

  if ( (byte_49FEAE3 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FEAE3 = 1;
  }
  result = this->fields.appearanceId;
  if ( result <= 0 )
  {
    v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v6.fields.currentCryptoKey = v5;
    *(_QWORD *)&v6.fields.fakeValue = v4;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL);
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
    sub_1B64324(TDvcLv);
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

  if ( (byte_49FEA75 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA75 = 1;
  }
  *multiatk = 1;
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v11);
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
  __int64 methodPtr_low; // x9
  _BOOL4 flash; // w21
  __int64 v13; // x1
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49FEA76 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, command);
    sub_1B640C8(&int_TypeInfo, v5);
    this = (BattleServantData_o *)sub_1B640C8(&ServantCardEntity_TypeInfo, v6);
    byte_49FEA76 = 1;
  }
  if ( !command )
    goto LABEL_25;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_25;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B64170(int___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_25;
    if ( this->fields.uniqueId )
    {
      LODWORD(this->fields.userSvtId.fields.currentCryptoKey) = 100;
      return (System_Int32_array *)this;
    }
LABEL_27:
    sub_1B6432C(this, v13);
  }
  v8 = v4->fields.commandtable;
  v14 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  if ( !v8 )
    goto LABEL_25;
  v9 = ((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v8->klass->vtable._29_get_Item.method)(
         v8,
         this,
         v8->klass->vtable._30_set_Item.methodPtr);
  v10 = (System_Int32_array **)v9;
  if ( v9 )
  {
    methodPtr_low = LOBYTE(ServantCardEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v9 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantCardEntity_c **)(*(_QWORD *)(*(_QWORD *)v9 + 200LL) + 8 * methodPtr_low - 8) != ServantCardEntity_TypeInfo )
    {
      sub_1B645E4(v9);
      goto LABEL_27;
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
LABEL_25:
      sub_1B64324(this);
    }
    this = (BattleServantData_o *)BattleCommandData__isPair(command, 0LL);
    if ( !v10 )
      goto LABEL_25;
    if ( ((unsigned __int8)this & 1) != 0 )
      return v10[7];
    else
      return v10[6];
  }
  else
  {
    if ( !v10 )
      goto LABEL_25;
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
  System_Collections_Generic_List_object__o *v13; // x19
  BattleBuffData_o *buffData; // x24
  __int64 v15; // x1
  __int64 v16; // x2
  BattleBuffData_CheckIndividualitiesData_o *v17; // x25
  BattleBuffData_BuffData_array *BuffList_42092284; // x0
  __int64 v19; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v21; // x20
  unsigned int v22; // w22
  Il2CppClass **v23; // x8
  Il2CppClass *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_49FEA68 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&attackAct);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    byte_49FEA68 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                       *(_QWORD *)&attackAct,
                                                       command);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffData = this->fields.buffData;
  v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v15,
                                                       v16);
  BattleBuffData_CheckIndividualitiesData___ctor(v17, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_25;
  BuffList_42092284 = BattleBuffData__getBuffList_42092284(buffData, attackAct, v17, 1, 0, 0LL, 0LL);
  if ( !BuffList_42092284 )
    goto LABEL_25;
  max_length = BuffList_42092284->max_length;
  v21 = BuffList_42092284;
  if ( max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
        sub_1B6432C(BuffList_42092284, v19);
      v23 = &v21->obj.klass + (int)v22;
      v24 = v23[4];
      if ( !v24 )
        break;
      if ( !BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)v23[4], 0LL)
        && !BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)v24, 0LL)
        && (BuffList_42092284 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCardBuff(
                                                                   (BattleBuffData_BuffData_o *)v24,
                                                                   0LL),
            ((unsigned __int8)BuffList_42092284 & 1) == 0)
        || (BuffList_42092284 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isActiveCommandCode(
                                                                   (BattleBuffData_BuffData_o *)v24,
                                                                   0LL),
            ((unsigned __int8)BuffList_42092284 & 1) != 0)
        || (BuffList_42092284 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCardBuff(
                                                                   (BattleBuffData_BuffData_o *)v24,
                                                                   0LL),
            ((unsigned __int8)BuffList_42092284 & 1) != 0)
        && LOBYTE(v24->_1.generic_class)
        || (BuffList_42092284 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                                   (BattleBuffData_BuffData_o *)v24,
                                                                   0LL),
            ((unsigned __int8)BuffList_42092284 & 1) != 0)
        && LOBYTE(v24->vtable[6].methodPtr) )
      {
        if ( !v13 )
          break;
        items = v13->fields._items;
        v28 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
        ++v13->fields._version;
        if ( !items )
          break;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v24,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v30[4] = v24;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
        }
      }
      max_length = v21->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B64324(BuffList_42092284);
  }
LABEL_23:
  if ( !v13 )
    goto LABEL_25;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v13,
                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getAttackSideEffectBuffList_42514128(
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
  System_Collections_Generic_List_object__o *v16; // x19
  void *AttackSideEffectBuffList; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x4
  __int64 v21; // x8
  unsigned __int64 v22; // x24
  System_Comparison_T__o *v23; // x20
  Il2CppObject *v24; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_49FEA6A & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_BattleBuffData_BuffData__TypeInfo, attackActs);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v13);
    sub_1B640C8(&Method_BattleServantData___c__getAttackSideEffectBuffList_b__456_0__, v14);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v15);
    byte_49FEA6A = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                       attackActs,
                                                       command);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !attackActs )
    goto LABEL_18;
  v21 = *(_QWORD *)&attackActs->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
        sub_1B6432C(AttackSideEffectBuffList, v18);
      AttackSideEffectBuffList = BattleServantData__getAttackSideEffectBuffList(
                                   this,
                                   attackActs->m_Items[v22 + 1],
                                   command,
                                   opSvt,
                                   v20);
      if ( !v16 )
        break;
      System_Collections_Generic_List_object___AddRange(
        v16,
        (System_Collections_Generic_IEnumerable_T__o *)AttackSideEffectBuffList,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      LODWORD(v21) = attackActs->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_9;
    }
LABEL_18:
    sub_1B64324(AttackSideEffectBuffList);
  }
LABEL_9:
  AttackSideEffectBuffList = BattleServantData___c_TypeInfo;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    AttackSideEffectBuffList = BattleServantData___c_TypeInfo;
  }
  v23 = *(System_Comparison_T__o **)(*((_QWORD *)AttackSideEffectBuffList + 23) + 64LL);
  if ( !v23 )
  {
    if ( !*((_DWORD *)AttackSideEffectBuffList + 56) )
    {
      j_il2cpp_runtime_class_init_0(AttackSideEffectBuffList);
      AttackSideEffectBuffList = BattleServantData___c_TypeInfo;
    }
    v24 = (Il2CppObject *)**((_QWORD **)AttackSideEffectBuffList + 23);
    v23 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BattleBuffData_BuffData__TypeInfo, v18, v19);
    System_Comparison_object____ctor(
      v23,
      v24,
      Method_BattleServantData___c__getAttackSideEffectBuffList_b__456_0__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__456_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__456_0, (int32_t)v23, v26, v27);
  }
  if ( !v16 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_55243320(
    v16,
    v23,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v16,
                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
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
  __int64 methodPtr_low; // x9
  BattleServantData_o *v10; // x0
  BattleCommandData_o *v11; // x1
  BattleServantData_o *v12; // x2
  int32_t *v13; // x3
  const MethodInfo *v14; // x4
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49FEA74 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, command);
    this = (BattleServantData_o *)sub_1B640C8(&ServantCardEntity_TypeInfo, v5);
    byte_49FEA74 = 1;
  }
  if ( !command )
    goto LABEL_12;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_12;
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
LABEL_12:
    sub_1B64324(this);
  }
  methodPtr_low = LOBYTE(ServantCardEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCardEntity_TypeInfo )
  {
    return this->fields.svtId.fields.fakeValue;
  }
  sub_1B645E4(this);
  return (unsigned int)BattleServantData__getAttackRaito(v10, v11, v12, v13, v14);
}


int32_t __fastcall BattleServantData__getAttri(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  AttriMaster_o *Master_object; // x0
  int32_t v7; // w20
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  struct ServantEntity_o *svtdata; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_49FEA3D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_AttriMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__, v5);
    byte_49FEA3D = 1;
  }
  buff = 0LL;
  entity = 0LL;
  if ( BattleServantData__TryGetOverwriteSubAttributeBuff(this, &buff, v2) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (AttriMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_AttriMaster___);
    if ( buff && Master_object )
    {
      LODWORD(Master_object) = AttriMaster__GetAttrValue(Master_object, buff->fields.param, 0LL);
      return (int)Master_object;
    }
LABEL_23:
    sub_1B64324(Master_object);
  }
  Master_object = (AttriMaster_o *)this->fields.deckSvt;
  if ( Master_object )
  {
    Master_object = (AttriMaster_o *)BattleDeckServantData__getChangeAttri(
                                       (BattleDeckServantData_o *)Master_object,
                                       0LL);
    if ( (_DWORD)Master_object )
    {
      v7 = (int)Master_object;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (AttriMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_AttriMaster___);
      if ( Master_object )
      {
        Master_object = (AttriMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &entity,
                                           v7,
                                           (const MethodInfo_30D3EF8 *)Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          LODWORD(Master_object) = 0;
          return (int)Master_object;
        }
        if ( entity )
        {
          LODWORD(Master_object) = HIDWORD(entity[1].klass);
          return (int)Master_object;
        }
      }
      goto LABEL_23;
    }
  }
  svtlimitaddent = this->fields.svtlimitaddent;
  if ( !svtlimitaddent
    || (Master_object = (AttriMaster_o *)(unsigned int)svtlimitaddent->fields.attri, (_DWORD)Master_object == -1) )
  {
    svtdata = this->fields.svtdata;
    if ( svtdata )
    {
      LODWORD(Master_object) = svtdata->fields.attri;
      return (int)Master_object;
    }
    goto LABEL_23;
  }
  return (int)Master_object;
}


System_Int32_array *__fastcall BattleServantData__getAuraIdList(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_object__o *AuraBuffList; // x0
  System_Collections_Generic_List_object__o *v7; // x20
  System_Int32_array *v8; // x19
  unsigned __int64 v9; // x21
  __int64 v10; // x1
  unsigned __int64 max_length; // x8

  if ( (byte_49FEADD & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v4);
    byte_49FEADD = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return this->fields.wkzero;
  AuraBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__getAuraBuffList(buffData, 0LL);
  if ( !AuraBuffList )
    goto LABEL_14;
  v7 = AuraBuffList;
  AuraBuffList = (System_Collections_Generic_List_object__o *)sub_1B64170(
                                                                int___TypeInfo,
                                                                (unsigned int)AuraBuffList->fields._size);
  if ( !AuraBuffList )
    goto LABEL_14;
  v8 = (System_Int32_array *)AuraBuffList;
  if ( AuraBuffList->fields._size >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      AuraBuffList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    v7,
                                                                    v9,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !AuraBuffList )
        break;
      max_length = v8->max_length;
      if ( v9 >= max_length )
        sub_1B6432C(AuraBuffList, v10);
      v8->m_Items[++v9] = AuraBuffList[1].fields._size;
      if ( (__int64)v9 >= (int)max_length )
        return v8;
    }
LABEL_14:
    sub_1B64324(AuraBuffList);
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
    sub_1B64324(this);
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
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  v9 = command;
  if ( (byte_49FEA3F & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA3F = 1;
  }
  value = 0;
  if ( !isAttack )
    v9 = 0LL;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
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
    sub_1B64324(buffData);
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
  if ( (byte_49FEA2A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&OptionManager_TypeInfo, v8);
    this = (BattleServantData_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FEA2A = 1;
  }
  deckSvt = v4->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_19;
  if ( !deckSvt->fields.isFollowerSvt )
    return 0LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetSpoilerSetting(0LL) || Follower__IsNpc(v4->fields.followerType, 0LL) )
    return 0LL;
  this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        svtId,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_19:
    sub_1B64324(this);
  }
  v11 = (ServantEntity_o *)this;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL) )
    return 0LL;
  DispLimitCount = BattleServantData__getDispLimitCount(v4, 0, v12);
  v15 = *(_QWORD *)&v4->fields.limitcount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v4->fields.limitcount.fields.fakeValue;
  v16 = DispLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(v16, v17, 0LL);
  return ServantEntity__getBattleName(v11, v4->fields.battleVoice != 0, LimitCountByDispLimit, 0LL);
}


float __fastcall BattleServantData__getBuffDamageValue(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_49FEAB3 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAB3 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return (float)BattleBuffData__getActValue_42105172(buffData, 13, v8, 0LL);
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
  BattleBuffData_o *buffData; // x23
  const MethodInfo *v13; // x4
  System_Int32_array *Individualities_42531456; // x24
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v16; // x2
  System_Int32_array *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Int32_array *v20; // x25
  BattleBuffData_CheckIndividualitiesData_o *v21; // x26
  __int64 v22; // x0
  int32_t v23; // w1

  if ( (byte_49FEABA & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffIndiv);
    sub_1B640C8(&int___TypeInfo, v11);
    byte_49FEABA = 1;
  }
  buffData = this->fields.buffData;
  Individualities_42531456 = BattleServantData__getIndividualities_42531456(this, buffIndiv, (const MethodInfo *)opSvt);
  if ( opSvt )
  {
    BuffIndividualities = BattleServantData__getBuffIndividualities(opSvt, 1, 0, 0, v13);
    v17 = BattleServantData__getIndividualities_42531456(opSvt, BuffIndividualities, v16);
  }
  else
  {
    v17 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  }
  v20 = v17;
  v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v18,
                                                       v19);
  BattleBuffData_CheckIndividualitiesData___ctor(v21, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v22);
  if ( upOnly )
    v23 = 106;
  else
    v23 = 36;
  return BattleBuffData__getActMag_42105968(
           buffData,
           v23,
           Individualities_42531456,
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v7; // x22
  __int64 v8; // x0

  if ( (byte_49FEABC & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, indiv);
    byte_49FEABC = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      indiv,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v8);
  return BattleBuffData__getActMag_42106216(buffData, 61, v7, 0LL);
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
    sub_1B64324(0LL);
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
        bool checkOnly,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_49FEA5A & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&buffAction);
    byte_49FEA5A = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&buffAction,
                                                      checkOnly);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getBuffList_42092284(buffData, buffAction, v8, 1, checkOnly, 0LL, 0LL);
}


float __fastcall BattleServantData__getBuffNonResistInstantDeath(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_49FEAAA & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_49FEAAA = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v7);
  return BattleBuffData__getActMag_42106216(buffData, 49, v6, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getBuffOverwriteClassRelationArray(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        bool isAct,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v10; // x24
  __int64 v11; // x0

  if ( (byte_49FEAC0 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAC0 = 1;
  }
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v11);
  return BattleBuffData__getBuffList_42092284(buffData, 87, v10, isAct, 0, 0LL, 0LL);
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
      return BattleUtility__FloorToInt_42668820(
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_49FEAAB & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_49FEAAB = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v7);
  return BattleBuffData__getActMag_42106216(buffData, 68, v6, 0LL);
}


float __fastcall BattleServantData__getBuffResistInstantDeath(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_49FEAA9 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_49FEAA9 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v7);
  return BattleBuffData__getActMag_42106216(buffData, 48, v6, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  BattleBuffData_CheckIndividualitiesData_o *v12; // x23
  int32_t v13; // w1

  v6 = this;
  if ( (byte_49FEAB4 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAB4 = 1;
  }
  if ( !targetSvt
    || (v7 = BattleServantData__CheckPierceSubdamage(targetSvt, command, v6, method),
        buffData = v6->fields.buffData,
        v9 = v7,
        v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v10,
                                                             v11),
        BattleBuffData_CheckIndividualitiesData___ctor(v12, v6, targetSvt, 0LL, command, 0LL, 0LL),
        !buffData) )
  {
    sub_1B64324(this);
  }
  if ( v9 )
    v13 = 133;
  else
    v13 = 14;
  return (float)BattleBuffData__getActValue_42105172(buffData, v13, v12, 0LL);
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
    return BattleUtility__FloorToInt_42668820(v9 * v10, 0LL);
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
    return BattleUtility__FloorToInt_42668820(v9 * v10, 0LL);
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
  System_Int32_array *Individualities_42531456; // x24
  BattleBuffData_CheckIndividualitiesData_o *v15; // x25
  __int64 v16; // x0

  v7 = buffIndiv;
  if ( (byte_49FEABB & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, buffIndiv);
    byte_49FEABB = 1;
  }
  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, method);
  Individualities_42531456 = BattleServantData__getIndividualities_42531456(this, BuffIndividualities, v11);
  if ( opSvt )
    v7 = BattleServantData__getIndividualities_42531456(opSvt, v7, v13);
  v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v12,
                                                       v13);
  BattleBuffData_CheckIndividualitiesData___ctor(v15, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v16);
  return BattleBuffData__getActMag_42105968(buffData, 37, Individualities_42531456, v7, missText, v15, 0LL, 0LL);
}


float __fastcall BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
        BattleServantData_o *this,
        System_Int32_array *indiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_42531456; // x20
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  Individualities_42531456 = indiv;
  if ( (byte_49FEABD & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, indiv);
    byte_49FEABD = 1;
  }
  buffData = this->fields.buffData;
  if ( opSvt )
    Individualities_42531456 = BattleServantData__getIndividualities_42531456(
                                 opSvt,
                                 Individualities_42531456,
                                 (const MethodInfo *)opSvt);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      indiv,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor_42147648(v8, this, opSvt, 0LL, Individualities_42531456, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getActMag_42106216(buffData, 62, v8, 0LL);
}


int32_t __fastcall BattleServantData__getCameraActionId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_1B64324(0LL);
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
      sub_1B64324(npcSvtClassId);
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
      sub_1B64324(npcSvtClassId);
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
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  struct ServantEntity_o *v20; // x8

  if ( (byte_49FEA38 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&commandTypeBit);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_49FEA38 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   *(_QWORD *)&commandTypeBit,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_20;
  cardIds = svtdata->fields.cardIds;
  if ( !cardIds )
    goto LABEL_20;
  v14 = *(_QWORD *)&cardIds->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
        sub_1B6432C(v10, v11);
      v11 = (unsigned int)cardIds->m_Items[v15 + 1];
      if ( (((unsigned int)commandTypeBit >> (v11 - 1)) & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_20;
        items = v9->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            v11,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size + 1] = v11;
        }
      }
      LODWORD(v14) = cardIds->max_length;
    }
    while ( (__int64)++v15 < (int)v14 );
  }
  if ( !v9 )
    goto LABEL_20;
  if ( v9->fields._size > 0 )
    return System_Collections_Generic_List_int___ToArray(
             v9,
             (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  v20 = this->fields.svtdata;
  if ( !v20 )
LABEL_20:
    sub_1B64324(v10);
  return v20->fields.cardIds;
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
  float ActMag_42106216; // s0
  float v23; // s9
  float v24; // s0

  v6 = this;
  if ( (byte_49FEA94 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    sub_1B640C8(&StringLiteral_5470/*"ENEMY_ATTACK_RATE_ARTS"*/, v7);
    sub_1B640C8(&StringLiteral_5471/*"ENEMY_ATTACK_RATE_BUSTER"*/, v8);
    this = (BattleServantData_o *)sub_1B640C8(&StringLiteral_5472/*"ENEMY_ATTACK_RATE_QUICK"*/, v9);
    byte_49FEA94 = 1;
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
      v11 = &StringLiteral_5472/*"ENEMY_ATTACK_RATE_QUICK"*/;
      goto LABEL_11;
    }
    v13 = BattleCommandData__getCommandType(command, 0LL);
    if ( BattleCommand__isBUSTER(v13, 0LL) )
    {
      v11 = &StringLiteral_5471/*"ENEMY_ATTACK_RATE_BUSTER"*/;
      goto LABEL_11;
    }
LABEL_12:
    Magnification = BattleCommand__getMagnification(command, 0LL);
    goto LABEL_13;
  }
  v11 = &StringLiteral_5470/*"ENEMY_ATTACK_RATE_ARTS"*/;
LABEL_11:
  Magnification = ConstantMaster__getRateValue((System_String_o *)*v11, 0LL);
LABEL_13:
  v17 = Magnification;
  v18 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v14,
                                                       v15);
  BattleBuffData_CheckIndividualitiesData___ctor(v18, v6, targetSvt, command, 0LL, 0LL, 0LL);
  v21 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v19,
                                                       v20);
  BattleBuffData_CheckIndividualitiesData___ctor(v21, targetSvt, v6, 0LL, command, 0LL, 0LL);
  this = (BattleServantData_o *)v6->fields.buffData;
  if ( !this
    || (ActMag_42106216 = BattleBuffData__getActMag_42106216((BattleBuffData_o *)this, 1, v18, 0LL), !targetSvt)
    || (this = (BattleServantData_o *)targetSvt->fields.buffData) == 0LL
    || (v23 = ActMag_42106216, v24 = BattleBuffData__getActMag_42106216((BattleBuffData_o *)this, 2, v21, 0LL), !command) )
  {
LABEL_18:
    sub_1B64324(this);
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
  float ActMag_42106216; // s0
  float v16; // s9
  float v17; // s0

  if ( (byte_49FEA95 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA95 = 1;
  }
  NpMagnification = BattleCommand__getNpMagnification(command, 0LL);
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v8,
                                                       v9);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12);
  BattleBuffData_CheckIndividualitiesData___ctor(v13, opSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_42106216 = BattleBuffData__getActMag_42106216(buffData, 22, v10, 0LL), !opSvt)
    || (buffData = opSvt->fields.buffData) == 0LL
    || (v16 = ActMag_42106216, v17 = BattleBuffData__getActMag_42106216(buffData, 23, v13, 0LL), !command) )
  {
    sub_1B64324(buffData);
  }
  return (float)(NpMagnification * fmaxf((float)(v16 + 1.0) - v17, 0.0))
       + (float)((float)command->fields.addTdGauge / 1000.0);
}


int32_t __fastcall BattleServantData__getCommandDispLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int dressDispId; // w20
  __int64 v7; // x20
  __int64 v8; // x21
  int32_t v9; // w19
  int32_t LimitCountByImageLimit; // w0
  __int64 v11; // x20
  __int64 v12; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v15; // x23
  __int64 v16; // x24
  ServantLimitAddMaster_o *v17; // x22
  int32_t v18; // w0
  __int64 v19; // x8
  int32_t v20; // w19
  int32_t battleCharaLimitCount; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr00_16
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_49FEA44 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, method);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v3);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FEA44 = 1;
  }
  entity = 0LL;
  dressDispId = this->fields.dressDispId;
  if ( dressDispId > 0 )
    return dressDispId;
  v8 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v8;
  *(_QWORD *)&v25.fields.fakeValue = v7;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v25, 0LL) )
  {
    v11 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v12 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( this->fields.isEnemy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_30;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v17 = (ServantLimitAddMaster_o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v28.fields.currentCryptoKey = v16;
      *(_QWORD *)&v28.fields.fakeValue = v15;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
      v19 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v29.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v20 = v18;
      *(_QWORD *)&v29.fields.currentCryptoKey = v19;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v29, 0LL);
      if ( !v17 )
        goto LABEL_30;
      Instance = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v17, &entity, v20, (int32_t)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
        {
          battleCharaLimitCount = entity->fields.battleCharaLimitCount;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          LimitCountByImageLimit = battleCharaLimitCount;
          goto LABEL_25;
        }
LABEL_30:
        sub_1B64324(Instance);
      }
    }
LABEL_26:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v11;
    *(_QWORD *)&v30.fields.fakeValue = v12;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v30, 0LL);
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v8;
  *(_QWORD *)&v26.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v26, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v8;
  *(_QWORD *)&v27.fields.fakeValue = v7;
  dressDispId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v27, 0LL);
  if ( v9 <= 10 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(dressDispId - 1, 0LL);
LABEL_25:
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
    v12 = *(_QWORD *)&v22.fields.fakeValue;
    v11 = *(_QWORD *)&v22.fields.currentCryptoKey;
    goto LABEL_26;
  }
  return dressDispId;
}


System_Int32_array *__fastcall BattleServantData__getCommandList(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_1B64324(this);
  return svtdata->fields.cardIds;
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getCommandSideEffect(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_49FEA5F & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA5F = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getBuffList_42092284(buffData, 57, v8, 1, 0, 0LL, 0LL);
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
  float ActMag_42106216; // s0
  float v16; // s9
  float v17; // s0

  if ( (byte_49FEA96 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA96 = 1;
  }
  CriticalMagnification = BattleCommand__getCriticalMagnification(command, 0LL);
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v8,
                                                       v9);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL);
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12);
  BattleBuffData_CheckIndividualitiesData___ctor(v13, opSvt, this, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_42106216 = BattleBuffData__getActMag_42106216(buffData, 26, v10, 0LL), !opSvt)
    || (buffData = opSvt->fields.buffData) == 0LL
    || (v16 = ActMag_42106216, v17 = BattleBuffData__getActMag_42106216(buffData, 27, v13, 0LL), !command) )
  {
    sub_1B64324(buffData);
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

  if ( (byte_49FEA9E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, command);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_49FEA9E = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    command,
                                                    isIncludeIgnoreIndiv);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getIndividualities(
                                                                     this,
                                                                     command,
                                                                     v15);
  if ( !v14 )
    sub_1B64324(Individualities);
  System_Collections_Generic_List_int___AddRange(
    v14,
    Individualities,
    (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                         this,
                                                                         isActiveOnly,
                                                                         isIncludeIgnoreIndiv,
                                                                         isIgnoreIndivUnreleaseable,
                                                                         v17);
  System_Collections_Generic_List_int___AddRange(
    v14,
    BuffIndividualities,
    (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleServantData__getConcatSvtIndividualities(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        System_Int32_array *addIndividualityArray,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Individualities; // x21
  const MethodInfo *v9; // x4
  System_Collections_Generic_IEnumerable_TSource__o *BuffIndividualities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20

  if ( (byte_49FEA9D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Concat_int___, command);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    byte_49FEA9D = 1;
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
                                                                               v9);
  v11 = System_Linq_Enumerable__Concat_int_(
          Individualities,
          BuffIndividualities,
          (const MethodInfo_2E52718 *)Method_System_Linq_Enumerable_Concat_int___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividualityArray, 0LL) )
    v11 = System_Linq_Enumerable__Concat_int_(
            v11,
            (System_Collections_Generic_IEnumerable_TSource__o *)addIndividualityArray,
            (const MethodInfo_2E52718 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v11,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_49FEADB & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData_ConnectData_TypeInfo, method);
    byte_49FEADB = 1;
  }
  uniqueId = this->fields.uniqueId;
  v4 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  atk = this->fields.atk;
  v6 = v4;
  v9 = (BattleServantData_ConnectData_o *)sub_1B64314(BattleServantData_ConnectData_TypeInfo, v7, v8);
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

  if ( (byte_49FEAA8 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&tmpVal);
    byte_49FEAA8 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&tmpVal,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v7);
  return BattleBuffData__getActValue_42105172(buffData, 71, v6, 0LL) * tmpVal / 1000;
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
    sub_1B64324(UpDownCriticalRate);
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
  if ( (byte_49FEAC7 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAC7 = 1;
  }
  svtlimitent = v4->fields.svtlimitent;
  if ( !svtlimitent
    || (criticalWeight = svtlimitent->fields.criticalWeight,
        buffData = v4->fields.buffData,
        v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            command,
                                                            method),
        BattleBuffData_CheckIndividualitiesData___ctor(v8, v4, 0LL, command, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_1B64324(this);
  }
  v9 = BattleBuffData__getActMag_42106216(buffData, 29, v8, 0LL) * (float)criticalWeight;
  return BattleUtility__FloorToInt(v9, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDamageSideEffect(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_49FEA62 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA62 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getBuffList_42092284(buffData, 64, v8, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDeadAttackSideEffect(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        BattleCommandData_o *deadAttackcommand,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_49FEA60 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_49FEA60 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      deadAttackcommand);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, deadAttackcommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getBuffList_42092284(buffData, 58, v8, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDeadBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        bool isAllReturnDeadBuff,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x22
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleBuffData_BuffData_array *result; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  BattleBuffData_BuffData_array *v14; // x19
  System_Collections_Generic_List_object__o *v15; // x20
  const MethodInfo *v16; // x1
  int32_t RevengeTargetUniqueIdFromOpponent; // w21
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  int max_length; // w8
  int32_t v21; // w22
  unsigned int v22; // w24
  Il2CppClass **v23; // x8
  Il2CppObject *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w8
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  v6 = this;
  if ( (byte_49FEA5B & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_BuffData___TypeInfo, data);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v9);
    this = (BattleServantData_o *)sub_1B640C8(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10);
    byte_49FEA5B = 1;
  }
  if ( !data )
    goto LABEL_27;
  this = (BattleServantData_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_27;
  if ( (((__int64 (__fastcall *)(BattleServantData_o *, BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._20_GetLogicServantAi.method)(
          this,
          v6,
          this->klass->vtable._21_getThisTurnActCount.methodPtr,
          method) & 1) != 0 )
    return (BattleBuffData_BuffData_array *)sub_1B64170(BattleBuffData_BuffData___TypeInfo, 0LL);
  this = (BattleServantData_o *)v6->fields.buffData;
  if ( !this )
LABEL_27:
    sub_1B64324(this);
  result = BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(
             (BattleBuffData_o *)this,
             51,
             data,
             v6,
             1,
             0LL);
  v14 = result;
  if ( !isAllReturnDeadBuff )
  {
    v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                         v12,
                                                         v13);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    RevengeTargetUniqueIdFromOpponent = BattleServantData__getRevengeTargetUniqueIdFromOpponent(v6, v16);
    this = (BattleServantData_o *)BattleServantData__getRevengeTargetUniqueId(v6, v18);
    if ( !v14 )
      goto LABEL_27;
    max_length = v14->max_length;
    if ( max_length >= 1 )
    {
      v21 = (int)this;
      v22 = 0;
      do
      {
        if ( v22 >= max_length )
          sub_1B6432C(this, v19);
        v23 = &v14->obj.klass + (int)v22;
        v24 = (Il2CppObject *)v23[4];
        if ( !v24 )
          goto LABEL_27;
        this = (BattleServantData_o *)BattleBuffData_BuffData__checkState(
                                        (BattleBuffData_BuffData_o *)v23[4],
                                        2048,
                                        0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          v27 = RevengeTargetUniqueIdFromOpponent;
        else
          v27 = v21;
        if ( (v27 & 0x80000000) == 0
          || (this = (BattleServantData_o *)BattleBuffData_BuffData__checkState(
                                              (BattleBuffData_BuffData_o *)v24,
                                              0x40000,
                                              0LL),
              ((unsigned __int8)this & 1) == 0) )
        {
          if ( !v15 )
            goto LABEL_27;
          items = v15->fields._items;
          v29 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_27;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              v24,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v24;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v24, v25, v26);
          }
        }
        max_length = v14->max_length;
      }
      while ( (int)++v22 < max_length );
    }
    if ( !v15 )
      goto LABEL_27;
    return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                              v15,
                                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  }
  return result;
}


int32_t __fastcall BattleServantData__getDeadTargetUniqueId(BattleServantData_o *this, const MethodInfo *method)
{
  System_Object_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v6; // x8

  if ( (byte_49FEAD5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_49FEAD5 = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_9;
  v5 = *(_QWORD *)&v3->max_length;
  if ( v5 )
  {
    if ( !(_DWORD)v5 )
      sub_1B6432C(v3, v4);
    v6 = *(__int64 *)((char *)v3->m_Items + (((v5 << 32) - 0x100000000LL) >> 29));
    if ( v6 )
      return *(_DWORD *)(v6 + 20);
LABEL_9:
    sub_1B64324(v3);
  }
  return -1;
}


float __fastcall BattleServantData__getDeathRate(BattleServantData_o *this, const MethodInfo *method)
{
  return (float)this->fields.deathRate / 1000.0;
}


int32_t __fastcall BattleServantData__getDeckIndex(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 20LL;
  if ( this->fields.deckIndex < 0 )
    v2 = 16LL;
  return *(_DWORD *)((char *)&this->klass + v2);
}


int32_t __fastcall BattleServantData__getDefeatPoint(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B64324(0LL);
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
      sub_1B64324(0LL);
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
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w20
  int32_t v12; // w19
  int32_t LimitCountByImageLimit; // w0
  __int64 v14; // x19
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
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
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_49FEA45 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, changeImageLimit);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FEA45 = 1;
  }
  entity = 0LL;
  result = this->fields.dressDispId;
  if ( result <= 0 )
  {
    v10 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v10;
    *(_QWORD *)&v29.fields.fakeValue = v9;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v29, 0LL) )
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v30.fields.currentCryptoKey = v10;
      *(_QWORD *)&v30.fields.fakeValue = v9;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v30, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v31.fields.currentCryptoKey = v10;
      if ( v11 >= 11 )
        goto LABEL_32;
      *(_QWORD *)&v31.fields.fakeValue = v9;
      if ( !changeImageLimit )
      {
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Decrement(v31, 0LL);
        v25 = *(_QWORD *)&v27.fields.fakeValue;
        v24 = *(_QWORD *)&v27.fields.currentCryptoKey;
        goto LABEL_28;
      }
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v31, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v12 - 1, 0LL);
LABEL_26:
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
      v25 = *(_QWORD *)&v26.fields.fakeValue;
      v24 = *(_QWORD *)&v26.fields.currentCryptoKey;
LABEL_28:
      v14 = v24;
      v9 = v25;
      goto LABEL_29;
    }
    v14 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( this->fields.isEnemy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_34;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v18 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v19 = (ServantLimitAddMaster_o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v32.fields.currentCryptoKey = v18;
      *(_QWORD *)&v32.fields.fakeValue = v17;
      v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v32, 0LL);
      v21 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v33.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v22 = v20;
      *(_QWORD *)&v33.fields.currentCryptoKey = v21;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v33, 0LL);
      if ( !v19 )
        goto LABEL_34;
      Instance = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v19, &entity, v22, (int32_t)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
        {
          battleCharaLimitCount = entity->fields.battleCharaLimitCount;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          LimitCountByImageLimit = battleCharaLimitCount;
          goto LABEL_26;
        }
LABEL_34:
        sub_1B64324(Instance);
      }
    }
LABEL_29:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v31.fields.currentCryptoKey = v14;
LABEL_32:
    *(_QWORD *)&v31.fields.fakeValue = v9;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v31, 0LL);
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
    sub_1B64324(0LL);
  return ServantEntity__getDressId(svtdata, 0LL);
}


DropInfo_array *__fastcall BattleServantData__getDropItem(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.droplist;
}


int32_t __fastcall BattleServantData__getEffectFolder(BattleServantData_o *this, const MethodInfo *method)
{
  ServantLimitAddMaster_c *v3; // x0
  ServantLimitAddEntity_o *svtlimitaddent; // x20
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  if ( (byte_49FEA42 & 1) == 0 )
  {
    sub_1B640C8(&ServantLimitAddMaster_TypeInfo, method);
    byte_49FEA42 = 1;
  }
  v3 = ServantLimitAddMaster_TypeInfo;
  svtlimitaddent = this->fields.svtlimitaddent;
  if ( !ServantLimitAddMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantLimitAddMaster_TypeInfo);
  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_1B64324(v3);
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
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEA63 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA63 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
  return BattleBuffData__getBuffList_42092284(buffData, 76, v5, 1, 0, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getFixCommandCardBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEA5E & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA5E = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
  return BattleBuffData__getBuffList_42092284(buffData, 74, v5, 1, 0, 0LL, 0LL);
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

  if ( (byte_49FEAAE & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_49FEAAE = 1;
  }
  if ( isTreasureDevice )
    TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, (const MethodInfo *)opSvt);
  else
    TreasureDvcCommand = 0LL;
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      isTreasureDevice);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, TreasureDvcCommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v10);
  return BattleBuffData__getActMag_42106216(buffData, 63, v9, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getGutsBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B64324(0LL);
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
  System_Collections_Generic_List_int__o *v9; // x20
  const MethodInfo *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *CriticalIndividuality; // x0
  System_Collections_Generic_IEnumerable_T__o *Individualities; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerable_T__o *klass; // x1
  const MethodInfo_34900E8 *v20; // x2
  const MethodInfo *v21; // x2
  System_Int32_array *ServantCommandIndividuality; // x0
  System_Collections_Generic_IEnumerable_int__o *v23; // x0

  if ( (byte_49FEACC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, command);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_49FEACC = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   command,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( command )
  {
    if ( command->fields.critical )
    {
      CriticalIndividuality = (const MethodInfo *)BattleServantData__get_CriticalIndividuality(v10);
      if ( (_DWORD)CriticalIndividuality != -1 )
      {
        Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__get_CriticalIndividuality(CriticalIndividuality);
        if ( !v9 )
          goto LABEL_20;
        items = v9->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            (int32_t)Individualities,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v9->fields._size = size + 1;
          items->m_Items[size + 1] = (int)Individualities;
        }
      }
    }
    if ( !BattleCommandData__isTreasureDvc(command, 0LL) )
    {
      Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleCommandData__getIndividualities(
                                                                         command,
                                                                         0LL);
      if ( v9 )
      {
        System_Collections_Generic_List_int___AddRange(
          v9,
          Individualities,
          (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
        ServantCommandIndividuality = BattleServantData__getServantCommandIndividuality(this, command, v21);
        v20 = (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__;
        klass = (System_Collections_Generic_IEnumerable_T__o *)ServantCommandIndividuality;
        goto LABEL_18;
      }
LABEL_20:
      sub_1B64324(Individualities);
    }
    if ( BattleServantData__get_TreasureDevice(this, v17) )
    {
      Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__get_TreasureDevice(this, v18);
      if ( Individualities && v9 )
      {
        klass = (System_Collections_Generic_IEnumerable_T__o *)Individualities[4].klass;
        v20 = (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_18:
        System_Collections_Generic_List_int___AddRange(v9, klass, v20);
        goto LABEL_19;
      }
      goto LABEL_20;
    }
  }
LABEL_19:
  v23 = BattleServantData__EnumerateIndividuality(this, (System_Collections_Generic_IEnumerable_int__o *)v9, v11);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v23,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleServantData__getIndividualities_42531456(
        BattleServantData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_int__o *v5; // x0

  if ( (byte_49FEACD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, addIndiv);
    byte_49FEACD = 1;
  }
  v5 = BattleServantData__EnumerateIndividuality(
         this,
         (System_Collections_Generic_IEnumerable_int__o *)addIndiv,
         method);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5,
           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleServantData__getLevel(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.level;
}


System_String_o *__fastcall BattleServantData__getLevelLabel(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t level; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FEA41 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v3);
    byte_49FEA41 = 1;
  }
  level = this->fields.level;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &level);
  return System_String__Format((System_String_o *)StringLiteral_24883/*"{0}"*/, v4, 0LL);
}


int32_t __fastcall BattleServantData__getLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_49FEA43 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FEA43 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v6, 0LL);
}


int32_t __fastcall BattleServantData__getLimitImageIndex(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t SvtId; // w20
  const MethodInfo *v4; // x2
  int32_t DispLimitCount; // w19

  if ( (byte_49FEA47 & 1) == 0 )
  {
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, method);
    byte_49FEA47 = 1;
  }
  SvtId = BattleServantData__getSvtId(this, method);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v4);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
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

  if ( (byte_49FEA79 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_15838/*"[BattleServantData.getMaxHp] buffData is null"*/, v5);
    byte_49FEA79 = 1;
  }
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  buffData = (CrashReporter_o *)this->fields.buffData;
  if ( !buffData
    && ((buffData = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0LL
     || (CrashReporter__SendReport_30233584(buffData, (System_String_o *)StringLiteral_15838/*"[BattleServantData.getMaxHp] buffData is null"*/, 0LL, 0LL, 0LL),
         (buffData = (CrashReporter_o *)this->fields.buffData) == 0LL))
    || (maxhp = this->fields.maxhp,
        buffData = (CrashReporter_o *)BattleBuffData__getActValue_42105172((BattleBuffData_o *)buffData, 52, v6, 0LL),
        (v9 = this->fields.buffData) == 0LL) )
  {
    sub_1B64324(buffData);
  }
  v10 = (int)buffData * maxhp / 1000 + maxhp + BattleBuffData__getActValue_42105172(v9, 53, v6, 0LL);
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
  __int64 methodPtr_low; // x9
  BattleServantData_o *v10; // x0
  BattleCommandData_o *v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49FEA73 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, command);
    this = (BattleServantData_o *)sub_1B640C8(&ServantCardEntity_TypeInfo, v5);
    byte_49FEA73 = 1;
  }
  if ( !command )
    goto LABEL_12;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_12;
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
LABEL_12:
    sub_1B64324(this);
  }
  methodPtr_low = LOBYTE(ServantCardEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCardEntity_TypeInfo )
  {
    return this->fields.uniqueId;
  }
  sub_1B645E4(this);
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
    sub_1B64324(0LL);
  return BattleBuffData__getBuffList_42092284(buffData, 73, checkIndividualities, 1, 0, 0LL, 0LL);
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

  if ( (byte_49FEAC5 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEAC5 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 39, v5, 0, 0LL),
        v8 = this->fields.buffData,
        v9 = isTurnBuff,
        v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v10,
                                                             v11),
        BattleBuffData_CheckIndividualitiesData___ctor(v12, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v8) )
  {
    sub_1B64324(v6);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  return BattleDeckServantData__getTDName(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDRuby(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_1B64324(0LL);
  return BattleDeckServantData__getTDRuby(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDVoice(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_1B64324(0LL);
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
  void *All; // x0
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *v10; // x20
  Il2CppObject *v11; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FEA35 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__, v4);
    sub_1B640C8(&System_Predicate_BattleSkillInfoData__TypeInfo, v5);
    sub_1B640C8(&Method_BattleServantData___c__getPassiveSkills_b__329_0__, v6);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v7);
    byte_49FEA35 = 1;
  }
  All = BattleServantData___c_TypeInfo;
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    All = BattleServantData___c_TypeInfo;
  }
  v10 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 40LL);
  if ( !v10 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleServantData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)**((_QWORD **)All + 23);
    v10 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleSkillInfoData__TypeInfo, method, v2);
    System_Predicate_object____ctor(v10, v11, Method_BattleServantData___c__getPassiveSkills_b__329_0__, 0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__329_0 = (struct System_Predicate_BattleSkillInfoData__o *)v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__329_0, (int32_t)v10, v13, v14);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_object___FindAll(
                skillInfoList,
                (System_Predicate_T__o *)v10,
                (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_1B64324(All);
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)All,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


int32_t __fastcall BattleServantData__getRarity(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEA61 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA61 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
  return BattleBuffData__getBuffList_42092284(buffData, 65, v5, 1, 0, 0LL, 0LL);
}


int32_t __fastcall BattleServantData__getRevengeTargetUniqueId(BattleServantData_o *this, const MethodInfo *method)
{
  System_Object_array *isDamage; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  System_Object_array *v6; // x20
  unsigned int v7; // w21
  Il2CppClass **v8; // x22
  char *v9; // x22
  System_Object_array *v10; // t1

  if ( (byte_49FEAD3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_49FEAD3 = 1;
  }
  isDamage = System_Linq_Enumerable__ToArray_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
               (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !isDamage )
    goto LABEL_16;
  v5 = *(_QWORD *)&isDamage->max_length;
  v6 = isDamage;
  v7 = v5 - 1;
  if ( (int)v5 - 1 >= 0 )
  {
    if ( v7 >= (unsigned int)v5 )
LABEL_13:
      sub_1B6432C(isDamage, v4);
    while ( 1 )
    {
      v8 = &v6->obj.klass + v7;
      v10 = (System_Object_array *)v8[4];
      v9 = (char *)(v8 + 4);
      isDamage = v10;
      if ( !v10 )
        break;
      isDamage = (System_Object_array *)BattleServantActionHistory__isDamage(
                                          (BattleServantActionHistory_o *)isDamage,
                                          0LL);
      if ( ((unsigned __int8)isDamage & 1) != 0 )
      {
        if ( v7 >= v6->max_length )
          goto LABEL_13;
        if ( !*(_QWORD *)v9 )
          break;
        isDamage = (System_Object_array *)*(unsigned int *)(*(_QWORD *)v9 + 20LL);
        if ( (_DWORD)isDamage != this->fields.uniqueId )
          return (int)isDamage;
      }
      if ( (--v7 & 0x80000000) != 0 )
        goto LABEL_14;
      if ( v7 >= v6->max_length )
        goto LABEL_13;
    }
LABEL_16:
    sub_1B64324(isDamage);
  }
LABEL_14:
  LODWORD(isDamage) = -1;
  return (int)isDamage;
}


int32_t __fastcall BattleServantData__getRevengeTargetUniqueIdFromOpponent(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  System_Object_array *isDamage; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  System_Object_array *v6; // x20
  unsigned int v7; // w21
  Il2CppClass **v8; // x22
  __int64 *v9; // x22
  System_Object_array *v10; // t1
  __int64 v11; // x8

  if ( (byte_49FEAD4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___, method);
    byte_49FEAD4 = 1;
  }
  isDamage = System_Linq_Enumerable__ToArray_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
               (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !isDamage )
    goto LABEL_17;
  v5 = *(_QWORD *)&isDamage->max_length;
  v6 = isDamage;
  v7 = v5 - 1;
  if ( (int)v5 - 1 >= 0 )
  {
    if ( v7 >= (unsigned int)v5 )
LABEL_14:
      sub_1B6432C(isDamage, v4);
    while ( 1 )
    {
      v8 = &v6->obj.klass + v7;
      v10 = (System_Object_array *)v8[4];
      v9 = (__int64 *)(v8 + 4);
      isDamage = v10;
      if ( !v10 )
        break;
      isDamage = (System_Object_array *)BattleServantActionHistory__isDamage(
                                          (BattleServantActionHistory_o *)isDamage,
                                          0LL);
      if ( ((unsigned __int8)isDamage & 1) != 0 )
      {
        if ( v7 >= v6->max_length )
          goto LABEL_14;
        v11 = *v9;
        if ( !*v9 )
          break;
        if ( *(_BYTE *)(v11 + 28) )
        {
          isDamage = (System_Object_array *)*(unsigned int *)(v11 + 20);
          if ( (_DWORD)isDamage != this->fields.uniqueId )
            return (int)isDamage;
        }
      }
      if ( (--v7 & 0x80000000) != 0 )
        goto LABEL_15;
      if ( v7 >= v6->max_length )
        goto LABEL_14;
    }
LABEL_17:
    sub_1B64324(isDamage);
  }
LABEL_15:
  LODWORD(isDamage) = -1;
  return (int)isDamage;
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
    sub_1B64324(0LL);
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
  int32_t v6; // w8
  __int64 v7; // x9
  __int64 v8; // x10
  signed int max_length; // w11
  int v10; // w13

  Individualities = BattleServantData__getIndividualities(this, 0LL, method);
  if ( !Individualities )
    goto LABEL_17;
  v6 = 0;
  if ( (int)*(_QWORD *)&Individualities->max_length >= 1 )
  {
    v7 = (unsigned int)*(_QWORD *)&Individualities->max_length;
    v6 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 == v7 )
LABEL_16:
        sub_1B6432C(Individualities, v5);
      if ( !checkIndvArray )
        break;
      max_length = checkIndvArray->max_length;
      if ( max_length >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          if ( max_length == v10 )
            goto LABEL_16;
          if ( Individualities->m_Items[v8 + 1] == checkIndvArray->m_Items[v10 + 1] )
            break;
          if ( max_length == ++v10 )
            goto LABEL_14;
        }
        ++v6;
      }
LABEL_14:
      if ( ++v8 == v7 )
        return v6;
    }
LABEL_17:
    sub_1B64324(Individualities);
  }
  return v6;
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x19
  AiState_o *aiState; // x0
  AiState_SaveData_o *SaveData; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  AiStateManager_SaveData_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  BattleBuffData_SaveData_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x8
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v33; // x8
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  unsigned __int64 v39; // x24
  __int64 v40; // x26
  BattleSkillInfoData_o *v41; // x25
  __int64 v42; // x1
  __int64 v43; // x26
  struct System_String_o *statestring; // x1
  struct System_Int32_array *commandAssistIds; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x1
  __int64 v49; // x2
  BattleServantData___c_c *v50; // x0
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x21
  System_Func_T__TResult__o *_9__292_0; // x22
  Il2CppObject *v53; // x23
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Object_array *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  BattleServantData___c_c *v61; // x0
  struct System_Collections_Generic_List_BattlePointData__o *battlePointList; // x20
  System_Func_object__object__o *_9__292_1; // x21
  Il2CppObject *v64; // x22
  struct BattleServantData___c_StaticFields *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Object_array *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3

  if ( (byte_49FEA1C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattlePointData__BattlePointData_SaveData___, data);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___,
      v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleServantData_PartAnimationSaveData___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattlePointData_SaveData___, v7);
    sub_1B640C8(&System_Func_BattlePointData__BattlePointData_SaveData__TypeInfo, v8);
    sub_1B640C8(
      &System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__TypeInfo,
      v9);
    sub_1B640C8(&int___TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v12);
    sub_1B640C8(&BattleServantData_SaveData_TypeInfo, v13);
    sub_1B640C8(&Method_BattleServantData___c__getSaveData_b__292_0__, v14);
    sub_1B640C8(&Method_BattleServantData___c__getSaveData_b__292_1__, v15);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v16);
    byte_49FEA1C = 1;
  }
  v17 = sub_1B64314(BattleServantData_SaveData_TypeInfo, data, method);
  BattleServantData_SaveData___ctor((BattleServantData_SaveData_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_36;
  *(_DWORD *)(v17 + 16) = this->fields.index;
  *(_DWORD *)(v17 + 20) = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                            this,
                            this->klass->vtable._10_set_hp.methodPtr);
  *(_DWORD *)(v17 + 72) = this->fields.deckIndex;
  *(_DWORD *)(v17 + 24) = this->fields.np;
  *(_DWORD *)(v17 + 28) = this->fields.nexttpturn;
  *(_DWORD *)(v17 + 32) = this->fields.isEntry;
  *(_DWORD *)(v17 + 36) = this->fields.isDeadAnime;
  aiState = this->fields.aiState;
  if ( !aiState )
    goto LABEL_36;
  SaveData = AiState__getSaveData(aiState, 0LL);
  *(_QWORD *)(v17 + 56) = SaveData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 56), (int32_t)SaveData, v20, v21);
  aiState = (AiState_o *)BattleServantData__get_AiStateManager(this, v22);
  if ( !aiState )
    goto LABEL_36;
  v23 = AiStateManager__GetSaveData((AiStateManager_o *)aiState, 0LL);
  *(_QWORD *)(v17 + 192) = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 192), (int32_t)v23, v24, v25);
  aiState = (AiState_o *)this->fields.buffData;
  if ( !aiState )
    goto LABEL_36;
  v26 = BattleBuffData__getSaveData((BattleBuffData_o *)aiState, 0LL);
  *(_QWORD *)(v17 + 64) = v26;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 64), (int32_t)v26, v27, v28);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_36;
  v30 = sub_1B64170(int___TypeInfo, (unsigned int)skillInfoList->fields._size);
  *(_QWORD *)(v17 + 40) = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 40), v30, v31, v32);
  v33 = this->fields.skillInfoList;
  if ( !v33 )
    goto LABEL_36;
  v34 = sub_1B64170(int___TypeInfo, (unsigned int)v33->fields._size);
  *(_QWORD *)(v17 + 48) = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 48), v34, v35, v36);
  aiState = (AiState_o *)this->fields.skillInfoList;
  if ( !aiState )
    goto LABEL_36;
  v39 = 0LL;
  while ( (__int64)v39 < aiState->fields.baseTurn )
  {
    aiState = (AiState_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)aiState,
                             v39,
                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( aiState )
    {
      v40 = *(_QWORD *)(v17 + 40);
      v41 = (BattleSkillInfoData_o *)aiState;
      aiState = (AiState_o *)BattleSkillInfoData__getInfoId((BattleSkillInfoData_o *)aiState, 0LL);
      if ( v40 )
      {
        if ( v39 >= *(unsigned int *)(v40 + 24) )
          goto LABEL_37;
        *(_DWORD *)(v40 + 4 * v39 + 32) = (_DWORD)aiState;
        v43 = *(_QWORD *)(v17 + 48);
        aiState = (AiState_o *)BattleSkillInfoData__getChargeTurn(v41, 0LL);
        if ( v43 )
        {
          if ( v39 >= *(unsigned int *)(v43 + 24) )
LABEL_37:
            sub_1B6432C(aiState, v42);
          *(_DWORD *)(v43 + 4 * v39 + 32) = (_DWORD)aiState;
          aiState = (AiState_o *)this->fields.skillInfoList;
          ++v39;
          if ( aiState )
            continue;
        }
      }
    }
    goto LABEL_36;
  }
  *(_DWORD *)(v17 + 116) = this->fields.shiftNpcId;
  *(_QWORD *)(v17 + 120) = this->fields.beforeUserSvtId;
  *(_DWORD *)(v17 + 76) = this->fields.transformIndex;
  *(_DWORD *)(v17 + 172) = this->fields.transformLimitCount;
  *(_DWORD *)(v17 + 80) = this->fields.dressDispId;
  *(_DWORD *)(v17 + 84) = this->fields.accumulationDamage;
  statestring = this->fields.statestring;
  *(_QWORD *)(v17 + 88) = statestring;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 88), (int32_t)statestring, v37, v38);
  *(_DWORD *)(v17 + 96) = this->fields.summonNpcId;
  *(_DWORD *)(v17 + 100) = this->fields.uniqueId;
  *(_DWORD *)(v17 + 104) = this->fields.shiftDeckIndex;
  *(_DWORD *)(v17 + 108) = this->fields.changeSvtIndex;
  *(_DWORD *)(v17 + 132) = this->fields.lowLimitShift;
  *(_BYTE *)(v17 + 112) = this->fields.isSleepWaitMode;
  *(_BYTE *)(v17 + 128) = this->fields.IsAlreadyDrop;
  *(_DWORD *)(v17 + 136) = this->fields.playedNPCount;
  *(_DWORD *)(v17 + 156) = this->fields.maxDefeatPoint;
  *(_DWORD *)(v17 + 140) = this->fields.defeatPoint;
  *(int32x2_t *)(v17 + 144) = vrev64_s32(*(int32x2_t *)&this->fields.aftSquareIndex);
  *(_BYTE *)(v17 + 152) = this->fields.isAppliedHaveStars;
  *(_QWORD *)(v17 + 160) = *(_QWORD *)&this->fields.squareEffectSkillId;
  *(_DWORD *)(v17 + 168) = this->fields.deadtype;
  *(_DWORD *)(v17 + 200) = this->fields.tdErrorTouchCount;
  *(_BYTE *)(v17 + 204) = this->fields.flgEntryFunction;
  commandAssistIds = this->fields.commandAssistIds;
  *(_QWORD *)(v17 + 208) = commandAssistIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 208), (int32_t)commandAssistIds, v46, v47);
  if ( !data || (aiState = (AiState_o *)data->fields.perf) == 0LL )
LABEL_36:
    sub_1B64324(aiState);
  BattlePerformance__SetActorPartAnimationData((BattlePerformance_o *)aiState, this->fields.uniqueId, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.partAnimationSaveDict, 0LL) )
  {
    v50 = BattleServantData___c_TypeInfo;
    partAnimationSaveDict = this->fields.partAnimationSaveDict;
    if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v50 = BattleServantData___c_TypeInfo;
    }
    _9__292_0 = (System_Func_T__TResult__o *)v50->static_fields->__9__292_0;
    if ( !_9__292_0 )
    {
      if ( !v50->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v50);
        v50 = BattleServantData___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v50->static_fields->__9;
      _9__292_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                                 System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__TypeInfo,
                                                 v48,
                                                 v49);
      System_Func_KeyValuePair_object__object___object____ctor(
        _9__292_0,
        v53,
        Method_BattleServantData___c__getSaveData_b__292_0__,
        0LL);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
      static_fields->__9__292_0 = (struct System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__o *)_9__292_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__292_0, (int32_t)_9__292_0, v55, v56);
    }
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)partAnimationSaveDict,
                                                                 (System_Func_TSource__TResult__o *)_9__292_0,
                                                                 (const MethodInfo_2E657BC *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___);
    v58 = System_Linq_Enumerable__ToArray_object_(
            v57,
            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData_PartAnimationSaveData___);
    *(_QWORD *)(v17 + 216) = v58;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 216), (int32_t)v58, v59, v60);
  }
  *(_BYTE *)(v17 + 224) = this->fields.isUseTdBetweenEnemyTurnEndAndTactical;
  v61 = BattleServantData___c_TypeInfo;
  battlePointList = this->fields.battlePointList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v61 = BattleServantData___c_TypeInfo;
  }
  _9__292_1 = (System_Func_object__object__o *)v61->static_fields->__9__292_1;
  if ( !_9__292_1 )
  {
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v61 = BattleServantData___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v61->static_fields->__9;
    _9__292_1 = (System_Func_object__object__o *)sub_1B64314(
                                                   System_Func_BattlePointData__BattlePointData_SaveData__TypeInfo,
                                                   v48,
                                                   v49);
    System_Func_object__object____ctor(_9__292_1, v64, Method_BattleServantData___c__getSaveData_b__292_1__, 0LL);
    v65 = BattleServantData___c_TypeInfo->static_fields;
    v65->__9__292_1 = (struct System_Func_BattlePointData__BattlePointData_SaveData__o *)_9__292_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v65->__9__292_1, (int32_t)_9__292_1, v66, v67);
  }
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)battlePointList,
                                                               (System_Func_TSource__TResult__o *)_9__292_1,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattlePointData__BattlePointData_SaveData___);
  v69 = System_Linq_Enumerable__ToArray_object_(
          v68,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattlePointData_SaveData___);
  *(_QWORD *)(v17 + 232) = v69;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 232), (int32_t)v69, v70, v71);
  return (BattleServantData_SaveData_o *)v17;
}


System_String_o *__fastcall BattleServantData__getSaveDataToString(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19

  if ( (byte_49FEA1D & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, data);
    byte_49FEA1D = 1;
  }
  v5 = (Il2CppObject *)((__int64 (__fastcall *)(BattleServantData_o *, BattleData_o *, Il2CppMethodPointer))this->klass->vtable._16_getSaveData.method)(
                         this,
                         data,
                         this->klass->vtable._17_setSaveData.methodPtr);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
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
  BattleServantData___c__DisplayClass411_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FEA50 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_1B640C8(&System_Predicate_BattleSkillInfoData__TypeInfo, v5);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass411_0__getSelfSkillInfo_b__0__, v6);
    sub_1B640C8(&BattleServantData___c__DisplayClass411_0_TypeInfo, v7);
    byte_49FEA50 = 1;
  }
  v8 = (BattleServantData___c__DisplayClass411_0_o *)sub_1B64314(
                                                       BattleServantData___c__DisplayClass411_0_TypeInfo,
                                                       *(_QWORD *)&index,
                                                       method);
  BattleServantData___c__DisplayClass411_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.index = index,
        skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleSkillInfoData__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_BattleServantData___c__DisplayClass411_0__getSelfSkillInfo_b__0__,
          0LL),
        !skillInfoList) )
  {
    sub_1B64324(v9);
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_object___Find(
                                    skillInfoList,
                                    (System_Predicate_T__o *)v13,
                                    (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
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
  __int64 methodPtr_low; // x9
  BattleServantData_o *v11; // x0
  const MethodInfo *v12; // x1
  int32_t v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_49FEA77 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, command);
    sub_1B640C8(&int_TypeInfo, v5);
    this = (BattleServantData_o *)sub_1B640C8(&ServantCardEntity_TypeInfo, v6);
    byte_49FEA77 = 1;
  }
  if ( !command )
    goto LABEL_12;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type);
  if ( !commandtable )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  v8 = v4->fields.commandtable;
  v13 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  if ( !v8
    || (this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v8->klass->vtable._29_get_Item.method)(
                                        v8,
                                        this,
                                        v8->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_12:
    sub_1B64324(this);
  }
  methodPtr_low = LOBYTE(ServantCardEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCardEntity_TypeInfo )
  {
    return *(System_Int32_array **)&this->fields.exceedCount.fields.currentCryptoKey;
  }
  sub_1B645E4(this);
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

  if ( (byte_49FEA40 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FEA40 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.svtOverwriteName, 0LL) )
    return this->fields.svtOverwriteName;
  result = this->fields.svtName;
  if ( !result )
  {
    svtdata = this->fields.svtdata;
    v6 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v5 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v8, 0LL);
    if ( !svtdata )
      sub_1B64324(v7);
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
  if ( (byte_49FEA29 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&OptionManager_TypeInfo, v8);
    this = (BattleServantData_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FEA29 = 1;
  }
  deckSvt = v4->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_19;
  if ( !deckSvt->fields.isFollowerSvt )
    return 0LL;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetSpoilerSetting(0LL) || Follower__IsNpc(v4->fields.followerType, 0LL) )
    return 0LL;
  this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        svtId,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_19:
    sub_1B64324(this);
  }
  v11 = (ServantEntity_o *)this;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL) )
    return 0LL;
  DispLimitCount = BattleServantData__getDispLimitCount(v4, 0, v12);
  v15 = *(_QWORD *)&v4->fields.limitcount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&v4->fields.limitcount.fields.fakeValue;
  v16 = DispLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v15;
  *(_QWORD *)&v20.fields.fakeValue = v14;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v20, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
      sub_1B64324(DispLimitCount);
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

  if ( (byte_49FEA66 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_TypeInfo, method);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    byte_49FEA66 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  buffData = this->fields.buffData;
  v6 = IsConstantMasterIndvAddBuffActive;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      v7,
                                                      v8);
  v10 = v9;
  if ( v6 )
    v11 = this;
  else
    v11 = 0LL;
  BattleBuffData_CheckIndividualitiesData___ctor(v9, v11, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v12);
  return BattleBuffData__getBuffList_42092284(buffData, 85, v10, 1, 0, 0LL, 0LL);
}


SkillLvEntity_o *__fastcall BattleServantData__getSkillFromBuff(
        SkillLvMaster_o *skillLvMst,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  SkillLvMaster_o *v4; // x20
  __int64 v5; // x1
  struct System_Int32_array *vals; // x8

  v4 = skillLvMst;
  if ( (byte_49FEA69 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, buff);
    skillLvMst = (SkillLvMaster_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FEA69 = 1;
  }
  if ( !v4 )
  {
    skillLvMst = (SkillLvMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillLvMst )
      goto LABEL_11;
    skillLvMst = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)skillLvMst,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v4 = skillLvMst;
  }
  if ( !buff )
    goto LABEL_11;
  vals = buff->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( vals->max_length < 2 )
    sub_1B6432C(skillLvMst, buff);
  if ( !v4 )
LABEL_11:
    sub_1B64324(skillLvMst);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x8
  BattleBuffData_o *v7; // x21
  unsigned __int64 v8; // x22
  __int64 v9; // x8
  unsigned __int64 v10; // x9

  if ( (byte_49FEAC3 & 1) == 0 )
  {
    sub_1B640C8(&bool___TypeInfo, method);
    byte_49FEAC3 = 1;
  }
  BuffParamList = (BattleBuffData_o *)sub_1B64170(bool___TypeInfo, 3LL);
  if ( !this->fields.buffData
    || (v4 = (System_Boolean_array *)BuffParamList,
        (BuffParamList = (BattleBuffData_o *)BattleBuffData__getBuffParamList(this->fields.buffData, 99, this, 0LL)) == 0LL) )
  {
LABEL_22:
    sub_1B64324(BuffParamList);
  }
  passiveList = BuffParamList->fields.passiveList;
  v7 = BuffParamList;
  if ( (int)passiveList >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)passiveList )
        goto LABEL_21;
      BuffParamList = this->fields.buffData;
      if ( !BuffParamList )
        goto LABEL_22;
      BuffParamList = (BattleBuffData_o *)BattleBuffData__getSkillSealSelectListFromValue(
                                            BuffParamList,
                                            *((_DWORD *)&v7->fields.activeList + v8),
                                            0LL);
      if ( !BuffParamList )
        goto LABEL_22;
      if ( (int)BuffParamList->fields.passiveList >= 1 )
        break;
LABEL_19:
      LODWORD(passiveList) = v7->fields.passiveList;
      if ( (__int64)++v8 >= (int)passiveList )
        return v4;
    }
    v9 = (unsigned int)BuffParamList->fields.passiveList;
    v10 = 0LL;
    while ( v9 != v10 )
    {
      if ( *((_BYTE *)&BuffParamList->fields.activeList + v10) )
      {
        if ( !v4 )
          goto LABEL_22;
        if ( v10 >= v4->max_length )
          break;
        v4->m_Items[v10 + 4] = 1;
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B6432C(BuffParamList, v5);
  }
  return v4;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getSkillSealSelectTurn(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  System_Int32_array *SkillSealSelectTurnList; // x0
  __int64 v8; // x1

  if ( (byte_49FEAC4 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&index);
    byte_49FEAC4 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      *(_QWORD *)&index,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData || (SkillSealSelectTurnList = BattleBuffData__getSkillSealSelectTurnList(buffData, v6, 0LL)) == 0LL )
    sub_1B64324(SkillSealSelectTurnList);
  if ( SkillSealSelectTurnList->max_length <= index )
    sub_1B6432C(SkillSealSelectTurnList, v8);
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

  if ( (byte_49FEAC2 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEAC2 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 40, v5, 0, 0LL),
        v8 = this->fields.buffData,
        v9 = isTurnBuff,
        v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v10,
                                                             v11),
        BattleBuffData_CheckIndividualitiesData___ctor(v12, this, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v8) )
  {
    sub_1B64324(v6);
  }
  return BattleBuffData__getMaxTurnBuff(v8, 40, v12, v9 << 31 >> 31, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getStartWaveBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEA5D & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA5D = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
  return BattleBuffData__getBuffList_42092284(buffData, 54, v5, 1, 0, 0LL, 0LL);
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
    sub_1B64324(this);
  return svtlimitDispent->fields.stepProbability;
}


System_String_o *__fastcall BattleServantData__getStrParam(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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
  if ( (byte_49FEA3A & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FEA3A = 1;
  }
  svtdata = v2->fields.svtdata;
  if ( !svtdata )
    sub_1B64324(this);
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v7, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getTTurnEndBufflist(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEA5C & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA5C = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
  return BattleBuffData__getBuffList_42092284(buffData, 55, v5, 1, 0, 0LL, 0LL);
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
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEA65 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA65 = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
  return BattleBuffData__getBuffList_42092284(buffData, 86, v5, 1, 0, 0LL, 0LL);
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
  __int64 v8; // x1
  int max_length; // w8
  int v10; // w9
  BattleBuffData_BuffData_o *v11; // x10

  if ( (byte_49FEA67 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_BuffData_TypeInfo, method);
    byte_49FEA67 = 1;
  }
  v3 = BattleServantData__getTdTypeChangeBuff(this, method);
  v6 = (BattleBuffData_BuffData_o *)sub_1B64314(BattleBuffData_BuffData_TypeInfo, v4, v5);
  BattleBuffData_BuffData___ctor(v6, 0LL);
  if ( !v6 )
    goto LABEL_15;
  v6->fields.addOrder = -1;
  if ( !v3 )
    goto LABEL_15;
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( max_length == v10 )
        sub_1B6432C(v7, v8);
      v11 = v3->m_Items[v10];
      if ( !v11 )
        break;
      ++v10;
      if ( v11->fields.addOrder > v6->fields.addOrder )
        v6 = v11;
      if ( max_length == v10 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1B64324(v7);
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
  BattleServantData___c__DisplayClass412_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_49FEA51 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_1B640C8(&System_Predicate_BattleSkillInfoData__TypeInfo, v5);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass412_0__getTempSkillInfo_b__0__, v6);
    sub_1B640C8(&BattleServantData___c__DisplayClass412_0_TypeInfo, v7);
    byte_49FEA51 = 1;
  }
  v8 = (BattleServantData___c__DisplayClass412_0_o *)sub_1B64314(
                                                       BattleServantData___c__DisplayClass412_0_TypeInfo,
                                                       *(_QWORD *)&index,
                                                       method);
  BattleServantData___c__DisplayClass412_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.index = index,
        skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleSkillInfoData__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_BattleServantData___c__DisplayClass412_0__getTempSkillInfo_b__0__,
          0LL),
        !skillInfoList) )
  {
    sub_1B64324(v9);
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_object___Find(
                                    skillInfoList,
                                    (System_Predicate_T__o *)v13,
                                    (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
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
    sub_1B64324(0LL);
  return SvtTDvc->fields.cardId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getTreasureDvcCardId_42519448(
        BattleServantData_o *this,
        bool useTDTypeChangedValue,
        const MethodInfo *method)
{
  BattleServantData_o *v3; // x19
  int32_t *p_cardId; // x8
  struct ServantTreasureDvcEntity_o *SvtTDvc; // x8

  v3 = this;
  if ( !useTDTypeChangedValue )
  {
LABEL_11:
    SvtTDvc = v3->fields._SvtTDvc;
    if ( SvtTDvc )
    {
      p_cardId = &SvtTDvc->fields.cardId;
      return *p_cardId;
    }
LABEL_14:
    sub_1B64324(this);
  }
  this = (BattleServantData_o *)BattleServantData__get_TreasureDevice(this, (const MethodInfo *)useTDTypeChangedValue);
  if ( !this )
    goto LABEL_14;
  this = (BattleServantData_o *)TreasureDvcEntity__IsTDTypeChange((TreasureDvcEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_9;
  this = (BattleServantData_o *)v3->fields.buffData;
  if ( !this )
    goto LABEL_14;
  this = (BattleServantData_o *)BattleBuffData__isTDTypeChange((BattleBuffData_o *)this, v3, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_9:
    if ( v3->fields.selectedTDCardId != -1 )
    {
      p_cardId = &v3->fields.selectedTDCardId;
      return *p_cardId;
    }
    goto LABEL_11;
  }
  this = (BattleServantData_o *)v3->fields.buffData;
  if ( !this )
    goto LABEL_14;
  this = (BattleServantData_o *)BattleBuffData__getTDTypeChangeBuffData((BattleBuffData_o *)this, v3, 0LL);
  if ( !this )
    goto LABEL_14;
  p_cardId = &this->fields.uniqueId + 1;
  return *p_cardId;
}


System_Int32_array *__fastcall BattleServantData__getTreasureDvcHitRaito(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  ServantTreasureDvcEntity_o *SvtTDvc; // x0

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_1B64324(0LL);
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
  int32_t treasuredvcId; // w1
  int32_t result; // w0

  if ( !useTDTypeChangedValue )
    return this->fields.treasuredvcId;
  buffData = this->fields.buffData;
  if ( buffData && BattleBuffData__isTDTypeChange(buffData, this, 0LL) )
  {
    TDvc = this->fields.TDvc;
    LimitCount = (BattleBuffData_BuffData_o *)BattleServantData__getLimitCount(this, v5);
    if ( !this->fields.buffData
      || (v8 = (int)LimitCount,
          (LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL)) == 0LL)
      || !TDvc )
    {
      sub_1B64324(LimitCount);
    }
    treasuredvcId = TreasureDvcEntity__getTDTypeChangeIdEachLimit(TDvc, v8, LimitCount->fields.param, 0LL);
  }
  else
  {
    result = this->fields.selectedTDId;
    if ( result != -1 )
      return result;
    treasuredvcId = this->fields.treasuredvcId;
  }
  return BattleServantData__GetTdIdChangeByBattlePoint(this, treasuredvcId, method);
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
    sub_1B64324(0LL);
  return SvtTDvc->fields.motion;
}


System_String_o *__fastcall BattleServantData__getTreasureDvcName(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_String_o **p_name; // x8

  if ( (byte_49FEA53 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FEA53 = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_1B64324(0LL);
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

  if ( (byte_49FEA54 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FEA54 = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_1B64324(0LL);
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
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_49FEA97 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA97 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getActMag_42106216(buffData, 3, v8, 0LL);
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

  if ( (byte_49FEAA3 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_TypeInfo, command);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    byte_49FEAA3 = 1;
  }
  buffData = this->fields.buffData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
    v13 = opSvt;
  else
    v13 = 0LL;
  v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12);
  BattleBuffData_CheckIndividualitiesData___ctor(v14, this, v13, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v15);
  return BattleBuffData__getActValue_42105208(buffData, 46, missText, v14, 0LL);
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

  if ( (byte_49FEAB0 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAB0 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getActMag_42106216(buffData, 25, v8, 0LL);
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
  if ( (byte_49FEA98 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA98 = 1;
  }
  if ( !targetSvt
    || (v9 = BattleServantData__checkPierceDefence(targetSvt, command, v8, (const MethodInfo *)pierce),
        buffData = v8->fields.buffData,
        v11 = v9,
        v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                             BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                             v12,
                                                             v13),
        BattleBuffData_CheckIndividualitiesData___ctor(v14, v8, targetSvt, 0LL, command, 0LL, 0LL),
        !buffData) )
  {
    sub_1B64324(this);
  }
  if ( v11 || pierce )
    v15 = 5;
  else
    v15 = 4;
  return BattleBuffData__getActMag_42106216(buffData, v15, v14, 0LL);
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
  if ( (byte_49FEAAF & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAAF = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    v7 = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, v7, v7, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v11);
  return BattleBuffData__getActMag_42106216(buffData, 24, v10, 0LL);
}


float __fastcall BattleServantData__getUpDownGiveHeal(
        BattleServantData_o *this,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_49FEAA6 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvt);
    byte_49FEAA6 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvt,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v7);
  return BattleBuffData__getActMag_42106216(buffData, 56, v6, 0LL);
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

  if ( (byte_49FEAB2 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAB2 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getActMag_42106216(buffData, 67, v8, 0LL);
}


int32_t __fastcall BattleServantData__getUpDownGutsHp(
        BattleServantData_o *this,
        int32_t *digit,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_49FEAA7 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, digit);
    byte_49FEAA7 = 1;
  }
  *digit = 1000;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      digit,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v7);
  return BattleBuffData__getActValue_42105172(buffData, 70, v6, 0LL);
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

  if ( (byte_49FEAA5 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, digit);
    byte_49FEAA5 = 1;
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
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v9,
                                                       v10);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, 0LL, 0LL, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_1B64324(v12);
  return BattleBuffData__getActValue_42105172(buffData, 34, v11, 0LL);
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

  if ( (byte_49FEA99 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA99 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getActMag_42106216(buffData, 6, v8, 0LL);
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

  if ( (byte_49FEA9C & 1) == 0 )
  {
    sub_1B640C8(&BuffList_TypeInfo, command);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    byte_49FEA9C = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(11, targetSvt, 0LL);
  buffData = this->fields.buffData;
  v10 = ActInfo;
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v11,
                                                       v12);
  BattleBuffData_CheckIndividualitiesData___ctor(v13, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL);
  if ( !buffData )
    sub_1B64324(v14);
  return BattleBuffData__getActMag_42106160(buffData, v10, v13, 0LL);
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
  if ( (byte_49FEAA1 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAA1 = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    v7 = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, v7, v7, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v11);
  return BattleBuffData__getActMag_42106216(buffData, 28, v10, 0LL);
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

  if ( (byte_49FEA9F & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA9F = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getActMag_42106216(buffData, 12, v8, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t ActValue_42105172; // w23
  const MethodInfo *v14; // x4
  System_Int32_array *BuffIndividualities; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  BattleBuffData_o *v18; // x8

  if ( (byte_49FEA9A & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEA9A = 1;
  }
  v7 = sub_1B64314(BattleBuffData_CheckIndividualitiesData_TypeInfo, command, targetSvt);
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
  buffData = (BattleBuffData_o *)BattleBuffData__getActValue_42105172(
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)buffData, v11, v12);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActValue_42105172 = BattleBuffData__getActValue_42105172(
                              buffData,
                              8,
                              (BattleBuffData_CheckIndividualitiesData_o *)v7,
                              0LL),
        BuffIndividualities = BattleServantData__getBuffIndividualities(targetSvt, 1, 0, 0, v14),
        *(_QWORD *)(v7 + 56) = BuffIndividualities,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)BuffIndividualities, v16, v17),
        (buffData = this->fields.buffData) == 0LL)
    || (buffData = (BattleBuffData_o *)BattleBuffData__getActValue_42105172(
                                         buffData,
                                         9,
                                         (BattleBuffData_CheckIndividualitiesData_o *)v7,
                                         0LL),
        (v18 = this->fields.buffData) == 0LL) )
  {
LABEL_10:
    sub_1B64324(buffData);
  }
  return (float)(ActValue_42105172
               + v10
               + (int)buffData
               + BattleBuffData__getActValue_42105172(v18, 78, (BattleBuffData_CheckIndividualitiesData_o *)v7, 0LL))
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
  const MethodInfo *v14; // x2
  int32_t v15; // w3
  System_Int32_array *v16; // x1

  if ( (byte_49FEA9B & 1) == 0 )
  {
    sub_1B640C8(&BuffList_TypeInfo, command);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    byte_49FEA9B = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v11 = sub_1B64314(BattleBuffData_CheckIndividualitiesData_TypeInfo, v9, v10);
  BattleBuffData_CheckIndividualitiesData___ctor(
    (BattleBuffData_CheckIndividualitiesData_o *)v11,
    this,
    targetSvt,
    command,
    0LL,
    0LL,
    0LL);
  if ( !targetSvt )
    goto LABEL_12;
  BuffIndividualities = BattleServantData__getBuffIndividualities(targetSvt, 0, 0, 0, v13);
  v16 = BuffIndividualities;
  if ( IsConstantMasterIndvAddBuffActive )
  {
    BuffIndividualities = BattleServantData__getIndividualities_42531456(targetSvt, BuffIndividualities, v14);
    if ( !v11 )
      goto LABEL_12;
    v16 = BuffIndividualities;
  }
  else if ( !v11 )
  {
    goto LABEL_12;
  }
  *(_QWORD *)(v11 + 56) = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 56), (int32_t)v16, (int32_t)v14, v15);
  BuffIndividualities = (System_Int32_array *)this->fields.buffData;
  if ( !BuffIndividualities )
LABEL_12:
    sub_1B64324(BuffIndividualities);
  return (float)BattleBuffData__getActValue_42105172(
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

  if ( (byte_49FEAA0 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEAA0 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      command,
                                                      targetSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__getActMag_42106216(buffData, 10, v8, 0LL);
}


int64_t __fastcall BattleServantData__getUserSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_49FEA39 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_49FEA39 = 1;
  }
  v3 = *(_OWORD *)&this->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v5, 0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(svtlimitaddent);
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

  if ( (byte_49FEAD0 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_49FEAD0 = 1;
  }
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  svtdata = this->fields.svtdata;
  if ( !svtdata || !result )
    sub_1B64324(result);
  if ( !result->max_length )
    sub_1B6432C(result, v4);
  result->m_Items[1] = svtdata->fields.attackAttri;
  return result;
}


int32_t __fastcall BattleServantData__getWeaponScale(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_1B64324(this);
  return svtlimitDispent->fields.weaponScale;
}


AiStateManager_o *__fastcall BattleServantData__get_AiStateManager(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AiStateManager_o *aiStateManager; // x20
  AiState_o *aiState; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FEA0A & 1) == 0 )
  {
    sub_1B640C8(&AiStateManager_TypeInfo, method);
    byte_49FEA0A = 1;
  }
  aiStateManager = this->fields._aiStateManager;
  if ( !aiStateManager )
  {
    aiState = this->fields.aiState;
    aiStateManager = (AiStateManager_o *)sub_1B64314(AiStateManager_TypeInfo, method, v2);
    AiStateManager___ctor(aiStateManager, aiState, 0LL);
    this->fields._aiStateManager = aiStateManager;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._aiStateManager, (int32_t)aiStateManager, v6, v7);
  }
  return aiStateManager;
}


System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__o *__fastcall BattleServantData__get_BattlePointList(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battlePointList; // x0

  if ( (byte_49FEA17 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePointData__AsReadOnly__, method);
    byte_49FEA17 = 1;
  }
  battlePointList = (System_Collections_Generic_List_object__o *)this->fields.battlePointList;
  if ( !battlePointList )
    sub_1B64324(0LL);
  return (System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                                   battlePointList,
                                                                                   (const MethodInfo_34AD8FC *)Method_System_Collections_Generic_List_BattlePointData__AsReadOnly__);
}


int32_t __fastcall BattleServantData__get_BattleSize(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_1B64324(this);
  return svtdata->fields.battleSize;
}


BattleBuffData_o *__fastcall BattleServantData__get_BuffData(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  ServantStatusBattleListViewItem_o *p_buffData; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FEA10 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_TypeInfo, method);
    byte_49FEA10 = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
  {
    p_buffData = (ServantStatusBattleListViewItem_o *)&this->fields.buffData;
    buffData = (BattleBuffData_o *)sub_1B64314(BattleBuffData_TypeInfo, method, v2);
    BattleBuffData___ctor(buffData, 0LL);
    p_buffData->klass = (ServantStatusBattleListViewItem_c *)buffData;
    sub_1B6406C(p_buffData, (int32_t)buffData, v6, v7);
  }
  return buffData;
}


int32_t __fastcall BattleServantData__get_CriticalIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int32_t result; // w0

  if ( (byte_49FEACA & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_3913/*"CRITICAL_INDIVIDUALITY"*/, v2);
    byte_49FEACA = 1;
  }
  result = BattleServantData_TypeInfo->static_fields->_CriticalIndividuality;
  if ( !result )
  {
    result = ConstantMaster__getValue((System_String_o *)StringLiteral_3913/*"CRITICAL_INDIVIDUALITY"*/, 0LL);
    BattleServantData_TypeInfo->static_fields->_CriticalIndividuality = result;
  }
  return result;
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

  if ( (byte_49FEA4E & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA4E = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData
    && (v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
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
    sub_1B64324(0LL);
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
  const MethodInfo *v2; // x3
  TreasureDvcEntity_o *TDvc; // x0
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v6; // x1
  TreasureDvcEntity_o *TreasureDevice; // x20
  const MethodInfo *v8; // x1
  BattleBuffData_BuffData_o *LimitCount; // x0
  int32_t v10; // w21
  int32_t v11; // w0
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w20
  int32_t v15; // w21
  const MethodInfo *v16; // x2
  int32_t selectedTDId; // w1
  int32_t v18; // w0
  TreasureDvcEntity_o *v19; // x0
  __int64 v20; // x20
  __int64 v21; // x21
  __int64 v22; // x19
  __int64 v23; // x20
  int32_t tdIdChangeByBattlePoint; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_49FEA0C & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49FEA0C = 1;
  }
  tdIdChangeByBattlePoint = 0;
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
          TreasureDevice = BattleServantData__get_TreasureDevice(this, v6);
          LimitCount = (BattleBuffData_BuffData_o *)BattleServantData__getLimitCount(this, v8);
          if ( !this->fields.buffData
            || (v10 = (int)LimitCount,
                (LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL)) == 0LL)
            || !TreasureDevice )
          {
            sub_1B64324(LimitCount);
          }
          v11 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(TreasureDevice, v10, LimitCount->fields.param, 0LL);
          v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          v14 = v11;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v26.fields.currentCryptoKey = v13;
          *(_QWORD *)&v26.fields.fakeValue = v12;
          v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v26, 0LL);
          selectedTDId = BattleServantData__GetTdIdChangeByBattlePoint(this, v14, v16);
          v18 = v15;
          return ServantTreasureDvcMaster__getEntityFromIDID(v18, selectedTDId, 0LL);
        }
      }
    }
    v19 = this->fields.TDvc;
    if ( v19 && TreasureDvcEntity__IsTDTypeChange(v19, 0LL) && this->fields.selectedTDId != -1 )
    {
      v21 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = v21;
      *(_QWORD *)&v27.fields.fakeValue = v20;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v27, 0LL);
      selectedTDId = this->fields.selectedTDId;
      return ServantTreasureDvcMaster__getEntityFromIDID(v18, selectedTDId, 0LL);
    }
  }
  if ( BattleServantData__TryGetTdIdChangeByBattlePoint(this, this->fields.TDvc, &tdIdChangeByBattlePoint, v2) )
  {
    v23 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v23;
    *(_QWORD *)&v28.fields.fakeValue = v22;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v28, 0LL);
    selectedTDId = tdIdChangeByBattlePoint;
    return ServantTreasureDvcMaster__getEntityFromIDID(v18, selectedTDId, 0LL);
  }
  return this->fields._SvtTDvc;
}


TreasureDvcLvEntity_o *__fastcall BattleServantData__get_TDvcLv(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TreasureDvcEntity_o *TDvc; // x0
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v6; // x1
  TreasureDvcEntity_o *TreasureDevice; // x20
  const MethodInfo *v8; // x1
  void *LimitCount; // x0
  int32_t v10; // w21
  int32_t v11; // w21
  const MethodInfo *v12; // x1
  TreasureDvcLvMaster_o *TdLvDataMasterBase; // x20
  const MethodInfo *v14; // x2
  int32_t treasuredvcLevel; // w2
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  int32_t tdIdChangeByBattlePoint; // [xsp+Ch] [xbp-24h] BYREF

  tdIdChangeByBattlePoint = 0;
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
          TreasureDevice = BattleServantData__get_TreasureDevice(this, v6);
          LimitCount = (void *)BattleServantData__getLimitCount(this, v8);
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
                TdLvDataMasterBase = BattleServantData__get_TdLvDataMasterBase(this, v12);
                LimitCount = (void *)BattleServantData__GetTdIdChangeByBattlePoint(this, v11, v14);
                if ( TdLvDataMasterBase )
                {
                  treasuredvcLevel = this->fields.treasuredvcLevel;
                  selectedTDId = (int)LimitCount;
                  LimitCount = TdLvDataMasterBase;
                  return TreasureDvcLvMaster__GetEntity(
                           (TreasureDvcLvMaster_o *)LimitCount,
                           selectedTDId,
                           treasuredvcLevel,
                           0LL);
                }
              }
            }
          }
          goto LABEL_21;
        }
      }
    }
    v17 = this->fields.TDvc;
    if ( v17 && TreasureDvcEntity__IsTDTypeChange(v17, 0LL) && this->fields.selectedTDId != -1 )
    {
      LimitCount = BattleServantData__get_TdLvDataMasterBase(this, v18);
      if ( LimitCount )
      {
        treasuredvcLevel = this->fields.treasuredvcLevel;
        selectedTDId = this->fields.selectedTDId;
        return TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)LimitCount, selectedTDId, treasuredvcLevel, 0LL);
      }
LABEL_21:
      sub_1B64324(LimitCount);
    }
  }
  if ( BattleServantData__TryGetTdIdChangeByBattlePoint(this, this->fields.TDvc, &tdIdChangeByBattlePoint, v2) )
  {
    LimitCount = BattleServantData__get_TdLvDataMasterBase(this, v19);
    if ( LimitCount )
    {
      treasuredvcLevel = this->fields.treasuredvcLevel;
      selectedTDId = tdIdChangeByBattlePoint;
      return TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)LimitCount, selectedTDId, treasuredvcLevel, 0LL);
    }
    goto LABEL_21;
  }
  return this->fields._TDvcLv;
}


TreasureDvcMaster_o *__fastcall BattleServantData__get_TdDataMasterBase(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TreasureDvcMaster_o *result; // x0
  Il2CppObject *Instance; // x0
  ServantStatusBattleListViewItem_o *p_tdDataMasterBase; // x19
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FEA0E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FEA0E = 1;
  }
  result = this->fields.tdDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    p_tdDataMasterBase = (ServantStatusBattleListViewItem_o *)&this->fields.tdDataMasterBase;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    p_tdDataMasterBase->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B6406C(p_tdDataMasterBase, (int32_t)MasterData_object, v8, v9);
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
  Il2CppObject *Instance; // x0
  ServantStatusBattleListViewItem_o *p_tdLvDataMasterBase; // x19
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FEA0F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FEA0F = 1;
  }
  result = this->fields.tdLvDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    p_tdLvDataMasterBase = (ServantStatusBattleListViewItem_o *)&this->fields.tdLvDataMasterBase;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    p_tdLvDataMasterBase->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B6406C(p_tdLvDataMasterBase, (int32_t)MasterData_object, v8, v9);
    return (TreasureDvcLvMaster_o *)p_tdLvDataMasterBase->klass;
  }
  return result;
}


TreasureDvcEntity_o *__fastcall BattleServantData__get_TreasureDevice(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  TreasureDvcEntity_o *TDvc; // x0
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v6; // x1
  TreasureDvcEntity_o *v7; // x20
  void *LimitCount; // x0
  int32_t v9; // w21
  int32_t v10; // w21
  const MethodInfo *v11; // x1
  TreasureDvcMaster_o *TdDataMasterBase; // x20
  const MethodInfo *v13; // x2
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v15; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  int32_t tdIdChangeByBattlePoint; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FEA0D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, method);
    byte_49FEA0D = 1;
  }
  tdIdChangeByBattlePoint = 0;
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
          v7 = this->fields.TDvc;
          LimitCount = (void *)BattleServantData__getLimitCount(this, v6);
          if ( this->fields.buffData )
          {
            v9 = (int)LimitCount;
            LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL);
            if ( LimitCount )
            {
              if ( v7 )
              {
                v10 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(v7, v9, *((_DWORD *)LimitCount + 7), 0LL);
                TdDataMasterBase = BattleServantData__get_TdDataMasterBase(this, v11);
                LimitCount = (void *)BattleServantData__GetTdIdChangeByBattlePoint(this, v10, v13);
                if ( TdDataMasterBase )
                {
                  selectedTDId = (int)LimitCount;
                  LimitCount = TdDataMasterBase;
                  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)LimitCount,
                                                  selectedTDId,
                                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
                }
              }
            }
          }
          goto LABEL_23;
        }
      }
    }
    v15 = this->fields.TDvc;
    if ( v15 && TreasureDvcEntity__IsTDTypeChange(v15, 0LL) && this->fields.selectedTDId != -1 )
    {
      LimitCount = BattleServantData__get_TdDataMasterBase(this, v16);
      if ( LimitCount )
      {
        selectedTDId = this->fields.selectedTDId;
        return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)LimitCount,
                                        selectedTDId,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      }
LABEL_23:
      sub_1B64324(LimitCount);
    }
  }
  if ( BattleServantData__TryGetTdIdChangeByBattlePoint(this, this->fields.TDvc, &tdIdChangeByBattlePoint, v2) )
  {
    LimitCount = BattleServantData__get_TdDataMasterBase(this, v17);
    if ( LimitCount )
    {
      selectedTDId = tdIdChangeByBattlePoint;
      return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)LimitCount,
                                      selectedTDId,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    }
    goto LABEL_23;
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
    sub_1B64324(0LL);
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
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA81 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&heal);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_17740/*"changeHp"*/, v12);
    byte_49FEA81 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  MaxHp = BattleServantData__getMaxHp(this, *(const MethodInfo **)&heal);
  if ( !isForce )
  {
    buffData = this->fields.buffData;
    v17 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                         BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                         v13,
                                                         v14);
    BattleBuffData_CheckIndividualitiesData___ctor(v17, this, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_19;
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
LABEL_19:
    sub_1B64324(paramobjelist);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v25 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v25 )
    {
      if ( !current )
        sub_1B64324(v25);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17740/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEA7A & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA7A = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
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
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x5
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  System_Int32_array *Individualities; // x0
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  isAlive = BattleServantData__isAlive(this, 0, (const MethodInfo *)indiv);
  if ( !isAlive )
  {
    buff = 0LL;
    isAlive = BattleServantData__isGuts_42516480(this, &buff, v10);
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
    sub_1B64324(isAlive);
  if ( info->fields.isIndiv )
  {
    Individualities = BattleServantData__getIndividualities(this, 0LL, v12);
    return Individuality__CheckIndividualities_37385440(Individualities, indiv, 0LL);
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
    if ( BattleServantData__isGuts_42516480(this, &buff, v6)
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
  BattleBuffData_o *buffData; // x0
  bool ActBuff; // w0
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FEABE & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEABE = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, command, 0LL, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B64324(0LL);
  if ( isAct )
    ActBuff = BattleBuffData__getActBuff(buffData, 20, v11, &value, 0LL);
  else
    ActBuff = BattleBuffData__getTestActBuff(buffData, 20, v11, &value, 0LL);
  *val = (float)value / 1000.0;
  return ActBuff;
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
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FEABF & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, command);
    byte_49FEABF = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       command,
                                                       opSvt);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, 0LL, command, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B64324(0LL);
  if ( isAct )
    ActBuff = BattleBuffData__getActBuff(buffData, 21, v11, &value, 0LL);
  else
    ActBuff = BattleBuffData__getTestActBuff(buffData, 21, v11, &value, 0LL);
  *val = (float)value / 1000.0;
  return ActBuff;
}


bool __fastcall BattleServantData__isCardTypeAction(
        BattleServantData_o *this,
        BattleCommandData_o *commandType,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_49FEA7B & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, commandType);
    byte_49FEA7B = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      commandType,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, commandType, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v7);
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
    sub_1B64324(0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  il2cpp_array_size_t v11; // w22
  Il2CppClass **v12; // x23
  char *v13; // x23
  Il2CppObject *v14; // t1
  int32_t v15; // w8
  int32_t AppearanceId; // w0

  if ( (byte_49FEAE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, list);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FEAE4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !list )
    goto LABEL_21;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        goto LABEL_22;
      v12 = &list->obj.klass + (int)v11;
      v14 = (Il2CppObject *)v12[4];
      v13 = (char *)(v12 + 4);
      Instance = v14;
      if ( !v14 )
        goto LABEL_21;
      Instance = (Il2CppObject *)BattleBuffData_BuffData__checkState((BattleBuffData_BuffData_o *)Instance, 256, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      max_length = list->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_11;
    }
    if ( v11 >= list->max_length )
LABEL_22:
      sub_1B6432C(Instance, v8);
    if ( *(_QWORD *)v13 )
    {
      if ( v10 )
      {
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     *(_DWORD *)(*(_QWORD *)v13 + 16LL),
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
    sub_1B64324(Instance);
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
    sub_1B64324(this);
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
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0

  if ( (byte_49FEAB1 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, checkCount);
    byte_49FEAB1 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      checkCount,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v7);
  return !BattleBuffData__isTurnBuff(buffData, 75, v6, checkCount, 0LL);
}


bool __fastcall BattleServantData__isGuts(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-8h] BYREF

  buff = 0LL;
  return BattleServantData__isGuts_42516480(this, &buff, v2);
}


bool __fastcall BattleServantData__isGuts_42516480(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o **buff,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x1
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_array *v9; // x0

  *buff = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)buff, 0, (int32_t)method, v3);
  if ( this->fields.isDeadAnime || this->fields.isSystemDead )
    return 0;
  buffData = this->fields.buffData;
  v9 = BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(this, v6);
  if ( !buffData )
    sub_1B64324(v9);
  return BattleBuffData__isGuts(buffData, buff, v9, 0LL);
}


bool __fastcall BattleServantData__isHeroine(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_1B64324(0LL);
  return ServantEntity__checkIsHeroineSvt(svtdata, 0LL);
}


bool __fastcall BattleServantData__isJustHit(BattleServantData_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall BattleServantData__isLogicDeadAndNoRevive(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-18h] BYREF

  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    buff = 0LL;
    return !BattleServantData__isGuts_42516480(this, &buff, v3);
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
    sub_1B64324(0LL);
  return ServantEntity__IsNameTrue(svtdata, 0LL);
}


bool __fastcall BattleServantData__isNobleAction(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t invokeAct; // [xsp+Ch] [xbp-4h] BYREF

  invokeAct = 0;
  return BattleServantData__isNobleAction_42520640(this, &invokeAct, v2);
}


bool __fastcall BattleServantData__isNobleAction_42520640(
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

  if ( (byte_49FEA7D & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA7D = 1;
  }
  buffData = this->fields.buffData;
  TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, method);
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      v5,
                                                      v6);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, TreasureDvcCommand, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v8);
  return BattleBuffData__isTurnBuff(buffData, 82, v7, 0, 0LL);
}


bool __fastcall BattleServantData__isNobleSeal(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_49FEA7C & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    byte_49FEA7C = 1;
  }
  buffData = this->fields.buffData;
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v6);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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
    sub_1B64324(TDvcLv);
  return funcId->max_length == 0;
}


bool __fastcall BattleServantData__isTargetRarity(
        BattleServantData_o *this,
        System_Int32_array *targetRarityList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  struct ServantLimitEntity_o *svtlimitDispent; // x9
  bool v5; // vf
  int v6; // w8
  int32_t rarity; // w9
  int v8; // w10
  int32_t v9; // w11
  bool result; // w0

  if ( !targetRarityList )
    return 0;
  v3 = *(_QWORD *)&targetRarityList->max_length;
  if ( !v3 )
    return 0;
  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_1B64324(this);
  v5 = __OFSUB__((_DWORD)v3, 1);
  v6 = v3 - 1;
  if ( v6 < 0 != v5 )
    return 0;
  rarity = svtlimitDispent->fields.rarity;
  v8 = 0;
  do
  {
    v9 = targetRarityList->m_Items[v8 + 1];
    result = rarity == v9;
    if ( rarity == v9 )
      break;
  }
  while ( v6 != v8++ );
  return result;
}


bool __fastcall BattleServantData__isUpHate(
        BattleServantData_o *this,
        System_Int32_array *opSvtIndiv,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEA71 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, opSvtIndiv);
    byte_49FEA71 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      opSvtIndiv,
                                                      method);
  BattleBuffData_CheckIndividualitiesData___ctor_42147648(v6, this, 0LL, 0LL, opSvtIndiv, 0LL, 0LL);
  if ( !buffData )
    sub_1B64324(v7);
  return BattleBuffData__checkActBuff_42109236(buffData, 45, v6, &usedBuff, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__isUseSelfSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleServantData___c__DisplayClass410_0_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *v13; // x20
  Il2CppObject *v14; // x0

  if ( (byte_49FEA4F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, *(_QWORD *)&index);
    sub_1B640C8(&System_Predicate_BattleSkillInfoData__TypeInfo, v5);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass410_0__isUseSelfSkill_b__0__, v6);
    sub_1B640C8(&BattleServantData___c__DisplayClass410_0_TypeInfo, v7);
    byte_49FEA4F = 1;
  }
  v8 = (BattleServantData___c__DisplayClass410_0_o *)sub_1B64314(
                                                       BattleServantData___c__DisplayClass410_0_TypeInfo,
                                                       *(_QWORD *)&index,
                                                       method);
  BattleServantData___c__DisplayClass410_0___ctor(v8, 0LL);
  if ( !v8
    || (v8->fields.index = index,
        skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList,
        v13 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleSkillInfoData__TypeInfo, v10, v11),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v8,
          Method_BattleServantData___c__DisplayClass410_0__isUseSelfSkill_b__0__,
          0LL),
        !skillInfoList) )
  {
    sub_1B64324(v9);
  }
  v14 = System_Collections_Generic_List_object___Find(
          skillInfoList,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
  if ( v14 )
  {
    if ( BYTE4(v14[1].monitor) )
      LOBYTE(v14) = 0;
    else
      LOBYTE(v14) = BYTE4(v14[3].klass) != 0;
  }
  return (char)v14;
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
    sub_1B64324(0LL);
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
  System_Collections_Generic_LinkedList_T__o *actionHistory; // x0

  if ( (byte_49FEAD1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__, method);
    byte_49FEAD1 = 1;
  }
  actionHistory = (System_Collections_Generic_LinkedList_T__o *)this->fields.actionHistory;
  if ( !actionHistory )
    sub_1B64324(0LL);
  System_Collections_Generic_LinkedList_object___Clear(
    actionHistory,
    (const MethodInfo_33EF5F8 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__);
}


void __fastcall BattleServantData__resetParamObject(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_49FEA6D & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    byte_49FEA6D = 1;
  }
  paramobjelist = v2->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B64324(this);
  size = paramobjelist->fields._size;
  v5 = paramobjelist->fields._version + 1;
  paramobjelist->fields._size = 0;
  paramobjelist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)paramobjelist->fields._items, 0, size, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x21
  _BOOL8 v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA82 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, funcName);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FEA82 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v11 )
    {
      if ( !current )
        sub_1B64324(v11);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        funcName,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  BattleServantActionHistory_o *v12; // x24
  System_Collections_Generic_LinkedList_T__o *actionHistory; // x0

  if ( (byte_49FEAD2 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantActionHistory_TypeInfo, *(_QWORD *)&actUniqueId);
    sub_1B640C8(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__, v11);
    byte_49FEAD2 = 1;
  }
  v12 = (BattleServantActionHistory_o *)sub_1B64314(
                                          BattleServantActionHistory_TypeInfo,
                                          *(_QWORD *)&actUniqueId,
                                          *(_QWORD *)&actType);
  BattleServantActionHistory___ctor(v12, actType, actUniqueId, wavecount, isOpponent, 0LL);
  actionHistory = (System_Collections_Generic_LinkedList_T__o *)this->fields.actionHistory;
  if ( !actionHistory )
    sub_1B64324(0LL);
  System_Collections_Generic_LinkedList_object___AddLast(
    actionHistory,
    (Il2CppObject *)v12,
    (const MethodInfo_33EF518 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__);
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
  BattleServantData_o *v8; // x21
  BattleUserServantData_o *UserServantFromID; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // [xsp+8h] [xbp-48h]

  if ( !battleEnt || !inDeckSvt || (v8 = this, (this = (BattleServantData_o *)battleEnt->fields.battleInfo) == 0LL) )
    sub_1B64324(this);
  UserServantFromID = BattleInfoData__getUserServantFromID((BattleInfoData_o *)this, inDeckSvt->fields.userSvtId, 0LL);
  BattleServantData__setBaseServantData_42472576(
    v8,
    inDeckSvt,
    UserServantFromID,
    battleEnt->fields.battleInfo,
    battleEnt->fields.userCommandCode,
    battleEnt->fields.eventId,
    infollowerType,
    commandAssistDataList,
    isContinue,
    v15);
  BattleServantData__UpdateBattlePointSetting(v8, battleEnt, v14);
}


void __fastcall BattleServantData__setBaseServantData_42472576(
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
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x29
  __int64 Instance; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  struct BattleDeckServantData_o **v76; // x24
  BaseBattleServantEvent_o *ServantEvent; // x0
  struct BattleDeckServantData_o *v78; // x1
  BaseBattleServantEvent_o *v79; // x28
  int32_t v80; // w2
  int32_t v81; // w3
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x21
  __int128 v84; // q0
  int32_t exceedCount; // w21
  const MethodInfo *v86; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v87; // kr00_16
  struct BattleDeckServantData_o *v88; // x8
  int32_t BattleSvtId; // w21
  int32_t v90; // w1
  int32_t v91; // w2
  int32_t v92; // w3
  int32_t v93; // w2
  int32_t v94; // w3
  struct BattleDeckServantData_o *v95; // x8
  struct System_String_o *name; // x1
  int32_t v97; // w0
  const MethodInfo *v98; // x2
  struct System_String_o *ServantOverwriteName; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  int32_t v102; // w2
  int32_t v103; // w3
  struct BattleDeckServantData_o *v104; // x8
  struct DropInfo_array *dropInfos; // x1
  struct System_Int32_array *individuality; // x1
  int32_t v107; // w2
  int32_t v108; // w3
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  struct ServantEntity_o *svtdata; // x8
  Il2CppObject *v114; // x23
  const MethodInfo *v115; // x1
  int32_t SvtId; // w24
  struct ServantLimitEntity_o *v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  struct ServantEntity_o *v120; // x8
  ServantLimitAddMaster_o *v121; // x24
  __int64 v122; // x21
  __int64 v123; // x25
  int32_t v124; // w25
  const MethodInfo *v125; // x2
  const MethodInfo *v126; // x1
  int32_t v127; // w25
  const MethodInfo *v128; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v130; // x1
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v133; // w1
  ServantLimitMaster_o *v134; // x0
  struct ServantLimitEntity_o *v135; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  BattleUserServantData_o *UserServantFromID; // x20
  __int64 v139; // x23
  struct BattleUserServantData_array *v140; // x0
  struct BattleUserServantData_array **p_equipList; // x24
  int32_t v142; // w2
  int32_t v143; // w3
  __int64 v144; // x1
  int32_t v145; // w2
  int32_t v146; // w3
  struct BattleUserServantData_array *equipList; // x20
  unsigned __int64 v148; // x22
  int32_t v149; // w2
  int32_t v150; // w3
  __int64 v151; // x21
  Il2CppClass **v152; // x0
  unsigned __int64 max_length; // x8
  int32x2_t *v154; // x9
  int32_t maxhp; // w10
  int32_t equiphp; // w11
  struct System_Int64_array *userCommandCodeIds; // x1
  struct System_Int64_array **p_userCommandCodeIds; // x24
  __int64 v159; // x1
  __int64 v160; // x2
  int32_t v161; // w3
  struct System_Int64_array *v162; // x1
  System_Collections_Generic_List_object__o *v163; // x21
  struct System_Collections_Generic_List_CommandCodeInfo__o **p_commandCodeList_k__BackingField; // x23
  int32_t v165; // w2
  int32_t v166; // w3
  __int64 v167; // x1
  __int64 v168; // x2
  int32_t v169; // w3
  unsigned __int64 v170; // x22
  __int64 v171; // x21
  int32_t v172; // w2
  int32_t v173; // w3
  CommandCodeInfo_o *v174; // x1
  System_Int64_array *v175; // x28
  __int64 v176; // x1
  __int64 v177; // x2
  System_Func_long__bool__o *v178; // x27
  Il2CppObject *v179; // x1
  __int64 v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  __int64 v183; // x8
  struct System_Int32_array *commandCardParam; // x1
  int32_t v185; // w2
  int32_t v186; // w3
  struct System_Int32_array *v187; // x1
  System_Int32_array *BattleSkillIdList; // x0
  int32_t v189; // w2
  int32_t v190; // w3
  __int64 v191; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  __int64 v194; // x1
  __int64 v195; // x2
  System_Collections_Generic_List_object__o *v196; // x28
  __int64 v197; // x1
  __int64 v198; // x2
  System_Collections_Generic_IEnumerable_T__o *skillInfoList; // x21
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v200; // x8
  __int64 size; // x2
  int v202; // w9
  __int64 v203; // x24
  int32_t v204; // w2
  int32_t v205; // w3
  __int64 v206; // x1
  const MethodInfo *v207; // x2
  __int64 v208; // x9
  int v209; // w8
  __int64 v210; // x9
  System_Predicate_object__o *v211; // x21
  __int64 v212; // x9
  __int64 v213; // x8
  __int64 v214; // x2
  __int64 v215; // x9
  struct BattleUserServantData_array *v216; // x8
  struct BattleUserServantData_array **v217; // x20
  unsigned __int8 v218; // w22
  unsigned __int64 v219; // x21
  int v220; // w24
  unsigned __int64 v221; // x9
  struct BattleUserServantData_array *v222; // x8
  __int64 v223; // x27
  __int64 v224; // x8
  __int64 v225; // x28
  unsigned __int64 v226; // x20
  __int64 v227; // x25
  System_Collections_Generic_List_object__o *v228; // x8
  CommandCodeSkillMaster_o *v229; // x24
  int v230; // w28
  int32_t v231; // w25
  int v232; // w8
  __int64 v233; // x27
  int i; // w20
  __int64 v235; // x8
  int32_t v236; // w21
  const MethodInfo *v237; // x3
  int32_t Value; // w0
  int32_t nplineCount; // w8
  int v240; // w8
  System_Collections_Generic_IEnumerable_TSource__o *TDErrorVoiceSeArray; // x0
  int32_t v242; // w2
  int32_t v243; // w3
  struct System_Collections_Generic_List_string__o *v244; // x1
  struct System_Int32_array **p_commandAssistIds; // x29
  struct System_Int32_array *v246; // x0
  int32_t v247; // w2
  int32_t v248; // w3
  __int64 v249; // x1
  System_Predicate_object__o *v250; // x21
  struct System_Int32_array *v251; // x8
  System_Collections_Generic_List_object__o *v252; // x24
  unsigned __int64 v253; // x26
  _BOOL8 v254; // x0
  __int64 v255; // x1
  struct System_Int32_array *v256; // x9
  __int64 v257; // x1
  __int64 v258; // x2
  System_Collections_Hashtable_o *v259; // x21
  int32_t v260; // w2
  int32_t v261; // w3
  Il2CppObject *v262; // x24
  __int64 v263; // x25
  unsigned __int64 v264; // x29
  __int64 v265; // x21
  __int64 v266; // x26
  struct System_Collections_Hashtable_o *commandtable; // x26
  __int64 v268; // x0
  __int64 v269; // x21
  __int64 v270; // x28
  __int64 v271; // x27
  BattleDeckServantData_o *v272; // x8
  BattleUserServantData_o *v273; // x20
  int32_t KillType; // w0
  BattleDeckServantData_o *v275; // x8
  bool isRaid; // w0
  int32_t RaidId; // w0
  struct System_String_o *StartRaidState; // x0
  int32_t v279; // w2
  int32_t v280; // w3
  BattleDeckServantData_o *v281; // x8
  BattleDeckServantData_o *v282; // x8
  bool isSuperBoss; // w0
  int32_t SuperBossId; // w0
  bool isSendDamageForSuperBossId; // w0
  BattleDeckServantData_o *v286; // x21
  __int64 v287; // x22
  __int64 v288; // x23
  __int64 v289; // x21
  __int64 v290; // x22
  __int64 v291; // x21
  __int64 v292; // x22
  int32_t v293; // w0
  const MethodInfo *v294; // x2
  struct System_String_o *BattleServantOverwriteName; // x0
  int32_t v296; // w2
  int32_t v297; // w3
  struct BattleDeckServantData_o *v298; // x8
  __int64 v299; // d0
  int32_t v300; // w22
  ServantChangeMaster_o *v301; // x21
  ServantChangeEntity_o *v302; // x0
  Il2CppObject *v303; // x21
  UserServantCollectionEntity_o *v304; // x22
  __int64 v305; // x21
  __int64 v306; // x23
  int32_t v307; // w2
  int32_t v308; // w3
  struct BattleDeckServantData_o *v309; // x8
  int32_t v310; // w21
  int32_t svtCommonFlag; // w23
  Il2CppObject *v312; // x0
  __int64 v313; // x23
  __int64 v314; // x24
  UserNpcSvtRecordMaster_o *v315; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v316; // x0
  int32_t v317; // w2
  int32_t v318; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v319; // x1
  struct System_Int32_array *v320; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v321; // x0
  struct System_Int32_array **p_tdplayed; // x0
  int32_t NpcFriendShipRank; // w21
  int32_t v324; // w2
  int32_t v325; // w3
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  int32_t v328; // w2
  int32_t v329; // w3
  struct System_Int32_array *classBoardSquareIds; // x1
  int32_t v331; // w2
  int32_t v332; // w3
  const MethodInfo *v333; // x1
  struct System_Collections_Generic_List_BattlePointData__o *battlePointList; // x8
  int32_t v335; // w2
  int v336; // w9
  Il2CppObject *v337; // x0
  __int64 v338; // x21
  __int64 v339; // x22
  ServantBattlePointMaster_o *v340; // x20
  __int64 v341; // x8
  __int64 v342; // x20
  __int64 v343; // x9
  int *v344; // x10
  __int64 v345; // x0
  __int64 v346; // x20
  __int64 v347; // x8
  __int64 v348; // x9
  int *v349; // x10
  __int64 v350; // x0
  __int64 v351; // x8
  __int64 v352; // x9
  int *v353; // x10
  __int64 v354; // x0
  __int64 v355; // x0
  __int64 v356; // x1
  __int64 v357; // x2
  System_Collections_Generic_List_object__o *v358; // x21
  int32_t v359; // w23
  BattlePointData_o *v360; // x22
  __int64 v361; // x0
  int32_t v362; // w2
  int32_t v363; // w3
  struct System_Object_array *items; // x8
  _QWORD *v365; // x9
  __int64 v366; // x10
  Il2CppClass **v367; // x0
  __int64 v368; // x8
  __int64 v369; // x9
  int *v370; // x10
  __int64 v371; // x0
  struct System_Int32_array *tdPlayed; // x1
  __int64 v373; // x0
  const MethodInfo *v374; // [xsp+0h] [xbp-150h]
  int32_t eventIda; // [xsp+1Ch] [xbp-134h]
  System_Collections_Generic_List_object__o *v376; // [xsp+20h] [xbp-130h]
  int32_t *p_aiId; // [xsp+28h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtdata; // [xsp+38h] [xbp-118h]
  BattleUserServantData_o *v380; // [xsp+48h] [xbp-108h]
  BattleInfoData_o *v381; // [xsp+50h] [xbp-100h]
  struct BattleDeckServantData_o **p_deckSvt; // [xsp+58h] [xbp-F8h]
  __int64 v383; // [xsp+60h] [xbp-F0h]
  BattleUserServantData_o *v384; // [xsp+68h] [xbp-E8h]
  Il2CppObject *object; // [xsp+70h] [xbp-E0h]
  unsigned __int8 objecta; // [xsp+70h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v387; // [xsp+80h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v388; // [xsp+A0h] [xbp-B0h] BYREF
  ServantCardEntity_o *entity; // [xsp+C8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v390; // [xsp+D0h] [xbp-80h] BYREF
  System_RuntimeFieldHandle_o v391; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v393; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v394; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v395; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v396; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v397; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v398; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v399; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v400; // 0:x0.16

  if ( (byte_49FEA27 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_long___, inDeckSvt);
    sub_1B640C8(&BattleData_TypeInfo, v16);
    sub_1B640C8(&BattlePointData_TypeInfo, v17);
    sub_1B640C8(&BattleUserServantData___TypeInfo, v18);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantBattlePointMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantCardMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, v22);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v23);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitMaster___, v24);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v25);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___, v26);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v27);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v28);
    sub_1B640C8(&Method_System_Linq_Enumerable_Concat_int___, v29);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v30);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__get_Current__, v34);
    sub_1B640C8(&System_Func_long__bool__TypeInfo, v35);
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, v36);
    sub_1B640C8(&System_IDisposable_TypeInfo, v37);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, v38);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, v39);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v40);
    sub_1B640C8(&int___TypeInfo, v41);
    sub_1B640C8(&int_TypeInfo, v42);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePointData__Add__, v43);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeInfo__Add__, v44);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePointData__Clear__, v45);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__, v46);
    sub_1B640C8(&Method_System_Collections_Generic_List_commandAssistData__FindAll__, v47);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__, v48);
    sub_1B640C8(&Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__, v49);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__, v50);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeInfo___ctor__, v51);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___75645608, v52);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Count__, v53);
    sub_1B640C8(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__, v54);
    sub_1B640C8(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo, v55);
    sub_1B640C8(&System_Collections_Generic_List_CommandCodeInfo__TypeInfo, v56);
    sub_1B640C8(&NetworkManager_TypeInfo, v57);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v58);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59);
    sub_1B640C8(&System_Predicate_BattleSkillInfoData__TypeInfo, v60);
    sub_1B640C8(&System_Predicate_commandAssistData__TypeInfo, v61);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v62);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A,
      v63);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass311_0__setBaseServantData_b__1__, v64);
    sub_1B640C8(&BattleServantData___c__DisplayClass311_0_TypeInfo, v65);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass311_1__setBaseServantData_b__0__, v66);
    sub_1B640C8(&BattleServantData___c__DisplayClass311_1_TypeInfo, v67);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass311_2__setBaseServantData_b__2__, v68);
    sub_1B640C8(&BattleServantData___c__DisplayClass311_2_TypeInfo, v69);
    sub_1B640C8(&StringLiteral_1/*""*/, v70);
    sub_1B640C8(&StringLiteral_6525/*"FULL_TD_POINT"*/, v71);
    byte_49FEA27 = 1;
  }
  memset(&v390, 0, sizeof(v390));
  entity = 0LL;
  v72 = sub_1B64314(BattleServantData___c__DisplayClass311_0_TypeInfo, inDeckSvt, userSvt);
  BattleServantData___c__DisplayClass311_0___ctor((BattleServantData___c__DisplayClass311_0_o *)v72, 0LL);
  if ( !v72 )
    goto LABEL_131;
  *(_QWORD *)(v72 + 16) = inDeckSvt;
  v76 = (struct BattleDeckServantData_o **)(v72 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v72 + 16), (int32_t)inDeckSvt, v74, v75);
  if ( !battleInfo )
    goto LABEL_131;
  ServantEvent = BattleInfoData__GetServantEvent(battleInfo, 0LL);
  v78 = *v76;
  v79 = ServantEvent;
  this->fields.deckSvt = *v76;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.deckSvt, (int32_t)v78, v80, v81);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_131;
  this->fields.index = deckSvt->fields.id - 1;
  this->fields.uniqueId = deckSvt->fields.uniqueId;
  userSvtId = deckSvt->fields.userSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v387, userSvtId, 0LL);
  v84 = *(_OWORD *)&v387.fields.fakeValue;
  v388 = v387;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)&v387.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = v84;
  if ( !userSvt )
    goto LABEL_131;
  exceedCount = userSvt->fields.exceedCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(exceedCount, 0LL);
  Instance = *(_QWORD *)&v87.fields.currentCryptoKey;
  v88 = this->fields.deckSvt;
  this->fields.exceedCount = v87;
  if ( !v88 )
    goto LABEL_131;
  object = (Il2CppObject *)v72;
  v383 = (__int64)v79;
  eventIda = eventId;
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
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(BattleSvtId, 0LL);
  this->fields.maxtpturn = userSvt->fields.chargeTurn;
  *(_QWORD *)&this->fields.downstarrate = *(_QWORD *)&userSvt->fields.starRate;
  this->fields.deathRate = userSvt->fields.deathRate;
  this->fields.criticalRate = userSvt->fields.criticalRate;
  this->fields._imageSvtId_k__BackingField = userSvt->fields.imageSvtId;
  v90 = (int)StringLiteral_1/*""*/;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statestring, v90, v91, v92);
  v95 = this->fields.deckSvt;
  this->fields.atktdrate = userSvt->fields.tdAttackRate;
  if ( !v95 )
    goto LABEL_131;
  name = v95->fields.name;
  this->fields.svtName = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtName, (int32_t)name, v93, v94);
  this->fields.overkillTargetId = -1;
  v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvt->fields.svtId, 0LL);
  ServantOverwriteName = BattleServantData__getServantOverwriteName(this, v97, v98);
  this->fields.svtOverwriteName = ServantOverwriteName;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteName,
    (int32_t)ServantOverwriteName,
    v100,
    v101);
  v104 = this->fields.deckSvt;
  *(_QWORD *)&this->fields.displayType = *(_QWORD *)&userSvt->fields.displayType;
  if ( !v104 )
    goto LABEL_131;
  dropInfos = v104->fields.dropInfos;
  this->fields.droplist = dropInfos;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.droplist, (int32_t)dropInfos, v102, v103);
  individuality = userSvt->fields.individuality;
  this->fields.svtIndividuality = individuality;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtIndividuality, (int32_t)individuality, v107, v108);
  this->fields.flgEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)userSvt, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = BattleUserServantData__getBattleSvtId(userSvt, 0LL);
  if ( !MasterData_object )
    goto LABEL_131;
  v110 = DataMasterBase_object__object__int___GetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
           Instance,
           (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = (struct ServantEntity_o *)v110;
  p_svtdata = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtdata;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtdata, (int32_t)v110, v111, v112);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_131;
  this->fields.svtType = svtdata->fields.type;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  v114 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v115);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(this->fields.limitcount, 0LL);
  if ( !v114 )
    goto LABEL_131;
  if ( !ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v114, &this->fields.svtlimitent, SvtId, Instance, 0LL) )
  {
    v117 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v114, 100100, 0, 0LL);
    this->fields.svtlimitent = v117;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtlimitent, (int32_t)v117, v118, v119);
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  p_deckSvt = &this->fields.deckSvt;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v120 = this->fields.svtdata;
  if ( !v120 )
    goto LABEL_131;
  v121 = (ServantLimitAddMaster_o *)Instance;
  v123 = *(_QWORD *)&v120->fields.id.fields.currentCryptoKey;
  v122 = *(_QWORD *)&v120->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v392.fields.currentCryptoKey = v123;
  *(_QWORD *)&v392.fields.fakeValue = v122;
  v124 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v392, 0LL);
  Instance = BattleServantData__getDispLimitCount(this, 1, v125);
  if ( !v121 )
    goto LABEL_131;
  ServantLimitAddMaster__TryGetEntity(v121, &this->fields.svtlimitaddent, v124, Instance, 0LL);
  v127 = BattleServantData__getSvtId(this, v126);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v128);
  if ( !ServantLimitMaster__TryGetEntity(
          (ServantLimitMaster_o *)v114,
          &this->fields.svtlimitDispent,
          v127,
          DispLimitCount,
          0LL) )
  {
    if ( this->fields.svtlimitaddent )
    {
      Instance = BattleServantData__getSvtId(this, v130);
      svtlimitaddent = this->fields.svtlimitaddent;
      if ( !svtlimitaddent )
        goto LABEL_131;
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v133 = Instance;
      v134 = (ServantLimitMaster_o *)v114;
    }
    else
    {
      v133 = 100100;
      v134 = (ServantLimitMaster_o *)v114;
      battleCharaLimitCount = 0;
    }
    v135 = ServantLimitMaster__GetEntity(v134, v133, battleCharaLimitCount, 0LL);
    this->fields.svtlimitDispent = v135;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtlimitDispent, (int32_t)v135, v136, v137);
  }
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfo, this->fields.beforeUserSvtId, 0LL);
  Instance = (__int64)BattleUserServantData__getBattleEquipTargetList(userSvt, 0LL);
  v139 = Instance;
  if ( this->fields.shiftNpcId >= 1 && UserServantFromID && this->fields.beforeUserSvtId >= 1 )
  {
    Instance = (__int64)BattleUserServantData__getBattleEquipTargetList(UserServantFromID, 0LL);
    v139 = Instance;
  }
  v380 = UserServantFromID;
  if ( !v139 )
    goto LABEL_131;
  v140 = (struct BattleUserServantData_array *)sub_1B64170(
                                                 BattleUserServantData___TypeInfo,
                                                 *(unsigned int *)(v139 + 24));
  p_equipList = &this->fields.equipList;
  this->fields.equipList = v140;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipList, (int32_t)v140, v142, v143);
  *(_QWORD *)&this->fields.equipatk = 0LL;
  equipList = this->fields.equipList;
  if ( !equipList )
    goto LABEL_131;
  if ( (int)equipList->max_length >= 1 )
  {
    v148 = 0LL;
    while ( v148 < *(unsigned int *)(v139 + 24) )
    {
      Instance = (__int64)BattleInfoData__getEquipFromID(battleInfo, *(_QWORD *)(v139 + 8 * v148 + 32), 0LL);
      v151 = Instance;
      if ( Instance )
      {
        Instance = sub_1B64204(Instance, equipList->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v373 = sub_1B64348(0LL);
          sub_1B641F0(v373, 0LL);
        }
      }
      if ( v148 >= equipList->max_length )
        break;
      v152 = &equipList->obj.klass + v148;
      v152[4] = (Il2CppClass *)v151;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v152 + 4), v151, v149, v150);
      equipList = *p_equipList;
      if ( !*p_equipList )
        goto LABEL_131;
      max_length = equipList->max_length;
      if ( v148 >= max_length )
        break;
      v154 = (int32x2_t *)equipList->m_Items[v148];
      if ( v154 )
        *(int32x2_t *)&this->fields.equipatk = vadd_s32(v154[33], *(int32x2_t *)&this->fields.equipatk);
      if ( (__int64)++v148 >= (int)max_length )
        goto LABEL_53;
    }
LABEL_298:
    sub_1B6432C(Instance, v144);
  }
LABEL_53:
  maxhp = this->fields.maxhp;
  equiphp = this->fields.equiphp;
  this->fields.atk += this->fields.equipatk;
  this->fields.maxhp = equiphp + maxhp;
  p_aiId = &userSvt->fields.aiId;
  v381 = battleInfo;
  userCommandCodeIds = userSvt->fields.userCommandCodeIds;
  p_userCommandCodeIds = &this->fields.userCommandCodeIds;
  this->fields.userCommandCodeIds = userCommandCodeIds;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeIds,
    (int32_t)userCommandCodeIds,
    v145,
    v146);
  if ( this->fields.shiftNpcId >= 1 && v380 && this->fields.beforeUserSvtId >= 1 )
  {
    v162 = v380->fields.userCommandCodeIds;
    *p_userCommandCodeIds = v162;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeIds, (int32_t)v162, v160, v161);
  }
  v384 = userSvt;
  v163 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_CommandCodeInfo__TypeInfo,
                                                        v159,
                                                        v160);
  System_Collections_Generic_List_object____ctor(
    v163,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CommandCodeInfo___ctor__);
  p_commandCodeList_k__BackingField = &this->fields._commandCodeList_k__BackingField;
  this->fields._commandCodeList_k__BackingField = (struct System_Collections_Generic_List_CommandCodeInfo__o *)v163;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._commandCodeList_k__BackingField,
    (int32_t)v163,
    v165,
    v166);
  if ( userCommandCode && *p_userCommandCodeIds && (int)userCommandCode->max_length >= 1 )
  {
    v170 = 0LL;
    do
    {
      v171 = sub_1B64314(BattleServantData___c__DisplayClass311_1_TypeInfo, v167, v168);
      BattleServantData___c__DisplayClass311_1___ctor((BattleServantData___c__DisplayClass311_1_o *)v171, 0LL);
      if ( v170 >= userCommandCode->max_length )
        goto LABEL_298;
      if ( !v171 )
        goto LABEL_131;
      v174 = userCommandCode->m_Items[v170];
      *(_QWORD *)(v171 + 16) = v174;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v171 + 16), (int32_t)v174, v172, v173);
      v175 = *p_userCommandCodeIds;
      v178 = (System_Func_long__bool__o *)sub_1B64314(System_Func_long__bool__TypeInfo, v176, v177);
      System_Func_long__bool____ctor(
        v178,
        (Il2CppObject *)v171,
        Method_BattleServantData___c__DisplayClass311_1__setBaseServantData_b__0__,
        0LL);
      if ( BasicHelper__Any_long_(
             v175,
             (System_Func_T__bool__o *)v178,
             (const MethodInfo_2E247D4 *)Method_BasicHelper_Any_long___) )
      {
        Instance = (__int64)*p_commandCodeList_k__BackingField;
        if ( !*p_commandCodeList_k__BackingField )
          goto LABEL_131;
        v179 = *(Il2CppObject **)(v171 + 16);
        v180 = *(_QWORD *)(Instance + 16);
        v181 = Method_System_Collections_Generic_List_CommandCodeInfo__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v180 )
          goto LABEL_131;
        v182 = *(int *)(Instance + 24);
        if ( (unsigned int)v182 >= *(_DWORD *)(v180 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v179,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
        }
        else
        {
          v183 = v180 + 8 * v182;
          *(_DWORD *)(Instance + 24) = v182 + 1;
          *(_QWORD *)(v183 + 32) = v179;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v183 + 32), (int32_t)v179, v168, v169);
        }
      }
    }
    while ( (__int64)++v170 < (int)userCommandCode->max_length );
  }
  if ( !this->fields.commandAssistIds )
  {
    p_commandAssistIds = &this->fields.commandAssistIds;
    v246 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 5LL);
    this->fields.commandAssistIds = v246;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandAssistIds, (int32_t)v246, v247, v248);
    if ( v376 )
    {
      v250 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_commandAssistData__TypeInfo, v249, v168);
      System_Predicate_object____ctor(
        v250,
        object,
        Method_BattleServantData___c__DisplayClass311_0__setBaseServantData_b__1__,
        0LL);
      Instance = (__int64)System_Collections_Generic_List_object___FindAll(
                            v376,
                            (System_Predicate_T__o *)v250,
                            (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_commandAssistData__FindAll__);
      v251 = *p_commandAssistIds;
      if ( !*p_commandAssistIds )
        goto LABEL_131;
      v252 = (System_Collections_Generic_List_object__o *)Instance;
      v253 = 0LL;
      while ( (__int64)v253 < (int)v251->max_length )
      {
        if ( v252 )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v388,
            v252,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__);
          v390 = *(System_Collections_Generic_List_Enumerator_object__o *)&v388.fields.currentCryptoKey;
          while ( 1 )
          {
            v254 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v390,
                     (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__);
            if ( !v254 )
              break;
            if ( !v390.fields._current )
              sub_1B64324(v254);
            if ( v253 == LODWORD(v390.fields._current[2].klass) )
            {
              v256 = *p_commandAssistIds;
              if ( !*p_commandAssistIds )
                sub_1B64324(v254);
              if ( v253 >= v256->max_length )
                sub_1B6432C(v254, v255);
              v256->m_Items[v253 + 1] = (int32_t)v390.fields._current[1].klass;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v390,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__);
          v251 = *p_commandAssistIds;
          ++v253;
          if ( *p_commandAssistIds )
            continue;
        }
        goto LABEL_131;
      }
    }
  }
  commandCardParam = v384->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam,
    (int32_t)commandCardParam,
    v168,
    v169);
  if ( this->fields.shiftNpcId >= 1 && v380 && this->fields.beforeUserSvtId >= 1 )
  {
    v187 = v380->fields.commandCardParam;
    this->fields.commandCardParam = v187;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam, (int32_t)v187, v185, v186);
  }
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(v384, 0LL);
  object[1].monitor = BattleSkillIdList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&object[1].monitor, (int32_t)BattleSkillIdList, v189, v190);
  v191 = ((__int64 (__fastcall *)(BattleUserServantData_o *, void *))v384->klass->vtable._6_getSkillLevelList.method)(
           v384,
           v384->klass[1]._1.image);
  object[2].klass = (Il2CppClass *)v191;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&object[2], v191, v192, v193);
  v196 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                        v194,
                                                        v195);
  System_Collections_Generic_List_object____ctor(
    v196,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( isContinue )
  {
    skillInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.skillInfoList;
    v196 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                          System_Collections_Generic_List_BattleSkillInfoData__TypeInfo,
                                                          v197,
                                                          v198);
    System_Collections_Generic_List_object____ctor_55234504(
      v196,
      skillInfoList,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___75645608);
  }
  v200 = this->fields.skillInfoList;
  if ( !v200 )
    goto LABEL_131;
  size = (unsigned int)v200->fields._size;
  v202 = v200->fields._version + 1;
  v200->fields._size = 0;
  v200->fields._version = v202;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v200->fields._items, 0, size, 0LL);
  v203 = sub_1B64314(BattleServantData___c__DisplayClass311_2_TypeInfo, v197, size);
  BattleServantData___c__DisplayClass311_2___ctor((BattleServantData___c__DisplayClass311_2_o *)v203, 0LL);
  if ( !v203 )
    goto LABEL_131;
  *(_QWORD *)(v203 + 24) = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v203 + 24), (int32_t)object, v204, v205);
  v208 = *(_QWORD *)(v203 + 24);
  *(_DWORD *)(v203 + 16) = 0;
  if ( !v208 )
    goto LABEL_131;
  v209 = 0;
  while ( 1 )
  {
    v210 = *(_QWORD *)(v208 + 24);
    if ( !v210 )
      goto LABEL_131;
    if ( v209 >= *(_DWORD *)(v210 + 24) )
      break;
    v211 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleSkillInfoData__TypeInfo, v206, v207);
    System_Predicate_object____ctor(
      v211,
      (Il2CppObject *)v203,
      Method_BattleServantData___c__DisplayClass311_2__setBaseServantData_b__2__,
      0LL);
    if ( v196 )
    {
      Instance = (__int64)System_Collections_Generic_List_object___Find(
                            v196,
                            (System_Predicate_T__o *)v211,
                            (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
      v212 = *(_QWORD *)(v203 + 24);
      if ( v212 )
      {
        v213 = *(_QWORD *)(v212 + 24);
        if ( v213 )
        {
          v214 = *(int *)(v203 + 16);
          if ( (unsigned int)v214 >= *(_DWORD *)(v213 + 24) )
            goto LABEL_298;
          v215 = *(_QWORD *)(v212 + 32);
          if ( v215 )
          {
            if ( (unsigned int)v214 >= *(_DWORD *)(v215 + 24) )
              goto LABEL_298;
            Instance = (__int64)BattleServantData__addSkillInfo(
                                  this,
                                  11,
                                  v214,
                                  *(_DWORD *)(v213 + 4 * v214 + 32),
                                  *(_DWORD *)(v215 + 4 * v214 + 32),
                                  -1LL,
                                  -1,
                                  (BattleSkillInfoData_o *)Instance,
                                  v374);
            v208 = *(_QWORD *)(v203 + 24);
            v209 = *(_DWORD *)(v203 + 16) + 1;
            *(_DWORD *)(v203 + 16) = v209;
            if ( v208 )
              continue;
          }
        }
      }
    }
    goto LABEL_131;
  }
  BattleServantData__AddPassiveSkillInfo(this, v384, v207);
  Instance = v383;
  if ( !v383 )
    goto LABEL_131;
  Instance = (*(__int64 (__fastcall **)(__int64, __int64, BattleServantData_o *, _QWORD))(*(_QWORD *)v383 + 376LL))(
               v383,
               12LL,
               this,
               *(_QWORD *)(*(_QWORD *)v383 + 384LL));
  v216 = this->fields.equipList;
  v217 = &this->fields.equipList;
  if ( !v216 )
    goto LABEL_131;
  v218 = Instance;
  v219 = 0LL;
  v220 = 0;
  objecta = Instance;
  while ( 1 )
  {
    v221 = v216->max_length;
    if ( (v218 & ((__int64)v219 < (int)v221)) == 0 )
      break;
    if ( v219 >= v221 )
      goto LABEL_298;
    Instance = (__int64)v216->m_Items[v219];
    if ( Instance )
    {
      Instance = (__int64)BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)Instance, 0LL);
      v222 = *v217;
      if ( !*v217 )
        goto LABEL_131;
      if ( v219 >= v222->max_length )
        goto LABEL_298;
      v223 = Instance;
      Instance = (__int64)v222->m_Items[v219];
      if ( !Instance )
        goto LABEL_131;
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 408LL))(
                   Instance,
                   *(_QWORD *)(*(_QWORD *)Instance + 416LL));
      if ( !v223 )
        goto LABEL_131;
      v224 = *(_QWORD *)(v223 + 24);
      if ( (int)v224 >= 1 )
      {
        v225 = Instance;
        v226 = 0LL;
        v227 = Instance + 32;
        do
        {
          if ( v226 >= (unsigned int)v224 )
            goto LABEL_298;
          if ( !v225 )
            goto LABEL_131;
          if ( v226 >= *(unsigned int *)(v225 + 24) )
            goto LABEL_298;
          Instance = (__int64)BattleServantData__addSkillInfo(
                                this,
                                12,
                                v220 + (int)v226,
                                *(_DWORD *)(v223 + 32 + 4 * v226),
                                *(_DWORD *)(v227 + 4 * v226),
                                -1LL,
                                -1,
                                0LL,
                                v374);
          LODWORD(v224) = *(_DWORD *)(v223 + 24);
          ++v226;
        }
        while ( (__int64)v226 < (int)v224 );
        v218 = objecta;
        v220 += v226;
      }
      v217 = &this->fields.equipList;
      v216 = this->fields.equipList;
    }
    ++v219;
    if ( !v216 )
      goto LABEL_131;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v228 = (System_Collections_Generic_List_object__o *)*p_commandCodeList_k__BackingField;
  if ( !*p_commandCodeList_k__BackingField )
    goto LABEL_131;
  v229 = (CommandCodeSkillMaster_o *)Instance;
  v230 = 0;
  v231 = 0;
  while ( v231 < v228->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          v228,
                          v231,
                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__);
    if ( Instance )
    {
      Instance = (__int64)*p_commandCodeList_k__BackingField;
      if ( !*p_commandCodeList_k__BackingField )
        goto LABEL_131;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v231,
                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__);
      if ( !Instance )
        goto LABEL_131;
      if ( !v229 )
        goto LABEL_131;
      Instance = (__int64)CommandCodeSkillMaster__getCommandCodeSkillList(v229, *(_DWORD *)(Instance + 28), 0LL);
      if ( !Instance )
        goto LABEL_131;
      v232 = *(_DWORD *)(Instance + 24);
      v233 = Instance;
      if ( v232 >= 1 )
      {
        for ( i = 0; i < v232; ++i )
        {
          if ( i >= (unsigned int)v232 )
            goto LABEL_298;
          v235 = *(_QWORD *)(v233 + 8LL * i + 32);
          if ( !v235 )
            goto LABEL_131;
          Instance = (__int64)*p_commandCodeList_k__BackingField;
          if ( !*p_commandCodeList_k__BackingField )
            goto LABEL_131;
          v236 = *(_DWORD *)(v235 + 28);
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v231,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__);
          if ( !Instance )
            goto LABEL_131;
          Instance = (__int64)BattleServantData__addSkillInfo(
                                this,
                                22,
                                v230 + i,
                                v236,
                                1,
                                *(_QWORD *)(Instance + 16),
                                -1,
                                0LL,
                                v374);
          v232 = *(_DWORD *)(v233 + 24);
        }
        v230 += i;
      }
    }
    v228 = (System_Collections_Generic_List_object__o *)*p_commandCodeList_k__BackingField;
    ++v231;
    if ( !*p_commandCodeList_k__BackingField )
      goto LABEL_131;
  }
  (*(void (__fastcall **)(__int64, BattleServantData_o *, _QWORD))(*(_QWORD *)v383 + 392LL))(
    v383,
    this,
    *(_QWORD *)(*(_QWORD *)v383 + 400LL));
  (*(void (__fastcall **)(__int64, BattleServantData_o *, BattleInfoData_o *, _QWORD))(*(_QWORD *)v383 + 408LL))(
    v383,
    this,
    v381,
    *(_QWORD *)(*(_QWORD *)v383 + 416LL));
  BattleServantData__UpdateTreasureDevice(this, v384->fields.treasureDeviceId, v384->fields.treasureDeviceLv, v237);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6525/*"FULL_TD_POINT"*/, 0LL);
  nplineCount = this->fields.nplineCount;
  this->fields.lineMaxNp = Value;
  if ( nplineCount >= 1 )
  {
    v240 = nplineCount * Value;
    if ( v240 < this->fields.np )
      this->fields.np = v240;
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_131;
  TDErrorVoiceSeArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetTDErrorVoiceSeArray(
                                                                               (BattleDeckServantData_o *)Instance,
                                                                               0LL);
  v244 = TDErrorVoiceSeArray
       ? (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                               TDErrorVoiceSeArray,
                                                               (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___)
       : 0LL;
  this->fields.tdErrorStatusVoiceSeList = v244;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tdErrorStatusVoiceSeList, (int32_t)v244, v242, v243);
  v259 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, v257, v258);
  System_Collections_Hashtable___ctor_61954820(v259, 0LL);
  this->fields.commandtable = v259;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandtable, (int32_t)v259, v260, v261);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  v262 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v263 = sub_1B64170(int___TypeInfo, 6LL);
  v391.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732((System_Array_o *)v263, v391, 0LL);
  if ( !v263 )
    goto LABEL_131;
  if ( *(int *)(v263 + 24) >= 1 )
  {
    v264 = 0LL;
    do
    {
      v266 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v265 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v393.fields.currentCryptoKey = v266;
      *(_QWORD *)&v393.fields.fakeValue = v265;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v393, 0LL);
      if ( v264 >= *(unsigned int *)(v263 + 24) )
        goto LABEL_298;
      if ( !v262 )
        goto LABEL_131;
      Instance = ServantCardMaster__TryGetEntity(
                   (ServantCardMaster_o *)v262,
                   &entity,
                   Instance,
                   *(_DWORD *)(v263 + 32 + 4 * v264),
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_131;
        commandtable = this->fields.commandtable;
        LODWORD(v388.fields.currentCryptoKey) = entity->fields.cardId;
        v268 = j_il2cpp_value_box_0(int_TypeInfo, &v388);
        v270 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v269 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v271 = v268;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v394.fields.currentCryptoKey = v270;
        *(_QWORD *)&v394.fields.fakeValue = v269;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v394, 0LL);
        if ( !entity )
          goto LABEL_131;
        Instance = (__int64)ServantCardMaster__GetEntity(
                              (ServantCardMaster_o *)v262,
                              Instance,
                              entity->fields.cardId,
                              0LL);
        if ( !commandtable )
          goto LABEL_131;
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))commandtable->klass->vtable._30_set_Item.method)(
          commandtable,
          v271,
          Instance,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
    }
    while ( (__int64)++v264 < *(int *)(v263 + 24) );
  }
  Instance = (__int64)*p_svtdata;
  if ( !*p_svtdata )
    goto LABEL_131;
  Instance = ServantEntity__GetDefaultDeadType((ServantEntity_o *)Instance, 0, 0LL);
  v272 = this->fields.deckSvt;
  this->fields.deadtype = Instance;
  if ( !v272 )
    goto LABEL_131;
  if ( BattleDeckServantData__isEscape(v272, 0LL) )
  {
    v273 = v384;
    KillType = 1;
  }
  else
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_131;
    v273 = v384;
    if ( BattleDeckServantData__isDeadStand((BattleDeckServantData_o *)Instance, 0LL) )
    {
      KillType = 2;
    }
    else
    {
      Instance = (__int64)*p_deckSvt;
      if ( !*p_deckSvt )
        goto LABEL_131;
      if ( BattleDeckServantData__isDeadEffect((BattleDeckServantData_o *)Instance, 0LL) )
      {
        KillType = 3;
      }
      else
      {
        Instance = (__int64)*p_deckSvt;
        if ( !*p_deckSvt )
          goto LABEL_131;
        if ( BattleDeckServantData__isDeadWait((BattleDeckServantData_o *)Instance, 0LL) )
        {
          KillType = 4;
        }
        else
        {
          Instance = (__int64)*p_deckSvt;
          if ( !*p_deckSvt )
            goto LABEL_131;
          if ( BattleDeckServantData__IsDeadEnergy((BattleDeckServantData_o *)Instance, 0LL) )
          {
            KillType = 5;
          }
          else
          {
            Instance = (__int64)*p_deckSvt;
            if ( !*p_deckSvt )
              goto LABEL_131;
            if ( !BattleDeckServantData__ExistKillType((BattleDeckServantData_o *)Instance, 0LL) )
              goto LABEL_193;
            Instance = (__int64)*p_deckSvt;
            if ( !*p_deckSvt )
              goto LABEL_131;
            KillType = BattleDeckServantData__GetKillType((BattleDeckServantData_o *)Instance, 0LL);
          }
        }
      }
    }
  }
  this->fields.deadtype = KillType;
LABEL_193:
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_131;
  Instance = BattleDeckServantData__isAppear((BattleDeckServantData_o *)Instance, 0LL);
  v275 = this->fields.deckSvt;
  this->fields.isAppear = Instance & 1;
  if ( !v275 )
    goto LABEL_131;
  isRaid = BattleDeckServantData__isRaid(v275, 0LL);
  this->fields.isRaid = isRaid;
  if ( isRaid )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_131;
    RaidId = BattleDeckServantData__getRaidId((BattleDeckServantData_o *)Instance, 0LL);
    this->fields.raidId = RaidId;
    StartRaidState = BattleInfoData__getStartRaidState(v381, eventIda, RaidId, 0LL);
    this->fields.statestring = StartRaidState;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statestring, (int32_t)StartRaidState, v279, v280);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_131;
  Instance = BattleDeckServantData__isAddition((BattleDeckServantData_o *)Instance, 0LL);
  v281 = this->fields.deckSvt;
  this->fields.isAddition = Instance & 1;
  if ( !v281 )
    goto LABEL_131;
  Instance = BattleDeckServantData__isLeader(v281, 0LL);
  v282 = this->fields.deckSvt;
  this->fields.isLeader = Instance & 1;
  if ( !v282 )
    goto LABEL_131;
  isSuperBoss = BattleDeckServantData__isSuperBoss(v282, 0LL);
  this->fields.isSuperBoss = isSuperBoss;
  if ( isSuperBoss )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_131;
    SuperBossId = BattleDeckServantData__getSuperBossId((BattleDeckServantData_o *)Instance, 0LL);
    this->fields.superBossId = SuperBossId;
    this->fields.superbossnokorihp = BattleInfoData__getSuperBossNokoriHp(v381, SuperBossId, 0LL);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_131;
  isSendDamageForSuperBossId = BattleDeckServantData__isSendDamageForSuperBossId(
                                 (BattleDeckServantData_o *)Instance,
                                 0LL);
  this->fields.isSendDamageForSuperBossId = isSendDamageForSuperBossId;
  if ( isSendDamageForSuperBossId )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_131;
    this->fields.sendDamageForSuperBossId = BattleDeckServantData__getSendDamageForSuperBossId(
                                              (BattleDeckServantData_o *)Instance,
                                              0LL);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_131;
  this->fields.hpBarType = BattleDeckServantData__getHpBarType((BattleDeckServantData_o *)Instance, 0LL);
  v286 = this->fields.deckSvt;
  v288 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v287 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v395.fields.currentCryptoKey = v288;
  *(_QWORD *)&v395.fields.fakeValue = v287;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v395, 0LL);
  if ( !v286 )
    goto LABEL_131;
  this->fields.overwriteSvtVoiceId = BattleDeckServantData__getOverwriteSvtVoiceId(v286, Instance, 0LL);
  this->fields.battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                               v273->fields.battleVoice,
                               0LL);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v273->fields.battleVoice, 0LL)
    && !this->fields.overwriteSvtVoiceId )
  {
    v290 = *(_QWORD *)&v273->fields.battleVoice.fields.currentCryptoKey;
    v289 = *(_QWORD *)&v273->fields.battleVoice.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v396.fields.currentCryptoKey = v290;
    *(_QWORD *)&v396.fields.fakeValue = v289;
    this->fields.overwriteSvtVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v396, 0LL);
  }
  v292 = *(_QWORD *)&v273->fields.svtId.fields.currentCryptoKey;
  v291 = *(_QWORD *)&v273->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v397.fields.currentCryptoKey = v292;
  *(_QWORD *)&v397.fields.fakeValue = v291;
  v293 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v397, 0LL);
  BattleServantOverwriteName = BattleServantData__getBattleServantOverwriteName(this, v293, v294);
  this->fields.svtOverwriteBattleName = BattleServantOverwriteName;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteBattleName,
    (int32_t)BattleServantOverwriteName,
    v296,
    v297);
  Instance = (__int64)this->fields.deckSvt;
  if ( !Instance )
    goto LABEL_131;
  Instance = BattleDeckServantData__getScale((BattleDeckServantData_o *)Instance, 0LL);
  v298 = this->fields.deckSvt;
  this->fields.actorScale = Instance;
  if ( !v298 )
    goto LABEL_131;
  this->fields.roleType = v298->fields.roleType;
  *(_QWORD *)&this->fields.maxActNum = *((_QWORD *)p_aiId + 1);
  v299 = *(_QWORD *)p_aiId;
  *(_QWORD *)&this->fields.aiId = *(_QWORD *)p_aiId;
  Instance = (__int64)this->fields.aiState;
  if ( !Instance )
    goto LABEL_131;
  AiState__Initialize((AiState_o *)Instance, v299, 0LL);
  v300 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v273->fields.svtId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !*p_svtdata )
    goto LABEL_131;
  v301 = (ServantChangeMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608((*p_svtdata)[1], 0LL);
  if ( !v301 )
    goto LABEL_131;
  v302 = ServantChangeMaster__TrueNameEntity(v301, Instance, 0LL);
  if ( v302 )
    v300 = v302->fields.svtId;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  v303 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v303 )
    goto LABEL_131;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)v303,
                        Instance,
                        v300,
                        0LL);
  if ( !Instance )
    goto LABEL_131;
  v304 = (UserServantCollectionEntity_o *)Instance;
  this->fields.svtCommonFlag = *(_DWORD *)(Instance + 76);
  v306 = *(_QWORD *)(Instance + 24);
  v305 = *(_QWORD *)(Instance + 32);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v398.fields.currentCryptoKey = v306;
  *(_QWORD *)&v398.fields.fakeValue = v305;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v398, 0LL);
  v309 = this->fields.deckSvt;
  this->fields._servantCollectionId_k__BackingField = Instance;
  if ( !v309 )
LABEL_131:
    sub_1B64324(Instance);
  if ( !v309->fields.isFollowerSvt )
  {
    v310 = Instance;
    svtCommonFlag = v304->fields.svtCommonFlag;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    this->fields.svtCommonFlag = BattleData__GetSavedServantCommonFlag(v310, svtCommonFlag, 0LL);
  }
  if ( !this->fields.isEnemy && !this->fields.followerType )
  {
    tdPlayed = v304->fields.tdPlayed;
    this->fields.tdplayed = tdPlayed;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tdplayed, (int32_t)tdPlayed, v307, v308);
    this->fields.friendship = v304->fields.friendshipRank;
    goto LABEL_254;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  v312 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___);
  v314 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v313 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v315 = (UserNpcSvtRecordMaster_o *)v312;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v399.fields.currentCryptoKey = v314;
  *(_QWORD *)&v399.fields.fakeValue = v313;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v399, 0LL);
  if ( !v315 )
    goto LABEL_131;
  v316 = (System_Collections_Generic_IEnumerable_TSource__o *)UserNpcSvtRecordMaster__GetTdPlayed(v315, Instance, 0LL);
  v319 = (System_Collections_Generic_IEnumerable_TSource__o *)v304->fields.tdPlayed;
  if ( v316 )
  {
    v320 = (struct System_Int32_array *)v316;
    if ( !v319 )
    {
      p_tdplayed = &this->fields.tdplayed;
      this->fields.tdplayed = v320;
      LODWORD(v319) = (_DWORD)v320;
      goto LABEL_250;
    }
    v321 = System_Linq_Enumerable__Concat_int_(
             v316,
             v319,
             (const MethodInfo_2E52718 *)Method_System_Linq_Enumerable_Concat_int___);
    v319 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                  v321,
                                                                  (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  p_tdplayed = &this->fields.tdplayed;
  this->fields.tdplayed = (struct System_Int32_array *)v319;
LABEL_250:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_tdplayed, (int32_t)v319, v317, v318);
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_131;
  NpcFriendShipRank = BattleDeckServantData__GetNpcFriendShipRank((BattleDeckServantData_o *)Instance, v304, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(NpcFriendShipRank, 0LL);
LABEL_254:
  classBoardAddCommandSpells = v273->fields.classBoardAddCommandSpells;
  this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardAddCommandSpells,
    (int32_t)classBoardAddCommandSpells,
    v324,
    v325);
  classBoardAddPassiveSkills = v273->fields.classBoardAddPassiveSkills;
  this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardAddPassiveSkills,
    (int32_t)classBoardAddPassiveSkills,
    v328,
    v329);
  classBoardSquareIds = v273->fields.classBoardSquareIds;
  this->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._classBoardSquareIds_k__BackingField,
    (int32_t)classBoardSquareIds,
    v331,
    v332);
  BattleServantData__InitCommonAddIndividuality(this, v333);
  if ( isContinue )
    return;
  battlePointList = this->fields.battlePointList;
  if ( !battlePointList )
    goto LABEL_131;
  v335 = battlePointList->fields._size;
  v336 = battlePointList->fields._version + 1;
  battlePointList->fields._size = 0;
  battlePointList->fields._version = v336;
  if ( v335 >= 1 )
    System_Array__Clear((System_Array_o *)battlePointList->fields._items, 0, v335, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  v337 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantBattlePointMaster___);
  v339 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v338 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v340 = (ServantBattlePointMaster_o *)v337;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v400.fields.currentCryptoKey = v339;
  *(_QWORD *)&v400.fields.fakeValue = v338;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v400, 0LL);
  if ( !v340 )
    goto LABEL_131;
  Instance = (__int64)ServantBattlePointMaster__GetBattlePointEntities(v340, Instance, 0LL);
  if ( !Instance )
    goto LABEL_131;
  v341 = *(_QWORD *)Instance;
  v342 = Instance;
  v343 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
  {
    v344 = (int *)(*(_QWORD *)(v341 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)v344 - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
    {
      --v343;
      v344 += 4;
      if ( !v343 )
        goto LABEL_267;
    }
    v345 = v341 + 16LL * *v344 + 312;
  }
  else
  {
LABEL_267:
    v345 = sub_1BB60A8(Instance, System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, 0LL);
  }
  v346 = (*(__int64 (__fastcall **)(__int64, _QWORD))v345)(v342, *(_QWORD *)(v345 + 8));
  if ( !v346 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v347 = *(_QWORD *)v346;
    v348 = *(unsigned __int16 *)(*(_QWORD *)v346 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v346 + 302LL) )
    {
      v349 = (int *)(*(_QWORD *)(v347 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v349 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v348;
        v349 += 4;
        if ( !v348 )
          goto LABEL_274;
      }
      v350 = v347 + 16LL * *v349 + 312;
    }
    else
    {
LABEL_274:
      v350 = sub_1BB60A8(v346, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v350)(v346, *(_QWORD *)(v350 + 8)) & 1) == 0 )
      break;
    v351 = *(_QWORD *)v346;
    v352 = *(unsigned __int16 *)(*(_QWORD *)v346 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v346 + 302LL) )
    {
      v353 = (int *)(*(_QWORD *)(v351 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v353 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
      {
        --v352;
        v353 += 4;
        if ( !v352 )
          goto LABEL_281;
      }
      v354 = v351 + 16LL * *v353 + 312;
    }
    else
    {
LABEL_281:
      v354 = sub_1BB60A8(v346, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0LL);
    }
    v355 = (*(__int64 (__fastcall **)(__int64, _QWORD))v354)(v346, *(_QWORD *)(v354 + 8));
    if ( !v355 )
      sub_1B64324(0LL);
    v358 = (System_Collections_Generic_List_object__o *)this->fields.battlePointList;
    v359 = *(_DWORD *)(v355 + 20);
    v360 = (BattlePointData_o *)sub_1B64314(BattlePointData_TypeInfo, v356, v357);
    BattlePointData___ctor(v360, v359, this, 0LL);
    if ( !v358 )
      sub_1B64324(v361);
    items = v358->fields._items;
    v365 = Method_System_Collections_Generic_List_BattlePointData__Add__;
    ++v358->fields._version;
    if ( !items )
      sub_1B64324(v361);
    v366 = v358->fields._size;
    if ( (unsigned int)v366 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v358,
        (Il2CppObject *)v360,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v365[4] + 192LL) + 112LL));
    }
    else
    {
      v367 = &items->obj.klass + v366;
      v358->fields._size = v366 + 1;
      v367[4] = (Il2CppClass *)v360;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v367 + 4), (int32_t)v360, v362, v363);
    }
  }
  v368 = *(_QWORD *)v346;
  v369 = *(unsigned __int16 *)(*(_QWORD *)v346 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v346 + 302LL) )
  {
    v370 = (int *)(*(_QWORD *)(v368 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v370 - 1) != System_IDisposable_TypeInfo )
    {
      --v369;
      v370 += 4;
      if ( !v369 )
        goto LABEL_293;
    }
    v371 = v368 + 16LL * *v370 + 312;
  }
  else
  {
LABEL_293:
    v371 = sub_1BB60A8(v346, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v371)(v346, *(_QWORD *)(v371 + 8));
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
  __int64 v12; // x1
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
  unsigned int v26; // w0

  if ( (byte_49FEADF & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, data);
    byte_49FEADF = 1;
  }
  BattleServantData__OverwriteShiftDeckIndex(this, vals, (const MethodInfo *)vals);
  if ( !vals )
    goto LABEL_24;
  Value = DataVals__GetValue(vals, 0LL);
  buffData = this->fields.buffData;
  uniqueId = this->fields.uniqueId;
  v11 = Value;
  battle_info = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
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
    sub_1B6432C(battle_info, v12);
  }
  if ( !battle_info )
LABEL_24:
    sub_1B64324(battle_info);
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
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
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
    sub_1B64324(0LL);
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
  __int64 v10; // x1
  struct System_Int32_array *shiftDeckList; // x8
  int32_t max_length; // w24
  int64_t v13; // x21
  int32_t v14; // w8
  il2cpp_array_size_t v16; // w25
  const MethodInfo *v17; // x4
  struct System_Int32_array *v18; // x8
  BattleDeckServantData_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( !battleInfo )
    goto LABEL_18;
  isSuperBoss = (int64_t)*inDeckSvt;
  if ( !*inDeckSvt )
    goto LABEL_17;
  isSuperBoss = BattleDeckServantData__isSuperBoss((BattleDeckServantData_o *)isSuperBoss, 0LL);
  if ( (isSuperBoss & 1) == 0 )
  {
LABEL_18:
    LODWORD(v13) = -1;
    return v13;
  }
  if ( !*inDeckSvt
    || (isSuperBoss = BattleInfoData__GetEnemyDeckHp(battleInfo, (*inDeckSvt)->fields.uniqueId, 0LL), !*inDeckSvt)
    || (v8 = isSuperBoss,
        SuperBossId = BattleDeckServantData__getSuperBossId(*inDeckSvt, 0LL),
        isSuperBoss = BattleInfoData__getSuperBossNokoriHp(battleInfo, SuperBossId, 0LL),
        (shiftDeckList = this->fields.shiftDeckList) == 0LL) )
  {
LABEL_17:
    sub_1B64324(isSuperBoss);
  }
  max_length = shiftDeckList->max_length;
  v13 = isSuperBoss;
  if ( max_length - this->fields.shiftSubCount < 1 )
  {
    if ( isSuperBoss >= v8 )
      LODWORD(v13) = -1;
    else
      LODWORD(v13) = isSuperBoss;
    return v13;
  }
  if ( max_length - 1 >= this->fields.lowLimitShift )
  {
    while ( 1 )
    {
      v16 = max_length - 1;
      if ( max_length - 1 >= shiftDeckList->max_length )
        goto LABEL_27;
      isSuperBoss = BattleInfoData__GetShiftDeckHp(battleInfo, shiftDeckList->m_Items[v16 + 1], 0LL);
      if ( v13 <= (int)isSuperBoss )
        break;
      v13 -= (int)isSuperBoss;
      if ( max_length - 2 < this->fields.lowLimitShift )
        goto LABEL_9;
      shiftDeckList = this->fields.shiftDeckList;
      --max_length;
      if ( !shiftDeckList )
        goto LABEL_17;
    }
    v18 = this->fields.shiftDeckList;
    this->fields.shiftDeckIndex = max_length;
    if ( v18 )
    {
      if ( v16 >= v18->max_length )
LABEL_27:
        sub_1B6432C(isSuperBoss, v10);
      v19 = BattleServantData__SetShiftDeckData(
              (BattleServantData_o *)isSuperBoss,
              battleInfo,
              *inDeckSvt,
              v18->m_Items[v16 + 1],
              v17);
      *inDeckSvt = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)inDeckSvt, (int32_t)v19, v20, v21);
      v14 = v13;
      if ( (v13 & 0x80000000) != 0 )
        goto LABEL_10;
      return v13;
    }
    goto LABEL_17;
  }
LABEL_9:
  v14 = -1;
LABEL_10:
  if ( v13 <= v8 )
    return v13;
  else
    return v14;
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
  __int64 v17; // x1
  __int64 v18; // x1
  AiState_o *aiState; // x0
  const MethodInfo *v20; // x1
  unsigned int v21; // w0
  __int64 InfoId; // x0
  __int64 v23; // x1
  BattleSkillInfoData_o *current; // x21
  struct System_Int32_array *skillinfoid_list; // x8
  __int64 v26; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v28; // x25
  int v29; // w26
  struct System_Int32_array *skillcharge_list; // x8
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_String_o *statestring; // x1
  int32_t lowLimitShift; // w8
  const MethodInfo *v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t tmpAppearanceId; // w8
  struct System_Int32_array *commandAssistIds; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_IEnumerable_TSource__o *partAnimSaveDataArray; // x22
  BattleServantData___c_c *v45; // x0
  System_Func_object__object__o *_9__297_0; // x23
  Il2CppObject *v47; // x24
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Func_object__object__o *_9__297_1; // x24
  Il2CppObject *v52; // x25
  struct BattleServantData___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Collections_Generic_List_BattlePointData__o *battlePointList; // x8
  int32_t size; // w2
  int v61; // w9
  __int64 v62; // x1
  __int64 v63; // x2
  System_Collections_Generic_List_object__o *v64; // x21
  System_Collections_Generic_IEnumerable_TSource__o *battlePointSaveDataArray; // x20
  System_Func_object__object__o *v66; // x22
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FEA1F & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleServantData__setSaveData_b__297_2__, save);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattlePointData_SaveData__BattlePointData___, v5);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData_____,
      v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v9);
    sub_1B640C8(&System_Func_BattlePointData_SaveData__BattlePointData__TypeInfo, v10);
    sub_1B640C8(&System_Func_BattleServantData_PartAnimationSaveData__string__TypeInfo, v11);
    sub_1B640C8(
      &System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____TypeInfo,
      v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePointData__AddRange__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattlePointData__Clear__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v15);
    sub_1B640C8(&Method_BattleServantData___c__setSaveData_b__297_0__, v16);
    sub_1B640C8(&Method_BattleServantData___c__setSaveData_b__297_1__, v17);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v18);
    byte_49FEA1F = 1;
  }
  memset(&v69, 0, sizeof(v69));
  if ( save )
  {
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
    if ( aiState )
    {
      AiState__setSaveData(aiState, save->fields.aistateSave, 0LL);
      aiState = (AiState_o *)BattleServantData__get_AiStateManager(this, v20);
      if ( aiState )
      {
        AiStateManager__SetSaveData((AiStateManager_o *)aiState, save->fields.aiStateManagerSave, 0LL);
        aiState = (AiState_o *)this->fields.buffData;
        if ( aiState )
        {
          BattleBuffData__setSaveData((BattleBuffData_o *)aiState, save->fields.buffDataSave, 0LL);
          v21 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                  this,
                  this->klass->vtable._10_set_hp.methodPtr);
          ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
            this,
            v21,
            this->klass->vtable._15_get_IsAiNpc.methodPtr);
          if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
                 this,
                 this->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
          {
            aiState = (AiState_o *)this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
            if ( !aiState )
              goto LABEL_56;
            BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
              (BattleServantSnapShotGroupDefault_o *)aiState,
              this,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          aiState = (AiState_o *)this->fields.skillInfoList;
          if ( aiState )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v68,
              (System_Collections_Generic_List_object__o *)aiState,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
            v69 = v68;
            while ( 1 )
            {
              InfoId = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v69,
                         (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
              if ( (InfoId & 1) == 0 )
                break;
              current = (BattleSkillInfoData_o *)v69.fields._current;
              if ( !v69.fields._current )
                sub_1B64324(InfoId);
              if ( !BYTE4(v69.fields._current[1].monitor) )
              {
                skillinfoid_list = save->fields.skillinfoid_list;
                if ( !skillinfoid_list )
LABEL_24:
                  sub_1B64324(InfoId);
                v26 = 8LL;
                while ( 1 )
                {
                  max_length = skillinfoid_list->max_length;
                  v28 = v26 - 8;
                  if ( v26 - 8 >= (int)max_length )
                    break;
                  if ( v28 >= max_length )
                    sub_1B6432C(InfoId, v23);
                  v29 = *((_DWORD *)&skillinfoid_list->obj.klass + v26);
                  InfoId = BattleSkillInfoData__getInfoId(current, 0LL);
                  if ( v29 == (_DWORD)InfoId )
                  {
                    skillcharge_list = save->fields.skillcharge_list;
                    if ( !skillcharge_list )
                      sub_1B64324(InfoId);
                    if ( v28 >= skillcharge_list->max_length )
                      sub_1B6432C(InfoId, v23);
                    current->fields.chargeTurn = *((_DWORD *)&skillcharge_list->obj.klass + v26);
                  }
                  skillinfoid_list = save->fields.skillinfoid_list;
                  ++v26;
                  if ( !skillinfoid_list )
                    goto LABEL_24;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v69,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
            if ( (this->fields.deckIndex & 0x80000000) != 0 )
              this->fields.deckIndex = this->fields.index;
            this->fields.dressDispId = save->fields.dressDispId;
            this->fields.accumulationDamage = save->fields.accumulationDamage;
            statestring = save->fields.statestring;
            this->fields.statestring = statestring;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statestring, (int32_t)statestring, v31, v32);
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
            *(int32x2_t *)&this->fields.aftSquareIndex = vrev64_s32(*(int32x2_t *)&save->fields.befSquareIndex);
            this->fields.isAppliedHaveStars = save->fields.isAppliedHaveStars;
            *(_QWORD *)&this->fields.squareEffectSkillId = *(_QWORD *)&save->fields.squareEffectSkillId;
            this->fields.deadtype = save->fields.deadtype;
            this->fields.tdErrorTouchCount = save->fields.tdErrorTouchCount;
            this->fields.flgEntryFunction = save->fields.flgEntryFunction;
            commandAssistIds = save->fields.commandAssistIds;
            this->fields.commandAssistIds = commandAssistIds;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&this->fields.commandAssistIds,
              (int32_t)commandAssistIds,
              v36,
              v37);
            this->fields.partAnimationSaveDict = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.partAnimationSaveDict, 0, v40, v41);
            aiState = (AiState_o *)BasicHelper__IsNullOrEmpty(
                                     (System_Collections_ICollection_o *)save->fields.partAnimSaveDataArray,
                                     0LL);
            if ( ((unsigned __int8)aiState & 1) == 0 )
            {
              partAnimSaveDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)save->fields.partAnimSaveDataArray;
              v45 = BattleServantData___c_TypeInfo;
              if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
                v45 = BattleServantData___c_TypeInfo;
              }
              _9__297_0 = (System_Func_object__object__o *)v45->static_fields->__9__297_0;
              if ( !_9__297_0 )
              {
                if ( !v45->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v45);
                  v45 = BattleServantData___c_TypeInfo;
                }
                v47 = (Il2CppObject *)v45->static_fields->__9;
                _9__297_0 = (System_Func_object__object__o *)sub_1B64314(
                                                               System_Func_BattleServantData_PartAnimationSaveData__string__TypeInfo,
                                                               v42,
                                                               v43);
                System_Func_object__object____ctor(
                  _9__297_0,
                  v47,
                  Method_BattleServantData___c__setSaveData_b__297_0__,
                  0LL);
                static_fields = BattleServantData___c_TypeInfo->static_fields;
                static_fields->__9__297_0 = (struct System_Func_BattleServantData_PartAnimationSaveData__string__o *)_9__297_0;
                sub_1B6406C(
                  (ServantStatusBattleListViewItem_o *)&static_fields->__9__297_0,
                  (int32_t)_9__297_0,
                  v49,
                  v50);
                v45 = BattleServantData___c_TypeInfo;
              }
              if ( !v45->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v45);
                v45 = BattleServantData___c_TypeInfo;
              }
              _9__297_1 = (System_Func_object__object__o *)v45->static_fields->__9__297_1;
              if ( !_9__297_1 )
              {
                if ( !v45->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v45);
                  v45 = BattleServantData___c_TypeInfo;
                }
                v52 = (Il2CppObject *)v45->static_fields->__9;
                _9__297_1 = (System_Func_object__object__o *)sub_1B64314(
                                                               System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____TypeInfo,
                                                               v42,
                                                               v43);
                System_Func_object__object____ctor(
                  _9__297_1,
                  v52,
                  Method_BattleServantData___c__setSaveData_b__297_1__,
                  0LL);
                v53 = BattleServantData___c_TypeInfo->static_fields;
                v53->__9__297_1 = (struct System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____o *)_9__297_1;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->__9__297_1, (int32_t)_9__297_1, v54, v55);
              }
              v56 = (struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *)System_Linq_Enumerable__ToDictionary_object__object__object_(partAnimSaveDataArray, (System_Func_TSource__TKey__o *)_9__297_0, (System_Func_TSource__TElement__o *)_9__297_1, (const MethodInfo_2E71B44 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData_____);
              this->fields.partAnimationSaveDict = v56;
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)&this->fields.partAnimationSaveDict,
                (int32_t)v56,
                v57,
                v58);
            }
            battlePointList = this->fields.battlePointList;
            this->fields.isUseTdBetweenEnemyTurnEndAndTactical = save->fields.isUseTdBetweenEnemyTurnEndAndTactical;
            if ( battlePointList )
            {
              size = battlePointList->fields._size;
              v61 = battlePointList->fields._version + 1;
              battlePointList->fields._size = 0;
              battlePointList->fields._version = v61;
              if ( size >= 1 )
                System_Array__Clear((System_Array_o *)battlePointList->fields._items, 0, size, 0LL);
              if ( BasicHelper__IsNullOrEmpty(
                     (System_Collections_ICollection_o *)save->fields.battlePointSaveDataArray,
                     0LL) )
              {
                return 1;
              }
              v64 = (System_Collections_Generic_List_object__o *)this->fields.battlePointList;
              battlePointSaveDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)save->fields.battlePointSaveDataArray;
              v66 = (System_Func_object__object__o *)sub_1B64314(
                                                       System_Func_BattlePointData_SaveData__BattlePointData__TypeInfo,
                                                       v62,
                                                       v63);
              System_Func_object__object____ctor(
                v66,
                (Il2CppObject *)this,
                Method_BattleServantData__setSaveData_b__297_2__,
                0LL);
              aiState = (AiState_o *)System_Linq_Enumerable__Select_object__object_(
                                       battlePointSaveDataArray,
                                       (System_Func_TSource__TResult__o *)v66,
                                       (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattlePointData_SaveData__BattlePointData___);
              if ( v64 )
              {
                System_Collections_Generic_List_object___AddRange(
                  v64,
                  (System_Collections_Generic_IEnumerable_T__o *)aiState,
                  (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattlePointData__AddRange__);
                return 1;
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_1B64324(aiState);
  }
  return 0;
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
  Il2CppObject *v15; // x4

  if ( (byte_49FEA23 & 1) == 0 )
  {
    sub_1B640C8(&Method_JsonManager_Deserialize_BattleServantData_SaveData___, inDeckSvt);
    sub_1B640C8(&JsonManager_TypeInfo, v14);
    byte_49FEA23 = 1;
  }
  if ( saveStr )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__Deserialize_object_(
            (Il2CppObject *)saveStr,
            (const MethodInfo_2E9ED70 *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
  }
  else
  {
    v15 = 0LL;
  }
  BattleServantData__setServantData_42469176(
    this,
    inDeckSvt,
    battleEnt,
    infollowerType,
    (BattleServantData_SaveData_o *)v15,
    0LL,
    commandAssistDataList,
    v7);
}


void __fastcall BattleServantData__setServantData_42469176(
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
  System_Int32_array *ShiftList; // x0
  struct System_Int32_array **p_shiftDeckList; // x26
  int32_t v18; // w2
  int32_t v19; // w3
  System_Int32_array *v20; // x0
  struct System_Int32_array **p_changeSvtList; // x28
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x4
  int v27; // w27
  int32_t changeSvtIndex; // w9
  __int64 shiftDeckIndex; // x8
  struct System_Int32_array *v30; // x9
  il2cpp_array_size_t v31; // w8
  __int64 v32; // x8
  int32_t DispBreakShift; // w0
  struct System_Int32_array *v34; // x26
  int32_t max_length; // w1
  int32_t v36; // w28
  struct System_Int32_array *shiftDeckList; // x8
  int32_t v38; // w3
  BattleInfoData_o *battleInfo; // x1
  struct System_Int32_array *v40; // x9
  BattleInfoData_o *v41; // x2
  int32_t inited; // w25
  const MethodInfo *v43; // x6
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  BattleDeckServantData_o *inDeckSvta; // [xsp+8h] [xbp-58h] BYREF

  v14 = this;
  inDeckSvta = inDeckSvt;
  if ( (byte_49FEA24 & 1) == 0 )
  {
    sub_1B640C8(&System_Math_TypeInfo, inDeckSvt);
    this = (BattleServantData_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    byte_49FEA24 = 1;
  }
  if ( !inDeckSvt )
    goto LABEL_41;
  ShiftList = BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  p_shiftDeckList = &v14->fields.shiftDeckList;
  v14->fields.shiftDeckList = ShiftList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->fields.shiftDeckList, (int32_t)ShiftList, v18, v19);
  v20 = BattleDeckServantData__getChangeList(inDeckSvt, 0LL);
  p_changeSvtList = &v14->fields.changeSvtList;
  v14->fields.changeSvtList = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v14->fields.changeSvtList, (int32_t)v20, v22, v23);
  v14->fields._IsChangeDropItemByShift_k__BackingField = BattleDeckServantData__IsChangeDropItemByShift(inDeckSvt, 0LL);
  this = (BattleServantData_o *)BattleDeckServantData__GetDefShiftPosition(inDeckSvt, -1LL, 0LL);
  v27 = (int)this;
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    v14->fields.lowLimitShift = (_DWORD)this + 1;
    v14->fields.shiftDeckIndex = (_DWORD)this + 1;
    v14->fields.shiftSubCount = 1;
  }
  if ( saveData )
  {
    changeSvtIndex = saveData->fields.changeSvtIndex;
    shiftDeckIndex = saveData->fields.shiftDeckIndex;
    if ( (int)shiftDeckIndex <= 0 )
    {
      if ( changeSvtIndex < 1 )
        goto LABEL_28;
    }
    else if ( changeSvtIndex <= 0 )
    {
      v30 = *p_shiftDeckList;
      if ( !*p_shiftDeckList )
        goto LABEL_41;
      v31 = shiftDeckIndex - 1;
      if ( v31 < v30->max_length )
      {
        v32 = (__int64)v30 + 4 * v31;
        goto LABEL_25;
      }
      goto LABEL_42;
    }
    v40 = *p_changeSvtList;
    if ( !*p_changeSvtList )
      goto LABEL_41;
    if ( (unsigned int)shiftDeckIndex < v40->max_length )
    {
      v32 = (__int64)v40 + 4 * shiftDeckIndex;
LABEL_25:
      v38 = *(_DWORD *)(v32 + 32);
      if ( battleEnt )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_42:
    sub_1B6432C(this, v24);
  }
  DispBreakShift = BattleDeckServantData__GetDispBreakShift(inDeckSvt, 0LL);
  if ( DispBreakShift < 1 )
    goto LABEL_28;
  v34 = *p_shiftDeckList;
  if ( !v34 )
    goto LABEL_28;
  max_length = v34->max_length;
  if ( v14->fields.shiftDeckIndex >= max_length )
    goto LABEL_28;
  v36 = DispBreakShift;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    max_length = v34->max_length;
  }
  this = (BattleServantData_o *)System_Math__Min_62194364(v27 + v36 + 1, max_length, 0LL);
  shiftDeckList = v14->fields.shiftDeckList;
  v14->fields.shiftDeckIndex = (int)this;
  if ( !shiftDeckList )
LABEL_41:
    sub_1B64324(this);
  if ( (int)this - 1 >= shiftDeckList->max_length )
    goto LABEL_42;
  v38 = shiftDeckList->m_Items[(int)this];
  if ( battleEnt )
  {
LABEL_26:
    battleInfo = battleEnt->fields.battleInfo;
    goto LABEL_27;
  }
LABEL_20:
  battleInfo = 0LL;
LABEL_27:
  inDeckSvta = BattleServantData__SetShiftDeckData(this, battleInfo, inDeckSvt, v38, v26);
LABEL_28:
  if ( battleEnt )
    v41 = battleEnt->fields.battleInfo;
  else
    v41 = 0LL;
  inited = BattleServantData__setInitQuestShift(v14, &inDeckSvta, v41, v25);
  BattleServantData__setBaseServantData(v14, inDeckSvta, battleEnt, infollowerType, commandAssistDataList, 0, v43);
  BattleServantData__InitializeBuff(v14, v44);
  BattleServantData__setInitQuest(v14, inited, v45);
  if ( saveData )
  {
    v14->fields.shiftNpcId = saveData->fields.shiftNpcId;
    v14->fields.beforeUserSvtId = saveData->fields.beforeUserSvtId;
    v14->fields.transformIndex = saveData->fields.transformIndex;
    v14->fields.transformLimitCount = saveData->fields.transformLimitCount;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)battleData, 0LL, 0LL) )
    BattleServantData__loadTransformServant(v14, battleData, v46);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleServantData_SaveData_o *, Il2CppMethodPointer))v14->klass->vtable._17_setSaveData.method)(
                                  v14,
                                  saveData,
                                  v14->klass->vtable._18_getAiState.methodPtr);
  if ( ((unsigned __int8)this & 1) != 0 )
    BattleServantData__UpdateBattlePointSetting(v14, battleEnt, v47);
  if ( !battleEnt )
    goto LABEL_41;
  BattleServantData__SetCommandAssistSkill(v14, battleEnt->fields.eventId, v47);
}


void __fastcall BattleServantData__setServantData_42472304(
        BattleServantData_o *this,
        BattleDeckServantData_o *inDeckSvt,
        BattleUserServantData_o *userSvt,
        BattleInfoData_o *battleInfo,
        CommandCodeInfo_array *userCommandCode,
        int32_t infollowerType,
        const MethodInfo *method)
{
  struct System_Int32_array *ShiftList; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Int32_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t DefShiftPosition; // w0
  const MethodInfo *v20; // x3
  int32_t inited; // w24
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // [xsp+8h] [xbp-48h]
  BattleDeckServantData_o *inDeckSvta; // [xsp+18h] [xbp-38h] BYREF

  inDeckSvta = inDeckSvt;
  if ( !inDeckSvt )
    sub_1B64324(this);
  ShiftList = BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  this->fields.shiftDeckList = ShiftList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.shiftDeckList, (int32_t)ShiftList, v14, v15);
  v16 = BattleDeckServantData__getChangeList(inDeckSvt, 0LL);
  this->fields.changeSvtList = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.changeSvtList, (int32_t)v16, v17, v18);
  this->fields._IsChangeDropItemByShift_k__BackingField = BattleDeckServantData__IsChangeDropItemByShift(inDeckSvt, 0LL);
  DefShiftPosition = BattleDeckServantData__GetDefShiftPosition(inDeckSvt, -1LL, 0LL);
  if ( (DefShiftPosition & 0x80000000) == 0 )
  {
    this->fields.lowLimitShift = DefShiftPosition + 1;
    this->fields.shiftDeckIndex = DefShiftPosition + 1;
    this->fields.shiftSubCount = 1;
  }
  inited = BattleServantData__setInitQuestShift(this, &inDeckSvta, battleInfo, v20);
  BattleServantData__setBaseServantData_42472576(
    this,
    inDeckSvta,
    userSvt,
    battleInfo,
    userCommandCode,
    0,
    infollowerType,
    0LL,
    0,
    v24);
  BattleServantData__InitializeBuff(this, v22);
  BattleServantData__setInitQuest(this, inited, v23);
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
  __int64 v12; // x1
  struct System_Int32_array *shiftDeckList; // x9
  int32_t v14; // w8
  struct System_Int32_array *changeSvtList; // x9
  char *v16; // x8
  int32_t *v17; // x8
  BattleDeckServantData_o *v18; // x21
  BattleEntity_o *battle_ent; // x20
  int32_t Int; // w0
  const MethodInfo *v21; // x6
  const MethodInfo *v22; // x1
  unsigned int MaxHp; // w0
  int32_t v24; // w8
  int32_t v25; // w10
  int v26; // w8

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
        v14 = this->fields.shiftDeckIndex + shiftValue,
        this->fields.shiftDeckIndex = v14,
        !shiftDeckList) )
  {
LABEL_20:
    sub_1B64324(deckSvt);
  }
  if ( v14 - 1 >= shiftDeckList->max_length )
    goto LABEL_21;
  if ( !this->fields.changeSvtIndex )
  {
    v16 = (char *)shiftDeckList + 4 * v14 - 4;
    goto LABEL_10;
  }
  changeSvtList = this->fields.changeSvtList;
  if ( !changeSvtList )
    goto LABEL_20;
  if ( v14 >= changeSvtList->max_length )
LABEL_21:
    sub_1B6432C(deckSvt, v12);
  v16 = (char *)changeSvtList + 4 * v14;
LABEL_10:
  v17 = (int32_t *)(v16 + 32);
  if ( !data )
    goto LABEL_20;
  deckSvt = (BattleDeckServantData_o *)data->fields.battle_info;
  if ( !deckSvt )
    goto LABEL_20;
  deckSvt = BattleInfoData__getShiftServantData((BattleInfoData_o *)deckSvt, *v17, 0LL);
  if ( !deckSvt )
    goto LABEL_20;
  v18 = deckSvt;
  deckSvt->fields.id = this->fields.index + 1;
  deckSvt->fields.uniqueId = this->fields.uniqueId;
  battle_ent = data->fields.battle_ent;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v18, battle_ent, Int, 0LL, 0, v21);
  MaxHp = BattleServantData__getMaxHp(this, v22);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v24 = this->fields.maxtpturn;
  if ( nexttpturn <= v24 )
    v25 = nexttpturn;
  else
    v25 = this->fields.maxtpturn;
  if ( maxtpturn <= v24 )
    v26 = nexttpturn - maxtpturn + v24;
  else
    v26 = v25;
  this->fields.nexttpturn = v26 & ~(v26 >> 31);
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
  BattleDeckServantData_o *ShiftServantData; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  BattleDeckServantData_o *v17; // x22
  struct BattleDeckServantData_o *v18; // x8
  int64_t userSvtId; // x9
  BattleEntity_o *battle_ent; // x23
  int32_t Int; // w0
  const MethodInfo *v22; // x6
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  __int64 v25; // x22
  const MethodInfo *v26; // x1
  __int64 v27; // x8
  const MethodInfo *v28; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  const MethodInfo *v32; // x1
  signed __int64 v33; // x22
  signed __int64 v34; // x25
  __int64 v35; // x24

  v6 = this;
  if ( (byte_49FEA2F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, data);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    this = (BattleServantData_o *)sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_49FEA2F = 1;
  }
  if ( (npcId & 0x80000000) == 0 )
  {
    deckSvt = v6->fields.deckSvt;
    *(_QWORD *)&v6->fields.transformIndex = 0xFFFFFFFFLL;
    v6->fields.shiftNpcId = npcId;
    if ( !deckSvt )
      goto LABEL_40;
    v6->fields.beforeUserSvtId = deckSvt->fields.userSvtId;
    v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      data,
                                                      *(_QWORD *)&npcId);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v6->fields.isEnemy )
    {
      this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v13);
      if ( !this )
        goto LABEL_40;
      v25 = 0LL;
      while ( (int)v25 < this->fields.uniqueId )
      {
        this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v24);
        if ( this )
        {
          if ( (unsigned int)v25 >= this->fields.uniqueId )
LABEL_41:
            sub_1B6432C(this, v26);
          v27 = *(&this->fields.userSvtId.fields.currentCryptoKey + v25);
          if ( v27 )
          {
            if ( v12 )
            {
              v28 = (const MethodInfo *)*(unsigned int *)(v27 + 40);
              items = v12->fields._items;
              v30 = Method_System_Collections_Generic_List_int__Add__;
              ++v12->fields._version;
              if ( items )
              {
                size = v12->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v12,
                    (int32_t)v28,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v12->fields._size = size + 1;
                  items->m_Items[size + 1] = (int)v28;
                }
                this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v28);
                ++v25;
                if ( this )
                  continue;
              }
            }
          }
        }
        goto LABEL_40;
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
        v17 = ShiftServantData;
        this = (BattleServantData_o *)&v6->fields.deckSvt;
        v18 = v6->fields.deckSvt;
        if ( v18 )
        {
          userSvtId = v17->fields.userSvtId;
          v17->fields.isFollowerSvt = v18->fields.isFollowerSvt;
          v6->fields.transformUserSvtId = userSvtId;
          v6->fields.deckSvt = v17;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)this, (int32_t)v17, v15, v16);
          v17->fields.id = v6->fields.index + 1;
          v17->fields.uniqueId = v6->fields.uniqueId;
          battle_ent = data->fields.battle_ent;
          Int = Follower__getInt(v6->fields.followerType, 0LL);
          BattleServantData__setBaseServantData(v6, v17, battle_ent, Int, 0LL, 0, v22);
          if ( !v6->fields.isEnemy )
          {
            this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v23);
            if ( !this )
              goto LABEL_40;
            v33 = 0LL;
            while ( v33 < this->fields.uniqueId )
            {
              if ( v12 )
              {
                v34 = v12->fields._size;
                this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v32);
                if ( this )
                {
                  if ( v33 >= (unsigned __int64)(unsigned int)this->fields.uniqueId )
                    goto LABEL_41;
                  v35 = *(&this->fields.userSvtId.fields.currentCryptoKey + v33);
                  if ( v33 >= v34 )
                  {
                    if ( !v35 )
                      goto LABEL_40;
                    LODWORD(this) = 0;
                  }
                  else
                  {
                    this = (BattleServantData_o *)System_Collections_Generic_List_int___get_Item(
                                                    v12,
                                                    v33,
                                                    (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
                    if ( !v35 )
                      goto LABEL_40;
                  }
                  *(_DWORD *)(v35 + 40) = (_DWORD)this;
                  ++v33;
                  this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, v26);
                  if ( this )
                    continue;
                }
              }
              goto LABEL_40;
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
LABEL_40:
    sub_1B64324(this);
  }
}


void __fastcall BattleServantData__setStateString(
        BattleServantData_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.statestring = str;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.statestring, (int32_t)str, (int32_t)method, v3);
}


void __fastcall BattleServantData__setTestSaveData(
        BattleServantData_o *this,
        BattleServantData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save )
    sub_1B64324(this);
  this->fields.summonNpcId = save->fields.summonNpcId;
  this->fields.uniqueId = save->fields.uniqueId;
}


void __fastcall BattleServantData__setTransformServant(
        BattleServantData_o *this,
        BattleData_o *data,
        int32_t transformIndex,
        int32_t overwriteLimitCount,
        bool fromLoad,
        BattleLogicSkill_SkillExecArgs_o *skillExecArgs,
        const MethodInfo *method)
{
  bool v12; // w25
  int32_t v13; // w2
  int32_t v14; // w3
  void *battle_info; // x0
  const MethodInfo *v16; // x3
  int shiftNpcId; // w2
  int32_t uniqueId; // w1
  struct BattleDeckServantData_o *deckSvt; // x8
  struct BattleDeckServantData_o *v20; // x23
  int64_t v21; // x1
  BattleUserServantData_o *UserServantFromID; // x21
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w9
  int32_t v27; // w8
  int32_t v28; // w10
  int32_t v29; // w10
  int32_t v30; // w11
  struct System_String_o *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_Int32_array *v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x23
  __int64 v38; // x24
  int32_t v39; // w0
  const MethodInfo *v40; // x2
  struct System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w0
  const MethodInfo *v45; // x2
  struct System_String_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x2
  struct BattleDeckServantData_o *v51; // x22
  int v52; // w24
  const MethodInfo *v53; // x3
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t atk; // w9
  int32_t hp; // w8
  int32_t maxActNum; // w10
  int32_t actPriority; // w10
  int32_t equiphp; // w11
  struct System_String_o *name; // x1
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Int32_array *individuality; // x1
  int32_t v65; // w2
  int32_t v66; // w3
  __int64 v67; // x22
  __int64 v68; // x23
  int32_t v69; // w0
  const MethodInfo *v70; // x2
  struct System_String_o *ServantOverwriteName; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  int32_t v74; // w0
  const MethodInfo *v75; // x2
  struct System_String_o *BattleServantOverwriteName; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  const MethodInfo *v79; // x2
  BattleInfoData_o *v80; // x22
  __int64 v81; // x23
  __int64 v82; // x24
  const MethodInfo *v83; // x1
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x2
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct System_Int32_array *classBoardSquareIds; // x1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  int32_t v93; // w2
  int32_t v94; // w3
  BattleServantData___c__DisplayClass317_0_o dataa; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  v12 = fromLoad;
  if ( (byte_49FEA2C & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, data);
    byte_49FEA2C = 1;
  }
  dataa.fields.__4__this = 0LL;
  *(_QWORD *)&dataa.fields.fromLoad = 0LL;
  dataa.fields.data = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&dataa, (int32_t)data, transformIndex, overwriteLimitCount);
  dataa.fields.__4__this = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&dataa.fields.__4__this, (int32_t)this, v13, v14);
  dataa.fields.fromLoad = v12;
  shiftNpcId = this->fields.shiftNpcId;
  if ( shiftNpcId >= 1 )
  {
    BattleServantData__setSkillShiftServant(this, dataa.fields.data, shiftNpcId, v16);
    return;
  }
  if ( !dataa.fields.data )
    goto LABEL_50;
  battle_info = dataa.fields.data->fields.battle_info;
  if ( !battle_info )
    goto LABEL_50;
  uniqueId = this->fields.uniqueId;
  if ( transformIndex == -1 )
  {
    battle_info = BattleInfoData__GetDeckServantDataFromBothDeck((BattleInfoData_o *)battle_info, uniqueId, 0LL);
    if ( !battle_info )
      return;
    if ( dataa.fields.data )
    {
      v51 = (struct BattleDeckServantData_o *)battle_info;
      battle_info = dataa.fields.data->fields.battle_info;
      if ( battle_info )
      {
        battle_info = BattleInfoData__getUserServantFromID(
                        (BattleInfoData_o *)battle_info,
                        this->fields.transformUserSvtId,
                        0LL);
        v52 = battle_info ? *((unsigned __int8 *)battle_info + 536) : 0;
        *(_QWORD *)&this->fields.transformIndex = 0xFFFFFFFFLL;
        this->fields.transformUserSvtId = -1LL;
        if ( dataa.fields.data )
        {
          battle_info = dataa.fields.data->fields.battle_info;
          if ( battle_info )
          {
            UserServantFromID = BattleInfoData__getUserServantFromID(
                                  (BattleInfoData_o *)battle_info,
                                  v51->fields.userSvtId,
                                  0LL);
            BattleServantData___setTransformServant_g__RemoveBuffGrantedByBeforePassiveSkill_317_0(
              this,
              UserServantFromID,
              &dataa,
              v53);
            this->fields.deckSvt = v51;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.deckSvt, (int32_t)v51, v54, v55);
            if ( UserServantFromID )
            {
              atk = UserServantFromID->fields.atk;
              hp = UserServantFromID->fields.hp;
              this->fields.maxtpturn = UserServantFromID->fields.chargeTurn;
              maxActNum = UserServantFromID->fields.maxActNum;
              if ( maxActNum )
                this->fields.maxActNum = maxActNum;
              actPriority = UserServantFromID->fields.actPriority;
              if ( actPriority )
                this->fields.actPriority = actPriority;
              equiphp = this->fields.equiphp;
              this->fields.atk = this->fields.equipatk + atk;
              this->fields.maxhp = equiphp + hp;
              *(_QWORD *)&this->fields.downstarrate = *(_QWORD *)&UserServantFromID->fields.starRate;
              this->fields.atktdrate = UserServantFromID->fields.tdAttackRate;
              this->fields.deathRate = UserServantFromID->fields.deathRate;
              this->fields.criticalRate = UserServantFromID->fields.criticalRate;
              *(_QWORD *)&this->fields.treasuredvcId = *(_QWORD *)&UserServantFromID->fields.treasureDeviceId;
              this->fields.transformSvtId = BattleUserServantData__getBattleSvtId(UserServantFromID, 0LL);
              this->fields._imageSvtId_k__BackingField = UserServantFromID->fields.imageSvtId;
              name = v51->fields.name;
              this->fields.svtName = name;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtName, (int32_t)name, v62, v63);
              this->fields.overkillTargetId = -1;
              individuality = UserServantFromID->fields.individuality;
              this->fields.svtIndividuality = individuality;
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)&this->fields.svtIndividuality,
                (int32_t)individuality,
                v65,
                v66);
              v68 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.currentCryptoKey;
              v67 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v97.fields.currentCryptoKey = v68;
              *(_QWORD *)&v97.fields.fakeValue = v67;
              v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v97, 0LL);
              ServantOverwriteName = BattleServantData__getServantOverwriteName(this, v69, v70);
              this->fields.svtOverwriteName = ServantOverwriteName;
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteName,
                (int32_t)ServantOverwriteName,
                v72,
                v73);
              v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      UserServantFromID->fields.svtId,
                      0LL);
              BattleServantOverwriteName = BattleServantData__getBattleServantOverwriteName(this, v74, v75);
              this->fields.svtOverwriteBattleName = BattleServantOverwriteName;
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteBattleName,
                (int32_t)BattleServantOverwriteName,
                v77,
                v78);
              if ( v52 )
                BattleServantData__ExtendedUpdateOnTransformServant(this, UserServantFromID, v79);
              BattleServantData__CalculateLimitCountWithSpoilerProtection(this, UserServantFromID, v79);
              goto LABEL_41;
            }
          }
        }
      }
    }
LABEL_50:
    sub_1B64324(battle_info);
  }
  battle_info = BattleInfoData__getTransformDeckServantData(
                  (BattleInfoData_o *)battle_info,
                  uniqueId,
                  transformIndex,
                  0LL);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_50;
  v20 = (struct BattleDeckServantData_o *)battle_info;
  if ( !battle_info )
    goto LABEL_50;
  *((_BYTE *)battle_info + 56) = deckSvt->fields.isFollowerSvt;
  this->fields.transformIndex = transformIndex;
  this->fields.transformLimitCount = overwriteLimitCount;
  v21 = *((_QWORD *)battle_info + 3);
  this->fields.transformUserSvtId = v21;
  if ( !dataa.fields.data )
    goto LABEL_50;
  battle_info = dataa.fields.data->fields.battle_info;
  if ( !battle_info )
    goto LABEL_50;
  UserServantFromID = BattleInfoData__getUserServantFromID((BattleInfoData_o *)battle_info, v21, 0LL);
  BattleServantData___setTransformServant_g__RemoveBuffGrantedByBeforePassiveSkill_317_0(
    this,
    UserServantFromID,
    &dataa,
    v23);
  this->fields.deckSvt = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.deckSvt, (int32_t)v20, v24, v25);
  if ( !UserServantFromID )
    goto LABEL_50;
  v26 = UserServantFromID->fields.atk;
  v27 = UserServantFromID->fields.hp;
  this->fields.maxtpturn = UserServantFromID->fields.chargeTurn;
  v28 = UserServantFromID->fields.maxActNum;
  if ( v28 )
    this->fields.maxActNum = v28;
  v29 = UserServantFromID->fields.actPriority;
  if ( v29 )
    this->fields.actPriority = v29;
  v30 = this->fields.equiphp;
  this->fields.atk = this->fields.equipatk + v26;
  this->fields.maxhp = v30 + v27;
  *(_QWORD *)&this->fields.downstarrate = *(_QWORD *)&UserServantFromID->fields.starRate;
  this->fields.atktdrate = UserServantFromID->fields.tdAttackRate;
  this->fields.deathRate = UserServantFromID->fields.deathRate;
  this->fields.criticalRate = UserServantFromID->fields.criticalRate;
  *(_QWORD *)&this->fields.treasuredvcId = *(_QWORD *)&UserServantFromID->fields.treasureDeviceId;
  this->fields.transformSvtId = BattleUserServantData__getBattleSvtId(UserServantFromID, 0LL);
  this->fields._imageSvtId_k__BackingField = UserServantFromID->fields.imageSvtId;
  v31 = v20->fields.name;
  this->fields.svtName = v31;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtName, (int32_t)v31, v32, v33);
  this->fields.overkillTargetId = -1;
  v34 = UserServantFromID->fields.individuality;
  this->fields.svtIndividuality = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtIndividuality, (int32_t)v34, v35, v36);
  v38 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v96.fields.currentCryptoKey = v38;
  *(_QWORD *)&v96.fields.fakeValue = v37;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v96, 0LL);
  v41 = BattleServantData__getServantOverwriteName(this, v39, v40);
  this->fields.svtOverwriteName = v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteName, (int32_t)v41, v42, v43);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(UserServantFromID->fields.svtId, 0LL);
  v46 = BattleServantData__getBattleServantOverwriteName(this, v44, v45);
  this->fields.svtOverwriteBattleName = v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteBattleName, (int32_t)v46, v47, v48);
  if ( UserServantFromID->fields.isAfterTransformKey )
    BattleServantData__ExtendedUpdateOnTransformServant(this, UserServantFromID, v50);
  if ( overwriteLimitCount >= 1 )
  {
    this->fields._dispLimitCount_k__BackingField = UserServantFromID->fields.dispLimitCount;
    this->fields._commandCardLimitCount_k__BackingField = UserServantFromID->fields.commandCardLimitCount;
    this->fields._iconLimitCount_k__BackingField = UserServantFromID->fields.iconLimitCount;
  }
LABEL_41:
  BattleServantData__changeTransformServant(this, v49);
  if ( !dataa.fields.data )
    goto LABEL_50;
  v80 = dataa.fields.data->fields.battle_info;
  v82 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v81 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v98.fields.currentCryptoKey = v82;
  *(_QWORD *)&v98.fields.fakeValue = v81;
  battle_info = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v98, 0LL);
  if ( !v80 )
    goto LABEL_50;
  if ( BattleInfoData__IsUseNewTransformLogic(v80, (int32_t)battle_info, 0LL) )
  {
    BattleServantData__SetServantCommandCard(this, v83);
    BattleServantData__OverwriteOwnSkillsForTransformedServant(this, UserServantFromID, v84);
    BattleServantData__AddPassiveSkillInfo(this, UserServantFromID, v85);
    if ( !dataa.fields.fromLoad )
      BattleServantData__AddPassiveBuffOnTransform(this, dataa.fields.data, skillExecArgs, v87);
    classBoardSquareIds = UserServantFromID->fields.classBoardSquareIds;
    this->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields._classBoardSquareIds_k__BackingField,
      (int32_t)classBoardSquareIds,
      v86,
      (int32_t)v87);
    classBoardAddPassiveSkills = UserServantFromID->fields.classBoardAddPassiveSkills;
    this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.classBoardAddPassiveSkills,
      (int32_t)classBoardAddPassiveSkills,
      v90,
      v91);
    classBoardAddCommandSpells = UserServantFromID->fields.classBoardAddCommandSpells;
    this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.classBoardAddCommandSpells,
      (int32_t)classBoardAddCommandSpells,
      v93,
      v94);
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
  int32_t v3; // w3

  this->fields._LoadedAssetArgs_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._LoadedAssetArgs_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v3; // w3

  this->fields._classBoardSquareIds_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._classBoardSquareIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v3; // w3

  this->fields._commandCodeList_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._commandCodeList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA86 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_23162/*"shiftUpdateStatus"*/, v7);
    byte_49FEA86 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_1B64324(v10);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_23162/*"shiftUpdateStatus"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *skillInfoList; // x0
  char v13; // w25
  int32_t v14; // w24
  bool v15; // w8

  if ( (byte_49FEA93 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, *(_QWORD *)&param);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v11);
    byte_49FEA93 = 1;
  }
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_8:
    sub_1B64324(skillInfoList);
  v13 = 0;
  v14 = 0;
  while ( v14 < skillInfoList->fields._size )
  {
    skillInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   skillInfoList,
                                                                   v14,
                                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( skillInfoList )
    {
      v15 = BattleSkillInfoData__TurnExtend(
              (BattleSkillInfoData_o *)skillInfoList,
              param,
              max,
              targetIndex,
              targetList,
              0LL);
      skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
      v13 |= v15;
      ++v14;
      if ( skillInfoList )
        continue;
    }
    goto LABEL_8;
  }
  return v13 & 1;
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
  System_Collections_Generic_List_object__o *skillInfoList; // x0
  char v13; // w25
  int32_t v14; // w24
  bool v15; // w8

  if ( (byte_49FEA92 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, *(_QWORD *)&param);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v11);
    byte_49FEA92 = 1;
  }
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_8:
    sub_1B64324(skillInfoList);
  v13 = 0;
  v14 = 0;
  while ( v14 < skillInfoList->fields._size )
  {
    skillInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   skillInfoList,
                                                                   v14,
                                                                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( skillInfoList )
    {
      v15 = BattleSkillInfoData__TurnProgress(
              (BattleSkillInfoData_o *)skillInfoList,
              param,
              max,
              targetIndex,
              targetList,
              0LL);
      skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
      v13 |= v15;
      ++v14;
      if ( skillInfoList )
        continue;
    }
    goto LABEL_8;
  }
  return v13 & 1;
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
    sub_1B64324(MaxHp);
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


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleServantData__turnBuffProgressing(
        BattleServantData_o *this,
        bool isEndEnemyTurn,
        System_Int32_array *fieldIndiv,
        BattleLogic_o *logic,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  System_Func_object__o *v20; // x21
  const MethodInfo *v21; // x4

  if ( (byte_49FEA59 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_BattleBuffData_BuffData____TypeInfo, isEndEnemyTurn);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass435_0__turnBuffProgressing_g__RemoveBuff_0__, v10);
    sub_1B640C8(&BattleServantData___c__DisplayClass435_0_TypeInfo, v11);
    byte_49FEA59 = 1;
  }
  v12 = sub_1B64314(BattleServantData___c__DisplayClass435_0_TypeInfo, isEndEnemyTurn, fieldIndiv);
  BattleServantData___c__DisplayClass435_0___ctor((BattleServantData___c__DisplayClass435_0_o *)v12, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v12 + 24) = logic;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)logic, v16, v17);
  *(_BYTE *)(v12 + 32) = isEndEnemyTurn;
  v20 = (System_Func_object__o *)sub_1B64314(System_Func_BattleBuffData_BuffData____TypeInfo, v18, v19);
  System_Func_object____ctor(
    v20,
    (Il2CppObject *)v12,
    Method_BattleServantData___c__DisplayClass435_0__turnBuffProgressing_g__RemoveBuff_0__,
    0LL);
  return BattleServantData__RemoveBuffsWithUpdateView(
           this,
           (System_Func_BattleBuffData_BuffData____o *)v20,
           fieldIndiv,
           *(BattleLogic_o **)(v12 + 24),
           v21);
}


void __fastcall BattleServantData__turnBuffProgressingIncrease(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B64324(0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  BattleBuffData_CheckIndividualitiesData_o *v20; // x22
  __int64 buffData; // x0
  int32_t ActValue_42105172; // w0
  const MethodInfo *v23; // x2
  int32_t v24; // w24
  int32_t v25; // w26
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t ActValue_42104692; // w24
  __int64 v29; // x1
  __int64 v30; // x2
  BattleLogicBuff_ReduceHpProcess_o *v31; // x26
  __int64 v32; // x1
  __int64 v33; // x2
  struct BattleLogicBuff_ConvertReduceRegainProcess_o *convertDamageProc; // x8
  int TotalConvertReduceToRegainParam_k__BackingField; // w8
  unsigned int v36; // w29
  bool v37; // w24
  DataVals_o *v38; // x24
  BattleBuffData_o *v39; // x27
  __int64 v40; // x1
  __int64 v41; // x2
  BattleBuffData_CheckIndividualitiesData_o *v42; // x28
  const MethodInfo *v43; // x2
  __int64 v44; // x27
  const MethodInfo *v45; // x2
  BattleActionData_o *NoEffectObject; // x0
  int32_t FixDamage; // w27
  const MethodInfo *v48; // x2
  int v49; // w24
  struct System_Int32_array *shiftDeckList; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v52; // x6
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x25
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x1
  BattleActionData_o *v59; // x0
  int32_t Wave; // w0
  const MethodInfo *v61; // x5
  int32_t v62; // w25
  struct BattlePerformance_o *perf; // x8
  const MethodInfo *v64; // x3
  int v65; // w8
  __int64 v66; // x23
  unsigned int v67; // w25
  __int64 v68; // x26
  __int64 *v69; // x26
  __int64 v70; // t1
  __int64 v71; // x8
  int v72; // w9
  bool v73; // vf
  int v74; // w9
  struct BattleData_o *v75; // x8
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x1
  int32_t v78; // w22
  const MethodInfo *v79; // x2
  int maxtpturn; // w8
  const MethodInfo *v81; // x1
  const MethodInfo *v82; // x3
  const MethodInfo *v83; // x3
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-90h] BYREF
  System_String_o *missText; // [xsp+38h] [xbp-78h] BYREF
  bool v88; // [xsp+44h] [xbp-6Ch] BYREF
  bool actflg; // [xsp+48h] [xbp-68h] BYREF
  int32_t digit; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_49FEA57 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, fieldIndiv);
    sub_1B640C8(&BattleActionData_DamageData_TypeInfo, v11);
    sub_1B640C8(&DataVals_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v15);
    sub_1B640C8(&int___TypeInfo, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v17);
    sub_1B640C8(&BattleLogicBuff_ReduceHpProcess_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_1/*""*/, v19);
    byte_49FEA57 = 1;
  }
  v88 = 0;
  missText = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.isGutsSleepRelease = 1;
  digit = 1000;
  v20 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       fieldIndiv,
                                                       logic);
  BattleBuffData_CheckIndividualitiesData___ctor(v20, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !this->fields.isEnemy )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_96;
    ActValue_42105172 = BattleBuffData__getActValue_42105172((BattleBuffData_o *)buffData, 30, v20, 0LL);
    v24 = ActValue_42105172;
    if ( ActValue_42105172 <= 0 )
      v25 = ActValue_42105172;
    else
      v25 = 0;
    if ( BattleServantData__isGainNp(this, ActValue_42105172 > 0, v23) )
      v27 = v24;
    else
      v27 = v25;
    BattleServantData__addNp(this, v27, 1, v26);
  }
  actflg = 0;
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_96;
  ActValue_42104692 = BattleBuffData__getActValue_42104692((BattleBuffData_o *)buffData, 32, &actflg, v20, 0LL);
  v88 = 0;
  missText = 0LL;
  v31 = (BattleLogicBuff_ReduceHpProcess_o *)sub_1B64314(BattleLogicBuff_ReduceHpProcess_TypeInfo, v29, v30);
  BattleLogicBuff_ReduceHpProcess___ctor(v31, this, 0LL);
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_96;
  buffData = BattleBuffData__getActValue(
               (BattleBuffData_o *)buffData,
               33,
               &v88,
               &missText,
               v20,
               (BattleLogicBuff_BaseProcess_o *)v31,
               0LL);
  if ( !v31 )
    goto LABEL_96;
  convertDamageProc = v31->fields.convertDamageProc;
  if ( !convertDamageProc )
    goto LABEL_96;
  TotalConvertReduceToRegainParam_k__BackingField = convertDamageProc->fields._TotalConvertReduceToRegainParam_k__BackingField;
  v36 = TotalConvertReduceToRegainParam_k__BackingField + ActValue_42104692;
  if ( actflg )
  {
    if ( (v36 & 0x80000000) != 0 )
    {
      v37 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v37 = 0;
    if ( TotalConvertReduceToRegainParam_k__BackingField < 1 || (v36 & 0x80000000) != 0 )
      goto LABEL_33;
  }
  v38 = (DataVals_o *)sub_1B64314(DataVals_TypeInfo, v32, v33);
  DataVals___ctor(v38, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v39 = this->fields.buffData;
  v42 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v40,
                                                       v41);
  BattleBuffData_CheckIndividualitiesData___ctor(v42, this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v39 )
    goto LABEL_96;
  if ( BattleBuffData__isTurnBuff(v39, 42, v42, 1, 0LL) )
  {
    LODWORD(v44) = 0;
  }
  else
  {
    buffData = BattleServantData__getUpDownHeal(this, &digit, v43);
    if ( !v38 )
      goto LABEL_96;
    v44 = (__int64)((int)buffData * (unsigned __int64)v36) / digit;
    v38->fields.isShowForcedEffect = 1;
  }
  BattleServantData__provisionalHeal(this, v44, v43);
  buffData = BattleServantData__resultHeal(this, v44, v45);
  if ( !actiondata )
    goto LABEL_96;
  buffData = (__int64)BattleActionData__setHealData(actiondata, this->fields.uniqueId, v44, 0, 0, v38, 0, 0LL);
  if ( (int)v44 <= 0 )
  {
    if ( !v38 )
      goto LABEL_96;
    if ( !v38->fields.isShowForcedEffect )
    {
      if ( !logic )
        goto LABEL_96;
      NoEffectObject = BattleLogic__getNoEffectObject(logic, this->fields.uniqueId, 0, v38, 0, 0LL, 0LL);
      BattleActionData__addAction(actiondata, NoEffectObject, 0LL);
    }
  }
  v37 = 1;
LABEL_33:
  FixDamage = BattleLogicBuff_ReduceHpProcess__GetFixDamage(v31, 0LL);
  buffData = BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(v31, 0LL);
  v88 = buffData & 1;
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
        goto LABEL_96;
      data = logic->fields.data;
      if ( !data )
        goto LABEL_96;
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
    BattleServantData__ResultDamage(this, v49, 0LL, 0LL, 0LL, 0, v52);
    v55 = sub_1B64314(BattleActionData_DamageData_TypeInfo, v53, v54);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v55, 0LL);
    if ( !v55 )
      goto LABEL_96;
    *(_DWORD *)(v55 + 28) = this->fields.uniqueId;
    buffData = sub_1B64170(int___TypeInfo, 1LL);
    if ( !buffData )
      goto LABEL_96;
    v58 = buffData;
    if ( !*(_DWORD *)(buffData + 24) )
      goto LABEL_97;
    *(_DWORD *)(buffData + 32) = v49;
    *(_QWORD *)(v55 + 96) = buffData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 96), buffData, v56, v57);
    *(_DWORD *)(v55 + 16) = 0;
    *(_BYTE *)(v55 + 128) = 1;
    if ( !actiondata
      || (BattleActionData__setDamageData(actiondata, (BattleActionData_DamageData_o *)v55, 0LL, 0, 0, 0LL),
          (buffData = (__int64)this->fields.buffData) == 0)
      || (v59 = BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)buffData, this, 1, 0LL),
          BattleActionData__addSideEffectActionData(actiondata, v59, 1, 0LL),
          !logic) )
    {
LABEL_96:
      sub_1B64324(buffData);
    }
    Wave = BattleLogic__getWave(logic, 0LL);
    BattleServantData__setActionHistory(this, -1, 5, Wave, 0, v61);
    v37 = 1;
  }
  if ( !this->fields.isEnemy )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_96;
    buffData = BattleBuffData__getActValue_42105172((BattleBuffData_o *)buffData, 31, v20, 0LL);
    if ( !actiondata )
      goto LABEL_96;
    v62 = buffData;
    BattleActionData__addCriticalStar(actiondata, buffData, 0LL);
    if ( !logic )
      goto LABEL_96;
    buffData = (__int64)logic->fields.data;
    if ( !buffData )
      goto LABEL_96;
    BattleData__addCriticalPoint((BattleData_o *)buffData, v62, 0, 0LL);
    perf = logic->fields.perf;
    if ( !perf )
      goto LABEL_96;
    buffData = (__int64)perf->fields.statusPerf;
    if ( !buffData )
      goto LABEL_96;
    BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)buffData, -1, 1, 0LL);
  }
  if ( BattleServantData__canUseSkill(this, -1, v48) )
  {
    buffData = (__int64)this->fields.skillInfoList;
    if ( !buffData )
      goto LABEL_96;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v85,
      (System_Collections_Generic_List_object__o *)buffData,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    for ( i = v85;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
          BattleSkillInfoData__TurnProgress((BattleSkillInfoData_o *)i.fields._current, 1, 0, -1, 0LL, 0LL) )
    {
      if ( !i.fields._current )
        sub_1B64324(0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  }
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_96;
  buffData = (__int64)BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
  if ( !buffData )
    goto LABEL_96;
  v65 = *(_DWORD *)(buffData + 24);
  v66 = buffData;
  if ( v65 >= 1 )
  {
    v67 = 0;
    while ( v67 < v65 )
    {
      v68 = v66 + 8LL * (int)v67;
      v70 = *(_QWORD *)(v68 + 32);
      v69 = (__int64 *)(v68 + 32);
      buffData = v70;
      if ( !v70 )
        goto LABEL_96;
      buffData = BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( (buffData & 1) != 0 )
        goto LABEL_77;
      if ( v67 >= *(_DWORD *)(v66 + 24) )
        break;
      buffData = *v69;
      if ( !*v69 )
        goto LABEL_96;
      buffData = BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( (buffData & 1) != 0 )
      {
LABEL_77:
        if ( v67 >= *(_DWORD *)(v66 + 24) )
          break;
        v71 = *v69;
        if ( !*v69 )
          goto LABEL_96;
        v72 = *(_DWORD *)(v71 + 112);
        v73 = __OFSUB__(v72, 1);
        v74 = v72 - 1;
        if ( v74 < 0 == v73 )
          *(_DWORD *)(v71 + 112) = v74;
      }
      v65 = *(_DWORD *)(v66 + 24);
      if ( (int)++v67 >= v65 )
        goto LABEL_82;
    }
LABEL_97:
    sub_1B6432C(buffData, v58);
  }
LABEL_82:
  if ( !logic )
    goto LABEL_96;
  v75 = logic->fields.data;
  if ( !v75 )
    goto LABEL_96;
  if ( !BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(this, v75->fields.wavecount, v75->fields.turnCount, v64)
    && !this->fields.isUseTdBetweenEnemyTurnEndAndTactical
    && !BattleServantData__isTDSeraled(this, v76)
    && !BattleServantData__isNobleSeal(this, v77)
    && this->fields.treasuredvcId >= 1 )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_96;
    v78 = BattleBuffData__getActValue_42105172((BattleBuffData_o *)buffData, 35, v20, 0LL);
    if ( BattleServantData__isGainNp(this, 1, v79) )
    {
      maxtpturn = this->fields.nexttpturn + ~v78;
      if ( this->fields.maxtpturn < maxtpturn )
        maxtpturn = this->fields.maxtpturn;
      this->fields.nexttpturn = maxtpturn & ~(maxtpturn >> 31);
    }
  }
  buffData = (__int64)this->fields.aiState;
  this->fields.isUseTdBetweenEnemyTurnEndAndTactical = 0;
  if ( !buffData )
    goto LABEL_96;
  AiState__fieldTurnProgressing((AiState_o *)buffData, 0LL);
  BattleServantData__updateHp(this, v81);
  BattleServantData__updateConditionsBuff(this, fieldIndiv, logic->fields.perf, v82);
  BattleServantData__updateBuff(this, 1, 1, v83);
  return v37;
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
  __int64 v16; // x19
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v20; // x20
  Il2CppObject *current; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FEA90 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, doAuraUpdate);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B640C8(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo, v9);
    sub_1B640C8(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___, v10);
    sub_1B640C8(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass545_0__updateBuff_b__0__, v14);
    sub_1B640C8(&BattleServantData___c__DisplayClass545_0_TypeInfo, v15);
    byte_49FEA90 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v16 = sub_1B64314(BattleServantData___c__DisplayClass545_0_TypeInfo, doAuraUpdate, doClassIconAuraUpdate);
  BattleServantData___c__DisplayClass545_0___ctor((BattleServantData___c__DisplayClass545_0_o *)v16, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)this, v18, v19),
        *(_BYTE *)(v16 + 24) = doAuraUpdate,
        *(_BYTE *)(v16 + 25) = doClassIconAuraUpdate,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_1B64324(paramobjelist);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v16 + 32);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v24 = *v20;
      if ( !*v20 )
      {
        v24 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_1B64314(
                                                                              UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo,
                                                                              v22,
                                                                              v23);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v24,
          (Il2CppObject *)v16,
          Method_BattleServantData___c__DisplayClass545_0__updateBuff_b__0__,
          0LL);
        *v20 = v24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)v24, v25, v26);
      }
      if ( !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v24,
        (const MethodInfo_2E7DD18 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_49FEADC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, fieldInfividualities);
    byte_49FEADC = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  canSubStateBuffIndv = (System_Int32_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL);
  ServantActor = 0LL;
  if ( ((unsigned __int8)canSubStateBuffIndv & 1) != 0 )
  {
    if ( !perf )
      goto LABEL_15;
    ServantActor = BattlePerformance__getServantActor(perf, this->fields.uniqueId, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  canSubStateBuffIndv = (System_Int32_array *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL);
  logic = 0LL;
  if ( ((unsigned __int8)canSubStateBuffIndv & 1) != 0 )
  {
    if ( !perf )
      goto LABEL_15;
    logic = perf->fields.logic;
  }
  canSubStateBuffIndv = BattleServantData__getBuffIndividualities(this, 0, 0, 1, v17);
  if ( !buffData )
LABEL_15:
    sub_1B64324(canSubStateBuffIndv);
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
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA8F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_17740/*"changeHp"*/, v7);
    byte_49FEA8F = 1;
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
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v14.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v13 )
    {
      if ( !current )
        sub_1B64324(v13);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17740/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA87 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_24210/*"updateNp"*/, v7);
    byte_49FEA87 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_1B64324(v10);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_24210/*"updateNp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__updateNpGauge_42524832(
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
  __int64 v16; // x19
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v22; // x20
  Il2CppObject *current; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FEA88 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, incNpArray);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8);
    sub_1B640C8(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo, v9);
    sub_1B640C8(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___, v10);
    sub_1B640C8(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass531_0__updateNpGauge_b__0__, v14);
    sub_1B640C8(&BattleServantData___c__DisplayClass531_0_TypeInfo, v15);
    byte_49FEA88 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v16 = sub_1B64314(BattleServantData___c__DisplayClass531_0_TypeInfo, incNpArray, *(_QWORD *)&index);
  BattleServantData___c__DisplayClass531_0___ctor((BattleServantData___c__DisplayClass531_0_o *)v16, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)this, v18, v19),
        *(_QWORD *)(v16 + 24) = incNpArray,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)incNpArray, v20, v21),
        *(_DWORD *)(v16 + 32) = index,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_1B64324(paramobjelist);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v16 + 40);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v26 = *v22;
      if ( !*v22 )
      {
        v26 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_1B64314(
                                                                              UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo,
                                                                              v24,
                                                                              v25);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v26,
          (Il2CppObject *)v16,
          Method_BattleServantData___c__DisplayClass531_0__updateNpGauge_b__0__,
          0LL);
        *v22 = v26;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 40), (int32_t)v26, v27, v28);
      }
      if ( !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v26,
        (const MethodInfo_2E7DD18 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA8B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_24215/*"updateTDGauge"*/, v7);
    byte_49FEA8B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_1B64324(v10);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_24215/*"updateTDGauge"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEA8A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_24217/*"updateView"*/, v7);
    byte_49FEA8A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v10 )
    {
      if ( !current )
        sub_1B64324(v10);
      UnityEngine_GameObject__SendMessage_69108052(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_24217/*"updateView"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1B64324(v7);
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

  if ( (byte_49FEA56 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, skillInfo);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FEA56 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !skillInfo)
    || (v6 = (SkillLvMaster_o *)Instance,
        Instance = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                             skillInfo,
                             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        !v6)
    || (Instance = SkillLvMaster__GetEntity(v6, (int32_t)Instance, skillInfo->fields.skilllv, 0LL)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  skillInfo->fields.chargeTurn = *((_DWORD *)Instance + 6);
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
  int32_t v6; // w2
  int32_t v7; // w3

  this->fields.key = keyName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)keyName, (int32_t)array, (int32_t)method);
  this->fields.saveDataArray = array;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.saveDataArray, (int32_t)array, v6, v7);
  return this;
}


void __fastcall BattleServantData_SaveData___ctor(BattleServantData_SaveData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEB87 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    byte_49FEB87 = 1;
  }
  *(_QWORD *)&this->fields.deckIndex = -1LL;
  this->fields.dressDispId = -1;
  this->fields.shiftNpcId = -1;
  v3 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 5LL);
  this->fields.commandAssistIds = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commandAssistIds, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784___ctor(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784__MoveNext(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *v4; // x19
  int32_t _1__state; // w8
  BattleServantData_o *_4__this; // x20
  BattleBuffData_o *buffData; // x21
  BattleCommandData_o *commandSelf; // x23
  BattleBuffData_CheckIndividualitiesData_o *v9; // x22
  BattleBuffData_BuffData_array *BuffList_42092284; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w8
  int32_t _7__wrap2; // w8
  struct BattleBuffData_BuffData_array *_7__wrap1; // x9
  il2cpp_array_size_t max_length; // w10
  BattleSkillInfoData_o *FunctionSkillInfoData; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  bool result; // w0

  v4 = this;
  if ( (byte_49FEB93 & 1) == 0 )
  {
    this = (BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *)sub_1B640C8(
                                                                                 &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                                                 method);
    byte_49FEB93 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap2 = v4->fields.__7__wrap2;
    v4->fields.__1__state = -1;
    v13 = _7__wrap2 + 1;
    v4->fields.__7__wrap2 = v13;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_16;
    buffData = _4__this->fields.buffData;
    commandSelf = v4->fields.commandSelf;
    v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                        BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                        method,
                                                        v2);
    BattleBuffData_CheckIndividualitiesData___ctor(v9, _4__this, 0LL, commandSelf, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_16;
    BuffList_42092284 = BattleBuffData__getBuffList_42092284(buffData, 137, v9, 1, 0, 0LL, 0LL);
    v4->fields.__7__wrap1 = BuffList_42092284;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)BuffList_42092284, v11, v12);
    v13 = 0;
    v4->fields.__7__wrap2 = 0;
  }
  this = (BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *)&v4->fields.__7__wrap1;
  _7__wrap1 = v4->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_16;
  max_length = _7__wrap1->max_length;
  if ( v13 < (int)max_length )
  {
    if ( v13 >= max_length )
      sub_1B6432C(this, method);
    if ( _4__this )
    {
      FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(_4__this, _7__wrap1->m_Items[v13], 0LL);
      v4->fields.__2__current = FunctionSkillInfoData;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)FunctionSkillInfoData, v19, v20);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_16:
    sub_1B64324(this);
  }
  this->klass = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
  return 0;
}


System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784__System_Collections_Generic_IEnumerable_BattleSkillInfoData__GetEnumerator(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  int32_t v5; // w3
  BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *v6; // x20
  struct BattleServantData_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleCommandData_o *_3__commandSelf; // x1

  if ( (byte_49FEB94 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_TypeInfo, method);
    byte_49FEB94 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *)sub_1B64314(
                                                                               BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_TypeInfo,
                                                                               method,
                                                                               v2);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandSelf = this->fields.__3__commandSelf;
  v6->fields.commandSelf = _3__commandSelf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.commandSelf, (int32_t)_3__commandSelf, v2, v5);
  return (System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v6;
}


BattleSkillInfoData_o *__fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784__System_Collections_Generic_IEnumerator_BattleSkillInfoData__get_Current(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784__System_Collections_IEnumerator_Reset(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784__System_Collections_IEnumerator_get_Current(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784__System_IDisposable_Dispose(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__784_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData__EnumerateContinueFunctionSkill_d__385___ctor(
        BattleServantData__EnumerateContinueFunctionSkill_d__385_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleServantData__EnumerateContinueFunctionSkill_d__385__MoveNext(
        BattleServantData__EnumerateContinueFunctionSkill_d__385_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
  BattleServantData__EnumerateContinueFunctionSkill_d__385_o *v4; // x19
  int32_t _1__state; // w8
  BattleServantData_o *_4__this; // x20
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  BattleBuffData_BuffData_array *BuffList_42092284; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int v12; // w8
  Il2CppClass **v13; // x8
  BattleBuffData_BuffData_o *v14; // x21
  struct BattleBuffData_BuffData_array *_7__wrap1; // x9
  int max_length; // w10
  bool result; // w0
  BattleSkillInfoData_o *FunctionSkillInfoData; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v20; // w2
  int32_t v21; // w3

  v4 = this;
  if ( (byte_49FEB95 & 1) == 0 )
  {
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__385_o *)sub_1B640C8(
                                                                           &BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                                           method);
    byte_49FEB95 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_14;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_21;
  buffData = _4__this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                      BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                      method,
                                                      v2);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, _4__this, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_21;
  BuffList_42092284 = BattleBuffData__getBuffList_42092284(buffData, 131, v8, 1, 0, 0LL, 0LL);
  v4->fields.__7__wrap1 = BuffList_42092284;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)BuffList_42092284, v10, v11);
  v12 = 0;
  for ( v4->fields.__7__wrap2 = 0; ; v4->fields.__7__wrap2 = v12 )
  {
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__385_o *)&v4->fields.__7__wrap1;
    _7__wrap1 = v4->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_21;
    max_length = _7__wrap1->max_length;
    if ( v12 >= max_length )
    {
      this->klass = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
      return 0;
    }
    if ( v12 >= (unsigned int)max_length )
      sub_1B6432C(this, method);
    v13 = &_7__wrap1->obj.klass + v12;
    v14 = (BattleBuffData_BuffData_o *)v13[4];
    if ( !v4->fields.isKeepAlive )
      break;
    if ( !v14 )
      goto LABEL_21;
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__385_o *)BattleBuffData_BuffData__get_GeneralParamOwner(
                                                                           (BattleBuffData_BuffData_o *)v13[4],
                                                                           0LL);
    if ( !this )
      goto LABEL_21;
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__385_o *)((__int64 (__fastcall *)(BattleServantData__EnumerateContinueFunctionSkill_d__385_o *, Il2CppMethodPointer))this->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
                                                                           this,
                                                                           this->klass->vtable._6_System_Collections_Generic_IEnumerator_BattleSkillInfoData__get_Current.methodPtr);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
LABEL_14:
    v12 = v4->fields.__7__wrap2 + 1;
  }
  if ( !_4__this )
LABEL_21:
    sub_1B64324(this);
  FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(_4__this, v14, 0LL);
  v4->fields.__2__current = FunctionSkillInfoData;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)FunctionSkillInfoData, v20, v21);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateContinueFunctionSkill_d__385__System_Collections_Generic_IEnumerable_BattleSkillInfoData__GetEnumerator(
        BattleServantData__EnumerateContinueFunctionSkill_d__385_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  BattleServantData__EnumerateContinueFunctionSkill_d__385_o *v5; // x20
  struct BattleServantData_o *_4__this; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *result; // x0

  if ( (byte_49FEB96 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData__EnumerateContinueFunctionSkill_d__385_TypeInfo, method);
    byte_49FEB96 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v5 = this;
  }
  else
  {
    v5 = (BattleServantData__EnumerateContinueFunctionSkill_d__385_o *)sub_1B64314(
                                                                         BattleServantData__EnumerateContinueFunctionSkill_d__385_TypeInfo,
                                                                         method,
                                                                         v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    v5->fields.__1__state = 0;
    v5->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v5->fields.__4__this = _4__this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.__4__this, (int32_t)_4__this, v7, v8);
  }
  result = (System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v5;
  v5->fields.isKeepAlive = this->fields.__3__isKeepAlive;
  return result;
}


BattleSkillInfoData_o *__fastcall BattleServantData__EnumerateContinueFunctionSkill_d__385__System_Collections_Generic_IEnumerator_BattleSkillInfoData__get_Current(
        BattleServantData__EnumerateContinueFunctionSkill_d__385_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantData__EnumerateContinueFunctionSkill_d__385__System_Collections_IEnumerator_Reset(
        BattleServantData__EnumerateContinueFunctionSkill_d__385_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleServantData__EnumerateContinueFunctionSkill_d__385_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattleServantData__EnumerateContinueFunctionSkill_d__385__System_Collections_IEnumerator_get_Current(
        BattleServantData__EnumerateContinueFunctionSkill_d__385_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleServantData__EnumerateContinueFunctionSkill_d__385__System_IDisposable_Dispose(
        BattleServantData__EnumerateContinueFunctionSkill_d__385_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786___ctor(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786__MoveNext(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w3
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
  int32_t _1__state; // w8
  struct BattleServantData_o *_4__this; // x20
  __int64 v21; // x22
  ServantStatusBattleListViewItem_o *p__7__wrap3; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct BattleSkillInfoData_o *receivedSkill; // x1
  _QWORD *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  BattleBuffData_o *buffData; // x23
  BattleBuffData_CheckIndividualitiesData_o *v30; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_object__bool__o *v33; // x25
  struct BattleBuffData_BuffData_array *BuffList_42092284; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w8
  BattleBuffData_BuffData_o *v42; // x21
  struct BattleSkillInfoData_o *v43; // x22
  DataVals_array *DataValArray; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  BattleServantData___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x23
  System_Func_object__bool__o *_9__786_1; // x24
  Il2CppObject *v50; // x25
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  BattleServantData___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x23
  System_Func_object__int__o *_9__786_2; // x24
  Il2CppObject *v60; // x25
  struct BattleServantData___c_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  BattleServantData___c_c *v68; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x23
  System_Func_int__bool__o *_9__786_3; // x24
  Il2CppObject *v71; // x25
  struct BattleServantData___c_StaticFields *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_Collections_Generic_IEnumerable_int__o *v75; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  struct BattleSkillInfoData_o **p__2__current; // x19
  bool result; // w0
  int32_t v80; // w2
  int32_t v81; // w3
  struct BattleBuffData_BuffData_array *_7__wrap3; // x9
  il2cpp_array_size_t max_length; // w10
  struct BattleSkillInfoData_o **v84; // x19

  if ( (byte_49FEB97 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataVals__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_DataVals___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v8);
    sub_1B640C8(&System_Func_DataVals__int__TypeInfo, v9);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v10);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11);
    sub_1B640C8(&System_Func_DataVals__bool__TypeInfo, v12);
    sub_1B640C8(&Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__786_1__, v13);
    sub_1B640C8(&Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__786_2__, v14);
    sub_1B640C8(&Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__786_3__, v15);
    sub_1B640C8(&Method_BattleServantData___c__DisplayClass786_0__EnumerateSkillTargetedBeforeFunctionSkill_b__0__, v16);
    sub_1B640C8(&BattleServantData___c__DisplayClass786_0_TypeInfo, v17);
    sub_1B640C8(&BattleServantData___c_TypeInfo, v18);
    byte_49FEB97 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 || _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_40;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v21 = sub_1B64314(BattleServantData___c__DisplayClass786_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_46;
  receivedSkill = this->fields.receivedSkill;
  *(_QWORD *)(v21 + 16) = receivedSkill;
  v26 = (_QWORD *)(v21 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)receivedSkill, v23, v24);
  if ( !_4__this )
    goto LABEL_46;
  buffData = _4__this->fields.buffData;
  v30 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                       BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                       v27,
                                                       v28);
  BattleBuffData_CheckIndividualitiesData___ctor(v30, _4__this, 0LL, 0LL, 0LL, 0LL, 0LL);
  v33 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v31, v32);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v21,
    Method_BattleServantData___c__DisplayClass786_0__EnumerateSkillTargetedBeforeFunctionSkill_b__0__,
    0LL);
  if ( !buffData
    || (BuffList_42092284 = BattleBuffData__getBuffList_42092284(
                              buffData,
                              139,
                              v30,
                              1,
                              0,
                              (System_Func_BattleBuffData_BuffData__bool__o *)v33,
                              0LL),
        this->fields._commandSpellEntity_5__2 = 0LL,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._commandSpellEntity_5__2, 0, v35, v36),
        this->fields._skillEntity_5__3 = 0LL,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._skillEntity_5__3, 0, v37, v38),
        !*v26) )
  {
LABEL_46:
    sub_1B64324(p__7__wrap3);
  }
  this->fields.__7__wrap3 = BuffList_42092284;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__7__wrap3, (int32_t)BuffList_42092284, v39, v40);
  v41 = 0;
  for ( this->fields.__7__wrap4 = 0; ; this->fields.__7__wrap4 = v41 )
  {
    p__7__wrap3 = (ServantStatusBattleListViewItem_o *)&this->fields.__7__wrap3;
    _7__wrap3 = this->fields.__7__wrap3;
    if ( !_7__wrap3 )
      goto LABEL_46;
    max_length = _7__wrap3->max_length;
    if ( v41 >= (int)max_length )
    {
      p__7__wrap3->klass = 0LL;
      sub_1B6406C(p__7__wrap3, 0, v2, v3);
      return 0;
    }
    if ( v41 >= max_length )
      sub_1B6432C(p__7__wrap3, method);
    if ( !_4__this )
      goto LABEL_46;
    v42 = _7__wrap3->m_Items[v41];
    p__7__wrap3 = (ServantStatusBattleListViewItem_o *)BattleServantData__CreateFunctionSkillInfoData(
                                                         _4__this,
                                                         v42,
                                                         0LL);
    if ( !p__7__wrap3 )
      goto LABEL_46;
    v43 = (struct BattleSkillInfoData_o *)p__7__wrap3;
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)p__7__wrap3, 0LL);
    v47 = BattleServantData___c_TypeInfo;
    v48 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v47 = BattleServantData___c_TypeInfo;
    }
    _9__786_1 = (System_Func_object__bool__o *)v47->static_fields->__9__786_1;
    if ( !_9__786_1 )
    {
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v47 = BattleServantData___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v47->static_fields->__9;
      _9__786_1 = (System_Func_object__bool__o *)sub_1B64314(System_Func_DataVals__bool__TypeInfo, v45, v46);
      System_Func_object__bool____ctor(
        _9__786_1,
        v50,
        Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__786_1__,
        0LL);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
      static_fields->__9__786_1 = (struct System_Func_DataVals__bool__o *)_9__786_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__786_1, (int32_t)_9__786_1, v52, v53);
    }
    v54 = System_Linq_Enumerable__Where_object_(
            v48,
            (System_Func_TSource__bool__o *)_9__786_1,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_DataVals___);
    v57 = BattleServantData___c_TypeInfo;
    v58 = v54;
    if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v57 = BattleServantData___c_TypeInfo;
    }
    _9__786_2 = (System_Func_object__int__o *)v57->static_fields->__9__786_2;
    if ( !_9__786_2 )
    {
      if ( !v57->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v57);
        v57 = BattleServantData___c_TypeInfo;
      }
      v60 = (Il2CppObject *)v57->static_fields->__9;
      _9__786_2 = (System_Func_object__int__o *)sub_1B64314(System_Func_DataVals__int__TypeInfo, v55, v56);
      System_Func_object__int____ctor(
        _9__786_2,
        v60,
        Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__786_2__,
        0LL);
      v61 = BattleServantData___c_TypeInfo->static_fields;
      v61->__9__786_2 = (struct System_Func_DataVals__int__o *)_9__786_2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->__9__786_2, (int32_t)_9__786_2, v62, v63);
    }
    v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v58,
                                                                 (System_Func_TSource__TResult__o *)_9__786_2,
                                                                 (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
    v65 = System_Linq_Enumerable__Distinct_int_(
            v64,
            (const MethodInfo_2E57DA0 *)Method_System_Linq_Enumerable_Distinct_int___);
    v68 = BattleServantData___c_TypeInfo;
    v69 = v65;
    if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v68 = BattleServantData___c_TypeInfo;
    }
    _9__786_3 = v68->static_fields->__9__786_3;
    if ( !_9__786_3 )
    {
      if ( !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68);
        v68 = BattleServantData___c_TypeInfo;
      }
      v71 = (Il2CppObject *)v68->static_fields->__9;
      _9__786_3 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v66, v67);
      System_Func_int__bool____ctor(
        _9__786_3,
        v71,
        Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__786_3__,
        0LL);
      v72 = BattleServantData___c_TypeInfo->static_fields;
      v72->__9__786_3 = _9__786_3;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v72->__9__786_3, (int32_t)_9__786_3, v73, v74);
    }
    v75 = (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Where_int_(
                                                             v69,
                                                             (System_Func_TSource__bool__o *)_9__786_3,
                                                             (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
    if ( !this->fields._commandSpellEntity_5__2 )
      break;
    p__7__wrap3 = (ServantStatusBattleListViewItem_o *)CommandSpellEntity__IsIgnoreBattlePointUp(
                                                         this->fields._commandSpellEntity_5__2,
                                                         v75,
                                                         0LL);
    if ( ((unsigned __int8)p__7__wrap3 & 1) == 0 )
    {
      this->fields.__2__current = v43;
      p__2__current = &this->fields.__2__current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v43, v76, v77);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_38:
    if ( !v42 )
      goto LABEL_46;
    BattleBuffData_BuffData__RevertUnused(v42, 1, 0LL);
LABEL_40:
    v41 = this->fields.__7__wrap4 + 1;
  }
  p__7__wrap3 = (ServantStatusBattleListViewItem_o *)this->fields._skillEntity_5__3;
  if ( !p__7__wrap3 )
    goto LABEL_38;
  p__7__wrap3 = (ServantStatusBattleListViewItem_o *)SkillEntity__IsIgnoreBattlePointUp(
                                                       (SkillEntity_o *)p__7__wrap3,
                                                       v75,
                                                       0LL);
  if ( ((unsigned __int8)p__7__wrap3 & 1) != 0 )
    goto LABEL_38;
  this->fields.__2__current = v43;
  v84 = &this->fields.__2__current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v84, (int32_t)v43, v80, v81);
  *((_DWORD *)v84 - 2) = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786__System_Collections_Generic_IEnumerable_BattleSkillInfoData__GetEnumerator(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  int32_t v5; // w3
  BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_o *v6; // x20
  struct BattleServantData_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleSkillInfoData_o *_3__receivedSkill; // x1

  if ( (byte_49FEB98 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_TypeInfo, method);
    byte_49FEB98 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_o *)sub_1B64314(
                                                                                    BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_TypeInfo,
                                                                                    method,
                                                                                    v2);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__receivedSkill = this->fields.__3__receivedSkill;
  v6->fields.receivedSkill = _3__receivedSkill;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.receivedSkill, (int32_t)_3__receivedSkill, v2, v5);
  return (System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v6;
}


BattleSkillInfoData_o *__fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786__System_Collections_Generic_IEnumerator_BattleSkillInfoData__get_Current(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786__System_Collections_IEnumerator_Reset(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786__System_Collections_IEnumerator_get_Current(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786__System_IDisposable_Dispose(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__786_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEB88 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData___c_TypeInfo, v1);
    byte_49FEB88 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleServantData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleServantData___c_TypeInfo->static_fields->__9 = (struct BattleServantData___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleServantData___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall BattleServantData___c___ctor(BattleServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c___AddPassiveBuffOnTransform_b__760_0(
        BattleServantData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  _DWORD *monitor; // x8
  int v5; // w9

  if ( (byte_49FEB8A & 1) == 0 )
  {
    this = (BattleServantData___c_o *)sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, x);
    byte_49FEB8A = 1;
  }
  if ( !x
    || (this = (BattleServantData___c_o *)BattleServantData__get_BuffData(x, 0LL)) == 0LL
    || (monitor = this[4].monitor) == 0LL )
  {
    sub_1B64324(this);
  }
  v5 = monitor[7] + 1;
  monitor[6] = 0;
  monitor[7] = v5;
}


bool __fastcall BattleServantData___c___AddPassiveBuffOnTransform_b__760_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return BattleSkillInfoData__IsReplacePassiveTypeOnTransform(x->fields.type, 0LL);
}


int32_t __fastcall BattleServantData___c___EnumerateSkillBeforeFunctionSkill_b__785_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *skillData,
        const MethodInfo *method)
{
  if ( !skillData )
    sub_1B64324(this);
  return skillData->fields.priority;
}


bool __fastcall BattleServantData___c___EnumerateSkillIndividuality_b__640_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.type != 20;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData___c___EnumerateSkillIndividuality_b__640_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return (System_Collections_Generic_IEnumerable_int__o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))x->klass->vtable._6_get_IndividualityArray.method)(
                                                            x,
                                                            x->klass->vtable._7_getCutInId.methodPtr);
}


bool __fastcall BattleServantData___c___EnumerateSkillTargetedBeforeFunctionSkill_b__786_1(
        BattleServantData___c_o *this,
        DataVals_o *val,
        const MethodInfo *method)
{
  if ( !val )
    sub_1B64324(this);
  return val->fields.funcType == 142;
}


int32_t __fastcall BattleServantData___c___EnumerateSkillTargetedBeforeFunctionSkill_b__786_2(
        BattleServantData___c_o *this,
        DataVals_o *val,
        const MethodInfo *method)
{
  if ( !val )
    sub_1B64324(this);
  return DataVals__GetParam(val, 171, 0, 0LL);
}


bool __fastcall BattleServantData___c___EnumerateSkillTargetedBeforeFunctionSkill_b__786_3(
        BattleServantData___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id != 0;
}


int32_t __fastcall BattleServantData___c___GetAddSideEffectBuffList_b__457_1(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.addOrder;
}


bool __fastcall BattleServantData___c___RemovePassiveSkill_b__757_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64324(this);
  return BattleSkillInfoData__IsPassive(s->fields.type, 0LL);
}


bool __fastcall BattleServantData___c___ResetServantSelfSkill_b__387_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.type == 11;
}


bool __fastcall BattleServantData___c___getActiveSkillInfos_b__413_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64324(this);
  return !s->fields.isPassive && s->fields.isUseSkill;
}


int32_t __fastcall BattleServantData___c___getAiParam_b__693_0(
        BattleServantData___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s;
}


int32_t __fastcall BattleServantData___c___getAttackSideEffectBuffList_b__456_0(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *a1,
        BattleBuffData_BuffData_o *a2,
        const MethodInfo *method)
{
  if ( !a1 || !a2 )
    sub_1B64324(this);
  return a1->fields.addOrder - a2->fields.addOrder;
}


bool __fastcall BattleServantData___c___getPassiveSkills_b__329_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64324(this);
  return s->fields.isPassive;
}


BattleServantData_PartAnimationSaveData_o *__fastcall BattleServantData___c___getSaveData_b__292_0(
        BattleServantData___c_o *this,
        System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____o x,
        const MethodInfo *method)
{
  struct BattlePlayAnimationComponent_SaveData_array *value; // x19
  struct System_String_o *key; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_49FEB89 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____get_Key__,
      x.fields.key);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____get_Value__,
      v5);
    sub_1B640C8(&BattleServantData_PartAnimationSaveData_TypeInfo, v6);
    byte_49FEB89 = 1;
  }
  v7 = sub_1B64314(BattleServantData_PartAnimationSaveData_TypeInfo, x.fields.key, x.fields.value);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 16) = key;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)key, v9, v10);
  *(_QWORD *)(v7 + 24) = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)value, v11, v12);
  return (BattleServantData_PartAnimationSaveData_o *)v7;
}


BattlePointData_SaveData_o *__fastcall BattleServantData___c___getSaveData_b__292_1(
        BattleServantData___c_o *this,
        BattlePointData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return BattlePointData__GetSaveData(x, (const MethodInfo *)x);
}


System_String_o *__fastcall BattleServantData___c___setSaveData_b__297_0(
        BattleServantData___c_o *this,
        BattleServantData_PartAnimationSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.key;
}


BattlePlayAnimationComponent_SaveData_array *__fastcall BattleServantData___c___setSaveData_b__297_1(
        BattleServantData___c_o *this,
        BattleServantData_PartAnimationSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.saveDataArray;
}


void __fastcall BattleServantData___c__661_object____cctor(const MethodInfo_2FFA37C *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BattleServantData___c__661_T__c *klass; // x0
  __int64 _0_BattleServantData___c__661_T; // x0
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  BattleServantData___c__661_T__c *v9; // x0
  __int64 _2_BattleServantData___c__661_T; // x0
  BattleServantData___c__661_T__c *v11; // x0
  __int64 v12; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BattleServantData___c__661_T__c *)sub_1BB5FA4(klass);
  _0_BattleServantData___c__661_T = (__int64)klass->rgctx_data->_0_BattleServantData___c__661_T_;
  if ( (*(_BYTE *)(_0_BattleServantData___c__661_T + 309) & 1) == 0 )
    _0_BattleServantData___c__661_T = sub_1BB5FA4(_0_BattleServantData___c__661_T);
  v6 = (Il2CppObject *)sub_1B64314(_0_BattleServantData___c__661_T, v1, v2);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BB5FA4(method->klass);
  System_Object___ctor(v6, 0LL);
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BattleServantData___c__661_T__c *)sub_1BB5FA4(v9);
  _2_BattleServantData___c__661_T = (__int64)v9->rgctx_data->_2_BattleServantData___c__661_T_;
  if ( (*(_BYTE *)(_2_BattleServantData___c__661_T + 309) & 1) == 0 )
    _2_BattleServantData___c__661_T = sub_1BB5FA4(_2_BattleServantData___c__661_T);
  **(_QWORD **)(_2_BattleServantData___c__661_T + 184) = v6;
  v11 = method->klass;
  if ( (BYTE5(v11->vtable._0_Equals.methodPtr) & 1) == 0 )
    v11 = (BattleServantData___c__661_T__c *)sub_1BB5FA4(v11);
  v12 = (__int64)v11->rgctx_data->_2_BattleServantData___c__661_T_;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  sub_1B6406C(*(ServantStatusBattleListViewItem_o **)(v12 + 184), (int32_t)v6, v7, v8);
}


void __fastcall BattleServantData___c__661_object____ctor(
        BattleServantData___c__661_T__o *this,
        const MethodInfo_2FFA438 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__661_object____HasWaveTurnEvent_b__661_0(
        BattleServantData___c__661_T__o *this,
        ServantWaveTurnEvent_o *x,
        const MethodInfo_2FFA440 *method)
{
  Il2CppClass *_3_T; // x8

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE5(_3_T->vtable[0].methodPtr) & 1) == 0 )
    _3_T = (Il2CppClass *)sub_1BB5FA4(method->klass->rgctx_data->_3_T);
  return sub_1B64204(x, _3_T) != 0;
}


void __fastcall BattleServantData___c__DisplayClass281_0___ctor(
        BattleServantData___c__DisplayClass281_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass281_0___GetBattlePointData_b__0(
        BattleServantData___c__DisplayClass281_0_o *this,
        BattlePointData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64324(this);
  return data->fields.id == this->fields.battlePointId;
}


void __fastcall BattleServantData___c__DisplayClass307_0___ctor(
        BattleServantData___c__DisplayClass307_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass307_0___UpdateBattlePointSetting_b__0(
        BattleServantData___c__DisplayClass307_0_o *this,
        BattlePointData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_1B64324(this);
  BattlePointData__UpdateSetting(x, this->fields.__4__this, this->fields.battleEntity, v3);
}


void __fastcall BattleServantData___c__DisplayClass311_0___ctor(
        BattleServantData___c__DisplayClass311_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass311_0___setBaseServantData_b__1(
        BattleServantData___c__DisplayClass311_0_o *this,
        commandAssistData_o *x,
        const MethodInfo *method)
{
  struct BattleDeckServantData_o *inDeckSvt; // x8

  if ( !x || (inDeckSvt = this->fields.inDeckSvt) == 0LL )
    sub_1B64324(this);
  return x->fields.userSvtId == inDeckSvt->fields.userSvtId;
}


void __fastcall BattleServantData___c__DisplayClass311_1___ctor(
        BattleServantData___c__DisplayClass311_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass311_1___setBaseServantData_b__0(
        BattleServantData___c__DisplayClass311_1_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct CommandCodeInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1B64324(this);
  return info->fields.id == id;
}


void __fastcall BattleServantData___c__DisplayClass311_2___ctor(
        BattleServantData___c__DisplayClass311_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass311_2___setBaseServantData_b__2(
        BattleServantData___c__DisplayClass311_2_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass311_2_o *v4; // x20
  __int64 v5; // x1
  struct BattleServantData___c__DisplayClass311_0_o *CS___8__locals1; // x9
  struct System_Int32_array *skillIdList; // x10
  __int64 i; // x8
  struct System_Int32_array *skillLvList; // x9

  if ( !x )
    goto LABEL_10;
  v4 = this;
  this = (BattleServantData___c__DisplayClass311_2_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._5_get_skillId.method)(
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
      sub_1B6432C(this, v5);
    }
LABEL_10:
    sub_1B64324(this);
  }
  return 0;
}


void __fastcall BattleServantData___c__DisplayClass327_0___ctor(
        BattleServantData___c__DisplayClass327_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass327_0___ReplaceSelfSkillInfo_b__0(
        BattleServantData___c__DisplayClass327_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.type == this->fields.skillInfoType && x->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass330_0___ctor(
        BattleServantData___c__DisplayClass330_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass330_0___GetHasSideEffectSkillEffectIds_b__0(
        BattleServantData___c__DisplayClass330_0_o *this,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass330_0_o *v4; // x20
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
  struct FunctionMaster_o *funcMst; // x8
  _QWORD *v17; // x9
  __int64 retList_low; // x10

  v4 = this;
  if ( (byte_49FEB8B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, ent);
    sub_1B640C8(&DataVals_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v6);
    this = (BattleServantData___c__DisplayClass330_0_o *)sub_1B640C8(
                                                           &Method_System_Collections_Generic_List_int__Contains__,
                                                           v7);
    byte_49FEB8B = 1;
  }
  if ( !ent || (svals = ent->fields.svals) == 0LL )
LABEL_23:
    sub_1B64324(this);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = svals->max_length;
    if ( (__int64)v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_25;
    v11 = svals->m_Items[v9];
    v12 = (DataVals_o *)sub_1B64314(DataVals_TypeInfo, ent, method);
    DataVals___ctor(v12, v11, 0LL);
    funcId = ent->fields.funcId;
    if ( !funcId )
      goto LABEL_23;
    v14 = funcId->max_length;
    if ( (__int64)v9 < (int)v14 )
    {
      if ( v9 >= v14 )
LABEL_25:
        sub_1B6432C(this, ent);
      this = (BattleServantData___c__DisplayClass330_0_o *)v4->fields.funcMst;
      if ( !this )
        goto LABEL_23;
      this = (BattleServantData___c__DisplayClass330_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                             funcId->m_Items[v9 + 1],
                                                             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        if ( !v12 )
          goto LABEL_23;
        DataVals__SetTempType(v12, v4->fields.funcMst, (int32_t)this->fields.retList, 0LL);
        this = (BattleServantData___c__DisplayClass330_0_o *)DataVals__GetParam(v12, 34, 0, 0LL);
        if ( (int)this >= 1 )
        {
          v15 = (int)this;
          this = (BattleServantData___c__DisplayClass330_0_o *)v4->fields.retList;
          if ( !this )
            goto LABEL_23;
          this = (BattleServantData___c__DisplayClass330_0_o *)System_Collections_Generic_List_int___Contains(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 v15,
                                                                 (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (BattleServantData___c__DisplayClass330_0_o *)v4->fields.retList;
            if ( !this )
              goto LABEL_23;
            funcMst = this->fields.funcMst;
            v17 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.retList);
            if ( !funcMst )
              goto LABEL_23;
            retList_low = SLODWORD(this->fields.retList);
            if ( (unsigned int)retList_low >= LODWORD(funcMst->fields._MasterName_k__BackingField) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                v15,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.retList) = retList_low + 1;
              *((_DWORD *)&funcMst->fields.list + retList_low) = v15;
            }
          }
        }
      }
    }
    svals = ent->fields.svals;
    ++v9;
    if ( !svals )
      goto LABEL_23;
  }
}


void __fastcall BattleServantData___c__DisplayClass382_0___ctor(
        BattleServantData___c__DisplayClass382_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass382_0___ContinuePreProcess_b__0(
        BattleServantData___c__DisplayClass382_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t buffId; // w19
  BattleServantData___c__DisplayClass382_0_o *v4; // x20
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
    this = (BattleServantData___c__DisplayClass382_0_o *)v4->fields.buffMst;
    if ( this )
    {
      IsUnSubStateWhenAliveContinue = BuffMaster__IsUnSubStateWhenAliveContinue((BuffMaster_o *)this, buffId, 0LL);
      return !IsUnSubStateWhenAliveContinue;
    }
LABEL_13:
    sub_1B64324(this);
  }
  this = (BattleServantData___c__DisplayClass382_0_o *)this->fields.buffMst;
  if ( !this )
    goto LABEL_13;
  IsUnSubStateWhenAliveContinue = BuffMaster__IsUnSubStateWhenDeadContinue((BuffMaster_o *)this, buffId, 0LL);
  return !IsUnSubStateWhenAliveContinue;
}


void __fastcall BattleServantData___c__DisplayClass410_0___ctor(
        BattleServantData___c__DisplayClass410_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass410_0___isUseSelfSkill_b__0(
        BattleServantData___c__DisplayClass410_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64324(this);
  return s->fields.type == 11 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass411_0___ctor(
        BattleServantData___c__DisplayClass411_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass411_0___getSelfSkillInfo_b__0(
        BattleServantData___c__DisplayClass411_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64324(this);
  return s->fields.type == 11 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass412_0___ctor(
        BattleServantData___c__DisplayClass412_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass412_0___getTempSkillInfo_b__0(
        BattleServantData___c__DisplayClass412_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B64324(this);
  return s->fields.type == 20 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass434_0___ctor(
        BattleServantData___c__DisplayClass434_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData___c__DisplayClass434_0___RemoveNoTurnBuffWithUpdateView_g__RemoveBuff_0(
        BattleServantData___c__DisplayClass434_0_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x8
  BattleBuffData_o *buffData; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (buffData = _4__this->fields.buffData) == 0LL )
    sub_1B64324(this);
  return BattleBuffData__RemoveNoTurnBuff(buffData, this->fields.logic, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass435_0___ctor(
        BattleServantData___c__DisplayClass435_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData___c__DisplayClass435_0___turnBuffProgressing_g__RemoveBuff_0(
        BattleServantData___c__DisplayClass435_0_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !_4__this->fields.buffData )
    sub_1B64324(this);
  return BattleBuffData__turnProgressing(
           _4__this->fields.buffData,
           this->fields.logic,
           this->fields.isEndEnemyTurn,
           _4__this->fields.uniqueId,
           0LL);
}


void __fastcall BattleServantData___c__DisplayClass457_0___ctor(
        BattleServantData___c__DisplayClass457_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleServantData___c__DisplayClass457_0___GetAddSideEffectBuffList_b__0(
        BattleServantData___c__DisplayClass457_0_o *this,
        int32_t act,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x9
  BattleServantData___c__DisplayClass457_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (BattleServantData___c__DisplayClass457_0_o *)_4__this->fields.buffData) == 0LL) )
    sub_1B64324(this);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetFixBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                act,
                                                                                v4->fields.checkData,
                                                                                1,
                                                                                0LL);
}


void __fastcall BattleServantData___c__DisplayClass531_0___ctor(
        BattleServantData___c__DisplayClass531_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass531_0___updateNpGauge_b__0(
        BattleServantData___c__DisplayClass531_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass531_0_o *v5; // x20
  IEventMessageRecieve_c *klass; // x8
  struct System_Int32_array *incNpArray; // x21
  struct BattleServantData_o *_4__this; // x22
  unsigned int index; // w20
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_49FEB8C & 1) == 0 )
  {
    this = (BattleServantData___c__DisplayClass531_0_o *)sub_1B640C8(&IEventMessageRecieve_TypeInfo, reciever);
    byte_49FEB8C = 1;
  }
  if ( !reciever )
    sub_1B64324(this);
  klass = reciever->klass;
  _4__this = v5->fields.__4__this;
  incNpArray = v5->fields.incNpArray;
  index = v5->fields.index;
  v10 = *(unsigned __int16 *)(&reciever->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&reciever->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IEventMessageRecieve_c **)p_offset - 1) != IEventMessageRecieve_TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(reciever, IEventMessageRecieve_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, struct System_Int32_array *, _QWORD, _QWORD))p_method)(
    reciever,
    _4__this,
    incNpArray,
    index,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass532_0___ctor(
        BattleServantData___c__DisplayClass532_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass532_0___UpdateNpImmediately_b__0(
        BattleServantData___c__DisplayClass532_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  int32_t inputNp; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FEB8D & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, x);
    sub_1B640C8(&StringLiteral_15116/*"UpdateNpImmediately"*/, v5);
    byte_49FEB8D = 1;
  }
  inputNp = this->fields.inputNp;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &inputNp);
  if ( !x )
    sub_1B64324(v6);
  UnityEngine_GameObject__SendMessage_69108052(x, (System_String_o *)StringLiteral_15116/*"UpdateNpImmediately"*/, v6, 1, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass535_0___ctor(
        BattleServantData___c__DisplayClass535_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass535_0___UpdateTdGauge_b__0(
        BattleServantData___c__DisplayClass535_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // w8

  if ( (byte_49FEB8E & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, x);
    sub_1B640C8(&StringLiteral_15123/*"UpdateTdGauge"*/, v5);
    byte_49FEB8E = 1;
  }
  v6 = sub_1B64170(int___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_8;
  v8 = *(_DWORD *)(v6 + 24);
  if ( !v8 || (*(_DWORD *)(v6 + 32) = this->fields.now, v8 == 1) )
    sub_1B6432C(v6, v7);
  *(_DWORD *)(v6 + 36) = this->fields.max;
  if ( !x )
LABEL_8:
    sub_1B64324(v6);
  UnityEngine_GameObject__SendMessage_69108052(x, (System_String_o *)StringLiteral_15123/*"UpdateTdGauge"*/, (Il2CppObject *)v6, 1, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass545_0___ctor(
        BattleServantData___c__DisplayClass545_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass545_0___updateBuff_b__0(
        BattleServantData___c__DisplayClass545_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass545_0_o *v5; // x21
  IEventMessageRecieve_c *klass; // x8
  struct BattleServantData_o *_4__this; // x20
  _BOOL4 doAuraUpdate; // w22
  _BOOL4 doClassIconAuraUpdate; // w21
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_49FEB8F & 1) == 0 )
  {
    this = (BattleServantData___c__DisplayClass545_0_o *)sub_1B640C8(&IEventMessageRecieve_TypeInfo, reciever);
    byte_49FEB8F = 1;
  }
  if ( !reciever )
    sub_1B64324(this);
  klass = reciever->klass;
  _4__this = v5->fields.__4__this;
  doAuraUpdate = v5->fields.doAuraUpdate;
  doClassIconAuraUpdate = v5->fields.doClassIconAuraUpdate;
  v10 = *(unsigned __int16 *)(&reciever->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&reciever->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IEventMessageRecieve_c **)p_offset - 1) != IEventMessageRecieve_TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(reciever, IEventMessageRecieve_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, _BOOL4, _BOOL4, _QWORD))p_method)(
    reciever,
    _4__this,
    doAuraUpdate,
    doClassIconAuraUpdate,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass636_0___ctor(
        BattleServantData___c__DisplayClass636_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData___c__DisplayClass636_0___EnumerateIndividuality_b__0(
        BattleServantData___c__DisplayClass636_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_49FEB90 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&x);
    byte_49FEB90 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.subBuffIndividualities,
            x,
            (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall BattleServantData___c__DisplayClass717_0___ctor(
        BattleServantData___c__DisplayClass717_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass717_0___GetCommandCodeInfo_b__0(
        BattleServantData___c__DisplayClass717_0_o *this,
        CommandCodeInfo_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1B64324(this);
  return c->fields.id == this->fields.userCommandCodeId;
}


void __fastcall BattleServantData___c__DisplayClass758_0___ctor(
        BattleServantData___c__DisplayClass758_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass758_0___RemovePassiveBuffOnTransform_b__0(
        BattleServantData___c__DisplayClass758_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x8
  struct BattleData_o *data; // x9

  if ( !x
    || (_4__this = this->fields.__4__this) == 0LL
    || (data = this->fields.data) == 0LL
    || (this = (BattleServantData___c__DisplayClass758_0_o *)x->fields.buffData) == 0LL )
  {
    sub_1B64324(this);
  }
  BattleBuffData__RemovePassiveReplacedOnTransform(
    (BattleBuffData_o *)this,
    _4__this->fields.uniqueId,
    data->fields.logic,
    0LL);
}


void __fastcall BattleServantData___c__DisplayClass761_0___ctor(
        BattleServantData___c__DisplayClass761_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass761_0___UpdateClassBoardSkillBuff_b__0(
        BattleServantData___c__DisplayClass761_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass761_0_o *v3; // x19
  struct AddSkillData_o *skillData; // x8

  if ( !s
    || (v3 = this,
        this = (BattleServantData___c__DisplayClass761_0_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._5_get_skillId.method)(
                                                               s,
                                                               s->klass->vtable._6_get_IndividualityArray.methodPtr,
                                                               method),
        (skillData = v3->fields.skillData) == 0LL) )
  {
    sub_1B64324(this);
  }
  return (_DWORD)this == skillData->fields.id;
}


void __fastcall BattleServantData___c__DisplayClass780_0___ctor(
        BattleServantData___c__DisplayClass780_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData___c__DisplayClass780_0___FilterDisplayingSkillIdArray_b__0(
        BattleServantData___c__DisplayClass780_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *displayChangeSkillIdHashSet; // x0

  if ( (byte_49FEB91 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x);
    byte_49FEB91 = 1;
  }
  displayChangeSkillIdHashSet = this->fields.displayChangeSkillIdHashSet;
  if ( !displayChangeSkillIdHashSet )
    sub_1B64324(0LL);
  return !System_Collections_Generic_HashSet_int___Contains(
            displayChangeSkillIdHashSet,
            -x,
            (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData___c__DisplayClass780_0___FilterDisplayingSkillIdArray_b__1(
        BattleServantData___c__DisplayClass780_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *displayChangeSkillIdHashSet; // x0

  if ( (byte_49FEB92 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x);
    byte_49FEB92 = 1;
  }
  displayChangeSkillIdHashSet = this->fields.displayChangeSkillIdHashSet;
  if ( !displayChangeSkillIdHashSet )
    sub_1B64324(0LL);
  return System_Collections_Generic_HashSet_int___Contains(
           displayChangeSkillIdHashSet,
           x,
           (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall BattleServantData___c__DisplayClass785_0___ctor(
        BattleServantData___c__DisplayClass785_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass785_0___EnumerateSkillBeforeFunctionSkill_b__0(
        BattleServantData___c__DisplayClass785_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B64324(this);
  return BattleBuffData_BuffData__IsMatchSkillCountingCondition(buff, this->fields.data, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass786_0___ctor(
        BattleServantData___c__DisplayClass786_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass786_0___EnumerateSkillTargetedBeforeFunctionSkill_b__0(
        BattleServantData___c__DisplayClass786_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass786_0_o *v3; // x19

  if ( !buff
    || (v3 = this,
        (this = (BattleServantData___c__DisplayClass786_0_o *)BattleBuffData_BuffData__get_Entity(buff, 0LL)) == 0LL) )
  {
    sub_1B64324(this);
  }
  return BuffEntity__IsMatchBattleSkillInfoCondition((BuffEntity_o *)this, v3->fields.receivedSkill, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass787_0___ctor(
        BattleServantData___c__DisplayClass787_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass787_0___GetFieldIndividualityChangedFunctionBuff_b__0(
        BattleServantData___c__DisplayClass787_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass787_0_o *v3; // x19

  if ( !buff
    || (v3 = this,
        (this = (BattleServantData___c__DisplayClass787_0_o *)BattleBuffData_BuffData__get_Entity(buff, 0LL)) == 0LL) )
  {
    sub_1B64324(this);
  }
  return BuffEntity__ContainsIndividualityToActivate((BuffEntity_o *)this, v3->fields.questIndividualityArray, 0LL);
}