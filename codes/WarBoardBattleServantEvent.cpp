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
  sub_B5D560(
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct DeckData_array *enemyDeck; // x8
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x8
  int32_t max_length; // w20
  int32_t PartySkillId; // w21
  System_Collections_ICollection_o *PartySkillEntityArray; // x20
  void *monitor; // x8
  unsigned __int64 v16; // x21
  __int64 v17; // x22
  __int64 v18; // x0

  if ( (byte_42E76D5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_WarBoardPartySkillMaster___,
      (_DWORD)svtData,
      (_DWORD)battleInfoData,
      method);
    this = (WarBoardBattleServantEvent_o *)sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42E76D5 = 1;
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
      v18 = sub_B5D6C8(this);
      sub_B5D668(v18, 0LL);
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
  this = (WarBoardBattleServantEvent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardPartySkillMaster___);
  if ( !this )
LABEL_28:
    sub_B5D69C(this, svtData);
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
      goto LABEL_27;
    }
  }
}


void __fastcall WarBoardBattleServantEvent__AddSpecialPassive(
        WarBoardBattleServantEvent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardBattleServantEvent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t UserSvtId; // x0
  const MethodInfo *v13; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *v15; // x20
  SkillEntity_o *Entity; // x0

  v5 = this;
  if ( (byte_42E76D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)svtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6, v7, v8);
    this = (WarBoardBattleServantEvent_o *)sub_B5D5C4(
                                             &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                             v9,
                                             v10,
                                             v11);
    byte_42E76D4 = 1;
  }
  if ( !svtData )
    goto LABEL_13;
  UserSvtId = BattleServantData__getUserSvtId(svtData, 0LL);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(v5, UserSvtId, v13);
  if ( !EventServantInfo )
    return;
  v15 = EventServantInfo;
  if ( EventServantInfo->fields.squareEffectSkillId < 1 || EventServantInfo->fields.squareEffectSkillLv < 1 )
    return;
  this = (WarBoardBattleServantEvent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (WarBoardBattleServantEvent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(this, svtData);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              v15->fields.squareEffectSkillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( !SkillEntity__isActive(Entity, 0LL) )
      BattleServantData__addSkillInfo(
        svtData,
        100,
        0,
        v15->fields.squareEffectSkillId,
        v15->fields.squareEffectSkillLv,
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardBattleServantEvent___c__DisplayClass2_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfoArray; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E76D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardServantInfo___, userSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Predicate_BattleWarBoardInfo_WarBoardServantInfo___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WarBoardBattleServantEvent___c__DisplayClass2_0__GetEventServantInfo_b__0__, v12, v13, v14);
    sub_B5D5C4(&WarBoardBattleServantEvent___c__DisplayClass2_0_TypeInfo, v15, v16, v17);
    byte_42E76D3 = 1;
  }
  v18 = (WarBoardBattleServantEvent___c__DisplayClass2_0_o *)sub_B5D694(WarBoardBattleServantEvent___c__DisplayClass2_0_TypeInfo);
  WarBoardBattleServantEvent___c__DisplayClass2_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.userSvtId = userSvtId;
  svtInfoArray = this->fields.svtInfoArray;
  if ( !svtInfoArray )
    return 0LL;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_WarBoardBattleServantEvent___c__DisplayClass2_0__GetEventServantInfo_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  return (BattleWarBoardInfo_WarBoardServantInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                       (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)svtInfoArray,
                                                       (System_Predicate_T__o *)v22,
                                                       (const MethodInfo_1FC03F4 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardServantInfo___);
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
    sub_B5D69C(this, 0LL);
  return x->fields.id == this->fields.userSvtId;
}