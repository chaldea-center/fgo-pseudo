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
  sub_B2C2F8(
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
  __int64 v6; // x1
  struct DeckData_array *enemyDeck; // x8
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x8
  int32_t max_length; // w20
  int32_t PartySkillId; // w21
  System_Collections_ICollection_o *PartySkillEntityArray; // x20
  void *monitor; // x8
  unsigned __int64 v14; // x21
  __int64 v15; // x22
  __int64 v16; // x0

  if ( (byte_41865D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardPartySkillMaster___, svtData);
    this = (WarBoardBattleServantEvent_o *)sub_B2C35C(&DataManager_TypeInfo, v6);
    byte_41865D3 = 1;
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
      v16 = sub_B2C460(this);
      sub_B2C400(v16, 0LL);
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
  this = (WarBoardBattleServantEvent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardPartySkillMaster___);
  if ( !this )
LABEL_28:
    sub_B2C434(this, svtData);
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
      v14 = 0LL;
      while ( v14 < (unsigned int)monitor )
      {
        v15 = *((_QWORD *)&PartySkillEntityArray[2].klass + v14);
        if ( v15 )
        {
          this = (WarBoardBattleServantEvent_o *)SkillEntity__isActive(
                                                   *((SkillEntity_o **)&PartySkillEntityArray[2].klass + v14),
                                                   0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            this = (WarBoardBattleServantEvent_o *)BattleServantData__addSkillInfo(
                                                     svtData,
                                                     101,
                                                     v14,
                                                     *(_DWORD *)(v15 + 16),
                                                     1,
                                                     -1LL,
                                                     -1,
                                                     0LL,
                                                     0LL);
        }
        LODWORD(monitor) = PartySkillEntityArray[1].monitor;
        if ( (__int64)++v14 >= (int)monitor )
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
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v8; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *v10; // x20
  SkillEntity_o *Entity; // x0

  v4 = this;
  if ( (byte_41865D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, svtData);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    this = (WarBoardBattleServantEvent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_41865D2 = 1;
  }
  if ( !svtData )
    goto LABEL_13;
  UserSvtId = BattleServantData__getUserSvtId(svtData, 0LL);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(v4, UserSvtId, v8);
  if ( !EventServantInfo )
    return;
  v10 = EventServantInfo;
  if ( EventServantInfo->fields.squareEffectSkillId < 1 || EventServantInfo->fields.squareEffectSkillLv < 1 )
    return;
  this = (WarBoardBattleServantEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleServantEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
LABEL_13:
    sub_B2C434(this, svtData);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              v10->fields.squareEffectSkillId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( !SkillEntity__isActive(Entity, 0LL) )
      BattleServantData__addSkillInfo(
        svtData,
        100,
        0,
        v10->fields.squareEffectSkillId,
        v10->fields.squareEffectSkillLv,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardBattleServantEvent___c__DisplayClass2_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfoArray; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_41865D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardServantInfo___, userSvtId);
    sub_B2C35C(&Method_System_Predicate_BattleWarBoardInfo_WarBoardServantInfo___ctor__, v5);
    sub_B2C35C(&System_Predicate_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardBattleServantEvent___c__DisplayClass2_0__GetEventServantInfo_b__0__, v7);
    sub_B2C35C(&WarBoardBattleServantEvent___c__DisplayClass2_0_TypeInfo, v8);
    byte_41865D1 = 1;
  }
  v9 = (WarBoardBattleServantEvent___c__DisplayClass2_0_o *)sub_B2C42C(WarBoardBattleServantEvent___c__DisplayClass2_0_TypeInfo);
  WarBoardBattleServantEvent___c__DisplayClass2_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.userSvtId = userSvtId;
  svtInfoArray = this->fields.svtInfoArray;
  if ( !svtInfoArray )
    return 0LL;
  v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardBattleServantEvent___c__DisplayClass2_0__GetEventServantInfo_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  return (BattleWarBoardInfo_WarBoardServantInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                       (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)svtInfoArray,
                                                       (System_Predicate_T__o *)v13,
                                                       (const MethodInfo_1FFC1B4 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardServantInfo___);
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
    sub_B2C434(this, 0LL);
  return x->fields.id == this->fields.userSvtId;
}