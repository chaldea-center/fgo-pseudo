void __fastcall WarBoardBattleServantEvent___ctor(
        WarBoardBattleServantEvent_o *this,
        BattleWarBoardInfo_WarBoardServantInfo_array *svtInfoArray,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  BaseBattleServantEvent___ctor((BaseBattleServantEvent_o *)this, 0LL);
  this->fields.svtInfoArray = svtInfoArray;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)svtInfoArray,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardBattleServantEvent__AddPartySkill(
        WarBoardBattleServantEvent_o *this,
        BattleServantData_o *svtData,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  struct DeckData_array *enemyDeck; // x8
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x8
  int32_t max_length; // w20
  int32_t PartySkillId; // w21
  System_Collections_ICollection_o *PartySkillEntityArray; // x20
  void *monitor; // x8
  unsigned __int64 v13; // x21
  __int64 v14; // x22
  __int64 v15; // x0

  if ( (byte_43899CD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardPartySkillMaster___);
    this = (WarBoardBattleServantEvent_o *)sub_B775C4(&DataManager_TypeInfo);
    byte_43899CD = 1;
  }
  if ( !svtData || !battleInfoData )
    goto LABEL_28;
  if ( svtData->fields.isEnemy )
  {
    enemyDeck = battleInfoData->fields.enemyDeck;
    if ( !enemyDeck )
      goto LABEL_28;
    if ( !enemyDeck->max_length )
    {
LABEL_27:
      v15 = sub_B776C8(this);
      sub_B77668(v15, 0LL);
    }
    myDeck = enemyDeck->m_Items[0];
    if ( !myDeck )
      goto LABEL_28;
  }
  else
  {
    myDeck = battleInfoData->fields.myDeck;
    if ( !myDeck )
      goto LABEL_28;
  }
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_28;
  this = (WarBoardBattleServantEvent_o *)battleInfoData->fields.warBoardBattleInfo;
  if ( !this )
    goto LABEL_28;
  max_length = svts->max_length;
  PartySkillId = BattleWarBoardInfo__GetPartySkillId((BattleWarBoardInfo_o *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardBattleServantEvent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardPartySkillMaster___);
  if ( !this )
LABEL_28:
    sub_B7769C(this, svtData);
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
      goto LABEL_28;
    monitor = PartySkillEntityArray[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v13 = 0LL;
      while ( v13 < (unsigned int)monitor )
      {
        v14 = *((_QWORD *)&PartySkillEntityArray[2].klass + v13);
        if ( v14 )
        {
          this = (WarBoardBattleServantEvent_o *)SkillEntity__isActive(
                                                   *((SkillEntity_o **)&PartySkillEntityArray[2].klass + v13),
                                                   0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            this = (WarBoardBattleServantEvent_o *)BattleServantData__addSkillInfo(
                                                     svtData,
                                                     101,
                                                     v13,
                                                     *(_DWORD *)(v14 + 16),
                                                     1,
                                                     -1LL,
                                                     -1,
                                                     0LL,
                                                     0LL);
        }
        LODWORD(monitor) = PartySkillEntityArray[1].monitor;
        if ( (__int64)++v13 >= (int)monitor )
          return;
      }
      goto LABEL_27;
    }
  }
}


void __fastcall WarBoardBattleServantEvent__AddSpecialPassive(
        WarBoardBattleServantEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  WarBoardBattleServantEvent_o *v4; // x20
  int64_t UserSvtId; // x0
  const MethodInfo *v6; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *v8; // x20
  SkillEntity_o *Entity; // x0

  v4 = this;
  if ( (byte_43899CC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    this = (WarBoardBattleServantEvent_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43899CC = 1;
  }
  if ( !svtData )
    goto LABEL_13;
  UserSvtId = BattleServantData__getUserSvtId(svtData, 0LL);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(v4, UserSvtId, v6);
  if ( !EventServantInfo )
    return;
  v8 = EventServantInfo;
  if ( EventServantInfo->fields.squareEffectSkillId < 1 || EventServantInfo->fields.squareEffectSkillLv < 1 )
    return;
  this = (WarBoardBattleServantEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleServantEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
LABEL_13:
    sub_B7769C(this, svtData);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              v8->fields.squareEffectSkillId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( !SkillEntity__isActive(Entity, 0LL) )
      BattleServantData__addSkillInfo(
        svtData,
        100,
        0,
        v8->fields.squareEffectSkillId,
        v8->fields.squareEffectSkillLv,
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
  WarBoardBattleServantEvent___c__DisplayClass2_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfoArray; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_43899CB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardServantInfo___);
    sub_B775C4(&Method_System_Predicate_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
    sub_B775C4(&System_Predicate_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
    sub_B775C4(&Method_WarBoardBattleServantEvent___c__DisplayClass2_0__GetEventServantInfo_b__0__);
    sub_B775C4(&WarBoardBattleServantEvent___c__DisplayClass2_0_TypeInfo);
    byte_43899CB = 1;
  }
  v5 = (WarBoardBattleServantEvent___c__DisplayClass2_0_o *)sub_B77694(WarBoardBattleServantEvent___c__DisplayClass2_0_TypeInfo);
  WarBoardBattleServantEvent___c__DisplayClass2_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.userSvtId = userSvtId;
  svtInfoArray = this->fields.svtInfoArray;
  if ( !svtInfoArray )
    return 0LL;
  v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardBattleServantEvent___c__DisplayClass2_0__GetEventServantInfo_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  return (BattleWarBoardInfo_WarBoardServantInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                       (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)svtInfoArray,
                                                       (System_Predicate_T__o *)v9,
                                                       (const MethodInfo_20040B8 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardServantInfo___);
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
    sub_B7769C(this, 0LL);
  return x->fields.id == this->fields.userSvtId;
}