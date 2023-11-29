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
  sub_B16F98(
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
  BattleWarBoardInfo_o *warBoardBattleInfo; // x0
  int32_t max_length; // w20
  int32_t PartySkillId; // w21
  WarBoardPartySkillMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_ICollection_o *PartySkillEntityArray; // x20
  void *monitor; // x8
  unsigned __int64 v16; // x21
  __int64 v17; // x22

  if ( (byte_40F8922 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardPartySkillMaster___, svtData);
    this = (WarBoardBattleServantEvent_o *)sub_B16FFC(&DataManager_TypeInfo, v6);
    byte_40F8922 = 1;
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
      sub_B17100(this, svtData, battleInfoData);
      sub_B170A0();
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
  warBoardBattleInfo = battleInfoData->fields.warBoardBattleInfo;
  if ( !warBoardBattleInfo )
    goto LABEL_28;
  max_length = svts->max_length;
  PartySkillId = BattleWarBoardInfo__GetPartySkillId(warBoardBattleInfo, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardPartySkillMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardPartySkillMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_28:
    sub_B170D4();
  PartySkillEntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetPartySkillEntityArray(
                                                                Master_WarQuestSelectionMaster,
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
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t UserSvtId; // x0
  const MethodInfo *v8; // x2
  BattleWarBoardInfo_WarBoardServantInfo_o *EventServantInfo; // x0
  BattleWarBoardInfo_WarBoardServantInfo_o *v10; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x0

  if ( (byte_40F8921 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, svtData);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F8921 = 1;
  }
  if ( !svtData )
    goto LABEL_13;
  UserSvtId = BattleServantData__getUserSvtId(svtData, 0LL);
  EventServantInfo = WarBoardBattleServantEvent__GetEventServantInfo(this, UserSvtId, v8);
  if ( !EventServantInfo )
    return;
  v10 = EventServantInfo;
  if ( EventServantInfo->fields.squareEffectSkillId < 1 || EventServantInfo->fields.squareEffectSkillLv < 1 )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v10->fields.squareEffectSkillId,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardBattleServantEvent___c__DisplayClass2_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct BattleWarBoardInfo_WarBoardServantInfo_array *svtInfoArray; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F8920 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Find_BattleWarBoardInfo_WarBoardServantInfo___, userSvtId);
    sub_B16FFC(&Method_System_Predicate_BattleWarBoardInfo_WarBoardServantInfo___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardBattleServantEvent___c__DisplayClass2_0__GetEventServantInfo_b__0__, v9);
    sub_B16FFC(&WarBoardBattleServantEvent___c__DisplayClass2_0_TypeInfo, v10);
    byte_40F8920 = 1;
  }
  v11 = (WarBoardBattleServantEvent___c__DisplayClass2_0_o *)sub_B170CC(
                                                               WarBoardBattleServantEvent___c__DisplayClass2_0_TypeInfo,
                                                               userSvtId,
                                                               method,
                                                               v3,
                                                               v4);
  WarBoardBattleServantEvent___c__DisplayClass2_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.userSvtId = userSvtId;
  svtInfoArray = this->fields.svtInfoArray;
  if ( !svtInfoArray )
    return 0LL;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleWarBoardInfo_WarBoardServantInfo__TypeInfo,
                                                                   v12,
                                                                   v13,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardBattleServantEvent___c__DisplayClass2_0__GetEventServantInfo_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleWarBoardInfo_WarBoardServantInfo___ctor__);
  return (BattleWarBoardInfo_WarBoardServantInfo_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                       (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)svtInfoArray,
                                                       (System_Predicate_T__o *)v17,
                                                       (const MethodInfo_20441E8 *)Method_System_Array_Find_BattleWarBoardInfo_WarBoardServantInfo___);
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
    sub_B170D4();
  return x->fields.id == this->fields.userSvtId;
}