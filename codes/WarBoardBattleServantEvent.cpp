void __fastcall WarBoardBattleServantEvent___ctor(
        WarBoardBattleServantEvent_o *this,
        BattleWarBoardInfo_WarBoardServantInfo_array *svtInfoArray,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.svtInfoArray = svtInfoArray;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)svtInfoArray, v5, v6, v7, v8, v9, v10);
}


void __fastcall WarBoardBattleServantEvent__AddPartySkill(
        WarBoardBattleServantEvent_o *this,
        BattleServantData_o *svtData,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  struct DeckData_array *enemyDeck; // x8
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x8
  int32_t max_length; // w20
  __int64 v12; // x1
  int32_t PartySkillId; // w21
  System_Collections_ICollection_o *PartySkillEntityArray; // x20
  void *monitor; // x8
  unsigned __int64 v16; // x21
  __int64 v17; // x22

  if ( (byte_4B187CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardPartySkillMaster___, svtData, battleInfoData);
    this = (WarBoardBattleServantEvent_o *)sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B187CF = 1;
  }
  if ( !svtData || !battleInfoData )
    goto LABEL_27;
  if ( svtData->fields.isEnemy )
  {
    enemyDeck = battleInfoData->fields.enemyDeck;
    if ( !enemyDeck )
      goto LABEL_27;
    if ( !enemyDeck->max_length )
LABEL_26:
      sub_1BCAA44(this, svtData);
    myDeck = enemyDeck->m_Items[0];
    if ( !myDeck )
      goto LABEL_27;
  }
  else
  {
    myDeck = battleInfoData->fields.myDeck;
    if ( !myDeck )
      goto LABEL_27;
  }
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_27;
  this = (WarBoardBattleServantEvent_o *)battleInfoData->fields.warBoardBattleInfo;
  if ( !this )
    goto LABEL_27;
  max_length = svts->max_length;
  PartySkillId = BattleWarBoardInfo__GetPartySkillId((BattleWarBoardInfo_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  this = (WarBoardBattleServantEvent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardPartySkillMaster___);
  if ( !this )
LABEL_27:
    sub_1BCAA3C(this, svtData);
  PartySkillEntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetPartySkillEntityArray(
                                                                (WarBoardPartySkillMaster_o *)this,
                                                                PartySkillId,
                                                                max_length,
                                                                svtData->fields.isEnemy,
                                                                0LL);
  this = (WarBoardBattleServantEvent_o *)BasicHelper__IsNullOrEmpty(PartySkillEntityArray, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !PartySkillEntityArray )
      goto LABEL_27;
    monitor = PartySkillEntityArray[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v16 = 0LL;
      while ( v16 < (unsigned int)monitor )
      {
        v17 = *((_QWORD *)&PartySkillEntityArray[2].klass + v16);
        if ( v17 )
        {
          this = (WarBoardBattleServantEvent_o *)SkillEntity__isActive(
                                                   *((SkillEntity_o **)&PartySkillEntityArray[2].klass + v16),
                                                   0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            this = (WarBoardBattleServantEvent_o *)BattleServantData__addSkillInfo(
                                                     svtData,
                                                     101,
                                                     v16,
                                                     *(_DWORD *)(v17 + 16),
                                                     1,
                                                     -1LL,
                                                     -1,
                                                     0LL,
                                                     0LL);
        }
        LODWORD(monitor) = PartySkillEntityArray[1].monitor;
        if ( (__int64)++v16 >= (int)monitor )
          return;
      }
      goto LABEL_26;
    }
  }
}


void __fastcall WarBoardBattleServantEvent__AddSpecialPassive(
        WarBoardBattleServantEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  WarBoardBattleServantEvent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t UserSvtId; // x0
  const MethodInfo *v10; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *v12; // x20
  Il2CppObject *Entity; // x0

  v4 = this;
  if ( (byte_4B187CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, svtData, method);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5, v6);
    this = (WarBoardBattleServantEvent_o *)sub_1BCA7E0(
                                             &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                             v7,
                                             v8);
    byte_4B187CE = 1;
  }
  if ( !svtData )
    goto LABEL_13;
  UserSvtId = BattleServantData__getUserSvtId(svtData, 0LL);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(v4, UserSvtId, v10);
  if ( !EventServantInfo )
    return;
  v12 = EventServantInfo;
  if ( EventServantInfo->fields.squareEffectSkillId < 1 || EventServantInfo->fields.squareEffectSkillLv < 1 )
    return;
  this = (WarBoardBattleServantEvent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleServantEvent_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(this, svtData);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             v12->fields.squareEffectSkillId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( !SkillEntity__isActive((SkillEntity_o *)Entity, 0LL) )
      BattleServantData__addSkillInfo(
        svtData,
        100,
        0,
        v12->fields.squareEffectSkillId,
        v12->fields.squareEffectSkillLv,
        -1LL,
        -1,
        0LL,
        0LL);
  }
}


BattleWarBoardInfo_WarBoardServantInfo_o *__fastcall WarBoardBattleServantEvent__GetEventServantInfo(
        WarBoardBattleServantEvent_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Object_array *svtInfoArray; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B187CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardServantInfo___, userSvtId, method);
    sub_1BCA7E0(&System_Predicate_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardBattleServantEvent___c__DisplayClass2_0__GetEventServantInfo_b__0__, v8, v9);
    sub_1BCA7E0(&WarBoardBattleServantEvent___c__DisplayClass2_0_TypeInfo, v10, v11);
    byte_4B187CD = 1;
  }
  v12 = (Il2CppObject *)sub_1BCAA2C(WarBoardBattleServantEvent___c__DisplayClass2_0_TypeInfo, userSvtId, method, v3);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12[1].klass = (Il2CppClass *)userSvtId;
  svtInfoArray = (System_Object_array *)this->fields.svtInfoArray;
  if ( !svtInfoArray )
    return 0LL;
  v18 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo,
                                        v14,
                                        v15,
                                        v16);
  System_Predicate_object____ctor(
    v18,
    v12,
    Method_WarBoardBattleServantEvent___c__DisplayClass2_0__GetEventServantInfo_b__0__,
    0LL);
  return (BattleWarBoardInfo_WarBoardServantInfo_o *)System_Array__Find_object_(
                                                       svtInfoArray,
                                                       (System_Predicate_T__o *)v18,
                                                       (const MethodInfo_300CA48 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardServantInfo___);
}


bool __fastcall WarBoardBattleServantEvent__IsApplyPassive(
        WarBoardBattleServantEvent_o *this,
        int32_t type,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  return type != 12;
}


void __fastcall WarBoardBattleServantEvent___c__DisplayClass2_0___ctor(
        WarBoardBattleServantEvent___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardBattleServantEvent___c__DisplayClass2_0___GetEventServantInfo_b__0(
        WarBoardBattleServantEvent___c__DisplayClass2_0_o *this,
        BattleWarBoardInfo_WarBoardServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.id == this->fields.userSvtId;
}