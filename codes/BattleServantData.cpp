void __fastcall BattleServantData___ctor(BattleServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_LinkedList_T__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  BattleServantSnapShotGroupDefault_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  AiState_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  ServantWaveTurnEventOwner_o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_int__o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_List_object__o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Int32_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_4A5D92F & 1) == 0 )
  {
    sub_1B885B0(&AiState_TypeInfo);
    sub_1B885B0(&BattleServantSnapShotGroupDefault_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__);
    sub_1B885B0(&System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattlePointData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattlePointData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&ServantWaveTurnEventOwner_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D92F = 1;
  }
  this->fields.deckIndex = -1;
  this->fields.transformUserSvtId = -1LL;
  this->fields.transformIndex = -1;
  this->fields.appearanceId = -1;
  *(_QWORD *)&this->fields.shiftNpcId = -1LL;
  *(int64_t *)((char *)&this->fields.beforeUserSvtId + 4) = -1LL;
  v3 = (System_Collections_Generic_LinkedList_T__o *)sub_1B887FC(System_Collections_Generic_LinkedList_BattleServantActionHistory__TypeInfo);
  System_Collections_Generic_LinkedList_object____ctor(
    v3,
    (const MethodInfo_343EFEC *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory___ctor__);
  this->fields.actionHistory = (struct System_Collections_Generic_LinkedList_BattleServantActionHistory__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actionHistory, (int32_t)v3, v4, v5);
  v6 = (BattleServantSnapShotGroupDefault_o *)sub_1B887FC(BattleServantSnapShotGroupDefault_TypeInfo);
  BattleServantSnapShotGroupDefault___ctor(v6, 0LL);
  this->fields._SnapShotDamagedOnLogicDead_k__BackingField = v6;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SnapShotDamagedOnLogicDead_k__BackingField,
    (int32_t)v6,
    v7,
    v8);
  v9 = (AiState_o *)sub_1B887FC(AiState_TypeInfo);
  AiState___ctor(v9, 0LL);
  this->fields.aiState = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiState, (int32_t)v9, v10, v11);
  this->fields.actorScale = 100;
  *(_QWORD *)&this->fields.nplineCount = 0x6400000003LL;
  *(_QWORD *)&this->fields.roleType = 0xFFFFFFFF00000001LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  this->fields.skillInfoList = (struct System_Collections_Generic_List_BattleSkillInfoData__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillInfoList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.tdErrorStatusVoiceSeList = (struct System_Collections_Generic_List_string__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tdErrorStatusVoiceSeList, (int32_t)v15, v16, v17);
  this->fields.deadTurn = 1;
  v18 = (ServantWaveTurnEventOwner_o *)sub_1B887FC(ServantWaveTurnEventOwner_TypeInfo);
  ServantWaveTurnEventOwner___ctor(v18, 0LL);
  this->fields.waveTurnEventOwner = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.waveTurnEventOwner, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.paramobjelist = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.paramobjelist, (int32_t)v21, v22, v23);
  v24 = (int)StringLiteral_1/*""*/;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statestring, v24, v25, v26);
  this->fields.isGutsSleepRelease = 1;
  this->fields.nextPossibleTimePopEffect = -1.0;
  *(_QWORD *)&this->fields.selectedTDCardId = -1LL;
  this->fields.wasAttackTargetId = -1;
  v27 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields._receiveFunctionIdList_k__BackingField = v27;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._receiveFunctionIdList_k__BackingField,
    (int32_t)v27,
    v28,
    v29);
  this->fields.functionedTargetId = -1;
  v30 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
  this->fields.adjustmentList = (struct System_Collections_Generic_List_BattleServantData_Adjustment__o *)v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.adjustmentList, (int32_t)v30, v31, v32);
  this->fields.fixNpSpeed = 1;
  v33 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattlePointData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattlePointData___ctor__);
  this->fields.battlePointList = (struct System_Collections_Generic_List_BattlePointData__o *)v33;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battlePointList, (int32_t)v33, v34, v35);
  this->fields.tempTreasuredvcLv = 1;
  v36 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.wkzero = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.wkzero, (int32_t)v36, v37, v38);
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
  const MethodInfo *v13; // [xsp+0h] [xbp-40h]

  if ( !userSvtData
    || (v4 = this,
        (this = (BattleServantData_o *)BattleUserServantData__GetAddPassiveSkillArray(userSvtData, 0LL)) == 0LL) )
  {
    sub_1B8880C(this, userSvtData);
  }
  v6 = *(_QWORD *)&this->fields.uniqueId;
  v7 = this;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1B88814(this, userSvtData);
      v9 = (int32_t *)(&v7->fields.userSvtId.fields.currentCryptoKey + v8);
      v10 = *skillIndex;
      v11 = *v9;
      v12 = v9[1];
      ++*skillIndex;
      this = (BattleServantData_o *)BattleServantData__addSkillInfo(v4, 24, v10, v11, v12, -1LL, -1, 0LL, v13);
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
  __int64 v7; // x1
  __int64 v8; // x8
  _QWORD *v9; // x21
  unsigned __int64 v10; // x24
  __int64 v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // [xsp+0h] [xbp-50h]

  if ( !userSvtData )
    sub_1B8880C(this, 0LL);
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
          sub_1B88814(AppendPassiveSkillArray, v7);
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
  System_Collections_Generic_List_object__o *v7; // x21
  BattleSkillInfoData_o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  System_Collections_ICollection_o *ClassBoardSkillArray; // x22
  void *monitor; // x8
  unsigned __int64 v12; // x23
  int32_t *v13; // x8
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w4
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  BattleSkillInfoData_o *v22; // x1
  Il2CppClass **v23; // x0
  const MethodInfo *v25; // [xsp+0h] [xbp-50h]

  if ( (byte_4A5D91B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    byte_4A5D91B = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
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
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)monitor )
          sub_1B88814(IsNullOrEmpty, v9);
        v13 = (int32_t *)(&ClassBoardSkillArray[2].klass + v12);
        v14 = *skillIndex;
        v15 = *v13;
        v16 = v13[1];
        ++*skillIndex;
        IsNullOrEmpty = BattleServantData__addSkillInfo(this, 26, v14, v15, v16, -1LL, -1, 0LL, v25);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v20 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        v22 = IsNullOrEmpty;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)IsNullOrEmpty,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v22;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
        }
        LODWORD(monitor) = ClassBoardSkillArray[1].monitor;
        if ( (__int64)++v12 >= (int)monitor )
          return (System_Collections_Generic_List_BattleSkillInfoData__o *)v7;
      }
LABEL_16:
      sub_1B8880C(IsNullOrEmpty, v9);
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
  const MethodInfo *v10; // [xsp+0h] [xbp-40h]

  if ( !userSvtData
    || (classPassive = userSvtData->fields.classPassive, v6 = this, !classPassive)
    && ((svtdata = this->fields.svtdata) == 0LL || (classPassive = svtdata->fields.classPassive) == 0LL) )
  {
    sub_1B8880C(this, userSvtData);
  }
  v8 = *(_QWORD *)&classPassive->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v8 )
        sub_1B88814(this, userSvtData);
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
  Il2CppObject ***v7; // x0
  __int64 v8; // x1
  BattleServantData___c_c *v9; // x0
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x21
  System_Func_object__bool__o *_9__781_1; // x22
  Il2CppObject *v12; // x23
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject **v16; // x8
  Il2CppObject ***v17; // x21
  __int64 v18; // x9
  int *p_monitor; // x10
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x21
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  BattleSkillInfoData_o *v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  System_Action_object__o *v36; // x20
  Il2CppObject *v37; // x21
  struct BattleServantData___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A5D919 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleServantData__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    sub_1B885B0(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&BattleLogicSkill_SkillExecArgs_TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__AddPassiveBuffOnTransform_b__781_0__);
    sub_1B885B0(&Method_BattleServantData___c__AddPassiveBuffOnTransform_b__781_1__);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D919 = 1;
  }
  if ( !skillExecArgs )
  {
    skillExecArgs = (BattleLogicSkill_SkillExecArgs_o *)sub_1B887FC(BattleLogicSkill_SkillExecArgs_TypeInfo);
    BattleLogicSkill_SkillExecArgs___ctor(skillExecArgs, 0LL);
    if ( !skillExecArgs )
      goto LABEL_54;
    *(_WORD *)&skillExecArgs->fields._RemoveAllUnfixedBuff_k__BackingField = 257;
  }
  if ( !skillExecArgs->fields._Timing_k__BackingField )
    skillExecArgs->fields._Timing_k__BackingField = 1;
  v9 = BattleServantData___c_TypeInfo;
  skillInfoList = this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v9 = BattleServantData___c_TypeInfo;
  }
  _9__781_1 = (System_Func_object__bool__o *)v9->static_fields->__9__781_1;
  if ( !_9__781_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleServantData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__781_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__781_1,
      v12,
      Method_BattleServantData___c__AddPassiveBuffOnTransform_b__781_1__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__781_1 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__781_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__781_1, (int32_t)_9__781_1, v14, v15);
  }
  v7 = (Il2CppObject ***)System_Linq_Enumerable__Where_object_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
                           (System_Func_TSource__bool__o *)_9__781_1,
                           (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  if ( !v7 )
LABEL_54:
    sub_1B8880C(v7, v8);
  v16 = *v7;
  v17 = v7;
  v18 = *((unsigned __int16 *)*v7 + 151);
  if ( *((_WORD *)*v7 + 151) )
  {
    p_monitor = (int *)&v16[22]->monitor;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_monitor - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v18;
      p_monitor += 4;
      if ( !v18 )
        goto LABEL_19;
    }
    v20 = (__int64)&v16[2 * *p_monitor + 39];
  }
  else
  {
LABEL_19:
    v20 = sub_1BDA590(v7, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v22 = (*(__int64 (__fastcall **)(Il2CppObject ***, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8));
  if ( !v22 )
    sub_1B8880C(0LL, v21);
  while ( 1 )
  {
    v23 = *(_QWORD *)v22;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_26;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_26:
      v26 = sub_1BDA590(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v22;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_33;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_33:
      v30 = sub_1BDA590(v22, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v31 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
    if ( !data )
      sub_1B8880C(v31, v31);
    BattleData__ActPassiveBuff(data, v31, skillExecArgs, 0, 0, 0LL);
  }
  v32 = *(_QWORD *)v22;
  v33 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
  {
    v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_41;
    }
    v35 = v32 + 16LL * *v34 + 312;
  }
  else
  {
LABEL_41:
    v35 = sub_1BDA590(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v35)(v22, *(_QWORD *)(v35 + 8));
  if ( skillExecArgs->fields._RemoveAllUnfixedBuff_k__BackingField )
  {
    v7 = (Il2CppObject ***)BattleServantData___c_TypeInfo;
    if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v7 = (Il2CppObject ***)BattleServantData___c_TypeInfo;
    }
    v36 = (System_Action_object__o *)v7[23][16];
    if ( !v36 )
    {
      if ( !*((_DWORD *)v7 + 56) )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = (Il2CppObject ***)BattleServantData___c_TypeInfo;
      }
      v37 = *v7[23];
      v36 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleServantData__TypeInfo);
      System_Action_object____ctor(v36, v37, Method_BattleServantData___c__AddPassiveBuffOnTransform_b__781_0__, 0LL);
      v38 = BattleServantData___c_TypeInfo->static_fields;
      v38->__9__781_0 = (struct System_Action_BattleServantData__o *)v36;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v38->__9__781_0, (int32_t)v36, v39, v40);
    }
    if ( data )
    {
      BattleData__ExecFuncAllServant(data, (System_Action_BattleServantData__o *)v36, 0LL);
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

  if ( (byte_4A5D926 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D926 = 1;
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
      this->fields.transformSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
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
  BattleUserServantData_o *v3; // x20
  BattleServantData_o *v4; // x19
  int32_t *p_afterLimitCount; // x24
  Il2CppObject *Master_object; // x21
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
  Il2CppObject *v60; // x0
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
  int32_t v117; // w8
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
  if ( (byte_4A5D84D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (BattleServantData_o *)sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5D84D = 1;
  }
  if ( !v3 )
    goto LABEL_146;
  p_afterLimitCount = &v3->fields.afterLimitCount;
  v4->fields.limitcount = v3->fields.limitCount;
  v4->fields._dispLimitCount_k__BackingField = v3->fields.dispLimitCount;
  v4->fields._commandCardLimitCount_k__BackingField = v3->fields.commandCardLimitCount;
  v4->fields._iconLimitCount_k__BackingField = v3->fields.iconLimitCount;
  *(_QWORD *)&v3->fields.afterLimitCount = -1LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  this = (BattleServantData_o *)Follower__IsNpc(v4->fields.followerType, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    deckSvt = v4->fields.deckSvt;
    if ( !deckSvt )
      goto LABEL_146;
    if ( deckSvt->fields.npcId <= 0 )
    {
      v9 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
      v8 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v119.fields.currentCryptoKey = v9;
      *(_QWORD *)&v119.fields.fakeValue = v8;
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v119, 0LL);
      this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                      v4->fields.limitcount,
                                      0LL);
      if ( !Master_object )
        goto LABEL_146;
      this = (BattleServantData_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                      (ServantLimitImageMaster_o *)Master_object,
                                      v10,
                                      (int32_t)this,
                                      0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
        v11 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v120.fields.currentCryptoKey = v12;
        *(_QWORD *)&v120.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v120, 0LL) )
        {
          DispLimitCount = BattleServantData__getDispLimitCount(v4, 1, v13);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         DispLimitCount,
                                                         0LL);
        }
        v16 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
        v15 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v121.fields.currentCryptoKey = v16;
        *(_QWORD *)&v121.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v121, 0LL) )
        {
          CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(v4, v17);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                CommandDispLimitCount,
                                                                0LL);
        }
        v20 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v19 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v122.fields.currentCryptoKey = v20;
        *(_QWORD *)&v122.fields.fakeValue = v19;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v122, 0LL);
        if ( !(_DWORD)this )
        {
          v22 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
          v21 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v123.fields.currentCryptoKey = v22;
          *(_QWORD *)&v123.fields.fakeValue = v21;
          v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v123, 0LL);
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v3->fields.limitCount, 0LL);
          if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            if ( !OptionManager__GetFriendCostume(0LL) )
            {
              v29 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
              v28 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v124.fields.currentCryptoKey = v29;
              *(_QWORD *)&v124.fields.fakeValue = v28;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v124, 0LL) >= 11 )
              {
                v31 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
                v30 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v125.fields.currentCryptoKey = v31;
                *(_QWORD *)&v125.fields.fakeValue = v30;
                v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v125, 0LL);
                v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v3->fields.limitCount, 0LL);
                if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                ImageLimitCount = ImageLimitCount__GetImageLimitCount(v32, v33, 0LL);
                v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                               ImageLimitCount,
                                                               0LL);
              }
              v36 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
              v35 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v126.fields.currentCryptoKey = v36;
              *(_QWORD *)&v126.fields.fakeValue = v35;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v126, 0LL) >= 11 )
              {
                v38 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
                v37 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v127.fields.currentCryptoKey = v38;
                *(_QWORD *)&v127.fields.fakeValue = v37;
                v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v127, 0LL);
                v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v3->fields.limitCount, 0LL);
                if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                v41 = ImageLimitCount__GetImageLimitCount(v39, v40, 0LL);
                v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                      v41,
                                                                      0LL);
              }
              v43 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
              v42 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v128.fields.currentCryptoKey = v43;
              *(_QWORD *)&v128.fields.fakeValue = v42;
              if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v128, 0LL) >= 11 )
              {
                v45 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
                v44 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v129.fields.currentCryptoKey = v45;
                *(_QWORD *)&v129.fields.fakeValue = v44;
                v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v129, 0LL);
                v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v3->fields.limitCount, 0LL);
                if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
                v48 = ImageLimitCount__GetCardImageLimitCount(v46, v47, 0, 0, 0LL);
                v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                               v48 + 1,
                                                               0LL);
              }
            }
          }
          v50 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
          v49 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v130.fields.currentCryptoKey = v50;
          *(_QWORD *)&v130.fields.fakeValue = v49;
          v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v130, 0LL);
          IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)v3, 0, 0LL);
          ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                         (ServantLimitImageMaster_o *)Master_object,
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
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v131.fields.currentCryptoKey = v55;
            *(_QWORD *)&v131.fields.fakeValue = v54;
            v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v131, 0LL);
            v57 = *p_afterLimitCount;
            v58 = v56;
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            ServantImageLimitSealAfter = ImageLimitCount__GetImageLimitCount(v58, v57, 0LL);
          }
          v3->fields.afterIconLimitCount = ServantImageLimitSealAfter;
          v93 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
          v92 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v140.fields.currentCryptoKey = v93;
          *(_QWORD *)&v140.fields.fakeValue = v92;
          v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v140, 0LL);
          v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  v4->fields._iconLimitCount_k__BackingField,
                  0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         (ServantLimitImageMaster_o *)Master_object,
                                         v94,
                                         v95,
                                         0LL);
          v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         ServantLimitCountSealAfter,
                                                         0LL);
          v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v3->fields.svtId, 0LL);
          v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  v4->fields._dispLimitCount_k__BackingField,
                  0LL);
          v99 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                  (ServantLimitImageMaster_o *)Master_object,
                  v97,
                  v98,
                  0LL);
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         v99,
                                                         0LL);
          v100 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v3->fields.svtId, 0LL);
          v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                   v4->fields._commandCardLimitCount_k__BackingField,
                   0LL);
          v102 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                   (ServantLimitImageMaster_o *)Master_object,
                   v100,
                   v101,
                   0LL);
          v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v102, 0LL);
          userSvt = *(BattleUserServantData_o **)&v103.fields.fakeValue;
          this = *(BattleServantData_o **)&v103.fields.currentCryptoKey;
          v4->fields._commandCardLimitCount_k__BackingField = v103;
          goto LABEL_122;
        }
LABEL_146:
        sub_1B8880C(this, userSvt);
      }
    }
  }
  v59 = v4->fields.deckSvt;
  if ( !v59 )
    goto LABEL_146;
  if ( v59->fields.isFollowerSvt )
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
        v60 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitSpoilerProtectionMaster___);
        v62 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
        v61 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
        v64 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v63 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        v65 = (ServantLimitSpoilerProtectionMaster_o *)v60;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v132.fields.currentCryptoKey = v64;
        *(_QWORD *)&v132.fields.fakeValue = v63;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v132, 0LL);
        if ( !v65 )
          goto LABEL_146;
        *(_QWORD *)&v145.fields.currentCryptoKey = v62;
        *(_QWORD *)&v145.fields.fakeValue = v61;
        v66 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v65, v145, (int32_t)this, 0LL);
        v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v66,
                                                       0LL);
        v67 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
        v68 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
        v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                v4->fields._dispLimitCount_k__BackingField,
                0LL);
        *(_QWORD *)&v146.fields.currentCryptoKey = v67;
        *(_QWORD *)&v146.fields.fakeValue = v68;
        v70 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v65, v146, v69, 0LL);
        v133 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v70, 0LL);
        v4->fields._dispLimitCount_k__BackingField = v133;
        v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v133, 0LL);
        v72 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v65, v71, 0LL);
        v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                       v72,
                                                       0LL);
        v73 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
        v74 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
        v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                v4->fields._commandCardLimitCount_k__BackingField,
                0LL);
        *(_QWORD *)&v147.fields.currentCryptoKey = v73;
        *(_QWORD *)&v147.fields.fakeValue = v74;
        v76 = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(v65, v147, v75, 0LL);
        v134 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v76, 0LL);
        v4->fields._commandCardLimitCount_k__BackingField = v134;
        v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v134, 0LL);
        v78 = ServantLimitSpoilerProtectionMaster__AdjustLimitCount(v65, v77, 0LL);
        v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                              v78,
                                                              0LL);
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      if ( !OptionManager__GetFriendImageLimitCount(0LL) )
      {
        v80 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v79 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v135.fields.currentCryptoKey = v80;
        *(_QWORD *)&v135.fields.fakeValue = v79;
        v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v135, 0LL);
        v82 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v82 = BalanceConfig_TypeInfo;
        }
        if ( v81 >= v82->static_fields->ServantLimitMax )
        {
          v84 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
          v83 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v136.fields.currentCryptoKey = v84;
          *(_QWORD *)&v136.fields.fakeValue = v83;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v136, 0LL) <= 10 )
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
        v86 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
        v85 = *(_QWORD *)&v4->fields._dispLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v137.fields.currentCryptoKey = v86;
        *(_QWORD *)&v137.fields.fakeValue = v85;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v137, 0LL) >= 11 )
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v4->fields._dispLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                         0,
                                                         0LL);
        }
        v88 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
        v87 = *(_QWORD *)&v4->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v138.fields.currentCryptoKey = v88;
        *(_QWORD *)&v138.fields.fakeValue = v87;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v138, 0LL) >= 11 )
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v4->fields._commandCardLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                0,
                                                                0LL);
        }
        v90 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
        v89 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v139.fields.currentCryptoKey = v90;
        *(_QWORD *)&v139.fields.fakeValue = v89;
        this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v139, 0LL);
        if ( (int)this >= 11 )
        {
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(0, 0LL);
          userSvt = *(BattleUserServantData_o **)&v91.fields.fakeValue;
          this = *(BattleServantData_o **)&v91.fields.currentCryptoKey;
          v4->fields._iconLimitCount_k__BackingField = v91;
        }
      }
    }
  }
LABEL_122:
  v104 = v4->fields.deckSvt;
  if ( !v104 )
    goto LABEL_146;
  if ( v104->fields.isFollowerSvt && Follower__IsNpc(v4->fields.followerType, 0LL) )
  {
    v106 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
    v105 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v141.fields.currentCryptoKey = v106;
    *(_QWORD *)&v141.fields.fakeValue = v105;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v141, 0LL) )
    {
      v107 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
      v108 = *(_QWORD *)&v4->fields._iconLimitCount_k__BackingField.fields.fakeValue;
    }
    else
    {
      v110 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
      v109 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v142.fields.currentCryptoKey = v110;
      *(_QWORD *)&v142.fields.fakeValue = v109;
      v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v142, 0LL);
      v112 = *(_QWORD *)&v3->fields.limitCount.fields.currentCryptoKey;
      *(_QWORD *)&v143.fields.fakeValue = *(_QWORD *)&v3->fields.limitCount.fields.fakeValue;
      v113 = v111;
      *(_QWORD *)&v143.fields.currentCryptoKey = v112;
      v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v143, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      v115 = ImageLimitCount__GetCardImageLimitCount(v113, v114, 1, 0, 0LL);
      v116 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v115 + 1, 0LL);
      v108 = *(_QWORD *)&v116.fields.fakeValue;
      v107 = *(_QWORD *)&v116.fields.currentCryptoKey;
      v4->fields._iconLimitCount_k__BackingField = v116;
    }
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v144.fields.currentCryptoKey = v107;
    *(_QWORD *)&v144.fields.fakeValue = v108;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v144, 0LL) <= 10 )
    {
      v117 = BasicHelper__DecryptValue_41109412(v4->fields._iconLimitCount_k__BackingField, 0LL);
      if ( v117 >= 3 )
        v117 = 3;
      if ( v117 <= 1 )
        v118 = 1;
      else
        v118 = v117;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      v4->fields._iconLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v118, 0LL);
    }
  }
}


bool __fastcall BattleServantData__CancelBuffExtendingLife(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B8880C(0LL, method);
  return BattleBuffData__CancelExtendingLife(buffData, 0LL);
}


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
  System_Collections_Generic_HashSet_T__o *v16; // x24
  int32_t v17; // w2
  char v18; // w3
  char v19; // w27
  System_Collections_Generic_List_object__o *v20; // x24
  __int64 v21; // x1
  void *buffData; // x0
  const MethodInfo *v23; // x2
  int v24; // w8
  void *v25; // x25
  unsigned int v26; // w28
  BattleBuffData_BuffData_o *v27; // x26
  int turn; // w9
  int32_t v29; // w19
  int v30; // w8
  int count; // w8
  bool v32; // cc
  bool v33; // w8
  _BOOL4 v34; // w19
  char v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  BattleBuffData_o *v40; // x19
  BattleServantData___c__DisplayClass561_0_o v43; // [xsp+10h] [xbp-70h] BYREF

  v14 = isAny;
  v15 = isExcludeUnSubStateIndiv;
  if ( (byte_4A5D8B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4A5D8B6 = 1;
  }
  v43.fields.targetIndivi = targetIndivi;
  *(_QWORD *)&v43.fields.isExcludeUnSubStateIndiv = v15;
  v43.fields.isAny = v14;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v43.fields.targetIndivi,
    (int32_t)targetIndivi,
    (int32_t)targetIndivi,
    isTurn);
  v16 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v16,
    (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor__);
  *buffsToRemove = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)buffsToRemove, (int32_t)v16, v17, v18);
  if ( !v43.fields.targetIndivi )
  {
    v19 = 0;
    return v19 & 1;
  }
  v19 = 0;
  if ( changeValue && *(_QWORD *)&v43.fields.targetIndivi->max_length )
  {
    v20 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    buffData = this->fields.buffData;
    if ( !buffData || (buffData = BattleBuffData__getActiveList((BattleBuffData_o *)buffData, 1, 0LL)) == 0LL )
LABEL_47:
      sub_1B8880C(buffData, v21);
    v24 = *((_DWORD *)buffData + 6);
    v25 = buffData;
    if ( v24 < 1 )
    {
      v19 = 0;
      if ( !v20 )
        goto LABEL_47;
      goto LABEL_44;
    }
    v26 = 0;
    v19 = 0;
    while ( 1 )
    {
      if ( v26 >= v24 )
        sub_1B88814(buffData, v21);
      v27 = (BattleBuffData_BuffData_o *)*((_QWORD *)v25 + (int)v26 + 4);
      if ( !v27 )
        goto LABEL_47;
      if ( isTurn )
      {
        turn = v27->fields.turn;
        if ( turn >= 1 && (turn >= 3 || changeValue >= 0 || isAllowRemove) )
        {
          buffData = (void *)BattleServantData___ChangeBuffValue_g__IsMatchIndividualityCond_561_0(v27, &v43, v23);
          if ( ((unsigned __int8)buffData & 1) != 0 )
          {
            v29 = v27->fields.turn;
            v30 = v29 + changeValue;
            v27->fields.turn = v29 + changeValue;
            if ( v29 + changeValue <= 0 )
            {
              if ( isAllowRemove )
              {
                v27->fields.turn = 0;
                buffData = *buffsToRemove;
                if ( !*buffsToRemove )
                  goto LABEL_47;
                System_Collections_Generic_HashSet_object___Add(
                  (System_Collections_Generic_HashSet_T__o *)buffData,
                  (Il2CppObject *)v27,
                  (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
                v30 = v27->fields.turn;
              }
              else
              {
                if ( (v29 & 1) != 0 )
                  v30 = 1;
                else
                  v30 = 2;
                v27->fields.turn = v30;
              }
            }
            goto LABEL_32;
          }
        }
      }
      else
      {
        count = v27->fields.count;
        v32 = count < 1;
        v33 = count == 1;
        if ( !v32 && (!v33 || changeValue >= 0 || isAllowRemove) )
        {
          buffData = (void *)BattleServantData___ChangeBuffValue_g__IsMatchIndividualityCond_561_0(v27, &v43, v23);
          if ( ((unsigned __int8)buffData & 1) != 0 )
          {
            v29 = v27->fields.count;
            v30 = v29 + changeValue;
            v27->fields.count = v29 + changeValue;
            if ( v29 + changeValue <= 0 )
            {
              if ( isAllowRemove )
              {
                v27->fields.count = 0;
                buffData = *buffsToRemove;
                if ( !*buffsToRemove )
                  goto LABEL_47;
                System_Collections_Generic_HashSet_object___Add(
                  (System_Collections_Generic_HashSet_T__o *)buffData,
                  (Il2CppObject *)v27,
                  (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Add__);
                v30 = v27->fields.count;
              }
              else
              {
                v30 = 1;
                v27->fields.count = 1;
              }
            }
LABEL_32:
            v34 = v30 != v29;
            v19 |= v34;
            buffData = (void *)BattleBuffData_BuffData__IslinkageTarget(v27, 0LL);
            if ( v34 && ((unsigned __int8)buffData & 1) != 0 )
            {
              if ( !v20 )
                goto LABEL_47;
              items = v20->fields._items;
              v37 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
              ++v20->fields._version;
              if ( !items )
                goto LABEL_47;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v20,
                  (Il2CppObject *)v27,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                v20->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v27;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v27, (int32_t)v23, v35);
              }
            }
          }
        }
      }
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
      {
        if ( !v20 )
          goto LABEL_47;
LABEL_44:
        v40 = this->fields.buffData;
        buffData = System_Collections_Generic_List_object___ToArray(
                     v20,
                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
        if ( !v40 )
          goto LABEL_47;
        BattleBuffData__syncLinkageBuffChangeParam(v40, (BattleBuffData_BuffData_array *)buffData, 0LL);
        return v19 & 1;
      }
    }
  }
  return v19 & 1;
}


bool __fastcall BattleServantData__ChangeSkillRemainingTurn(
        BattleServantData_o *this,
        BattleSkillInfoData_o *skillInfo,
        BattleSkillInfoData_o *beforeDeathSkillInfo,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x21
  Il2CppObject *Master_object; // x21
  int32_t BattleStartRemainingTurn; // w0
  int32_t chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4A5D854 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    this = (BattleServantData_o *)sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5D854 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !Master_object )
LABEL_19:
    sub_1B8880C(this, skillInfo);
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
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  BattleBuffData_CheckIndividualitiesData_o *v7; // x0
  __int64 v8; // x1
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D915 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D915 = 1;
  }
  usedBuff = 0LL;
  BuffData = BattleServantData__get_BuffData(this, (const MethodInfo *)funcIndividuality);
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v6
    || (v7 = BattleBuffData_CheckIndividualitiesData__AddSelfIndividuality(v6, funcIndividuality, 0LL), !BuffData) )
  {
    sub_1B8880C(v7, v8);
  }
  return BattleBuffData__checkActBuff_42454204(BuffData, 130, v7, &usedBuff, 0LL, 0LL);
}


bool __fastcall BattleServantData__CheckAvoidance(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        BattleBuffData_BuffData_o **usedBuff,
        bool isSvtAction,
        System_Int32_array *notSvtIndivArray,
        int32_t noDamageBuffCheckTargetSide,
        System_Func_BattleBuffData_BuffData__bool__o *pierceCond,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v13; // x0
  __int64 v14; // x1

  if ( (noDamageBuffCheckTargetSide & 2) != 0 )
  {
    buffData = this->fields.buffData;
    v13 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
            this,
            isSvtAction,
            targetSvt,
            command,
            notSvtIndivArray,
            (const MethodInfo *)notSvtIndivArray);
    if ( !buffData )
      sub_1B8880C(v13, v14);
    return BattleBuffData__checkActBuff_42454204(buffData, 18, v13, usedBuff, pierceCond, 0LL);
  }
  else
  {
    *usedBuff = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)usedBuff, 0, (int32_t)targetSvt, (int32_t)usedBuff);
    return 0;
  }
}


bool __fastcall BattleServantData__CheckAvoidanceAttackDeathDamage(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o **usedBuff,
        int32_t damage,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualityData,
        int32_t noDamageBuffCheckTargetSide,
        System_Func_BattleBuffData_BuffData__bool__o *pierceCond,
        const MethodInfo *method)
{
  char v10; // w24
  __int64 v13; // x1
  BattleBuffData_o *buffData; // x0
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  *usedBuff = 0LL;
  v10 = noDamageBuffCheckTargetSide;
  sub_1B88554((ServantStatusBattleListViewItem_o *)usedBuff, 0, damage, (int32_t)checkIndividualityData);
  if ( (v10 & 2) == 0
    || ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr) > damage )
  {
    return 0;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B8880C(0LL, v13);
  FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 129, checkIndividualityData, 0, pierceCond, 0LL);
  *usedBuff = FirstMatchCondBuff;
  sub_1B88554((ServantStatusBattleListViewItem_o *)usedBuff, (int32_t)FirstMatchCondBuff, v17, v18);
  return *usedBuff != 0LL;
}


bool __fastcall BattleServantData__CheckAvoidanceIndividuality(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        int32_t *targetBuffId,
        bool isSvtAction,
        System_Int32_array *notSvtIndivArray,
        int32_t noDamageBuffCheckTargetSide,
        System_Func_BattleBuffData_BuffData__bool__o *pierceCond,
        const MethodInfo *method)
{
  BattleServantData_o *v10; // x8
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v13; // x0
  __int64 v14; // x1
  int32_t index; // w8

  v10 = this;
  LOBYTE(this) = 0;
  *targetBuffId = 0;
  if ( (noDamageBuffCheckTargetSide & 2) != 0 )
  {
    buffData = v10->fields.buffData;
    v13 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
            v10,
            isSvtAction,
            targetSvt,
            command,
            notSvtIndivArray,
            (const MethodInfo *)notSvtIndivArray);
    if ( !buffData )
      sub_1B8880C(v13, v14);
    this = (BattleServantData_o *)BattleBuffData__GetFirstMatchCondBuff(buffData, 93, v13, 0, pierceCond, 0LL);
    if ( this )
    {
      index = this->fields.index;
      LOBYTE(this) = 1;
      *targetBuffId = index;
    }
  }
  return (char)this;
}


bool __fastcall BattleServantData__CheckDisableForciblyAddStateBuffAvoid(
        BattleServantData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opponentSvt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Int32_array *v5; // x19
  BattleServantData_o *v6; // x20
  BattleBuffData_o *buffData; // x21
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v9; // x4
  System_Int32_array *Individualities_42960956; // x0

  v5 = buffIndiv;
  v6 = this;
  if ( opponentSvt )
  {
    this = (BattleServantData_o *)BattleServantData__getIndividualities_42960956(opponentSvt, buffIndiv, 1, 0, v4);
    v5 = (System_Int32_array *)this;
  }
  buffData = v6->fields.buffData;
  if ( !buffData )
    sub_1B8880C(this, buffIndiv);
  BuffIndividualities = BattleBuffData__getBuffIndividualities(v6->fields.buffData, 0, 0, 0, 0, 0LL, 0LL);
  Individualities_42960956 = BattleServantData__getIndividualities_42960956(v6, BuffIndividualities, 1, 0, v9);
  return BattleBuffData__CheckDisableForciblyAddStateBuffAvoid(buffData, Individualities_42960956, v5, 0LL);
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
            sub_1B88814(SelectedNobleSeqId, v8);
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
        int32_t noDamageBuffCheckTargetSide,
        System_Func_BattleBuffData_BuffData__bool__o *pierceCond,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v13; // x0
  __int64 v14; // x1

  if ( (noDamageBuffCheckTargetSide & 2) != 0 )
  {
    buffData = this->fields.buffData;
    v13 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
            this,
            isSvtAction,
            targetSvt,
            command,
            notSvtIndivArray,
            (const MethodInfo *)notSvtIndivArray);
    if ( !buffData )
      sub_1B8880C(v13, v14);
    return BattleBuffData__checkActBuff_42454204(buffData, 16, v13, usedBuff, pierceCond, 0LL);
  }
  else
  {
    *usedBuff = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)usedBuff, 0, (int32_t)targetSvt, (int32_t)usedBuff);
    return 0;
  }
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
  BattleServantData___c__DisplayClass688_0_o *v18; // x27
  __int64 v19; // x1
  BuffEntity_o *Entity; // x0
  BattleActionData_DamageData_o *v21; // x29
  System_Func_object__bool__o *pierceCond; // x20
  int32_t v23; // w10
  int v24; // w9
  int32_t v25; // w8
  System_Func_object__bool__o *v26; // x20
  const MethodInfo *v27; // [xsp+20h] [xbp-90h]
  const MethodInfo *v28; // [xsp+20h] [xbp-90h]
  float *v29; // [xsp+28h] [xbp-88h]
  bool minimumDamageFlga; // [xsp+40h] [xbp-70h] BYREF
  float damagea; // [xsp+44h] [xbp-6Ch] BYREF
  BattleBuffData_BuffData_o *useBuffData; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4A5D902 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_DamageData_TypeInfo);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass688_0__CheckInvincibleAvoidanceBuff_b__0__);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass688_0__CheckInvincibleAvoidanceBuff_b__1__);
    sub_1B885B0(&BattleServantData___c__DisplayClass688_0_TypeInfo);
    byte_4A5D902 = 1;
  }
  useBuffData = 0LL;
  if ( actor
    && BattleServantData__CheckPierceSpecialInvincible(
         actor,
         command,
         this,
         &useBuffData,
         1,
         (const MethodInfo *)damage) )
  {
    v18 = (BattleServantData___c__DisplayClass688_0_o *)sub_1B887FC(BattleServantData___c__DisplayClass688_0_TypeInfo);
    BattleServantData___c__DisplayClass688_0___ctor(v18, 0LL);
    Entity = (BuffEntity_o *)useBuffData;
    if ( !useBuffData )
      goto LABEL_22;
    Entity = BattleBuffData_BuffData__get_Entity(useBuffData, 0LL);
    if ( !v18 )
      goto LABEL_22;
    if ( !Entity )
      goto LABEL_22;
    BuffEntity__TryGetNotPierceIndividuality(Entity, &v18->fields.notPierceIndivArray, 0LL);
    v29 = damage;
    damagea = *damage;
    v21 = (BattleActionData_DamageData_o *)sub_1B887FC(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor(v21, 0LL);
    minimumDamageFlga = 1;
    pierceCond = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      pierceCond,
      (Il2CppObject *)v18,
      Method_BattleServantData___c__DisplayClass688_0__CheckInvincibleAvoidanceBuff_b__0__,
      0LL);
    BattleServantData__SetInvincibleAvoidanceBuff(
      this,
      data,
      actor,
      command,
      v21,
      &damagea,
      &minimumDamageFlga,
      hitStat,
      mainAction,
      2,
      (System_Func_BattleBuffData_BuffData__bool__o *)pierceCond,
      1,
      v27);
    if ( !v21 )
LABEL_22:
      sub_1B8880C(Entity, v19);
    if ( *hitStat == 2 )
      v23 = 4;
    else
      v23 = *hitStat;
    if ( v21->fields.isSpecialInvincible )
      v24 = 5;
    else
      v24 = 3;
    if ( *hitStat == 1 )
      v25 = v24;
    else
      v25 = v23;
    *hitStat = v25;
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v18->fields.notPierceIndivArray, 0LL) )
    {
      v26 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v26,
        (Il2CppObject *)v18,
        Method_BattleServantData___c__DisplayClass688_0__CheckInvincibleAvoidanceBuff_b__1__,
        0LL);
      BattleServantData__SetInvincibleAvoidanceBuff(
        this,
        data,
        actor,
        command,
        damageData,
        v29,
        minimumDamageFlg,
        hitStat,
        mainAction,
        3,
        (System_Func_BattleBuffData_BuffData__bool__o *)v26,
        1,
        v28);
    }
  }
  else
  {
    BattleServantData__SetInvincibleAvoidanceBuff(
      this,
      data,
      actor,
      command,
      damageData,
      damage,
      minimumDamageFlg,
      hitStat,
      mainAction,
      3,
      0LL,
      0,
      v27);
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
  bool v8; // w25
  BattleServantData_o *v11; // x19
  System_Int32_array *NotSvtActorIndividualityArray; // x23
  BattleData_o *v14; // x1
  BattleActionData_DamageData_o *v15; // x4
  BattleActionData_o *v16; // x6
  const MethodInfo *v17; // x7
  System_Func_BattleBuffData_BuffData__bool__o *v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  struct BattleBuffData_o *v22; // x8
  const MethodInfo *v23; // x5
  struct BattleBuffData_o *v24; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x5
  struct BattleBuffData_BuffData_o *v28; // x1
  struct BattleBuffData_o *v29; // x8
  const MethodInfo *v30; // [xsp+0h] [xbp-70h]
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]
  const MethodInfo *v32; // [xsp+0h] [xbp-70h]
  const MethodInfo *v33; // [xsp+0h] [xbp-70h]
  BattleBuffData_BuffData_o *v34; // [xsp+10h] [xbp-60h] BYREF
  BattleBuffData_BuffData_o *v35; // [xsp+18h] [xbp-58h] BYREF
  BattleBuffData_BuffData_o *usedBuff; // [xsp+20h] [xbp-50h] BYREF
  BattleBuffData_BuffData_o *v37; // [xsp+28h] [xbp-48h] BYREF

  v35 = 0LL;
  usedBuff = 0LL;
  v34 = 0LL;
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_24;
  buffData->fields.isNoDamage = 0;
  if ( !data )
    goto LABEL_24;
  v8 = actor != 0LL;
  v11 = this;
  NotSvtActorIndividualityArray = BattleData__GetNotSvtActorIndividualityArray(data, mainAction, actor != 0LL, 0LL);
  v37 = 0LL;
  v18 = BattleServantData__CheckNoDamagePierceBuff(v11, v14, actor, command, v15, 3, v16, v17);
  this = (BattleServantData_o *)BattleServantData__CheckSpecialInvincible(
                                  v11,
                                  command,
                                  actor,
                                  &usedBuff,
                                  v8,
                                  NotSvtActorIndividualityArray,
                                  3,
                                  v18,
                                  v30);
  if ( !damageData )
    goto LABEL_24;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    damageData->fields.isSpecialInvincible = 1;
    v21 = (int)usedBuff;
    damageData->fields._NoDamageAffectedBuff_k__BackingField = usedBuff;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&damageData->fields._NoDamageAffectedBuff_k__BackingField,
      v21,
      v19,
      v20);
    v22 = v11->fields.buffData;
    if ( v22 )
    {
      v22->fields.isNoDamage = 1;
      return;
    }
LABEL_24:
    sub_1B8880C(this, data);
  }
  this = (BattleServantData_o *)BattleServantData__CheckAvoidanceIndividuality(
                                  v11,
                                  command,
                                  actor,
                                  &damageData->fields.defNoDamageBuffId,
                                  actor != 0LL,
                                  NotSvtActorIndividualityArray,
                                  3,
                                  v18,
                                  v31);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_21;
  if ( actor )
  {
    this = (BattleServantData_o *)BattleServantData__checkPierceInvincible(actor, command, v11, &v37, 3, v23);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
LABEL_10:
      v24 = v11->fields.buffData;
      if ( !v24 )
        goto LABEL_24;
      v24->fields.isNoDamage = 0;
      if ( v37 )
        BattleBuffData_BuffData__RevertUnused(v37, 1, 0LL);
      return;
    }
    if ( BattleServantData__CheckInvincible(v11, command, actor, &v35, 1, NotSvtActorIndividualityArray, 3, v18, v32) )
      goto LABEL_16;
    this = (BattleServantData_o *)BattleServantData__checkBreakAvoidance(actor, command, v11, &v37, 3, v27);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_10;
LABEL_18:
    if ( !BattleServantData__CheckAvoidance(
            v11,
            command,
            actor,
            &v34,
            actor != 0LL,
            NotSvtActorIndividualityArray,
            3,
            v18,
            v33) )
      return;
    v28 = v34;
    goto LABEL_20;
  }
  if ( !BattleServantData__CheckInvincible(v11, command, 0LL, &v35, 0, NotSvtActorIndividualityArray, 3, v18, v32) )
    goto LABEL_18;
LABEL_16:
  v28 = v35;
LABEL_20:
  damageData->fields._NoDamageAffectedBuff_k__BackingField = v28;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&damageData->fields._NoDamageAffectedBuff_k__BackingField,
    (int32_t)v28,
    v25,
    v26);
LABEL_21:
  v29 = v11->fields.buffData;
  if ( !v29 )
    goto LABEL_24;
  v29->fields.isNoDamage = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Func_BattleBuffData_BuffData__bool__o *__fastcall BattleServantData__CheckNoDamagePierceBuff(
        BattleServantData_o *this,
        BattleData_o *data,
        BattleServantData_o *actor,
        BattleCommandData_o *command,
        BattleActionData_DamageData_o *damageData,
        int32_t noDamageBuffCheckTargetSide,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  BattleServantData___c_c *v12; // x0
  System_Func_BattleBuffData_BuffData__bool__o *_9__684_0; // x23
  Il2CppObject *v14; // x24
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  BattleServantData___c__DisplayClass684_0_o *v18; // x20
  BuffEntity_o *Entity; // x0
  __int64 v20; // x1
  struct BattleBuffData_o *buffData; // x8
  BattleBuffData_BuffData_o *useBuffData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D901 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__CheckNoDamagePierceBuff_b__684_0__);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass684_0__CheckNoDamagePierceBuff_b__1__);
    sub_1B885B0(&BattleServantData___c__DisplayClass684_0_TypeInfo);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D901 = 1;
  }
  v12 = BattleServantData___c_TypeInfo;
  useBuffData = 0LL;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v12 = BattleServantData___c_TypeInfo;
  }
  _9__684_0 = v12->static_fields->__9__684_0;
  if ( _9__684_0 )
  {
    if ( !actor )
      return _9__684_0;
    goto LABEL_11;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = BattleServantData___c_TypeInfo;
  }
  v14 = (Il2CppObject *)v12->static_fields->__9;
  _9__684_0 = (System_Func_BattleBuffData_BuffData__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    (System_Func_object__bool__o *)_9__684_0,
    v14,
    Method_BattleServantData___c__CheckNoDamagePierceBuff_b__684_0__,
    0LL);
  static_fields = BattleServantData___c_TypeInfo->static_fields;
  static_fields->__9__684_0 = _9__684_0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__684_0, (int32_t)_9__684_0, v16, v17);
  if ( actor )
  {
LABEL_11:
    if ( BattleServantData__CheckPierceSpecialInvincible(
           actor,
           command,
           this,
           &useBuffData,
           noDamageBuffCheckTargetSide,
           *(const MethodInfo **)&noDamageBuffCheckTargetSide) )
    {
      v18 = (BattleServantData___c__DisplayClass684_0_o *)sub_1B887FC(BattleServantData___c__DisplayClass684_0_TypeInfo);
      BattleServantData___c__DisplayClass684_0___ctor(v18, 0LL);
      buffData = this->fields.buffData;
      if ( !buffData
        || (buffData->fields.isNoDamage = 0, (Entity = (BuffEntity_o *)useBuffData) == 0LL)
        || (Entity = BattleBuffData_BuffData__get_Entity(useBuffData, 0LL), !v18)
        || !Entity )
      {
        sub_1B8880C(Entity, v20);
      }
      BuffEntity__TryGetNotPierceIndividuality(Entity, &v18->fields.notPierceIndivArray, 0LL);
      _9__684_0 = (System_Func_BattleBuffData_BuffData__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        (System_Func_object__bool__o *)_9__684_0,
        (Il2CppObject *)v18,
        Method_BattleServantData___c__DisplayClass684_0__CheckNoDamagePierceBuff_b__1__,
        0LL);
    }
  }
  return _9__684_0;
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

  if ( (byte_4A5D913 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D913 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v7, v8);
  NotTargetSkillIdArray = BattleBuffData__GetNotTargetSkillIdArray(buffData, v6, 0LL);
  return System_Array__IndexOf_int_(
           NotTargetSkillIdArray,
           skillId,
           (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) != -1;
}


bool __fastcall BattleServantData__CheckPierceSpecialInvincible(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        BattleBuffData_BuffData_o **useBuffData,
        int32_t noDamageBuffCheckTargetSide,
        const MethodInfo *method)
{
  char v6; // w22
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1

  v6 = noDamageBuffCheckTargetSide;
  if ( (byte_4A5D8DC & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8DC = 1;
  }
  if ( (v6 & 1) != 0 )
  {
    buffData = this->fields.buffData;
    v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v13, this, targetSvt, command, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      sub_1B8880C(v14, v15);
    return BattleBuffData__checkActBuff_42454204(buffData, 144, v13, useBuffData, 0LL, 0LL);
  }
  else
  {
    *useBuffData = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)useBuffData, 0, (int32_t)targetSvt, (int32_t)useBuffData);
    return 0;
  }
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
  __int64 v10; // x1
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5D8DF & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8DF = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__checkActBuff_42454204(buffData, 132, v8, &usedBuff, 0LL, 0LL);
}


bool __fastcall BattleServantData__CheckSelectedNobleSeqIsGroup(BattleServantData_o *this, const MethodInfo *method)
{
  TreasureDvcEntity_o *TreasureDevice; // x0
  __int64 v4; // x1

  if ( this->fields.groupSeqIdFromMstTDSeqWeight > 0 )
    return (unsigned __int8)&dword_0 + 1;
  TreasureDevice = BattleServantData__get_TreasureDevice(this, method);
  if ( !TreasureDevice )
    sub_1B8880C(0LL, v4);
  return TreasureDvcEntity__IsGroupId(TreasureDevice, 0LL);
}


bool __fastcall BattleServantData__CheckSpecialInvincible(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        BattleBuffData_BuffData_o **usedBuff,
        bool isSvtAction,
        System_Int32_array *notSvtIndivArray,
        int32_t noDamageBuffCheckTargetSide,
        System_Func_BattleBuffData_BuffData__bool__o *pierceCond,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v13; // x0
  __int64 v14; // x1

  if ( (noDamageBuffCheckTargetSide & 2) != 0 )
  {
    buffData = this->fields.buffData;
    v13 = BattleServantData__GetNoDamageBuffCheckIndividualitiesData(
            this,
            isSvtAction,
            targetSvt,
            command,
            notSvtIndivArray,
            (const MethodInfo *)notSvtIndivArray);
    if ( !buffData )
      sub_1B8880C(v13, v14);
    return BattleBuffData__checkActBuff_42454204(buffData, 95, v13, usedBuff, pierceCond, 0LL);
  }
  else
  {
    *usedBuff = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)usedBuff, 0, (int32_t)targetSvt, (int32_t)usedBuff);
    return 0;
  }
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteName, 0, v2, v3);
  this->fields.svtOverwriteBattleName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteBattleName, 0, v5, v6);
}


void __fastcall BattleServantData__ClearReceiveFunctionIdList(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  struct System_Collections_Generic_List_int__o *receiveFunctionIdList_k__BackingField; // x8
  int v4; // w9

  v2 = this;
  if ( (byte_4A5D92E & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4A5D92E = 1;
  }
  receiveFunctionIdList_k__BackingField = v2->fields._receiveFunctionIdList_k__BackingField;
  if ( !receiveFunctionIdList_k__BackingField )
    sub_1B8880C(this, method);
  v4 = receiveFunctionIdList_k__BackingField->fields._version + 1;
  receiveFunctionIdList_k__BackingField->fields._size = 0;
  receiveFunctionIdList_k__BackingField->fields._version = v4;
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
    sub_1B8880C(0LL, v4);
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
  BuffMaster_o *buffMst; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  BattleBuffData_o *v13; // x21
  System_Func_object__bool__o *v14; // x22
  int v15; // w8
  _DWORD *v16; // x20
  unsigned int i; // w21
  char *v18; // x22
  char *v19; // x22
  void *v20; // t1
  unsigned int MaxHp; // w0
  unsigned int v22; // w0
  const MethodInfo *v23; // x2

  if ( (byte_4A5D86A & 1) == 0 )
  {
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass391_0__ContinuePreProcess_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass391_0_TypeInfo);
    byte_4A5D86A = 1;
  }
  v5 = sub_1B887FC(BattleServantData___c__DisplayClass391_0_TypeInfo);
  BattleServantData___c__DisplayClass391_0___ctor((BattleServantData___c__DisplayClass391_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  *(_BYTE *)(v5 + 16) = isDeadContinue;
  lineMaxNp = this->fields.lineMaxNp;
  this->fields.status = 0;
  this->fields.np = 0;
  BattleServantData__addNp(this, lineMaxNp, 1, v8);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_21;
  buffMst = BattleBuffData__get_buffMst((BattleBuffData_o *)buffData, 0LL);
  *(_QWORD *)(v5 + 24) = buffMst;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)buffMst, v11, v12);
  v13 = this->fields.buffData;
  v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_BattleServantData___c__DisplayClass391_0__ContinuePreProcess_b__0__,
    0LL);
  if ( !v13
    || (BattleBuffData__RemoveActiveBuffWithCondition(v13, (System_Func_BattleBuffData_BuffData__bool__o *)v14, 0LL),
        (buffData = this->fields.buffData) == 0LL)
    || (buffData = BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL)) == 0LL )
  {
LABEL_21:
    sub_1B8880C(buffData, v7);
  }
  v15 = *((_DWORD *)buffData + 6);
  v16 = buffData;
  if ( v15 >= 1 )
  {
    for ( i = 0; (int)i < v15; ++i )
    {
      if ( i >= v15 )
LABEL_22:
        sub_1B88814(buffData, v7);
      v18 = (char *)&v16[2 * i];
      v20 = (void *)*((_QWORD *)v18 + 4);
      v19 = v18 + 32;
      buffData = v20;
      if ( !v20 )
        goto LABEL_21;
      buffData = (void *)BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( ((unsigned __int8)buffData & 1) != 0 )
        goto LABEL_16;
      if ( i >= v16[6] )
        goto LABEL_22;
      buffData = *(void **)v19;
      if ( !*(_QWORD *)v19 )
        goto LABEL_21;
      buffData = (void *)BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( ((unsigned __int8)buffData & 1) != 0 )
      {
LABEL_16:
        if ( i >= v16[6] )
          goto LABEL_22;
        if ( !*(_QWORD *)v19 )
          goto LABEL_21;
        *(_DWORD *)(*(_QWORD *)v19 + 112LL) = 0;
      }
      v15 = v16[6];
    }
  }
  this->fields.deckIndex = -1;
  MaxHp = BattleServantData__getMaxHp(this, v7);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v22 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
    this,
    v22,
    this->klass->vtable._15_get_IsAiNpc.methodPtr);
  this->fields.isDeadAnime = 0;
  this->fields.isSilnetDead = 0;
  this->fields.IsVanishSkill = 0;
  BattleServantData__RemovePartAnimationSaveData(this, 0LL, v23);
}


int32_t __fastcall BattleServantData__ConvertPierceSpecialInvincibleHitType(
        BattleServantData_o *this,
        int32_t hitState,
        bool isSpecialInvincible,
        const MethodInfo *method)
{
  if ( hitState == 1 )
  {
    if ( isSpecialInvincible )
      return 5;
    else
      return 3;
  }
  else if ( hitState == 2 )
  {
    return 4;
  }
  else
  {
    return hitState;
  }
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

  if ( (byte_4A5D86C & 1) == 0 )
  {
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    byte_4A5D86C = 1;
  }
  v5 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
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
    sub_1B8880C(v6, v7);
  if ( v9->max_length <= 1 )
LABEL_11:
    sub_1B88814(v6, v7);
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
      sub_1B8880C(this, data);
    DeckServantData = BattleInfoData__getDeckServantData((BattleInfoData_o *)this, v4->fields.uniqueId, 0LL);
    battle_ent = data->fields.battle_ent;
    v10 = DeckServantData;
    Int = Follower__getInt(v4->fields.followerType, 0LL);
    BattleServantData__setBaseServantData(v4, v10, battle_ent, Int, 0LL, 1, v12);
    LODWORD(battle_ent) = v4->fields.transformIndex;
    v4->fields.dressDispId = -1;
    *(_QWORD *)&v4->fields.transformIndex = 0xFFFFFFFFLL;
    v4->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v4->fields.classBoardAddPassiveSkills,
      (int32_t)classBoardAddPassiveSkills,
      v13,
      v14);
    v4->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
    sub_1B88554(
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
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D927 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_TypeInfo);
    byte_4A5D927 = 1;
  }
  v5 = sub_1B887FC(BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_TypeInfo);
  BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805___ctor(
    (BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 56) = commandSelf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)commandSelf, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *)v5;
}


System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateContinueFunctionSkill(
        BattleServantData_o *this,
        bool isKeepAlive,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D86B & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData__EnumerateContinueFunctionSkill_d__394_TypeInfo);
    byte_4A5D86B = 1;
  }
  v5 = sub_1B887FC(BattleServantData__EnumerateContinueFunctionSkill_d__394_TypeInfo);
  BattleServantData__EnumerateContinueFunctionSkill_d__394___ctor(
    (BattleServantData__EnumerateContinueFunctionSkill_d__394_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 49) = isKeepAlive;
  return (System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *)v5;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData__EnumerateIndividuality(
        BattleServantData_o *this,
        System_Collections_Generic_IEnumerable_int__o *externalIndiv,
        bool isIncludeUnfixBuff,
        bool isIncludeRemoveBuff,
        const MethodInfo *method)
{
  __int64 v9; // x19
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_int__o *ServantIndividualityList; // x20
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_T__o *buffData; // x0
  __int64 v14; // x1
  bool v15; // w23
  bool v16; // w22
  System_Collections_Generic_IEnumerable_T__o *BuffParamList; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  System_Func_int__bool__o *v21; // x21

  if ( (byte_4A5D8F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass653_0__EnumerateIndividuality_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass653_0_TypeInfo);
    byte_4A5D8F1 = 1;
  }
  v9 = sub_1B887FC(BattleServantData___c__DisplayClass653_0_TypeInfo);
  BattleServantData___c__DisplayClass653_0___ctor((BattleServantData___c__DisplayClass653_0_o *)v9, 0LL);
  ServantIndividualityList = BattleServantData__GetServantIndividualityList(this, externalIndiv, v10);
  buffData = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__EnumerateSkillIndividuality(this, v12);
  if ( !ServantIndividualityList )
    goto LABEL_11;
  System_Collections_Generic_List_int___AddRange(
    ServantIndividualityList,
    buffData,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  buffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buffData;
  if ( !buffData )
    goto LABEL_11;
  v15 = isIncludeUnfixBuff;
  v16 = isIncludeRemoveBuff;
  BuffParamList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffParamList(
                                                                   (BattleBuffData_o *)buffData,
                                                                   43,
                                                                   0LL,
                                                                   v15,
                                                                   v16,
                                                                   0LL);
  System_Collections_Generic_List_int___AddRange(
    ServantIndividualityList,
    BuffParamList,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  buffData = (System_Collections_Generic_IEnumerable_T__o *)this->fields.buffData;
  if ( !buffData
    || (buffData = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getBuffParamList(
                                                                    (BattleBuffData_o *)buffData,
                                                                    44,
                                                                    0LL,
                                                                    v15,
                                                                    v16,
                                                                    0LL),
        !v9)
    || (*(_QWORD *)(v9 + 16) = buffData,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)buffData, v18, v19),
        (v20 = *(_QWORD *)(v9 + 16)) == 0) )
  {
LABEL_11:
    sub_1B8880C(buffData, v14);
  }
  if ( !*(_QWORD *)(v20 + 24) )
    return (System_Collections_Generic_IEnumerable_int__o *)ServantIndividualityList;
  v21 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_BattleServantData___c__DisplayClass653_0__EnumerateIndividuality_b__0__,
    0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Where_int_(
                                                            (System_Collections_Generic_IEnumerable_TSource__o *)ServantIndividualityList,
                                                            (System_Func_TSource__bool__o *)v21,
                                                            (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
}


System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateSkillBeforeFunctionSkill(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v11; // x22
  System_Func_object__bool__o *v12; // x23
  System_Collections_Generic_IEnumerable_TSource__o *BuffList_42437664; // x20
  System_Func_object__object__o *v14; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x0
  BattleServantData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__int__o *_9__806_1; // x20
  Il2CppObject *v19; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5D928 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleServantData_CreateFunctionSkillInfoData__);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleSkillInfoData___);
    sub_1B885B0(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__EnumerateSkillBeforeFunctionSkill_b__806_1__);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass806_0__EnumerateSkillBeforeFunctionSkill_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass806_0_TypeInfo);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D928 = 1;
  }
  v5 = sub_1B887FC(BattleServantData___c__DisplayClass806_0_TypeInfo);
  BattleServantData___c__DisplayClass806_0___ctor((BattleServantData___c__DisplayClass806_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = data,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)data, v8, v9),
        buffData = this->fields.buffData,
        v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v11, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
        v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v12,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass806_0__EnumerateSkillBeforeFunctionSkill_b__0__,
          0LL),
        !buffData) )
  {
    sub_1B8880C(v6, v7);
  }
  BuffList_42437664 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList_42437664(
                                                                             buffData,
                                                                             138,
                                                                             v11,
                                                                             1,
                                                                             0,
                                                                             (System_Func_BattleBuffData_BuffData__bool__o *)v12,
                                                                             0LL,
                                                                             0LL);
  v14 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__BattleSkillInfoData__TypeInfo);
  System_Func_object__object____ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleServantData_CreateFunctionSkillInfoData__,
    0LL);
  v15 = System_Linq_Enumerable__Select_object__object_(
          BuffList_42437664,
          (System_Func_TSource__TResult__o *)v14,
          (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleSkillInfoData___);
  v16 = BattleServantData___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v16 = BattleServantData___c_TypeInfo;
  }
  _9__806_1 = (System_Func_object__int__o *)v16->static_fields->__9__806_1;
  if ( !_9__806_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleServantData___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__806_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__806_1,
      v19,
      Method_BattleServantData___c__EnumerateSkillBeforeFunctionSkill_b__806_1__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__806_1 = (struct System_Func_BattleSkillInfoData__int__o *)_9__806_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__806_1, (int32_t)_9__806_1, v21, v22);
  }
  return (System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                            v17,
                                                                            (System_Func_TSource__TKey__o *)_9__806_1,
                                                                            (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData__EnumerateSkillIndividuality(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleServantData___c_c *v3; // x0
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Func_object__bool__o *_9__657_0; // x20
  Il2CppObject *v6; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  BattleServantData___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__object__o *_9__657_1; // x20
  Il2CppObject *v14; // x21
  struct BattleServantData___c_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5D8F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    sub_1B885B0(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__657_0__);
    sub_1B885B0(&Method_BattleServantData___c__EnumerateSkillIndividuality_b__657_1__);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D8F5 = 1;
  }
  v3 = BattleServantData___c_TypeInfo;
  skillInfoList = this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v3 = BattleServantData___c_TypeInfo;
  }
  _9__657_0 = (System_Func_object__bool__o *)v3->static_fields->__9__657_0;
  if ( !_9__657_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleServantData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__657_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__657_0,
      v6,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__657_0__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__657_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__657_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__657_0, (int32_t)_9__657_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__657_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  v11 = BattleServantData___c_TypeInfo;
  v12 = v10;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v11 = BattleServantData___c_TypeInfo;
  }
  _9__657_1 = (System_Func_object__object__o *)v11->static_fields->__9__657_1;
  if ( !_9__657_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleServantData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__657_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleSkillInfoData__IEnumerable_int___TypeInfo);
    System_Func_object__object____ctor(
      _9__657_1,
      v14,
      Method_BattleServantData___c__EnumerateSkillIndividuality_b__657_1__,
      0LL);
    v15 = BattleServantData___c_TypeInfo->static_fields;
    v15->__9__657_1 = (struct System_Func_BattleSkillInfoData__IEnumerable_int___o *)_9__657_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->__9__657_1, (int32_t)_9__657_1, v16, v17);
  }
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                            v12,
                                                            (System_Func_TSource__IEnumerable_TResult___o *)_9__657_1,
                                                            (const MethodInfo_2EB2920 *)Method_System_Linq_Enumerable_SelectMany_BattleSkillInfoData__int___);
}


System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill(
        BattleServantData_o *this,
        BattleSkillInfoData_o *receivedSkill,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D929 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_TypeInfo);
    byte_4A5D929 = 1;
  }
  v5 = sub_1B887FC(BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_TypeInfo);
  BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807___ctor(
    (BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 48) = receivedSkill;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)receivedSkill, v10, v11);
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
  __int64 v11; // x1

  v8 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleLogic_o *, Il2CppMethodPointer, int32_t, const MethodInfo *))this->klass->vtable._20_GetLogicServantAi.method)(
                                this,
                                logic,
                                this->klass->vtable._21_getThisTurnActCount.methodPtr,
                                timingPriority,
                                method);
  AiStateManager = BattleServantData__get_AiStateManager(this, v9);
  if ( !v8 || !AiStateManager )
    sub_1B8880C(AiStateManager, v11);
  return AiStateManager__ExistAiThinking(AiStateManager, this, v8->fields.aiLogic, procState, v8, timingPriority, 0LL);
}


bool __fastcall BattleServantData__ExistsResurrection(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Int32_array *shiftDeckList; // x8
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-18h] BYREF

  buff = 0LL;
  if ( BattleServantData__isGuts_42945444(this, &buff, v2) )
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
  *(_QWORD *)&this->fields.displayType = *(_QWORD *)&userSvt->fields.displayType;
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
    sub_1B8880C(this, userSvt);
  }
}


System_Int32_array *__fastcall BattleServantData__FilterDisplayingSkillIdArray(
        BattleServantData_o *this,
        System_Int32_array *skillIdArray,
        bool defaultDisplay,
        const MethodInfo *method)
{
  __int64 v7; // x21
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  BattleDeckServantData_o *deckSvt; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x22
  _QWORD *v15; // x22
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  System_Collections_Generic_HashSet_int__o *v19; // x23
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_Func_int__bool__o *v24; // x0
  System_Func_TSource__bool__o *v25; // x22
  __int64 *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_4A5D924 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor___76016464);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass801_0__FilterDisplayingSkillIdArray_b__0__);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass801_0__FilterDisplayingSkillIdArray_b__1__);
    sub_1B885B0(&BattleServantData___c__DisplayClass801_0_TypeInfo);
    byte_4A5D924 = 1;
  }
  v7 = sub_1B887FC(BattleServantData___c__DisplayClass801_0_TypeInfo);
  BattleServantData___c__DisplayClass801_0___ctor((BattleServantData___c__DisplayClass801_0_o *)v7, 0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdArray, 0LL) )
  {
    v8 = Method_System_Array_Empty_int___;
    v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v9 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BDA48C(v10);
    if ( !*(_DWORD *)(v10 + 224) )
      j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BDA48C(v11);
    return **(System_Int32_array ***)(v11 + 184);
  }
  else
  {
    deckSvt = this->fields.deckSvt;
    if ( !deckSvt
      || (v14 = (System_Collections_Generic_IEnumerable_T__o *)BattleDeckServantData__GetDisplayChangeSkillIdArray(
                                                                 deckSvt,
                                                                 0LL)) == 0LL )
    {
      v15 = Method_System_Array_Empty_int___;
      v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v16 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v16 = v15[7];
      }
      v17 = *(_QWORD *)(v16 + 16);
      if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
        v17 = sub_1BDA48C(v17);
      if ( !*(_DWORD *)(v17 + 224) )
        j_il2cpp_runtime_class_init_0(v17);
      v18 = *(_QWORD *)(v15[7] + 16LL);
      if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
        v18 = sub_1BDA48C(v18);
      v14 = **(System_Collections_Generic_IEnumerable_T__o ***)(v18 + 184);
    }
    v19 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor_54209644(
      v19,
      v14,
      (const MethodInfo_33B2C6C *)Method_System_Collections_Generic_HashSet_int___ctor___76016464);
    if ( !v7 )
      sub_1B8880C(v20, v21);
    *(_QWORD *)(v7 + 16) = v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v19, v22, v23);
    v24 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    v25 = (System_Func_TSource__bool__o *)v24;
    if ( defaultDisplay )
      v26 = &Method_BattleServantData___c__DisplayClass801_0__FilterDisplayingSkillIdArray_b__0__;
    else
      v26 = &Method_BattleServantData___c__DisplayClass801_0__FilterDisplayingSkillIdArray_b__1__;
    System_Func_int__bool____ctor(v24, (Il2CppObject *)v7, *v26, 0LL);
    v27 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)skillIdArray,
            v25,
            (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v27,
             (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
}


int32_t __fastcall BattleServantData__FixMaxActNum(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5D86E & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D86E = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
  return this->fields.maxActNum + BattleBuffData__getActValue_42450036(buffData, 110, v4, 0LL);
}


int32_t __fastcall BattleServantData__FixMinActNum(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5D86F & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D86F = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
  return this->fields._minActNum_k__BackingField + BattleBuffData__getActValue_42450036(buffData, 110, v4, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  BattleBuffData_CheckIndividualitiesData_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_Func_T__TResult__o *v15; // x20
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  BattleServantData___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__int__o *_9__469_1; // x20
  Il2CppObject *v20; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4A5D88E & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_BuffList_ACTION__BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1B885B0(&System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__GetAddSideEffectBuffList_b__469_1__);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass469_0__GetAddSideEffectBuffList_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass469_0_TypeInfo);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D88E = 1;
  }
  v7 = sub_1B887FC(BattleServantData___c__DisplayClass469_0_TypeInfo);
  BattleServantData___c__DisplayClass469_0___ctor((BattleServantData___c__DisplayClass469_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, this, opSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(v7 + 24) = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)v12, v13, v14);
  v15 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_BuffList_ACTION__IEnumerable_BattleBuffData_BuffData___TypeInfo);
  System_Func_Int32Enum__object____ctor(
    v15,
    (Il2CppObject *)v7,
    Method_BattleServantData___c__DisplayClass469_0__GetAddSideEffectBuffList_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__SelectMany_Int32Enum__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)targetActs,
          (System_Func_TSource__IEnumerable_TResult___o *)v15,
          (const MethodInfo_2EB28B0 *)Method_System_Linq_Enumerable_SelectMany_BuffList_ACTION__BattleBuffData_BuffData___);
  v17 = BattleServantData___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v17 = BattleServantData___c_TypeInfo;
  }
  _9__469_1 = (System_Func_object__int__o *)v17->static_fields->__9__469_1;
  if ( !_9__469_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BattleServantData___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__469_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__469_1,
      v20,
      Method_BattleServantData___c__GetAddSideEffectBuffList_b__469_1__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__469_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__469_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__469_1, (int32_t)_9__469_1, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__469_1,
                                                               (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_object_(
                                            v24,
                                            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleServantData_Adjustment_array *__fastcall BattleServantData__GetAdjustments(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *adjustmentList; // x0
  ServantStatusBattleListViewItem_o *p_adjustmentList; // x19
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1

  if ( (byte_4A5D836 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    byte_4A5D836 = 1;
  }
  adjustmentList = (System_Collections_Generic_List_object__o *)this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (ServantStatusBattleListViewItem_o *)&this->fields.adjustmentList;
    v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B88554(p_adjustmentList, (int32_t)v5, v6, v7);
    adjustmentList = (System_Collections_Generic_List_object__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      sub_1B8880C(0LL, v8);
  }
  return (BattleServantData_Adjustment_array *)System_Collections_Generic_List_object___ToArray(
                                                 adjustmentList,
                                                 (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleServantData_Adjustment__ToArray__);
}


BattleSkillInfoData_array *__fastcall BattleServantData__GetAvailableActiveSkillInfos(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4A5D875 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleServantData__GetAvailableActiveSkillInfos_b__424_0__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleSkillInfoData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    sub_1B885B0(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    byte_4A5D875 = 1;
  }
  skillInfoList = this->fields.skillInfoList;
  v4 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleSkillInfoData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleServantData__GetAvailableActiveSkillInfos_b__424_0__,
    0LL);
  v5 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  return (BattleSkillInfoData_array *)System_Linq_Enumerable__ToArray_object_(
                                        v5,
                                        (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleSkillInfoData___);
}


BattlePointData_o *__fastcall BattleServantData__GetBattlePointData(
        BattleServantData_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass290_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattlePointData__o *battlePointList; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4A5D83A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePointData___);
    sub_1B885B0(&System_Func_BattlePointData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass290_0__GetBattlePointData_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass290_0_TypeInfo);
    byte_4A5D83A = 1;
  }
  v5 = (BattleServantData___c__DisplayClass290_0_o *)sub_1B887FC(BattleServantData___c__DisplayClass290_0_TypeInfo);
  BattleServantData___c__DisplayClass290_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v5->fields.battlePointId = battlePointId;
  battlePointList = this->fields.battlePointList;
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattlePointData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleServantData___c__DisplayClass290_0__GetBattlePointData_b__0__,
    0LL);
  return (BattlePointData_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                (System_Collections_Generic_IEnumerable_TSource__o *)battlePointList,
                                (System_Func_TSource__bool__o *)v9,
                                (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePointData___);
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

  if ( (byte_4A5D8DA & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8DA = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return (float)BattleBuffData__getActValue_42450036(buffData, 134, v8, 0LL);
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

  if ( (byte_4A5D892 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_25293/*"ガッツ"*/);
    byte_4A5D892 = 1;
  }
  return BattleServantData__GetKilledMeOpponentIndividualityArray(this, (System_String_o *)method, v2);
}


int32_t __fastcall BattleServantData__GetCommandCardIndex(
        BattleServantData_o *this,
        int64_t userCommandCodeId,
        const MethodInfo *method)
{
  System_Int64_array *userCommandCodeIds; // x0

  if ( (byte_4A5D900 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_long___);
    byte_4A5D900 = 1;
  }
  if ( userCommandCodeId >= 1 && (userCommandCodeIds = this->fields.userCommandCodeIds) != 0LL )
    return System_Array__IndexOf_long_(
             userCommandCodeIds,
             userCommandCodeId,
             (const MethodInfo_2F7A4E8 *)Method_System_Array_IndexOf_long___);
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

  if ( (byte_4A5D8FE & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D8FE = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_1B88658(int___TypeInfo, userCommandCodeIds->max_length);
  v7 = this->fields.userCommandCodeIds;
  if ( !v7 )
LABEL_15:
    sub_1B8880C(CommandCodeInfo, v5);
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
            sub_1B88814(CommandCodeInfo, v5);
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

  if ( (byte_4A5D8FF & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D8FF = 1;
  }
  userCommandCodeIds = this->fields.userCommandCodeIds;
  if ( !userCommandCodeIds )
    return 0LL;
  CommandCodeInfo = (CommandCodeInfo_o *)sub_1B88658(int___TypeInfo, userCommandCodeIds->max_length);
  v7 = this->fields.userCommandCodeIds;
  if ( !v7 )
LABEL_15:
    sub_1B8880C(CommandCodeInfo, v5);
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
            sub_1B88814(CommandCodeInfo, v5);
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
  BattleServantData___c__DisplayClass739_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *commandCodeList_k__BackingField; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5D90D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_CommandCodeInfo__Find__);
    sub_1B885B0(&System_Predicate_CommandCodeInfo__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass739_0__GetCommandCodeInfo_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass739_0_TypeInfo);
    byte_4A5D90D = 1;
  }
  v5 = (BattleServantData___c__DisplayClass739_0_o *)sub_1B887FC(BattleServantData___c__DisplayClass739_0_TypeInfo);
  BattleServantData___c__DisplayClass739_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.userCommandCodeId = userCommandCodeId,
        commandCodeList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._commandCodeList_k__BackingField,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_CommandCodeInfo__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass739_0__GetCommandCodeInfo_b__0__,
          0LL),
        !commandCodeList_k__BackingField) )
  {
    sub_1B8880C(v6, v7);
  }
  return (CommandCodeInfo_o *)System_Collections_Generic_List_object___Find(
                                commandCodeList_k__BackingField,
                                (System_Predicate_T__o *)v9,
                                (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_CommandCodeInfo__Find__);
}


int32_t __fastcall BattleServantData__GetCurrentShiftPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_1B8880C(this, method);
  return shiftDeckList->max_length - this->fields.shiftDeckIndex;
}


System_String_o *__fastcall BattleServantData__GetCurrentTDErrorStatusVoiceSe(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *tdErrorStatusVoiceSeList; // x0
  int32_t tdErrorTouchCount; // w8

  if ( (byte_4A5D82D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4A5D82D = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.tdErrorStatusVoiceSeList, 0LL) )
    return 0LL;
  tdErrorStatusVoiceSeList = (System_Collections_Generic_List_object__o *)this->fields.tdErrorStatusVoiceSeList;
  if ( !tdErrorStatusVoiceSeList )
    sub_1B8880C(0LL, v3);
  tdErrorTouchCount = this->fields.tdErrorTouchCount;
  if ( tdErrorTouchCount > tdErrorStatusVoiceSeList->fields._size )
    return 0LL;
  else
    return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                                tdErrorStatusVoiceSeList,
                                tdErrorTouchCount - 1,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__GetFieldIndividualityChangedFunctionBuff(
        BattleServantData_o *this,
        System_Int32_array *questIndividualityArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v11; // x22
  System_Func_object__bool__o *v12; // x19

  if ( (byte_4A5D92A & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass808_0__GetFieldIndividualityChangedFunctionBuff_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass808_0_TypeInfo);
    byte_4A5D92A = 1;
  }
  v5 = sub_1B887FC(BattleServantData___c__DisplayClass808_0_TypeInfo);
  BattleServantData___c__DisplayClass808_0___ctor((BattleServantData___c__DisplayClass808_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = questIndividualityArray,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)questIndividualityArray, v8, v9),
        buffData = this->fields.buffData,
        v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v11, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
        v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v12,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass808_0__GetFieldIndividualityChangedFunctionBuff_b__0__,
          0LL),
        !buffData) )
  {
    sub_1B8880C(v6, v7);
  }
  return BattleBuffData__getBuffList_42437664(
           buffData,
           140,
           v11,
           1,
           0,
           (System_Func_BattleBuffData_BuffData__bool__o *)v12,
           0LL,
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
  __int64 v3; // x24
  System_Collections_Generic_List_int__o *v4; // x21
  __int64 Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *v13; // x22
  __int64 v14; // x23
  int32_t v15; // w24
  int32_t *v16; // x25
  BattleBuffData_o *buffData; // x8
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w24
  __int64 v20; // x25
  _DWORD *v21; // x8
  __int64 *v23; // [xsp+0h] [xbp-70h]
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5D858 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_SkillLvEntity__TypeInfo);
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass339_0__GetHasSideEffectSkillEffectIds_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass339_0_TypeInfo);
    byte_4A5D858 = 1;
  }
  entity = 0LL;
  v3 = sub_1B887FC(BattleServantData___c__DisplayClass339_0_TypeInfo);
  BattleServantData___c__DisplayClass339_0___ctor((BattleServantData___c__DisplayClass339_0_o *)v3, 0LL);
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)v4, v7, v8);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___);
  *(_QWORD *)(v3 + 16) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v10, v11, v12);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v23 = (__int64 *)(v3 + 24);
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v13 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
  v14 = sub_1B887FC(System_Action_SkillLvEntity__TypeInfo);
  System_Action_object____ctor(
    (System_Action_object__o *)v14,
    (Il2CppObject *)v3,
    Method_BattleServantData___c__DisplayClass339_0__GetHasSideEffectSkillEffectIds_b__0__,
    0LL);
  Instance = (__int64)this->fields.skillInfoList;
  if ( !Instance )
    goto LABEL_18;
  v15 = 0;
  while ( v15 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v15,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( !Instance )
      goto LABEL_18;
    v16 = (int32_t *)Instance;
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
           Instance,
           *(_QWORD *)(*(_QWORD *)Instance + 400LL)) )
    {
      Instance = (*(__int64 (__fastcall **)(int32_t *, _QWORD))(*(_QWORD *)v16 + 392LL))(
                   v16,
                   *(_QWORD *)(*(_QWORD *)v16 + 400LL));
      if ( !MasterData_object )
        goto LABEL_18;
      Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, Instance, v16[9], 0LL);
      if ( Instance )
      {
        if ( !v14 )
          goto LABEL_18;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v14 + 24))(
          *(_QWORD *)(v14 + 64),
          Instance,
          *(_QWORD *)(v14 + 40));
      }
    }
    Instance = (__int64)this->fields.skillInfoList;
    ++v15;
    if ( !Instance )
      goto LABEL_18;
  }
  Instance = (__int64)this->fields.buffData;
  if ( !Instance
    || (Instance = (__int64)BattleBuffData__GetAllCommandCodeBuff((BattleBuffData_o *)Instance, 0LL),
        (buffData = this->fields.buffData) == 0LL)
    || (v18 = (System_Collections_Generic_List_object__o *)Instance,
        Instance = (__int64)BattleBuffData__GetAllCommandAssistBuff(buffData, 0LL),
        !v18) )
  {
LABEL_18:
    sub_1B8880C(Instance, v6);
  }
  System_Collections_Generic_List_object___AddRange(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( v18->fields._size >= 1 )
  {
    v19 = 0;
    do
    {
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            v18,
                            v19,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      entity = 0LL;
      if ( !Instance || !v13 )
        goto LABEL_18;
      v20 = Instance;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v13,
             &entity,
             *(_DWORD *)(Instance + 16),
             (const MethodInfo_311D988 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
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
                     (const MethodInfo_33B53F4 *)Method_System_Collections_Generic_HashSet_BuffList_TYPE__Contains__);
        if ( (Instance & 1) != 0 )
        {
          v21 = *(_DWORD **)(v20 + 40);
          if ( !v21 )
            goto LABEL_18;
          if ( v21[6] < 2u )
            sub_1B88814(Instance, v6);
          if ( !MasterData_object )
            goto LABEL_18;
          Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v21[8], v21[9], 0LL);
          if ( Instance )
          {
            if ( !v14 )
              goto LABEL_18;
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v14 + 24))(
              *(_QWORD *)(v14 + 64),
              Instance,
              *(_QWORD *)(v14 + 40));
          }
        }
      }
    }
    while ( ++v19 < v18->fields._size );
  }
  Instance = *v23;
  if ( !*v23 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Instance,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v7; // x20
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t v12; // w20
  __int64 v13; // x19
  __int64 v14; // x21
  int32_t v15; // w19
  __int64 v16; // x19
  __int64 v17; // x21
  int32_t v18; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4A5D868 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5D868 = 1;
  }
  v4 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields._iconLimitCount_k__BackingField.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v4;
  *(_QWORD *)&v19.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v19, 0LL);
  if ( v5 )
    return v5 - (v5 < 11);
  v8 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v8;
  *(_QWORD *)&v20.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v20, 0LL);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_1B8880C(v9, v10);
  v12 = v9;
  if ( !deckSvt->fields.isFollowerSvt || Follower__IsNpc(this->fields.followerType, 0LL) )
    goto LABEL_15;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__GetFriendImageLimitCount(0LL) )
  {
LABEL_15:
    v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v14;
    *(_QWORD *)&v21.fields.fakeValue = v13;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    return ImageLimitCount__GetCardImageLimitCount(v15, v12, 1, 0, 0LL);
  }
  else
  {
    v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v22.fields.currentCryptoKey = v17;
    *(_QWORD *)&v22.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_4A5D85E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D85E = 1;
  }
  imageSvtId_k__BackingField = (unsigned int)this->fields._imageSvtId_k__BackingField;
  if ( (int)imageSvtId_k__BackingField <= 0 )
  {
    svtdata = this->fields.svtdata;
    if ( !svtdata )
      sub_1B8880C(imageSvtId_k__BackingField, method);
    v6 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
    v5 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v8.fields.currentCryptoKey = v6;
    *(_QWORD *)&v8.fields.fakeValue = v5;
    LODWORD(imageSvtId_k__BackingField) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL);
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
    sub_1B8880C(0LL, v4);
  if ( !KilledMeOpponentIndividualityArray->max_length )
    sub_1B88814(KilledMeOpponentIndividualityArray, v4);
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
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v10; // x0

  if ( (byte_4A5D893 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData___TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D893 = 1;
  }
  SnapShotDamagedOnLogicDead_k__BackingField = this->fields._SnapShotDamagedOnLogicDead_k__BackingField;
  if ( !SnapShotDamagedOnLogicDead_k__BackingField )
    goto LABEL_11;
  v5 = BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
         SnapShotDamagedOnLogicDead_k__BackingField,
         0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v5, 0LL) )
    return v5;
  v5 = (BattleBuffData_CheckIndividualitiesData_array *)sub_1B88658(
                                                          BattleBuffData_CheckIndividualitiesData___TypeInfo,
                                                          1LL);
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v5 )
LABEL_11:
    sub_1B8880C(SnapShotDamagedOnLogicDead_k__BackingField, logCheckFunc);
  if ( v6 )
  {
    SnapShotDamagedOnLogicDead_k__BackingField = (BattleServantSnapShotGroupDefault_o *)sub_1B886EC(
                                                                                          v6,
                                                                                          v5->obj.klass->_1.element_class);
    if ( !SnapShotDamagedOnLogicDead_k__BackingField )
    {
      v10 = sub_1B88830(0LL);
      sub_1B886D8(v10, 0LL);
    }
  }
  if ( !v5->max_length )
    sub_1B88814(SnapShotDamagedOnLogicDead_k__BackingField, logCheckFunc);
  v5->m_Items[0] = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v5->m_Items, (int32_t)v6, v7, v8);
  return v5;
}


BattleLogicServantAi_o *__fastcall BattleServantData__GetLogicServantAi(
        BattleServantData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  if ( !logic )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, method);
  return shiftDeckList->max_length - this->fields.shiftSubCount;
}


int32_t __fastcall BattleServantData__GetMaxShiftIconPos(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *shiftDeckList; // x8

  shiftDeckList = this->fields.shiftDeckList;
  if ( !shiftDeckList )
    sub_1B8880C(this, method);
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

  if ( (byte_4A5D914 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D914 = 1;
  }
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  v12 = v11;
  if ( isSvtAction )
    BattleBuffData_CheckIndividualitiesData___ctor(v11, this, targetSvt, 0LL, command, 0LL, 0LL, 0LL);
  else
    BattleBuffData_CheckIndividualitiesData___ctor_42624320(v11, this, 0LL, 0LL, notSvtIndivArray, 0LL, 0LL, 0LL);
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


BattleDeckServantData_o *__fastcall BattleServantData__GetNowShiftDeckServantData(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  struct System_Int32_array *changeSvtList; // x8
  __int64 shiftDeckIndex; // x9
  int32_t v5; // w1
  int32_t v6; // w10
  struct BattleInfoData_o *battle_info; // x8
  struct System_Int32_array *shiftDeckList; // x9
  il2cpp_array_size_t v9; // w10

  if ( this->fields.changeSvtIndex )
  {
    if ( !data )
      goto LABEL_16;
    changeSvtList = this->fields.changeSvtList;
    if ( !changeSvtList )
      goto LABEL_16;
    shiftDeckIndex = this->fields.shiftDeckIndex;
    if ( (unsigned int)shiftDeckIndex < changeSvtList->max_length )
    {
      this = (BattleServantData_o *)data->fields.battle_info;
      if ( this )
      {
        v5 = changeSvtList->m_Items[shiftDeckIndex + 1];
        return BattleInfoData__getShiftServantData((BattleInfoData_o *)this, v5, 0LL);
      }
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  if ( !data )
    goto LABEL_16;
  v6 = this->fields.shiftDeckIndex;
  battle_info = data->fields.battle_info;
  if ( v6 )
  {
    shiftDeckList = this->fields.shiftDeckList;
    if ( !shiftDeckList )
      goto LABEL_16;
    v9 = v6 - 1;
    if ( v9 < shiftDeckList->max_length )
    {
      if ( battle_info )
      {
        v5 = shiftDeckList->m_Items[v9 + 1];
        this = (BattleServantData_o *)battle_info;
        return BattleInfoData__getShiftServantData((BattleInfoData_o *)this, v5, 0LL);
      }
LABEL_16:
      sub_1B8880C(this, data);
    }
LABEL_17:
    sub_1B88814(this, data);
  }
  if ( !battle_info )
    goto LABEL_16;
  return BattleInfoData__getDefaultServantData(battle_info, this->fields.uniqueId, 0LL);
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

  if ( (byte_4A5D922 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    byte_4A5D922 = 1;
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

  if ( (byte_4A5D921 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    byte_4A5D921 = 1;
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

  if ( (byte_4A5D923 & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    byte_4A5D923 = 1;
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

  if ( (byte_4A5D8D2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_25380/*"死亡時の非表示を防ぐバフ"*/);
    byte_4A5D8D2 = 1;
  }
  KilledMeOpponentIndividuality = BattleServantData__GetKilledMeOpponentIndividuality(
                                    this,
                                    (System_String_o *)method,
                                    v2);
  BuffData = BattleServantData__get_BuffData(this, v5);
  if ( !BuffData )
    sub_1B8880C(0LL, v7);
  return BattleBuffData__GetFirstMatchCondBuff(BuffData, 127, KilledMeOpponentIndividuality, 0, 0LL, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5D840 & 1) == 0 )
  {
    sub_1B885B0(&Method_JsonManager_Deserialize_BattleServantData_SaveData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    byte_4A5D840 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (BattleServantData_SaveData_o *)JsonManager__Deserialize_object_(
                                           (Il2CppObject *)str,
                                           (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
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
      sub_1B8880C(0LL, v5);
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
    sub_1B8880C(TreasureDevice, v5);
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

  if ( (byte_4A5D8F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D8F4 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)this->fields.svtIndividuality;
  if ( !svtIndividuality )
  {
    svtdata = this->fields.svtdata;
    v10 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = v10;
    *(_QWORD *)&v13.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
    Individuality = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                            this->fields._dispLimitCount_k__BackingField,
                                            0LL);
    if ( !svtdata )
LABEL_14:
      sub_1B8880C(Individuality, svtIndividuality);
    Individuality = ServantEntity__getIndividuality(svtdata, v11, (int32_t)Individuality, 0LL);
    svtIndividuality = (System_Collections_Generic_IEnumerable_T__o *)Individuality;
  }
  if ( !v5 )
    goto LABEL_14;
  System_Collections_Generic_List_int___AddRange(
    v5,
    svtIndividuality,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( externalIndividualities )
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)externalIndividualities,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.commonAddIndividuality, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.commonAddIndividuality,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
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


BattleBuffData_BuffData_array *__fastcall BattleServantData__GetStepInAfterFunctionBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5D92B & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D92B = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
  return BattleBuffData__getBuffList_42437664(buffData, 142, v4, 1, 0, 0LL, 0LL, 0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleServantData__GetStepInAfterFunctionTimingBuff(
        BattleServantData_o *this,
        System_Int32_array *questIndividualityArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D92C & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_TypeInfo);
    byte_4A5D92C = 1;
  }
  v5 = sub_1B887FC(BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_TypeInfo);
  BattleServantData__GetStepInAfterFunctionTimingBuff_d__810___ctor(
    (BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 56) = questIndividualityArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)questIndividualityArray, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
}


System_Int32_array *__fastcall BattleServantData__GetSubFieldIndividuality(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_CheckIndividualitiesData_o *v3; // x20
  const MethodInfo *v4; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1

  if ( (byte_4A5D887 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4A5D887 = 1;
  }
  v3 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v3, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
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
    sub_1B8880C(BuffData, v6);
  }
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)BuffData,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  BattleBuffData_o *TakeOverAiStateArray; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  BattleBuffData_o *BuffData; // x23
  int32_t v20; // w24
  const MethodInfo *v21; // x1
  int32_t MaxHp; // w25
  const MethodInfo *v23; // x4
  System_Int32_array *Individualities; // x26
  const MethodInfo *v25; // x5
  System_Int32_array *BuffIndividualities; // x0
  System_Int32_array *fieldIndiv; // x27
  System_Int32_array *v28; // x28
  const MethodInfo *v29; // x5
  const MethodInfo *v30; // x1
  bool v31; // w0
  const MethodInfo *v32; // x1
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1
  int32_t v40; // w0
  int32_t v41; // w22
  int32_t v42; // w23
  struct System_Collections_Generic_Dictionary_long__int__o *dicDistributeStar; // x22
  const MethodInfo *v44; // x1
  int64_t UserSvtId; // x0
  WarBoardBattleServantEvent_o *servantEvent; // x20
  const MethodInfo *v47; // x1
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  int64_t npcSvtEquipId; // x8

  if ( (byte_4A5D844 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_long__int___);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&ServantAiResetChecker_TypeInfo);
    sub_1B885B0(&BattleWarBoardInfo_WarBoardServantInfo_TypeInfo);
    byte_4A5D844 = 1;
  }
  v5 = sub_1B887FC(BattleWarBoardInfo_WarBoardServantInfo_TypeInfo);
  BattleWarBoardInfo_WarBoardServantInfo___ctor((BattleWarBoardInfo_WarBoardServantInfo_o *)v5, 0LL);
  isAction = BattleServantData__isAction(this, v6);
  AiStateManager = BattleServantData__get_AiStateManager(this, v8);
  v10 = (ServantAiResetChecker_o *)sub_1B887FC(ServantAiResetChecker_TypeInfo);
  ServantAiResetChecker___ctor(v10, this, 0LL);
  if ( !AiStateManager )
    goto LABEL_21;
  TakeOverAiStateArray = (BattleBuffData_o *)AiStateManager__MakeTakeOverAiStateArray(
                                               AiStateManager,
                                               (AiResetChecker_o *)v10,
                                               0LL);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 112) = TakeOverAiStateArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 112), (int32_t)TakeOverAiStateArray, v13, v14);
  TakeOverAiStateArray = BattleServantData__get_BuffData(this, v15);
  if ( !TakeOverAiStateArray )
    goto LABEL_21;
  BattleBuffData__ResetNotTakeOverBuff(TakeOverAiStateArray, 0LL);
  TakeOverAiStateArray = BattleServantData__get_BuffData(this, v16);
  if ( !arg )
    goto LABEL_21;
  if ( !TakeOverAiStateArray )
    goto LABEL_21;
  BattleBuffData__RemoveNoTurnBuff(TakeOverAiStateArray, arg->fields.logic, 0LL);
  TakeOverAiStateArray = BattleServantData__get_BuffData(this, v17);
  if ( !TakeOverAiStateArray )
    goto LABEL_21;
  BattleBuffData__UpdateForceNoField(TakeOverAiStateArray, 0LL);
  BuffData = BattleServantData__get_BuffData(this, v18);
  v20 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  MaxHp = BattleServantData__getMaxHp(this, v21);
  Individualities = BattleServantData__getIndividualities(this, 0LL, 1, 0, v23);
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 0, 0, 0, 0LL, v25);
  fieldIndiv = arg->fields.fieldIndiv;
  v28 = BuffIndividualities;
  TakeOverAiStateArray = (BattleBuffData_o *)BattleServantData__getBuffIndividualities(this, 0, 0, 1, 0LL, v29);
  if ( !BuffData )
    goto LABEL_21;
  BattleBuffData__ChangeBuffState(
    BuffData,
    v20,
    MaxHp,
    Individualities,
    v28,
    fieldIndiv,
    (System_Int32_array *)TakeOverAiStateArray,
    0LL);
  v31 = !isAction && BattleServantData__isAction(this, v30);
  *(_BYTE *)(v5 + 85) = v31;
  *(_QWORD *)(v5 + 16) = BattleServantData__getUserSvtId(this, v30);
  *(_QWORD *)(v5 + 24) = *(_QWORD *)&this->fields.maxDefeatPoint;
  TakeOverAiStateArray = BattleServantData__get_BuffData(this, v32);
  if ( !TakeOverAiStateArray )
    goto LABEL_21;
  SaveData = BattleBuffData__getSaveData(TakeOverAiStateArray, 0LL);
  *(_QWORD *)(v5 + 48) = SaveData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)SaveData, v34, v35);
  *(_DWORD *)(v5 + 56) = BattleServantData__GetSkillChargeTurn(this, 0, v36);
  *(_DWORD *)(v5 + 60) = BattleServantData__GetSkillChargeTurn(this, 1, v37);
  *(_DWORD *)(v5 + 64) = BattleServantData__GetSkillChargeTurn(this, 2, v38);
  *(_DWORD *)(v5 + 36) = BattleServantData__getMaxHp(this, v39);
  v40 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
          this,
          this->klass->vtable._10_set_hp.methodPtr);
  v41 = *(_DWORD *)(v5 + 36);
  v42 = v40;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  *(_DWORD *)(v5 + 32) = System_Math__Min_62526008(v42, v41, 0LL);
  *(_DWORD *)(v5 + 40) = this->fields.np;
  *(_DWORD *)(v5 + 44) = this->fields.nexttpturn;
  *(_QWORD *)(v5 + 68) = *(_QWORD *)&this->fields.aftSquareIndex;
  *(_QWORD *)(v5 + 76) = *(_QWORD *)&this->fields.transformIndex;
  *(_BYTE *)(v5 + 84) = this->fields.isSleepWaitMode;
  dicDistributeStar = arg->fields.dicDistributeStar;
  UserSvtId = BattleServantData__getUserSvtId(this, v44);
  *(_DWORD *)(v5 + 88) = BasicHelper__GetValue_long__int_(
                           (System_Collections_Generic_Dictionary_K__V__o *)dicDistributeStar,
                           UserSvtId,
                           0,
                           (const MethodInfo_2E6E250 *)Method_BasicHelper_GetValue_long__int___);
  *(_QWORD *)(v5 + 92) = *(_QWORD *)&this->fields.squareEffectSkillId;
  servantEvent = arg->fields.servantEvent;
  TakeOverAiStateArray = (BattleBuffData_o *)BattleServantData__getUserSvtId(this, v47);
  if ( !servantEvent )
LABEL_21:
    sub_1B8880C(TakeOverAiStateArray, v12);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(servantEvent, (int64_t)TakeOverAiStateArray, 0LL);
  if ( EventServantInfo )
    npcSvtEquipId = EventServantInfo->fields.npcSvtEquipId;
  else
    npcSvtEquipId = 0LL;
  *(_QWORD *)(v5 + 104) = npcSvtEquipId;
  return (BattleWarBoardInfo_WarBoardServantInfo_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__GetTdIdChangeByBattlePoint(
        BattleServantData_o *this,
        int32_t tdId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  DataMasterBase_TMaster__TEntity__PKType__o *TdDataMasterBase; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  int32_t tdIdChangeByBattlePoint; // [xsp+4h] [xbp-2Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = tdId;
  if ( (byte_4A5D83C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    byte_4A5D83C = 1;
  }
  entity = 0LL;
  tdIdChangeByBattlePoint = 0;
  TdDataMasterBase = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleServantData__get_TdDataMasterBase(
                                                                     this,
                                                                     *(const MethodInfo **)&tdId);
  if ( !TdDataMasterBase )
    sub_1B8880C(0LL, v6);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         TdDataMasterBase,
         &entity,
         v3,
         (const MethodInfo_311D988 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__)
    && BattleServantData__TryGetTdIdChangeByBattlePoint(
         this,
         (TreasureDvcEntity_o *)entity,
         &tdIdChangeByBattlePoint,
         v7) )
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *text; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5D8C9 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8C9 = 1;
  }
  text = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getActValue_42450072(buffData, 90, &text, v8, 0LL);
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

  if ( (byte_4A5D8C7 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8C7 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getActMag_42451080(buffData, 91, v8, 0LL);
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
  unsigned __int16 *v9; // x0
  unsigned __int16 v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D8A4 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_bool___ctor__);
    byte_4A5D8A4 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    BuffList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList(
                                                                      buffData,
                                                                      buffTypes,
                                                                      v6,
                                                                      0LL,
                                                                      0LL);
    if ( BuffList )
    {
      v8 = System_Linq_Enumerable__Any_object_(
             BuffList,
             (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
      v9 = &v11;
      v11 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v9,
        v8,
        (const MethodInfo_3616764 *)Method_System_Nullable_bool___ctor__);
      LOBYTE(BuffList) = v11 > 0xFFu;
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

  if ( (byte_4A5D8A3 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8A3 = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return 0;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
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
bool __fastcall BattleServantData__HasWaveTurnEvent_object_(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo_2E715BC *method)
{
  ServantWaveTurnEventOwner_o *waveTurnEventOwner; // x0
  System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *v9; // x20
  Il2CppClass *_1_BattleServantData___c__678_T; // x8
  Il2CppClass *v11; // x0
  System_Func_object__bool__o *v12; // x21
  Il2CppClass *v13; // x0
  Il2CppClass *v14; // x0
  Il2CppObject *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppClass *v18; // x0
  Il2CppClass *v19; // x0

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___);
    sub_1B885B0(&System_Func_ServantWaveTurnEvent__bool__TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8(method);
  }
  waveTurnEventOwner = this->fields.waveTurnEventOwner;
  if ( !waveTurnEventOwner )
    sub_1B8880C(0LL, *(_QWORD *)&wave);
  v9 = ServantWaveTurnEventOwner__EventEnumerator(waveTurnEventOwner, wave, turn, 0LL);
  _1_BattleServantData___c__678_T = method->rgctx_data->_1_BattleServantData___c__678_T_;
  if ( (BYTE5(_1_BattleServantData___c__678_T->vtable[0].methodPtr) & 1) == 0 )
    _1_BattleServantData___c__678_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_BattleServantData___c__678_T_);
  if ( !_1_BattleServantData___c__678_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_1_BattleServantData___c__678_T);
  v11 = method->rgctx_data->_1_BattleServantData___c__678_T_;
  if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
    v11 = (Il2CppClass *)sub_1BDA48C(v11);
  v12 = (System_Func_object__bool__o *)*((_QWORD *)v11->static_fields + 1);
  if ( !v12 )
  {
    v13 = method->rgctx_data->_1_BattleServantData___c__678_T_;
    if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
      v13 = (Il2CppClass *)sub_1BDA48C(v13);
    if ( !v13->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v13);
    v14 = method->rgctx_data->_1_BattleServantData___c__678_T_;
    if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1BDA48C(v14);
    v15 = *(Il2CppObject **)v14->static_fields;
    v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ServantWaveTurnEvent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v12,
      v15,
      (intptr_t)method->rgctx_data->_2_BattleServantData___c__678_T___HasWaveTurnEvent_b__678_0,
      0LL);
    v18 = method->rgctx_data->_1_BattleServantData___c__678_T_;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1BDA48C(v18);
    *((_QWORD *)v18->static_fields + 1) = v12;
    v19 = method->rgctx_data->_1_BattleServantData___c__678_T_;
    if ( (BYTE5(v19->vtable[0].methodPtr) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1BDA48C(v19);
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v19->static_fields + 8), (int32_t)v12, v16, v17);
  }
  return System_Linq_Enumerable__Any_object__48820656(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (System_Func_TSource__bool__o *)v12,
           (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_ServantWaveTurnEvent___);
}


void __fastcall BattleServantData__InitCommonAddIndividuality(BattleServantData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 IsAnySupport; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  struct System_Int32_array *v11; // x1

  if ( (byte_4A5D84A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&StringLiteral_7353/*"INDIVIDUALITY_IS_SUPPORT"*/);
    byte_4A5D84A = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  IsAnySupport = Follower__IsAnySupport(this->fields.followerType, 0LL);
  if ( (IsAnySupport & 1) != 0 )
  {
    IsAnySupport = ConstantMaster__getValue((System_String_o *)StringLiteral_7353/*"INDIVIDUALITY_IS_SUPPORT"*/, 0LL);
    if ( v3 )
    {
      items = v3->fields._items;
      v9 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( items )
      {
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            IsAnySupport,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size + 1] = IsAnySupport;
        }
        goto LABEL_11;
      }
    }
LABEL_9:
    sub_1B8880C(IsAnySupport, v5);
  }
  if ( !v3 )
    goto LABEL_9;
LABEL_11:
  if ( v3->fields._size < 1 )
    v11 = 0LL;
  else
    v11 = System_Collections_Generic_List_int___ToArray(
            v3,
            (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.commonAddIndividuality = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commonAddIndividuality, (int32_t)v11, v6, v7);
}


void __fastcall BattleServantData__InitializeBuff(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o **p_buffData; // x20
  __int64 v4; // x1
  int MaxHp; // w21
  BattleBuffData_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x3

  if ( (byte_4A5D8EF & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_TypeInfo);
    byte_4A5D8EF = 1;
  }
  p_buffData = &this->fields.buffData;
  if ( this->fields.buffData )
  {
    MaxHp = BattleServantData__getMaxHp(this, method);
  }
  else
  {
    v6 = (BattleBuffData_o *)sub_1B887FC(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v6, 0LL);
    *p_buffData = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buffData, (int32_t)v6, v7, v8);
    MaxHp = -1;
  }
  if ( !*p_buffData )
    sub_1B8880C(0LL, v4);
  BattleBuffData__Initialize(*p_buffData, 0LL);
  if ( MaxHp >= 1 )
    BattleServantData__checkUpdateUpdownHp(this, MaxHp, 0, v9);
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

  if ( (byte_4A5D90E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&StringLiteral_11531/*"SEQ_IDS_20220729"*/);
    byte_4A5D90E = 1;
  }
  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)data);
  if ( TreasureDevice )
  {
    ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray((System_String_o *)StringLiteral_11531/*"SEQ_IDS_20220729"*/, 0LL);
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
                                 (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) >= 0;
    }
  }
  return (char)TreasureDevice;
}


bool __fastcall BattleServantData__IsAvailableCard(
        BattleServantData_o *this,
        BattleCommandData_o *commandCard,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  BattleBuffData_BuffData_array *BuffList_42437664; // x0
  __int64 v8; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v10; // x20
  bool v11; // w21
  int v12; // w22
  BattleBuffData_BuffData_o *v13; // x8

  if ( (byte_4A5D8A0 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A5D8A0 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, commandCard, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_13;
  BuffList_42437664 = BattleBuffData__getBuffList_42437664(buffData, 146, v6, 1, 0, 0LL, 0LL, 0LL);
  if ( !BuffList_42437664 )
    goto LABEL_13;
  max_length = BuffList_42437664->max_length;
  v10 = BuffList_42437664;
  v11 = max_length > 0;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1B88814(BuffList_42437664, v8);
      v13 = v10->m_Items[v12];
      if ( !v13 || !commandCard )
        break;
      BuffList_42437664 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__Contains_int_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v13->fields.servantCardIdsIndexArray,
                                                             commandCard->fields.servantCardIdsIndex,
                                                             (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( ((unsigned __int8)BuffList_42437664 & 1) == 0 )
      {
        max_length = v10->max_length;
        v11 = ++v12 < max_length;
        if ( v12 < max_length )
          continue;
      }
      return !v11;
    }
LABEL_13:
    sub_1B8880C(BuffList_42437664, v8);
  }
  return !v11;
}


bool __fastcall BattleServantData__IsBreakShiftVoiceEnabled(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0
  System_Nullable_bool__o v4; // w0
  __int64 v5; // x1
  BattleDeckServantData_o *v7; // x0

  if ( (byte_4A5D925 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_bool__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_bool__get_HasValue__);
    byte_4A5D925 = 1;
  }
  deckSvt = this->fields.deckSvt;
  if ( deckSvt )
  {
    v4 = BattleDeckServantData__IsVoiceEnabledOnBreakShift(deckSvt, 0LL);
    if ( v4.fields.hasValue )
    {
      return (*(_WORD *)&v4 & 0xFF00) != 0LL;
    }
    else
    {
      v7 = this->fields.deckSvt;
      if ( !v7 )
        sub_1B8880C(0LL, v5);
      return !BattleDeckServantData__IsNoMotionOnBreakShift(v7, 0LL);
    }
  }
  else
  {
    return 0;
  }
}


bool __fastcall BattleServantData__IsCardAction(
        BattleServantData_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return BattleServantData__isCardTypeAction(this, commandData, method)
      && BattleServantData__IsAvailableCard(this, commandData, v5);
}


bool __fastcall BattleServantData__IsContainsSeqId(
        BattleServantData_o *this,
        BattleData_o *data,
        int32_t seqId,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x20
  Il2CppObject **v7; // x27
  const MethodInfo_31C89D4 **v8; // x28
  Il2CppObject **v9; // x24
  Il2CppObject **v10; // x23
  Il2CppObject *current; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  int64_t v18; // x21
  const MethodInfo_31C89D4 **v19; // x26
  Il2CppObject **v20; // x28
  int32_t v21; // w27
  Il2CppObject **v22; // x29
  Il2CppObject **v23; // x19
  Il2CppObject *v24; // x22
  __int64 v25; // x23
  __int64 v26; // x24
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v34; // x1
  _BOOL8 v35; // x0
  __int64 v36; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v39; // w21
  __int128 v40; // q0
  char v41; // w19
  int v42; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+10h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+30h] [xbp-C0h] BYREF
  Il2CppObject *entity; // [xsp+50h] [xbp-A0h] BYREF
  Il2CppObject *v47; // [xsp+58h] [xbp-98h] BYREF
  Il2CppObject *v48; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+70h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  v6 = this;
  if ( (byte_4A5D90F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_23707/*"svtId"*/);
    sub_1B885B0(&StringLiteral_24453/*"userSvtId"*/);
    this = (BattleServantData_o *)sub_1B885B0(&StringLiteral_23103/*"seqId"*/);
    byte_4A5D90F = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v48 = 0LL;
  value = 0LL;
  entity = 0LL;
  v47 = 0LL;
  if ( !data || (this = (BattleServantData_o *)data->fields.firstNpPlayList) == 0LL )
    sub_1B8880C(this, data);
  v7 = (Il2CppObject **)&StringLiteral_23103/*"seqId"*/;
  v8 = (const MethodInfo_31C89D4 **)&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__;
  v9 = (Il2CppObject **)&StringLiteral_24453/*"userSvtId"*/;
  v10 = (Il2CppObject **)&StringLiteral_23707/*"svtId"*/;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Dictionary_string__object___GetEnumerator__);
  v50.fields._current = (Il2CppObject *)v45.fields.fakeValue;
  *(_OWORD *)&v50.fields._list = *(_OWORD *)&v45.fields.currentCryptoKey;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v50,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___MoveNext__) )
        {
          v41 = 0;
          v42 = 10;
          goto LABEL_40;
        }
        current = v50.fields._current;
        if ( v50.fields._current
          && System_Collections_Generic_Dictionary_object__object___TryGetValue(
               (System_Collections_Generic_Dictionary_object__object__o *)v50.fields._current,
               *v7,
               &value,
               *v8) )
        {
          if ( !value )
            sub_1B8880C(0LL, v12);
          if ( value->klass->_1.element_class != int_TypeInfo->_1.element_class )
          {
            sub_1B88ACC(value);
LABEL_44:
            sub_1B8880C(Instance, v32);
          }
          if ( *(_DWORD *)j_il2cpp_object_unbox_0(value, int_TypeInfo, v13, v14) == seqId )
            break;
        }
      }
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)current,
             *v9,
             &v48,
             *v8)
        && v48 )
      {
        if ( (System_String_c *)v48->klass == string_TypeInfo )
        {
          v18 = System_Int64__Parse((System_String_o *)v48, 0LL);
          goto LABEL_17;
        }
        if ( (System_Int64_c *)v48->klass == long_TypeInfo )
        {
          v18 = *(_QWORD *)j_il2cpp_object_unbox_0(v48, v15, v16, v17);
          goto LABEL_17;
        }
      }
      v18 = 0LL;
LABEL_17:
      if ( v6->fields.isEnemy || v6->fields.followerType )
        break;
      v40 = *(_OWORD *)&v6->fields.userSvtId.fields.fakeValue;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v6->fields.userSvtId.fields.currentCryptoKey;
      *(_OWORD *)&v45.fields.fakeValue = v40;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v44 = v45;
      if ( v18 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v44, 0LL) )
        goto LABEL_41;
    }
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)current,
           *v10,
           &v47,
           *v8) )
    {
      v19 = v8;
      v20 = v7;
      v21 = seqId;
      v22 = v9;
      v23 = v10;
      v24 = v47;
      v26 = *(_QWORD *)&v6->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&v6->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v26;
      *(_QWORD *)&v51.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51, 0LL);
      if ( !v24 )
        goto LABEL_48;
      if ( v24->klass->_1.element_class != int_TypeInfo->_1.element_class )
      {
        sub_1B88ACC(v24);
LABEL_48:
        sub_1B8880C(v27, v28);
      }
      v9 = v22;
      v10 = v23;
      seqId = v21;
      v7 = v20;
      v8 = v19;
      if ( *(_DWORD *)j_il2cpp_object_unbox_0(v24, int_TypeInfo, v29, v30) == (_DWORD)v27 )
        break;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_44;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_object )
      sub_1B8880C(0LL, v34);
    v35 = DataMasterBase_object__object__long___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            &entity,
            v18,
            (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    if ( v35 )
    {
      if ( !entity )
        sub_1B8880C(v35, v36);
      klass = entity[5].klass;
      monitor = entity[5].monitor;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v52.fields.currentCryptoKey = klass;
      *(_QWORD *)&v52.fields.fakeValue = monitor;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v52, 0LL);
      if ( v39 == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6->fields.svtId, 0LL) )
        break;
    }
  }
LABEL_41:
  v41 = 1;
  v42 = 8;
LABEL_40:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_Dictionary_string__object___Dispose__);
  return v41 & (v42 == 8);
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


bool __fastcall BattleServantData__IsDeadExplosion(BattleServantData_o *this, const MethodInfo *method)
{
  return BattleServantData__get_FixDeadType(this, method) == 7;
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
    sub_1B8880C(0LL, method);
  return BattleDeckServantData__getEnableNpInfo(deckSvt, 0LL);
}


bool __fastcall BattleServantData__IsEquip(BattleServantData_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct BattleUserServantData_array *equipList; // x22
  __int64 v6; // x8
  bool v7; // w23
  SkillLvMaster_o *v8; // x19
  unsigned __int64 v9; // x24
  Il2CppClass **v10; // x21
  DataManager_o **v11; // x21
  DataManager_o *v12; // t1
  DataManager_o *v13; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v15; // x21
  unsigned __int64 v16; // x25
  bool *p_DispLog; // x26

  if ( (byte_4A5D912 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D912 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        (equipList = this->fields.equipList) == 0LL) )
  {
LABEL_25:
    sub_1B8880C(Instance, v4);
  }
  v6 = *(_QWORD *)&equipList->max_length;
  v7 = (int)v6 > 0;
  if ( (int)v6 >= 1 )
  {
    v8 = (SkillLvMaster_o *)Instance;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v6 )
        goto LABEL_24;
      v10 = &equipList->obj.klass + v9;
      v12 = (DataManager_o *)v10[4];
      v11 = (DataManager_o **)(v10 + 4);
      Instance = v12;
      if ( v12 )
      {
        Instance = (DataManager_o *)BattleUserServantData__getBattleSkillIdList(
                                      (BattleUserServantData_o *)Instance,
                                      0LL);
        if ( v9 >= equipList->max_length )
          goto LABEL_24;
        v13 = Instance;
        Instance = *v11;
        if ( !*v11 )
          goto LABEL_25;
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, void *))&Instance->klass[1]._1.byval_arg.bits)(
                                      Instance,
                                      Instance->klass[1]._1.this_arg.data);
        if ( !v13 )
          goto LABEL_25;
        m_CancellationTokenSource = v13->fields.m_CancellationTokenSource;
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_22:
      LODWORD(v6) = equipList->max_length;
      v7 = (__int64)++v9 < (int)v6;
      if ( (__int64)v9 >= (int)v6 )
        return v7;
    }
    v15 = Instance;
    v16 = 0LL;
    p_DispLog = &Instance->fields._DispLog;
    while ( v16 < (unsigned int)m_CancellationTokenSource )
    {
      if ( !v15 )
        goto LABEL_25;
      if ( v16 >= LODWORD(v15->fields.m_CancellationTokenSource) )
        break;
      v4 = *((unsigned int *)&v13->fields._DispLog + v16);
      if ( (int)v4 >= 1 )
      {
        if ( !v8 )
          goto LABEL_25;
        Instance = (DataManager_o *)SkillLvMaster__GetEntity(v8, v4, *(_DWORD *)&p_DispLog[4 * v16], 0LL);
        if ( Instance )
          return v7;
      }
      LODWORD(m_CancellationTokenSource) = v13->fields.m_CancellationTokenSource;
      if ( (__int64)++v16 >= (int)m_CancellationTokenSource )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B88814(Instance, v4);
  }
  return v7;
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
  __int64 v3; // x1
  BattleDeckServantData_o *deckSvt; // x0

  if ( !this->fields.deckSvt || !Follower__IsNpc(this->fields.followerType, 0LL) )
    return 0;
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_1B8880C(0LL, v3);
  return BattleDeckServantData__IsHideClassSkillNpcFollower(deckSvt, 0LL);
}


bool __fastcall BattleServantData__IsMoveToSubMember(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_4A5D8FC & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___);
    byte_4A5D8FC = 1;
  }
  return BattleServantData__HasWaveTurnEvent_object_(
           this,
           wave,
           turn,
           (const MethodInfo_2E715BC *)Method_BattleServantData_HasWaveTurnEvent_MoveToSubMemberWaveTurnEvent___);
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
    sub_1B8880C(0LL, v6);
  return TreasureDvcEntity__IsOnlyFirstOneSpeed(TreasureDevice, 0LL);
}


bool __fastcall BattleServantData__IsPlayableVoice(
        BattleServantData_o *this,
        VoicePlayCondMaster_o *condMst,
        int32_t type,
        System_Collections_Generic_KeyValuePair_string__int__o *pairVoiceIdWeight,
        const MethodInfo *method)
{
  int32_t SvtId; // w22
  const MethodInfo *v10; // x2
  int32_t DispLimitCount; // w0
  int32_t overwriteSvtVoiceId; // w25
  int32_t v13; // w24
  const MethodInfo_3434C70 *v14; // x4
  System_String_o *FileName; // x23
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Weight; // x2
  const MethodInfo_3434C70 *v19; // x4
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_KeyValuePair_string__int__o v25; // [xsp+18h] [xbp-68h] BYREF
  VoicePlayCondEntity_o *condEntity; // [xsp+28h] [xbp-58h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v27; // 0:x0.16
  System_Collections_Generic_KeyValuePair_object__int__o v28; // 0:x0.16

  if ( (byte_4A5D920 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__int___ctor__);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Voice_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D920 = 1;
  }
  condEntity = 0LL;
  SvtId = BattleServantData__getSvtId(this, (const MethodInfo *)condMst);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v10);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  v13 = DispLimitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( !ServantAssetLoadManager__ExistsBattleVoice(SvtId, v13, overwriteSvtVoiceId, type, 0LL) )
    goto LABEL_12;
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantAssetLoadManager_o *)ServantAssetLoadManager__GetPrefixVoiceId(
                                                  Instance,
                                                  SvtId,
                                                  v13,
                                                  FileName,
                                                  0LL),
        !condMst) )
  {
    sub_1B8880C(Instance, v17);
  }
  if ( VoicePlayCondMaster__isVoicePlay_40309812(
         condMst,
         SvtId,
         (System_String_o *)Instance,
         &condEntity,
         0LL,
         -1LL,
         -1,
         0LL,
         this,
         0LL,
         0LL) )
  {
    Weight = (Il2CppObject *)(unsigned int)VoicePlayCondMaster__GetWeight(condMst, condEntity, 10, 0LL);
    v27.fields.key = (Il2CppObject *)&v25;
    *(_QWORD *)&v27.fields.value = FileName;
    v25 = (System_Collections_Generic_KeyValuePair_string__int__o)0LL;
    System_Collections_Generic_KeyValuePair_object__int____ctor(
      v27,
      Weight,
      Method_System_Collections_Generic_KeyValuePair_string__int___ctor__,
      v19);
    *pairVoiceIdWeight = v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)pairVoiceIdWeight, 0, v20, v21);
    return 1;
  }
  else
  {
LABEL_12:
    *(_QWORD *)&v28.fields.value = StringLiteral_1/*""*/;
    v28.fields.key = (Il2CppObject *)&v25;
    v25 = (System_Collections_Generic_KeyValuePair_string__int__o)0LL;
    System_Collections_Generic_KeyValuePair_object__int____ctor(
      v28,
      0LL,
      Method_System_Collections_Generic_KeyValuePair_string__int___ctor__,
      v14);
    *pairVoiceIdWeight = v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)pairVoiceIdWeight, 0, v23, v24);
    return 0;
  }
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
    sub_1B8880C(DispLimitCount, v6);
  return TreasureDvcEntity__getFixAppearanceInfoArray(TreasureDevice, DispLimitCount, 0LL) != 0LL;
}


bool __fastcall BattleServantData__IsTdChangeByBuff(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B8880C(0LL, this);
  return BattleBuffData__isTDTypeChange(buffData, this, 0LL, 0LL);
}


bool __fastcall BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(
        BattleServantData_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  if ( (byte_4A5D8FD & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___);
    byte_4A5D8FD = 1;
  }
  return BattleServantData__HasWaveTurnEvent_object_(
           this,
           wave,
           turn,
           (const MethodInfo_2E715BC *)Method_BattleServantData_HasWaveTurnEvent_UseNoblePhantasmWaveTurnEvent___);
}


BattleCommandData_o *__fastcall BattleServantData__MakeTreasureDvcCommand(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleCommandData_o *v3; // x20
  const MethodInfo *v4; // x1
  ServantTreasureDvcEntity_o *SvtTDvc; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A5D878 & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandData_TypeInfo);
    byte_4A5D878 = 1;
  }
  if ( !this->fields.TDvc || !this->fields._SvtTDvc )
    return 0LL;
  v3 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor(v3, 0LL);
  SvtTDvc = BattleServantData__get_SvtTDvc(this, v4);
  if ( !SvtTDvc || !v3 )
    sub_1B8880C(SvtTDvc, v6);
  v3->fields._type = SvtTDvc->fields.cardId;
  v3->fields.treasureDvc = BattleServantData__getTreasureDvcId(this, 1, 0LL, v7);
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

  if ( !userSvt
    || (v4 = this,
        BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(userSvt, 0LL),
        this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleUserServantData_o *, void *))userSvt->klass->vtable._6_getSkillLevelList.method)(
                                        userSvt,
                                        userSvt->klass[1]._1.image),
        !BattleSkillIdList) )
  {
LABEL_15:
    sub_1B8880C(this, userSvt);
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
          sub_1B88814(this, userSvt);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(0LL, ev);
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
  int max_length; // w8
  unsigned int v20; // w22
  BattleBuffData_BuffData_o *v21; // x8

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
    sub_1B8880C(this, removeBuffMethod);
  }
  max_length = v13->max_length;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
        sub_1B88814(this, removeBuffMethod);
      v21 = v13->m_Items[v20];
      if ( !v21 )
        break;
      BattleLogic__removeDoNotSelectCommandCardBuff(logic, v21->fields.buffId, v6, 0LL);
      max_length = v13->max_length;
      if ( (int)++v20 >= max_length )
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
  void *Master_object; // x0
  const MethodInfo *v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  int32_t npcSvtClassId; // w8
  int32_t classId; // w9
  struct ServantEntity_o *svtdata; // x9

  if ( (byte_4A5D918 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4A5D918 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !afterUserSvtData )
    goto LABEL_17;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  Master_object = (void *)BattleUserServantData__getBattleSvtId(afterUserSvtData, 0LL);
  if ( !v9 )
    goto LABEL_17;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    v9,
                    (int32_t)Master_object,
                    (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
  Master_object = BattleServantData__get_BuffData(this, v8);
  if ( !data || !Master_object )
LABEL_17:
    sub_1B8880C(Master_object, v8);
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
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Func_object__o *v14; // x21
  const MethodInfo *v15; // x4

  if ( (byte_4A5D87B & 1) == 0 )
  {
    sub_1B885B0(&System_Func_BattleBuffData_BuffData____TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass446_0__RemoveNoTurnBuffWithUpdateView_g__RemoveBuff_0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass446_0_TypeInfo);
    byte_4A5D87B = 1;
  }
  v7 = sub_1B887FC(BattleServantData___c__DisplayClass446_0_TypeInfo);
  BattleServantData___c__DisplayClass446_0___ctor((BattleServantData___c__DisplayClass446_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = logic;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)logic, v12, v13);
  v14 = (System_Func_object__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData____TypeInfo);
  System_Func_object____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleServantData___c__DisplayClass446_0__RemoveNoTurnBuffWithUpdateView_g__RemoveBuff_0__,
    0LL);
  return BattleServantData__RemoveBuffsWithUpdateView(
           this,
           (System_Func_BattleBuffData_BuffData____o *)v14,
           fieldIndiv,
           *(BattleLogic_o **)(v7 + 24),
           v15);
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

  if ( (byte_4A5D91E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____Remove__);
    byte_4A5D91E = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(key, 0LL);
  p_partAnimationSaveDict = (ServantStatusBattleListViewItem_o *)&this->fields.partAnimationSaveDict;
  if ( IsNullOrEmpty )
  {
    p_partAnimationSaveDict->klass = 0LL;
    sub_1B88554(p_partAnimationSaveDict, 0, v5, v6);
  }
  else
  {
    klass = (System_Collections_Generic_Dictionary_object__object__o *)p_partAnimationSaveDict->klass;
    if ( klass )
      System_Collections_Generic_Dictionary_object__object___Remove(
        klass,
        (Il2CppObject *)key,
        (const MethodInfo_31C86C4 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____Remove__);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  BattleData_o *v12; // x19
  System_Action_object__o *v13; // x20

  if ( (byte_4A5D917 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleServantData__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass779_0__RemovePassiveBuffOnTransform_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass779_0_TypeInfo);
    byte_4A5D917 = 1;
  }
  v5 = sub_1B887FC(BattleServantData___c__DisplayClass779_0_TypeInfo);
  BattleServantData___c__DisplayClass779_0___ctor((BattleServantData___c__DisplayClass779_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9),
        *(_QWORD *)(v5 + 24) = data,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)data, v10, v11),
        v12 = *(BattleData_o **)(v5 + 24),
        v13 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleServantData__TypeInfo),
        System_Action_object____ctor(
          v13,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass779_0__RemovePassiveBuffOnTransform_b__0__,
          0LL),
        !v12) )
  {
    sub_1B8880C(v6, v7);
  }
  BattleData__ExecFuncAllServant(v12, (System_Action_BattleServantData__o *)v13, 0LL);
}


void __fastcall BattleServantData__RemovePassiveSkill(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData___c_c *v3; // x0
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *_9__778_0; // x20
  Il2CppObject *v6; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D916 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
    sub_1B885B0(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__RemovePassiveSkill_b__778_0__);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D916 = 1;
  }
  v3 = BattleServantData___c_TypeInfo;
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v3 = BattleServantData___c_TypeInfo;
  }
  _9__778_0 = (System_Predicate_object__o *)v3->static_fields->__9__778_0;
  if ( !_9__778_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleServantData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__778_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_object____ctor(_9__778_0, v6, Method_BattleServantData___c__RemovePassiveSkill_b__778_0__, 0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__778_0 = (struct System_Predicate_BattleSkillInfoData__o *)_9__778_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__778_0, (int32_t)_9__778_0, v8, v9);
  }
  if ( !skillInfoList )
    sub_1B8880C(v3, method);
  System_Collections_Generic_List_object___RemoveAll(
    skillInfoList,
    (System_Predicate_T__o *)_9__778_0,
    (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
}


void __fastcall BattleServantData__ReplaceSelfSkillInfo(
        BattleServantData_o *this,
        int32_t index,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass336_0_o *v9; // x23
  System_Collections_Generic_List_object__o *v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x22
  System_Func_object__bool__o *v13; // x24
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x22
  int32_t v16; // w24
  BattleSkillInfoData_o *SkillData; // x0
  int32_t skillInfoType; // w2
  int32_t v19; // w3
  BattleSkillInfoData_o *v20; // x23
  const MethodInfo *v21; // [xsp+0h] [xbp-50h]

  if ( (byte_4A5D855 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___);
    sub_1B885B0(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass336_0__ReplaceSelfSkillInfo_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass336_0_TypeInfo);
    byte_4A5D855 = 1;
  }
  v9 = (BattleServantData___c__DisplayClass336_0_o *)sub_1B887FC(BattleServantData___c__DisplayClass336_0_TypeInfo);
  BattleServantData___c__DisplayClass336_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  v9->fields.skillInfoType = 11;
  v9->fields.index = index;
  skillInfoList = this->fields.skillInfoList;
  v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleSkillInfoData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleServantData___c__DisplayClass336_0__ReplaceSelfSkillInfo_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleSkillInfoData___);
  if ( !v14 )
    return;
  v15 = v14;
  v10 = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !v10 )
    goto LABEL_10;
  v16 = System_Collections_Generic_List_object___IndexOf(
          v10,
          v15,
          (const MethodInfo_34FE4D4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__IndexOf__);
  SkillData = BattleSkillInfoData__MakeSkillData(v9->fields.skillInfoType, 0LL);
  skillInfoType = v9->fields.skillInfoType;
  v19 = v9->fields.index;
  v20 = SkillData;
  BattleServantData__SetSkillInfo(this, SkillData, skillInfoType, v19, skillId, skillLv, -1LL, -1, v21);
  v10 = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !v10
    || (System_Collections_Generic_List_object___set_Item(
          v10,
          v16,
          (Il2CppObject *)v20,
          (const MethodInfo_34FD5B8 *)Method_System_Collections_Generic_List_BattleSkillInfoData__set_Item__),
        !v20) )
  {
LABEL_10:
    sub_1B8880C(v10, v11);
  }
  ((void (__fastcall *)(BattleSkillInfoData_o *, BattleServantData_o *, Il2CppMethodPointer))v20->klass->vtable._11_PreAddProcess.method)(
    v20,
    this,
    v20->klass->vtable._12_IsChangeable.methodPtr);
  v20->fields.sealedTurn = (int32_t)v15[3].klass;
  v20->fields.chargeTurn = (int32_t)v15[2].monitor;
}


void __fastcall BattleServantData__ResetAdjustment(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  struct System_Collections_Generic_List_BattleServantData_Adjustment__o *adjustmentList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4A5D837 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Clear__);
    byte_4A5D837 = 1;
  }
  adjustmentList = v2->fields.adjustmentList;
  if ( !adjustmentList )
    sub_1B8880C(this, method);
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
  BattleServantData___c_c *v3; // x0
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x19
  System_Func_object__bool__o *_9__396_0; // x21
  Il2CppObject *v6; // x22
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x19
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  BattleSkillInfoData_o *v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  BattleSkillInfoData_o *v30; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A5D86D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
    sub_1B885B0(&System_Func_BattleSkillInfoData__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__ResetServantSelfSkill_b__396_0__);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D86D = 1;
  }
  v3 = BattleServantData___c_TypeInfo;
  skillInfoList = this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v3 = BattleServantData___c_TypeInfo;
  }
  _9__396_0 = (System_Func_object__bool__o *)v3->static_fields->__9__396_0;
  if ( !_9__396_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleServantData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__396_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleSkillInfoData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__396_0, v6, Method_BattleServantData___c__ResetServantSelfSkill_b__396_0__, 0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__396_0 = (struct System_Func_BattleSkillInfoData__bool__o *)_9__396_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__396_0, (int32_t)_9__396_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)skillInfoList,
          (System_Func_TSource__bool__o *)_9__396_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleSkillInfoData___);
  if ( !v10 )
    sub_1B8880C(0LL, v11);
  klass = v10->klass;
  v13 = v10;
  v14 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BDA590(v10, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v13,
          *(_QWORD *)(p_method + 8));
  if ( !v18 )
    sub_1B8880C(0LL, v17);
  while ( 1 )
  {
    v19 = *(_QWORD *)v18;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_21;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_21:
      v22 = sub_1BDA590(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
      break;
    v23 = *(_QWORD *)v18;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v25 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_28;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_28:
      v26 = sub_1BDA590(v18, System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, 0LL);
    }
    v27 = (BattleSkillInfoData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
    v30 = v27;
    if ( !v27 )
      sub_1B8880C(0LL, v28);
    v27->fields.sealedTurn = 0;
    if ( !BattleServantData__ChangeSkillRemainingTurn(this, v27, v27, v29) )
      v30->fields.chargeTurn = 0;
  }
  v31 = *(_QWORD *)v18;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
  {
    v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_37;
    }
    v34 = v31 + 16LL * *v33 + 312;
  }
  else
  {
LABEL_37:
    v34 = sub_1BDA590(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v34)(v18, *(_QWORD *)(v34 + 8));
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
    sub_1B8880C(SnapShotDamagedOnLogicDead_k__BackingField, v13);
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
  System_Collections_Generic_Dictionary_object__object__o *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  __int64 v21; // x22
  __int64 v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Int32_c *v26; // x0
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Collections_Generic_Dictionary_string__object__array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  System_String_o *v36; // x20
  int32_t Int; // w0
  int v38; // w8
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  int64_t UserSvtId; // [xsp+8h] [xbp-58h] BYREF
  int32_t v44; // [xsp+18h] [xbp-48h] BYREF
  int32_t SelectedNobleGroupSeqId; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4A5D910 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Dictionary_string__object___Add__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_23707/*"svtId"*/);
    sub_1B885B0(&StringLiteral_24453/*"userSvtId"*/);
    sub_1B885B0(&StringLiteral_23103/*"seqId"*/);
    byte_4A5D910 = 1;
  }
  SelectedNobleGroupSeqId = 0;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)BattleServantData__GetSelectedNobleSeqId(
                                                                                                 this,
                                                                                                 (const MethodInfo *)data);
  if ( !data )
    goto LABEL_27;
  v7 = (int)SelectedNobleSeqId;
  playerServantNoblePhantasmUsageData = data->fields.playerServantNoblePhantasmUsageData;
  v10 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v10;
  *(_QWORD *)&v46.fields.fakeValue = v9;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                                                 v46,
                                                                                                 0LL);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_27;
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
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  LODWORD(UserSvtId) = v7;
  SelectedNobleSeqId = (struct System_Collections_Generic_List_Dictionary_string__object___o *)j_il2cpp_value_box_0(
                                                                                                 int_TypeInfo,
                                                                                                 &UserSvtId,
                                                                                                 v13,
                                                                                                 v14,
                                                                                                 v15);
  if ( !v12 )
    goto LABEL_27;
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23103/*"seqId"*/,
    (Il2CppObject *)SelectedNobleSeqId,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( this->fields.isEnemy || this->fields.followerType )
  {
    UserSvtId = 0LL;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId, v17, v18, v19);
    System_Collections_Generic_Dictionary_object__object___Add(
      v12,
      (Il2CppObject *)StringLiteral_24453/*"userSvtId"*/,
      v20,
      (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v47.fields.currentCryptoKey = v22;
    *(_QWORD *)&v47.fields.fakeValue = v21;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v47, 0LL);
    v26 = int_TypeInfo;
  }
  else
  {
    UserSvtId = BattleServantData__getUserSvtId(this, v16);
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &UserSvtId, v39, v40, v41);
    System_Collections_Generic_Dictionary_object__object___Add(
      v12,
      (Il2CppObject *)StringLiteral_24453/*"userSvtId"*/,
      v42,
      (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
    v26 = int_TypeInfo;
    v44 = 0;
  }
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(v26, &v44, v23, v24, v25);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23707/*"svtId"*/,
    v27,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  SelectedNobleSeqId = data->fields.firstNpPlayList;
  if ( !SelectedNobleSeqId
    || (items = SelectedNobleSeqId->fields._items,
        v31 = Method_System_Collections_Generic_List_Dictionary_string__object___Add__,
        ++SelectedNobleSeqId->fields._version,
        !items) )
  {
LABEL_27:
    sub_1B8880C(SelectedNobleSeqId, v6);
  }
  size = SelectedNobleSeqId->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)SelectedNobleSeqId,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    SelectedNobleSeqId->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v12, v28, v29);
  }
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
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2

  z = offSet.fields.z;
  y = offSet.fields.y;
  x = offSet.fields.x;
  if ( (byte_4A5D834 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData_Adjustment_TypeInfo);
    byte_4A5D834 = 1;
  }
  v15 = sub_1B887FC(BattleServantData_Adjustment_TypeInfo);
  BattleServantData_Adjustment___ctor((BattleServantData_Adjustment_o *)v15, 0LL);
  if ( !v15 )
    sub_1B8880C(v16, v17);
  *(float *)(v15 + 20) = x;
  *(float *)(v15 + 24) = y;
  *(_BYTE *)(v15 + 16) = isCritical;
  *(_BYTE *)(v15 + 17) = isWeak;
  *(_BYTE *)(v15 + 18) = isRegist;
  *(_BYTE *)(v15 + 19) = isNoDamage;
  *(float *)(v15 + 28) = z;
  BattleServantData__SetAdjustment_42888604(this, (BattleServantData_Adjustment_o *)v15, v18);
}


void __fastcall BattleServantData__SetAdjustment_42888604(
        BattleServantData_o *this,
        BattleServantData_Adjustment_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *adjustmentList; // x0
  ServantStatusBattleListViewItem_o *p_adjustmentList; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4A5D835 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    byte_4A5D835 = 1;
  }
  adjustmentList = (System_Collections_Generic_List_object__o *)this->fields.adjustmentList;
  if ( !adjustmentList )
  {
    p_adjustmentList = (ServantStatusBattleListViewItem_o *)&this->fields.adjustmentList;
    v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantData_Adjustment__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantData_Adjustment___ctor__);
    p_adjustmentList->klass = (ServantStatusBattleListViewItem_c *)v8;
    sub_1B88554(p_adjustmentList, (int32_t)v8, v9, v10);
    adjustmentList = (System_Collections_Generic_List_object__o *)p_adjustmentList->klass;
    if ( !p_adjustmentList->klass )
      goto LABEL_9;
  }
  items = adjustmentList->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleServantData_Adjustment__Add__;
  ++adjustmentList->fields._version;
  if ( !items )
LABEL_9:
    sub_1B8880C(adjustmentList, data);
  size = adjustmentList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adjustmentList,
      (Il2CppObject *)data,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    adjustmentList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)data, (int32_t)method, v3);
  }
}


void __fastcall BattleServantData__SetCommandAssistSkill(
        BattleServantData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t *Master_object; // x0
  __int64 v6; // x1
  struct System_Int32_array *commandAssistIds; // x8
  EventCommandAssistMaster_o *v8; // x21
  unsigned __int64 v9; // x22
  unsigned __int64 max_length; // x9
  const MethodInfo *v11; // [xsp+0h] [xbp-40h]

  if ( (byte_4A5D848 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5D848 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int32_t *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  commandAssistIds = this->fields.commandAssistIds;
  if ( !commandAssistIds )
LABEL_13:
    sub_1B8880C(Master_object, v6);
  v8 = (EventCommandAssistMaster_o *)Master_object;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = commandAssistIds->max_length;
    if ( (__int64)v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      sub_1B88814(Master_object, v6);
    if ( v8 )
    {
      Master_object = (int32_t *)EventCommandAssistMaster__GetCurrentEntity(
                                   v8,
                                   eventId,
                                   commandAssistIds->m_Items[v9 + 1],
                                   -1,
                                   0,
                                   0LL);
      if ( Master_object )
        Master_object = (int32_t *)BattleServantData__addSkillInfo(
                                     this,
                                     23,
                                     v9,
                                     Master_object[13],
                                     Master_object[14],
                                     -1LL,
                                     Master_object[4],
                                     0LL,
                                     v11);
      commandAssistIds = this->fields.commandAssistIds;
      ++v9;
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
  int32_t Item; // w21
  __int128 v6; // q0
  int32_t v7; // w21
  int32_t v8; // w0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v10; // x21
  int32_t v11; // w22
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t battleCharaLimitCount; // w2
  int32_t svtId; // w1
  __int64 v20; // x21
  __int64 v21; // x22
  Il2CppObject *v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtdata; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x8
  BattleServantData_o *v27; // x20
  int32_t v28; // w21
  ServantLimitEntity_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32[2]; // [xsp+0h] [xbp-90h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  v4 = this;
  if ( (byte_4A5D859 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_21102/*"limitCount"*/);
    sub_1B885B0(&StringLiteral_23707/*"svtId"*/);
    sub_1B885B0(&StringLiteral_20619/*"index"*/);
    sub_1B885B0(&StringLiteral_24453/*"userSvtId"*/);
    this = (BattleServantData_o *)sub_1B885B0(&StringLiteral_24180/*"uniqueId"*/);
    byte_4A5D859 = 1;
  }
  entity = 0LL;
  if ( !fakeInfo )
    goto LABEL_26;
  v4->fields.index = System_Collections_Generic_Dictionary_object__int___get_Item(
                       (System_Collections_Generic_Dictionary_object__int__o *)fakeInfo,
                       (Il2CppObject *)StringLiteral_20619/*"index"*/,
                       (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v4->fields.uniqueId = System_Collections_Generic_Dictionary_object__int___get_Item(
                          (System_Collections_Generic_Dictionary_object__int__o *)fakeInfo,
                          (Il2CppObject *)StringLiteral_24180/*"uniqueId"*/,
                          (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)fakeInfo,
           (Il2CppObject *)StringLiteral_24453/*"userSvtId"*/,
           (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(v32, Item, 0LL);
  v6 = *(_OWORD *)&v32[0].fields.fakeValue;
  v32[1] = v32[0];
  *(_OWORD *)&v4->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)&v32[0].fields.currentCryptoKey;
  *(_OWORD *)&v4->fields.userSvtId.fields.fakeValue = v6;
  v7 = System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)fakeInfo,
         (Il2CppObject *)StringLiteral_23707/*"svtId"*/,
         (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v4->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v7, 0LL);
  v8 = System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)fakeInfo,
         (Il2CppObject *)StringLiteral_21102/*"limitCount"*/,
         (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  v4->fields.limitcount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v8, 0LL);
  this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)this,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v4->fields.svtId, 0LL);
  this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                  v4->fields.limitcount,
                                  0LL);
  if ( !v10 )
    goto LABEL_26;
  this = (BattleServantData_o *)ServantLimitAddMaster__TryGetEntity(
                                  (ServantLimitAddMaster_o *)v10,
                                  &entity,
                                  v11,
                                  (int32_t)this,
                                  0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v21 = *(_QWORD *)&v4->fields.svtId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&v4->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v34.fields.currentCryptoKey = v21;
    *(_QWORD *)&v34.fields.fakeValue = v20;
    this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v34, 0LL);
    if ( MasterData_object )
    {
      v22 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              (int32_t)this,
              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      p_svtdata = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&v4->fields.svtdata;
      v4->fields.svtdata = (struct ServantEntity_o *)v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.svtdata, (int32_t)v22, v24, v25);
      this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( this )
      {
        this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
        v26 = *p_svtdata;
        if ( *p_svtdata )
        {
          v27 = this;
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26[1], 0LL);
          this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                          v4->fields.limitcount,
                                          0LL);
          if ( v27 )
          {
            battleCharaLimitCount = (int)this;
            this = v27;
            svtId = v28;
            goto LABEL_25;
          }
        }
      }
    }
LABEL_26:
    sub_1B8880C(this, fakeInfo);
  }
  if ( !entity )
    goto LABEL_26;
  if ( !MasterData_object )
    goto LABEL_26;
  v12 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          entity->fields.svtId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v4->fields.svtdata = (struct ServantEntity_o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.svtdata, (int32_t)v12, v13, v14);
  v15 = (int)entity;
  v4->fields.svtlimitaddent = entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.svtlimitaddent, v15, v16, v17);
  this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_26;
  this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( !entity || !this )
    goto LABEL_26;
  battleCharaLimitCount = entity->fields.battleCharaLimitCount;
  svtId = entity->fields.svtId;
LABEL_25:
  v29 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)this, svtId, battleCharaLimitCount, 0LL);
  v4->fields.svtlimitDispent = v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.svtlimitDispent, (int32_t)v29, v30, v31);
}


void __fastcall BattleServantData__SetForceAppearance(BattleServantData_o *this, bool flg, const MethodInfo *method)
{
  this->fields.isForceAppearance = flg;
}


void __fastcall BattleServantData__SetInvincibleAvoidanceBuff(
        BattleServantData_o *this,
        BattleData_o *data,
        BattleServantData_o *actor,
        BattleCommandData_o *command,
        BattleActionData_DamageData_o *damageData,
        float *damage,
        bool *minimumDamageFlg,
        int32_t *hitStat,
        BattleActionData_o *mainAction,
        int32_t noDamageBuffCheckTargetSide,
        System_Func_BattleBuffData_BuffData__bool__o *pierceCond,
        bool isPierceTypeRevertBuff,
        const MethodInfo *method)
{
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct BattleActionData_DamageData_o *v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x5
  const MethodInfo *v34; // x5
  const MethodInfo *v35; // x5
  int32_t v36; // w8
  BattleServantData_o *v37; // x2
  const MethodInfo *v38; // x2
  BattleServantData_o *v39; // x2
  const MethodInfo *v40; // x2
  int32_t v41; // w1
  struct BattleBuffData_o *buffData; // x8
  const MethodInfo *v43; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v44; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v45; // [xsp+0h] [xbp-C0h]
  const MethodInfo *v46; // [xsp+0h] [xbp-C0h]
  BattleBuffData_BuffData_o *v47; // [xsp+8h] [xbp-B8h] BYREF
  BattleBuffData_BuffData_o *usedBuff; // [xsp+10h] [xbp-B0h] BYREF
  BattleBuffData_BuffData_o *v49; // [xsp+18h] [xbp-A8h] BYREF
  BattleServantData___c__DisplayClass689_0_o v50; // [xsp+20h] [xbp-A0h] BYREF

  v50.fields.__4__this = this;
  usedBuff = 0LL;
  v49 = 0LL;
  memset(&v50.fields.isSvtAction, 0, 56);
  v47 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v50, (int32_t)this, (int32_t)actor, (int32_t)command);
  v50.fields.actor = actor;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v50.fields.actor, (int32_t)actor, v21, v22);
  v50.fields.command = command;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v50.fields.command, (int32_t)command, v23, v24);
  v50.fields.noDamageBuffCheckTargetSide = noDamageBuffCheckTargetSide;
  v50.fields.pierceCond = pierceCond;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v50.fields.pierceCond, (int32_t)pierceCond, v25, v26);
  v50.fields.damageData = damageData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v50.fields.damageData, (int32_t)damageData, v27, v28);
  v50.fields.isSvtAction = v50.fields.actor != 0LL;
  if ( !data )
    goto LABEL_41;
  v50.fields.notSvtActorIndivArray = BattleData__GetNotSvtActorIndividualityArray(
                                       data,
                                       mainAction,
                                       v50.fields.actor != 0LL,
                                       0LL);
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v50.fields.notSvtActorIndivArray,
    (int32_t)v50.fields.notSvtActorIndivArray,
    v31,
    v32);
  v49 = 0LL;
  v29 = (struct BattleActionData_DamageData_o *)BattleServantData__CheckSpecialInvincible(
                                                  this,
                                                  v50.fields.command,
                                                  v50.fields.actor,
                                                  &usedBuff,
                                                  v50.fields.isSvtAction,
                                                  v50.fields.notSvtActorIndivArray,
                                                  v50.fields.noDamageBuffCheckTargetSide,
                                                  v50.fields.pierceCond,
                                                  v43);
  if ( ((unsigned __int8)v29 & 1) != 0 )
  {
    *damage = 0.0;
    *minimumDamageFlg = 0;
    if ( v50.fields.damageData )
    {
      v50.fields.damageData->fields.isSpecialInvincible = 1;
      *hitStat = 1;
      if ( !v50.fields.actor
        || BattleServantData__checkPierceInvincible(
             v50.fields.actor,
             v50.fields.command,
             this,
             &v47,
             v50.fields.noDamageBuffCheckTargetSide,
             v33) )
      {
        return;
      }
LABEL_20:
      if ( v50.fields.actor )
        BattleServantData__checkBreakAvoidance(
          v50.fields.actor,
          v50.fields.command,
          this,
          &v47,
          v50.fields.noDamageBuffCheckTargetSide,
          v34);
      return;
    }
    goto LABEL_41;
  }
  if ( !v50.fields.damageData )
    goto LABEL_41;
  if ( BattleServantData__CheckAvoidanceIndividuality(
         this,
         v50.fields.command,
         v50.fields.actor,
         &v50.fields.damageData->fields.defNoDamageBuffId,
         v50.fields.isSvtAction,
         v50.fields.notSvtActorIndivArray,
         v50.fields.noDamageBuffCheckTargetSide,
         v50.fields.pierceCond,
         v44) )
  {
    goto LABEL_9;
  }
  if ( !v50.fields.actor )
  {
    v37 = 0LL;
    goto LABEL_17;
  }
  if ( !BattleServantData__checkPierceInvincible(
          v50.fields.actor,
          v50.fields.command,
          this,
          &v49,
          v50.fields.noDamageBuffCheckTargetSide,
          v35) )
  {
    v37 = v50.fields.actor;
LABEL_17:
    v29 = (struct BattleActionData_DamageData_o *)BattleServantData__CheckInvincible(
                                                    this,
                                                    v50.fields.command,
                                                    v37,
                                                    &v47,
                                                    v50.fields.isSvtAction,
                                                    v50.fields.notSvtActorIndivArray,
                                                    v50.fields.noDamageBuffCheckTargetSide,
                                                    v50.fields.pierceCond,
                                                    v45);
    if ( ((unsigned __int8)v29 & 1) != 0 )
    {
      *damage = 0.0;
      *minimumDamageFlg = 0;
      if ( v50.fields.damageData )
      {
        v50.fields.damageData->fields.isSpecialInvincible = 0;
        *hitStat = 1;
        goto LABEL_20;
      }
LABEL_41:
      sub_1B8880C(v29, v30);
    }
    if ( v50.fields.actor )
    {
      if ( BattleServantData__checkBreakAvoidance(
             v50.fields.actor,
             v50.fields.command,
             this,
             &v49,
             v50.fields.noDamageBuffCheckTargetSide,
             v34) )
      {
        goto LABEL_25;
      }
      v39 = v50.fields.actor;
    }
    else
    {
      v39 = 0LL;
    }
    if ( !BattleServantData__CheckAvoidance(
            this,
            v50.fields.command,
            v39,
            &v47,
            v50.fields.isSvtAction,
            v50.fields.notSvtActorIndivArray,
            v50.fields.noDamageBuffCheckTargetSide,
            v50.fields.pierceCond,
            v46) )
    {
      if ( !BattleServantData___SetInvincibleAvoidanceBuff_g__CheckAvoidanceDeathDamageFunc_689_0(
              this,
              *damage,
              &v50,
              v40) )
        return;
      v29 = v50.fields.damageData;
      if ( v50.fields.damageData )
      {
        v41 = *damage == INFINITY ? 0x80000000 : (int)*damage;
        BattleActionData_DamageData__SaveResetDamageArray(v50.fields.damageData, v41, *minimumDamageFlg, 0LL);
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
      goto LABEL_41;
    }
LABEL_9:
    v36 = 2;
    *damage = 0.0;
    *minimumDamageFlg = 0;
LABEL_10:
    *hitStat = v36;
    return;
  }
  if ( BattleServantData__CheckInvincible(
         this,
         v50.fields.command,
         v50.fields.actor,
         &v47,
         1,
         0LL,
         v50.fields.noDamageBuffCheckTargetSide,
         v50.fields.pierceCond,
         v45) )
  {
    v36 = 3;
    goto LABEL_10;
  }
LABEL_25:
  if ( BattleServantData__CheckAvoidance(
         this,
         v50.fields.command,
         v50.fields.actor,
         &v47,
         1,
         0LL,
         v50.fields.noDamageBuffCheckTargetSide,
         v50.fields.pierceCond,
         v46)
    || BattleServantData___SetInvincibleAvoidanceBuff_g__CheckAvoidanceDeathDamageFunc_689_0(this, *damage, &v50, v38) )
  {
    v36 = 4;
    goto LABEL_10;
  }
  if ( isPierceTypeRevertBuff && v49 )
    BattleBuffData_BuffData__RevertUnused(v49, 1, 0LL);
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
  ServantStatusBattleListViewItem_o *p_partAnimationSaveDict; // x21
  System_Collections_Generic_Dictionary_object__object__o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1

  if ( (byte_4A5D91C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TypeInfo);
    byte_4A5D91C = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)saveDataArray, 0LL) )
  {
    partAnimationSaveDict = this->fields.partAnimationSaveDict;
    if ( !partAnimationSaveDict )
    {
      p_partAnimationSaveDict = (ServantStatusBattleListViewItem_o *)&this->fields.partAnimationSaveDict;
      v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v9,
        (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData_____ctor__);
      p_partAnimationSaveDict->klass = (ServantStatusBattleListViewItem_c *)v9;
      sub_1B88554(p_partAnimationSaveDict, (int32_t)v9, v10, v11);
      partAnimationSaveDict = (struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *)p_partAnimationSaveDict->klass;
      if ( !p_partAnimationSaveDict->klass )
        sub_1B8880C(0LL, v12);
    }
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)partAnimationSaveDict,
      (Il2CppObject *)key,
      &saveDataArray->obj,
      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____set_Item__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__SetReceiveFunctionId(
        BattleServantData_o *this,
        int32_t funcId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *receiveFunctionIdList_k__BackingField; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4A5D92D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A5D92D = 1;
  }
  receiveFunctionIdList_k__BackingField = this->fields._receiveFunctionIdList_k__BackingField;
  if ( !receiveFunctionIdList_k__BackingField )
    goto LABEL_11;
  if ( System_Collections_Generic_List_int___Contains(
         receiveFunctionIdList_k__BackingField,
         funcId,
         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  receiveFunctionIdList_k__BackingField = this->fields._receiveFunctionIdList_k__BackingField;
  if ( !receiveFunctionIdList_k__BackingField
    || (items = receiveFunctionIdList_k__BackingField->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++receiveFunctionIdList_k__BackingField->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B8880C(receiveFunctionIdList_k__BackingField, *(_QWORD *)&funcId);
  }
  size = receiveFunctionIdList_k__BackingField->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      receiveFunctionIdList_k__BackingField,
      funcId,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    receiveFunctionIdList_k__BackingField->fields._size = size + 1;
    items->m_Items[size + 1] = funcId;
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
  const MethodInfo *v5; // x3

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_1B8880C(0LL, v4);
  this->fields.selectedTDCardId = SvtTDvc->fields.cardId;
  this->fields.selectedTDId = BattleServantData__getTreasureDvcId(this, 1, 0LL, v5);
}


void __fastcall BattleServantData__SetServantCommandCard(BattleServantData_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  System_Array_o *v9; // x0
  System_Array_o *v10; // x22
  unsigned __int64 v11; // x27
  __int64 v12; // x23
  __int64 v13; // x24
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct System_Collections_Hashtable_o *commandtable; // x23
  __int64 v18; // x0
  __int64 v19; // x25
  __int64 v20; // x26
  __int64 v21; // x24
  int32_t cardId; // [xsp+4h] [xbp-6Ch] BYREF
  ServantCardEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v24; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4A5D895 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCardMaster___);
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A);
    byte_4A5D895 = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v3, 0LL);
  this->fields.commandtable = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandtable, (int32_t)v3, v4, v5);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v9 = (System_Array_o *)sub_1B88658(int___TypeInfo, 6LL);
  v24.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  v10 = v9;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v9, v24, 0LL);
  if ( !v10 )
    goto LABEL_20;
  if ( SLODWORD(v10[1].monitor) >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v13 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v12 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v25.fields.currentCryptoKey = v13;
      *(_QWORD *)&v25.fields.fakeValue = v12;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
      if ( v11 >= LODWORD(v10[1].monitor) )
        sub_1B88814(Instance, v7);
      if ( !MasterData_object )
        break;
      Instance = (DataManager_o *)ServantCardMaster__TryGetEntity(
                                    (ServantCardMaster_o *)MasterData_object,
                                    &entity,
                                    (int32_t)Instance,
                                    *((_DWORD *)&v10[2].klass + v11),
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          break;
        commandtable = this->fields.commandtable;
        cardId = entity->fields.cardId;
        v18 = j_il2cpp_value_box_0(int_TypeInfo, &cardId, v14, v15, v16);
        v20 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v21 = v18;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = v20;
        *(_QWORD *)&v26.fields.fakeValue = v19;
        Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26, 0LL);
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
          v21,
          Instance,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
      if ( (__int64)++v11 >= SLODWORD(v10[1].monitor) )
        return;
    }
LABEL_20:
    sub_1B8880C(Instance, v7);
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
      sub_1B8880C(0LL, v7);
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

  if ( (byte_4A5D906 & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5D906 = 1;
  }
  BattleServantData__setShiftServant(this, data, shiftValue, *(const MethodInfo **)&shiftValue);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  if ( !defHp )
    sub_1B8880C(v9, v10);
  v11 = v9;
  TotalDamage = SimpleHpData__get_TotalDamage((SimpleHpData_o *)defHp, 0LL);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = System_Math__Max_62525680(1, v11 - TotalDamage, 0LL);
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
  __int64 v19; // x0
  __int64 v20; // x0
  Il2CppObject *v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  int32_t v24; // w8
  __int64 v25; // x0
  __int64 v26; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v28; // x22
  __int64 v29; // x23
  ServantSkillMaster_o *v30; // x21
  int32_t v31; // w22
  ServantSkillEntity_o *EntityFromSkillId; // x0
  ServantSkillEntity_o *v33; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v16 = this;
  if ( (byte_4A5D856 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (BattleServantData_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5D856 = 1;
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
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BDA48C(v19);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BDA48C(v20);
  this = **(BattleServantData_o ***)(v20 + 184);
  if ( !this )
    goto LABEL_32;
  this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  entity = 0LL;
  if ( !this )
    goto LABEL_32;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    skillId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
  v21 = entity;
  if ( entity )
  {
    skillInfo->fields.isUseSkill = 1;
    skillInfo->fields.isPassive = SkillEntity__isPassive((SkillEntity_o *)v21, 0LL);
    v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1BDA48C(v22);
    v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1BDA48C(v23);
    this = **(BattleServantData_o ***)(v23 + 184);
    if ( !this )
      goto LABEL_32;
    this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !this )
      goto LABEL_32;
    this = (BattleServantData_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)this, skillId, skillLv, 0LL);
    if ( !this )
      goto LABEL_32;
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
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1BDA48C(v25);
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 192) + 16LL);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1BDA48C(v26);
  this = **(BattleServantData_o ***)(v26 + 184);
  if ( !this )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  v29 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  v30 = (ServantSkillMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v29;
  *(_QWORD *)&v36.fields.fakeValue = v28;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36, 0LL);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                  skillInfo,
                                  skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v30 )
LABEL_32:
    sub_1B8880C(this, skillInfo);
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
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5D842 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__4E81D9BE7E36896BB3900CE16AFF3BCF5CD86C2A70B54B90EFF875B6FABD3457);
    byte_4A5D842 = 1;
  }
  if ( takeoverData )
  {
    *(_QWORD *)&this->fields.maxDefeatPoint = *(_QWORD *)&takeoverData->fields.maxDefeatPoint;
    if ( takeoverData->fields.buffDataSave )
    {
      v5 = (System_Array_o *)sub_1B88658(int___TypeInfo, 6LL);
      v10.fields.value = Field__PrivateImplementationDetails__4E81D9BE7E36896BB3900CE16AFF3BCF5CD86C2A70B54B90EFF875B6FABD3457;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v5, v10, 0LL);
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
        sub_1B8880C(buffData, v6);
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
  BattleBuffData_o *v7; // x21
  BalanceConfig_c *v8; // x0
  __int64 currentHp; // x1
  BattleBuffData_BuffData_array *ActiveList; // x0
  const MethodInfo *v11; // x2
  int32_t tmpAppearanceId; // w8
  const MethodInfo *v13; // x2
  unsigned int namespaze; // w8
  System_Int32_array *v15; // x21
  int32_t v16; // w22
  BattleSkillInfoData_o *SelfSkillInfo; // x0
  int32_t *p_currentNp; // x8
  int32_t *p_nextNpTurn; // x19
  int32_t nextNpTurn; // t1
  int32_t *p_nexttpturn; // x8

  if ( (byte_4A5D843 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&BattleBuffData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D843 = 1;
  }
  if ( takeoverData )
  {
    *(_QWORD *)&this->fields.transformIndex = *(_QWORD *)&takeoverData->fields.transformIndex;
    BattleServantData__loadTransformServant(this, data, (const MethodInfo *)data);
    if ( takeoverData->fields.buffDataSave )
    {
      v7 = (BattleBuffData_o *)sub_1B887FC(BattleBuffData_TypeInfo);
      BattleBuffData___ctor(v7, 0LL);
      if ( !v7 )
        goto LABEL_21;
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
    v8 = (BalanceConfig_c *)sub_1B88658(int___TypeInfo, 3LL);
    if ( !v8 )
LABEL_21:
      sub_1B8880C(v8, currentHp);
    namespaze = (unsigned int)v8->_1.namespaze;
    v15 = (System_Int32_array *)v8;
    if ( !namespaze
      || (LODWORD(v8->_1.byval_arg.data) = takeoverData->fields.skill1Ct, namespaze == 1)
      || (HIDWORD(v8->_1.byval_arg.data) = takeoverData->fields.skill2Ct, namespaze <= 2) )
    {
      sub_1B88814(v8, currentHp);
    }
    v16 = 0;
    v8->_1.byval_arg.bits = takeoverData->fields.skill3Ct;
    while ( 1 )
    {
      v8 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v8 = BalanceConfig_TypeInfo;
      }
      if ( v16 >= v8->static_fields->SvtSkillListMax )
        break;
      SelfSkillInfo = BattleServantData__getSelfSkillInfo(this, v16, v13);
      if ( SelfSkillInfo )
        SelfSkillInfo->fields.chargeTurn = BasicHelper__IndexValue_int_(
                                             v15,
                                             v16,
                                             0,
                                             (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
      ++v16;
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


void __fastcall BattleServantData__SetTdAfterStatus(
        BattleServantData_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x19
  UseNoblePhantasmWaveTurnEvent_o *v5; // x21
  int32_t maxtpturn; // w8

  v4 = this;
  if ( (byte_4A5D89C & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&UseNoblePhantasmWaveTurnEvent_TypeInfo);
    byte_4A5D89C = 1;
  }
  if ( !battleData )
    goto LABEL_12;
  this = (BattleServantData_o *)battleData->fields.perf;
  if ( !this )
    goto LABEL_12;
  if ( !BattlePerformance__isPositionTactical((BattlePerformance_o *)this, 0LL) )
    goto LABEL_9;
  this = (BattleServantData_o *)v4->fields.deckSvt;
  if ( !this )
    goto LABEL_12;
  if ( !BattleDeckServantData__IsUseTdBeforeTactical((BattleDeckServantData_o *)this, 0LL) )
  {
LABEL_9:
    v5 = (UseNoblePhantasmWaveTurnEvent_o *)sub_1B887FC(UseNoblePhantasmWaveTurnEvent_TypeInfo);
    UseNoblePhantasmWaveTurnEvent___ctor(v5, battleData, 0LL);
    this = (BattleServantData_o *)v4->fields.waveTurnEventOwner;
    if ( this )
    {
      ServantWaveTurnEventOwner__Add((ServantWaveTurnEventOwner_o *)this, (ServantWaveTurnEvent_o *)v5, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_1B8880C(this, battleData);
  }
  v4->fields.isUseTdBetweenEnemyTurnEndAndTactical = 1;
LABEL_11:
  maxtpturn = v4->fields.maxtpturn;
  v4->fields.np = 0;
  v4->fields.nexttpturn = maxtpturn;
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
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D860 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D860 = 1;
  }
  BuffData = BattleServantData__get_BuffData(this, (const MethodInfo *)buff);
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !BuffData )
    sub_1B8880C(v7, v8);
  FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(BuffData, 128, v6, 0, 0LL, 0LL);
  *buff = FirstMatchCondBuff;
  sub_1B88554((ServantStatusBattleListViewItem_o *)buff, (int32_t)FirstMatchCondBuff, v10, v11);
  return *buff != 0LL;
}


bool __fastcall BattleServantData__TryGetPartAnimationSaveData(
        BattleServantData_o *this,
        System_String_o *key,
        BattlePlayAnimationComponent_SaveData_array **saveDataArray,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x0

  if ( (byte_4A5D91D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TryGetValue__);
    byte_4A5D91D = 1;
  }
  *saveDataArray = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)saveDataArray, 0, (int32_t)saveDataArray, (int32_t)method);
  partAnimationSaveDict = this->fields.partAnimationSaveDict;
  if ( partAnimationSaveDict )
    LOBYTE(partAnimationSaveDict) = System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                      (System_Collections_Generic_Dictionary_object__object__o *)partAnimationSaveDict,
                                      (Il2CppObject *)key,
                                      (Il2CppObject **)saveDataArray,
                                      (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____TryGetValue__);
  return (char)partAnimationSaveDict;
}


bool __fastcall BattleServantData__TryGetPlayableVoiceInfoList(
        BattleServantData_o *this,
        System_Collections_Generic_List_KeyValuePair_string__int___o **voiceInfoList,
        Voice_BATTLE_array *types,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_T__o *v10; // x24
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x8
  unsigned __int64 v14; // x28
  int32_t v15; // w24
  const MethodInfo *v16; // x4
  Il2CppObject *FileName; // x25
  Il2CppObject *v18; // x26
  const MethodInfo *v19; // x1
  int32_t SvtId; // w27
  const MethodInfo *v21; // x2
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  int32_t v27; // w26
  System_String_o *v28; // x25
  const MethodInfo *v29; // x1
  int32_t v30; // w27
  const MethodInfo *v31; // x2
  int32_t v32; // w3
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v36; // x8
  int32_t VoicePrefix; // [xsp+4h] [xbp-7Ch] BYREF
  System_Collections_Generic_KeyValuePair_string__int__o pairVoiceIdWeight; // [xsp+8h] [xbp-78h] BYREF
  int32_t voicePatternId; // [xsp+1Ch] [xbp-64h] BYREF
  System_Collections_Generic_KeyValuePair_object__int__o v41; // 0:x1.16

  if ( (byte_4A5D91F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantVoicePatternMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_VoicePlayCondMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_string__int___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_string__int____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_KeyValuePair_string__int___get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_KeyValuePair_string__int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Voice_TypeInfo);
    sub_1B885B0(&StringLiteral_24943/*"{0:D0}_{1}"*/);
    byte_4A5D91F = 1;
  }
  voicePatternId = 0;
  pairVoiceIdWeight.fields.key = 0LL;
  *(_QWORD *)&pairVoiceIdWeight.fields.value = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantVoicePatternMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_VoicePlayCondMaster___);
  v10 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_KeyValuePair_string__int___TypeInfo);
  System_Collections_Generic_List_KeyValuePair_object__int_____ctor(
    v10,
    (const MethodInfo_34529C0 *)Method_System_Collections_Generic_List_KeyValuePair_string__int____ctor__);
  *voiceInfoList = (System_Collections_Generic_List_KeyValuePair_string__int___o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)voiceInfoList, (int32_t)v10, v11, v12);
  if ( !types )
    goto LABEL_25;
  v13 = *(_QWORD *)&types->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1B88814(Instance, v41.fields.key);
      v15 = types->m_Items[v14 + 1];
      if ( !BattleServantData__TryCheckVoicePatternId(this, &voicePatternId, *(const MethodInfo **)&v41.fields.value) )
        goto LABEL_16;
      if ( !Voice_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
      FileName = (Il2CppObject *)Voice__getFileName(v15, 0LL);
      v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      SvtId = BattleServantData__getSvtId(this, v19);
      Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v21);
      if ( !v18 )
        goto LABEL_25;
      VoicePrefix = ServantAssetLoadManager__getVoicePrefix(
                      (ServantAssetLoadManager_o *)v18,
                      SvtId,
                      (int32_t)Instance,
                      0LL);
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &VoicePrefix, v22, v23, v24);
      v26 = System_String__Format_61721404((System_String_o *)StringLiteral_24943/*"{0:D0}_{1}"*/, v25, FileName, 0LL);
      v27 = voicePatternId;
      v28 = v26;
      v30 = BattleServantData__getSvtId(this, v29);
      Instance = (DataManager_o *)BattleServantData__getDispLimitCount(this, 1, v31);
      if ( !MasterData_object )
        goto LABEL_25;
      Instance = (DataManager_o *)ServantVoicePatternMaster__IsSatisfyPlayCondition(
                                    (ServantVoicePatternMaster_o *)MasterData_object,
                                    v27,
                                    v30,
                                    v28,
                                    (int32_t)Instance,
                                    -1,
                                    0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_16:
        Instance = (DataManager_o *)BattleServantData__IsPlayableVoice(
                                      this,
                                      (VoicePlayCondMaster_o *)Master_object,
                                      v15,
                                      &pairVoiceIdWeight,
                                      v16);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (DataManager_o *)*voiceInfoList;
          if ( !*voiceInfoList )
            goto LABEL_25;
          v41 = (System_Collections_Generic_KeyValuePair_object__int__o)pairVoiceIdWeight;
          v33 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v34 = Method_System_Collections_Generic_List_KeyValuePair_string__int___Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !v33 )
            goto LABEL_25;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v33 + 24) )
          {
            System_Collections_Generic_List_KeyValuePair_object__int____AddWithResize(
              (System_Collections_Generic_List_T__o *)Instance,
              v41,
              *(const MethodInfo_3453240 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = v33 + 16 * m_CancellationTokenSource_low;
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(System_Collections_Generic_KeyValuePair_object__int__o *)(v36 + 32) = v41;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 32), 0, v41.fields.value, v32);
          }
        }
      }
      LODWORD(v13) = types->max_length;
    }
    while ( (__int64)++v14 < (int)v13 );
  }
  if ( !*voiceInfoList )
LABEL_25:
    sub_1B8880C(Instance, v41.fields.key);
  return (*voiceInfoList)->fields._size > 0;
}


bool __fastcall BattleServantData__TryGetTdIdChangeByBattlePoint(
        BattleServantData_o *this,
        TreasureDvcEntity_o *tdEnt,
        int32_t *tdIdChangeByBattlePoint,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *BattlePointList; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  BattlePointData_o *v19; // x0
  __int64 v20; // x1
  int32_t id; // w22
  int32_t Phase; // w2
  bool v23; // w22
  int v24; // w23
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  int32_t tdIdChangeByBattlePointa; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5D83D & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__GetEnumerator__);
    byte_4A5D83D = 1;
  }
  tdIdChangeByBattlePointa = 0;
  if ( !tdEnt )
    goto LABEL_30;
  BattlePointList = (System_Collections_ObjectModel_ReadOnlyCollection_T__o *)BattleServantData__get_BattlePointList(
                                                                                this,
                                                                                (const MethodInfo *)tdEnt);
  if ( !BattlePointList )
    sub_1B8880C(0LL, v8);
  Enumerator = System_Collections_ObjectModel_ReadOnlyCollection_object___GetEnumerator(
                 BattlePointList,
                 (const MethodInfo_36E6C80 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattlePointData__c **)v17 - 1) != System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_BattlePointData__TypeInfo, 0LL);
    }
    v19 = (BattlePointData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                 Enumerator,
                                 *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_1B8880C(0LL, v20);
    id = v19->fields.id;
    Phase = BattlePointData__get_Phase(v19, 0LL);
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
    v28 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
    sub_1B8880C(this, actBuff);
  }
}


void __fastcall BattleServantData__UpdateBattlePointSetting(
        BattleServantData_o *this,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *battlePointList; // x19
  System_Action_object__o *v13; // x20

  if ( (byte_4A5D847 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattlePointData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattlePointData__ForEach__);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass316_0__UpdateBattlePointSetting_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass316_0_TypeInfo);
    byte_4A5D847 = 1;
  }
  v5 = sub_1B887FC(BattleServantData___c__DisplayClass316_0_TypeInfo);
  BattleServantData___c__DisplayClass316_0___ctor((BattleServantData___c__DisplayClass316_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9),
        *(_QWORD *)(v5 + 24) = battleEntity,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)battleEntity, v10, v11),
        battlePointList = (System_Collections_Generic_List_object__o *)this->fields.battlePointList,
        v13 = (System_Action_object__o *)sub_1B887FC(System_Action_BattlePointData__TypeInfo),
        System_Action_object____ctor(
          v13,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass316_0__UpdateBattlePointSetting_b__0__,
          0LL),
        !battlePointList) )
  {
    sub_1B8880C(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    battlePointList,
    (System_Action_T__o *)v13,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattlePointData__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__UpdateBattlePointUserInterface(
        BattleServantData_o *this,
        int32_t uiUpdateType,
        const MethodInfo *method)
{
  __int64 *v5; // x8
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  System_String_o *v7; // x20
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D83B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_15177/*"UpdateBattlePoint"*/);
    sub_1B885B0(&StringLiteral_15178/*"UpdateBattlePointImmediately"*/);
    byte_4A5D83B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( uiUpdateType != 2 )
  {
    if ( uiUpdateType == 1 )
      v5 = &StringLiteral_15178/*"UpdateBattlePointImmediately"*/;
    else
      v5 = &StringLiteral_15177/*"UpdateBattlePoint"*/;
    paramobjelist = this->fields.paramobjelist;
    if ( !paramobjelist )
      sub_1B8880C(0LL, *(_QWORD *)&uiUpdateType);
    v7 = (System_String_o *)*v5;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)paramobjelist,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v11.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v9 )
      {
        if ( !current )
          sub_1B8880C(v9, v10);
        UnityEngine_GameObject__SendMessage_69439696(
          (UnityEngine_GameObject_o *)current,
          v7,
          (Il2CppObject *)this,
          1,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  struct System_Int32_array *classBoardSquareIds; // x1
  int32_t v10; // w2
  char v11; // w3
  struct AddSkillData_array *v12; // x1
  int32_t v13; // w2
  char v14; // w3
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  ServantStatusBattleListViewItem_o *p_classBoardAddCommandSpells; // x0
  Il2CppObject *Master_object; // x22
  int32_t npcSvtClassId; // w19
  int32_t classId; // w21
  struct ServantEntity_o *svtdata; // x8
  int klass_high; // w26
  _BOOL8 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x3
  ServantStatusBattleListViewItem_c *klass; // x29
  unsigned __int64 v26; // x28
  __int64 v27; // x24
  int32_t v28; // w2
  char v29; // w3
  __int64 v30; // x1
  System_Collections_Generic_List_object__o *skillInfoList; // x25
  System_Predicate_object__o *v32; // x26
  System_Collections_ICollection_o *v33; // x24
  const MethodInfo *v34; // x3
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  int32_t v36; // w2
  char v37; // w3
  BattleData_o *v38; // [xsp+8h] [xbp-B8h]
  ServantStatusBattleListViewItem_o *p_classBoardAddPassiveSkills; // [xsp+20h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+40h] [xbp-80h] BYREF
  int32_t skillIndex; // [xsp+5Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4A5D91A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
    sub_1B885B0(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass782_0__UpdateClassBoardSkillBuff_b__0__);
    this = (BattleServantData_o *)sub_1B885B0(&BattleServantData___c__DisplayClass782_0_TypeInfo);
    byte_4A5D91A = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !afterUserSvtData )
    goto LABEL_44;
  classBoardSquareIds = afterUserSvtData->fields.classBoardSquareIds;
  v8->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v8->fields._classBoardSquareIds_k__BackingField,
    (int32_t)classBoardSquareIds,
    (int32_t)data,
    fromLoad);
  if ( !fromLoad )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
    this = (BattleServantData_o *)BattleUserServantData__getBattleSvtId(afterUserSvtData, 0LL);
    if ( Master_object )
    {
      this = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                      (int32_t)this,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
      this = (BattleServantData_o *)BattleServantData__get_BuffData(v8, (const MethodInfo *)afterUserSvtData);
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v40,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
            klass_high = -1;
            v41 = v40;
            v38 = data;
            while ( 1 )
            {
              v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v41,
                      (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
              if ( !v22 )
                break;
              if ( !v41.fields._current )
                sub_1B8880C(v22, v23);
              if ( LODWORD(v41.fields._current[1].klass) == 26 && klass_high < SHIDWORD(v41.fields._current[1].klass) )
                klass_high = HIDWORD(v41.fields._current[1].klass);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v41,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
              v33 = (System_Collections_ICollection_o *)BattleServantData__AddClassBoardSkillInfo(
                                                          v8,
                                                          afterUserSvtData,
                                                          &skillIndex,
                                                          v24);
              this = (BattleServantData_o *)BasicHelper__IsNullOrEmpty(v33, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !v33 )
                  goto LABEL_44;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v40,
                  (System_Collections_Generic_List_object__o *)v33,
                  (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
                v41 = v40;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v41,
                          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
                {
                  if ( v41.fields._current )
                    BattleData__ActPassiveBuff(v38, (BattleSkillInfoData_o *)v41.fields._current, 0LL, 0, 0, 0LL);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v41,
                  (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
              }
              this = (BattleServantData_o *)BattleServantData__get_BuffData(v8, (const MethodInfo *)afterUserSvtData);
              if ( this )
              {
                BattleBuffData__updateAuraBuffList((BattleBuffData_o *)this, 0LL);
                BattleServantData__updateBuff(v8, 1, 1, v34);
                classBoardAddPassiveSkills = afterUserSvtData->fields.classBoardAddPassiveSkills;
                v8->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
                sub_1B88554(p_classBoardAddPassiveSkills, (int32_t)classBoardAddPassiveSkills, v36, v37);
                classBoardAddCommandSpells = afterUserSvtData->fields.classBoardAddCommandSpells;
                p_classBoardAddCommandSpells = (ServantStatusBattleListViewItem_o *)&v8->fields.classBoardAddCommandSpells;
                goto LABEL_42;
              }
            }
            else
            {
              v26 = 0LL;
              while ( 1 )
              {
                v27 = sub_1B887FC(BattleServantData___c__DisplayClass782_0_TypeInfo);
                BattleServantData___c__DisplayClass782_0___ctor((BattleServantData___c__DisplayClass782_0_o *)v27, 0LL);
                if ( v26 >= LODWORD(klass->_1.namespaze) )
                  sub_1B88814(this, afterUserSvtData);
                if ( !v27 )
                  break;
                v30 = *((_QWORD *)&klass->_1.byval_arg.data + v26);
                *(_QWORD *)(v27 + 16) = v30;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 16), v30, v28, v29);
                skillInfoList = (System_Collections_Generic_List_object__o *)v8->fields.skillInfoList;
                v32 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleSkillInfoData__TypeInfo);
                System_Predicate_object____ctor(
                  v32,
                  (Il2CppObject *)v27,
                  Method_BattleServantData___c__DisplayClass782_0__UpdateClassBoardSkillBuff_b__0__,
                  0LL);
                if ( !skillInfoList )
                  break;
                System_Collections_Generic_List_object___RemoveAll(
                  skillInfoList,
                  (System_Predicate_T__o *)v32,
                  (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleSkillInfoData__RemoveAll__);
                if ( (__int64)++v26 >= SLODWORD(klass->_1.namespaze) )
                  goto LABEL_33;
              }
            }
          }
        }
      }
    }
LABEL_44:
    sub_1B8880C(this, afterUserSvtData);
  }
  v12 = afterUserSvtData->fields.classBoardAddPassiveSkills;
  v8->fields.classBoardAddPassiveSkills = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->fields.classBoardAddPassiveSkills, (int32_t)v12, v10, v11);
  classBoardAddCommandSpells = afterUserSvtData->fields.classBoardAddCommandSpells;
  p_classBoardAddCommandSpells = (ServantStatusBattleListViewItem_o *)&v8->fields.classBoardAddCommandSpells;
LABEL_42:
  v8->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_1B88554(p_classBoardAddCommandSpells, (int32_t)classBoardAddCommandSpells, v13, v14);
}


void __fastcall BattleServantData__UpdateFixNpSpeed(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w8
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A5D838 & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5D838 = 1;
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
  ServantAssetArgs_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D833 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetArgs_TypeInfo);
    byte_4A5D833 = 1;
  }
  v3 = (ServantAssetArgs_o *)sub_1B887FC(ServantAssetArgs_TypeInfo);
  ServantAssetArgs___ctor(v3, this, 0LL);
  this->fields._LoadedAssetArgs_k__BackingField = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._LoadedAssetArgs_k__BackingField, (int32_t)v3, v4, v5);
  return this->fields._LoadedAssetArgs_k__BackingField;
}


void __fastcall BattleServantData__UpdateNpImmediately(
        BattleServantData_o *this,
        int32_t inputNp,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass547_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_4A5D8AE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_GameObject__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_1B885B0(&Method_BasicHelper_ForEach_GameObject___);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass547_0__UpdateNpImmediately_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass547_0_TypeInfo);
    byte_4A5D8AE = 1;
  }
  v5 = (BattleServantData___c__DisplayClass547_0_o *)sub_1B887FC(BattleServantData___c__DisplayClass547_0_TypeInfo);
  BattleServantData___c__DisplayClass547_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v5->fields.inputNp = inputNp;
  v8 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.paramobjelist,
         (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v9 = (System_Action_object__o *)sub_1B887FC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleServantData___c__DisplayClass547_0__UpdateNpImmediately_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_GameObject___);
}


void __fastcall BattleServantData__UpdateStatusUIByTransform(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D8A9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_15191/*"UpdateStatusByTransform"*/);
    byte_4A5D8A9 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_1B8880C(v5, v6);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_15191/*"UpdateStatusByTransform"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__UpdateTdGauge(
        BattleServantData_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass550_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_T__o *v10; // x19
  System_Action_object__o *v11; // x20

  if ( (byte_4A5D8B1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_GameObject__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_1B885B0(&Method_BasicHelper_ForEach_GameObject___);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass550_0__UpdateTdGauge_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass550_0_TypeInfo);
    byte_4A5D8B1 = 1;
  }
  v7 = (BattleServantData___c__DisplayClass550_0_o *)sub_1B887FC(BattleServantData___c__DisplayClass550_0_TypeInfo);
  BattleServantData___c__DisplayClass550_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  v7->fields.now = now;
  v7->fields.max = max;
  v10 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.paramobjelist,
          (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v11 = (System_Action_object__o *)sub_1B887FC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_BattleServantData___c__DisplayClass550_0__UpdateTdGauge_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v10,
    (System_Action_T__o *)v11,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantData__UpdateTreasureDevice(
        BattleServantData_o *this,
        int32_t id,
        int32_t lv,
        const MethodInfo *method)
{
  void *TdDataMasterBase; // x0
  __int64 v8; // x1
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

  if ( (byte_4A5D852 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D852 = 1;
  }
  this->fields.treasuredvcId = id;
  this->fields.treasuredvcLevel = lv;
  if ( id < 1 )
  {
    this->fields.TDvc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.TDvc, 0, lv, (int32_t)method);
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
               (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    this->fields.TDvc = (struct TreasureDvcEntity_o *)Entity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.TDvc, (int32_t)Entity, v10, v11);
    TdDataMasterBase = BattleServantData__get_TdLvDataMasterBase(this, v12);
    if ( !TdDataMasterBase )
      goto LABEL_12;
    v13 = TreasureDvcLvMaster__GetEntity(
            (TreasureDvcLvMaster_o *)TdDataMasterBase,
            this->fields.treasuredvcId,
            this->fields.treasuredvcLevel,
            0LL);
    this->fields._TDvcLv = v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._TDvcLv, (int32_t)v13, v14, v15);
    v17 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v17;
    *(_QWORD *)&v25.fields.fakeValue = v16;
    v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
    EntityFromIDID = ServantTreasureDvcMaster__getEntityFromIDID(v18, this->fields.treasuredvcId, 0LL);
    this->fields._SvtTDvc = EntityFromIDID;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._SvtTDvc, (int32_t)EntityFromIDID, v20, v21);
    BattleServantData__checkServantTreasureDvcEntity(this, v22);
    TdDataMasterBase = BattleServantData__get_TDvcLv(this, v23);
    if ( !TdDataMasterBase )
LABEL_12:
      sub_1B8880C(TdDataMasterBase, v8);
    v24 = *((_DWORD *)TdDataMasterBase + 6);
  }
  this->fields.nplineCount = v24;
}


void __fastcall BattleServantData__UsedTpWeapon(
        BattleServantData_o *this,
        int32_t addPer,
        BattleData_o *battleData,
        bool isTempNpSetOnly,
        const MethodInfo *method)
{
  int32_t v9; // w0
  BattleBuffData_o *buffData; // x23
  int v11; // w25
  BattleBuffData_CheckIndividualitiesData_o *v12; // x24
  BattleBuffData_o *v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  int32_t v17; // w8

  if ( (byte_4A5D89B & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D89B = 1;
  }
  v9 = BattleUtility__FloorToInt((float)((float)this->fields.np / (float)this->fields.lineMaxNp) * 100.0, 0LL);
  buffData = this->fields.buffData;
  v11 = v9;
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_12;
  if ( v11 <= 100 )
    v11 = 100;
  v17 = v11 + addPer + 100 * BattleBuffData__getActValue_42450036(buffData, 60, v12, 0LL);
  if ( v17 >= 500 )
    v17 = 500;
  this->fields.tmp_npper = v17;
  if ( isTempNpSetOnly )
  {
    v13 = BattleServantData__get_BuffData(this, v15);
    if ( v13 )
    {
      BattleBuffData__ResetTargetUseBuff(v13, 96, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(v13, v14);
  }
  BattleServantData__SetTdAfterStatus(this, battleData, v16);
}


bool __fastcall BattleServantData___ChangeBuffValue_g__IsMatchIndividualityCond_561_0(
        BattleBuffData_BuffData_o *data,
        BattleServantData___c__DisplayClass561_0_o *a2,
        const MethodInfo *method)
{
  System_Int32_array *Individualty; // x0
  System_Int32_array *v5; // x20

  if ( !data )
    sub_1B8880C(0LL, a2);
  Individualty = BattleBuffData_BuffData__GetIndividualty(data, 0, a2->fields.isExcludeUnSubStateIndiv, 0, 0LL);
  v5 = Individualty;
  if ( !a2->fields.isAny )
    return Individuality__ContainsIndividualities(v5, a2->fields.targetIndivi, 0LL);
  if ( Individuality__CheckIndividualities(Individualty, a2->fields.targetIndivi, 0LL) )
    return 1;
  return !a2->fields.isAny && Individuality__ContainsIndividualities(v5, a2->fields.targetIndivi, 0LL);
}


bool __fastcall BattleServantData___GetAvailableActiveSkillInfos_b__424_0(
        BattleServantData_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  if ( !x )
    sub_1B8880C(this, 0LL);
  return !x->fields.isPassive
      && x->fields.isUseSkill
      && BattleSkillInfoData__IsAvailable(x, 0LL)
      && BattleServantData__canUseSkill(this, x->fields.index, v6);
}


bool __fastcall BattleServantData___SetInvincibleAvoidanceBuff_g__CheckAvoidanceDeathDamageFunc_689_0(
        BattleServantData_o *this,
        float checkDamage,
        BattleServantData___c__DisplayClass689_0_o *a3,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21
  int32_t v9; // w0
  const MethodInfo *v10; // x6
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct BattleActionData_DamageData_o *damageData; // x8
  int32_t v16; // w1
  bool v17; // w19
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
  v11 = BattleServantData__CheckAvoidanceAttackDeathDamage(
          this,
          &usedBuff,
          v9,
          v8,
          a3->fields.noDamageBuffCheckTargetSide,
          a3->fields.pierceCond,
          v10);
  damageData = a3->fields.damageData;
  if ( !damageData )
    sub_1B8880C(v11, v12);
  v16 = (int)usedBuff;
  v17 = v11;
  damageData->fields._NoDamageAffectedBuff_k__BackingField = usedBuff;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&damageData->fields._NoDamageAffectedBuff_k__BackingField,
    v16,
    v13,
    v14);
  return v17;
}


BattlePointData_o *__fastcall BattleServantData___setSaveData_b__306_2(
        BattleServantData_o *this,
        BattlePointData_SaveData_o *x,
        const MethodInfo *method)
{
  BattlePointData_o *v5; // x21

  if ( (byte_4A5D930 & 1) == 0 )
  {
    sub_1B885B0(&BattlePointData_TypeInfo);
    byte_4A5D930 = 1;
  }
  v5 = (BattlePointData_o *)sub_1B887FC(BattlePointData_TypeInfo);
  BattlePointData___ctor_42809744(v5, x, this, 0LL);
  return v5;
}


void __fastcall BattleServantData___setTransformServant_g__RemoveBuffGrantedByBeforePassiveSkill_326_0(
        BattleServantData_o *this,
        BattleUserServantData_o *userSvt,
        BattleServantData___c__DisplayClass326_0_o *a3,
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
  if ( (byte_4A5D931 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D931 = 1;
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
  this = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  if ( !battle_info )
LABEL_12:
    sub_1B8880C(this, userSvt);
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
    sub_1B8880C(MaxHp, v12);
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
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D8A5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17810/*"changeHp"*/);
    byte_4A5D8A5 = 1;
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
    sub_1B8880C(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v13 )
    {
      if ( !current )
        sub_1B8880C(v13, v14);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17810/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D8B2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24309/*"updateNp"*/);
    byte_4A5D8B2 = 1;
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
    sub_1B8880C(0LL, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v16 )
    {
      if ( !current )
        sub_1B8880C(v16, v17);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_24309/*"updateNp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *paramobjelist; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x8

  if ( (byte_4A5D88F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Contains__);
    byte_4A5D88F = 1;
  }
  paramobjelist = (System_Collections_Generic_List_object__o *)this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_10;
  if ( System_Collections_Generic_List_object___Contains(
         paramobjelist,
         (Il2CppObject *)obj,
         (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    return;
  }
  paramobjelist = (System_Collections_Generic_List_object__o *)this->fields.paramobjelist;
  if ( !paramobjelist
    || (items = paramobjelist->fields._items,
        v9 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++paramobjelist->fields._version,
        !items) )
  {
LABEL_10:
    sub_1B8880C(paramobjelist, obj);
  }
  size = paramobjelist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      paramobjelist,
      (Il2CppObject *)obj,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    paramobjelist->fields._size = size + 1;
    v11[4] = (Il2CppClass *)obj;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 4), (int32_t)obj, v6, v7);
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
  System_Collections_Generic_List_object__o *skillInfoList; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x27
  BattleSkillInfoData_o *SkillData; // x27
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x27
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  const MethodInfo *v32; // [xsp+0h] [xbp-B0h]
  BattleSkillInfoData_o *beforeDeathSkillInfoa; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5D853 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__);
    byte_4A5D853 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    skillInfoList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v17 )
      break;
    current = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B8880C(v17, v18);
    if ( LODWORD(v35.fields._current[1].klass) == type
      && HIDWORD(v35.fields._current[1].klass) == index
      && ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v35.fields._current->klass->vtable[5].method)(
           v35.fields._current,
           v35.fields._current->klass->vtable[6].methodPtr) == skillId
      && HIDWORD(current[2].klass) == skillLv )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v35,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
      return 0LL;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_30;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    skillInfoList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
  v35 = v34;
  do
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( !v21 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v35,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
      goto LABEL_21;
    }
    v23 = v35.fields._current;
    if ( !v35.fields._current )
      sub_1B8880C(v21, v22);
  }
  while ( LODWORD(v35.fields._current[1].klass) != type || HIDWORD(v35.fields._current[1].klass) != index );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_30;
  System_Collections_Generic_List_object___Remove(
    skillInfoList,
    v23,
    (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Remove__);
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
                                                                 v32);
  if ( !SkillData
    || (((void (__fastcall *)(BattleSkillInfoData_o *, BattleServantData_o *, Il2CppMethodPointer))SkillData->klass->vtable._11_PreAddProcess.method)(
          SkillData,
          this,
          SkillData->klass->vtable._12_IsChangeable.methodPtr),
        BattleServantData__ChangeSkillRemainingTurn(this, SkillData, beforeDeathSkillInfoa, v24),
        (skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList) == 0LL)
    || (items = skillInfoList->fields._items,
        v28 = Method_System_Collections_Generic_List_BattleSkillInfoData__Add__,
        ++skillInfoList->fields._version,
        !items) )
  {
LABEL_30:
    sub_1B8880C(skillInfoList, *(_QWORD *)&type);
  }
  size = skillInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      skillInfoList,
      (Il2CppObject *)SkillData,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    skillInfoList->fields._size = size + 1;
    v30[4] = (Il2CppClass *)SkillData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)SkillData, v25, v26);
  }
  return SkillData;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData__canUseSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  System_Boolean_array *SkillSealSelect; // x0
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v7; // x21

  if ( (byte_4A5D8E7 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8E7 = 1;
  }
  if ( index != -1 )
  {
    SkillSealSelect = BattleServantData__getSkillSealSelect(this, *(const MethodInfo **)&index);
    if ( !SkillSealSelect )
      goto LABEL_12;
    if ( SkillSealSelect->max_length <= index )
      sub_1B88814(SkillSealSelect, *(_QWORD *)&index);
    if ( SkillSealSelect->m_Items[index + 4] )
      return 0;
  }
  if ( !BattleServantData__isAction(this, *(const MethodInfo **)&index) )
    return 0;
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_12:
    sub_1B8880C(SkillSealSelect, *(_QWORD *)&index);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  Il2CppObject *Entity; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x20
  const MethodInfo *v13; // x1
  int32_t SvtId; // w22
  struct ServantLimitEntity_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct ServantEntity_o *svtdata; // x8
  ServantLimitAddMaster_o *v19; // x21
  __int64 v20; // x22
  __int64 v21; // x23
  int32_t v22; // w23
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  int32_t v25; // w23
  const MethodInfo *v26; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x3
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v32; // w1
  ServantLimitMaster_o *v33; // x0
  struct ServantLimitEntity_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A5D850 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D850 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v37.fields.currentCryptoKey = v7;
  *(_QWORD *)&v37.fields.fakeValue = v6;
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v37, 0LL);
  if ( !v8 )
    goto LABEL_23;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v8,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = (struct ServantEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtdata, (int32_t)Entity, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  v12 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v13);
  Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                               this->fields.limitcount,
                               0LL);
  if ( !v12 )
    goto LABEL_23;
  if ( !ServantLimitMaster__TryGetEntity(
          (ServantLimitMaster_o *)v12,
          &this->fields.svtlimitent,
          SvtId,
          (int32_t)Instance,
          0LL) )
  {
    v15 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v12, 100100, 0, 0LL);
    this->fields.svtlimitent = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtlimitent, (int32_t)v15, v16, v17);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_23;
  v19 = (ServantLimitAddMaster_o *)Instance;
  v21 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v20 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v21;
  *(_QWORD *)&v38.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
  Instance = (Il2CppObject *)BattleServantData__getDispLimitCount(this, 1, v23);
  if ( !v19 )
    goto LABEL_23;
  ServantLimitAddMaster__TryGetEntity(v19, &this->fields.svtlimitaddent, v22, (int32_t)Instance, 0LL);
  v25 = BattleServantData__getSvtId(this, v24);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v26);
  if ( !ServantLimitMaster__TryGetEntity(
          (ServantLimitMaster_o *)v12,
          &this->fields.svtlimitDispent,
          v25,
          DispLimitCount,
          0LL) )
  {
    if ( !this->fields.svtlimitaddent )
    {
      v32 = 100100;
      v33 = (ServantLimitMaster_o *)v12;
      battleCharaLimitCount = 0;
      goto LABEL_21;
    }
    Instance = (Il2CppObject *)BattleServantData__getSvtId(this, v28);
    svtlimitaddent = this->fields.svtlimitaddent;
    if ( svtlimitaddent )
    {
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v32 = (int)Instance;
      v33 = (ServantLimitMaster_o *)v12;
LABEL_21:
      v34 = ServantLimitMaster__GetEntity(v33, v32, battleCharaLimitCount, 0LL);
      this->fields.svtlimitDispent = v34;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtlimitDispent, (int32_t)v34, v35, v36);
      goto LABEL_22;
    }
LABEL_23:
    sub_1B8880C(Instance, v4);
  }
LABEL_22:
  BattleServantData__UpdateTreasureDevice(this, this->fields.treasuredvcId, this->fields.treasuredvcLevel, v29);
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D8B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17815/*"changeNp"*/);
    byte_4A5D8B3 = 1;
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
      sub_1B8880C(0LL, *(_QWORD *)&intp);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)paramobjelist,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v10 )
      {
        if ( !current )
          sub_1B8880C(v10, v11);
        UnityEngine_GameObject__SendMessage_69439696(
          (UnityEngine_GameObject_o *)current,
          (System_String_o *)StringLiteral_17815/*"changeNp"*/,
          (Il2CppObject *)this,
          1,
          0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  }
}


void __fastcall BattleServantData__changeTransformServant(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t transformSvtId; // w20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v4; // kr00_16

  if ( (byte_4A5D84F & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D84F = 1;
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

  if ( (byte_4A5D8A8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17818/*"changeUpdateStatus"*/);
    byte_4A5D8A8 = 1;
  }
  BattleServantData__sendParamMessage(this, (System_String_o *)StringLiteral_17818/*"changeUpdateStatus"*/, v2);
}


bool __fastcall BattleServantData__checkAllIndividualities(
        BattleServantData_o *this,
        System_Int32_array *indv,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Int32_array *Individualities; // x0

  Individualities = BattleServantData__getIndividualities(this, 0LL, 1, 0, v3);
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

  if ( (byte_4A5D8D1 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8D1 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v7, v8);
  return BattleBuffData__checkActBuff_42454204(buffData, 47, v6, &usedBuff, 0LL, 0LL);
}


bool __fastcall BattleServantData__checkBreakAvoidance(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        BattleBuffData_BuffData_o **usedBuff,
        int32_t noDamageBuffCheckTargetSide,
        const MethodInfo *method)
{
  char v6; // w22
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1

  v6 = noDamageBuffCheckTargetSide;
  if ( (byte_4A5D8DD & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8DD = 1;
  }
  if ( (v6 & 1) != 0 )
  {
    buffData = this->fields.buffData;
    v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v13, this, targetSvt, command, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      sub_1B8880C(v14, v15);
    return BattleBuffData__checkActBuff_42454204(buffData, 17, v13, usedBuff, 0LL, 0LL);
  }
  else
  {
    *usedBuff = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)usedBuff, 0, (int32_t)targetSvt, (int32_t)usedBuff);
    return 0;
  }
}


bool __fastcall BattleServantData__checkBuffAvoid(
        BattleServantData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  BattleBuffData_o *buffData; // x19
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v10; // x4
  System_Int32_array *Individualities_42960956; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  System_Int32_array *v14; // x22

  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, 0LL, v4);
  Individualities_42960956 = BattleServantData__getIndividualities_42960956(this, BuffIndividualities, 1, 0, v10);
  v14 = Individualities_42960956;
  if ( !opSvt )
  {
    if ( buffData )
      return BattleBuffData__checkActBuff(buffData, 38, v14, buffIndiv, 0LL);
LABEL_6:
    sub_1B8880C(Individualities_42960956, v12);
  }
  Individualities_42960956 = BattleServantData__getIndividualities_42960956(opSvt, buffIndiv, 1, 0, v13);
  if ( !buffData )
    goto LABEL_6;
  buffIndiv = Individualities_42960956;
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
    sub_1B8880C(0LL, buffIdlist);
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
    sub_1B8880C(0LL, indv);
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
    sub_1B8880C(0LL, entryIndex);
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
  BattleBuffData_BuffData_array *v16; // [xsp+0h] [xbp-40h] BYREF
  BattleBuffData_BuffData_array *onList; // [xsp+8h] [xbp-38h] BYREF

  v16 = 0LL;
  onList = 0LL;
  MaxHp = BattleServantData__getMaxHp(this, (const MethodInfo *)fieldList);
  if ( !this->fields.buffData )
    goto LABEL_12;
  v11 = MaxHp;
  BattleBuffData__checkFieldBuff(this->fields.buffData, fieldList, aliveSvtData, &onList, &v16, logic, 0LL);
  MaxHp = BattleServantData__checkUpdateUpdownHp(this, v11, 1, v12);
  if ( (MaxHp & 1) == 0 )
    return;
  if ( !fieldList )
LABEL_12:
    sub_1B8880C(MaxHp, v10);
  v14 = *(_QWORD *)&fieldList->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
        sub_1B88814(MaxHp, v10);
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
  const MethodInfo *v3; // x4
  System_Int32_array *Individualities; // x0

  Individualities = BattleServantData__getIndividualities(this, 0LL, 1, 0, v3);
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
  __int64 v10; // x1
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5D8DE & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8DE = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__checkActBuff_42454204(buffData, 69, v8, &usedBuff, 0LL, 0LL);
}


bool __fastcall BattleServantData__checkPierceInvincible(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        BattleServantData_o *targetSvt,
        BattleBuffData_BuffData_o **usedBuff,
        int32_t noDamageBuffCheckTargetSide,
        const MethodInfo *method)
{
  char v6; // w22
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1

  v6 = noDamageBuffCheckTargetSide;
  if ( (byte_4A5D8DB & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8DB = 1;
  }
  if ( (v6 & 1) != 0 )
  {
    buffData = this->fields.buffData;
    v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v13, this, targetSvt, command, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      sub_1B8880C(v14, v15);
    return BattleBuffData__checkActBuff_42454204(buffData, 15, v13, usedBuff, 0LL, 0LL);
  }
  else
  {
    *usedBuff = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)usedBuff, 0, (int32_t)targetSvt, (int32_t)usedBuff);
    return 0;
  }
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
  _BOOL4 isEnemy; // w22
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t ActValue_42450036; // w0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  int CorrectedValueFuncGainNp; // w20

  if ( (byte_4A5D8EC & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8EC = 1;
  }
  isEnemy = this->fields.isEnemy;
  if ( !this->fields.isEnemy )
  {
    buffData = this->fields.buffData;
    v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      sub_1B8880C(v6, v7);
    ActValue_42450036 = BattleBuffData__getActValue_42450036(buffData, 50, v5, 0LL);
    CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(this, ActValue_42450036, v9);
    if ( CorrectedValueFuncGainNp >= 1 && !BattleServantData__isGainNp(this, 1, 0LL, v10) )
      CorrectedValueFuncGainNp = 0;
    BattleServantData__addNp(this, CorrectedValueFuncGainNp, 0, v10);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  ServantTreasureDvcMaster_o *v8; // x20
  ServantStatusBattleListViewItem_o *p_SvtTDvc; // x19
  ServantTreasureDvcEntity_o *EntityFromSvtIdOnly; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5D911 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D911 = 1;
  }
  if ( !this->fields._SvtTDvc )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantTreasureDvcMaster___);
    v7 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    v8 = (ServantTreasureDvcMaster_o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = v7;
    *(_QWORD *)&v13.fields.fakeValue = v6;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
    if ( !v8 )
LABEL_9:
      sub_1B8880C(Instance, v4);
    p_SvtTDvc = (ServantStatusBattleListViewItem_o *)&this->fields._SvtTDvc;
    EntityFromSvtIdOnly = ServantTreasureDvcMaster__getEntityFromSvtIdOnly(v8, (int32_t)Instance, 0, 0LL);
    p_SvtTDvc->klass = (ServantStatusBattleListViewItem_c *)EntityFromSvtIdOnly;
    sub_1B88554(p_SvtTDvc, (int32_t)EntityFromSvtIdOnly, v11, v12);
  }
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

  if ( (byte_4A5D8EE & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5D8EE = 1;
  }
  MaxHp = (BattleBuffData_o *)BattleServantData__getMaxHp(this, method);
  if ( !this->fields.buffData )
    goto LABEL_10;
  v5 = (int)MaxHp;
  if ( BattleBuffData__getResumptionHpFromLossMaxHp(this->fields.buffData, 0, 0LL) < 1 )
    return 0;
  MaxHp = this->fields.buffData;
  if ( !MaxHp )
LABEL_10:
    sub_1B8880C(MaxHp, v4);
  ResumptionHpFromLossMaxHp = BattleBuffData__getResumptionHpFromLossMaxHp(MaxHp, 1, 0LL);
  v7 = this->fields.maxhp;
  v8 = ResumptionHpFromLossMaxHp;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = System_Math__Max_62525680(0, v5 - v7, 0LL);
  v10 = System_Math__Min_62526008(v9, v8, 0LL);
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
  bool isNobleAction_42950052; // w8
  int32_t invokeAct; // [xsp+Ch] [xbp-24h] BYREF

  TreasureDevice = BattleServantData__get_TreasureDevice(this, (const MethodInfo *)battleData);
  if ( TreasureDevice )
  {
    if ( !flg )
      goto LABEL_13;
    if ( !TreasureDeviceConditionUtil__IsSatisfyEachCondition(this, battleData, 0LL) )
      goto LABEL_9;
    invokeAct = 0;
    isNobleAction_42950052 = BattleServantData__isNobleAction_42950052(this, &invokeAct, v8);
    LOBYTE(TreasureDevice) = 0;
    if ( isNobleAction_42950052 )
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
  unsigned __int64 max_length; // x10
  unsigned __int64 v6; // x9

  if ( (byte_4A5D90A & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&double___TypeInfo);
    byte_4A5D90A = 1;
  }
  if ( !param || (this = (BattleServantData_o *)sub_1B88658(double___TypeInfo, param->max_length)) == 0LL )
    sub_1B8880C(this, param);
  uniqueId = (unsigned int)this->fields.uniqueId;
  if ( (__int64)(uniqueId << 32) >= 1 )
  {
    max_length = param->max_length;
    v6 = 0LL;
    do
    {
      if ( v6 >= max_length || v6 >= uniqueId )
        sub_1B88814(this, param);
      *((double *)&this->fields.userSvtId.fields.currentCryptoKey + v6) = (double)param->m_Items[v6 + 1];
      ++v6;
    }
    while ( (int)uniqueId != v6 );
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

  if ( (byte_4A5D909 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&long___TypeInfo);
    byte_4A5D909 = 1;
  }
  if ( !param || (this = (BattleServantData_o *)sub_1B88658(long___TypeInfo, param->max_length)) == 0LL )
    sub_1B8880C(this, param);
  uniqueId = (unsigned int)this->fields.uniqueId;
  if ( (__int64)(uniqueId << 32) >= 1 )
  {
    v5 = 0LL;
    do
    {
      if ( v5 >= param->max_length || v5 >= uniqueId )
        sub_1B88814(this, param);
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
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0

  if ( (byte_4A5D891 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Remove__);
    byte_4A5D891 = 1;
  }
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    goto LABEL_8;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)paramobjelist,
         (Il2CppObject *)obj,
         (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_GameObject__Contains__) )
  {
    paramobjelist = this->fields.paramobjelist;
    if ( paramobjelist )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)paramobjelist,
        (Il2CppObject *)obj,
        (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_GameObject__Remove__);
      return;
    }
LABEL_8:
    sub_1B8880C(paramobjelist, obj);
  }
}


void __fastcall BattleServantData__fixUpdateStatus(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D8AA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_19446/*"fixUpdateStatus"*/);
    byte_4A5D8AA = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_1B8880C(v5, v6);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_19446/*"fixUpdateStatus"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1B8880C(v6, v7);
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
    sub_1B8880C(0LL, ids);
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
    sub_1B8880C(0LL, indv);
  return BattleBuffData__getActiveIndividualitiesNum(buffData, indv, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleServantData__getActiveSkillInfos(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  void *All; // x0
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *v5; // x20
  Il2CppObject *v6; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D874 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
    sub_1B885B0(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__getActiveSkillInfos_b__423_0__);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D874 = 1;
  }
  All = BattleServantData___c_TypeInfo;
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    All = BattleServantData___c_TypeInfo;
  }
  v5 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 56LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleServantData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)All + 23);
    v5 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_object____ctor(v5, v6, Method_BattleServantData___c__getActiveSkillInfos_b__423_0__, 0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__423_0 = (struct System_Predicate_BattleSkillInfoData__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__423_0, (int32_t)v5, v8, v9);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_object___FindAll(
                skillInfoList,
                (System_Predicate_T__o *)v5,
                (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_1B8880C(All, method);
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)All,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
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
  if ( (byte_4A5D85D & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D85D = 1;
  }
  svtdata = v2->fields.svtdata;
  if ( !svtdata )
    sub_1B8880C(this, method);
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL);
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
  const MethodInfo *v17; // x4
  int v18; // w8
  System_Double_array *v19; // x19
  BattleRaidInfo_o *RaidInfo; // x20
  __int64 maxHp; // x8
  double v22; // d0
  double v23; // d1
  int32_t np; // w8
  int v25; // w21
  const MethodInfo *v26; // x1
  double totalDamage; // d0
  System_Double_array *v28; // x0
  BattleBuffData_o *buffData; // x19
  BattleServantData_o *BuffIDList; // x0
  const MethodInfo *v31; // x2
  struct BattleBuffData_o *v32; // x19
  bool v33; // w3
  BattleBuffData_o *v34; // x0
  bool v35; // w1
  struct BattleBuffData_o *v36; // x19
  BattleRaidInfo_o *v37; // x20
  BattleBuffData_o *v38; // x19
  __int64 v39; // x8
  __int64 v40; // x8
  BattleServantData___c_c *v41; // x0
  System_Converter_long__int__o *_9__715_0; // x22
  Il2CppObject *v43; // x23
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_Int32_array *v47; // x21
  int32_t SameIndivualityBuffSum; // w22
  const MethodInfo *v49; // x2
  struct System_Int32_array *shiftDeckList; // x8
  int32_t targetIndex; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5D908 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_ConvertAll_long__int___);
    sub_1B885B0(&System_Converter_long__int__TypeInfo);
    sub_1B885B0(&double___TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__getAiParam_b__715_0__);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D908 = 1;
  }
  targetIndex = 0;
  FieldSpace = sub_1B88658(double___TypeInfo, 1LL);
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
      goto LABEL_36;
    case 1:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_100;
      np = *(_DWORD *)(FieldSpace + 44);
      goto LABEL_92;
    case 2:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_100;
      np = *(_DWORD *)(FieldSpace + 40);
      goto LABEL_92;
    case 3:
      v25 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
              this,
              this->klass->vtable._10_set_hp.methodPtr);
      FieldSpace = BattleServantData__getMaxHp(this, v26);
      if ( !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_100;
      v22 = (double)v25 * 1000.0;
      v23 = (double)(int)FieldSpace;
      goto LABEL_23;
    case 4:
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      np = this->fields.np;
      goto LABEL_92;
    case 5:
      FieldSpace = (__int64)BattleServantData__get_TreasureDevice(this, v16);
      if ( !FieldSpace )
        goto LABEL_31;
      if ( !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
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
      if ( !v19 )
        goto LABEL_104;
LABEL_36:
      if ( !v19->max_length )
        goto LABEL_100;
      totalDamage = (double)(int)FieldSpace;
      goto LABEL_93;
    case 8:
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._18_getAiState.method)(
                     this,
                     this->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !FieldSpace || !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_100;
      np = *(_DWORD *)(FieldSpace + 32);
      goto LABEL_92;
    case 9:
      FieldSpace = sub_1B88658(double___TypeInfo, 2LL);
      if ( !FieldSpace )
        goto LABEL_104;
      v19 = (System_Double_array *)FieldSpace;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      *(double *)(FieldSpace + 32) = (double)turn;
      FieldSpace = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._21_getThisTurnActCount.method)(
                     this,
                     this->klass->vtable._22_getAiParam.methodPtr);
      if ( v19->max_length <= 1 )
        goto LABEL_100;
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
      goto LABEL_69;
    case 11:
      BuffIDList = (BattleServantData_o *)BattleServantData__getIndividualities(this, 0LL, 1, 0, v17);
      goto LABEL_69;
    case 12:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v32 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v32 )
        goto LABEL_104;
      v33 = (FieldSpace & 1) == 0;
      v34 = v32;
      v35 = 0;
      goto LABEL_56;
    case 13:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v36 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v36 )
        goto LABEL_104;
      v33 = (FieldSpace & 1) == 0;
      v35 = 1;
      v34 = v36;
LABEL_56:
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffIndividualities(v34, v35, 0, v33, 1, 0LL, 0LL);
      goto LABEL_69;
    case 14:
    case 15:
      if ( !bData )
        goto LABEL_104;
      RaidInfo = BattleData__getRaidInfo(bData, this->fields.raidId, 0LL);
      FieldSpace = sub_1B88658(double___TypeInfo, 1LL);
      if ( !RaidInfo )
        goto LABEL_104;
      v19 = (System_Double_array *)FieldSpace;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      maxHp = RaidInfo->fields.maxHp;
      v22 = (double)(maxHp - RaidInfo->fields.totalDamage) * 1000.0;
      v23 = (double)maxHp;
LABEL_23:
      totalDamage = v22 / v23;
      goto LABEL_93;
    case 16:
      if ( !bData )
        goto LABEL_104;
      v37 = BattleData__getRaidInfo(bData, this->fields.raidId, 0LL);
      FieldSpace = sub_1B88658(double___TypeInfo, 1LL);
      if ( !v37 )
        goto LABEL_104;
      v19 = (System_Double_array *)FieldSpace;
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      totalDamage = (double)v37->fields.totalDamage;
      goto LABEL_93;
    case 20:
      FieldSpace = (__int64)this->fields.buffData;
      if ( !FieldSpace )
        goto LABEL_104;
      FieldSpace = BattleBuffData__getMaxBuffCount((BattleBuffData_o *)FieldSpace, checkParams, 0, 0LL);
      if ( !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_100;
      totalDamage = (double)FieldSpace;
      goto LABEL_93;
    case 21:
      if ( !aiBaseEntity )
        goto LABEL_104;
      v38 = this->fields.buffData;
      FieldSpace = AiBaseEntity__IsIncludeUnsubState(aiBaseEntity, 0LL);
      if ( !v38 )
        goto LABEL_104;
      BuffIDList = (BattleServantData_o *)BattleBuffData__getBuffActiveIDList(v38, FieldSpace & 1, 0LL);
LABEL_69:
      v28 = BattleServantData__convertDouble(BuffIDList, (System_Int32_array *)BuffIDList, v31);
      goto LABEL_70;
    case 23:
      if ( !bData )
        goto LABEL_104;
      FieldSpace = BattleData__get_IsInTactical(bData, 0LL);
      v39 = 536LL;
      if ( (FieldSpace & 1) != 0 )
        v39 = 540LL;
      if ( !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
        goto LABEL_100;
      np = *(_DWORD *)((char *)&bData->klass + v39);
      goto LABEL_92;
    case 24:
      if ( !FieldSpace )
        goto LABEL_104;
      if ( !*(_DWORD *)(FieldSpace + 24) )
        goto LABEL_100;
      v40 = 20LL;
      if ( this->fields.deckIndex < 0 )
        v40 = 16LL;
      np = *(_DWORD *)((char *)&this->klass + v40);
      goto LABEL_92;
    case 25:
      v41 = BattleServantData___c_TypeInfo;
      if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
        v41 = BattleServantData___c_TypeInfo;
      }
      _9__715_0 = v41->static_fields->__9__715_0;
      if ( !_9__715_0 )
      {
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = BattleServantData___c_TypeInfo;
        }
        v43 = (Il2CppObject *)v41->static_fields->__9;
        _9__715_0 = (System_Converter_long__int__o *)sub_1B887FC(System_Converter_long__int__TypeInfo);
        System_Converter_long__int____ctor(_9__715_0, v43, Method_BattleServantData___c__getAiParam_b__715_0__, 0LL);
        static_fields = BattleServantData___c_TypeInfo->static_fields;
        static_fields->__9__715_0 = _9__715_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__715_0, (int32_t)_9__715_0, v45, v46);
      }
      FieldSpace = (__int64)System_Array__ConvertAll_long__int_(
                              checkParams,
                              (System_Converter_TInput__TOutput__o *)_9__715_0,
                              (const MethodInfo_2F76CE4 *)Method_System_Array_ConvertAll_long__int___);
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
      if ( !v19 )
        goto LABEL_104;
      if ( !v19->max_length )
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
      if ( !v19 )
LABEL_104:
        sub_1B8880C(FieldSpace, v16);
      if ( !v19->max_length )
LABEL_100:
        sub_1B88814(FieldSpace, v16);
LABEL_93:
      v19->m_Items[0] = totalDamage;
      break;
    default:
LABEL_31:
      v28 = (System_Double_array *)sub_1B88658(double___TypeInfo, 0LL);
LABEL_70:
      v19 = v28;
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
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5D90B & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D90B = 1;
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
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
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
    sub_1B8880C(TDvcLv, v8);
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

  if ( (byte_4A5D898 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D898 = 1;
  }
  *multiatk = 1;
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v11, v12);
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
  __int64 v7; // x3
  __int64 v8; // x4
  struct System_Collections_Hashtable_o *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x0
  System_Int32_array **v14; // x20
  __int64 methodPtr_low; // x9
  _BOOL4 flash; // w21
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4A5D899 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    this = (BattleServantData_o *)sub_1B885B0(&ServantCardEntity_TypeInfo);
    byte_4A5D899 = 1;
  }
  if ( !command )
    goto LABEL_25;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type, v6, v7, v8);
  if ( !commandtable )
    goto LABEL_25;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B88658(int___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_25;
    if ( this->fields.uniqueId )
    {
      LODWORD(this->fields.userSvtId.fields.currentCryptoKey) = 100;
      return (System_Int32_array *)this;
    }
LABEL_27:
    sub_1B88814(this, command);
  }
  v9 = v4->fields.commandtable;
  v17 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v10, v11, v12);
  if ( !v9 )
    goto LABEL_25;
  v13 = ((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v9->klass->vtable._29_get_Item.method)(
          v9,
          this,
          v9->klass->vtable._30_set_Item.methodPtr);
  v14 = (System_Int32_array **)v13;
  if ( v13 )
  {
    methodPtr_low = LOBYTE(ServantCardEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v13 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantCardEntity_c **)(*(_QWORD *)(*(_QWORD *)v13 + 200LL) + 8 * methodPtr_low - 8) != ServantCardEntity_TypeInfo )
    {
      sub_1B88ACC(v13);
      goto LABEL_27;
    }
  }
  flash = command->fields.flash;
  this = (BattleServantData_o *)BattleCommandData__isThree(command, 0LL);
  if ( flash )
  {
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v14 )
        return v14[8];
LABEL_25:
      sub_1B8880C(this, command);
    }
    this = (BattleServantData_o *)BattleCommandData__isPair(command, 0LL);
    if ( !v14 )
      goto LABEL_25;
    if ( ((unsigned __int8)this & 1) != 0 )
      return v14[7];
    else
      return v14[6];
  }
  else
  {
    if ( !v14 )
      goto LABEL_25;
    if ( ((unsigned __int8)this & 1) != 0 )
      return v14[5];
    else
      return v14[4];
  }
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getAttackSideEffectBuffList(
        BattleServantData_o *this,
        int32_t attackAct,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  BattleBuffData_o *buffData; // x24
  BattleBuffData_CheckIndividualitiesData_o *v11; // x25
  BattleBuffData_BuffData_array *BuffList_42437664; // x0
  __int64 v13; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v15; // x20
  unsigned int v16; // w22
  Il2CppClass **v17; // x8
  Il2CppClass *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A5D88B & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4A5D88B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  buffData = this->fields.buffData;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_25;
  BuffList_42437664 = BattleBuffData__getBuffList_42437664(buffData, attackAct, v11, 1, 0, 0LL, 0LL, 0LL);
  if ( !BuffList_42437664 )
    goto LABEL_25;
  max_length = BuffList_42437664->max_length;
  v15 = BuffList_42437664;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1B88814(BuffList_42437664, v13);
      v17 = &v15->obj.klass + (int)v16;
      v18 = v17[4];
      if ( !v18 )
        break;
      if ( !BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)v17[4], 0LL)
        && !BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)v18, 0LL)
        && (BuffList_42437664 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCardBuff(
                                                                   (BattleBuffData_BuffData_o *)v18,
                                                                   0LL),
            ((unsigned __int8)BuffList_42437664 & 1) == 0)
        || (BuffList_42437664 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isActiveCommandCode(
                                                                   (BattleBuffData_BuffData_o *)v18,
                                                                   0LL),
            ((unsigned __int8)BuffList_42437664 & 1) != 0)
        || (BuffList_42437664 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCardBuff(
                                                                   (BattleBuffData_BuffData_o *)v18,
                                                                   0LL),
            ((unsigned __int8)BuffList_42437664 & 1) != 0)
        && LOBYTE(v18->_1.generic_class)
        || (BuffList_42437664 = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                                   (BattleBuffData_BuffData_o *)v18,
                                                                   0LL),
            ((unsigned __int8)BuffList_42437664 & 1) != 0)
        && LOBYTE(v18->vtable[7].methodPtr) )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v22 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v18,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v24[4] = v18;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v18, v19, v20);
        }
      }
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B8880C(BuffList_42437664, v13);
  }
LABEL_23:
  if ( !v9 )
    goto LABEL_25;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v9,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getAttackSideEffectBuffList_42943084(
        BattleServantData_o *this,
        BuffList_ACTION_array *attackActs,
        BattleCommandData_o *command,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  void *AttackSideEffectBuffList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  __int64 v13; // x8
  unsigned __int64 v14; // x24
  System_Comparison_T__o *v15; // x20
  Il2CppObject *v16; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5D88D & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__getAttackSideEffectBuffList_b__468_0__);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D88D = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !attackActs )
    goto LABEL_18;
  v13 = *(_QWORD *)&attackActs->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1B88814(AttackSideEffectBuffList, v11);
      AttackSideEffectBuffList = BattleServantData__getAttackSideEffectBuffList(
                                   this,
                                   attackActs->m_Items[v14 + 1],
                                   command,
                                   opSvt,
                                   v12);
      if ( !v9 )
        break;
      System_Collections_Generic_List_object___AddRange(
        v9,
        (System_Collections_Generic_IEnumerable_T__o *)AttackSideEffectBuffList,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      LODWORD(v13) = attackActs->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_9;
    }
LABEL_18:
    sub_1B8880C(AttackSideEffectBuffList, v11);
  }
LABEL_9:
  AttackSideEffectBuffList = BattleServantData___c_TypeInfo;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    AttackSideEffectBuffList = BattleServantData___c_TypeInfo;
  }
  v15 = *(System_Comparison_T__o **)(*((_QWORD *)AttackSideEffectBuffList + 23) + 64LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)AttackSideEffectBuffList + 56) )
    {
      j_il2cpp_runtime_class_init_0(AttackSideEffectBuffList);
      AttackSideEffectBuffList = BattleServantData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)AttackSideEffectBuffList + 23);
    v15 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      v15,
      v16,
      Method_BattleServantData___c__getAttackSideEffectBuffList_b__468_0__,
      0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__468_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__468_0, (int32_t)v15, v18, v19);
  }
  if ( !v9 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_55571192(
    v9,
    v15,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v9,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


int32_t __fastcall BattleServantData__getAttackType(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  struct System_Collections_Hashtable_o *commandtable; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct System_Collections_Hashtable_o *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 methodPtr_low; // x9
  BattleServantData_o *v15; // x0
  BattleCommandData_o *v16; // x1
  BattleServantData_o *v17; // x2
  int32_t *v18; // x3
  const MethodInfo *v19; // x4
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4A5D897 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    this = (BattleServantData_o *)sub_1B885B0(&ServantCardEntity_TypeInfo);
    byte_4A5D897 = 1;
  }
  if ( !command )
    goto LABEL_12;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type, v6, v7, v8);
  if ( !commandtable )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return 1;
  v9 = v4->fields.commandtable;
  v20 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  if ( !v9
    || (this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v9->klass->vtable._29_get_Item.method)(
                                        v9,
                                        this,
                                        v9->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(this, command);
  }
  methodPtr_low = LOBYTE(ServantCardEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCardEntity_TypeInfo )
  {
    return this->fields.svtId.fields.fakeValue;
  }
  sub_1B88ACC(this);
  return (unsigned int)BattleServantData__getAttackRaito(v15, v16, v17, v18, v19);
}


int32_t __fastcall BattleServantData__getAttri(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  AttriMaster_o *Master_object; // x0
  int32_t v6; // w20
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  struct ServantEntity_o *svtdata; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4A5D85F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_AttriMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
    byte_4A5D85F = 1;
  }
  buff = 0LL;
  entity = 0LL;
  if ( BattleServantData__TryGetOverwriteSubAttributeBuff(this, &buff, v2) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (AttriMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_AttriMaster___);
    if ( buff && Master_object )
    {
      LODWORD(Master_object) = AttriMaster__GetAttrValue(Master_object, buff->fields.param, 0LL);
      return (int)Master_object;
    }
LABEL_23:
    sub_1B8880C(Master_object, v4);
  }
  Master_object = (AttriMaster_o *)this->fields.deckSvt;
  if ( Master_object )
  {
    Master_object = (AttriMaster_o *)BattleDeckServantData__getChangeAttri(
                                       (BattleDeckServantData_o *)Master_object,
                                       0LL);
    if ( (_DWORD)Master_object )
    {
      v6 = (int)Master_object;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (AttriMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_AttriMaster___);
      if ( Master_object )
      {
        Master_object = (AttriMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &entity,
                                           v6,
                                           (const MethodInfo_311D988 *)Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
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
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_object__o *AuraBuffList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  System_Int32_array *v7; // x19
  unsigned __int64 v8; // x21
  unsigned __int64 max_length; // x8

  if ( (byte_4A5D905 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    byte_4A5D905 = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
    return this->fields.wkzero;
  AuraBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__getAuraBuffList(buffData, 0LL);
  if ( !AuraBuffList )
    goto LABEL_14;
  v6 = AuraBuffList;
  AuraBuffList = (System_Collections_Generic_List_object__o *)sub_1B88658(
                                                                int___TypeInfo,
                                                                (unsigned int)AuraBuffList->fields._size);
  if ( !AuraBuffList )
    goto LABEL_14;
  v7 = (System_Int32_array *)AuraBuffList;
  if ( AuraBuffList->fields._size >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      AuraBuffList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    v6,
                                                                    v8,
                                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !AuraBuffList )
        break;
      max_length = v7->max_length;
      if ( v8 >= max_length )
        sub_1B88814(AuraBuffList, v5);
      v7->m_Items[++v8] = AuraBuffList[1].fields._size;
      if ( (__int64)v8 >= (int)max_length )
        return v7;
    }
LABEL_14:
    sub_1B8880C(AuraBuffList, v5);
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
    sub_1B8880C(this, method);
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
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5D861 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D861 = 1;
  }
  value = 0;
  if ( !isAttack )
    command = 0LL;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, command, command, 0LL, 0LL, 0LL);
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
    sub_1B8880C(buffData, v12);
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
  if ( (byte_4A5D84C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    this = (BattleServantData_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D84C = 1;
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
  this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        svtId,
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_19:
    sub_1B8880C(this, *(_QWORD *)&svtId);
  }
  v6 = (ServantEntity_o *)this;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL) )
    return 0LL;
  DispLimitCount = BattleServantData__getDispLimitCount(v4, 0, v7);
  v10 = *(_QWORD *)&v4->fields.limitcount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v4->fields.limitcount.fields.fakeValue;
  v11 = DispLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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

  if ( (byte_4A5D8D8 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8D8 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return (float)BattleBuffData__getActValue_42450036(buffData, 13, v8, 0LL);
}


BattleBuffData_o *__fastcall BattleServantData__getBuffData(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.buffData;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleServantData__getBuffGRANTSTATEMagnification(
        BattleServantData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        System_String_o **missText,
        bool upOnly,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x23
  const MethodInfo *v12; // x5
  System_Int32_array *Individualities_42960956; // x24
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v15; // x4
  System_Int32_array *v16; // x0
  System_Int32_array *v17; // x25
  BattleBuffData_CheckIndividualitiesData_o *v18; // x26
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w1

  if ( (byte_4A5D8E0 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D8E0 = 1;
  }
  buffData = this->fields.buffData;
  Individualities_42960956 = BattleServantData__getIndividualities_42960956(
                               this,
                               buffIndiv,
                               1,
                               0,
                               (const MethodInfo *)upOnly);
  if ( opSvt )
  {
    BuffIndividualities = BattleServantData__getBuffIndividualities(opSvt, 1, 0, 0, 0LL, v12);
    v16 = BattleServantData__getIndividualities_42960956(opSvt, BuffIndividualities, 1, 0, v15);
  }
  else
  {
    v16 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  }
  v17 = v16;
  v18 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v18, this, opSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v19, v20);
  if ( upOnly )
    v21 = 106;
  else
    v21 = 36;
  return BattleBuffData__getActMag_42450832(
           buffData,
           v21,
           Individualities_42960956,
           v17,
           missText,
           v18,
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

  if ( (byte_4A5D8E2 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8E2 = 1;
  }
  buffData = this->fields.buffData;
  v7 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v7, this, opSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v8, v9);
  return BattleBuffData__getActMag_42451080(buffData, 61, v7, 0LL);
}


System_Int32_array *__fastcall BattleServantData__getBuffIndividualities(
        BattleServantData_o *this,
        bool isActiveOnly,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        BuffAggregationArgs_o *buffAggregationArgs,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B8880C(0LL, isActiveOnly);
  return BattleBuffData__getBuffIndividualities(
           buffData,
           isActiveOnly,
           isIncludeIgnoreIndiv,
           isIgnoreIndivUnreleaseable,
           0,
           buffAggregationArgs,
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

  if ( (byte_4A5D87D & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D87D = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getBuffList_42437664(buffData, buffAction, v8, 1, checkOnly, 0LL, 0LL, 0LL);
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

  if ( (byte_4A5D8CF & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8CF = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v7, v8);
  return BattleBuffData__getActMag_42451080(buffData, 49, v6, 0LL);
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
  __int64 v12; // x1

  if ( (byte_4A5D8E6 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8E6 = 1;
  }
  buffData = this->fields.buffData;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v11, v12);
  return BattleBuffData__getBuffList_42437664(buffData, 87, v10, isAct, 0, 0LL, 0LL, 0LL);
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
      return BattleUtility__FloorToInt_43026096(
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

  if ( (byte_4A5D8D0 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8D0 = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v7, v8);
  return BattleBuffData__getActMag_42451080(buffData, 68, v6, 0LL);
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

  if ( (byte_4A5D8CE & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8CE = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v7, v8);
  return BattleBuffData__getActMag_42451080(buffData, 48, v6, 0LL);
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
  if ( (byte_4A5D8D9 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8D9 = 1;
  }
  if ( !targetSvt
    || (v7 = BattleServantData__CheckPierceSubdamage(targetSvt, command, v6, method),
        buffData = v6->fields.buffData,
        v9 = v7,
        v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v10, v6, targetSvt, 0LL, command, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_1B8880C(this, command);
  }
  if ( v9 )
    v11 = 133;
  else
    v11 = 14;
  return (float)BattleBuffData__getActValue_42450036(buffData, v11, v10, 0LL);
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
    return BattleUtility__FloorToInt_43026096(v9 * v10, 0LL);
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
    return BattleUtility__FloorToInt_43026096(v9 * v10, 0LL);
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
  const MethodInfo *v5; // x5
  BattleBuffData_o *buffData; // x22
  System_Int32_array *BuffIndividualities; // x0
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x4
  System_Int32_array *Individualities_42960956; // x24
  BattleBuffData_CheckIndividualitiesData_o *v15; // x25
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4A5D8E1 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8E1 = 1;
  }
  buffData = this->fields.buffData;
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 1, 0, 0, 0LL, v5);
  Individualities_42960956 = BattleServantData__getIndividualities_42960956(this, BuffIndividualities, 1, 0, v12);
  if ( opSvt )
    buffIndiv = BattleServantData__getIndividualities_42960956(opSvt, buffIndiv, 1, 0, v13);
  v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v15, this, opSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v16, v17);
  return BattleBuffData__getActMag_42450832(buffData, 37, Individualities_42960956, buffIndiv, missText, v15, 0LL, 0LL);
}


float __fastcall BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
        BattleServantData_o *this,
        System_Int32_array *indiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4A5D8E3 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8E3 = 1;
  }
  buffData = this->fields.buffData;
  if ( opSvt )
    indiv = BattleServantData__getIndividualities_42960956(opSvt, indiv, 1, 0, v4);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_42624320(v9, this, opSvt, 0LL, indiv, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v10, v11);
  return BattleBuffData__getActMag_42451080(buffData, 62, v9, 0LL);
}


int32_t __fastcall BattleServantData__getCameraActionId(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_1B8880C(0LL, method);
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
      sub_1B8880C(npcSvtClassId, method);
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
      sub_1B8880C(npcSvtClassId, method);
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
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  struct ServantEntity_o *v16; // x8

  if ( (byte_4A5D85A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5D85A = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_20;
  cardIds = svtdata->fields.cardIds;
  if ( !cardIds )
    goto LABEL_20;
  v10 = *(_QWORD *)&cardIds->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B88814(v6, v7);
      v7 = (unsigned int)cardIds->m_Items[v11 + 1];
      if ( (((unsigned int)commandTypeBit >> (v7 - 1)) & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_20;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          items->m_Items[size + 1] = v7;
        }
      }
      LODWORD(v10) = cardIds->max_length;
    }
    while ( (__int64)++v11 < (int)v10 );
  }
  if ( !v5 )
    goto LABEL_20;
  if ( v5->fields._size > 0 )
    return System_Collections_Generic_List_int___ToArray(
             v5,
             (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  v16 = this->fields.svtdata;
  if ( !v16 )
LABEL_20:
    sub_1B8880C(v6, v7);
  return v16->fields.cardIds;
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
  float ActMag_42451080; // s0
  float v16; // s9
  float v17; // s0

  v6 = this;
  if ( (byte_4A5D8B9 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&StringLiteral_5496/*"ENEMY_ATTACK_RATE_ARTS"*/);
    sub_1B885B0(&StringLiteral_5497/*"ENEMY_ATTACK_RATE_BUSTER"*/);
    this = (BattleServantData_o *)sub_1B885B0(&StringLiteral_5498/*"ENEMY_ATTACK_RATE_QUICK"*/);
    byte_4A5D8B9 = 1;
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
      v8 = &StringLiteral_5498/*"ENEMY_ATTACK_RATE_QUICK"*/;
      goto LABEL_11;
    }
    v10 = BattleCommandData__getCommandType(command, 0LL);
    if ( BattleCommand__isBUSTER(v10, 0LL) )
    {
      v8 = &StringLiteral_5497/*"ENEMY_ATTACK_RATE_BUSTER"*/;
      goto LABEL_11;
    }
LABEL_12:
    Magnification = BattleCommand__getMagnification(command, 0LL);
    goto LABEL_13;
  }
  v8 = &StringLiteral_5496/*"ENEMY_ATTACK_RATE_ARTS"*/;
LABEL_11:
  Magnification = ConstantMaster__getRateValue((System_String_o *)*v8, 0LL);
LABEL_13:
  v12 = Magnification;
  v13 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v13, v6, targetSvt, command, 0LL, 0LL, 0LL, 0LL);
  v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v14, targetSvt, v6, 0LL, command, 0LL, 0LL, 0LL);
  this = (BattleServantData_o *)v6->fields.buffData;
  if ( !this
    || (ActMag_42451080 = BattleBuffData__getActMag_42451080((BattleBuffData_o *)this, 1, v13, 0LL), !targetSvt)
    || (this = (BattleServantData_o *)targetSvt->fields.buffData) == 0LL
    || (v16 = ActMag_42451080, v17 = BattleBuffData__getActMag_42451080((BattleBuffData_o *)this, 2, v14, 0LL), !command) )
  {
LABEL_18:
    sub_1B8880C(this, command);
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
  float ActMag_42451080; // s0
  float v13; // s9
  float v14; // s0

  if ( (byte_4A5D8BA & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8BA = 1;
  }
  NpMagnification = BattleCommand__getNpMagnification(command, 0LL);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL, 0LL);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, opSvt, this, 0LL, command, 0LL, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_42451080 = BattleBuffData__getActMag_42451080(buffData, 22, v8, 0LL), !opSvt)
    || (buffData = opSvt->fields.buffData) == 0LL
    || (v13 = ActMag_42451080, v14 = BattleBuffData__getActMag_42451080(buffData, 23, v9, 0LL), !command) )
  {
    sub_1B8880C(buffData, v10);
  }
  return (float)(NpMagnification * fmaxf((float)(v13 + 1.0) - v14, 0.0))
       + (float)((float)command->fields.addTdGauge / 1000.0);
}


int32_t __fastcall BattleServantData__getCommandDispLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  int dressDispId; // w20
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w19
  int32_t LimitCountByImageLimit; // w0
  __int64 v8; // x20
  __int64 v9; // x21
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x23
  __int64 v14; // x24
  ServantLimitAddMaster_o *v15; // x22
  int32_t v16; // w0
  __int64 v17; // x8
  int32_t v18; // w19
  int32_t battleCharaLimitCount; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // kr00_16
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4A5D866 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D866 = 1;
  }
  entity = 0LL;
  dressDispId = this->fields.dressDispId;
  if ( dressDispId > 0 )
    return dressDispId;
  v5 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields._commandCardLimitCount_k__BackingField.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v5;
  *(_QWORD *)&v23.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL) )
  {
    v8 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v9 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( this->fields.isEnemy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_30;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v15 = (ServantLimitAddMaster_o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v26.fields.currentCryptoKey = v14;
      *(_QWORD *)&v26.fields.fakeValue = v13;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v26, 0LL);
      v17 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v27.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v18 = v16;
      *(_QWORD *)&v27.fields.currentCryptoKey = v17;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL);
      if ( !v15 )
        goto LABEL_30;
      Instance = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v15, &entity, v18, (int32_t)Instance, 0LL);
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
        sub_1B8880C(Instance, v11);
      }
    }
LABEL_26:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v8;
    *(_QWORD *)&v28.fields.fakeValue = v9;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v5;
  *(_QWORD *)&v24.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v5;
  *(_QWORD *)&v25.fields.fakeValue = v4;
  dressDispId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
  if ( v6 <= 10 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(dressDispId - 1, 0LL);
LABEL_25:
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
    v9 = *(_QWORD *)&v20.fields.fakeValue;
    v8 = *(_QWORD *)&v20.fields.currentCryptoKey;
    goto LABEL_26;
  }
  return dressDispId;
}


System_Int32_array *__fastcall BattleServantData__getCommandList(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_1B8880C(this, method);
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

  if ( (byte_4A5D882 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D882 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getBuffList_42437664(buffData, 57, v8, 1, 0, 0LL, 0LL, 0LL);
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
  float ActMag_42451080; // s0
  float v13; // s9
  float v14; // s0

  if ( (byte_4A5D8BB & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8BB = 1;
  }
  CriticalMagnification = BattleCommand__getCriticalMagnification(command, 0LL);
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL, 0LL);
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, opSvt, this, 0LL, command, 0LL, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActMag_42451080 = BattleBuffData__getActMag_42451080(buffData, 26, v8, 0LL), !opSvt)
    || (buffData = opSvt->fields.buffData) == 0LL
    || (v13 = ActMag_42451080, v14 = BattleBuffData__getActMag_42451080(buffData, 27, v9, 0LL), !command) )
  {
    sub_1B8880C(buffData, v10);
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
  System_Collections_Generic_List_int__o *v11; // x23
  const MethodInfo *v12; // x4
  System_Collections_Generic_IEnumerable_T__o *Individualities; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x5
  System_Collections_Generic_IEnumerable_T__o *BuffIndividualities; // x0

  if ( (byte_4A5D8C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5D8C3 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getIndividualities(
                                                                     this,
                                                                     command,
                                                                     1,
                                                                     0,
                                                                     v12);
  if ( !v11 )
    sub_1B8880C(Individualities, v14);
  System_Collections_Generic_List_int___AddRange(
    v11,
    Individualities,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  BuffIndividualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getBuffIndividualities(
                                                                         this,
                                                                         isActiveOnly,
                                                                         isIncludeIgnoreIndiv,
                                                                         isIgnoreIndivUnreleaseable,
                                                                         0LL,
                                                                         v15);
  System_Collections_Generic_List_int___AddRange(
    v11,
    BuffIndividualities,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleServantData__getConcatSvtIndividualities(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        System_Int32_array *addIndividualityArray,
        BuffAggregationArgs_o *buffAggregationArgs,
        const MethodInfo *method)
{
  char IsIncludeUnfixBuff_k__BackingField; // w2
  bool IsIncludeRemoveBuff_k__BackingField; // w3
  BattleServantData_o *v11; // x0
  BattleCommandData_o *v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Individualities; // x22
  const MethodInfo *v14; // x5
  System_Collections_Generic_IEnumerable_TSource__o *BuffIndividualities; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20

  if ( (byte_4A5D8C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4A5D8C2 = 1;
  }
  if ( buffAggregationArgs )
  {
    IsIncludeUnfixBuff_k__BackingField = buffAggregationArgs->fields._IsIncludeUnfixBuff_k__BackingField;
    IsIncludeRemoveBuff_k__BackingField = buffAggregationArgs->fields._IsIncludeRemoveBuff_k__BackingField;
    v11 = this;
    v12 = command;
  }
  else
  {
    IsIncludeUnfixBuff_k__BackingField = 1;
    v11 = this;
    v12 = command;
    IsIncludeRemoveBuff_k__BackingField = 0;
  }
  Individualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getIndividualities(
                                                                           v11,
                                                                           v12,
                                                                           IsIncludeUnfixBuff_k__BackingField,
                                                                           IsIncludeRemoveBuff_k__BackingField,
                                                                           method);
  BuffIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantData__getBuffIndividualities(
                                                                               this,
                                                                               1,
                                                                               0,
                                                                               0,
                                                                               buffAggregationArgs,
                                                                               v14);
  v16 = System_Linq_Enumerable__Concat_int_(
          Individualities,
          BuffIndividualities,
          (const MethodInfo_2E99484 *)Method_System_Linq_Enumerable_Concat_int___);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndividualityArray, 0LL) )
    v16 = System_Linq_Enumerable__Concat_int_(
            v16,
            (System_Collections_Generic_IEnumerable_TSource__o *)addIndividualityArray,
            (const MethodInfo_2E99484 *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v16,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4A5D903 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData_ConnectData_TypeInfo);
    byte_4A5D903 = 1;
  }
  uniqueId = this->fields.uniqueId;
  v4 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
         this,
         this->klass->vtable._10_set_hp.methodPtr);
  atk = this->fields.atk;
  v6 = v4;
  v7 = (BattleServantData_ConnectData_o *)sub_1B887FC(BattleServantData_ConnectData_TypeInfo);
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

  if ( (byte_4A5D8CD & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8CD = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v7, v8);
  return BattleBuffData__getActValue_42450036(buffData, 71, v6, 0LL) * tmpVal / 1000;
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
    sub_1B8880C(UpDownCriticalRate, v9);
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
  if ( (byte_4A5D8ED & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8ED = 1;
  }
  svtlimitent = v4->fields.svtlimitent;
  if ( !svtlimitent
    || (criticalWeight = svtlimitent->fields.criticalWeight,
        buffData = v4->fields.buffData,
        v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v8, v4, 0LL, command, 0LL, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_1B8880C(this, command);
  }
  v9 = BattleBuffData__getActMag_42451080(buffData, 29, v8, 0LL) * (float)criticalWeight;
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

  if ( (byte_4A5D885 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D885 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, 0LL, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getBuffList_42437664(buffData, 64, v8, 1, 0, 0LL, 0LL, 0LL);
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

  if ( (byte_4A5D883 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D883 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, deadAttackcommand, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getBuffList_42437664(buffData, 58, v8, 1, 0, 0LL, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getDeadBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        bool isAllReturnDeadBuff,
        const MethodInfo *method)
{
  BattleServantData_o *v6; // x22
  BattleBuffData_BuffData_array *result; // x0
  BattleBuffData_BuffData_array *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x1
  int32_t RevengeTargetUniqueIdFromOpponent; // w21
  const MethodInfo *v12; // x1
  int max_length; // w8
  int32_t v14; // w22
  unsigned int v15; // w24
  Il2CppClass **v16; // x8
  Il2CppObject *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  v6 = this;
  if ( (byte_4A5D87E & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_BuffData___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    this = (BattleServantData_o *)sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4A5D87E = 1;
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
    return (BattleBuffData_BuffData_array *)sub_1B88658(BattleBuffData_BuffData___TypeInfo, 0LL);
  this = (BattleServantData_o *)v6->fields.buffData;
  if ( !this )
LABEL_27:
    sub_1B8880C(this, data);
  result = BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(
             (BattleBuffData_o *)this,
             51,
             data,
             v6,
             1,
             0LL);
  v8 = result;
  if ( !isAllReturnDeadBuff )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    RevengeTargetUniqueIdFromOpponent = BattleServantData__getRevengeTargetUniqueIdFromOpponent(v6, v10);
    this = (BattleServantData_o *)BattleServantData__getRevengeTargetUniqueId(v6, v12);
    if ( !v8 )
      goto LABEL_27;
    max_length = v8->max_length;
    if ( max_length >= 1 )
    {
      v14 = (int)this;
      v15 = 0;
      do
      {
        if ( v15 >= max_length )
          sub_1B88814(this, data);
        v16 = &v8->obj.klass + (int)v15;
        v17 = (Il2CppObject *)v16[4];
        if ( !v17 )
          goto LABEL_27;
        this = (BattleServantData_o *)BattleBuffData_BuffData__checkState(
                                        (BattleBuffData_BuffData_o *)v16[4],
                                        2048,
                                        0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          v20 = RevengeTargetUniqueIdFromOpponent;
        else
          v20 = v14;
        if ( (v20 & 0x80000000) == 0
          || (this = (BattleServantData_o *)BattleBuffData_BuffData__checkState(
                                              (BattleBuffData_BuffData_o *)v17,
                                              0x40000,
                                              0LL),
              ((unsigned __int8)this & 1) == 0) )
        {
          if ( !v9 )
            goto LABEL_27;
          items = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_27;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v17,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v17;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v17, v18, v19);
          }
        }
        max_length = v8->max_length;
      }
      while ( (int)++v15 < max_length );
    }
    if ( !v9 )
      goto LABEL_27;
    return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                              v9,
                                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  }
  return result;
}


int32_t __fastcall BattleServantData__getDeadTargetUniqueId(BattleServantData_o *this, const MethodInfo *method)
{
  System_Object_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v6; // x8

  if ( (byte_4A5D8FB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
    byte_4A5D8FB = 1;
  }
  v3 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
         (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !v3 )
    goto LABEL_9;
  v5 = *(_QWORD *)&v3->max_length;
  if ( v5 )
  {
    if ( !(_DWORD)v5 )
      sub_1B88814(v3, v4);
    v6 = *(__int64 *)((char *)v3->m_Items + (((v5 << 32) - 0x100000000LL) >> 29));
    if ( v6 )
      return *(_DWORD *)(v6 + 20);
LABEL_9:
    sub_1B8880C(v3, v4);
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
    sub_1B8880C(0LL, method);
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
      sub_1B8880C(0LL, v5);
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
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w20
  int32_t v9; // w19
  int32_t LimitCountByImageLimit; // w0
  __int64 v11; // x19
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *MasterData_object; // x0
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
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4A5D867 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D867 = 1;
  }
  entity = 0LL;
  result = this->fields.dressDispId;
  if ( result <= 0 )
  {
    v7 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields._dispLimitCount_k__BackingField.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v27.fields.currentCryptoKey = v7;
    *(_QWORD *)&v27.fields.fakeValue = v6;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL) )
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v28.fields.currentCryptoKey = v7;
      *(_QWORD *)&v28.fields.fakeValue = v6;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v29.fields.currentCryptoKey = v7;
      if ( v8 >= 11 )
        goto LABEL_32;
      *(_QWORD *)&v29.fields.fakeValue = v6;
      if ( !changeImageLimit )
      {
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Decrement(v29, 0LL);
        v23 = *(_QWORD *)&v25.fields.fakeValue;
        v22 = *(_QWORD *)&v25.fields.currentCryptoKey;
        goto LABEL_28;
      }
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v29, 0LL);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v9 - 1, 0LL);
LABEL_26:
      v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(LimitCountByImageLimit, 0LL);
      v23 = *(_QWORD *)&v24.fields.fakeValue;
      v22 = *(_QWORD *)&v24.fields.currentCryptoKey;
LABEL_28:
      v11 = v22;
      v6 = v23;
      goto LABEL_29;
    }
    v11 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
    v6 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
    if ( this->fields.isEnemy )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_34;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v16 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v15 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      v17 = (ServantLimitAddMaster_o *)MasterData_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v30.fields.currentCryptoKey = v16;
      *(_QWORD *)&v30.fields.fakeValue = v15;
      v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL);
      v19 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
      *(_QWORD *)&v31.fields.fakeValue = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
      v20 = v18;
      *(_QWORD *)&v31.fields.currentCryptoKey = v19;
      Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31, 0LL);
      if ( !v17 )
        goto LABEL_34;
      Instance = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(v17, &entity, v20, (int32_t)Instance, 0LL);
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
        sub_1B8880C(Instance, v13);
      }
    }
LABEL_29:
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v11;
LABEL_32:
    *(_QWORD *)&v29.fields.fakeValue = v6;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v29, 0LL);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5D864 & 1) == 0 )
  {
    sub_1B885B0(&ServantLimitAddMaster_TypeInfo);
    byte_4A5D864 = 1;
  }
  v3 = ServantLimitAddMaster_TypeInfo;
  svtlimitaddent = this->fields.svtlimitaddent;
  if ( !ServantLimitAddMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantLimitAddMaster_TypeInfo);
  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_1B8880C(v3, method);
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

  if ( (byte_4A5D886 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D886 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
  return BattleBuffData__getBuffList_42437664(buffData, 76, v4, 1, 0, 0LL, 0LL, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getFixCommandCardBuff(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5D881 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D881 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
  return BattleBuffData__getBuffList_42437664(buffData, 74, v4, 1, 0, 0LL, 0LL, 0LL);
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

  if ( (byte_4A5D8D3 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8D3 = 1;
  }
  if ( isTreasureDevice )
    TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, (const MethodInfo *)opSvt);
  else
    TreasureDvcCommand = 0LL;
  buffData = this->fields.buffData;
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, opSvt, TreasureDvcCommand, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v10, v11);
  return BattleBuffData__getActMag_42451080(buffData, 63, v9, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getGutsBufflist(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B8880C(0LL, data);
  return BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(buffData, 89, data, this, 1, 0LL);
}


System_Int32_array *__fastcall BattleServantData__getIndividualities(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        bool isIncludeUnfixBuff,
        bool isIncludeRemoveBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x22
  const MethodInfo *v10; // x0
  const MethodInfo *v11; // x4
  const MethodInfo *CriticalIndividuality; // x0
  System_Collections_Generic_IEnumerable_T__o *Individualities; // x0
  __int64 v14; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  System_Collections_Generic_IEnumerable_T__o *klass; // x1
  const MethodInfo_34E0A1C *v21; // x2
  const MethodInfo *v22; // x2
  System_Int32_array *ServantCommandIndividuality; // x0
  System_Collections_Generic_IEnumerable_int__o *v24; // x0

  if ( (byte_4A5D8F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5D8F2 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v9,
            (int32_t)Individualities,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
          (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
        ServantCommandIndividuality = BattleServantData__getServantCommandIndividuality(this, command, v22);
        v21 = (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__;
        klass = (System_Collections_Generic_IEnumerable_T__o *)ServantCommandIndividuality;
        goto LABEL_18;
      }
LABEL_20:
      sub_1B8880C(Individualities, v14);
    }
    if ( BattleServantData__get_TreasureDevice(this, v18) )
    {
      Individualities = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__get_TreasureDevice(this, v19);
      if ( Individualities && v9 )
      {
        klass = (System_Collections_Generic_IEnumerable_T__o *)Individualities[4].klass;
        v21 = (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__;
LABEL_18:
        System_Collections_Generic_List_int___AddRange(v9, klass, v21);
        goto LABEL_19;
      }
      goto LABEL_20;
    }
  }
LABEL_19:
  v24 = BattleServantData__EnumerateIndividuality(
          this,
          (System_Collections_Generic_IEnumerable_int__o *)v9,
          isIncludeUnfixBuff,
          isIncludeRemoveBuff,
          v11);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v24,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Int32_array *__fastcall BattleServantData__getIndividualities_42960956(
        BattleServantData_o *this,
        System_Int32_array *addIndiv,
        bool isIncludeUnfixBuff,
        bool isIncludeRemoveBuff,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_int__o *v9; // x0

  if ( (byte_4A5D8F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4A5D8F3 = 1;
  }
  v9 = BattleServantData__EnumerateIndividuality(
         this,
         (System_Collections_Generic_IEnumerable_int__o *)addIndiv,
         isIncludeUnfixBuff,
         isIncludeRemoveBuff,
         method);
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v9,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall BattleServantData__getLevel(BattleServantData_o *this, const MethodInfo *method)
{
  return this->fields.level;
}


System_String_o *__fastcall BattleServantData__getLevelLabel(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t level; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D863 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    byte_4A5D863 = 1;
  }
  level = this->fields.level;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &level, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_24983/*"{0}"*/, v6, 0LL);
}


int32_t __fastcall BattleServantData__getLimitCount(BattleServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A5D865 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D865 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitcount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitcount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v6, 0LL);
}


int32_t __fastcall BattleServantData__getLimitImageIndex(BattleServantData_o *this, const MethodInfo *method)
{
  int32_t SvtId; // w20
  const MethodInfo *v4; // x2
  int32_t DispLimitCount; // w19

  if ( (byte_4A5D869 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5D869 = 1;
  }
  SvtId = BattleServantData__getSvtId(this, method);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v4);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
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

  if ( (byte_4A5D89D & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1B885B0(&StringLiteral_15906/*"[BattleServantData.getMaxHp] buffData is null"*/);
    byte_4A5D89D = 1;
  }
  v3 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v3, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  buffData = (CrashReporter_o *)this->fields.buffData;
  if ( !buffData
    && ((buffData = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0LL
     || (CrashReporter__SendReport_30382288(buffData, (System_String_o *)StringLiteral_15906/*"[BattleServantData.getMaxHp] buffData is null"*/, 0LL, 0LL, 0LL),
         (buffData = (CrashReporter_o *)this->fields.buffData) == 0LL))
    || (maxhp = this->fields.maxhp,
        buffData = (CrashReporter_o *)BattleBuffData__getActValue_42450036((BattleBuffData_o *)buffData, 52, v3, 0LL),
        (v7 = this->fields.buffData) == 0LL) )
  {
    sub_1B8880C(buffData, v5);
  }
  v8 = (int)buffData * maxhp / 1000 + maxhp + BattleBuffData__getActValue_42450036(v7, 53, v3, 0LL);
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
  __int64 v7; // x3
  __int64 v8; // x4
  struct System_Collections_Hashtable_o *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 methodPtr_low; // x9
  BattleServantData_o *v15; // x0
  BattleCommandData_o *v16; // x1
  const MethodInfo *v17; // x2
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4A5D896 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    this = (BattleServantData_o *)sub_1B885B0(&ServantCardEntity_TypeInfo);
    byte_4A5D896 = 1;
  }
  if ( !command )
    goto LABEL_12;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type, v6, v7, v8);
  if ( !commandtable )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return 40;
  v9 = v4->fields.commandtable;
  v18 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v10, v11, v12);
  if ( !v9
    || (this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v9->klass->vtable._29_get_Item.method)(
                                        v9,
                                        this,
                                        v9->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(this, command);
  }
  methodPtr_low = LOBYTE(ServantCardEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCardEntity_TypeInfo )
  {
    return this->fields.uniqueId;
  }
  sub_1B88ACC(this);
  return BattleServantData__getAttackType(v15, v16, v17);
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
    sub_1B8880C(0LL, checkIndividualities);
  return BattleBuffData__getBuffList_42437664(buffData, 73, checkIndividualities, 1, 0, 0LL, 0LL, 0LL);
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

  if ( (byte_4A5D8EB & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8EB = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 39, v4, 0, 0LL),
        v8 = this->fields.buffData,
        v9 = isTurnBuff,
        v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v10, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v8) )
  {
    sub_1B8880C(v5, v6);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
  return BattleDeckServantData__getTDName(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDRuby(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_1B8880C(0LL, method);
  return BattleDeckServantData__getTDRuby(deckSvt, 0LL);
}


System_String_o *__fastcall BattleServantData__getOverrideTDVoice(BattleServantData_o *this, const MethodInfo *method)
{
  BattleDeckServantData_o *deckSvt; // x0

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    sub_1B8880C(0LL, method);
  return BattleDeckServantData__getEnemyTreasureDeviceVoiceId(deckSvt, 0LL);
}


BattleSkillInfoData_array *__fastcall BattleServantData__getPassiveSkills(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  void *All; // x0
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *v5; // x20
  Il2CppObject *v6; // x21
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D857 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
    sub_1B885B0(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__getPassiveSkills_b__338_0__);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D857 = 1;
  }
  All = BattleServantData___c_TypeInfo;
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    All = BattleServantData___c_TypeInfo;
  }
  v5 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 40LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleServantData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)All + 23);
    v5 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_object____ctor(v5, v6, Method_BattleServantData___c__getPassiveSkills_b__338_0__, 0LL);
    static_fields = BattleServantData___c_TypeInfo->static_fields;
    static_fields->__9__338_0 = (struct System_Predicate_BattleSkillInfoData__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__338_0, (int32_t)v5, v8, v9);
  }
  if ( !skillInfoList
    || (All = System_Collections_Generic_List_object___FindAll(
                skillInfoList,
                (System_Predicate_T__o *)v5,
                (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_BattleSkillInfoData__FindAll__)) == 0LL )
  {
    sub_1B8880C(All, method);
  }
  return (BattleSkillInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)All,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleSkillInfoData__ToArray__);
}


int32_t __fastcall BattleServantData__getRarity(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, isAtkSide);
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

  if ( (byte_4A5D884 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D884 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
  return BattleBuffData__getBuffList_42437664(buffData, 65, v4, 1, 0, 0LL, 0LL, 0LL);
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

  if ( (byte_4A5D8F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
    byte_4A5D8F9 = 1;
  }
  isDamage = System_Linq_Enumerable__ToArray_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
               (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !isDamage )
    goto LABEL_16;
  v5 = *(_QWORD *)&isDamage->max_length;
  v6 = isDamage;
  v7 = v5 - 1;
  if ( (int)v5 - 1 >= 0 )
  {
    if ( v7 >= (unsigned int)v5 )
LABEL_13:
      sub_1B88814(isDamage, v4);
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
    sub_1B8880C(isDamage, v4);
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

  if ( (byte_4A5D8FA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
    byte_4A5D8FA = 1;
  }
  isDamage = System_Linq_Enumerable__ToArray_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.actionHistory,
               (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantActionHistory___);
  if ( !isDamage )
    goto LABEL_17;
  v5 = *(_QWORD *)&isDamage->max_length;
  v6 = isDamage;
  v7 = v5 - 1;
  if ( (int)v5 - 1 >= 0 )
  {
    if ( v7 >= (unsigned int)v5 )
LABEL_14:
      sub_1B88814(isDamage, v4);
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
    sub_1B8880C(isDamage, v4);
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
    sub_1B8880C(0LL, indv);
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
  const MethodInfo *v3; // x4
  System_Int32_array *Individualities; // x0
  __int64 v6; // x1
  int32_t v7; // w8
  __int64 v8; // x9
  __int64 v9; // x10
  signed int max_length; // w11
  int v11; // w13

  Individualities = BattleServantData__getIndividualities(this, 0LL, 1, 0, v3);
  if ( !Individualities )
    goto LABEL_17;
  v7 = 0;
  if ( (int)*(_QWORD *)&Individualities->max_length >= 1 )
  {
    v8 = (unsigned int)*(_QWORD *)&Individualities->max_length;
    v7 = 0;
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 == v8 )
LABEL_16:
        sub_1B88814(Individualities, v6);
      if ( !checkIndvArray )
        break;
      max_length = checkIndvArray->max_length;
      if ( max_length >= 1 )
      {
        v11 = 0;
        while ( 1 )
        {
          if ( max_length == v11 )
            goto LABEL_16;
          if ( Individualities->m_Items[v9 + 1] == checkIndvArray->m_Items[v11 + 1] )
            break;
          if ( max_length == ++v11 )
            goto LABEL_14;
        }
        ++v7;
      }
LABEL_14:
      if ( ++v9 == v8 )
        return v7;
    }
LABEL_17:
    sub_1B8880C(Individualities, v6);
  }
  return v7;
}


BattleServantData_SaveData_o *__fastcall BattleServantData__getSaveData(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  AiState_o *aiState; // x0
  __int64 v7; // x1
  AiState_SaveData_o *SaveData; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  AiStateManager_SaveData_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  BattleBuffData_SaveData_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x8
  __int64 v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v22; // x8
  __int64 v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  unsigned __int64 v28; // x24
  __int64 v29; // x26
  BattleSkillInfoData_o *v30; // x25
  __int64 v31; // x26
  struct System_String_o *statestring; // x1
  struct System_Int32_array *commandAssistIds; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  BattleServantData___c_c *v36; // x0
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *partAnimationSaveDict; // x21
  System_Func_T__TResult__o *_9__301_0; // x22
  Il2CppObject *v39; // x23
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Object_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  BattleServantData___c_c *v47; // x0
  struct System_Collections_Generic_List_BattlePointData__o *battlePointList; // x20
  System_Func_object__object__o *_9__301_1; // x21
  Il2CppObject *v50; // x22
  struct BattleServantData___c_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Object_array *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3

  if ( (byte_4A5D83E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattlePointData__BattlePointData_SaveData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleServantData_PartAnimationSaveData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattlePointData_SaveData___);
    sub_1B885B0(&System_Func_BattlePointData__BattlePointData_SaveData__TypeInfo);
    sub_1B885B0(&System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1B885B0(&BattleServantData_SaveData_TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__getSaveData_b__301_0__);
    sub_1B885B0(&Method_BattleServantData___c__getSaveData_b__301_1__);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D83E = 1;
  }
  v5 = sub_1B887FC(BattleServantData_SaveData_TypeInfo);
  BattleServantData_SaveData___ctor((BattleServantData_SaveData_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_36;
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
    goto LABEL_36;
  SaveData = AiState__getSaveData(aiState, 0LL);
  *(_QWORD *)(v5 + 56) = SaveData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), (int32_t)SaveData, v9, v10);
  aiState = (AiState_o *)BattleServantData__get_AiStateManager(this, v11);
  if ( !aiState )
    goto LABEL_36;
  v12 = AiStateManager__GetSaveData((AiStateManager_o *)aiState, 0LL);
  *(_QWORD *)(v5 + 192) = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 192), (int32_t)v12, v13, v14);
  aiState = (AiState_o *)this->fields.buffData;
  if ( !aiState )
    goto LABEL_36;
  v15 = BattleBuffData__getSaveData((BattleBuffData_o *)aiState, 0LL);
  *(_QWORD *)(v5 + 64) = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 64), (int32_t)v15, v16, v17);
  skillInfoList = this->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_36;
  v19 = sub_1B88658(int___TypeInfo, (unsigned int)skillInfoList->fields._size);
  *(_QWORD *)(v5 + 40) = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), v19, v20, v21);
  v22 = this->fields.skillInfoList;
  if ( !v22 )
    goto LABEL_36;
  v23 = sub_1B88658(int___TypeInfo, (unsigned int)v22->fields._size);
  *(_QWORD *)(v5 + 48) = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), v23, v24, v25);
  aiState = (AiState_o *)this->fields.skillInfoList;
  if ( !aiState )
    goto LABEL_36;
  v28 = 0LL;
  while ( (__int64)v28 < aiState->fields.baseTurn )
  {
    aiState = (AiState_o *)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)aiState,
                             v28,
                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( aiState )
    {
      v29 = *(_QWORD *)(v5 + 40);
      v30 = (BattleSkillInfoData_o *)aiState;
      aiState = (AiState_o *)BattleSkillInfoData__getInfoId((BattleSkillInfoData_o *)aiState, 0LL);
      if ( v29 )
      {
        if ( v28 >= *(unsigned int *)(v29 + 24) )
          goto LABEL_37;
        *(_DWORD *)(v29 + 4 * v28 + 32) = (_DWORD)aiState;
        v31 = *(_QWORD *)(v5 + 48);
        aiState = (AiState_o *)BattleSkillInfoData__getChargeTurn(v30, 0LL);
        if ( v31 )
        {
          if ( v28 >= *(unsigned int *)(v31 + 24) )
LABEL_37:
            sub_1B88814(aiState, v7);
          *(_DWORD *)(v31 + 4 * v28 + 32) = (_DWORD)aiState;
          aiState = (AiState_o *)this->fields.skillInfoList;
          ++v28;
          if ( aiState )
            continue;
        }
      }
    }
    goto LABEL_36;
  }
  *(_DWORD *)(v5 + 116) = this->fields.shiftNpcId;
  *(_QWORD *)(v5 + 120) = this->fields.beforeUserSvtId;
  *(_DWORD *)(v5 + 76) = this->fields.transformIndex;
  *(_DWORD *)(v5 + 172) = this->fields.transformLimitCount;
  *(_DWORD *)(v5 + 80) = this->fields.dressDispId;
  *(_DWORD *)(v5 + 84) = this->fields.accumulationDamage;
  statestring = this->fields.statestring;
  *(_QWORD *)(v5 + 88) = statestring;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 88), (int32_t)statestring, v26, v27);
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
  *(int32x2_t *)(v5 + 144) = vrev64_s32(*(int32x2_t *)&this->fields.aftSquareIndex);
  *(_BYTE *)(v5 + 152) = this->fields.isAppliedHaveStars;
  *(_QWORD *)(v5 + 160) = *(_QWORD *)&this->fields.squareEffectSkillId;
  *(_DWORD *)(v5 + 168) = this->fields.deadtype;
  *(_DWORD *)(v5 + 200) = this->fields.tdErrorTouchCount;
  *(_BYTE *)(v5 + 204) = this->fields.flgEntryFunction;
  commandAssistIds = this->fields.commandAssistIds;
  *(_QWORD *)(v5 + 208) = commandAssistIds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 208), (int32_t)commandAssistIds, v34, v35);
  if ( !data || (aiState = (AiState_o *)data->fields.perf) == 0LL )
LABEL_36:
    sub_1B8880C(aiState, v7);
  BattlePerformance__SetActorPartAnimationData((BattlePerformance_o *)aiState, this->fields.uniqueId, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.partAnimationSaveDict, 0LL) )
  {
    v36 = BattleServantData___c_TypeInfo;
    partAnimationSaveDict = this->fields.partAnimationSaveDict;
    if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v36 = BattleServantData___c_TypeInfo;
    }
    _9__301_0 = (System_Func_T__TResult__o *)v36->static_fields->__9__301_0;
    if ( !_9__301_0 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = BattleServantData___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v36->static_fields->__9;
      _9__301_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__TypeInfo);
      System_Func_KeyValuePair_object__object___object____ctor(
        _9__301_0,
        v39,
        Method_BattleServantData___c__getSaveData_b__301_0__,
        0LL);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
      static_fields->__9__301_0 = (struct System_Func_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData__o *)_9__301_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__301_0, (int32_t)_9__301_0, v41, v42);
    }
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_object__object___object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)partAnimationSaveDict,
                                                                 (System_Func_TSource__TResult__o *)_9__301_0,
                                                                 (const MethodInfo_2EAC528 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__BattlePlayAnimationComponent_SaveData_____BattleServantData_PartAnimationSaveData___);
    v44 = System_Linq_Enumerable__ToArray_object_(
            v43,
            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleServantData_PartAnimationSaveData___);
    *(_QWORD *)(v5 + 216) = v44;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 216), (int32_t)v44, v45, v46);
  }
  *(_BYTE *)(v5 + 224) = this->fields.isUseTdBetweenEnemyTurnEndAndTactical;
  v47 = BattleServantData___c_TypeInfo;
  battlePointList = this->fields.battlePointList;
  if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
    v47 = BattleServantData___c_TypeInfo;
  }
  _9__301_1 = (System_Func_object__object__o *)v47->static_fields->__9__301_1;
  if ( !_9__301_1 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v47 = BattleServantData___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v47->static_fields->__9;
    _9__301_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattlePointData__BattlePointData_SaveData__TypeInfo);
    System_Func_object__object____ctor(_9__301_1, v50, Method_BattleServantData___c__getSaveData_b__301_1__, 0LL);
    v51 = BattleServantData___c_TypeInfo->static_fields;
    v51->__9__301_1 = (struct System_Func_BattlePointData__BattlePointData_SaveData__o *)_9__301_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v51->__9__301_1, (int32_t)_9__301_1, v52, v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)battlePointList,
                                                               (System_Func_TSource__TResult__o *)_9__301_1,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattlePointData__BattlePointData_SaveData___);
  v55 = System_Linq_Enumerable__ToArray_object_(
          v54,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattlePointData_SaveData___);
  *(_QWORD *)(v5 + 232) = v55;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 232), (int32_t)v55, v56, v57);
  return (BattleServantData_SaveData_o *)v5;
}


System_String_o *__fastcall BattleServantData__getSaveDataToString(
        BattleServantData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x19

  if ( (byte_4A5D83F & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    byte_4A5D83F = 1;
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


BattleSkillInfoData_o *__fastcall BattleServantData__getSelfSkillInfo(
        BattleServantData_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass421_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5D872 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
    sub_1B885B0(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass421_0__getSelfSkillInfo_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass421_0_TypeInfo);
    byte_4A5D872 = 1;
  }
  v5 = (BattleServantData___c__DisplayClass421_0_o *)sub_1B887FC(BattleServantData___c__DisplayClass421_0_TypeInfo);
  BattleServantData___c__DisplayClass421_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.index = index,
        skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleSkillInfoData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass421_0__getSelfSkillInfo_b__0__,
          0LL),
        !skillInfoList) )
  {
    sub_1B8880C(v6, v7);
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_object___Find(
                                    skillInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
}


System_Int32_array *__fastcall BattleServantData__getServantCommandIndividuality(
        BattleServantData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  struct System_Collections_Hashtable_o *commandtable; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct System_Collections_Hashtable_o *v9; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 methodPtr_low; // x9
  BattleServantData_o *v15; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t type; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4A5D89A & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    this = (BattleServantData_o *)sub_1B885B0(&ServantCardEntity_TypeInfo);
    byte_4A5D89A = 1;
  }
  if ( !command )
    goto LABEL_12;
  commandtable = v4->fields.commandtable;
  type = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &type, v6, v7, v8);
  if ( !commandtable )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))commandtable->klass->vtable._27_ContainsKey.method)(
          commandtable,
          this,
          commandtable->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  v9 = v4->fields.commandtable;
  v17 = BattleCommandData__get_type(command, 0LL);
  this = (BattleServantData_o *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v10, v11, v12);
  if ( !v9
    || (this = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, BattleServantData_o *, Il2CppMethodPointer))v9->klass->vtable._29_get_Item.method)(
                                        v9,
                                        this,
                                        v9->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(this, command);
  }
  methodPtr_low = LOBYTE(ServantCardEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ServantCardEntity_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCardEntity_TypeInfo )
  {
    return *(System_Int32_array **)&this->fields.exceedCount.fields.currentCryptoKey;
  }
  sub_1B88ACC(this);
  return (System_Int32_array *)BattleServantData__getNPVal(v15, v16);
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

  if ( (byte_4A5D862 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D862 = 1;
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
    *(_QWORD *)&v9.fields.currentCryptoKey = v6;
    *(_QWORD *)&v9.fields.fakeValue = v5;
    v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
    if ( !svtdata )
      sub_1B8880C(v7, v8);
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
  if ( (byte_4A5D84B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    this = (BattleServantData_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D84B = 1;
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
  this = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                        (DataManager_o *)this,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        svtId,
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_19:
    sub_1B8880C(this, *(_QWORD *)&svtId);
  }
  v6 = (ServantEntity_o *)this;
  if ( !ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL) )
    return 0LL;
  DispLimitCount = BattleServantData__getDispLimitCount(v4, 0, v7);
  v10 = *(_QWORD *)&v4->fields.limitcount.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v4->fields.limitcount.fields.fakeValue;
  v11 = DispLimitCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
      sub_1B8880C(DispLimitCount, v8);
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

  if ( (byte_4A5D889 & 1) == 0 )
  {
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D889 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  buffData = this->fields.buffData;
  v5 = IsConstantMasterIndvAddBuffActive;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  v7 = v6;
  if ( v5 )
    v8 = this;
  else
    v8 = 0LL;
  BattleBuffData_CheckIndividualitiesData___ctor(v6, v8, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getBuffList_42437664(buffData, 85, v7, 1, 0, 0LL, 0LL, 0LL);
}


SkillLvEntity_o *__fastcall BattleServantData__getSkillFromBuff(
        SkillLvMaster_o *skillLvMst,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  SkillLvMaster_o *v4; // x20
  struct System_Int32_array *vals; // x8

  v4 = skillLvMst;
  if ( (byte_4A5D88C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    skillLvMst = (SkillLvMaster_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D88C = 1;
  }
  if ( !v4 )
  {
    skillLvMst = (SkillLvMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillLvMst )
      goto LABEL_11;
    skillLvMst = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)skillLvMst,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v4 = skillLvMst;
  }
  if ( !buff )
    goto LABEL_11;
  vals = buff->fields.vals;
  if ( !vals )
    goto LABEL_11;
  if ( vals->max_length < 2 )
    sub_1B88814(skillLvMst, buff);
  if ( !v4 )
LABEL_11:
    sub_1B8880C(skillLvMst, buff);
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
  __int64 v9; // x8
  unsigned __int64 v10; // x9

  if ( (byte_4A5D8E9 & 1) == 0 )
  {
    sub_1B885B0(&bool___TypeInfo);
    byte_4A5D8E9 = 1;
  }
  BuffParamList = (BattleBuffData_o *)sub_1B88658(bool___TypeInfo, 3LL);
  if ( !this->fields.buffData
    || (v5 = (System_Boolean_array *)BuffParamList,
        (BuffParamList = (BattleBuffData_o *)BattleBuffData__getBuffParamList(
                                               this->fields.buffData,
                                               99,
                                               this,
                                               1,
                                               0,
                                               0LL)) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(BuffParamList, v4);
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
        return v5;
    }
    v9 = (unsigned int)BuffParamList->fields.passiveList;
    v10 = 0LL;
    while ( v9 != v10 )
    {
      if ( *((_BYTE *)&BuffParamList->fields.activeList + v10) )
      {
        if ( !v5 )
          goto LABEL_22;
        if ( v10 >= v5->max_length )
          break;
        v5->m_Items[v10 + 4] = 1;
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B88814(BuffParamList, v4);
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

  if ( (byte_4A5D8EA & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8EA = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData || (SkillSealSelectTurnList = BattleBuffData__getSkillSealSelectTurnList(buffData, v6, 0LL)) == 0LL )
    sub_1B8880C(SkillSealSelectTurnList, v8);
  if ( SkillSealSelectTurnList->max_length <= index )
    sub_1B88814(SkillSealSelectTurnList, v8);
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

  if ( (byte_4A5D8E8 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8E8 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData
    || (isTurnBuff = BattleBuffData__isTurnBuff(buffData, 40, v4, 0, 0LL),
        v8 = this->fields.buffData,
        v9 = isTurnBuff,
        v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v10, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
        !v8) )
  {
    sub_1B8880C(v5, v6);
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

  if ( (byte_4A5D880 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D880 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
  return BattleBuffData__getBuffList_42437664(buffData, 54, v4, 1, 0, 0LL, 0LL, 0LL);
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
    sub_1B8880C(this, method);
  return svtlimitDispent->fields.stepProbability;
}


System_String_o *__fastcall BattleServantData__getStrParam(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, index);
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
  if ( (byte_4A5D85C & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D85C = 1;
  }
  svtdata = v2->fields.svtdata;
  if ( !svtdata )
    sub_1B8880C(this, method);
  v5 = *(_QWORD *)&svtdata->fields.id.fields.currentCryptoKey;
  v4 = *(_QWORD *)&svtdata->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v7, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData__getTTurnEndBufflist(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5D87F & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D87F = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
  return BattleBuffData__getBuffList_42437664(buffData, 55, v4, 1, 0, 0LL, 0LL, 0LL);
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

  if ( (byte_4A5D888 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D888 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
  return BattleBuffData__getBuffList_42437664(buffData, 86, v4, 1, 0, 0LL, 0LL, 0LL);
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

  if ( (byte_4A5D88A & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_BuffData_TypeInfo);
    byte_4A5D88A = 1;
  }
  v3 = BattleServantData__getTdTypeChangeBuff(this, method);
  v4 = (BattleBuffData_BuffData_o *)sub_1B887FC(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor(v4, 0LL);
  if ( !v4 )
    goto LABEL_15;
  v4->fields.addOrder = -1;
  if ( !v3 )
    goto LABEL_15;
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( max_length == v8 )
        sub_1B88814(v5, v6);
      v9 = v3->m_Items[v8];
      if ( !v9 )
        break;
      ++v8;
      if ( v9->fields.addOrder > v4->fields.addOrder )
        v4 = v9;
      if ( max_length == v8 )
        goto LABEL_12;
    }
LABEL_15:
    sub_1B8880C(v5, v6);
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
  BattleServantData___c__DisplayClass422_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4A5D873 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
    sub_1B885B0(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass422_0__getTempSkillInfo_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass422_0_TypeInfo);
    byte_4A5D873 = 1;
  }
  v5 = (BattleServantData___c__DisplayClass422_0_o *)sub_1B887FC(BattleServantData___c__DisplayClass422_0_TypeInfo);
  BattleServantData___c__DisplayClass422_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.index = index,
        skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleSkillInfoData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass422_0__getTempSkillInfo_b__0__,
          0LL),
        !skillInfoList) )
  {
    sub_1B8880C(v6, v7);
  }
  return (BattleSkillInfoData_o *)System_Collections_Generic_List_object___Find(
                                    skillInfoList,
                                    (System_Predicate_T__o *)v9,
                                    (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
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
    sub_1B8880C(0LL, v3);
  return SvtTDvc->fields.cardId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleServantData__getTreasureDvcCardId_42948484(
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
    sub_1B8880C(this, useTDTypeChangedValue);
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
  this = (BattleServantData_o *)BattleBuffData__isTDTypeChange((BattleBuffData_o *)this, v3, 0LL, 0LL);
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
  this = (BattleServantData_o *)BattleBuffData__getTDTypeChangeBuffData((BattleBuffData_o *)this, v3, 0LL, 0LL);
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
  __int64 v3; // x1

  SvtTDvc = BattleServantData__get_SvtTDvc(this, method);
  if ( !SvtTDvc )
    sub_1B8880C(0LL, v3);
  return SvtTDvc->fields.damage;
}


int32_t __fastcall BattleServantData__getTreasureDvcId(
        BattleServantData_o *this,
        bool useTDTypeChangedValue,
        BuffAggregationArgs_o *buffAggregationArgs,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  const MethodInfo *v7; // x1
  TreasureDvcEntity_o *TDvc; // x21
  BattleBuffData_BuffData_o *LimitCount; // x0
  __int64 v10; // x1
  int32_t v11; // w22
  int32_t v12; // w0
  const MethodInfo *v13; // x2
  int32_t result; // w0
  int32_t tdIdChangeByBattlePoint; // [xsp+Ch] [xbp-24h] BYREF

  tdIdChangeByBattlePoint = 0;
  if ( !useTDTypeChangedValue )
    return this->fields.treasuredvcId;
  buffData = this->fields.buffData;
  if ( buffData && BattleBuffData__isTDTypeChange(buffData, this, buffAggregationArgs, 0LL) )
  {
    TDvc = this->fields.TDvc;
    LimitCount = (BattleBuffData_BuffData_o *)BattleServantData__getLimitCount(this, v7);
    if ( !this->fields.buffData
      || (v11 = (int)LimitCount,
          (LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, buffAggregationArgs, 0LL)) == 0LL)
      || !TDvc )
    {
      sub_1B8880C(LimitCount, v10);
    }
    v12 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(TDvc, v11, LimitCount->fields.param, 0LL);
    return BattleServantData__GetTdIdChangeByBattlePoint(this, v12, v13);
  }
  if ( BattleServantData__TryGetTdIdChangeByBattlePoint(this, this->fields.TDvc, &tdIdChangeByBattlePoint, method) )
    return tdIdChangeByBattlePoint;
  result = this->fields.selectedTDId;
  if ( result == -1 )
    return this->fields.treasuredvcId;
  return result;
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
    sub_1B8880C(0LL, v3);
  return SvtTDvc->fields.motion;
}


System_String_o *__fastcall BattleServantData__getTreasureDvcName(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  TreasureDvcEntity_o *TreasureDevice; // x0
  __int64 v5; // x1
  System_String_o **p_name; // x8

  if ( (byte_4A5D876 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D876 = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_1B8880C(0LL, v5);
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

  if ( (byte_4A5D877 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D877 = 1;
  }
  if ( BattleServantData__get_TreasureDevice(this, method) )
  {
    TreasureDevice = BattleServantData__get_TreasureDevice(this, v3);
    if ( !TreasureDevice )
      sub_1B8880C(0LL, v5);
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
  __int64 v10; // x1

  if ( (byte_4A5D8BC & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8BC = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getActMag_42451080(buffData, 3, v8, 0LL);
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

  if ( (byte_4A5D8C8 & 1) == 0 )
  {
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8C8 = 1;
  }
  buffData = this->fields.buffData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
    v10 = opSvt;
  else
    v10 = 0LL;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, v10, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v12, v13);
  return BattleBuffData__getActValue_42450072(buffData, 46, missText, v11, 0LL);
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

  if ( (byte_4A5D8D5 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8D5 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getActMag_42451080(buffData, 25, v8, 0LL);
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
  if ( (byte_4A5D8BD & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8BD = 1;
  }
  if ( !targetSvt
    || (v9 = BattleServantData__checkPierceDefence(targetSvt, command, v8, (const MethodInfo *)pierce),
        buffData = v8->fields.buffData,
        v11 = v9,
        v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v12, v8, targetSvt, 0LL, command, 0LL, 0LL, 0LL),
        !buffData) )
  {
    sub_1B8880C(this, command);
  }
  if ( v11 || pierce )
    v13 = 5;
  else
    v13 = 4;
  return BattleBuffData__getActMag_42451080(buffData, v13, v12, 0LL);
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

  if ( (byte_4A5D8D4 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8D4 = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    command = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v11, v12);
  return BattleBuffData__getActMag_42451080(buffData, 24, v10, 0LL);
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

  if ( (byte_4A5D8CB & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8CB = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, opSvt, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v7, v8);
  return BattleBuffData__getActMag_42451080(buffData, 56, v6, 0LL);
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

  if ( (byte_4A5D8D7 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8D7 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, opSvt, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getActMag_42451080(buffData, 67, v8, 0LL);
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

  if ( (byte_4A5D8CC & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8CC = 1;
  }
  *digit = 1000;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v7, v8);
  return BattleBuffData__getActValue_42450036(buffData, 70, v6, 0LL);
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

  if ( (byte_4A5D8CA & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8CA = 1;
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
  v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, (BuffInterface_o *)this, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v10, v11);
  return BattleBuffData__getActValue_42450036(buffData, 34, v9, 0LL);
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

  if ( (byte_4A5D8BE & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8BE = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getActMag_42451080(buffData, 6, v8, 0LL);
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

  if ( (byte_4A5D8C1 & 1) == 0 )
  {
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8C1 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(11, targetSvt, 0LL);
  buffData = this->fields.buffData;
  v9 = ActInfo;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, targetSvt, command, 0LL, (BuffInterface_o *)this, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v11, v12);
  return BattleBuffData__getActMag_42451024(buffData, v9, v10, 0LL);
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

  if ( (byte_4A5D8C6 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8C6 = 1;
  }
  buffData = this->fields.buffData;
  if ( !isAttack )
    command = 0LL;
  v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v10, this, opSvt, command, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v11, v12);
  return BattleBuffData__getActMag_42451080(buffData, 28, v10, 0LL);
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

  if ( (byte_4A5D8C4 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8C4 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, command, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getActMag_42451080(buffData, 12, v8, 0LL);
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
  const MethodInfo *v10; // x5
  int v11; // w22
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t ActValue_42450036; // w23
  const MethodInfo *v15; // x5
  System_Int32_array *BuffIndividualities; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  BattleBuffData_o *v19; // x8

  if ( (byte_4A5D8BF & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8BF = 1;
  }
  v7 = sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(
    (BattleBuffData_CheckIndividualitiesData_o *)v7,
    this,
    targetSvt,
    command,
    0LL,
    0LL,
    0LL,
    0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    goto LABEL_10;
  buffData = (BattleBuffData_o *)BattleBuffData__getActValue_42450036(
                                   buffData,
                                   7,
                                   (BattleBuffData_CheckIndividualitiesData_o *)v7,
                                   0LL);
  if ( !targetSvt )
    goto LABEL_10;
  v11 = (int)buffData;
  buffData = (BattleBuffData_o *)BattleServantData__getBuffIndividualities(targetSvt, 0, 0, 0, 0LL, v10);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 56) = buffData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)buffData, v12, v13);
  buffData = this->fields.buffData;
  if ( !buffData
    || (ActValue_42450036 = BattleBuffData__getActValue_42450036(
                              buffData,
                              8,
                              (BattleBuffData_CheckIndividualitiesData_o *)v7,
                              0LL),
        BuffIndividualities = BattleServantData__getBuffIndividualities(targetSvt, 1, 0, 0, 0LL, v15),
        *(_QWORD *)(v7 + 56) = BuffIndividualities,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)BuffIndividualities, v17, v18),
        (buffData = this->fields.buffData) == 0LL)
    || (buffData = (BattleBuffData_o *)BattleBuffData__getActValue_42450036(
                                         buffData,
                                         9,
                                         (BattleBuffData_CheckIndividualitiesData_o *)v7,
                                         0LL),
        (v19 = this->fields.buffData) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(buffData, v8);
  }
  return (float)(ActValue_42450036
               + v11
               + (int)buffData
               + BattleBuffData__getActValue_42450036(v19, 78, (BattleBuffData_CheckIndividualitiesData_o *)v7, 0LL))
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
  System_Int32_array *v10; // x1
  const MethodInfo *v11; // x5
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x4

  if ( (byte_4A5D8C0 & 1) == 0 )
  {
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8C0 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v8 = sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(
    (BattleBuffData_CheckIndividualitiesData_o *)v8,
    this,
    targetSvt,
    command,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( !targetSvt )
    goto LABEL_12;
  BuffIndividualities = BattleServantData__getBuffIndividualities(targetSvt, 0, 0, 0, 0LL, v11);
  v10 = BuffIndividualities;
  if ( IsConstantMasterIndvAddBuffActive )
  {
    BuffIndividualities = BattleServantData__getIndividualities_42960956(targetSvt, BuffIndividualities, 1, 0, v14);
    if ( !v8 )
      goto LABEL_12;
    v10 = BuffIndividualities;
  }
  else if ( !v8 )
  {
    goto LABEL_12;
  }
  *(_QWORD *)(v8 + 56) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 56), (int32_t)v10, v12, v13);
  BuffIndividualities = (System_Int32_array *)this->fields.buffData;
  if ( !BuffIndividualities )
LABEL_12:
    sub_1B8880C(BuffIndividualities, v10);
  return (float)BattleBuffData__getActValue_42450036(
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

  if ( (byte_4A5D8C5 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8C5 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, targetSvt, 0LL, command, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__getActMag_42451080(buffData, 10, v8, 0LL);
}


int64_t __fastcall BattleServantData__getUserSvtId(BattleServantData_o *this, const MethodInfo *method)
{
  __int128 v3; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v5; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+20h] [xbp-40h]

  if ( (byte_4A5D85B & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5D85B = 1;
  }
  v3 = *(_OWORD *)&this->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v6.fields.currentCryptoKey = *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v6.fields.fakeValue = v3;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v5 = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v5, 0LL);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(svtlimitaddent, isEffect);
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

  if ( (byte_4A5D8F6 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D8F6 = 1;
  }
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  svtdata = this->fields.svtdata;
  if ( !svtdata || !result )
    sub_1B8880C(result, v4);
  if ( !result->max_length )
    sub_1B88814(result, v4);
  result->m_Items[1] = svtdata->fields.attackAttri;
  return result;
}


int32_t __fastcall BattleServantData__getWeaponScale(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantLimitEntity_o *svtlimitDispent; // x8

  svtlimitDispent = this->fields.svtlimitDispent;
  if ( !svtlimitDispent )
    sub_1B8880C(this, method);
  return svtlimitDispent->fields.weaponScale;
}


AiStateManager_o *__fastcall BattleServantData__get_AiStateManager(BattleServantData_o *this, const MethodInfo *method)
{
  AiStateManager_o *aiStateManager; // x20
  AiState_o *aiState; // x21
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5D82C & 1) == 0 )
  {
    sub_1B885B0(&AiStateManager_TypeInfo);
    byte_4A5D82C = 1;
  }
  aiStateManager = this->fields._aiStateManager;
  if ( !aiStateManager )
  {
    aiState = this->fields.aiState;
    aiStateManager = (AiStateManager_o *)sub_1B887FC(AiStateManager_TypeInfo);
    AiStateManager___ctor(aiStateManager, aiState, 0LL);
    this->fields._aiStateManager = aiStateManager;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._aiStateManager, (int32_t)aiStateManager, v5, v6);
  }
  return aiStateManager;
}


System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__o *__fastcall BattleServantData__get_BattlePointList(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battlePointList; // x0

  if ( (byte_4A5D839 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattlePointData__AsReadOnly__);
    byte_4A5D839 = 1;
  }
  battlePointList = (System_Collections_Generic_List_object__o *)this->fields.battlePointList;
  if ( !battlePointList )
    sub_1B8880C(0LL, method);
  return (System_Collections_ObjectModel_ReadOnlyCollection_BattlePointData__o *)System_Collections_Generic_List_object___AsReadOnly(
                                                                                   battlePointList,
                                                                                   (const MethodInfo_34FDA5C *)Method_System_Collections_Generic_List_BattlePointData__AsReadOnly__);
}


int32_t __fastcall BattleServantData__get_BattleSize(BattleServantData_o *this, const MethodInfo *method)
{
  struct ServantEntity_o *svtdata; // x8

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_1B8880C(this, method);
  return svtdata->fields.battleSize;
}


BattleBuffData_o *__fastcall BattleServantData__get_BuffData(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  ServantStatusBattleListViewItem_o *p_buffData; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5D832 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_TypeInfo);
    byte_4A5D832 = 1;
  }
  buffData = this->fields.buffData;
  if ( !buffData )
  {
    p_buffData = (ServantStatusBattleListViewItem_o *)&this->fields.buffData;
    buffData = (BattleBuffData_o *)sub_1B887FC(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(buffData, 0LL);
    p_buffData->klass = (ServantStatusBattleListViewItem_c *)buffData;
    sub_1B88554(p_buffData, (int32_t)buffData, v5, v6);
  }
  return buffData;
}


int32_t __fastcall BattleServantData__get_CriticalIndividuality(const MethodInfo *method)
{
  int32_t result; // w0

  if ( (byte_4A5D8F0 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData_TypeInfo);
    sub_1B885B0(&StringLiteral_3936/*"CRITICAL_INDIVIDUALITY"*/);
    byte_4A5D8F0 = 1;
  }
  result = BattleServantData_TypeInfo->static_fields->_CriticalIndividuality;
  if ( !result )
  {
    result = ConstantMaster__getValue((System_String_o *)StringLiteral_3936/*"CRITICAL_INDIVIDUALITY"*/, 0LL);
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
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  BattleBuffData_BuffData_o *FirstMatchCondBuff; // x0
  int32_t *p_param; // x8

  if ( (byte_4A5D870 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D870 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData
    && (v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo),
        BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
        (FirstMatchCondBuff = BattleBuffData__GetFirstMatchCondBuff(buffData, 109, v4, 1, 0LL, 0LL)) != 0LL) )
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
    sub_1B8880C(0LL, method);
  return BattleDeckServantData__isSuperBossUi(deckSvt, 0LL);
}


ServantAssetArgs_o *__fastcall BattleServantData__get_LoadedAssetArgs(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields._LoadedAssetArgs_k__BackingField;
}


EnemyScriptParam_OverwriteShiftIcon_array *__fastcall BattleServantData__get_OverwriteShiftIconArray(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields._OverwriteShiftIconArray_k__BackingField;
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
  __int64 v10; // x1
  int32_t v11; // w21
  int32_t v12; // w0
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w20
  int32_t v16; // w21
  const MethodInfo *v17; // x2
  int32_t selectedTDId; // w1
  int32_t v19; // w0
  TreasureDvcEntity_o *v20; // x0
  __int64 v21; // x20
  __int64 v22; // x21
  __int64 v23; // x19
  __int64 v24; // x20
  int32_t tdIdChangeByBattlePoint; // [xsp+Ch] [xbp-24h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4A5D82E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D82E = 1;
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
        if ( BattleBuffData__isTDTypeChange(buffData, this, 0LL, 0LL) )
        {
          TreasureDevice = BattleServantData__get_TreasureDevice(this, v6);
          LimitCount = (BattleBuffData_BuffData_o *)BattleServantData__getLimitCount(this, v8);
          if ( !this->fields.buffData
            || (v11 = (int)LimitCount,
                (LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL, 0LL)) == 0LL)
            || !TreasureDevice )
          {
            sub_1B8880C(LimitCount, v10);
          }
          v12 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(TreasureDevice, v11, LimitCount->fields.param, 0LL);
          v14 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
          v13 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
          v15 = v12;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v27.fields.currentCryptoKey = v14;
          *(_QWORD *)&v27.fields.fakeValue = v13;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v27, 0LL);
          selectedTDId = BattleServantData__GetTdIdChangeByBattlePoint(this, v15, v17);
          v19 = v16;
          return ServantTreasureDvcMaster__getEntityFromIDID(v19, selectedTDId, 0LL);
        }
      }
    }
    v20 = this->fields.TDvc;
    if ( v20 && TreasureDvcEntity__IsTDTypeChange(v20, 0LL) && this->fields.selectedTDId != -1 )
    {
      v22 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v28.fields.currentCryptoKey = v22;
      *(_QWORD *)&v28.fields.fakeValue = v21;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v28, 0LL);
      selectedTDId = this->fields.selectedTDId;
      return ServantTreasureDvcMaster__getEntityFromIDID(v19, selectedTDId, 0LL);
    }
  }
  if ( BattleServantData__TryGetTdIdChangeByBattlePoint(this, this->fields.TDvc, &tdIdChangeByBattlePoint, v2) )
  {
    v24 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v29.fields.currentCryptoKey = v24;
    *(_QWORD *)&v29.fields.fakeValue = v23;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v29, 0LL);
    selectedTDId = tdIdChangeByBattlePoint;
    return ServantTreasureDvcMaster__getEntityFromIDID(v19, selectedTDId, 0LL);
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
  __int64 v10; // x1
  int32_t v11; // w21
  int32_t v12; // w21
  const MethodInfo *v13; // x1
  TreasureDvcLvMaster_o *TdLvDataMasterBase; // x20
  const MethodInfo *v15; // x2
  int32_t treasuredvcLevel; // w2
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
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
        if ( BattleBuffData__isTDTypeChange(buffData, this, 0LL, 0LL) )
        {
          TreasureDevice = BattleServantData__get_TreasureDevice(this, v6);
          LimitCount = (void *)BattleServantData__getLimitCount(this, v8);
          if ( this->fields.buffData )
          {
            v11 = (int)LimitCount;
            LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL, 0LL);
            if ( LimitCount )
            {
              if ( TreasureDevice )
              {
                v12 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(
                        TreasureDevice,
                        v11,
                        *((_DWORD *)LimitCount + 7),
                        0LL);
                TdLvDataMasterBase = BattleServantData__get_TdLvDataMasterBase(this, v13);
                LimitCount = (void *)BattleServantData__GetTdIdChangeByBattlePoint(this, v12, v15);
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
    v18 = this->fields.TDvc;
    if ( v18 && TreasureDvcEntity__IsTDTypeChange(v18, 0LL) && this->fields.selectedTDId != -1 )
    {
      LimitCount = BattleServantData__get_TdLvDataMasterBase(this, v19);
      if ( LimitCount )
      {
        treasuredvcLevel = this->fields.treasuredvcLevel;
        selectedTDId = this->fields.selectedTDId;
        return TreasureDvcLvMaster__GetEntity((TreasureDvcLvMaster_o *)LimitCount, selectedTDId, treasuredvcLevel, 0LL);
      }
LABEL_21:
      sub_1B8880C(LimitCount, v10);
    }
  }
  if ( BattleServantData__TryGetTdIdChangeByBattlePoint(this, this->fields.TDvc, &tdIdChangeByBattlePoint, v2) )
  {
    LimitCount = BattleServantData__get_TdLvDataMasterBase(this, v20);
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
  TreasureDvcMaster_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantStatusBattleListViewItem_o *p_tdDataMasterBase; // x19
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D830 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D830 = 1;
  }
  result = this->fields.tdDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v5);
    p_tdDataMasterBase = (ServantStatusBattleListViewItem_o *)&this->fields.tdDataMasterBase;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
    p_tdDataMasterBase->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B88554(p_tdDataMasterBase, (int32_t)MasterData_object, v8, v9);
    return (TreasureDvcMaster_o *)p_tdDataMasterBase->klass;
  }
  return result;
}


TreasureDvcLvMaster_o *__fastcall BattleServantData__get_TdLvDataMasterBase(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  TreasureDvcLvMaster_o *result; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  ServantStatusBattleListViewItem_o *p_tdLvDataMasterBase; // x19
  Il2CppObject *MasterData_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D831 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D831 = 1;
  }
  result = this->fields.tdLvDataMasterBase;
  if ( !result )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v5);
    p_tdLvDataMasterBase = (ServantStatusBattleListViewItem_o *)&this->fields.tdLvDataMasterBase;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    p_tdLvDataMasterBase->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B88554(p_tdLvDataMasterBase, (int32_t)MasterData_object, v8, v9);
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
  __int64 v9; // x1
  int32_t v10; // w21
  int32_t v11; // w21
  const MethodInfo *v12; // x1
  TreasureDvcMaster_o *TdDataMasterBase; // x20
  const MethodInfo *v14; // x2
  int32_t selectedTDId; // w1
  TreasureDvcEntity_o *v16; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  int32_t tdIdChangeByBattlePoint; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D82F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    byte_4A5D82F = 1;
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
        if ( BattleBuffData__isTDTypeChange(buffData, this, 0LL, 0LL) )
        {
          v7 = this->fields.TDvc;
          LimitCount = (void *)BattleServantData__getLimitCount(this, v6);
          if ( this->fields.buffData )
          {
            v10 = (int)LimitCount;
            LimitCount = BattleBuffData__getTDTypeChangeBuffData(this->fields.buffData, this, 0LL, 0LL);
            if ( LimitCount )
            {
              if ( v7 )
              {
                v11 = TreasureDvcEntity__getTDTypeChangeIdEachLimit(v7, v10, *((_DWORD *)LimitCount + 7), 0LL);
                TdDataMasterBase = BattleServantData__get_TdDataMasterBase(this, v12);
                LimitCount = (void *)BattleServantData__GetTdIdChangeByBattlePoint(this, v11, v14);
                if ( TdDataMasterBase )
                {
                  selectedTDId = (int)LimitCount;
                  LimitCount = TdDataMasterBase;
                  return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)LimitCount,
                                                  selectedTDId,
                                                  (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
                }
              }
            }
          }
          goto LABEL_23;
        }
      }
    }
    v16 = this->fields.TDvc;
    if ( v16 && TreasureDvcEntity__IsTDTypeChange(v16, 0LL) && this->fields.selectedTDId != -1 )
    {
      LimitCount = BattleServantData__get_TdDataMasterBase(this, v17);
      if ( LimitCount )
      {
        selectedTDId = this->fields.selectedTDId;
        return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)LimitCount,
                                        selectedTDId,
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
      }
LABEL_23:
      sub_1B8880C(LimitCount, v9);
    }
  }
  if ( BattleServantData__TryGetTdIdChangeByBattlePoint(this, this->fields.TDvc, &tdIdChangeByBattlePoint, v2) )
  {
    LimitCount = BattleServantData__get_TdDataMasterBase(this, v18);
    if ( LimitCount )
    {
      selectedTDId = tdIdChangeByBattlePoint;
      return (TreasureDvcEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)LimitCount,
                                      selectedTDId,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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


System_Collections_Generic_List_int__o *__fastcall BattleServantData__get_receiveFunctionIdList(
        BattleServantData_o *this,
        const MethodInfo *method)
{
  return this->fields._receiveFunctionIdList_k__BackingField;
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
    sub_1B8880C(0LL, method);
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
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D8A6 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17810/*"changeHp"*/);
    byte_4A5D8A6 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  MaxHp = BattleServantData__getMaxHp(this, *(const MethodInfo **)&heal);
  if ( !isForce )
  {
    buffData = this->fields.buffData;
    v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v9, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_19;
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
LABEL_19:
    sub_1B8880C(paramobjelist, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v18 )
    {
      if ( !current )
        sub_1B8880C(v18, v19);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17810/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5D89E & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D89E = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
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
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x5
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  System_Int32_array *Individualities; // x0
  System_Int32_array_array *resValues; // [xsp+8h] [xbp-38h] BYREF
  BattleBuffData_BuffData_o *buff; // [xsp+18h] [xbp-28h] BYREF

  isAlive = BattleServantData__isAlive(this, 0, (const MethodInfo *)indiv);
  if ( !isAlive )
  {
    buff = 0LL;
    isAlive = BattleServantData__isGuts_42945444(this, &buff, v11);
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
    sub_1B8880C(isAlive, v10);
  if ( info->fields.isIndiv )
  {
    Individualities = BattleServantData__getIndividualities(this, 0LL, 1, 0, v12);
    return Individuality__CheckIndividualities_37696972(Individualities, indiv, 0LL);
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
    if ( BattleServantData__isGuts_42945444(this, &buff, v6)
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
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5D8E4 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8E4 = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, command, 0LL, 0LL, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B8880C(0LL, v12);
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
  __int64 v12; // x1
  BattleBuffData_o *buffData; // x0
  bool ActBuff; // w0
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5D8E5 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8E5 = 1;
  }
  value = 0;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, opSvt, 0LL, command, 0LL, 0LL, 0LL);
  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B8880C(0LL, v12);
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
  __int64 v8; // x1

  if ( (byte_4A5D89F & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D89F = 1;
  }
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, this, 0LL, commandType, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v7, v8);
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
    sub_1B8880C(0LL, method);
  ActiveList = BattleBuffData__getActiveList(buffData, 1, 0LL);
  return BattleServantData__isChangeAppearanceBuff(this, ActiveList, v6);
}


bool __fastcall BattleServantData__isChangeAppearanceBuff(
        BattleServantData_o *this,
        BattleBuffData_BuffData_array *list,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  il2cpp_array_size_t v9; // w22
  Il2CppClass **v10; // x23
  char *v11; // x23
  Il2CppObject *v12; // t1
  int32_t v13; // w8
  int32_t AppearanceId; // w0

  if ( (byte_4A5D90C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D90C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !list )
    goto LABEL_21;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        goto LABEL_22;
      v10 = &list->obj.klass + (int)v9;
      v12 = (Il2CppObject *)v10[4];
      v11 = (char *)(v10 + 4);
      Instance = v12;
      if ( !v12 )
        goto LABEL_21;
      Instance = (Il2CppObject *)BattleBuffData_BuffData__checkState((BattleBuffData_BuffData_o *)Instance, 256, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      max_length = list->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_11;
    }
    if ( v9 >= list->max_length )
LABEL_22:
      sub_1B88814(Instance, v6);
    if ( *(_QWORD *)v11 )
    {
      if ( v8 )
      {
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v8,
                     *(_DWORD *)(*(_QWORD *)v11 + 16LL),
                     (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
    sub_1B8880C(Instance, v6);
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
    sub_1B8880C(this, method);
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


bool __fastcall BattleServantData__isGainNp(
        BattleServantData_o *this,
        bool checkCount,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x22
  BattleBuffData_CheckIndividualitiesData_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  bool isTurnBuff; // w21

  if ( (byte_4A5D8D6 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8D6 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  isTurnBuff = BattleBuffData__isTurnBuff(buffData, 75, v8, checkCount, 0LL);
  if ( dataVal && isTurnBuff )
    DataVals__SetInvalidCauseByAnyBuff(dataVal, this->fields.uniqueId, 0LL);
  return !isTurnBuff;
}


bool __fastcall BattleServantData__isGuts(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_o *buff; // [xsp+8h] [xbp-8h] BYREF

  buff = 0LL;
  return BattleServantData__isGuts_42945444(this, &buff, v2);
}


bool __fastcall BattleServantData__isGuts_42945444(
        BattleServantData_o *this,
        BattleBuffData_BuffData_o **buff,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x1
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_array *v9; // x0
  __int64 v10; // x1

  *buff = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)buff, 0, (int32_t)method, v3);
  if ( this->fields.isDeadAnime || this->fields.isSystemDead )
    return 0;
  buffData = this->fields.buffData;
  v9 = BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(this, v6);
  if ( !buffData )
    sub_1B8880C(v9, v10);
  return BattleBuffData__isGuts(buffData, buff, v9, 0LL);
}


bool __fastcall BattleServantData__isHeroine(BattleServantData_o *this, const MethodInfo *method)
{
  ServantEntity_o *svtdata; // x0

  svtdata = this->fields.svtdata;
  if ( !svtdata )
    sub_1B8880C(0LL, method);
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
    return !BattleServantData__isGuts_42945444(this, &buff, v3);
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
    sub_1B8880C(0LL, method);
  return ServantEntity__IsNameTrue(svtdata, 0LL);
}


bool __fastcall BattleServantData__isNobleAction(BattleServantData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t invokeAct; // [xsp+Ch] [xbp-4h] BYREF

  invokeAct = 0;
  return BattleServantData__isNobleAction_42950052(this, &invokeAct, v2);
}


bool __fastcall BattleServantData__isNobleAction_42950052(
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

  if ( (byte_4A5D8A2 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8A2 = 1;
  }
  buffData = this->fields.buffData;
  TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(this, method);
  v5 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v5, this, 0LL, TreasureDvcCommand, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v6, v7);
  return BattleBuffData__isTurnBuff(buffData, 82, v5, 0, 0LL);
}


bool __fastcall BattleServantData__isNobleSeal(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5D8A1 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D8A1 = 1;
  }
  buffData = this->fields.buffData;
  v4 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v4, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v5, v6);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, effectId);
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
    sub_1B8880C(TDvcLv, v5);
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
    sub_1B8880C(this, targetRarityList);
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
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  BattleBuffData_BuffData_o *usedBuff; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D894 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D894 = 1;
  }
  usedBuff = 0LL;
  buffData = this->fields.buffData;
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor_42624320(v6, this, 0LL, 0LL, opSvtIndiv, 0LL, 0LL, 0LL);
  if ( !buffData )
    sub_1B8880C(v7, v8);
  return BattleBuffData__checkActBuff_42454204(buffData, 45, v6, &usedBuff, 0LL, 0LL);
}


bool __fastcall BattleServantData__isUseSelfSkill(BattleServantData_o *this, int32_t index, const MethodInfo *method)
{
  BattleServantData___c__DisplayClass420_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *skillInfoList; // x19
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x0

  if ( (byte_4A5D871 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
    sub_1B885B0(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass420_0__isUseSelfSkill_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass420_0_TypeInfo);
    byte_4A5D871 = 1;
  }
  v5 = (BattleServantData___c__DisplayClass420_0_o *)sub_1B887FC(BattleServantData___c__DisplayClass420_0_TypeInfo);
  BattleServantData___c__DisplayClass420_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.index = index,
        skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList,
        v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleSkillInfoData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_BattleServantData___c__DisplayClass420_0__isUseSelfSkill_b__0__,
          0LL),
        !skillInfoList) )
  {
    sub_1B8880C(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          skillInfoList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
  if ( v10 )
  {
    if ( BYTE4(v10[1].monitor) )
      LOBYTE(v10) = 0;
    else
      LOBYTE(v10) = BYTE4(v10[3].klass) != 0;
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5D8F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__);
    byte_4A5D8F7 = 1;
  }
  actionHistory = (System_Collections_Generic_LinkedList_T__o *)this->fields.actionHistory;
  if ( !actionHistory )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_LinkedList_object___Clear(
    actionHistory,
    (const MethodInfo_343F578 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__Clear__);
}


void __fastcall BattleServantData__resetParamObject(BattleServantData_o *this, const MethodInfo *method)
{
  BattleServantData_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4A5D890 & 1) == 0 )
  {
    this = (BattleServantData_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    byte_4A5D890 = 1;
  }
  paramobjelist = v2->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B8880C(this, method);
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
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D8A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D8A7 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B8880C(0LL, funcName);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        funcName,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__setActionHistory(
        BattleServantData_o *this,
        int32_t actUniqueId,
        int32_t actType,
        int32_t wavecount,
        bool isOpponent,
        const MethodInfo *method)
{
  BattleServantActionHistory_o *v11; // x24
  __int64 v12; // x1
  System_Collections_Generic_LinkedList_T__o *actionHistory; // x0

  if ( (byte_4A5D8F8 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantActionHistory_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__);
    byte_4A5D8F8 = 1;
  }
  v11 = (BattleServantActionHistory_o *)sub_1B887FC(BattleServantActionHistory_TypeInfo);
  BattleServantActionHistory___ctor(v11, actType, actUniqueId, wavecount, isOpponent, 0LL);
  actionHistory = (System_Collections_Generic_LinkedList_T__o *)this->fields.actionHistory;
  if ( !actionHistory )
    sub_1B8880C(0LL, v12);
  System_Collections_Generic_LinkedList_object___AddLast(
    actionHistory,
    (Il2CppObject *)v11,
    (const MethodInfo_343F498 *)Method_System_Collections_Generic_LinkedList_BattleServantActionHistory__AddLast__);
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
    sub_1B8880C(this, inDeckSvt);
  UserServantFromID = BattleInfoData__getUserServantFromID((BattleInfoData_o *)this, inDeckSvt->fields.userSvtId, 0LL);
  BattleServantData__setBaseServantData_42901032(
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


void __fastcall BattleServantData__setBaseServantData_42901032(
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
  __int64 v16; // x29
  __int64 Instance; // x0
  Il2CppObject *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  struct BattleDeckServantData_o **v21; // x24
  BaseBattleServantEvent_o *ServantEvent; // x0
  struct BattleDeckServantData_o *v23; // x1
  BaseBattleServantEvent_o *v24; // x28
  int32_t v25; // w2
  int32_t v26; // w3
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x21
  __int128 v29; // q0
  int32_t exceedCount; // w21
  const MethodInfo *v31; // x2
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // kr00_16
  struct BattleDeckServantData_o *v33; // x8
  int32_t BattleSvtId; // w21
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  struct BattleDeckServantData_o *v40; // x8
  struct System_String_o *name; // x1
  int32_t v42; // w0
  const MethodInfo *v43; // x2
  struct System_String_o *ServantOverwriteName; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  struct BattleDeckServantData_o *v49; // x8
  struct DropInfo_array *dropInfos; // x1
  struct System_Int32_array *individuality; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *MasterData_object; // x21
  Il2CppObject *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  struct ServantEntity_o *svtdata; // x8
  Il2CppObject *v59; // x23
  const MethodInfo *v60; // x1
  int32_t SvtId; // w24
  struct ServantLimitEntity_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  struct ServantEntity_o *v65; // x8
  ServantLimitAddMaster_o *v66; // x24
  __int64 v67; // x21
  __int64 v68; // x25
  int32_t v69; // w25
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x1
  int32_t v72; // w25
  const MethodInfo *v73; // x2
  int32_t DispLimitCount; // w0
  const MethodInfo *v75; // x1
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  int32_t battleCharaLimitCount; // w2
  int32_t v78; // w1
  ServantLimitMaster_o *v79; // x0
  struct ServantLimitEntity_o *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  BattleUserServantData_o *UserServantFromID; // x20
  __int64 v84; // x23
  struct BattleUserServantData_array *v85; // x0
  struct BattleUserServantData_array **p_equipList; // x24
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t v89; // w2
  int32_t v90; // w3
  struct BattleUserServantData_array *equipList; // x20
  unsigned __int64 v92; // x22
  int32_t v93; // w2
  int32_t v94; // w3
  __int64 v95; // x21
  Il2CppClass **v96; // x0
  unsigned __int64 max_length; // x8
  int32x2_t *v98; // x9
  int32_t maxhp; // w10
  int32_t equiphp; // w11
  struct System_Int64_array *userCommandCodeIds; // x1
  struct System_Int64_array **p_userCommandCodeIds; // x24
  int32_t v103; // w2
  int32_t v104; // w3
  struct System_Int64_array *v105; // x1
  System_Collections_Generic_List_object__o *v106; // x21
  struct System_Collections_Generic_List_CommandCodeInfo__o **p_commandCodeList_k__BackingField; // x23
  int32_t v108; // w2
  int32_t v109; // w3
  int32_t v110; // w2
  int32_t v111; // w3
  unsigned __int64 v112; // x22
  __int64 v113; // x21
  int32_t v114; // w2
  int32_t v115; // w3
  CommandCodeInfo_o *v116; // x1
  System_Int64_array *v117; // x28
  System_Func_long__bool__o *v118; // x27
  __int64 v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  __int64 v122; // x8
  struct System_Int32_array *commandCardParam; // x1
  int32_t v124; // w2
  int32_t v125; // w3
  struct System_Int32_array *v126; // x1
  System_Int32_array *BattleSkillIdList; // x0
  int32_t v128; // w2
  int32_t v129; // w3
  __int64 v130; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  System_Collections_Generic_List_object__o *v133; // x28
  System_Collections_Generic_IEnumerable_T__o *skillInfoList; // x21
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v135; // x8
  int32_t size; // w2
  int v137; // w9
  __int64 v138; // x24
  int32_t v139; // w2
  int32_t v140; // w3
  const MethodInfo *v141; // x2
  __int64 v142; // x9
  int v143; // w8
  __int64 v144; // x9
  System_Predicate_object__o *v145; // x21
  __int64 v146; // x9
  __int64 v147; // x8
  __int64 v148; // x2
  __int64 v149; // x9
  struct BattleUserServantData_array *v150; // x8
  struct BattleUserServantData_array **v151; // x20
  unsigned __int8 v152; // w22
  unsigned __int64 v153; // x21
  int v154; // w24
  unsigned __int64 v155; // x9
  struct BattleUserServantData_array *v156; // x8
  __int64 v157; // x27
  __int64 v158; // x8
  __int64 v159; // x28
  unsigned __int64 v160; // x20
  __int64 v161; // x25
  System_Collections_Generic_List_object__o *v162; // x8
  CommandCodeSkillMaster_o *v163; // x24
  int v164; // w28
  int32_t v165; // w25
  int v166; // w8
  __int64 v167; // x27
  int i; // w20
  __int64 v169; // x8
  int32_t v170; // w21
  const MethodInfo *v171; // x3
  int32_t Value; // w0
  int32_t nplineCount; // w8
  int v174; // w8
  System_Collections_Generic_IEnumerable_TSource__o *TDErrorVoiceSeArray; // x0
  int32_t v176; // w2
  int32_t v177; // w3
  struct System_Collections_Generic_List_string__o *v178; // x1
  struct System_Int32_array **p_commandAssistIds; // x29
  struct System_Int32_array *v180; // x0
  int32_t v181; // w2
  int32_t v182; // w3
  System_Predicate_object__o *v183; // x21
  struct System_Int32_array *v184; // x8
  System_Collections_Generic_List_object__o *v185; // x24
  unsigned __int64 v186; // x26
  _BOOL8 v187; // x0
  __int64 v188; // x1
  struct System_Int32_array *v189; // x9
  System_Collections_Hashtable_o *v190; // x21
  int32_t v191; // w2
  int32_t v192; // w3
  Il2CppObject *v193; // x24
  __int64 v194; // x25
  unsigned __int64 v195; // x29
  __int64 v196; // x21
  __int64 v197; // x26
  __int64 v198; // x2
  __int64 v199; // x3
  __int64 v200; // x4
  struct System_Collections_Hashtable_o *commandtable; // x26
  __int64 v202; // x0
  __int64 v203; // x21
  __int64 v204; // x28
  __int64 v205; // x27
  BattleDeckServantData_o *v206; // x8
  BattleUserServantData_o *v207; // x20
  int32_t KillType; // w0
  BattleDeckServantData_o *v209; // x8
  bool isRaid; // w0
  int32_t RaidId; // w0
  struct System_String_o *StartRaidState; // x0
  int32_t v213; // w2
  int32_t v214; // w3
  BattleDeckServantData_o *v215; // x8
  BattleDeckServantData_o *v216; // x8
  bool isSuperBoss; // w0
  int32_t SuperBossId; // w0
  bool isSendDamageForSuperBossId; // w0
  BattleDeckServantData_o *v220; // x21
  __int64 v221; // x22
  __int64 v222; // x23
  __int64 v223; // x21
  __int64 v224; // x22
  __int64 v225; // x21
  __int64 v226; // x22
  int32_t v227; // w0
  const MethodInfo *v228; // x2
  struct System_String_o *BattleServantOverwriteName; // x0
  int32_t v230; // w2
  int32_t v231; // w3
  struct BattleDeckServantData_o *v232; // x8
  __int64 v233; // d0
  int32_t v234; // w22
  ServantChangeMaster_o *v235; // x21
  ServantChangeEntity_o *v236; // x0
  Il2CppObject *v237; // x21
  UserServantCollectionEntity_o *v238; // x22
  __int64 v239; // x21
  __int64 v240; // x23
  int32_t v241; // w2
  int32_t v242; // w3
  struct BattleDeckServantData_o *v243; // x8
  int32_t v244; // w21
  int32_t svtCommonFlag; // w23
  Il2CppObject *v246; // x0
  __int64 v247; // x23
  __int64 v248; // x24
  UserNpcSvtRecordMaster_o *v249; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v250; // x0
  int32_t v251; // w2
  int32_t v252; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v253; // x1
  struct System_Int32_array *v254; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v255; // x0
  struct System_Int32_array **p_tdplayed; // x0
  int32_t NpcFriendShipRank; // w21
  int32_t v258; // w2
  int32_t v259; // w3
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  struct AddSkillData_array *classBoardAddPassiveSkills; // x1
  int32_t v262; // w2
  int32_t v263; // w3
  struct System_Int32_array *classBoardSquareIds; // x1
  int32_t v265; // w2
  int32_t v266; // w3
  const MethodInfo *v267; // x1
  struct System_Collections_Generic_List_BattlePointData__o *battlePointList; // x8
  int32_t v269; // w2
  int v270; // w9
  Il2CppObject *v271; // x0
  __int64 v272; // x21
  __int64 v273; // x22
  ServantBattlePointMaster_o *v274; // x20
  __int64 v275; // x8
  __int64 v276; // x20
  __int64 v277; // x9
  int *v278; // x10
  __int64 v279; // x0
  __int64 v280; // x1
  __int64 v281; // x20
  __int64 v282; // x8
  __int64 v283; // x9
  int *v284; // x10
  __int64 v285; // x0
  __int64 v286; // x8
  __int64 v287; // x9
  int *v288; // x10
  __int64 v289; // x0
  __int64 v290; // x0
  __int64 v291; // x1
  System_Collections_Generic_List_object__o *v292; // x21
  int32_t v293; // w23
  BattlePointData_o *v294; // x22
  __int64 v295; // x0
  __int64 v296; // x1
  int32_t v297; // w2
  int32_t v298; // w3
  struct System_Object_array *items; // x8
  _QWORD *v300; // x9
  __int64 v301; // x10
  Il2CppClass **v302; // x0
  __int64 v303; // x8
  __int64 v304; // x9
  int *v305; // x10
  __int64 v306; // x0
  struct System_Int32_array *tdPlayed; // x1
  __int64 v308; // x0
  const MethodInfo *v309; // [xsp+0h] [xbp-150h]
  int32_t eventIda; // [xsp+1Ch] [xbp-134h]
  System_Collections_Generic_List_object__o *v311; // [xsp+20h] [xbp-130h]
  int32_t *p_aiId; // [xsp+28h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_svtdata; // [xsp+38h] [xbp-118h]
  BattleUserServantData_o *v315; // [xsp+48h] [xbp-108h]
  BattleInfoData_o *v316; // [xsp+50h] [xbp-100h]
  struct BattleDeckServantData_o **p_deckSvt; // [xsp+58h] [xbp-F8h]
  __int64 v318; // [xsp+60h] [xbp-F0h]
  BattleUserServantData_o *v319; // [xsp+68h] [xbp-E8h]
  Il2CppObject *object; // [xsp+70h] [xbp-E0h]
  unsigned __int8 objecta; // [xsp+70h] [xbp-E0h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v322; // [xsp+80h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v323; // [xsp+A0h] [xbp-B0h] BYREF
  ServantCardEntity_o *entity; // [xsp+C8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v325; // [xsp+D0h] [xbp-80h] BYREF
  System_RuntimeFieldHandle_o v326; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v327; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v328; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v329; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v330; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v331; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v332; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v333; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v334; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v335; // 0:x0.16

  if ( (byte_4A5D849 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_long___);
    sub_1B885B0(&BattleData_TypeInfo);
    sub_1B885B0(&BattlePointData_TypeInfo);
    sub_1B885B0(&BattleUserServantData___TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantBattlePointMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCardMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Concat_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_commandAssistData__get_Current__);
    sub_1B885B0(&System_Func_long__bool__TypeInfo);
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattlePointData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommandCodeInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattlePointData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_commandAssistData__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommandCodeInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___76024920);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_CommandCodeInfo__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&System_Predicate_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Predicate_commandAssistData__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass320_0__setBaseServantData_b__1__);
    sub_1B885B0(&BattleServantData___c__DisplayClass320_0_TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass320_1__setBaseServantData_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass320_1_TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass320_2__setBaseServantData_b__2__);
    sub_1B885B0(&BattleServantData___c__DisplayClass320_2_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_6551/*"FULL_TD_POINT"*/);
    byte_4A5D849 = 1;
  }
  memset(&v325, 0, sizeof(v325));
  entity = 0LL;
  v16 = sub_1B887FC(BattleServantData___c__DisplayClass320_0_TypeInfo);
  BattleServantData___c__DisplayClass320_0___ctor((BattleServantData___c__DisplayClass320_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_131;
  *(_QWORD *)(v16 + 16) = inDeckSvt;
  v21 = (struct BattleDeckServantData_o **)(v16 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)inDeckSvt, v19, v20);
  if ( !battleInfo )
    goto LABEL_131;
  ServantEvent = BattleInfoData__GetServantEvent(battleInfo, 0LL);
  v23 = *v21;
  v24 = ServantEvent;
  this->fields.deckSvt = *v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckSvt, (int32_t)v23, v25, v26);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_131;
  this->fields.index = deckSvt->fields.id - 1;
  this->fields.uniqueId = deckSvt->fields.uniqueId;
  userSvtId = deckSvt->fields.userSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  Instance = (__int64)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v322, userSvtId, 0LL);
  v29 = *(_OWORD *)&v322.fields.fakeValue;
  v323 = v322;
  *(_OWORD *)&this->fields.userSvtId.fields.currentCryptoKey = *(_OWORD *)&v322.fields.currentCryptoKey;
  *(_OWORD *)&this->fields.userSvtId.fields.fakeValue = v29;
  if ( !userSvt )
    goto LABEL_131;
  exceedCount = userSvt->fields.exceedCount;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(exceedCount, 0LL);
  v18 = *(Il2CppObject **)&v32.fields.fakeValue;
  Instance = *(_QWORD *)&v32.fields.currentCryptoKey;
  v33 = this->fields.deckSvt;
  this->fields.exceedCount = v32;
  if ( !v33 )
    goto LABEL_131;
  object = (Il2CppObject *)v16;
  v318 = (__int64)v24;
  eventIda = eventId;
  if ( v33->fields.isFollowerSvt )
    this->fields.followerType = Follower__getType(infollowerType, 0LL);
  BattleServantData__CalculateLimitCountWithSpoilerProtection(this, userSvt, v31);
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
  v35 = (int)StringLiteral_1/*""*/;
  this->fields.statestring = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statestring, v35, v36, v37);
  v40 = this->fields.deckSvt;
  this->fields.atktdrate = userSvt->fields.tdAttackRate;
  if ( !v40 )
    goto LABEL_131;
  name = v40->fields.name;
  this->fields.svtName = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtName, (int32_t)name, v38, v39);
  this->fields.overkillTargetId = -1;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvt->fields.svtId, 0LL);
  ServantOverwriteName = BattleServantData__getServantOverwriteName(this, v42, v43);
  this->fields.svtOverwriteName = ServantOverwriteName;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteName,
    (int32_t)ServantOverwriteName,
    v45,
    v46);
  v49 = this->fields.deckSvt;
  *(_QWORD *)&this->fields.displayType = *(_QWORD *)&userSvt->fields.displayType;
  if ( !v49 )
    goto LABEL_131;
  dropInfos = v49->fields.dropInfos;
  this->fields.droplist = dropInfos;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.droplist, (int32_t)dropInfos, v47, v48);
  individuality = userSvt->fields.individuality;
  this->fields.svtIndividuality = individuality;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtIndividuality, (int32_t)individuality, v52, v53);
  this->fields.flgEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)userSvt, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = BattleUserServantData__getBattleSvtId(userSvt, 0LL);
  if ( !MasterData_object )
    goto LABEL_131;
  v55 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          Instance,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  this->fields.svtdata = (struct ServantEntity_o *)v55;
  p_svtdata = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&this->fields.svtdata;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtdata, (int32_t)v55, v56, v57);
  svtdata = this->fields.svtdata;
  if ( !svtdata )
    goto LABEL_131;
  this->fields.svtType = svtdata->fields.type;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  v59 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  SvtId = BattleServantData__getSvtId(this, v60);
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(this->fields.limitcount, 0LL);
  if ( !v59 )
    goto LABEL_131;
  if ( !ServantLimitMaster__TryGetEntity((ServantLimitMaster_o *)v59, &this->fields.svtlimitent, SvtId, Instance, 0LL) )
  {
    v62 = ServantLimitMaster__GetEntity((ServantLimitMaster_o *)v59, 100100, 0, 0LL);
    this->fields.svtlimitent = v62;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtlimitent, (int32_t)v62, v63, v64);
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  p_deckSvt = &this->fields.deckSvt;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  v65 = this->fields.svtdata;
  if ( !v65 )
    goto LABEL_131;
  v66 = (ServantLimitAddMaster_o *)Instance;
  v68 = *(_QWORD *)&v65->fields.id.fields.currentCryptoKey;
  v67 = *(_QWORD *)&v65->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v327.fields.currentCryptoKey = v68;
  *(_QWORD *)&v327.fields.fakeValue = v67;
  v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v327, 0LL);
  Instance = BattleServantData__getDispLimitCount(this, 1, v70);
  if ( !v66 )
    goto LABEL_131;
  ServantLimitAddMaster__TryGetEntity(v66, &this->fields.svtlimitaddent, v69, Instance, 0LL);
  v72 = BattleServantData__getSvtId(this, v71);
  DispLimitCount = BattleServantData__getDispLimitCount(this, 1, v73);
  if ( !ServantLimitMaster__TryGetEntity(
          (ServantLimitMaster_o *)v59,
          &this->fields.svtlimitDispent,
          v72,
          DispLimitCount,
          0LL) )
  {
    if ( this->fields.svtlimitaddent )
    {
      Instance = BattleServantData__getSvtId(this, v75);
      svtlimitaddent = this->fields.svtlimitaddent;
      if ( !svtlimitaddent )
        goto LABEL_131;
      battleCharaLimitCount = svtlimitaddent->fields.battleCharaLimitCount;
      v78 = Instance;
      v79 = (ServantLimitMaster_o *)v59;
    }
    else
    {
      v78 = 100100;
      v79 = (ServantLimitMaster_o *)v59;
      battleCharaLimitCount = 0;
    }
    v80 = ServantLimitMaster__GetEntity(v79, v78, battleCharaLimitCount, 0LL);
    this->fields.svtlimitDispent = v80;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtlimitDispent, (int32_t)v80, v81, v82);
  }
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfo, this->fields.beforeUserSvtId, 0LL);
  Instance = (__int64)BattleUserServantData__getBattleEquipTargetList(userSvt, 0LL);
  v84 = Instance;
  if ( this->fields.shiftNpcId >= 1 && UserServantFromID && this->fields.beforeUserSvtId >= 1 )
  {
    Instance = (__int64)BattleUserServantData__getBattleEquipTargetList(UserServantFromID, 0LL);
    v84 = Instance;
  }
  v315 = UserServantFromID;
  if ( !v84 )
    goto LABEL_131;
  v85 = (struct BattleUserServantData_array *)sub_1B88658(BattleUserServantData___TypeInfo, *(unsigned int *)(v84 + 24));
  p_equipList = &this->fields.equipList;
  this->fields.equipList = v85;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.equipList, (int32_t)v85, v87, v88);
  *(_QWORD *)&this->fields.equipatk = 0LL;
  equipList = this->fields.equipList;
  if ( !equipList )
    goto LABEL_131;
  if ( (int)equipList->max_length >= 1 )
  {
    v92 = 0LL;
    while ( v92 < *(unsigned int *)(v84 + 24) )
    {
      Instance = (__int64)BattleInfoData__getEquipFromID(battleInfo, *(_QWORD *)(v84 + 8 * v92 + 32), 0LL);
      v95 = Instance;
      if ( Instance )
      {
        Instance = sub_1B886EC(Instance, equipList->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v308 = sub_1B88830(0LL);
          sub_1B886D8(v308, 0LL);
        }
      }
      if ( v92 >= equipList->max_length )
        break;
      v96 = &equipList->obj.klass + v92;
      v96[4] = (Il2CppClass *)v95;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v96 + 4), v95, v93, v94);
      equipList = *p_equipList;
      if ( !*p_equipList )
        goto LABEL_131;
      max_length = equipList->max_length;
      if ( v92 >= max_length )
        break;
      v98 = (int32x2_t *)equipList->m_Items[v92];
      if ( v98 )
        *(int32x2_t *)&this->fields.equipatk = vadd_s32(v98[33], *(int32x2_t *)&this->fields.equipatk);
      if ( (__int64)++v92 >= (int)max_length )
        goto LABEL_53;
    }
LABEL_298:
    sub_1B88814(Instance, v18);
  }
LABEL_53:
  maxhp = this->fields.maxhp;
  equiphp = this->fields.equiphp;
  this->fields.atk += this->fields.equipatk;
  this->fields.maxhp = equiphp + maxhp;
  p_aiId = &userSvt->fields.aiId;
  v316 = battleInfo;
  userCommandCodeIds = userSvt->fields.userCommandCodeIds;
  p_userCommandCodeIds = &this->fields.userCommandCodeIds;
  this->fields.userCommandCodeIds = userCommandCodeIds;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeIds,
    (int32_t)userCommandCodeIds,
    v89,
    v90);
  if ( this->fields.shiftNpcId >= 1 && v315 && this->fields.beforeUserSvtId >= 1 )
  {
    v105 = v315->fields.userCommandCodeIds;
    *p_userCommandCodeIds = v105;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userCommandCodeIds, (int32_t)v105, v103, v104);
  }
  v319 = userSvt;
  v106 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CommandCodeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v106,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CommandCodeInfo___ctor__);
  p_commandCodeList_k__BackingField = &this->fields._commandCodeList_k__BackingField;
  this->fields._commandCodeList_k__BackingField = (struct System_Collections_Generic_List_CommandCodeInfo__o *)v106;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._commandCodeList_k__BackingField,
    (int32_t)v106,
    v108,
    v109);
  if ( userCommandCode && *p_userCommandCodeIds && (int)userCommandCode->max_length >= 1 )
  {
    v112 = 0LL;
    do
    {
      v113 = sub_1B887FC(BattleServantData___c__DisplayClass320_1_TypeInfo);
      BattleServantData___c__DisplayClass320_1___ctor((BattleServantData___c__DisplayClass320_1_o *)v113, 0LL);
      if ( v112 >= userCommandCode->max_length )
        goto LABEL_298;
      if ( !v113 )
        goto LABEL_131;
      v116 = userCommandCode->m_Items[v112];
      *(_QWORD *)(v113 + 16) = v116;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v113 + 16), (int32_t)v116, v114, v115);
      v117 = *p_userCommandCodeIds;
      v118 = (System_Func_long__bool__o *)sub_1B887FC(System_Func_long__bool__TypeInfo);
      System_Func_long__bool____ctor(
        v118,
        (Il2CppObject *)v113,
        Method_BattleServantData___c__DisplayClass320_1__setBaseServantData_b__0__,
        0LL);
      if ( BasicHelper__Any_long_(
             v117,
             (System_Func_T__bool__o *)v118,
             (const MethodInfo_2E6AC34 *)Method_BasicHelper_Any_long___) )
      {
        Instance = (__int64)*p_commandCodeList_k__BackingField;
        if ( !*p_commandCodeList_k__BackingField )
          goto LABEL_131;
        v18 = *(Il2CppObject **)(v113 + 16);
        v119 = *(_QWORD *)(Instance + 16);
        v120 = Method_System_Collections_Generic_List_CommandCodeInfo__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v119 )
          goto LABEL_131;
        v121 = *(int *)(Instance + 24);
        if ( (unsigned int)v121 >= *(_DWORD *)(v119 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v18,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
        }
        else
        {
          v122 = v119 + 8 * v121;
          *(_DWORD *)(Instance + 24) = v121 + 1;
          *(_QWORD *)(v122 + 32) = v18;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v122 + 32), (int32_t)v18, v110, v111);
        }
      }
    }
    while ( (__int64)++v112 < (int)userCommandCode->max_length );
  }
  if ( !this->fields.commandAssistIds )
  {
    p_commandAssistIds = &this->fields.commandAssistIds;
    v180 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 5LL);
    this->fields.commandAssistIds = v180;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandAssistIds, (int32_t)v180, v181, v182);
    if ( v311 )
    {
      v183 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_commandAssistData__TypeInfo);
      System_Predicate_object____ctor(
        v183,
        object,
        Method_BattleServantData___c__DisplayClass320_0__setBaseServantData_b__1__,
        0LL);
      Instance = (__int64)System_Collections_Generic_List_object___FindAll(
                            v311,
                            (System_Predicate_T__o *)v183,
                            (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_commandAssistData__FindAll__);
      v184 = *p_commandAssistIds;
      if ( !*p_commandAssistIds )
        goto LABEL_131;
      v185 = (System_Collections_Generic_List_object__o *)Instance;
      v186 = 0LL;
      while ( (__int64)v186 < (int)v184->max_length )
      {
        if ( v185 )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v323,
            v185,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_commandAssistData__GetEnumerator__);
          v325 = *(System_Collections_Generic_List_Enumerator_object__o *)&v323.fields.currentCryptoKey;
          while ( 1 )
          {
            v187 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v325,
                     (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__MoveNext__);
            if ( !v187 )
              break;
            if ( !v325.fields._current )
              sub_1B8880C(v187, v188);
            if ( v186 == LODWORD(v325.fields._current[2].klass) )
            {
              v189 = *p_commandAssistIds;
              if ( !*p_commandAssistIds )
                sub_1B8880C(v187, v188);
              if ( v186 >= v189->max_length )
                sub_1B88814(v187, v188);
              v189->m_Items[v186 + 1] = (int32_t)v325.fields._current[1].klass;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v325,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_commandAssistData__Dispose__);
          v184 = *p_commandAssistIds;
          ++v186;
          if ( *p_commandAssistIds )
            continue;
        }
        goto LABEL_131;
      }
    }
  }
  commandCardParam = v319->fields.commandCardParam;
  this->fields.commandCardParam = commandCardParam;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam,
    (int32_t)commandCardParam,
    v110,
    v111);
  if ( this->fields.shiftNpcId >= 1 && v315 && this->fields.beforeUserSvtId >= 1 )
  {
    v126 = v315->fields.commandCardParam;
    this->fields.commandCardParam = v126;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandCardParam, (int32_t)v126, v124, v125);
  }
  BattleSkillIdList = BattleUserServantData__getBattleSkillIdList(v319, 0LL);
  object[1].monitor = BattleSkillIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&object[1].monitor, (int32_t)BattleSkillIdList, v128, v129);
  v130 = ((__int64 (__fastcall *)(BattleUserServantData_o *, void *))v319->klass->vtable._6_getSkillLevelList.method)(
           v319,
           v319->klass[1]._1.image);
  object[2].klass = (Il2CppClass *)v130;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&object[2], v130, v131, v132);
  v133 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v133,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor__);
  if ( isContinue )
  {
    skillInfoList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.skillInfoList;
    v133 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleSkillInfoData__TypeInfo);
    System_Collections_Generic_List_object____ctor_55562536(
      v133,
      skillInfoList,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_BattleSkillInfoData___ctor___76024920);
  }
  v135 = this->fields.skillInfoList;
  if ( !v135 )
    goto LABEL_131;
  size = v135->fields._size;
  v137 = v135->fields._version + 1;
  v135->fields._size = 0;
  v135->fields._version = v137;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v135->fields._items, 0, size, 0LL);
  v138 = sub_1B887FC(BattleServantData___c__DisplayClass320_2_TypeInfo);
  BattleServantData___c__DisplayClass320_2___ctor((BattleServantData___c__DisplayClass320_2_o *)v138, 0LL);
  if ( !v138 )
    goto LABEL_131;
  *(_QWORD *)(v138 + 24) = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v138 + 24), (int32_t)object, v139, v140);
  v142 = *(_QWORD *)(v138 + 24);
  *(_DWORD *)(v138 + 16) = 0;
  if ( !v142 )
    goto LABEL_131;
  v143 = 0;
  while ( 1 )
  {
    v144 = *(_QWORD *)(v142 + 24);
    if ( !v144 )
      goto LABEL_131;
    if ( v143 >= *(_DWORD *)(v144 + 24) )
      break;
    v145 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleSkillInfoData__TypeInfo);
    System_Predicate_object____ctor(
      v145,
      (Il2CppObject *)v138,
      Method_BattleServantData___c__DisplayClass320_2__setBaseServantData_b__2__,
      0LL);
    if ( v133 )
    {
      Instance = (__int64)System_Collections_Generic_List_object___Find(
                            v133,
                            (System_Predicate_T__o *)v145,
                            (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_BattleSkillInfoData__Find__);
      v146 = *(_QWORD *)(v138 + 24);
      if ( v146 )
      {
        v147 = *(_QWORD *)(v146 + 24);
        if ( v147 )
        {
          v148 = *(int *)(v138 + 16);
          if ( (unsigned int)v148 >= *(_DWORD *)(v147 + 24) )
            goto LABEL_298;
          v149 = *(_QWORD *)(v146 + 32);
          if ( v149 )
          {
            if ( (unsigned int)v148 >= *(_DWORD *)(v149 + 24) )
              goto LABEL_298;
            Instance = (__int64)BattleServantData__addSkillInfo(
                                  this,
                                  11,
                                  v148,
                                  *(_DWORD *)(v147 + 4 * v148 + 32),
                                  *(_DWORD *)(v149 + 4 * v148 + 32),
                                  -1LL,
                                  -1,
                                  (BattleSkillInfoData_o *)Instance,
                                  v309);
            v142 = *(_QWORD *)(v138 + 24);
            v143 = *(_DWORD *)(v138 + 16) + 1;
            *(_DWORD *)(v138 + 16) = v143;
            if ( v142 )
              continue;
          }
        }
      }
    }
    goto LABEL_131;
  }
  BattleServantData__AddPassiveSkillInfo(this, v319, v141);
  Instance = v318;
  if ( !v318 )
    goto LABEL_131;
  Instance = (*(__int64 (__fastcall **)(__int64, __int64, BattleServantData_o *, _QWORD))(*(_QWORD *)v318 + 376LL))(
               v318,
               12LL,
               this,
               *(_QWORD *)(*(_QWORD *)v318 + 384LL));
  v150 = this->fields.equipList;
  v151 = &this->fields.equipList;
  if ( !v150 )
    goto LABEL_131;
  v152 = Instance;
  v153 = 0LL;
  v154 = 0;
  objecta = Instance;
  while ( 1 )
  {
    v155 = v150->max_length;
    if ( (v152 & ((__int64)v153 < (int)v155)) == 0 )
      break;
    if ( v153 >= v155 )
      goto LABEL_298;
    Instance = (__int64)v150->m_Items[v153];
    if ( Instance )
    {
      Instance = (__int64)BattleUserServantData__getBattleSkillIdList((BattleUserServantData_o *)Instance, 0LL);
      v156 = *v151;
      if ( !*v151 )
        goto LABEL_131;
      if ( v153 >= v156->max_length )
        goto LABEL_298;
      v157 = Instance;
      Instance = (__int64)v156->m_Items[v153];
      if ( !Instance )
        goto LABEL_131;
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Instance + 408LL))(
                   Instance,
                   *(_QWORD *)(*(_QWORD *)Instance + 416LL));
      if ( !v157 )
        goto LABEL_131;
      v158 = *(_QWORD *)(v157 + 24);
      if ( (int)v158 >= 1 )
      {
        v159 = Instance;
        v160 = 0LL;
        v161 = Instance + 32;
        do
        {
          if ( v160 >= (unsigned int)v158 )
            goto LABEL_298;
          if ( !v159 )
            goto LABEL_131;
          if ( v160 >= *(unsigned int *)(v159 + 24) )
            goto LABEL_298;
          Instance = (__int64)BattleServantData__addSkillInfo(
                                this,
                                12,
                                v154 + (int)v160,
                                *(_DWORD *)(v157 + 32 + 4 * v160),
                                *(_DWORD *)(v161 + 4 * v160),
                                -1LL,
                                -1,
                                0LL,
                                v309);
          LODWORD(v158) = *(_DWORD *)(v157 + 24);
          ++v160;
        }
        while ( (__int64)v160 < (int)v158 );
        v152 = objecta;
        v154 += v160;
      }
      v151 = &this->fields.equipList;
      v150 = this->fields.equipList;
    }
    ++v153;
    if ( !v150 )
      goto LABEL_131;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v162 = (System_Collections_Generic_List_object__o *)*p_commandCodeList_k__BackingField;
  if ( !*p_commandCodeList_k__BackingField )
    goto LABEL_131;
  v163 = (CommandCodeSkillMaster_o *)Instance;
  v164 = 0;
  v165 = 0;
  while ( v165 < v162->fields._size )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          v162,
                          v165,
                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__);
    if ( Instance )
    {
      Instance = (__int64)*p_commandCodeList_k__BackingField;
      if ( !*p_commandCodeList_k__BackingField )
        goto LABEL_131;
      Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)Instance,
                            v165,
                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__);
      if ( !Instance )
        goto LABEL_131;
      if ( !v163 )
        goto LABEL_131;
      Instance = (__int64)CommandCodeSkillMaster__getCommandCodeSkillList(v163, *(_DWORD *)(Instance + 28), 0LL);
      if ( !Instance )
        goto LABEL_131;
      v166 = *(_DWORD *)(Instance + 24);
      v167 = Instance;
      if ( v166 >= 1 )
      {
        for ( i = 0; i < v166; ++i )
        {
          if ( i >= (unsigned int)v166 )
            goto LABEL_298;
          v169 = *(_QWORD *)(v167 + 8LL * i + 32);
          if ( !v169 )
            goto LABEL_131;
          Instance = (__int64)*p_commandCodeList_k__BackingField;
          if ( !*p_commandCodeList_k__BackingField )
            goto LABEL_131;
          v170 = *(_DWORD *)(v169 + 28);
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v165,
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CommandCodeInfo__get_Item__);
          if ( !Instance )
            goto LABEL_131;
          Instance = (__int64)BattleServantData__addSkillInfo(
                                this,
                                22,
                                v164 + i,
                                v170,
                                1,
                                *(_QWORD *)(Instance + 16),
                                -1,
                                0LL,
                                v309);
          v166 = *(_DWORD *)(v167 + 24);
        }
        v164 += i;
      }
    }
    v162 = (System_Collections_Generic_List_object__o *)*p_commandCodeList_k__BackingField;
    ++v165;
    if ( !*p_commandCodeList_k__BackingField )
      goto LABEL_131;
  }
  (*(void (__fastcall **)(__int64, BattleServantData_o *, _QWORD))(*(_QWORD *)v318 + 392LL))(
    v318,
    this,
    *(_QWORD *)(*(_QWORD *)v318 + 400LL));
  (*(void (__fastcall **)(__int64, BattleServantData_o *, BattleInfoData_o *, _QWORD))(*(_QWORD *)v318 + 408LL))(
    v318,
    this,
    v316,
    *(_QWORD *)(*(_QWORD *)v318 + 416LL));
  BattleServantData__UpdateTreasureDevice(this, v319->fields.treasureDeviceId, v319->fields.treasureDeviceLv, v171);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_6551/*"FULL_TD_POINT"*/, 0LL);
  nplineCount = this->fields.nplineCount;
  this->fields.lineMaxNp = Value;
  if ( nplineCount >= 1 )
  {
    v174 = nplineCount * Value;
    if ( v174 < this->fields.np )
      this->fields.np = v174;
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_131;
  TDErrorVoiceSeArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleDeckServantData__GetTDErrorVoiceSeArray(
                                                                               (BattleDeckServantData_o *)Instance,
                                                                               0LL);
  v178 = TDErrorVoiceSeArray
       ? (struct System_Collections_Generic_List_string__o *)System_Linq_Enumerable__ToList_object_(
                                                               TDErrorVoiceSeArray,
                                                               (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_string___)
       : 0LL;
  this->fields.tdErrorStatusVoiceSeList = v178;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tdErrorStatusVoiceSeList, (int32_t)v178, v176, v177);
  v190 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v190, 0LL);
  this->fields.commandtable = v190;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandtable, (int32_t)v190, v191, v192);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  v193 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCardMaster___);
  v194 = sub_1B88658(int___TypeInfo, 6LL);
  v326.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112((System_Array_o *)v194, v326, 0LL);
  if ( !v194 )
    goto LABEL_131;
  if ( *(int *)(v194 + 24) >= 1 )
  {
    v195 = 0LL;
    do
    {
      v197 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
      v196 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v328.fields.currentCryptoKey = v197;
      *(_QWORD *)&v328.fields.fakeValue = v196;
      Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v328, 0LL);
      if ( v195 >= *(unsigned int *)(v194 + 24) )
        goto LABEL_298;
      if ( !v193 )
        goto LABEL_131;
      Instance = ServantCardMaster__TryGetEntity(
                   (ServantCardMaster_o *)v193,
                   &entity,
                   Instance,
                   *(_DWORD *)(v194 + 32 + 4 * v195),
                   0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_131;
        commandtable = this->fields.commandtable;
        LODWORD(v323.fields.currentCryptoKey) = entity->fields.cardId;
        v202 = j_il2cpp_value_box_0(int_TypeInfo, &v323, v198, v199, v200);
        v204 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
        v203 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
        v205 = v202;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v329.fields.currentCryptoKey = v204;
        *(_QWORD *)&v329.fields.fakeValue = v203;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v329, 0LL);
        if ( !entity )
          goto LABEL_131;
        Instance = (__int64)ServantCardMaster__GetEntity(
                              (ServantCardMaster_o *)v193,
                              Instance,
                              entity->fields.cardId,
                              0LL);
        if ( !commandtable )
          goto LABEL_131;
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))commandtable->klass->vtable._30_set_Item.method)(
          commandtable,
          v205,
          Instance,
          commandtable->klass->vtable._31_GetEnumerator.methodPtr);
      }
    }
    while ( (__int64)++v195 < *(int *)(v194 + 24) );
  }
  Instance = (__int64)*p_svtdata;
  if ( !*p_svtdata )
    goto LABEL_131;
  Instance = ServantEntity__GetDefaultDeadType((ServantEntity_o *)Instance, 0, 0LL);
  v206 = this->fields.deckSvt;
  this->fields.deadtype = Instance;
  if ( !v206 )
    goto LABEL_131;
  if ( BattleDeckServantData__isEscape(v206, 0LL) )
  {
    v207 = v319;
    KillType = 1;
  }
  else
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_131;
    v207 = v319;
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
  v209 = this->fields.deckSvt;
  this->fields.isAppear = Instance & 1;
  if ( !v209 )
    goto LABEL_131;
  isRaid = BattleDeckServantData__isRaid(v209, 0LL);
  this->fields.isRaid = isRaid;
  if ( isRaid )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_131;
    RaidId = BattleDeckServantData__getRaidId((BattleDeckServantData_o *)Instance, 0LL);
    this->fields.raidId = RaidId;
    StartRaidState = BattleInfoData__getStartRaidState(v316, eventIda, RaidId, 0LL);
    this->fields.statestring = StartRaidState;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statestring, (int32_t)StartRaidState, v213, v214);
  }
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_131;
  Instance = BattleDeckServantData__isAddition((BattleDeckServantData_o *)Instance, 0LL);
  v215 = this->fields.deckSvt;
  this->fields.isAddition = Instance & 1;
  if ( !v215 )
    goto LABEL_131;
  Instance = BattleDeckServantData__isLeader(v215, 0LL);
  v216 = this->fields.deckSvt;
  this->fields.isLeader = Instance & 1;
  if ( !v216 )
    goto LABEL_131;
  isSuperBoss = BattleDeckServantData__isSuperBoss(v216, 0LL);
  this->fields.isSuperBoss = isSuperBoss;
  if ( isSuperBoss )
  {
    Instance = (__int64)*p_deckSvt;
    if ( !*p_deckSvt )
      goto LABEL_131;
    SuperBossId = BattleDeckServantData__getSuperBossId((BattleDeckServantData_o *)Instance, 0LL);
    this->fields.superBossId = SuperBossId;
    this->fields.superbossnokorihp = BattleInfoData__getSuperBossNokoriHp(v316, SuperBossId, 0LL);
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
  v220 = this->fields.deckSvt;
  v222 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v221 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v330.fields.currentCryptoKey = v222;
  *(_QWORD *)&v330.fields.fakeValue = v221;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v330, 0LL);
  if ( !v220 )
    goto LABEL_131;
  this->fields.overwriteSvtVoiceId = BattleDeckServantData__getOverwriteSvtVoiceId(v220, Instance, 0LL);
  this->fields.battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                               v207->fields.battleVoice,
                               0LL);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v207->fields.battleVoice, 0LL)
    && !this->fields.overwriteSvtVoiceId )
  {
    v224 = *(_QWORD *)&v207->fields.battleVoice.fields.currentCryptoKey;
    v223 = *(_QWORD *)&v207->fields.battleVoice.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v331.fields.currentCryptoKey = v224;
    *(_QWORD *)&v331.fields.fakeValue = v223;
    this->fields.overwriteSvtVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v331, 0LL);
  }
  v226 = *(_QWORD *)&v207->fields.svtId.fields.currentCryptoKey;
  v225 = *(_QWORD *)&v207->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v332.fields.currentCryptoKey = v226;
  *(_QWORD *)&v332.fields.fakeValue = v225;
  v227 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v332, 0LL);
  BattleServantOverwriteName = BattleServantData__getBattleServantOverwriteName(this, v227, v228);
  this->fields.svtOverwriteBattleName = BattleServantOverwriteName;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteBattleName,
    (int32_t)BattleServantOverwriteName,
    v230,
    v231);
  Instance = (__int64)this->fields.deckSvt;
  if ( !Instance )
    goto LABEL_131;
  Instance = BattleDeckServantData__getScale((BattleDeckServantData_o *)Instance, 0LL);
  v232 = this->fields.deckSvt;
  this->fields.actorScale = Instance;
  if ( !v232 )
    goto LABEL_131;
  this->fields.roleType = v232->fields.roleType;
  *(_QWORD *)&this->fields.maxActNum = *((_QWORD *)p_aiId + 1);
  v233 = *(_QWORD *)p_aiId;
  *(_QWORD *)&this->fields.aiId = *(_QWORD *)p_aiId;
  Instance = (__int64)this->fields.aiState;
  if ( !Instance )
    goto LABEL_131;
  AiState__Initialize((AiState_o *)Instance, v233, 0LL);
  v234 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v207->fields.svtId, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !*p_svtdata )
    goto LABEL_131;
  v235 = (ServantChangeMaster_o *)Instance;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800((*p_svtdata)[1], 0LL);
  if ( !v235 )
    goto LABEL_131;
  v236 = ServantChangeMaster__TrueNameEntity(v235, Instance, 0LL);
  if ( v236 )
    v234 = v236->fields.svtId;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  v237 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v237 )
    goto LABEL_131;
  Instance = (__int64)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)v237,
                        Instance,
                        v234,
                        0LL);
  if ( !Instance )
    goto LABEL_131;
  v238 = (UserServantCollectionEntity_o *)Instance;
  this->fields.svtCommonFlag = *(_DWORD *)(Instance + 76);
  v240 = *(_QWORD *)(Instance + 24);
  v239 = *(_QWORD *)(Instance + 32);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v333.fields.currentCryptoKey = v240;
  *(_QWORD *)&v333.fields.fakeValue = v239;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v333, 0LL);
  v243 = this->fields.deckSvt;
  this->fields._servantCollectionId_k__BackingField = Instance;
  if ( !v243 )
LABEL_131:
    sub_1B8880C(Instance, v18);
  if ( !v243->fields.isFollowerSvt )
  {
    v244 = Instance;
    svtCommonFlag = v238->fields.svtCommonFlag;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    this->fields.svtCommonFlag = BattleData__GetSavedServantCommonFlag(v244, svtCommonFlag, 0LL);
  }
  if ( !this->fields.isEnemy && !this->fields.followerType )
  {
    tdPlayed = v238->fields.tdPlayed;
    this->fields.tdplayed = tdPlayed;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tdplayed, (int32_t)tdPlayed, v241, v242);
    this->fields.friendship = v238->fields.friendshipRank;
    goto LABEL_254;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  v246 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserNpcSvtRecordMaster___);
  v248 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v247 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v249 = (UserNpcSvtRecordMaster_o *)v246;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v334.fields.currentCryptoKey = v248;
  *(_QWORD *)&v334.fields.fakeValue = v247;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v334, 0LL);
  if ( !v249 )
    goto LABEL_131;
  v250 = (System_Collections_Generic_IEnumerable_TSource__o *)UserNpcSvtRecordMaster__GetTdPlayed(v249, Instance, 0LL);
  v253 = (System_Collections_Generic_IEnumerable_TSource__o *)v238->fields.tdPlayed;
  if ( v250 )
  {
    v254 = (struct System_Int32_array *)v250;
    if ( !v253 )
    {
      p_tdplayed = &this->fields.tdplayed;
      this->fields.tdplayed = v254;
      LODWORD(v253) = (_DWORD)v254;
      goto LABEL_250;
    }
    v255 = System_Linq_Enumerable__Concat_int_(
             v250,
             v253,
             (const MethodInfo_2E99484 *)Method_System_Linq_Enumerable_Concat_int___);
    v253 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                  v255,
                                                                  (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
  p_tdplayed = &this->fields.tdplayed;
  this->fields.tdplayed = (struct System_Int32_array *)v253;
LABEL_250:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_tdplayed, (int32_t)v253, v251, v252);
  Instance = (__int64)*p_deckSvt;
  if ( !*p_deckSvt )
    goto LABEL_131;
  NpcFriendShipRank = BattleDeckServantData__GetNpcFriendShipRank((BattleDeckServantData_o *)Instance, v238, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.friendship = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(NpcFriendShipRank, 0LL);
LABEL_254:
  classBoardAddCommandSpells = v207->fields.classBoardAddCommandSpells;
  this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardAddCommandSpells,
    (int32_t)classBoardAddCommandSpells,
    v258,
    v259);
  classBoardAddPassiveSkills = v207->fields.classBoardAddPassiveSkills;
  this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardAddPassiveSkills,
    (int32_t)classBoardAddPassiveSkills,
    v262,
    v263);
  classBoardSquareIds = v207->fields.classBoardSquareIds;
  this->fields._classBoardSquareIds_k__BackingField = classBoardSquareIds;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._classBoardSquareIds_k__BackingField,
    (int32_t)classBoardSquareIds,
    v265,
    v266);
  BattleServantData__InitCommonAddIndividuality(this, v267);
  if ( isContinue )
    return;
  battlePointList = this->fields.battlePointList;
  if ( !battlePointList )
    goto LABEL_131;
  v269 = battlePointList->fields._size;
  v270 = battlePointList->fields._version + 1;
  battlePointList->fields._size = 0;
  battlePointList->fields._version = v270;
  if ( v269 >= 1 )
    System_Array__Clear((System_Array_o *)battlePointList->fields._items, 0, v269, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_131;
  v271 = DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantBattlePointMaster___);
  v273 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v272 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  v274 = (ServantBattlePointMaster_o *)v271;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v335.fields.currentCryptoKey = v273;
  *(_QWORD *)&v335.fields.fakeValue = v272;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v335, 0LL);
  if ( !v274 )
    goto LABEL_131;
  Instance = (__int64)ServantBattlePointMaster__GetBattlePointEntities(v274, Instance, 0LL);
  if ( !Instance )
    goto LABEL_131;
  v275 = *(_QWORD *)Instance;
  v276 = Instance;
  v277 = *(unsigned __int16 *)(*(_QWORD *)Instance + 302LL);
  if ( *(_WORD *)(*(_QWORD *)Instance + 302LL) )
  {
    v278 = (int *)(*(_QWORD *)(v275 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ServantBattlePointEntity__c **)v278 - 1) != System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo )
    {
      --v277;
      v278 += 4;
      if ( !v277 )
        goto LABEL_267;
    }
    v279 = v275 + 16LL * *v278 + 312;
  }
  else
  {
LABEL_267:
    v279 = sub_1BDA590(Instance, System_Collections_Generic_IEnumerable_ServantBattlePointEntity__TypeInfo, 0LL);
  }
  v281 = (*(__int64 (__fastcall **)(__int64, _QWORD))v279)(v276, *(_QWORD *)(v279 + 8));
  if ( !v281 )
    sub_1B8880C(0LL, v280);
  while ( 1 )
  {
    v282 = *(_QWORD *)v281;
    v283 = *(unsigned __int16 *)(*(_QWORD *)v281 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v281 + 302LL) )
    {
      v284 = (int *)(*(_QWORD *)(v282 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v284 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v283;
        v284 += 4;
        if ( !v283 )
          goto LABEL_274;
      }
      v285 = v282 + 16LL * *v284 + 312;
    }
    else
    {
LABEL_274:
      v285 = sub_1BDA590(v281, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v285)(v281, *(_QWORD *)(v285 + 8)) & 1) == 0 )
      break;
    v286 = *(_QWORD *)v281;
    v287 = *(unsigned __int16 *)(*(_QWORD *)v281 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v281 + 302LL) )
    {
      v288 = (int *)(*(_QWORD *)(v286 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantBattlePointEntity__c **)v288 - 1) != System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo )
      {
        --v287;
        v288 += 4;
        if ( !v287 )
          goto LABEL_281;
      }
      v289 = v286 + 16LL * *v288 + 312;
    }
    else
    {
LABEL_281:
      v289 = sub_1BDA590(v281, System_Collections_Generic_IEnumerator_ServantBattlePointEntity__TypeInfo, 0LL);
    }
    v290 = (*(__int64 (__fastcall **)(__int64, _QWORD))v289)(v281, *(_QWORD *)(v289 + 8));
    if ( !v290 )
      sub_1B8880C(0LL, v291);
    v292 = (System_Collections_Generic_List_object__o *)this->fields.battlePointList;
    v293 = *(_DWORD *)(v290 + 20);
    v294 = (BattlePointData_o *)sub_1B887FC(BattlePointData_TypeInfo);
    BattlePointData___ctor(v294, v293, this, 0LL);
    if ( !v292 )
      sub_1B8880C(v295, v296);
    items = v292->fields._items;
    v300 = Method_System_Collections_Generic_List_BattlePointData__Add__;
    ++v292->fields._version;
    if ( !items )
      sub_1B8880C(v295, v296);
    v301 = v292->fields._size;
    if ( (unsigned int)v301 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v292,
        (Il2CppObject *)v294,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v300[4] + 192LL) + 112LL));
    }
    else
    {
      v302 = &items->obj.klass + v301;
      v292->fields._size = v301 + 1;
      v302[4] = (Il2CppClass *)v294;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v302 + 4), (int32_t)v294, v297, v298);
    }
  }
  v303 = *(_QWORD *)v281;
  v304 = *(unsigned __int16 *)(*(_QWORD *)v281 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v281 + 302LL) )
  {
    v305 = (int *)(*(_QWORD *)(v303 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v305 - 1) != System_IDisposable_TypeInfo )
    {
      --v304;
      v305 += 4;
      if ( !v304 )
        goto LABEL_293;
    }
    v306 = v303 + 16LL * *v305 + 312;
  }
  else
  {
LABEL_293:
    v306 = sub_1BDA590(v281, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v306)(v281, *(_QWORD *)(v306 + 8));
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
  BattleDeckServantData_o *NowShiftDeckServantData; // x0
  __int64 v8; // x1
  int32_t Value; // w0
  BattleBuffData_o *buffData; // x22
  int32_t uniqueId; // w23
  int32_t v12; // w21
  const MethodInfo *v13; // x2
  BattleDeckServantData_o *v14; // x21
  BattleEntity_o *battle_ent; // x20
  int32_t Int; // w0
  const MethodInfo *v17; // x6
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  unsigned int MaxHp; // w0
  unsigned int v21; // w0

  if ( (byte_4A5D907 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D907 = 1;
  }
  BattleServantData__OverwriteShiftDeckIndex(this, vals, (const MethodInfo *)vals);
  if ( !vals )
    goto LABEL_10;
  Value = DataVals__GetValue(vals, 0LL);
  buffData = this->fields.buffData;
  uniqueId = this->fields.uniqueId;
  v12 = Value;
  NowShiftDeckServantData = (BattleDeckServantData_o *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !buffData
    || (BattleBuffData__InitializeShift(buffData, uniqueId, (System_Int32_array *)NowShiftDeckServantData, 0LL),
        this->fields.changeSvtIndex = v12,
        (NowShiftDeckServantData = BattleServantData__GetNowShiftDeckServantData(this, data, v13)) == 0LL)
    || (v14 = NowShiftDeckServantData,
        NowShiftDeckServantData->fields.id = this->fields.index + 1,
        NowShiftDeckServantData->fields.uniqueId = this->fields.uniqueId,
        !data) )
  {
LABEL_10:
    sub_1B8880C(NowShiftDeckServantData, v8);
  }
  battle_ent = data->fields.battle_ent;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v14, battle_ent, Int, 0LL, 0, v17);
  LODWORD(battle_ent) = BattleServantData__getMaxHp(this, v18);
  if ( (int)battle_ent < ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
                           this,
                           this->klass->vtable._10_set_hp.methodPtr) )
  {
    MaxHp = BattleServantData__getMaxHp(this, v19);
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
      this,
      MaxHp,
      this->klass->vtable._11_get_reducedhp.methodPtr);
    v21 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._9_get_hp.method)(
            this,
            this->klass->vtable._10_set_hp.methodPtr);
    ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_set_resultHp.method)(
      this,
      v21,
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
    sub_1B8880C(0LL, setHp);
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
  int32_t v13; // w8
  il2cpp_array_size_t v15; // w25
  const MethodInfo *v16; // x4
  struct System_Int32_array *v17; // x8
  BattleDeckServantData_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( !battleInfo )
    goto LABEL_18;
  isSuperBoss = (int64_t)*inDeckSvt;
  if ( !*inDeckSvt )
    goto LABEL_17;
  isSuperBoss = BattleDeckServantData__isSuperBoss((BattleDeckServantData_o *)isSuperBoss, 0LL);
  if ( (isSuperBoss & 1) == 0 )
  {
LABEL_18:
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
LABEL_17:
    sub_1B8880C(isSuperBoss, inDeckSvt);
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
      v15 = max_length - 1;
      if ( max_length - 1 >= shiftDeckList->max_length )
        goto LABEL_27;
      isSuperBoss = BattleInfoData__GetShiftDeckHp(battleInfo, shiftDeckList->m_Items[v15 + 1], 0LL);
      if ( v12 <= (int)isSuperBoss )
        break;
      v12 -= (int)isSuperBoss;
      if ( max_length - 2 < this->fields.lowLimitShift )
        goto LABEL_9;
      shiftDeckList = this->fields.shiftDeckList;
      --max_length;
      if ( !shiftDeckList )
        goto LABEL_17;
    }
    v17 = this->fields.shiftDeckList;
    this->fields.shiftDeckIndex = max_length;
    if ( v17 )
    {
      if ( v15 >= v17->max_length )
LABEL_27:
        sub_1B88814(isSuperBoss, inDeckSvt);
      v18 = BattleServantData__SetShiftDeckData(
              (BattleServantData_o *)isSuperBoss,
              battleInfo,
              *inDeckSvt,
              v17->m_Items[v15 + 1],
              v16);
      *inDeckSvt = v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)inDeckSvt, (int32_t)v18, v19, v20);
      v13 = v12;
      if ( (v12 & 0x80000000) != 0 )
        goto LABEL_10;
      return v12;
    }
    goto LABEL_17;
  }
LABEL_9:
  v13 = -1;
LABEL_10:
  if ( v12 <= v8 )
    return v12;
  else
    return v13;
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
  __int64 v13; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v15; // x25
  int v16; // w26
  struct System_Int32_array *skillcharge_list; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_String_o *statestring; // x1
  int32_t lowLimitShift; // w8
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t tmpAppearanceId; // w8
  struct System_Int32_array *commandAssistIds; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *partAnimSaveDataArray; // x22
  BattleServantData___c_c *v30; // x0
  System_Func_object__object__o *_9__306_0; // x23
  Il2CppObject *v32; // x24
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Func_object__object__o *_9__306_1; // x24
  Il2CppObject *v37; // x25
  struct BattleServantData___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Collections_Generic_List_BattlePointData__o *battlePointList; // x8
  int32_t size; // w2
  int v46; // w9
  System_Collections_Generic_List_object__o *v47; // x21
  System_Collections_Generic_IEnumerable_TSource__o *battlePointSaveDataArray; // x20
  System_Func_object__object__o *v49; // x22
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5D841 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleServantData__setSaveData_b__306_2__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattlePointData_SaveData__BattlePointData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData_____);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1B885B0(&System_Func_BattlePointData_SaveData__BattlePointData__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData_PartAnimationSaveData__string__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattlePointData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattlePointData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1B885B0(&Method_BattleServantData___c__setSaveData_b__306_0__);
    sub_1B885B0(&Method_BattleServantData___c__setSaveData_b__306_1__);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D841 = 1;
  }
  memset(&v52, 0, sizeof(v52));
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
      aiState = (AiState_o *)BattleServantData__get_AiStateManager(this, v7);
      if ( aiState )
      {
        AiStateManager__SetSaveData((AiStateManager_o *)aiState, save->fields.aiStateManagerSave, 0LL);
        aiState = (AiState_o *)this->fields.buffData;
        if ( aiState )
        {
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v51,
              (System_Collections_Generic_List_object__o *)aiState,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
            v52 = v51;
            while ( 1 )
            {
              InfoId = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v52,
                         (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
              if ( (InfoId & 1) == 0 )
                break;
              current = (BattleSkillInfoData_o *)v52.fields._current;
              if ( !v52.fields._current )
                sub_1B8880C(InfoId, v10);
              if ( !BYTE4(v52.fields._current[1].monitor) )
              {
                skillinfoid_list = save->fields.skillinfoid_list;
                if ( !skillinfoid_list )
LABEL_24:
                  sub_1B8880C(InfoId, v10);
                v13 = 8LL;
                while ( 1 )
                {
                  max_length = skillinfoid_list->max_length;
                  v15 = v13 - 8;
                  if ( v13 - 8 >= (int)max_length )
                    break;
                  if ( v15 >= max_length )
                    sub_1B88814(InfoId, v10);
                  v16 = *((_DWORD *)&skillinfoid_list->obj.klass + v13);
                  InfoId = BattleSkillInfoData__getInfoId(current, 0LL);
                  if ( v16 == (_DWORD)InfoId )
                  {
                    skillcharge_list = save->fields.skillcharge_list;
                    if ( !skillcharge_list )
                      sub_1B8880C(InfoId, v10);
                    if ( v15 >= skillcharge_list->max_length )
                      sub_1B88814(InfoId, v10);
                    current->fields.chargeTurn = *((_DWORD *)&skillcharge_list->obj.klass + v13);
                  }
                  skillinfoid_list = save->fields.skillinfoid_list;
                  ++v13;
                  if ( !skillinfoid_list )
                    goto LABEL_24;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v52,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
            if ( (this->fields.deckIndex & 0x80000000) != 0 )
              this->fields.deckIndex = this->fields.index;
            this->fields.dressDispId = save->fields.dressDispId;
            this->fields.accumulationDamage = save->fields.accumulationDamage;
            statestring = save->fields.statestring;
            this->fields.statestring = statestring;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statestring, (int32_t)statestring, v18, v19);
            this->fields.shiftDeckIndex = save->fields.shiftDeckIndex;
            this->fields.changeSvtIndex = save->fields.changeSvtIndex;
            lowLimitShift = save->fields.lowLimitShift;
            this->fields.tmpAppearanceId = -1;
            this->fields.lowLimitShift = lowLimitShift;
            if ( BattleServantData__isChangeAppearance(this, v22) )
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
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&this->fields.commandAssistIds,
              (int32_t)commandAssistIds,
              v23,
              v24);
            this->fields.partAnimationSaveDict = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partAnimationSaveDict, 0, v27, v28);
            aiState = (AiState_o *)BasicHelper__IsNullOrEmpty(
                                     (System_Collections_ICollection_o *)save->fields.partAnimSaveDataArray,
                                     0LL);
            if ( ((unsigned __int8)aiState & 1) == 0 )
            {
              partAnimSaveDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)save->fields.partAnimSaveDataArray;
              v30 = BattleServantData___c_TypeInfo;
              if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
                v30 = BattleServantData___c_TypeInfo;
              }
              _9__306_0 = (System_Func_object__object__o *)v30->static_fields->__9__306_0;
              if ( !_9__306_0 )
              {
                if ( !v30->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v30);
                  v30 = BattleServantData___c_TypeInfo;
                }
                v32 = (Il2CppObject *)v30->static_fields->__9;
                _9__306_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleServantData_PartAnimationSaveData__string__TypeInfo);
                System_Func_object__object____ctor(
                  _9__306_0,
                  v32,
                  Method_BattleServantData___c__setSaveData_b__306_0__,
                  0LL);
                static_fields = BattleServantData___c_TypeInfo->static_fields;
                static_fields->__9__306_0 = (struct System_Func_BattleServantData_PartAnimationSaveData__string__o *)_9__306_0;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&static_fields->__9__306_0,
                  (int32_t)_9__306_0,
                  v34,
                  v35);
                v30 = BattleServantData___c_TypeInfo;
              }
              if ( !v30->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v30);
                v30 = BattleServantData___c_TypeInfo;
              }
              _9__306_1 = (System_Func_object__object__o *)v30->static_fields->__9__306_1;
              if ( !_9__306_1 )
              {
                if ( !v30->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v30);
                  v30 = BattleServantData___c_TypeInfo;
                }
                v37 = (Il2CppObject *)v30->static_fields->__9;
                _9__306_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____TypeInfo);
                System_Func_object__object____ctor(
                  _9__306_1,
                  v37,
                  Method_BattleServantData___c__setSaveData_b__306_1__,
                  0LL);
                v38 = BattleServantData___c_TypeInfo->static_fields;
                v38->__9__306_1 = (struct System_Func_BattleServantData_PartAnimationSaveData__BattlePlayAnimationComponent_SaveData____o *)_9__306_1;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v38->__9__306_1, (int32_t)_9__306_1, v39, v40);
              }
              v41 = (struct System_Collections_Generic_Dictionary_string__BattlePlayAnimationComponent_SaveData____o *)System_Linq_Enumerable__ToDictionary_object__object__object_(partAnimSaveDataArray, (System_Func_TSource__TKey__o *)_9__306_0, (System_Func_TSource__TElement__o *)_9__306_1, (const MethodInfo_2EB8E64 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData_____);
              this->fields.partAnimationSaveDict = v41;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&this->fields.partAnimationSaveDict,
                (int32_t)v41,
                v42,
                v43);
            }
            battlePointList = this->fields.battlePointList;
            this->fields.isUseTdBetweenEnemyTurnEndAndTactical = save->fields.isUseTdBetweenEnemyTurnEndAndTactical;
            if ( battlePointList )
            {
              size = battlePointList->fields._size;
              v46 = battlePointList->fields._version + 1;
              battlePointList->fields._size = 0;
              battlePointList->fields._version = v46;
              if ( size >= 1 )
                System_Array__Clear((System_Array_o *)battlePointList->fields._items, 0, size, 0LL);
              if ( BasicHelper__IsNullOrEmpty(
                     (System_Collections_ICollection_o *)save->fields.battlePointSaveDataArray,
                     0LL) )
              {
                return 1;
              }
              v47 = (System_Collections_Generic_List_object__o *)this->fields.battlePointList;
              battlePointSaveDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)save->fields.battlePointSaveDataArray;
              v49 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattlePointData_SaveData__BattlePointData__TypeInfo);
              System_Func_object__object____ctor(
                v49,
                (Il2CppObject *)this,
                Method_BattleServantData__setSaveData_b__306_2__,
                0LL);
              aiState = (AiState_o *)System_Linq_Enumerable__Select_object__object_(
                                       battlePointSaveDataArray,
                                       (System_Func_TSource__TResult__o *)v49,
                                       (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattlePointData_SaveData__BattlePointData___);
              if ( v47 )
              {
                System_Collections_Generic_List_object___AddRange(
                  v47,
                  (System_Collections_Generic_IEnumerable_T__o *)aiState,
                  (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattlePointData__AddRange__);
                return 1;
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_1B8880C(aiState, v5);
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
  Il2CppObject *v14; // x4

  if ( (byte_4A5D845 & 1) == 0 )
  {
    sub_1B885B0(&Method_JsonManager_Deserialize_BattleServantData_SaveData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    byte_4A5D845 = 1;
  }
  if ( saveStr )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v14 = JsonManager__Deserialize_object_(
            (Il2CppObject *)saveStr,
            (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_BattleServantData_SaveData___);
  }
  else
  {
    v14 = 0LL;
  }
  BattleServantData__setServantData_42897604(
    this,
    inDeckSvt,
    battleEnt,
    infollowerType,
    (BattleServantData_SaveData_o *)v14,
    0LL,
    commandAssistDataList,
    v7);
}


void __fastcall BattleServantData__setServantData_42897604(
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
  System_Int32_array *ShiftList; // x0
  struct System_Int32_array **p_shiftDeckList; // x26
  int32_t v17; // w2
  int32_t v18; // w3
  System_Int32_array *v19; // x0
  struct System_Int32_array **p_changeSvtList; // x27
  int32_t v21; // w2
  int32_t v22; // w3
  EnemyScriptParam_OverwriteShiftIcon_array *OverwriteBreakShiftIconInfo; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x4
  int v28; // w28
  int32_t changeSvtIndex; // w9
  __int64 shiftDeckIndex; // x8
  struct System_Int32_array *v31; // x9
  il2cpp_array_size_t v32; // w8
  __int64 v33; // x8
  int32_t DispBreakShift; // w0
  struct System_Int32_array *v35; // x26
  int32_t max_length; // w1
  int32_t v37; // w27
  struct System_Int32_array *shiftDeckList; // x8
  int32_t v39; // w3
  BattleInfoData_o *battleInfo; // x1
  struct System_Int32_array *v41; // x9
  BattleInfoData_o *v42; // x2
  int32_t inited; // w25
  const MethodInfo *v44; // x6
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  BattleDeckServantData_o *inDeckSvta; // [xsp+8h] [xbp-58h] BYREF

  v14 = this;
  inDeckSvta = inDeckSvt;
  if ( (byte_4A5D846 & 1) == 0 )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    this = (BattleServantData_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D846 = 1;
  }
  if ( !inDeckSvt )
    goto LABEL_41;
  ShiftList = BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  p_shiftDeckList = &v14->fields.shiftDeckList;
  v14->fields.shiftDeckList = ShiftList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.shiftDeckList, (int32_t)ShiftList, v17, v18);
  v19 = BattleDeckServantData__getChangeList(inDeckSvt, 0LL);
  p_changeSvtList = &v14->fields.changeSvtList;
  v14->fields.changeSvtList = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.changeSvtList, (int32_t)v19, v21, v22);
  v14->fields._IsChangeDropItemByShift_k__BackingField = BattleDeckServantData__IsChangeDropItemByShift(inDeckSvt, 0LL);
  OverwriteBreakShiftIconInfo = BattleDeckServantData__GetOverwriteBreakShiftIconInfo(inDeckSvt, 0LL);
  v14->fields._OverwriteShiftIconArray_k__BackingField = OverwriteBreakShiftIconInfo;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v14->fields._OverwriteShiftIconArray_k__BackingField,
    (int32_t)OverwriteBreakShiftIconInfo,
    v24,
    v25);
  this = (BattleServantData_o *)BattleDeckServantData__GetDefShiftPosition(inDeckSvt, -1LL, 0LL);
  v28 = (int)this;
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
      v31 = *p_shiftDeckList;
      if ( !*p_shiftDeckList )
        goto LABEL_41;
      v32 = shiftDeckIndex - 1;
      if ( v32 < v31->max_length )
      {
        v33 = (__int64)v31 + 4 * v32;
        goto LABEL_25;
      }
      goto LABEL_42;
    }
    v41 = *p_changeSvtList;
    if ( !*p_changeSvtList )
      goto LABEL_41;
    if ( (unsigned int)shiftDeckIndex < v41->max_length )
    {
      v33 = (__int64)v41 + 4 * shiftDeckIndex;
LABEL_25:
      v39 = *(_DWORD *)(v33 + 32);
      if ( battleEnt )
        goto LABEL_26;
      goto LABEL_20;
    }
LABEL_42:
    sub_1B88814(this, inDeckSvt);
  }
  DispBreakShift = BattleDeckServantData__GetDispBreakShift(inDeckSvt, 0LL);
  if ( DispBreakShift < 1 )
    goto LABEL_28;
  v35 = *p_shiftDeckList;
  if ( !v35 )
    goto LABEL_28;
  max_length = v35->max_length;
  if ( v14->fields.shiftDeckIndex >= max_length )
    goto LABEL_28;
  v37 = DispBreakShift;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    max_length = v35->max_length;
  }
  this = (BattleServantData_o *)System_Math__Min_62526008(v28 + v37 + 1, max_length, 0LL);
  shiftDeckList = v14->fields.shiftDeckList;
  v14->fields.shiftDeckIndex = (int)this;
  if ( !shiftDeckList )
LABEL_41:
    sub_1B8880C(this, inDeckSvt);
  if ( (int)this - 1 >= shiftDeckList->max_length )
    goto LABEL_42;
  v39 = shiftDeckList->m_Items[(int)this];
  if ( battleEnt )
  {
LABEL_26:
    battleInfo = battleEnt->fields.battleInfo;
    goto LABEL_27;
  }
LABEL_20:
  battleInfo = 0LL;
LABEL_27:
  inDeckSvta = BattleServantData__SetShiftDeckData(this, battleInfo, inDeckSvt, v39, v27);
LABEL_28:
  if ( battleEnt )
    v42 = battleEnt->fields.battleInfo;
  else
    v42 = 0LL;
  inited = BattleServantData__setInitQuestShift(v14, &inDeckSvta, v42, v26);
  BattleServantData__setBaseServantData(v14, inDeckSvta, battleEnt, infollowerType, commandAssistDataList, 0, v44);
  BattleServantData__InitializeBuff(v14, v45);
  BattleServantData__setInitQuest(v14, inited, v46);
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
    BattleServantData__loadTransformServant(v14, battleData, v47);
  this = (BattleServantData_o *)((__int64 (__fastcall *)(BattleServantData_o *, BattleServantData_SaveData_o *, Il2CppMethodPointer))v14->klass->vtable._17_setSaveData.method)(
                                  v14,
                                  saveData,
                                  v14->klass->vtable._18_getAiState.methodPtr);
  if ( ((unsigned __int8)this & 1) != 0 )
    BattleServantData__UpdateBattlePointSetting(v14, battleEnt, v48);
  if ( !battleEnt )
    goto LABEL_41;
  BattleServantData__SetCommandAssistSkill(v14, battleEnt->fields.eventId, v48);
}


void __fastcall BattleServantData__setServantData_42900760(
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
    sub_1B8880C(this, 0LL);
  ShiftList = BattleDeckServantData__getShiftList(inDeckSvt, 0LL);
  this->fields.shiftDeckList = ShiftList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.shiftDeckList, (int32_t)ShiftList, v14, v15);
  v16 = BattleDeckServantData__getChangeList(inDeckSvt, 0LL);
  this->fields.changeSvtList = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.changeSvtList, (int32_t)v16, v17, v18);
  this->fields._IsChangeDropItemByShift_k__BackingField = BattleDeckServantData__IsChangeDropItemByShift(inDeckSvt, 0LL);
  DefShiftPosition = BattleDeckServantData__GetDefShiftPosition(inDeckSvt, -1LL, 0LL);
  if ( (DefShiftPosition & 0x80000000) == 0 )
  {
    this->fields.lowLimitShift = DefShiftPosition + 1;
    this->fields.shiftDeckIndex = DefShiftPosition + 1;
    this->fields.shiftSubCount = 1;
  }
  inited = BattleServantData__setInitQuestShift(this, &inDeckSvta, battleInfo, v20);
  BattleServantData__setBaseServantData_42901032(
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
  const MethodInfo *v12; // x2
  BattleDeckServantData_o *v13; // x21
  BattleEntity_o *battle_ent; // x20
  int32_t Int; // w0
  const MethodInfo *v16; // x6
  const MethodInfo *v17; // x1
  unsigned int MaxHp; // w0
  int32_t v19; // w8
  int32_t v20; // w10
  int v21; // w8

  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_12;
  maxtpturn = this->fields.maxtpturn;
  nexttpturn = this->fields.nexttpturn;
  buffData = this->fields.buffData;
  uniqueId = this->fields.uniqueId;
  deckSvt = (BattleDeckServantData_o *)BattleDeckServantData__getShiftClearBuffIndiv(deckSvt, 0LL);
  if ( !buffData
    || (BattleBuffData__InitializeShift(buffData, uniqueId, (System_Int32_array *)deckSvt, 0LL),
        this->fields.shiftDeckIndex += shiftValue,
        (deckSvt = BattleServantData__GetNowShiftDeckServantData(this, data, v12)) == 0LL)
    || (v13 = deckSvt,
        deckSvt->fields.id = this->fields.index + 1,
        deckSvt->fields.uniqueId = this->fields.uniqueId,
        !data) )
  {
LABEL_12:
    sub_1B8880C(deckSvt, data);
  }
  battle_ent = data->fields.battle_ent;
  Int = Follower__getInt(this->fields.followerType, 0LL);
  BattleServantData__setBaseServantData(this, v13, battle_ent, Int, 0LL, 0, v16);
  MaxHp = BattleServantData__getMaxHp(this, v17);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_set_hp.method)(
    this,
    MaxHp,
    this->klass->vtable._11_get_reducedhp.methodPtr);
  v19 = this->fields.maxtpturn;
  if ( nexttpturn <= v19 )
    v20 = nexttpturn;
  else
    v20 = this->fields.maxtpturn;
  if ( maxtpturn <= v19 )
    v21 = nexttpturn - maxtpturn + v19;
  else
    v21 = v20;
  this->fields.nexttpturn = v21 & ~(v21 >> 31);
}


void __fastcall BattleServantData__setSkillShiftServant(
        BattleServantData_o *this,
        BattleData_o *data,
        int32_t npcId,
        const MethodInfo *method)
{
  BattleData_o *v5; // x20
  BattleServantData_o *v6; // x19
  struct BattleDeckServantData_o *deckSvt; // x8
  System_Collections_Generic_List_int__o *v8; // x21
  BattleDeckServantData_o *ShiftServantData; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  BattleDeckServantData_o *v12; // x22
  struct BattleDeckServantData_o *v13; // x8
  int64_t userSvtId; // x9
  BattleEntity_o *battle_ent; // x23
  int32_t Int; // w0
  const MethodInfo *v17; // x6
  __int64 v18; // x22
  __int64 v19; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  signed __int64 v23; // x22
  signed __int64 v24; // x25
  __int64 v25; // x24

  v5 = data;
  v6 = this;
  if ( (byte_4A5D851 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (BattleServantData_o *)sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5D851 = 1;
  }
  if ( (npcId & 0x80000000) == 0 )
  {
    deckSvt = v6->fields.deckSvt;
    *(_QWORD *)&v6->fields.transformIndex = 0xFFFFFFFFLL;
    v6->fields.shiftNpcId = npcId;
    if ( !deckSvt )
      goto LABEL_40;
    v6->fields.beforeUserSvtId = deckSvt->fields.userSvtId;
    v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v6->fields.isEnemy )
    {
      this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
      if ( !this )
        goto LABEL_40;
      v18 = 0LL;
      while ( (int)v18 < this->fields.uniqueId )
      {
        this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
        if ( this )
        {
          if ( (unsigned int)v18 >= this->fields.uniqueId )
LABEL_41:
            sub_1B88814(this, data);
          v19 = *(&this->fields.userSvtId.fields.currentCryptoKey + v18);
          if ( v19 )
          {
            if ( v8 )
            {
              data = (BattleData_o *)*(unsigned int *)(v19 + 40);
              items = v8->fields._items;
              v21 = Method_System_Collections_Generic_List_int__Add__;
              ++v8->fields._version;
              if ( items )
              {
                size = v8->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v8,
                    (int32_t)data,
                    *(const MethodInfo_34E0810 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v8->fields._size = size + 1;
                  items->m_Items[size + 1] = (int)data;
                }
                this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
                ++v18;
                if ( this )
                  continue;
              }
            }
          }
        }
        goto LABEL_40;
      }
    }
    if ( v5 )
    {
      this = (BattleServantData_o *)v5->fields.battle_info;
      if ( this )
      {
        ShiftServantData = BattleInfoData__getShiftServantData((BattleInfoData_o *)this, v6->fields.shiftNpcId, 0LL);
        if ( !ShiftServantData )
          return;
        v12 = ShiftServantData;
        this = (BattleServantData_o *)&v6->fields.deckSvt;
        v13 = v6->fields.deckSvt;
        if ( v13 )
        {
          userSvtId = v12->fields.userSvtId;
          v12->fields.isFollowerSvt = v13->fields.isFollowerSvt;
          v6->fields.transformUserSvtId = userSvtId;
          v6->fields.deckSvt = v12;
          sub_1B88554((ServantStatusBattleListViewItem_o *)this, (int32_t)v12, v10, v11);
          v12->fields.id = v6->fields.index + 1;
          v12->fields.uniqueId = v6->fields.uniqueId;
          battle_ent = v5->fields.battle_ent;
          Int = Follower__getInt(v6->fields.followerType, 0LL);
          BattleServantData__setBaseServantData(v6, v12, battle_ent, Int, 0LL, 0, v17);
          if ( !v6->fields.isEnemy )
          {
            this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
            if ( !this )
              goto LABEL_40;
            v23 = 0LL;
            while ( v23 < this->fields.uniqueId )
            {
              if ( v8 )
              {
                v24 = v8->fields._size;
                this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
                if ( this )
                {
                  if ( v23 >= (unsigned __int64)(unsigned int)this->fields.uniqueId )
                    goto LABEL_41;
                  v25 = *(&this->fields.userSvtId.fields.currentCryptoKey + v23);
                  if ( v23 >= v24 )
                  {
                    if ( !v25 )
                      goto LABEL_40;
                    LODWORD(this) = 0;
                  }
                  else
                  {
                    this = (BattleServantData_o *)System_Collections_Generic_List_int___get_Item(
                                                    v8,
                                                    v23,
                                                    (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
                    if ( !v25 )
                      goto LABEL_40;
                  }
                  *(_DWORD *)(v25 + 40) = (_DWORD)this;
                  ++v23;
                  this = (BattleServantData_o *)BattleServantData__getActiveSkillInfos(v6, (const MethodInfo *)data);
                  if ( this )
                    continue;
                }
              }
              goto LABEL_40;
            }
          }
          this = (BattleServantData_o *)v5->fields.battle_info;
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
    sub_1B8880C(this, data);
  }
}


void __fastcall BattleServantData__setStateString(
        BattleServantData_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.statestring = str;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statestring, (int32_t)str, (int32_t)method, v3);
}


void __fastcall BattleServantData__setTestSaveData(
        BattleServantData_o *this,
        BattleServantData_SaveData_o *save,
        const MethodInfo *method)
{
  if ( !save )
    sub_1B8880C(this, 0LL);
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
  int64_t v16; // x1
  const MethodInfo *v17; // x3
  int shiftNpcId; // w2
  int32_t uniqueId; // w1
  struct BattleDeckServantData_o *deckSvt; // x8
  struct BattleDeckServantData_o *v21; // x23
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
  BattleServantData___c__DisplayClass326_0_o dataa; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16

  v12 = fromLoad;
  if ( (byte_4A5D84E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D84E = 1;
  }
  dataa.fields.__4__this = 0LL;
  *(_QWORD *)&dataa.fields.fromLoad = 0LL;
  dataa.fields.data = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&dataa, (int32_t)data, transformIndex, overwriteLimitCount);
  dataa.fields.__4__this = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&dataa.fields.__4__this, (int32_t)this, v13, v14);
  dataa.fields.fromLoad = v12;
  shiftNpcId = this->fields.shiftNpcId;
  if ( shiftNpcId >= 1 )
  {
    BattleServantData__setSkillShiftServant(this, dataa.fields.data, shiftNpcId, v17);
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
            BattleServantData___setTransformServant_g__RemoveBuffGrantedByBeforePassiveSkill_326_0(
              this,
              UserServantFromID,
              &dataa,
              v53);
            this->fields.deckSvt = v51;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckSvt, (int32_t)v51, v54, v55);
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
              sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtName, (int32_t)name, v62, v63);
              this->fields.overkillTargetId = -1;
              individuality = UserServantFromID->fields.individuality;
              this->fields.svtIndividuality = individuality;
              sub_1B88554(
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
              v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v97, 0LL);
              ServantOverwriteName = BattleServantData__getServantOverwriteName(this, v69, v70);
              this->fields.svtOverwriteName = ServantOverwriteName;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteName,
                (int32_t)ServantOverwriteName,
                v72,
                v73);
              v74 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      UserServantFromID->fields.svtId,
                      0LL);
              BattleServantOverwriteName = BattleServantData__getBattleServantOverwriteName(this, v74, v75);
              this->fields.svtOverwriteBattleName = BattleServantOverwriteName;
              sub_1B88554(
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
    sub_1B8880C(battle_info, v16);
  }
  battle_info = BattleInfoData__getTransformDeckServantData(
                  (BattleInfoData_o *)battle_info,
                  uniqueId,
                  transformIndex,
                  0LL);
  deckSvt = this->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_50;
  v21 = (struct BattleDeckServantData_o *)battle_info;
  if ( !battle_info )
    goto LABEL_50;
  *((_BYTE *)battle_info + 56) = deckSvt->fields.isFollowerSvt;
  this->fields.transformIndex = transformIndex;
  this->fields.transformLimitCount = overwriteLimitCount;
  v16 = *((_QWORD *)battle_info + 3);
  this->fields.transformUserSvtId = v16;
  if ( !dataa.fields.data )
    goto LABEL_50;
  battle_info = dataa.fields.data->fields.battle_info;
  if ( !battle_info )
    goto LABEL_50;
  UserServantFromID = BattleInfoData__getUserServantFromID((BattleInfoData_o *)battle_info, v16, 0LL);
  BattleServantData___setTransformServant_g__RemoveBuffGrantedByBeforePassiveSkill_326_0(
    this,
    UserServantFromID,
    &dataa,
    v23);
  this->fields.deckSvt = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.deckSvt, (int32_t)v21, v24, v25);
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
  v31 = v21->fields.name;
  this->fields.svtName = v31;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtName, (int32_t)v31, v32, v33);
  this->fields.overkillTargetId = -1;
  v34 = UserServantFromID->fields.individuality;
  this->fields.svtIndividuality = v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtIndividuality, (int32_t)v34, v35, v36);
  v38 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&UserServantFromID->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v96.fields.currentCryptoKey = v38;
  *(_QWORD *)&v96.fields.fakeValue = v37;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v96, 0LL);
  v41 = BattleServantData__getServantOverwriteName(this, v39, v40);
  this->fields.svtOverwriteName = v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteName, (int32_t)v41, v42, v43);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(UserServantFromID->fields.svtId, 0LL);
  v46 = BattleServantData__getBattleServantOverwriteName(this, v44, v45);
  this->fields.svtOverwriteBattleName = v46;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtOverwriteBattleName, (int32_t)v46, v47, v48);
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
  battle_info = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v98, 0LL);
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
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields._classBoardSquareIds_k__BackingField,
      (int32_t)classBoardSquareIds,
      v86,
      (int32_t)v87);
    classBoardAddPassiveSkills = UserServantFromID->fields.classBoardAddPassiveSkills;
    this->fields.classBoardAddPassiveSkills = classBoardAddPassiveSkills;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.classBoardAddPassiveSkills,
      (int32_t)classBoardAddPassiveSkills,
      v90,
      v91);
    classBoardAddCommandSpells = UserServantFromID->fields.classBoardAddCommandSpells;
    this->fields.classBoardAddCommandSpells = classBoardAddCommandSpells;
    sub_1B88554(
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._LoadedAssetArgs_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleServantData__set_OverwriteShiftIconArray(
        BattleServantData_o *this,
        EnemyScriptParam_OverwriteShiftIcon_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._OverwriteShiftIconArray_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._OverwriteShiftIconArray_k__BackingField,
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
  sub_1B88554(
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
  sub_1B88554(
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


void __fastcall BattleServantData__set_receiveFunctionIdList(
        BattleServantData_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._receiveFunctionIdList_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._receiveFunctionIdList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D8AB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_23258/*"shiftUpdateStatus"*/);
    byte_4A5D8AB = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_1B8880C(v5, v6);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_23258/*"shiftUpdateStatus"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *skillInfoList; // x0
  char v12; // w25
  int32_t v13; // w24
  bool v14; // w8

  if ( (byte_4A5D8B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    byte_4A5D8B8 = 1;
  }
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_8:
    sub_1B8880C(skillInfoList, *(_QWORD *)&param);
  v12 = 0;
  v13 = 0;
  while ( v13 < skillInfoList->fields._size )
  {
    skillInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   skillInfoList,
                                                                   v13,
                                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( skillInfoList )
    {
      v14 = BattleSkillInfoData__TurnExtend(
              (BattleSkillInfoData_o *)skillInfoList,
              param,
              max,
              targetIndex,
              targetList,
              0LL);
      skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
      v12 |= v14;
      ++v13;
      if ( skillInfoList )
        continue;
    }
    goto LABEL_8;
  }
  return v12 & 1;
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
  System_Collections_Generic_List_object__o *skillInfoList; // x0
  char v12; // w25
  int32_t v13; // w24
  bool v14; // w8

  if ( (byte_4A5D8B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    byte_4A5D8B7 = 1;
  }
  skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
  if ( !skillInfoList )
LABEL_8:
    sub_1B8880C(skillInfoList, *(_QWORD *)&param);
  v12 = 0;
  v13 = 0;
  while ( v13 < skillInfoList->fields._size )
  {
    skillInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                   skillInfoList,
                                                                   v13,
                                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( skillInfoList )
    {
      v14 = BattleSkillInfoData__TurnProgress(
              (BattleSkillInfoData_o *)skillInfoList,
              param,
              max,
              targetIndex,
              targetList,
              0LL);
      skillInfoList = (System_Collections_Generic_List_object__o *)this->fields.skillInfoList;
      v12 |= v14;
      ++v13;
      if ( skillInfoList )
        continue;
    }
    goto LABEL_8;
  }
  return v12 & 1;
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
    sub_1B8880C(MaxHp, v14);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  System_Func_object__o *v17; // x21
  const MethodInfo *v18; // x4

  if ( (byte_4A5D87C & 1) == 0 )
  {
    sub_1B885B0(&System_Func_BattleBuffData_BuffData____TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass447_0__turnBuffProgressing_g__RemoveBuff_0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass447_0_TypeInfo);
    byte_4A5D87C = 1;
  }
  v10 = sub_1B887FC(BattleServantData___c__DisplayClass447_0_TypeInfo);
  BattleServantData___c__DisplayClass447_0___ctor((BattleServantData___c__DisplayClass447_0_o *)v10, 0LL);
  if ( !v10 )
    sub_1B8880C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = logic;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)logic, v15, v16);
  *(_BYTE *)(v10 + 32) = isEndEnemyTurn;
  v17 = (System_Func_object__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData____TypeInfo);
  System_Func_object____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_BattleServantData___c__DisplayClass447_0__turnBuffProgressing_g__RemoveBuff_0__,
    0LL);
  return BattleServantData__RemoveBuffsWithUpdateView(
           this,
           (System_Func_BattleBuffData_BuffData____o *)v17,
           fieldIndiv,
           *(BattleLogic_o **)(v10 + 24),
           v18);
}


void __fastcall BattleServantData__turnBuffProgressingIncrease(BattleServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0

  buffData = this->fields.buffData;
  if ( !buffData )
    sub_1B8880C(0LL, method);
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
  BattleBuffData_CheckIndividualitiesData_o *v11; // x22
  const MethodInfo *v12; // x1
  __int64 buffData; // x0
  int32_t ActValue_42450036; // w0
  const MethodInfo *v15; // x3
  int32_t v16; // w24
  int32_t v17; // w26
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t ActValue_42449556; // w24
  BattleLogicBuff_ReduceHpProcess_o *v21; // x26
  struct BattleLogicBuff_ConvertReduceRegainProcess_o *convertDamageProc; // x8
  int TotalConvertReduceToRegainParam_k__BackingField; // w8
  unsigned int v24; // w29
  bool v25; // w24
  DataVals_o *v26; // x24
  BattleBuffData_o *v27; // x27
  BattleBuffData_CheckIndividualitiesData_o *v28; // x28
  const MethodInfo *v29; // x2
  __int64 v30; // x27
  const MethodInfo *v31; // x2
  BattleActionData_o *NoEffectObject; // x0
  int32_t FixDamage; // w27
  const MethodInfo *v34; // x2
  int v35; // w24
  struct System_Int32_array *shiftDeckList; // x8
  struct BattleData_o *data; // x8
  const MethodInfo *v38; // x6
  __int64 v39; // x25
  int32_t v40; // w2
  int32_t v41; // w3
  BattleActionData_o *v42; // x0
  int32_t Wave; // w0
  const MethodInfo *v44; // x5
  int32_t v45; // w25
  struct BattlePerformance_o *perf; // x8
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  int v49; // w8
  __int64 v50; // x23
  unsigned int v51; // w25
  __int64 v52; // x26
  __int64 *v53; // x26
  __int64 v54; // t1
  __int64 v55; // x8
  int v56; // w9
  bool v57; // vf
  int v58; // w9
  struct BattleData_o *v59; // x8
  int32_t v60; // w22
  const MethodInfo *v61; // x3
  int maxtpturn; // w8
  const MethodInfo *v63; // x1
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-90h] BYREF
  System_String_o *missText; // [xsp+38h] [xbp-78h] BYREF
  bool v70; // [xsp+44h] [xbp-6Ch] BYREF
  bool actflg; // [xsp+48h] [xbp-68h] BYREF
  int32_t digit; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4A5D87A & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&BattleActionData_DamageData_TypeInfo);
    sub_1B885B0(&DataVals_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1B885B0(&BattleLogicBuff_ReduceHpProcess_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D87A = 1;
  }
  v70 = 0;
  missText = 0LL;
  memset(&i, 0, sizeof(i));
  this->fields.isGutsSleepRelease = 1;
  digit = 1000;
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v11, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !this->fields.isEnemy )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_96;
    ActValue_42450036 = BattleBuffData__getActValue_42450036((BattleBuffData_o *)buffData, 30, v11, 0LL);
    v16 = ActValue_42450036;
    if ( ActValue_42450036 <= 0 )
      v17 = ActValue_42450036;
    else
      v17 = 0;
    if ( BattleServantData__isGainNp(this, ActValue_42450036 > 0, 0LL, v15) )
      v19 = v16;
    else
      v19 = v17;
    BattleServantData__addNp(this, v19, 1, v18);
  }
  actflg = 0;
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_96;
  ActValue_42449556 = BattleBuffData__getActValue_42449556((BattleBuffData_o *)buffData, 32, &actflg, v11, 0LL);
  v70 = 0;
  missText = 0LL;
  v21 = (BattleLogicBuff_ReduceHpProcess_o *)sub_1B887FC(BattleLogicBuff_ReduceHpProcess_TypeInfo);
  BattleLogicBuff_ReduceHpProcess___ctor(v21, this, 0LL);
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_96;
  buffData = BattleBuffData__getActValue(
               (BattleBuffData_o *)buffData,
               33,
               &v70,
               &missText,
               v11,
               (BattleLogicBuff_BaseProcess_o *)v21,
               0LL);
  if ( !v21 )
    goto LABEL_96;
  convertDamageProc = v21->fields.convertDamageProc;
  if ( !convertDamageProc )
    goto LABEL_96;
  TotalConvertReduceToRegainParam_k__BackingField = convertDamageProc->fields._TotalConvertReduceToRegainParam_k__BackingField;
  v24 = TotalConvertReduceToRegainParam_k__BackingField + ActValue_42449556;
  if ( actflg )
  {
    if ( (v24 & 0x80000000) != 0 )
    {
      v25 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v25 = 0;
    if ( TotalConvertReduceToRegainParam_k__BackingField < 1 || (v24 & 0x80000000) != 0 )
      goto LABEL_33;
  }
  v26 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
  DataVals___ctor(v26, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v27 = this->fields.buffData;
  v28 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v28, this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v27 )
    goto LABEL_96;
  if ( BattleBuffData__isTurnBuff(v27, 42, v28, 1, 0LL) )
  {
    LODWORD(v30) = 0;
  }
  else
  {
    buffData = BattleServantData__getUpDownHeal(this, &digit, v29);
    if ( !v26 )
      goto LABEL_96;
    v30 = (__int64)((int)buffData * (unsigned __int64)v24) / digit;
    v26->fields.isShowForcedEffect = 1;
  }
  BattleServantData__provisionalHeal(this, v30, v29);
  buffData = BattleServantData__resultHeal(this, v30, v31);
  if ( !actiondata )
    goto LABEL_96;
  buffData = (__int64)BattleActionData__setHealData(actiondata, this->fields.uniqueId, v30, 0, 0, v26, 0, 0LL);
  if ( (int)v30 <= 0 )
  {
    if ( !v26 )
      goto LABEL_96;
    if ( !v26->fields.isShowForcedEffect )
    {
      if ( !logic )
        goto LABEL_96;
      NoEffectObject = BattleLogic__getNoEffectObject(logic, this->fields.uniqueId, 0, v26, 0, 0LL, 0LL);
      BattleActionData__addAction(actiondata, NoEffectObject, 0LL);
    }
  }
  v25 = 1;
LABEL_33:
  FixDamage = BattleLogicBuff_ReduceHpProcess__GetFixDamage(v21, 0LL);
  buffData = BattleLogicBuff_ReduceHpProcess__IsDisplayDamage(v21, 0LL);
  v70 = buffData & 1;
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
        goto LABEL_96;
      data = logic->fields.data;
      if ( !data )
        goto LABEL_96;
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
    v39 = sub_1B887FC(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v39, 0LL);
    if ( !v39 )
      goto LABEL_96;
    *(_DWORD *)(v39 + 28) = this->fields.uniqueId;
    buffData = sub_1B88658(int___TypeInfo, 1LL);
    if ( !buffData )
      goto LABEL_96;
    v12 = (const MethodInfo *)buffData;
    if ( !*(_DWORD *)(buffData + 24) )
      goto LABEL_97;
    *(_DWORD *)(buffData + 32) = v35;
    *(_QWORD *)(v39 + 96) = buffData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 96), buffData, v40, v41);
    *(_DWORD *)(v39 + 16) = 0;
    *(_BYTE *)(v39 + 128) = 1;
    if ( !actiondata
      || (BattleActionData__setDamageData(actiondata, (BattleActionData_DamageData_o *)v39, 0LL, 0, 0, 0LL),
          (buffData = (__int64)this->fields.buffData) == 0)
      || (v42 = BattleBuffData__UseProgressingDoNotAct((BattleBuffData_o *)buffData, this, 1, 0LL),
          BattleActionData__addSideEffectActionData(actiondata, v42, 1, 0LL),
          !logic) )
    {
LABEL_96:
      sub_1B8880C(buffData, v12);
    }
    Wave = BattleLogic__getWave(logic, 0LL);
    BattleServantData__setActionHistory(this, -1, 5, Wave, 0, v44);
    v25 = 1;
  }
  if ( !this->fields.isEnemy )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_96;
    buffData = BattleBuffData__getActValue_42450036((BattleBuffData_o *)buffData, 31, v11, 0LL);
    if ( !actiondata )
      goto LABEL_96;
    v45 = buffData;
    BattleActionData__addCriticalStar(actiondata, buffData, 0LL);
    if ( !logic )
      goto LABEL_96;
    buffData = (__int64)logic->fields.data;
    if ( !buffData )
      goto LABEL_96;
    BattleData__addCriticalPoint((BattleData_o *)buffData, v45, 0, 0LL);
    perf = logic->fields.perf;
    if ( !perf )
      goto LABEL_96;
    buffData = (__int64)perf->fields.statusPerf;
    if ( !buffData )
      goto LABEL_96;
    BattlePerformanceStatus__updateCriticalPoint((BattlePerformanceStatus_o *)buffData, -1, 1, 0LL);
  }
  if ( BattleServantData__canUseSkill(this, -1, v34) )
  {
    buffData = (__int64)this->fields.skillInfoList;
    if ( !buffData )
      goto LABEL_96;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v67,
      (System_Collections_Generic_List_object__o *)buffData,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    for ( i = v67;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
          BattleSkillInfoData__TurnProgress((BattleSkillInfoData_o *)i.fields._current, 1, 0, -1, 0LL, 0LL) )
    {
      if ( !i.fields._current )
        sub_1B8880C(0LL, v47);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
  }
  buffData = (__int64)this->fields.buffData;
  if ( !buffData )
    goto LABEL_96;
  buffData = (__int64)BattleBuffData__getPassiveList((BattleBuffData_o *)buffData, 1, 0LL);
  if ( !buffData )
    goto LABEL_96;
  v49 = *(_DWORD *)(buffData + 24);
  v50 = buffData;
  if ( v49 >= 1 )
  {
    v51 = 0;
    while ( v51 < v49 )
    {
      v52 = v50 + 8LL * (int)v51;
      v54 = *(_QWORD *)(v52 + 32);
      v53 = (__int64 *)(v52 + 32);
      buffData = v54;
      if ( !v54 )
        goto LABEL_96;
      buffData = BattleBuffData_BuffData__isCommandCodeBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( (buffData & 1) != 0 )
        goto LABEL_77;
      if ( v51 >= *(_DWORD *)(v50 + 24) )
        break;
      buffData = *v53;
      if ( !*v53 )
        goto LABEL_96;
      buffData = BattleBuffData_BuffData__IsCommandAssistBuff((BattleBuffData_BuffData_o *)buffData, 0LL);
      if ( (buffData & 1) != 0 )
      {
LABEL_77:
        if ( v51 >= *(_DWORD *)(v50 + 24) )
          break;
        v55 = *v53;
        if ( !*v53 )
          goto LABEL_96;
        v56 = *(_DWORD *)(v55 + 112);
        v57 = __OFSUB__(v56, 1);
        v58 = v56 - 1;
        if ( v58 < 0 == v57 )
          *(_DWORD *)(v55 + 112) = v58;
      }
      v49 = *(_DWORD *)(v50 + 24);
      if ( (int)++v51 >= v49 )
        goto LABEL_82;
    }
LABEL_97:
    sub_1B88814(buffData, v12);
  }
LABEL_82:
  if ( !logic )
    goto LABEL_96;
  v59 = logic->fields.data;
  if ( !v59 )
    goto LABEL_96;
  if ( !BattleServantData__IsUseNoblePhantasmOnThisWaveTurn(this, v59->fields.wavecount, v59->fields.turnCount, v48)
    && !this->fields.isUseTdBetweenEnemyTurnEndAndTactical
    && !BattleServantData__isTDSeraled(this, v12)
    && !BattleServantData__isNobleSeal(this, v12)
    && this->fields.treasuredvcId >= 1 )
  {
    buffData = (__int64)this->fields.buffData;
    if ( !buffData )
      goto LABEL_96;
    v60 = BattleBuffData__getActValue_42450036((BattleBuffData_o *)buffData, 35, v11, 0LL);
    if ( BattleServantData__isGainNp(this, 1, 0LL, v61) )
    {
      maxtpturn = this->fields.nexttpturn + ~v60;
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
  BattleServantData__updateHp(this, v63);
  BattleServantData__updateConditionsBuff(this, fieldIndiv, logic->fields.perf, v64);
  BattleServantData__updateBuff(this, 1, 1, v65);
  return v25;
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
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v12; // x20
  Il2CppObject *current; // x21
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5D8B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    sub_1B885B0(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass560_0__updateBuff_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass560_0_TypeInfo);
    byte_4A5D8B5 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v7 = sub_1B887FC(BattleServantData___c__DisplayClass560_0_TypeInfo);
  BattleServantData___c__DisplayClass560_0___ctor((BattleServantData___c__DisplayClass560_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_BYTE *)(v7 + 24) = doAuraUpdate,
        *(_BYTE *)(v7 + 25) = doClassIconAuraUpdate,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_1B8880C(paramobjelist, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v7 + 32);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v14 = *v12;
      if ( !*v12 )
      {
        v14 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_1B887FC(UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v14,
          (Il2CppObject *)v7,
          Method_BattleServantData___c__DisplayClass560_0__updateBuff_b__0__,
          0LL);
        *v12 = v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v14, v15, v16);
      }
      if ( !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v14,
        (const MethodInfo_2EC4CF8 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t MaxHp; // w23
  const MethodInfo *v11; // x4
  System_Int32_array *Individualities; // x25
  const MethodInfo *v13; // x5
  System_Int32_array *BuffIndividualities; // x26
  System_Int32_array *canSubStateBuffIndv; // x0
  __int64 v16; // x1
  BattleActorControl_o *ServantActor; // x27
  const MethodInfo *v18; // x5
  BattleLogic_o *logic; // x28
  const MethodInfo *v20; // x1

  if ( (byte_4A5D904 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D904 = 1;
  }
  buffData = this->fields.buffData;
  v8 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, BattlePerformance_o *, const MethodInfo *))this->klass->vtable._13_get_resultHp.method)(
         this,
         this->klass->vtable._14_set_resultHp.methodPtr,
         perf,
         method);
  MaxHp = BattleServantData__getMaxHp(this, v9);
  Individualities = BattleServantData__getIndividualities(this, 0LL, 1, 0, v11);
  BuffIndividualities = BattleServantData__getBuffIndividualities(this, 0, 0, 0, 0LL, v13);
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
  canSubStateBuffIndv = BattleServantData__getBuffIndividualities(this, 0, 0, 1, 0LL, v18);
  if ( !buffData )
LABEL_15:
    sub_1B8880C(canSubStateBuffIndv, v16);
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
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D8B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17810/*"changeHp"*/);
    byte_4A5D8B4 = 1;
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
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v10.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v8 )
    {
      if ( !current )
        sub_1B8880C(v8, v9);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_17810/*"changeHp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateNpGauge(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D8AC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24309/*"updateNp"*/);
    byte_4A5D8AC = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_1B8880C(v5, v6);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_24309/*"updateNp"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateNpGauge_42954260(
        BattleServantData_o *this,
        System_Int32_array *incNpArray,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x19
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **v14; // x20
  Il2CppObject *current; // x21
  UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5D8AD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    sub_1B885B0(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass546_0__updateNpGauge_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass546_0_TypeInfo);
    byte_4A5D8AD = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v7 = sub_1B887FC(BattleServantData___c__DisplayClass546_0_TypeInfo);
  BattleServantData___c__DisplayClass546_0___ctor((BattleServantData___c__DisplayClass546_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 24) = incNpArray,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)incNpArray, v12, v13),
        *(_DWORD *)(v7 + 32) = index,
        (paramobjelist = this->fields.paramobjelist) == 0LL) )
  {
    sub_1B8880C(paramobjelist, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v14 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o **)(v7 + 40);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      v16 = *v14;
      if ( !*v14 )
      {
        v16 = (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T1__o *)sub_1B887FC(UnityEngine_EventSystems_ExecuteEvents_EventFunction_IEventMessageRecieve__TypeInfo);
        UnityEngine_EventSystems_ExecuteEvents_EventFunction_object____ctor(
          v16,
          (Il2CppObject *)v7,
          Method_BattleServantData___c__DisplayClass546_0__updateNpGauge_b__0__,
          0LL);
        *v14 = v16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)v16, v17, v18);
      }
      if ( !UnityEngine_EventSystems_ExecuteEvents_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_EventSystems_ExecuteEvents_TypeInfo);
      UnityEngine_EventSystems_ExecuteEvents__Execute_object_(
        (UnityEngine_GameObject_o *)current,
        0LL,
        (UnityEngine_EventSystems_ExecuteEvents_EventFunction_T__o *)v16,
        (const MethodInfo_2EC4CF8 *)Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IEventMessageRecieve___);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D8B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24314/*"updateTDGauge"*/);
    byte_4A5D8B0 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_1B8880C(v5, v6);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_24314/*"updateTDGauge"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


void __fastcall BattleServantData__updateView(BattleServantData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *paramobjelist; // x0
  Il2CppObject *current; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D8AF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24316/*"updateView"*/);
    byte_4A5D8AF = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramobjelist = this->fields.paramobjelist;
  if ( !paramobjelist )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)paramobjelist,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v5 )
    {
      if ( !current )
        sub_1B8880C(v5, v6);
      UnityEngine_GameObject__SendMessage_69439696(
        (UnityEngine_GameObject_o *)current,
        (System_String_o *)StringLiteral_24316/*"updateView"*/,
        (Il2CppObject *)this,
        1,
        0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    sub_1B8880C(v7, v8);
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

  if ( (byte_4A5D879 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D879 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !skillInfo)
    || (v6 = (SkillLvMaster_o *)Instance,
        Instance = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                             skillInfo,
                             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr),
        !v6)
    || (Instance = SkillLvMaster__GetEntity(v6, (int32_t)Instance, skillInfo->fields.skilllv, 0LL)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)keyName, (int32_t)array, (int32_t)method);
  this->fields.saveDataArray = array;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.saveDataArray, (int32_t)array, v6, v7);
  return this;
}


void __fastcall BattleServantData_SaveData___ctor(BattleServantData_SaveData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D939 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5D939 = 1;
  }
  *(_QWORD *)&this->fields.deckIndex = -1LL;
  this->fields.dressDispId = -1;
  this->fields.shiftNpcId = -1;
  v3 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 5LL);
  this->fields.commandAssistIds = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.commandAssistIds, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805___ctor(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805__MoveNext(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *v4; // x19
  int32_t _1__state; // w8
  BattleServantData_o *_4__this; // x20
  BattleBuffData_o *buffData; // x21
  BattleCommandData_o *commandSelf; // x23
  BattleBuffData_CheckIndividualitiesData_o *v9; // x22
  BattleBuffData_BuffData_array *BuffList_42437664; // x0
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
  if ( (byte_4A5D945 & 1) == 0 )
  {
    this = (BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *)sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D945 = 1;
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
    v9 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v9, _4__this, 0LL, commandSelf, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_16;
    BuffList_42437664 = BattleBuffData__getBuffList_42437664(buffData, 137, v9, 1, 0, 0LL, 0LL, 0LL);
    v4->fields.__7__wrap1 = BuffList_42437664;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)BuffList_42437664, v11, v12);
    v13 = 0;
    v4->fields.__7__wrap2 = 0;
  }
  this = (BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *)&v4->fields.__7__wrap1;
  _7__wrap1 = v4->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_16;
  max_length = _7__wrap1->max_length;
  if ( v13 < (int)max_length )
  {
    if ( v13 >= max_length )
      sub_1B88814(this, method);
    if ( _4__this )
    {
      FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(_4__this, _7__wrap1->m_Items[v13], 0LL);
      v4->fields.__2__current = FunctionSkillInfoData;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)FunctionSkillInfoData, v19, v20);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_16:
    sub_1B8880C(this, method);
  }
  this->klass = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
  return 0;
}


System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805__System_Collections_Generic_IEnumerable_BattleSkillInfoData__GetEnumerator(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *v6; // x20
  struct BattleServantData_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleCommandData_o *_3__commandSelf; // x1

  if ( (byte_4A5D946 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_TypeInfo);
    byte_4A5D946 = 1;
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
    v6 = (BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *)sub_1B887FC(BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__commandSelf = this->fields.__3__commandSelf;
  v6->fields.commandSelf = _3__commandSelf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.commandSelf, (int32_t)_3__commandSelf, v4, v5);
  return (System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v6;
}


BattleSkillInfoData_o *__fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805__System_Collections_Generic_IEnumerator_BattleSkillInfoData__get_Current(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805__System_Collections_IEnumerator_Reset(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805__System_Collections_IEnumerator_get_Current(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805__System_IDisposable_Dispose(
        BattleServantData__EnumerateConfirmCommandFunctionSkill_d__805_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData__EnumerateContinueFunctionSkill_d__394___ctor(
        BattleServantData__EnumerateContinueFunctionSkill_d__394_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleServantData__EnumerateContinueFunctionSkill_d__394__MoveNext(
        BattleServantData__EnumerateContinueFunctionSkill_d__394_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleServantData__EnumerateContinueFunctionSkill_d__394_o *v4; // x19
  int32_t _1__state; // w8
  BattleServantData_o *_4__this; // x20
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  BattleBuffData_BuffData_array *BuffList_42437664; // x0
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
  if ( (byte_4A5D947 & 1) == 0 )
  {
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__394_o *)sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5D947 = 1;
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
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, _4__this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_21;
  BuffList_42437664 = BattleBuffData__getBuffList_42437664(buffData, 131, v8, 1, 0, 0LL, 0LL, 0LL);
  v4->fields.__7__wrap1 = BuffList_42437664;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)BuffList_42437664, v10, v11);
  v12 = 0;
  for ( v4->fields.__7__wrap2 = 0; ; v4->fields.__7__wrap2 = v12 )
  {
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__394_o *)&v4->fields.__7__wrap1;
    _7__wrap1 = v4->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_21;
    max_length = _7__wrap1->max_length;
    if ( v12 >= max_length )
    {
      this->klass = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
      return 0;
    }
    if ( v12 >= (unsigned int)max_length )
      sub_1B88814(this, method);
    v13 = &_7__wrap1->obj.klass + v12;
    v14 = (BattleBuffData_BuffData_o *)v13[4];
    if ( !v4->fields.isKeepAlive )
      break;
    if ( !v14 )
      goto LABEL_21;
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__394_o *)BattleBuffData_BuffData__get_GeneralParamOwner(
                                                                           (BattleBuffData_BuffData_o *)v13[4],
                                                                           0LL);
    if ( !this )
      goto LABEL_21;
    this = (BattleServantData__EnumerateContinueFunctionSkill_d__394_o *)((__int64 (__fastcall *)(BattleServantData__EnumerateContinueFunctionSkill_d__394_o *, Il2CppMethodPointer))this->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
                                                                           this,
                                                                           this->klass->vtable._6_System_Collections_Generic_IEnumerator_BattleSkillInfoData__get_Current.methodPtr);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
LABEL_14:
    v12 = v4->fields.__7__wrap2 + 1;
  }
  if ( !_4__this )
LABEL_21:
    sub_1B8880C(this, method);
  FunctionSkillInfoData = BattleServantData__CreateFunctionSkillInfoData(_4__this, v14, 0LL);
  v4->fields.__2__current = FunctionSkillInfoData;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)FunctionSkillInfoData, v20, v21);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateContinueFunctionSkill_d__394__System_Collections_Generic_IEnumerable_BattleSkillInfoData__GetEnumerator(
        BattleServantData__EnumerateContinueFunctionSkill_d__394_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  BattleServantData__EnumerateContinueFunctionSkill_d__394_o *v4; // x20
  struct BattleServantData_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *result; // x0

  if ( (byte_4A5D948 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData__EnumerateContinueFunctionSkill_d__394_TypeInfo);
    byte_4A5D948 = 1;
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
    v4 = (BattleServantData__EnumerateContinueFunctionSkill_d__394_o *)sub_1B887FC(BattleServantData__EnumerateContinueFunctionSkill_d__394_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
  }
  result = (System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v4;
  v4->fields.isKeepAlive = this->fields.__3__isKeepAlive;
  return result;
}


BattleSkillInfoData_o *__fastcall BattleServantData__EnumerateContinueFunctionSkill_d__394__System_Collections_Generic_IEnumerator_BattleSkillInfoData__get_Current(
        BattleServantData__EnumerateContinueFunctionSkill_d__394_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantData__EnumerateContinueFunctionSkill_d__394__System_Collections_IEnumerator_Reset(
        BattleServantData__EnumerateContinueFunctionSkill_d__394_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleServantData__EnumerateContinueFunctionSkill_d__394_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleServantData__EnumerateContinueFunctionSkill_d__394__System_Collections_IEnumerator_get_Current(
        BattleServantData__EnumerateContinueFunctionSkill_d__394_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleServantData__EnumerateContinueFunctionSkill_d__394__System_IDisposable_Dispose(
        BattleServantData__EnumerateContinueFunctionSkill_d__394_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807___ctor(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807__MoveNext(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t _1__state; // w8
  struct BattleServantData_o *_4__this; // x20
  __int64 v7; // x22
  __int64 Instance; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct BattleSkillInfoData_o *receivedSkill; // x1
  __int64 v12; // x21
  BattleBuffData_o *buffData; // x23
  BattleBuffData_CheckIndividualitiesData_o *v14; // x24
  System_Func_object__bool__o *v15; // x25
  BattleBuffData_BuffData_array *BuffList_42437664; // x0
  struct BattleBuffData_BuffData_array *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int v22; // w25
  __int64 v23; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  __int64 *v25; // x8
  int32_t v26; // w2
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x0
  Il2CppObject **p_skillEntity_5__3; // x1
  __int64 v29; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w8
  BattleBuffData_BuffData_o *v34; // x21
  struct BattleSkillInfoData_o *v35; // x22
  DataVals_array *DataValArray; // x0
  BattleServantData___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x23
  System_Func_object__bool__o *_9__807_1; // x24
  Il2CppObject *v40; // x25
  struct BattleServantData___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  BattleServantData___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x23
  System_Func_object__int__o *_9__807_2; // x24
  Il2CppObject *v48; // x25
  struct BattleServantData___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  BattleServantData___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x23
  System_Func_int__bool__o *_9__807_3; // x24
  Il2CppObject *v57; // x25
  struct BattleServantData___c_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  struct BattleSkillInfoData_o **p__2__current; // x19
  bool result; // w0
  int32_t v65; // w2
  int32_t v66; // w3
  struct BattleBuffData_BuffData_array *_7__wrap3; // x9
  il2cpp_array_size_t max_length; // w10
  struct BattleSkillInfoData_o **v69; // x19

  if ( (byte_4A5D949 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataVals__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_DataVals___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_DataVals__int__TypeInfo);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&System_Func_DataVals__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__807_1__);
    sub_1B885B0(&Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__807_2__);
    sub_1B885B0(&Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__807_3__);
    sub_1B885B0(&Method_BattleServantData___c__DisplayClass807_0__EnumerateSkillTargetedBeforeFunctionSkill_b__0__);
    sub_1B885B0(&BattleServantData___c__DisplayClass807_0_TypeInfo);
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D949 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 || _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_48;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v7 = sub_1B887FC(BattleServantData___c__DisplayClass807_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_54;
  receivedSkill = this->fields.receivedSkill;
  *(_QWORD *)(v7 + 16) = receivedSkill;
  v12 = v7 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)receivedSkill, v9, v10);
  if ( !_4__this )
    goto LABEL_54;
  buffData = _4__this->fields.buffData;
  v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v14, _4__this, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  v15 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v7,
    Method_BattleServantData___c__DisplayClass807_0__EnumerateSkillTargetedBeforeFunctionSkill_b__0__,
    0LL);
  if ( !buffData )
    goto LABEL_54;
  BuffList_42437664 = BattleBuffData__getBuffList_42437664(
                        buffData,
                        139,
                        v14,
                        1,
                        0,
                        (System_Func_BattleBuffData_BuffData__bool__o *)v15,
                        0LL,
                        0LL);
  this->fields._commandSpellEntity_5__2 = 0LL;
  v17 = BuffList_42437664;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._commandSpellEntity_5__2, 0, v18, v19);
  this->fields._skillEntity_5__3 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._skillEntity_5__3, 0, v20, v21);
  if ( !*(_QWORD *)v12 )
    goto LABEL_54;
  v22 = *(_DWORD *)(*(_QWORD *)v12 + 16LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_54;
  if ( v22 != 2 )
  {
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
    v29 = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 )
    {
      v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 392LL))(
                   v29,
                   *(_QWORD *)(*(_QWORD *)v29 + 400LL));
      if ( v30 )
      {
        v25 = &Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__;
        v26 = Instance;
        v27 = v30;
        p_skillEntity_5__3 = (Il2CppObject **)&this->fields._skillEntity_5__3;
        goto LABEL_19;
      }
    }
LABEL_54:
    sub_1B8880C(Instance, method);
  }
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  v23 = *(_QWORD *)v12;
  if ( !*(_QWORD *)v12 )
    goto LABEL_54;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 392LL))(
               v23,
               *(_QWORD *)(*(_QWORD *)v23 + 400LL));
  if ( !v24 )
    goto LABEL_54;
  v25 = &Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__TryGetEntity__;
  v26 = Instance;
  v27 = v24;
  p_skillEntity_5__3 = (Il2CppObject **)&this->fields._commandSpellEntity_5__2;
LABEL_19:
  DataMasterBase_object__object__int___TryGetEntity(v27, p_skillEntity_5__3, v26, (const MethodInfo_311D988 *)*v25);
  this->fields.__7__wrap3 = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__7__wrap3, (int32_t)v17, v31, v32);
  v33 = 0;
  for ( this->fields.__7__wrap4 = 0; ; this->fields.__7__wrap4 = v33 )
  {
    Instance = (__int64)&this->fields.__7__wrap3;
    _7__wrap3 = this->fields.__7__wrap3;
    if ( !_7__wrap3 )
      goto LABEL_54;
    max_length = _7__wrap3->max_length;
    if ( v33 >= (int)max_length )
    {
      *(_QWORD *)Instance = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)Instance, 0, v2, v3);
      return 0;
    }
    if ( v33 >= max_length )
      sub_1B88814(Instance, method);
    if ( !_4__this )
      goto LABEL_54;
    v34 = _7__wrap3->m_Items[v33];
    Instance = (__int64)BattleServantData__CreateFunctionSkillInfoData(_4__this, v34, 0LL);
    if ( !Instance )
      goto LABEL_54;
    v35 = (struct BattleSkillInfoData_o *)Instance;
    DataValArray = BattleSkillInfoData__get_DataValArray((BattleSkillInfoData_o *)Instance, method);
    v37 = BattleServantData___c_TypeInfo;
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)DataValArray;
    if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v37 = BattleServantData___c_TypeInfo;
    }
    _9__807_1 = (System_Func_object__bool__o *)v37->static_fields->__9__807_1;
    if ( !_9__807_1 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = BattleServantData___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v37->static_fields->__9;
      _9__807_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_DataVals__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__807_1,
        v40,
        Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__807_1__,
        0LL);
      static_fields = BattleServantData___c_TypeInfo->static_fields;
      static_fields->__9__807_1 = (struct System_Func_DataVals__bool__o *)_9__807_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__807_1, (int32_t)_9__807_1, v42, v43);
    }
    v44 = System_Linq_Enumerable__Where_object_(
            v38,
            (System_Func_TSource__bool__o *)_9__807_1,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_DataVals___);
    v45 = BattleServantData___c_TypeInfo;
    v46 = v44;
    if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v45 = BattleServantData___c_TypeInfo;
    }
    _9__807_2 = (System_Func_object__int__o *)v45->static_fields->__9__807_2;
    if ( !_9__807_2 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = BattleServantData___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v45->static_fields->__9;
      _9__807_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_DataVals__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__807_2,
        v48,
        Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__807_2__,
        0LL);
      v49 = BattleServantData___c_TypeInfo->static_fields;
      v49->__9__807_2 = (struct System_Func_DataVals__int__o *)_9__807_2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v49->__9__807_2, (int32_t)_9__807_2, v50, v51);
    }
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 v46,
                                                                 (System_Func_TSource__TResult__o *)_9__807_2,
                                                                 (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_DataVals__int___);
    v53 = System_Linq_Enumerable__Distinct_int_(
            v52,
            (const MethodInfo_2E9EB0C *)Method_System_Linq_Enumerable_Distinct_int___);
    v54 = BattleServantData___c_TypeInfo;
    v55 = v53;
    if ( !BattleServantData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantData___c_TypeInfo);
      v54 = BattleServantData___c_TypeInfo;
    }
    _9__807_3 = v54->static_fields->__9__807_3;
    if ( !_9__807_3 )
    {
      if ( !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        v54 = BattleServantData___c_TypeInfo;
      }
      v57 = (Il2CppObject *)v54->static_fields->__9;
      _9__807_3 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        _9__807_3,
        v57,
        Method_BattleServantData___c__EnumerateSkillTargetedBeforeFunctionSkill_b__807_3__,
        0LL);
      v58 = BattleServantData___c_TypeInfo->static_fields;
      v58->__9__807_3 = _9__807_3;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v58->__9__807_3, (int32_t)_9__807_3, v59, v60);
    }
    method = (const MethodInfo *)System_Linq_Enumerable__Where_int_(
                                   v55,
                                   (System_Func_TSource__bool__o *)_9__807_3,
                                   (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
    if ( !this->fields._commandSpellEntity_5__2 )
      break;
    Instance = CommandSpellEntity__IsIgnoreBattlePointUp(
                 this->fields._commandSpellEntity_5__2,
                 (System_Collections_Generic_IEnumerable_int__o *)method,
                 0LL);
    if ( (Instance & 1) == 0 )
    {
      this->fields.__2__current = v35;
      p__2__current = &this->fields.__2__current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v35, v61, v62);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_46:
    if ( !v34 )
      goto LABEL_54;
    BattleBuffData_BuffData__RevertUnused(v34, 1, 0LL);
LABEL_48:
    v33 = this->fields.__7__wrap4 + 1;
  }
  Instance = (__int64)this->fields._skillEntity_5__3;
  if ( !Instance )
    goto LABEL_46;
  Instance = SkillEntity__IsIgnoreBattlePointUp(
               (SkillEntity_o *)Instance,
               (System_Collections_Generic_IEnumerable_int__o *)method,
               0LL);
  if ( (Instance & 1) != 0 )
    goto LABEL_46;
  this->fields.__2__current = v35;
  v69 = &this->fields.__2__current;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v69, (int32_t)v35, v65, v66);
  *((_DWORD *)v69 - 2) = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *__fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807__System_Collections_Generic_IEnumerable_BattleSkillInfoData__GetEnumerator(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_o *v6; // x20
  struct BattleServantData_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleSkillInfoData_o *_3__receivedSkill; // x1

  if ( (byte_4A5D94A & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_TypeInfo);
    byte_4A5D94A = 1;
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
    v6 = (BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_o *)sub_1B887FC(BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__receivedSkill = this->fields.__3__receivedSkill;
  v6->fields.receivedSkill = _3__receivedSkill;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.receivedSkill, (int32_t)_3__receivedSkill, v4, v5);
  return (System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v6;
}


BattleSkillInfoData_o *__fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807__System_Collections_Generic_IEnumerator_BattleSkillInfoData__get_Current(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807__System_Collections_IEnumerator_Reset(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807__System_Collections_IEnumerator_get_Current(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807__System_IDisposable_Dispose(
        BattleServantData__EnumerateSkillTargetedBeforeFunctionSkill_d__807_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData__GetStepInAfterFunctionTimingBuff_d__810___ctor(
        BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleServantData__GetStepInAfterFunctionTimingBuff_d__810__MoveNext(
        BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t _1__state; // w8
  BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *v5; // x19
  BattleServantData_o *_4__this; // x20
  bool isAlive; // w8
  bool result; // w0
  BattleBuffData_BuffData_array *StepInAfterFunctionBuff; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w8
  int32_t _7__wrap2; // w8
  int32_t v14; // w8
  int32_t v15; // w8
  struct BattleBuffData_BuffData_array *_7__wrap1; // x9
  int32_t max_length; // w10
  struct BattleBuffData_BuffData_o *v18; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  BattleBuffData_BuffData_array *FieldIndividualityChangedFunctionBuff; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct BattleBuffData_BuffData_array *v23; // x9
  int32_t v24; // w10
  struct BattleBuffData_BuffData_o *v25; // x1
  ServantStatusBattleListViewItem_o *v26; // x19

  _1__state = this->fields.__1__state;
  v5 = this;
  if ( _1__state == 2 )
  {
    _7__wrap2 = this->fields.__7__wrap2;
    this->fields.__1__state = -1;
    v14 = _7__wrap2 + 1;
    this->fields.__7__wrap2 = v14;
    goto LABEL_15;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    v15 = this->fields.__7__wrap2;
    this->fields.__1__state = -1;
    v12 = v15 + 1;
    this->fields.__7__wrap2 = v12;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_22:
      sub_1B8880C(this, method);
    isAlive = BattleServantData__isAlive(_4__this, 0, 0LL);
    result = 0;
    if ( !isAlive )
      return result;
    StepInAfterFunctionBuff = BattleServantData__GetStepInAfterFunctionBuff(_4__this, 0LL);
    v5->fields.__7__wrap1 = StepInAfterFunctionBuff;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap1, (int32_t)StepInAfterFunctionBuff, v10, v11);
    v12 = 0;
    v5->fields.__7__wrap2 = 0;
  }
  _7__wrap1 = v5->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_22;
  max_length = _7__wrap1->max_length;
  if ( v12 < max_length )
  {
    if ( v12 < (unsigned int)max_length )
    {
      v18 = _7__wrap1->m_Items[v12];
      v5->fields.__2__current = v18;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)v18, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_23:
    sub_1B88814(this, method);
  }
  v5->fields.__7__wrap1 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap1, 0, v2, v3);
  if ( !_4__this )
    goto LABEL_22;
  FieldIndividualityChangedFunctionBuff = BattleServantData__GetFieldIndividualityChangedFunctionBuff(
                                            _4__this,
                                            v5->fields.questIndividualityArray,
                                            0LL);
  v5->fields.__7__wrap1 = FieldIndividualityChangedFunctionBuff;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap1,
    (int32_t)FieldIndividualityChangedFunctionBuff,
    v21,
    v22);
  v14 = 0;
  v5->fields.__7__wrap2 = 0;
LABEL_15:
  this = (BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *)&v5->fields.__7__wrap1;
  v23 = v5->fields.__7__wrap1;
  if ( !v23 )
    goto LABEL_22;
  v24 = v23->max_length;
  if ( v14 >= v24 )
  {
    this->klass = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
    return 0;
  }
  if ( v14 >= (unsigned int)v24 )
    goto LABEL_23;
  v25 = v23->m_Items[v14];
  v5->fields.__2__current = v25;
  v26 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
  sub_1B88554(v26, (int32_t)v25, v2, v3);
  *(_DWORD *)&v26[-1].fields.isMine = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleServantData__GetStepInAfterFunctionTimingBuff_d__810__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *v6; // x20
  struct BattleServantData_o *_4__this; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Int32_array *_3__questIndividualityArray; // x1

  if ( (byte_4A5D94B & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_TypeInfo);
    byte_4A5D94B = 1;
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
    v6 = (BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *)sub_1B887FC(BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__questIndividualityArray = this->fields.__3__questIndividualityArray;
  v6->fields.questIndividualityArray = _3__questIndividualityArray;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v6->fields.questIndividualityArray,
    (int32_t)_3__questIndividualityArray,
    v4,
    v5);
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v6;
}


BattleBuffData_BuffData_o *__fastcall BattleServantData__GetStepInAfterFunctionTimingBuff_d__810__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantData__GetStepInAfterFunctionTimingBuff_d__810__System_Collections_IEnumerator_Reset(
        BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleServantData__GetStepInAfterFunctionTimingBuff_d__810__System_Collections_IEnumerator_get_Current(
        BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleServantData__GetStepInAfterFunctionTimingBuff_d__810__System_IDisposable_Dispose(
        BattleServantData__GetStepInAfterFunctionTimingBuff_d__810_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D93A & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData___c_TypeInfo);
    byte_4A5D93A = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleServantData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleServantData___c_TypeInfo->static_fields->__9 = (struct BattleServantData___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleServantData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall BattleServantData___c___ctor(BattleServantData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c___AddPassiveBuffOnTransform_b__781_0(
        BattleServantData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  _DWORD *monitor; // x8
  int v5; // w9

  if ( (byte_4A5D93C & 1) == 0 )
  {
    this = (BattleServantData___c_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4A5D93C = 1;
  }
  if ( !x
    || (this = (BattleServantData___c_o *)BattleServantData__get_BuffData(x, 0LL)) == 0LL
    || (monitor = this[4].monitor) == 0LL )
  {
    sub_1B8880C(this, x);
  }
  v5 = monitor[7] + 1;
  monitor[6] = 0;
  monitor[7] = v5;
}


bool __fastcall BattleServantData___c___AddPassiveBuffOnTransform_b__781_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  _BOOL4 v4; // w0

  if ( !x )
    sub_1B8880C(this, 0LL);
  v3 = x->fields.type - 10;
  if ( v3 > 0x10 )
    LOBYTE(v4) = 0;
  else
    return (0x14001u >> v3) & 1;
  return v4;
}


bool __fastcall BattleServantData___c___CheckNoDamagePierceBuff_b__684_0(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall BattleServantData___c___EnumerateSkillBeforeFunctionSkill_b__806_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *skillData,
        const MethodInfo *method)
{
  if ( !skillData )
    sub_1B8880C(this, 0LL);
  return skillData->fields.priority;
}


bool __fastcall BattleServantData___c___EnumerateSkillIndividuality_b__657_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.type != 20;
}


System_Collections_Generic_IEnumerable_int__o *__fastcall BattleServantData___c___EnumerateSkillIndividuality_b__657_1(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return (System_Collections_Generic_IEnumerable_int__o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))x->klass->vtable._6_get_IndividualityArray.method)(
                                                            x,
                                                            x->klass->vtable._7_getCutInId.methodPtr);
}


bool __fastcall BattleServantData___c___EnumerateSkillTargetedBeforeFunctionSkill_b__807_1(
        BattleServantData___c_o *this,
        DataVals_o *val,
        const MethodInfo *method)
{
  if ( !val )
    sub_1B8880C(this, 0LL);
  return val->fields.funcType == 142;
}


int32_t __fastcall BattleServantData___c___EnumerateSkillTargetedBeforeFunctionSkill_b__807_2(
        BattleServantData___c_o *this,
        DataVals_o *val,
        const MethodInfo *method)
{
  if ( !val )
    sub_1B8880C(this, 0LL);
  return DataVals__GetParam(val, 172, 0, 0LL);
}


bool __fastcall BattleServantData___c___EnumerateSkillTargetedBeforeFunctionSkill_b__807_3(
        BattleServantData___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id != 0;
}


int32_t __fastcall BattleServantData___c___GetAddSideEffectBuffList_b__469_1(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.addOrder;
}


bool __fastcall BattleServantData___c___RemovePassiveSkill_b__778_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  unsigned int v3; // w8
  _BOOL4 v4; // w0

  if ( !s )
    sub_1B8880C(this, 0LL);
  v3 = s->fields.type - 10;
  if ( v3 > 0x10 )
    LOBYTE(v4) = 0;
  else
    return (0x1C001u >> v3) & 1;
  return v4;
}


bool __fastcall BattleServantData___c___ResetServantSelfSkill_b__396_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.type == 11;
}


bool __fastcall BattleServantData___c___getActiveSkillInfos_b__423_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
  return !s->fields.isPassive && s->fields.isUseSkill;
}


int32_t __fastcall BattleServantData___c___getAiParam_b__715_0(
        BattleServantData___c_o *this,
        int64_t s,
        const MethodInfo *method)
{
  return s;
}


int32_t __fastcall BattleServantData___c___getAttackSideEffectBuffList_b__468_0(
        BattleServantData___c_o *this,
        BattleBuffData_BuffData_o *a1,
        BattleBuffData_BuffData_o *a2,
        const MethodInfo *method)
{
  if ( !a1 || !a2 )
    sub_1B8880C(this, a1);
  return a1->fields.addOrder - a2->fields.addOrder;
}


bool __fastcall BattleServantData___c___getPassiveSkills_b__338_0(
        BattleServantData___c_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
  return s->fields.isPassive;
}


BattleServantData_PartAnimationSaveData_o *__fastcall BattleServantData___c___getSaveData_b__301_0(
        BattleServantData___c_o *this,
        System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____o x,
        const MethodInfo *method)
{
  struct BattlePlayAnimationComponent_SaveData_array *value; // x19
  struct System_String_o *key; // x20
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  value = x.fields.value;
  key = x.fields.key;
  if ( (byte_4A5D93B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__BattlePlayAnimationComponent_SaveData____get_Value__);
    sub_1B885B0(&BattleServantData_PartAnimationSaveData_TypeInfo);
    byte_4A5D93B = 1;
  }
  v5 = sub_1B887FC(BattleServantData_PartAnimationSaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = key;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)key, v8, v9);
  *(_QWORD *)(v5 + 24) = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)value, v10, v11);
  return (BattleServantData_PartAnimationSaveData_o *)v5;
}


BattlePointData_SaveData_o *__fastcall BattleServantData___c___getSaveData_b__301_1(
        BattleServantData___c_o *this,
        BattlePointData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattlePointData__GetSaveData(x, 0LL);
}


System_String_o *__fastcall BattleServantData___c___setSaveData_b__306_0(
        BattleServantData___c_o *this,
        BattleServantData_PartAnimationSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.key;
}


BattlePlayAnimationComponent_SaveData_array *__fastcall BattleServantData___c___setSaveData_b__306_1(
        BattleServantData___c_o *this,
        BattleServantData_PartAnimationSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.saveDataArray;
}


void __fastcall BattleServantData___c__678_object____cctor(const MethodInfo_3041D44 *method)
{
  BattleServantData___c__678_T__c *klass; // x0
  __int64 _0_BattleServantData___c__678_T; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  BattleServantData___c__678_T__c *v7; // x0
  __int64 _2_BattleServantData___c__678_T; // x0
  BattleServantData___c__678_T__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BattleServantData___c__678_T__c *)sub_1BDA48C(klass);
  _0_BattleServantData___c__678_T = (__int64)klass->rgctx_data->_0_BattleServantData___c__678_T_;
  if ( (*(_BYTE *)(_0_BattleServantData___c__678_T + 309) & 1) == 0 )
    _0_BattleServantData___c__678_T = sub_1BDA48C(_0_BattleServantData___c__678_T);
  v4 = (Il2CppObject *)sub_1B887FC(_0_BattleServantData___c__678_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BDA48C(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (BattleServantData___c__678_T__c *)sub_1BDA48C(v7);
  _2_BattleServantData___c__678_T = (__int64)v7->rgctx_data->_2_BattleServantData___c__678_T_;
  if ( (*(_BYTE *)(_2_BattleServantData___c__678_T + 309) & 1) == 0 )
    _2_BattleServantData___c__678_T = sub_1BDA48C(_2_BattleServantData___c__678_T);
  **(_QWORD **)(_2_BattleServantData___c__678_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BattleServantData___c__678_T__c *)sub_1BDA48C(v9);
  v10 = (__int64)v9->rgctx_data->_2_BattleServantData___c__678_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  sub_1B88554(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BattleServantData___c__678_object____ctor(
        BattleServantData___c__678_T__o *this,
        const MethodInfo_3041E00 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__678_object____HasWaveTurnEvent_b__678_0(
        BattleServantData___c__678_T__o *this,
        ServantWaveTurnEvent_o *x,
        const MethodInfo_3041E08 *method)
{
  Il2CppClass *_3_T; // x8

  _3_T = method->klass->rgctx_data->_3_T;
  if ( (BYTE5(_3_T->vtable[0].methodPtr) & 1) == 0 )
    _3_T = (Il2CppClass *)sub_1BDA48C(method->klass->rgctx_data->_3_T);
  return sub_1B886EC(x, _3_T) != 0;
}


void __fastcall BattleServantData___c__DisplayClass290_0___ctor(
        BattleServantData___c__DisplayClass290_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass290_0___GetBattlePointData_b__0(
        BattleServantData___c__DisplayClass290_0_o *this,
        BattlePointData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B8880C(this, 0LL);
  return data->fields.id == this->fields.battlePointId;
}


void __fastcall BattleServantData___c__DisplayClass316_0___ctor(
        BattleServantData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass316_0___UpdateBattlePointSetting_b__0(
        BattleServantData___c__DisplayClass316_0_o *this,
        BattlePointData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  BattlePointData__UpdateSetting(x, this->fields.__4__this, this->fields.battleEntity, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass320_0___ctor(
        BattleServantData___c__DisplayClass320_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass320_0___setBaseServantData_b__1(
        BattleServantData___c__DisplayClass320_0_o *this,
        commandAssistData_o *x,
        const MethodInfo *method)
{
  struct BattleDeckServantData_o *inDeckSvt; // x8

  if ( !x || (inDeckSvt = this->fields.inDeckSvt) == 0LL )
    sub_1B8880C(this, x);
  return x->fields.userSvtId == inDeckSvt->fields.userSvtId;
}


void __fastcall BattleServantData___c__DisplayClass320_1___ctor(
        BattleServantData___c__DisplayClass320_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass320_1___setBaseServantData_b__0(
        BattleServantData___c__DisplayClass320_1_o *this,
        int64_t id,
        const MethodInfo *method)
{
  struct CommandCodeInfo_o *info; // x8

  info = this->fields.info;
  if ( !info )
    sub_1B8880C(this, id);
  return info->fields.id == id;
}


void __fastcall BattleServantData___c__DisplayClass320_2___ctor(
        BattleServantData___c__DisplayClass320_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass320_2___setBaseServantData_b__2(
        BattleServantData___c__DisplayClass320_2_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass320_2_o *v4; // x20
  struct BattleServantData___c__DisplayClass320_0_o *CS___8__locals1; // x9
  struct System_Int32_array *skillIdList; // x10
  __int64 i; // x8
  struct System_Int32_array *skillLvList; // x9

  if ( !x )
    goto LABEL_10;
  v4 = this;
  this = (BattleServantData___c__DisplayClass320_2_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._5_get_skillId.method)(
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
      sub_1B88814(this, x);
    }
LABEL_10:
    sub_1B8880C(this, x);
  }
  return 0;
}


void __fastcall BattleServantData___c__DisplayClass336_0___ctor(
        BattleServantData___c__DisplayClass336_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass336_0___ReplaceSelfSkillInfo_b__0(
        BattleServantData___c__DisplayClass336_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.type == this->fields.skillInfoType && x->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass339_0___ctor(
        BattleServantData___c__DisplayClass339_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass339_0___GetHasSideEffectSkillEffectIds_b__0(
        BattleServantData___c__DisplayClass339_0_o *this,
        SkillLvEntity_o *ent,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass339_0_o *v4; // x20
  struct System_String_array *svals; // x8
  unsigned __int64 v6; // x23
  unsigned __int64 max_length; // x9
  System_String_o *v8; // x22
  DataVals_o *v9; // x21
  struct System_Int32_array *funcId; // x8
  unsigned __int64 v11; // x9
  int32_t v12; // w21
  struct FunctionMaster_o *funcMst; // x8
  _QWORD *v14; // x9
  __int64 retList_low; // x10

  v4 = this;
  if ( (byte_4A5D93D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1B885B0(&DataVals_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    this = (BattleServantData___c__DisplayClass339_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A5D93D = 1;
  }
  if ( !ent || (svals = ent->fields.svals) == 0LL )
LABEL_23:
    sub_1B8880C(this, ent);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = svals->max_length;
    if ( (__int64)v6 >= (int)max_length )
      break;
    if ( v6 >= max_length )
      goto LABEL_25;
    v8 = svals->m_Items[v6];
    v9 = (DataVals_o *)sub_1B887FC(DataVals_TypeInfo);
    DataVals___ctor(v9, v8, 0LL);
    funcId = ent->fields.funcId;
    if ( !funcId )
      goto LABEL_23;
    v11 = funcId->max_length;
    if ( (__int64)v6 < (int)v11 )
    {
      if ( v6 >= v11 )
LABEL_25:
        sub_1B88814(this, ent);
      this = (BattleServantData___c__DisplayClass339_0_o *)v4->fields.funcMst;
      if ( !this )
        goto LABEL_23;
      this = (BattleServantData___c__DisplayClass339_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                             funcId->m_Items[v6 + 1],
                                                             (const MethodInfo_311D934 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        if ( !v9 )
          goto LABEL_23;
        DataVals__SetTempType(v9, v4->fields.funcMst, (int32_t)this->fields.retList, 0LL);
        this = (BattleServantData___c__DisplayClass339_0_o *)DataVals__GetParam(v9, 34, 0, 0LL);
        if ( (int)this >= 1 )
        {
          v12 = (int)this;
          this = (BattleServantData___c__DisplayClass339_0_o *)v4->fields.retList;
          if ( !this )
            goto LABEL_23;
          this = (BattleServantData___c__DisplayClass339_0_o *)System_Collections_Generic_List_int___Contains(
                                                                 (System_Collections_Generic_List_int__o *)this,
                                                                 v12,
                                                                 (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = (BattleServantData___c__DisplayClass339_0_o *)v4->fields.retList;
            if ( !this )
              goto LABEL_23;
            funcMst = this->fields.funcMst;
            v14 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(this->fields.retList);
            if ( !funcMst )
              goto LABEL_23;
            retList_low = SLODWORD(this->fields.retList);
            if ( (unsigned int)retList_low >= LODWORD(funcMst->fields._MasterName_k__BackingField) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)this,
                v12,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(this->fields.retList) = retList_low + 1;
              *((_DWORD *)&funcMst->fields.list + retList_low) = v12;
            }
          }
        }
      }
    }
    svals = ent->fields.svals;
    ++v6;
    if ( !svals )
      goto LABEL_23;
  }
}


void __fastcall BattleServantData___c__DisplayClass391_0___ctor(
        BattleServantData___c__DisplayClass391_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass391_0___ContinuePreProcess_b__0(
        BattleServantData___c__DisplayClass391_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t buffId; // w19
  BattleServantData___c__DisplayClass391_0_o *v4; // x20
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
    this = (BattleServantData___c__DisplayClass391_0_o *)v4->fields.buffMst;
    if ( this )
    {
      IsUnSubStateWhenAliveContinue = BuffMaster__IsUnSubStateWhenAliveContinue((BuffMaster_o *)this, buffId, 0LL);
      return !IsUnSubStateWhenAliveContinue;
    }
LABEL_13:
    sub_1B8880C(this, buff);
  }
  this = (BattleServantData___c__DisplayClass391_0_o *)this->fields.buffMst;
  if ( !this )
    goto LABEL_13;
  IsUnSubStateWhenAliveContinue = BuffMaster__IsUnSubStateWhenDeadContinue((BuffMaster_o *)this, buffId, 0LL);
  return !IsUnSubStateWhenAliveContinue;
}


void __fastcall BattleServantData___c__DisplayClass420_0___ctor(
        BattleServantData___c__DisplayClass420_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass420_0___isUseSelfSkill_b__0(
        BattleServantData___c__DisplayClass420_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
  return s->fields.type == 11 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass421_0___ctor(
        BattleServantData___c__DisplayClass421_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass421_0___getSelfSkillInfo_b__0(
        BattleServantData___c__DisplayClass421_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
  return s->fields.type == 11 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass422_0___ctor(
        BattleServantData___c__DisplayClass422_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass422_0___getTempSkillInfo_b__0(
        BattleServantData___c__DisplayClass422_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
  return s->fields.type == 20 && s->fields.index == this->fields.index;
}


void __fastcall BattleServantData___c__DisplayClass446_0___ctor(
        BattleServantData___c__DisplayClass446_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData___c__DisplayClass446_0___RemoveNoTurnBuffWithUpdateView_g__RemoveBuff_0(
        BattleServantData___c__DisplayClass446_0_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x8
  BattleBuffData_o *buffData; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (buffData = _4__this->fields.buffData) == 0LL )
    sub_1B8880C(this, method);
  return BattleBuffData__RemoveNoTurnBuff(buffData, this->fields.logic, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass447_0___ctor(
        BattleServantData___c__DisplayClass447_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_array *__fastcall BattleServantData___c__DisplayClass447_0___turnBuffProgressing_g__RemoveBuff_0(
        BattleServantData___c__DisplayClass447_0_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !_4__this->fields.buffData )
    sub_1B8880C(this, method);
  return BattleBuffData__turnProgressing(
           _4__this->fields.buffData,
           this->fields.logic,
           this->fields.isEndEnemyTurn,
           _4__this->fields.uniqueId,
           0LL);
}


void __fastcall BattleServantData___c__DisplayClass469_0___ctor(
        BattleServantData___c__DisplayClass469_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleServantData___c__DisplayClass469_0___GetAddSideEffectBuffList_b__0(
        BattleServantData___c__DisplayClass469_0_o *this,
        int32_t act,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x9
  BattleServantData___c__DisplayClass469_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (BattleServantData___c__DisplayClass469_0_o *)_4__this->fields.buffData) == 0LL) )
    sub_1B8880C(this, act);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetFixBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                act,
                                                                                v4->fields.checkData,
                                                                                1,
                                                                                0LL);
}


void __fastcall BattleServantData___c__DisplayClass546_0___ctor(
        BattleServantData___c__DisplayClass546_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass546_0___updateNpGauge_b__0(
        BattleServantData___c__DisplayClass546_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass546_0_o *v5; // x20
  IEventMessageRecieve_c *klass; // x8
  struct System_Int32_array *incNpArray; // x21
  struct BattleServantData_o *_4__this; // x22
  unsigned int index; // w20
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_4A5D93E & 1) == 0 )
  {
    this = (BattleServantData___c__DisplayClass546_0_o *)sub_1B885B0(&IEventMessageRecieve_TypeInfo);
    byte_4A5D93E = 1;
  }
  if ( !reciever )
    sub_1B8880C(this, reciever);
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
    p_method = sub_1BDA590(reciever, IEventMessageRecieve_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, struct System_Int32_array *, _QWORD, _QWORD))p_method)(
    reciever,
    _4__this,
    incNpArray,
    index,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass547_0___ctor(
        BattleServantData___c__DisplayClass547_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass547_0___UpdateNpImmediately_b__0(
        BattleServantData___c__DisplayClass547_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  int32_t inputNp; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D93F & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_15185/*"UpdateNpImmediately"*/);
    byte_4A5D93F = 1;
  }
  inputNp = this->fields.inputNp;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &inputNp, method, v3, v4);
  if ( !x )
    sub_1B8880C(v7, v8);
  UnityEngine_GameObject__SendMessage_69439696(x, (System_String_o *)StringLiteral_15185/*"UpdateNpImmediately"*/, v7, 1, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass550_0___ctor(
        BattleServantData___c__DisplayClass550_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass550_0___UpdateTdGauge_b__0(
        BattleServantData___c__DisplayClass550_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // w8

  if ( (byte_4A5D940 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_15192/*"UpdateTdGauge"*/);
    byte_4A5D940 = 1;
  }
  v5 = sub_1B88658(int___TypeInfo, 2LL);
  if ( !v5 )
    goto LABEL_8;
  v7 = *(_DWORD *)(v5 + 24);
  if ( !v7 || (*(_DWORD *)(v5 + 32) = this->fields.now, v7 == 1) )
    sub_1B88814(v5, v6);
  *(_DWORD *)(v5 + 36) = this->fields.max;
  if ( !x )
LABEL_8:
    sub_1B8880C(v5, v6);
  UnityEngine_GameObject__SendMessage_69439696(x, (System_String_o *)StringLiteral_15192/*"UpdateTdGauge"*/, (Il2CppObject *)v5, 1, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass560_0___ctor(
        BattleServantData___c__DisplayClass560_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass560_0___updateBuff_b__0(
        BattleServantData___c__DisplayClass560_0_o *this,
        IEventMessageRecieve_o *reciever,
        UnityEngine_EventSystems_BaseEventData_o *eventData,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass560_0_o *v5; // x21
  IEventMessageRecieve_c *klass; // x8
  struct BattleServantData_o *_4__this; // x20
  _BOOL4 doAuraUpdate; // w22
  _BOOL4 doClassIconAuraUpdate; // w21
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  v5 = this;
  if ( (byte_4A5D941 & 1) == 0 )
  {
    this = (BattleServantData___c__DisplayClass560_0_o *)sub_1B885B0(&IEventMessageRecieve_TypeInfo);
    byte_4A5D941 = 1;
  }
  if ( !reciever )
    sub_1B8880C(this, reciever);
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
    p_method = sub_1BDA590(reciever, IEventMessageRecieve_TypeInfo, 1LL);
  }
  (*(void (__fastcall **)(IEventMessageRecieve_o *, struct BattleServantData_o *, _BOOL4, _BOOL4, _QWORD))p_method)(
    reciever,
    _4__this,
    doAuraUpdate,
    doClassIconAuraUpdate,
    *(_QWORD *)(p_method + 8));
}


void __fastcall BattleServantData___c__DisplayClass653_0___ctor(
        BattleServantData___c__DisplayClass653_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass653_0___EnumerateIndividuality_b__0(
        BattleServantData___c__DisplayClass653_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  if ( (byte_4A5D942 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A5D942 = 1;
  }
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.subBuffIndividualities,
            x,
            (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall BattleServantData___c__DisplayClass684_0___ctor(
        BattleServantData___c__DisplayClass684_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass684_0___CheckNoDamagePierceBuff_b__1(
        BattleServantData___c__DisplayClass684_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BuffEntity_o *IsNullOrEmpty; // x0
  __int64 v6; // x1

  IsNullOrEmpty = (BuffEntity_o *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.notPierceIndivArray,
                                    0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return 0;
  if ( !buff || (IsNullOrEmpty = BattleBuffData_BuffData__get_Entity(buff, 0LL)) == 0LL )
    sub_1B8880C(IsNullOrEmpty, v6);
  return Individuality__CheckSignedMultiIndividuality(IsNullOrEmpty->fields.vals, this->fields.notPierceIndivArray, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass688_0___ctor(
        BattleServantData___c__DisplayClass688_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass688_0___CheckInvincibleAvoidanceBuff_b__0(
        BattleServantData___c__DisplayClass688_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BuffEntity_o *IsNullOrEmpty; // x0
  __int64 v6; // x1

  IsNullOrEmpty = (BuffEntity_o *)BasicHelper__IsNullOrEmpty(
                                    (System_Collections_ICollection_o *)this->fields.notPierceIndivArray,
                                    0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    return 1;
  }
  else
  {
    if ( !buff || (IsNullOrEmpty = BattleBuffData_BuffData__get_Entity(buff, 0LL)) == 0LL )
      sub_1B8880C(IsNullOrEmpty, v6);
    return !Individuality__CheckSignedMultiIndividuality(
              IsNullOrEmpty->fields.vals,
              this->fields.notPierceIndivArray,
              0LL);
  }
}


bool __fastcall BattleServantData___c__DisplayClass688_0___CheckInvincibleAvoidanceBuff_b__1(
        BattleServantData___c__DisplayClass688_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass688_0_o *v3; // x19

  if ( !buff
    || (v3 = this,
        (this = (BattleServantData___c__DisplayClass688_0_o *)BattleBuffData_BuffData__get_Entity(buff, 0LL)) == 0LL) )
  {
    sub_1B8880C(this, buff);
  }
  return Individuality__CheckSignedMultiIndividuality(
           (System_Int32_array *)this[2].klass,
           v3->fields.notPierceIndivArray,
           0LL);
}


void __fastcall BattleServantData___c__DisplayClass739_0___ctor(
        BattleServantData___c__DisplayClass739_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass739_0___GetCommandCodeInfo_b__0(
        BattleServantData___c__DisplayClass739_0_o *this,
        CommandCodeInfo_o *c,
        const MethodInfo *method)
{
  if ( !c )
    sub_1B8880C(this, 0LL);
  return c->fields.id == this->fields.userCommandCodeId;
}


void __fastcall BattleServantData___c__DisplayClass779_0___ctor(
        BattleServantData___c__DisplayClass779_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass779_0___RemovePassiveBuffOnTransform_b__0(
        BattleServantData___c__DisplayClass779_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *_4__this; // x8
  struct BattleData_o *data; // x9

  if ( !x
    || (_4__this = this->fields.__4__this) == 0LL
    || (data = this->fields.data) == 0LL
    || (this = (BattleServantData___c__DisplayClass779_0_o *)x->fields.buffData) == 0LL )
  {
    sub_1B8880C(this, x);
  }
  BattleBuffData__RemovePassiveReplacedOnTransform(
    (BattleBuffData_o *)this,
    _4__this->fields.uniqueId,
    data->fields.logic,
    0LL);
}


void __fastcall BattleServantData___c__DisplayClass782_0___ctor(
        BattleServantData___c__DisplayClass782_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass782_0___UpdateClassBoardSkillBuff_b__0(
        BattleServantData___c__DisplayClass782_0_o *this,
        BattleSkillInfoData_o *s,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass782_0_o *v3; // x19
  struct AddSkillData_o *skillData; // x8

  if ( !s
    || (v3 = this,
        this = (BattleServantData___c__DisplayClass782_0_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer, const MethodInfo *))s->klass->vtable._5_get_skillId.method)(
                                                               s,
                                                               s->klass->vtable._6_get_IndividualityArray.methodPtr,
                                                               method),
        (skillData = v3->fields.skillData) == 0LL) )
  {
    sub_1B8880C(this, s);
  }
  return (_DWORD)this == skillData->fields.id;
}


void __fastcall BattleServantData___c__DisplayClass801_0___ctor(
        BattleServantData___c__DisplayClass801_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData___c__DisplayClass801_0___FilterDisplayingSkillIdArray_b__0(
        BattleServantData___c__DisplayClass801_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *displayChangeSkillIdHashSet; // x0

  if ( (byte_4A5D943 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4A5D943 = 1;
  }
  displayChangeSkillIdHashSet = this->fields.displayChangeSkillIdHashSet;
  if ( !displayChangeSkillIdHashSet )
    sub_1B8880C(0LL, *(_QWORD *)&x);
  return !System_Collections_Generic_HashSet_int___Contains(
            displayChangeSkillIdHashSet,
            -x,
            (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantData___c__DisplayClass801_0___FilterDisplayingSkillIdArray_b__1(
        BattleServantData___c__DisplayClass801_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *displayChangeSkillIdHashSet; // x0

  if ( (byte_4A5D944 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4A5D944 = 1;
  }
  displayChangeSkillIdHashSet = this->fields.displayChangeSkillIdHashSet;
  if ( !displayChangeSkillIdHashSet )
    sub_1B8880C(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           displayChangeSkillIdHashSet,
           x,
           (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall BattleServantData___c__DisplayClass806_0___ctor(
        BattleServantData___c__DisplayClass806_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass806_0___EnumerateSkillBeforeFunctionSkill_b__0(
        BattleServantData___c__DisplayClass806_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B8880C(this, 0LL);
  return BattleBuffData_BuffData__IsMatchSkillCountingCondition(buff, this->fields.data, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass807_0___ctor(
        BattleServantData___c__DisplayClass807_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass807_0___EnumerateSkillTargetedBeforeFunctionSkill_b__0(
        BattleServantData___c__DisplayClass807_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass807_0_o *v3; // x19

  if ( !buff
    || (v3 = this,
        (this = (BattleServantData___c__DisplayClass807_0_o *)BattleBuffData_BuffData__get_Entity(buff, 0LL)) == 0LL) )
  {
    sub_1B8880C(this, buff);
  }
  return BuffEntity__IsMatchBattleSkillInfoCondition((BuffEntity_o *)this, v3->fields.receivedSkill, 0LL);
}


void __fastcall BattleServantData___c__DisplayClass808_0___ctor(
        BattleServantData___c__DisplayClass808_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantData___c__DisplayClass808_0___GetFieldIndividualityChangedFunctionBuff_b__0(
        BattleServantData___c__DisplayClass808_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData___c__DisplayClass808_0_o *v3; // x19

  if ( !buff
    || (v3 = this,
        (this = (BattleServantData___c__DisplayClass808_0_o *)BattleBuffData_BuffData__get_Entity(buff, 0LL)) == 0LL) )
  {
    sub_1B8880C(this, buff);
  }
  return BuffEntity__ContainsIndividualityToActivate((BuffEntity_o *)this, v3->fields.questIndividualityArray, 0LL);
}