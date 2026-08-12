void TitleInfoPersonalBossComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TitleInfoPersonalBossComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct TitleInfoPersonalBossComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596F33D & 1) == 0 )
  {
    sub_2213A60(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_2213A60(&StringLiteral_15092/*"TitleInfoEventSuperBossEffect_Dead"*/);
    sub_2213A60(&StringLiteral_20179/*"event_superboss_icon_"*/);
    sub_2213A60(&StringLiteral_15091/*"TitleInfoEventSuperBossEffect_Break"*/);
    byte_596F33D = 1;
  }
  v7 = StringLiteral_20179/*"event_superboss_icon_"*/;
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_20179/*"event_superboss_icon_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_15092/*"TitleInfoEventSuperBossEffect_Dead"*/;
  static_fields = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15092/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_15091/*"TitleInfoEventSuperBossEffect_Break"*/;
  v17 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v17->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15091/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v17->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)&TitleInfoPersonalBossComponent_TypeInfo->static_fields->ANIM_DURATION_HP_CUT = 0x400000003FC00000LL;
}


void TitleInfoPersonalBossComponent___ctor(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_UIAtlas__c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596F33C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_2213A60(&StringLiteral_17574/*"ar60"*/);
    sub_2213A60(&StringLiteral_17567/*"ar210"*/);
    byte_596F33C = 1;
  }
  v9 = StringLiteral_17574/*"ar60"*/;
  this->fields.breakEffectBeforeSeName = (struct System_String_o *)StringLiteral_17574/*"ar60"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.breakEffectBeforeSeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17567/*"ar210"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_17567/*"ar210"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.breakHpDownSeName, v10, v11, v12, v13, v14, v15, v16);
  v17 = System_Collections_Generic_List_UIAtlas__TypeInfo;
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.atlasList, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoPersonalBossComponent__Awake(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  ;
}


float TitleInfoPersonalBossComponent__ConvertHpToRate(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  return 1.0 - (double)hp / (double)maxHp;
}


UserSuperBossEntity_o *TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(
        int32_t eventId,
        int32_t id,
        int64_t damange,
        const MethodInfo *method)
{
  UserSuperBossEntity_o *v7; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  NetworkManager_c *v10; // x0
  struct NetworkManager_StaticFields *static_fields; // x8

  if ( (byte_596F33B & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UserSuperBossEntity_TypeInfo);
    byte_596F33B = 1;
  }
  v7 = (UserSuperBossEntity_o *)sub_2213CCC(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v7, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v10 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
    v10 = NetworkManager_TypeInfo;
  }
  if ( !v7 )
    sub_2213CDC(v10, v8);
  static_fields = v10->static_fields;
  v7->fields.eventId = eventId;
  v7->fields.superBossId = id;
  v7->fields.damage = damange;
  v7->fields.userId = static_fields->userIdNumber;
  return v7;
}


UnityEngine_GameObject_o *TitleInfoPersonalBossComponent__GetClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_c *v5; // x0
  System_String_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t id; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F332 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_2213A60(&StringLiteral_17297/*"_{0}{1:D2}"*/);
    byte_596F332 = 1;
  }
  if ( !mapAssetData )
    return 0;
  v5 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !*(&TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, mapAssetData, method);
    v5 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  v6 = System_String__Concat_75651716(
         v5->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_17297/*"_{0}{1:D2}"*/,
         0);
  eventId = this->fields.eventId;
  v7 = j_il2cpp_value_box_0(qword_5984348, &eventId);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    sub_2213CDC(v7, v8);
  v10 = (Il2CppObject *)v7;
  id = eventSuperBossEntity->fields.id;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
  v12 = System_String__Format_75697880(v6, v10, v11, 0);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__58532980(
                                       mapAssetData,
                                       v12,
                                       (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
}


UserSuperBossEntity_o *TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t OrtLateQuestId; // w20
  int64_t OrtLatePhaseBreak; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  BalanceConfig_c *v10; // x0
  struct BalanceConfig_StaticFields *v11; // x9
  int32_t v12; // w20
  int64_t OrtLatePhaseDead; // x21
  EventSuperBossEntity_o *IsOpen; // x0
  const MethodInfo *v15; // x3
  struct System_Int64_array *hpList; // x10
  il2cpp_array_size_t max_length; // x9
  __int64 v18; // x8
  int64_t v19; // x20
  __int64 v20; // x9
  int64_t *m_Items; // x10
  __int64 v22; // t1
  BalanceConfig_c *v23; // x0
  struct BalanceConfig_StaticFields *v24; // x9
  int32_t v25; // w20
  int64_t v26; // x21
  __int64 v27; // x2
  BalanceConfig_c *v28; // x0
  struct BalanceConfig_StaticFields *v29; // x9
  int32_t v30; // w20
  int32_t v31; // w21
  struct System_Int64_array *v32; // x10
  il2cpp_array_size_t v33; // x9
  __int64 v34; // x8
  __int64 v35; // x9
  int64_t *v36; // x10
  __int64 v37; // t1
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  int32_t eventId; // w19
  int32_t id; // w21

  if ( (byte_596F33A & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_596F33A = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  static_fields = v4->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseBreak = static_fields->OrtLatePhaseBreak;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  if ( !CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseBreak, 0, 0, 0) )
    goto LABEL_19;
  v10 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v9);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = v10->static_fields;
  v12 = v11->OrtLateQuestId;
  OrtLatePhaseDead = v11->OrtLatePhaseDead;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8, v9);
  IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v12, OrtLatePhaseDead, 0, 0, 0);
  if ( ((unsigned __int8)IsOpen & 1) != 0 )
  {
    hpList = this->fields.hpList;
    if ( !hpList )
      goto LABEL_43;
    max_length = hpList->max_length;
    if ( (int)max_length - 1 >= 1 )
    {
      v18 = ((_DWORD)max_length - 1) & (unsigned int)~(((int)max_length - 1) >> 31);
      v19 = 0;
      v20 = (unsigned int)hpList->max_length;
      m_Items = hpList->m_Items;
      while ( v20 )
      {
        v22 = *m_Items++;
        --v18;
        --v20;
        v19 += v22;
        if ( !v18 )
          goto LABEL_38;
      }
      goto LABEL_42;
    }
  }
  else
  {
LABEL_19:
    v23 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v9);
      v23 = BalanceConfig_TypeInfo;
    }
    v24 = v23->static_fields;
    v25 = v24->OrtLateQuestId;
    v26 = v24->OrtLatePhaseDead;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8, v9);
    if ( !CondType__IsOpen(46, v25, v26, 0, 0, 0) )
      goto LABEL_35;
    v28 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v27);
      v28 = BalanceConfig_TypeInfo;
    }
    v29 = v28->static_fields;
    v30 = v29->OrtLateQuestId;
    v31 = v29->OrtLatePhaseDead;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v8, v27);
    IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v30, v31 + 1, 0, 0, 0);
    if ( ((unsigned __int8)IsOpen & 1) == 0 )
    {
LABEL_35:
      IsOpen = this->fields.eventSuperBossEntity;
      if ( IsOpen )
        return EventSuperBossEntity__GetUserSuperBossEntity(IsOpen, 0);
LABEL_43:
      sub_2213CDC(IsOpen, v8);
    }
    v32 = this->fields.hpList;
    if ( !v32 )
      goto LABEL_43;
    v33 = v32->max_length;
    if ( (int)v33 >= 1 )
    {
      v34 = (unsigned int)v33 & ~((int)v33 >> 31);
      v19 = 0;
      v35 = (unsigned int)v32->max_length;
      v36 = v32->m_Items;
      while ( v35 )
      {
        v37 = *v36++;
        --v34;
        --v35;
        v19 += v37;
        if ( !v34 )
          goto LABEL_38;
      }
LABEL_42:
      sub_2213CE4(IsOpen);
    }
  }
  v19 = 0;
LABEL_38:
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_43;
  eventId = eventSuperBossEntity->fields.eventId;
  id = eventSuperBossEntity->fields.id;
  if ( !*(&TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v8, v9);
  return TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(eventId, id, v19, v15);
}


System_String_o *TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596F32A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6538/*"EventUI/Prefabs/{0}"*/);
    byte_596F32A = 1;
  }
  v5 = eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v5);
  return System_String__Format((System_String_o *)StringLiteral_6538/*"EventUI/Prefabs/{0}"*/, v3, 0);
}


UnityEngine_GameObject_o *TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_596F330 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    byte_596F330 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__58532980(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  return result;
}


UnityEngine_GameObject_o *TitleInfoPersonalBossComponent__GetGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  int v4; // w20
  TitleInfoPersonalBossComponent_c *v5; // x0
  System_String_o *SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x1

  v4 = (int)this;
  if ( (byte_596F334 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_596F334 = 1;
  }
  if ( !mapAssetData )
    return 0;
  v5 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !*(&TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, mapAssetData, method);
    v5 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = v5->static_fields->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB;
  v7 = System_Int32__ToString(v4 + 184, 0);
  v8 = System_String__Concat_75694928(
         SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16746/*"_"*/,
         v7,
         0);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__58532980(
                                       mapAssetData,
                                       v8,
                                       (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
}


bool TitleInfoPersonalBossComponent__IsAlive(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9

  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  return eventSuperBossEntity
      && (currentUserBossEnt = this->fields.currentUserBossEnt) != 0
      && currentUserBossEnt->fields.damage < eventSuperBossEntity->fields.maxHp;
}


bool TitleInfoPersonalBossComponent__IsAliveOldUserBoss(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9

  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  return eventSuperBossEntity
      && (oldUserBossEnt = this->fields.oldUserBossEnt) != 0
      && oldUserBossEnt->fields.damage < eventSuperBossEntity->fields.maxHp;
}


bool TitleInfoPersonalBossComponent__IsDispPossible(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *dispRoot; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_596F326 & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596F326 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  dispRoot = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    dispRoot = TerminalSceneComponent_TypeInfo;
  }
  mInstance = dispRoot->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap) == 0
    || (dispRoot = (TerminalSceneComponent_c *)mTerminalMap->fields.dispRoot) == 0 )
  {
    sub_2213CDC(dispRoot, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)dispRoot, 0);
}


bool TitleInfoPersonalBossComponent__IsEventRaidBoss(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  return 0;
}


bool TitleInfoPersonalBossComponent__IsForcePlayClearEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t OrtLateQuestId; // w19
  int64_t OrtLatePhaseDead; // x20

  if ( (byte_596F339 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    byte_596F339 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v3 = BalanceConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseDead = static_fields->OrtLatePhaseDead;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method, v2);
  return CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseDead, 0, 0, 0);
}


void TitleInfoPersonalBossComponent__LoadEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2

  if ( (byte_596F32B & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__);
    sub_2213A60(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
    byte_596F32B = 1;
  }
  v7 = sub_2213CCC(TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( !*(&TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v22, v23);
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v22);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v7,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26, v27);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v25, 1, 0, 0) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoPersonalBossComponent__LoadLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v4; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v7; // w9
  int i; // w28
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Component_object; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v27; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v29; // x8
  int32_t v30; // [xsp+8h] [xbp-58h] BYREF
  int v31; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_596F32C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26446/*"{0:D2}"*/);
    this = (TitleInfoPersonalBossComponent_o *)sub_2213A60(&StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_596F32C = 1;
  }
  if ( v4->fields.assetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_2213CDC(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v7 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v31 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v31);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26446/*"{0:D2}"*/, v9, 0);
      v30 = eventId;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v30);
      v12 = System_String__Format_75697880((System_String_o *)StringLiteral_5538/*"DownloadEventUIAtlas{0}{1}"*/, v11, v10, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v12,
                                                                 v13);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      this = (TitleInfoPersonalBossComponent_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (TitleInfoPersonalBossComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      m_CachedPtr = this->fields.m_CachedPtr;
      v27 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v29 + 32) = Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v29 + 32),
          (int32_t)Component_object,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
      }
    }
  }
}


void TitleInfoPersonalBossComponent__OnDestroy(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__ReleaseLocalAtlas(this, method);
  TitleInfoPersonalBossComponent__ReleaseAssetData(this, v3);
}


void TitleInfoPersonalBossComponent__OnEndAnimation(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *animEndCall; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1

  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.animEndCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0);
  this->fields.isGaugeBreak = 0;
  this->fields.oldUserBossEnt = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.oldUserBossEnt, 0, v10, v11, v12, v13, v14, v15);
  TitleInfoPersonalBossComponent__SetDisp(this, v16);
}


void TitleInfoPersonalBossComponent__PlayClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *clearBossEffect; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  TitleInfoPersonalBossComponent_c *v14; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v16; // x20
  System_Collections_IEnumerator_o *v17; // x1
  System_Action_o *v18; // x21
  System_Action_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596F333 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__);
    sub_2213A60(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_596F333 = 1;
  }
  clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(clearBossEffect, 0, 0) )
  {
    v7 = (Il2CppObject *)this->fields.clearBossEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    v8 = UnityEngine_Object__Instantiate_object_(
           v7,
           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v8, (UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v8, 0);
    if ( v8 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v8,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v14 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( !*(&TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v12, v13);
          v14 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v14->static_fields->CLEAR_CALLBACK_DELAY;
        v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v16,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0);
        v17 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v16, 1, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v17, 0);
        return;
      }
      v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v18, 0);
        v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0);
        Component_object[2].monitor = v19;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&Component_object[2].monitor,
          (int32_t)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        return;
      }
    }
    sub_2213CDC(v9, v10);
  }
}


void TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *gaugeBreakEffect; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  struct UISprite_array *breakIconList; // x8
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  bool v14; // w22
  System_Action_o *v15; // x0
  System_Action_o *v16; // x20
  System_Collections_IEnumerator_o *v17; // x1

  if ( (byte_596F336 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__);
    byte_596F336 = 1;
  }
  gaugeBreakEffect = (UnityEngine_Object_o *)this->fields.gaugeBreakEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0, 0) )
  {
    TitleInfoPersonalBossComponent__OnEndAnimation(this, v5);
    return;
  }
  v7 = (Il2CppObject *)this->fields.gaugeBreakEffect;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__Instantiate_object_(
         v7,
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_17;
  if ( !LODWORD(breakIconList->max_length) )
    sub_2213CE4(v8);
  v11 = (UnityEngine_GameObject_o *)v8;
  v8 = (Il2CppObject *)breakIconList->m_Items[0];
  if ( !v8 )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v8, 0);
  GameObjectExtensions__SafeSetParent_42897308(v11, gameObject, 0);
  GameObjectExtensions__ResetLocalPosition(v11, 0);
  if ( !v11 )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v11,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  v16 = v15;
  if ( v14 )
  {
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0);
    v17 = BasicHelper__DelayCall(0.533, v16, 1, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v17, 0);
    return;
  }
  System_Action___ctor(
    v15,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0);
  if ( !Component_object )
LABEL_17:
    sub_2213CDC(v8, v9);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v16, 0);
}


void TitleInfoPersonalBossComponent__PlayHpCut(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *breakHpDownSeName; // x0
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  TitleInfoPersonalBossComponent_c *v25; // x0
  EasingObject_o *v26; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v28; // x21
  System_Action_o *v29; // x22

  if ( (byte_596F335 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    sub_2213A60(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__);
    sub_2213A60(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
    byte_596F335 = 1;
  }
  v3 = sub_2213CCC(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_12;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  breakHpDownSeName = this->fields.breakHpDownSeName;
  *(_QWORD *)(v3 + 32) = this->fields.oldMaxHp;
  if ( !System_String__IsNullOrEmpty(breakHpDownSeName, 0) )
  {
    v13 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_2213A78(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
    OverwriteAssetSoundName__PlaySe(v14, this->fields.breakHpDownSeName, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Component_object, v17, v18, v19, v20, v21, v22);
  v25 = TitleInfoPersonalBossComponent_TypeInfo;
  v26 = *(EasingObject_o **)(v3 + 16);
  if ( !*(&TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v23, v24);
    v25 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v25->static_fields->ANIM_DURATION_HP_CUT;
  v28 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0);
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0);
  if ( !v26 )
LABEL_12:
    sub_2213CDC(v4, v5);
  EasingObject__Play(v26, ANIM_DURATION_HP_CUT, v28, v29, 0.0, 0, 0);
}


void TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int64_t currentMaxHp; // x8
  int64_t currentDamage; // x9
  float v14; // s1
  float v15; // s0
  float v16; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  __int64 v26; // x2
  TitleInfoPersonalBossComponent_c *v27; // x0
  EasingObject_o *v28; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v30; // x21
  System_Action_o *v31; // x22

  if ( (byte_596F337 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_2213A60(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__);
    sub_2213A60(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
    byte_596F337 = 1;
  }
  v3 = sub_2213CCC(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  currentMaxHp = this->fields.currentMaxHp;
  currentDamage = this->fields.currentDamage;
  this->fields.HPfrom = 0.0;
  *(_QWORD *)(v3 + 32) = currentMaxHp;
  *(_QWORD *)(v3 + 40) = currentDamage;
  v14 = 1.0;
  v15 = 1.0 - (double)currentDamage / (double)currentMaxHp;
  if ( v15 <= 1.0 )
    v14 = 1.0 - (double)currentDamage / (double)currentMaxHp;
  v16 = v15 >= 0.0 ? v14 : 0.0;
  this->fields.HPto = v16;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)Component_object, v19, v20, v21, v22, v23, v24);
  v27 = TitleInfoPersonalBossComponent_TypeInfo;
  v28 = *(EasingObject_o **)(v3 + 16);
  if ( !*(&TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v25, v26);
    v27 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v27->static_fields->ANIM_DURATION_HP_CUT;
  v30 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0);
  v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0);
  if ( !v28 )
LABEL_13:
    sub_2213CDC(v4, v5);
  EasingObject__Play(v28, ANIM_DURATION_HP_CUT, v30, v31, 0.0, 0, 0);
}


void TitleInfoPersonalBossComponent__ReleaseAssetData(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_assetData; // x19
  int32_t eventId; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *EventUIAssetDataPath; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596F32F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_596F32F = 1;
  }
  p_assetData = (MissionNaviTransitionBoardItem_o *)&this->fields.assetData;
  if ( this->fields.assetData )
  {
    eventId = this->fields.eventId;
    if ( !*(&TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, method, v2);
    EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, method);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v7);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0);
    p_assetData->klass = 0;
    sub_2213A04(p_assetData, 0, v9, v10, v11, v12, v13, v14);
  }
}


void TitleInfoPersonalBossComponent__ReleaseLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v2; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_596F32E & 1) == 0 )
  {
    this = (TitleInfoPersonalBossComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_596F32E = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_2213CDC(this, method);
  size = atlasList->fields._size;
  v5 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
}


void TitleInfoPersonalBossComponent__SetDisp(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  struct UserSuperBossEntity_o *CurrentUserSuperBossEntity; // x0
  struct UserSuperBossEntity_o **p_currentUserBossEnt; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  BalanceConfig_c *v13; // x0
  __int64 v14; // x8
  __int64 v15; // x24
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t OrtLateQuestId; // w21
  int64_t OrtLatePhaseSecondForm; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *Master_object; // x0
  __int64 v22; // x2
  int32_t eventId; // w21
  EventSuperBossMaster_o *v24; // x22
  __int64 v25; // x2
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  const MethodInfo *v29; // x2
  __int64 v30; // x2
  int32_t v31; // w21
  EventBossStatusUiMaster_o *v32; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  System_String_o *v35; // x21
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  const MethodInfo *v38; // x2
  struct EventSuperBossEntity_o *v39; // x8
  UILabel_o *bossName; // x21
  __int64 v41; // x2
  struct System_Int64_array *hpList; // x8
  int max_length; // w9
  int v44; // w22
  int64_t v45; // x10
  int64_t *m_Items; // x12
  int32_t v47; // w21
  int64_t v48; // t1
  int64_t v49; // x11
  struct UserSuperBossEntity_o *currentUserBossEnt; // x10
  int64_t *v51; // x9
  int64_t v52; // t1
  int64_t v53; // x8
  struct EventSuperBossEntity_o *v54; // x9
  BalanceConfig_c *v55; // x0
  int32_t id; // w24
  bool v58; // w8
  TitleInfoPersonalBossComponent_o *v59; // x0
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x3
  struct EventSuperBossEntity_o *v63; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  int64_t oldDamage; // d0
  int64_t oldMaxHp; // d1
  double v68; // d0
  float v69; // s1
  float v70; // s0
  float v71; // s0
  const MethodInfo *v72; // x2
  float v73; // s0
  int64_t currentDamage; // d0
  int64_t currentMaxHp; // d1
  double v76; // d0
  float v77; // s1
  float v78; // s0
  float v79; // s0
  const MethodInfo *v80; // x2
  float v81; // s0
  UISprite_o *hpBarUnderSprite; // x20
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  const MethodInfo *v85; // x3
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  const MethodInfo *v89; // x3
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x2
  EventSuperBossEntity_o *v94; // [xsp+0h] [xbp-60h] BYREF
  int v95; // [xsp+8h] [xbp-58h] BYREF
  int32_t v96; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596F328 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_EventSuperBossMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_2213A60(&StringLiteral_20178/*"event_superboss_hp_white"*/);
    sub_2213A60(&StringLiteral_20131/*"event_raid_hp_back"*/);
    sub_2213A60(&StringLiteral_20173/*"event_superboss_hp_lower_"*/);
    sub_2213A60(&StringLiteral_20132/*"event_raid_hp_frame"*/);
    sub_2213A60(&StringLiteral_20177/*"event_superboss_hp_upper_"*/);
    byte_596F328 = 1;
  }
  v96 = 0;
  v95 = 0;
  v94 = 0;
  CurrentUserSuperBossEntity = TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(this, method);
  this->fields.currentUserBossEnt = CurrentUserSuperBossEntity;
  p_currentUserBossEnt = &this->fields.currentUserBossEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentUserBossEnt,
    (int32_t)CurrentUserSuperBossEntity,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v13 = BalanceConfig_TypeInfo;
  v14 = 208;
  if ( !this->fields.oldUserBossEnt )
    v14 = 216;
  v15 = *(__int64 *)((char *)&this->klass + v14);
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11, v12);
    v13 = BalanceConfig_TypeInfo;
  }
  static_fields = v13->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseSecondForm = static_fields->OrtLatePhaseSecondForm;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11, v12);
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventId = this->fields.eventId;
    v24 = (EventSuperBossMaster_o *)Master_object;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19, v22);
    if ( !v24 )
      goto LABEL_109;
    if ( EventSuperBossMaster__TryGetEntity(
           v24,
           &v94,
           eventId,
           BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
           0) )
    {
      Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
      if ( !*(&TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v19, v25);
      if ( !v94 )
        goto LABEL_109;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v27 = System_Int32__ToString((int)v94 + 56, 0);
      v28 = System_String__Concat_75651716(SUPERBOSS_ICON_SPNAME_PREFIX, v27, 0);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v28, v29);
      if ( !v94 )
        goto LABEL_109;
      Master_object = this->fields.bossName;
      if ( !Master_object )
        goto LABEL_109;
      UILabel__set_text(Master_object, v94->fields.name, 0);
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v25);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v31 = this->fields.eventId;
    v32 = (EventBossStatusUiMaster_o *)Master_object;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19, v30);
    if ( !v32 )
      goto LABEL_109;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v32,
                                  v31,
                                  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
                                  0);
  }
  else
  {
    Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
    if ( !*(&TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v19, v20);
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity )
      goto LABEL_109;
    v35 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v36 = System_Int32__ToString((int)eventSuperBossEntity + 56, 0);
    v37 = System_String__Concat_75651716(v35, v36, 0);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v37, v38);
    v39 = this->fields.eventSuperBossEntity;
    if ( !v39 )
      goto LABEL_109;
    Master_object = this->fields.bossName;
    if ( !Master_object )
      goto LABEL_109;
    UILabel__set_text(Master_object, v39->fields.name, 0);
    EntityFromEventIdAndIndex = this->fields.eventBossStatusUiEntity;
  }
  bossName = this->fields.bossName;
  if ( EntityFromEventIdAndIndex )
  {
    v97.fields.r = 0.0;
    v97.fields.g = 0.0;
    v97.fields.b = 0.0;
    v97.fields.a = 0.0;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v97, 0);
    if ( !bossName )
      goto LABEL_109;
  }
  else
  {
    Master_object = (UILabel_o *)this->fields.eventSuperBossEntity;
    if ( !Master_object )
      goto LABEL_109;
    TextEffectColor = EventSuperBossEntity__GetBossColor((EventSuperBossEntity_o *)Master_object, 0);
    if ( !bossName )
      goto LABEL_109;
  }
  UILabel__set_effectColor(bossName, TextEffectColor, 0);
  Master_object = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_object )
    goto LABEL_109;
  Master_object = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  hpList = this->fields.hpList;
  if ( !hpList )
    goto LABEL_109;
  max_length = hpList->max_length;
  v44 = max_length - 1;
  this->fields.maxBreakCount = max_length - 1;
  v45 = v15 ? *(_QWORD *)(v15 + 32) : 0LL;
  if ( max_length < 1 )
  {
    v49 = v45;
    v47 = max_length - 1;
  }
  else
  {
    m_Items = hpList->m_Items;
    v47 = max_length - 1;
    while ( 1 )
    {
      v48 = *m_Items++;
      v49 = v45 - v48;
      this->fields.oldMaxHp = v48;
      if ( v45 < v48 )
        break;
      --v47;
      v45 = v49;
      if ( v47 == -1 )
        goto LABEL_52;
    }
    v49 = v45;
  }
LABEL_52:
  currentUserBossEnt = this->fields.currentUserBossEnt;
  this->fields.oldDamage = v49;
  if ( currentUserBossEnt )
    currentUserBossEnt = (struct UserSuperBossEntity_o *)currentUserBossEnt->fields.damage;
  if ( max_length >= 1 )
  {
    v51 = hpList->m_Items;
    while ( 1 )
    {
      v52 = *v51++;
      v53 = (int64_t)currentUserBossEnt - v52;
      this->fields.currentMaxHp = v52;
      if ( (__int64)currentUserBossEnt < v52 )
        break;
      --v44;
      currentUserBossEnt = (struct UserSuperBossEntity_o *)v53;
      if ( v44 == -1 )
        goto LABEL_60;
    }
  }
  v53 = (int64_t)currentUserBossEnt;
LABEL_60:
  v54 = this->fields.eventSuperBossEntity;
  this->fields.currentDamage = v53;
  if ( !v54 )
    goto LABEL_109;
  v55 = BalanceConfig_TypeInfo;
  id = v54->fields.id;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19, v41);
    v55 = BalanceConfig_TypeInfo;
  }
  if ( id == v55->static_fields->OrtThirdFormId )
  {
    v58 = v47 == 1 && v44 == 0;
    this->fields.isGaugeBreak = v58;
  }
  Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
  v95 = v47 + 1;
  v96 = v47;
  if ( !Master_object
    || (Master_object = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0)) == 0 )
  {
LABEL_109:
    sub_2213CDC(Master_object, v19);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v59, v60) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( Master_object )
    {
      UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0, v61);
      Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
      if ( Master_object )
      {
        UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0);
        v47 = 0;
        goto LABEL_103;
      }
    }
    goto LABEL_109;
  }
  v63 = this->fields.eventSuperBossEntity;
  if ( v63 )
  {
    oldUserBossEnt = this->fields.oldUserBossEnt;
    if ( oldUserBossEnt )
    {
      maxHp = v63->fields.maxHp;
      if ( oldUserBossEnt->fields.damage < maxHp
        && (!*p_currentUserBossEnt || (*p_currentUserBossEnt)->fields.damage >= maxHp) )
      {
        Master_object = (UILabel_o *)this->fields.hpBarSlider;
        if ( !Master_object )
          goto LABEL_109;
        UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0);
        TitleInfoPersonalBossComponent__SetTotalHpText(this, 0, v93);
        Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
        if ( !Master_object )
          goto LABEL_109;
        v73 = 1.0;
        if ( v47 <= 0 )
          v73 = 0.0;
        goto LABEL_92;
      }
    }
  }
  if ( this->fields.isGaugeBreak )
  {
    oldMaxHp = this->fields.oldMaxHp;
    oldDamage = this->fields.oldDamage;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    this->fields.HPto = 0.0;
    v68 = (double)oldDamage / (double)oldMaxHp;
    v69 = 1.0;
    v70 = 1.0 - v68;
    if ( v70 <= 1.0 )
      v69 = v70;
    if ( v70 >= 0.0 )
      v71 = v69;
    else
      v71 = 0.0;
    this->fields.HPfrom = v71;
    if ( !Master_object )
      goto LABEL_109;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v71, 0);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.oldMaxHp - this->fields.oldDamage, v72);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_109;
    v73 = 0.0;
    if ( v47 > 0 )
      v73 = 1.0;
LABEL_92:
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v73, 0);
    goto LABEL_103;
  }
  currentMaxHp = this->fields.currentMaxHp;
  currentDamage = this->fields.currentDamage;
  Master_object = (UILabel_o *)this->fields.hpBarSlider;
  v95 = v44 + 1;
  v96 = v44;
  v76 = (double)currentDamage / (double)currentMaxHp;
  v77 = 1.0;
  v78 = 1.0 - v76;
  if ( v78 <= 1.0 )
    v77 = v78;
  if ( v78 >= 0.0 )
    v79 = v77;
  else
    v79 = 0.0;
  this->fields.HPfrom = v79;
  this->fields.HPto = v79;
  if ( !Master_object )
    goto LABEL_109;
  UIProgressBar__set_value((UIProgressBar_o *)Master_object, v79, 0);
  TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentMaxHp - this->fields.currentDamage, v80);
  Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
  if ( !Master_object )
    goto LABEL_109;
  v81 = 0.0;
  if ( v44 > 0 )
    v81 = 1.0;
  UIProgressBar__set_value((UIProgressBar_o *)Master_object, v81, 0);
  v47 = v44;
LABEL_103:
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, this->fields.maxBreakCount, v47, v62);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v83 = System_Int32__ToString((int32_t)&v96, 0);
  v84 = System_String__Concat_75651716((System_String_o *)StringLiteral_20173/*"event_superboss_hp_lower_"*/, v83, 0);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v84, v85);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v87 = System_Int32__ToString((int32_t)&v95, 0);
  v88 = System_String__Concat_75651716((System_String_o *)StringLiteral_20177/*"event_superboss_hp_upper_"*/, v87, 0);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v88, v89);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.hpBarWhiteSprite,
    (System_String_o *)StringLiteral_20178/*"event_superboss_hp_white"*/,
    v90);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_20132/*"event_raid_hp_frame"*/,
    v91);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_20131/*"event_raid_hp_back"*/,
    v92);
}


bool TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596F32D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_596F32D = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0, 0);
      return 1;
    }
    goto LABEL_19;
  }
  IsNullOrEmpty = this->fields.atlasList;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_2213CDC(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_2213CDC(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0);
  }
  while ( !v12 );
  if ( !sprite )
    sub_2213CDC(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void TitleInfoPersonalBossComponent__SetTotalHpText(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  UILabel_o *totalHpLabel; // x20
  System_String_o *v6; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F338 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3847/*"COMMON_NUM_FORMAT"*/);
    byte_596F338 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, hp, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3847/*"COMMON_NUM_FORMAT"*/, 0);
  v10 = hp;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v10);
  v8 = System_String__Format(v6, v7, 0);
  if ( !totalHpLabel )
    sub_2213CDC(v8, v9);
  UILabel__set_text(totalHpLabel, v8, 0);
}


void TitleInfoPersonalBossComponent__Setup(
        TitleInfoPersonalBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UserSuperBossEntity_o *oldUserBossEnt,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  DataManager_c *v20; // x0
  int v21; // w9
  EventBossStatusUiMaster_o *Master_object; // x0
  __int64 v23; // x1
  struct EventSuperBossEntity_o *v24; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Int64_array *BreakGaugeHpList; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t eventId; // w20
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x3

  if ( (byte_596F327 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__);
    byte_596F327 = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventSuperBossEntity,
    (int32_t)superBossEntity,
    (System_String_o *)oldUserBossEnt,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.oldUserBossEnt = oldUserBossEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.oldUserBossEnt,
    (int32_t)oldUserBossEnt,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  this->fields._IsPlayedDamageAnimation_k__BackingField = 0;
  if ( eventSuperBossEntity )
  {
    v20 = DataManager_TypeInfo;
    v21 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
    this->fields.eventId = eventSuperBossEntity->fields.eventId;
    if ( !v21 )
      j_il2cpp_runtime_class_init_0(v20, v17, v18);
    Master_object = (EventBossStatusUiMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v24 = this->fields.eventSuperBossEntity;
    if ( !v24
      || !Master_object
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_object,
                                        this->fields.eventId,
                                        v24->fields.id,
                                        0),
          this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.eventBossStatusUiEntity,
            (int32_t)EntityFromEventIdAndIndex,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31),
          (Master_object = (EventBossStatusUiMaster_o *)this->fields.eventSuperBossEntity) == 0) )
    {
      sub_2213CDC(Master_object, v23);
    }
    BreakGaugeHpList = EventSuperBossEntity__GetBreakGaugeHpList((EventSuperBossEntity_o *)Master_object, 0);
    this->fields.hpList = BreakGaugeHpList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.hpList,
      (int32_t)BreakGaugeHpList,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    eventId = this->fields.eventId;
    v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventId, v40, v41);
  }
}


void TitleInfoPersonalBossComponent__SetupBossIcon(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UISprite_o *bossIconSp; // x20
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  bossIconSp = this->fields.bossIconSp;
  v6 = (struct UISprite_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, bossIconSp, spName, v3);
  if ( !bossIconSp )
    goto LABEL_7;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, (unsigned __int8)v6 & 1, 0);
  v6 = this->fields.bossIconSp;
  if ( !v6 )
    goto LABEL_7;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0) )
  {
    v6 = this->fields.bossIconSp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v6,
        v6->klass->vtable._33_MakePixelPerfect.method);
      return;
    }
LABEL_7:
    sub_2213CDC(v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoPersonalBossComponent__SetupBreakGauge(
        TitleInfoPersonalBossComponent_o *this,
        int32_t maxCount,
        int32_t restCount,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v6; // x19
  struct UISprite_array *breakIconList; // x8
  il2cpp_array_size_t v8; // x20
  __int64 v9; // x21
  struct UISprite_array *v10; // x8
  int max_length; // w8
  int v12; // w25
  __int64 v13; // x26
  struct UISprite_array *v14; // x8
  unsigned int v15; // w27
  struct UISprite_array *v16; // x8
  UISprite_o *v17; // x22
  System_String_o *v18; // x0
  System_String_o *v19; // x2
  TitleInfoPersonalBossComponent_o *v20; // x0
  UISprite_o *v21; // x1
  struct UISprite_array *v22; // x8
  struct UISprite_array *v23; // x8
  int v24; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_596F329 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20170/*"event_superboss_hp_icon_0"*/);
    sub_2213A60(&StringLiteral_20171/*"event_superboss_hp_icon_11"*/);
    this = (TitleInfoPersonalBossComponent_o *)sub_2213A60(&StringLiteral_20169/*"event_superboss_hp_icon_"*/);
    byte_596F329 = 1;
  }
  breakIconList = v6->fields.breakIconList;
  v24 = 0;
  if ( restCount <= 9 )
  {
    if ( !breakIconList )
      goto LABEL_34;
    max_length = breakIconList->max_length;
    if ( max_length < 1 )
    {
LABEL_32:
      TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        v6,
        v6->fields.breakIcon_11,
        (System_String_o *)StringLiteral_20171/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
      if ( !this )
        goto LABEL_34;
      ((void (__fastcall *)(TitleInfoPersonalBossComponent_o *, const char *, double))this->klass[1]._1.name)(
        this,
        this->klass[1]._1.namespaze,
        0.0);
      return;
    }
    v12 = -max_length;
    v13 = 4;
    while ( 1 )
    {
      v14 = v6->fields.breakIconList;
      if ( !v14 )
        goto LABEL_34;
      v15 = v13 - 4;
      if ( (unsigned int)(v13 - 4) >= LODWORD(v14->max_length) )
        goto LABEL_35;
      this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&v14->obj.klass + v13);
      if ( !this )
        goto LABEL_34;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, const char *, _QWORD, const MethodInfo *, double))this->klass[1]._1.name)(
                                                   this,
                                                   this->klass[1]._1.namespaze,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)v15 >= restCount )
      {
        if ( (int)v15 >= maxCount )
          goto LABEL_31;
        v22 = v6->fields.breakIconList;
        if ( !v22 )
          goto LABEL_34;
        if ( v15 >= LODWORD(v22->max_length) )
          goto LABEL_35;
        v21 = (UISprite_o *)*((_QWORD *)&v22->obj.klass + v13);
        v19 = (System_String_o *)StringLiteral_20170/*"event_superboss_hp_icon_0"*/;
        v20 = v6;
      }
      else
      {
        v16 = v6->fields.breakIconList;
        if ( !v16 )
          goto LABEL_34;
        if ( v15 >= LODWORD(v16->max_length) )
          goto LABEL_35;
        v17 = (UISprite_o *)*((_QWORD *)&v16->obj.klass + v13);
        v24 = v13 - 2;
        v18 = System_Int32__ToString((int32_t)&v24, 0);
        v19 = System_String__Concat_75651716((System_String_o *)StringLiteral_20169/*"event_superboss_hp_icon_"*/, v18, 0);
        v20 = v6;
        v21 = v17;
      }
      this = (TitleInfoPersonalBossComponent_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
                                                   v20,
                                                   v21,
                                                   v19,
                                                   method);
      v23 = v6->fields.breakIconList;
      if ( !v23 )
        goto LABEL_34;
      if ( v15 >= LODWORD(v23->max_length) )
LABEL_35:
        sub_2213CE4(this);
      this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&v23->obj.klass + v13);
      if ( !this )
        goto LABEL_34;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, const char *, float))this->klass[1]._1.name)(
                                                   this,
                                                   this->klass[1]._1.namespaze,
                                                   1.0);
LABEL_31:
      if ( v12 + (_DWORD)++v13 == 4 )
        goto LABEL_32;
    }
  }
  if ( !breakIconList )
    goto LABEL_34;
  v8 = breakIconList->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = v6->fields.breakIconList;
      if ( !v10 )
        break;
      if ( (unsigned int)v9 >= LODWORD(v10->max_length) )
        goto LABEL_35;
      this = (TitleInfoPersonalBossComponent_o *)v10->m_Items[v9];
      if ( !this )
        break;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, const char *, _QWORD, const MethodInfo *, double))this->klass[1]._1.name)(
                                                   this,
                                                   this->klass[1]._1.namespaze,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (_DWORD)v8 == (_DWORD)++v9 )
        goto LABEL_11;
    }
LABEL_34:
    sub_2213CDC(this, *(_QWORD *)&maxCount);
  }
LABEL_11:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v6,
    v6->fields.breakIcon_11,
    (System_String_o *)StringLiteral_20171/*"event_superboss_hp_icon_11"*/,
    method);
  this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
  if ( !this )
    goto LABEL_34;
  ((void (__fastcall *)(TitleInfoPersonalBossComponent_o *, const char *, float))this->klass[1]._1.name)(
    this,
    this->klass[1]._1.namespaze,
    1.0);
}


void TitleInfoPersonalBossComponent__StartDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TitleInfoPersonalBossComponent_o *v10; // x19
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *clearBossEffect; // x21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *gaugeBreakEffect; // x21
  const MethodInfo *v30; // x2
  UnityEngine_GameObject_o *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  float breakEffectStartWaitTime; // s8
  System_Action_o *v41; // x20
  System_Collections_IEnumerator_o *v42; // x1

  v10 = this;
  if ( (byte_596F331 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
    this = (TitleInfoPersonalBossComponent_o *)sub_2213A60(&Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__);
    byte_596F331 = 1;
  }
  if ( v10->fields._IsPlayedDamageAnimation_k__BackingField )
    goto LABEL_4;
  eventSuperBossEntity = v10->fields.eventSuperBossEntity;
  if ( eventSuperBossEntity
    && (oldUserBossEnt = v10->fields.oldUserBossEnt) != 0
    && (maxHp = eventSuperBossEntity->fields.maxHp, oldUserBossEnt->fields.damage < maxHp)
    && ((currentUserBossEnt = v10->fields.currentUserBossEnt) == 0 || currentUserBossEnt->fields.damage >= maxHp)
    || TitleInfoPersonalBossComponent__IsForcePlayClearEffect(this, (const MethodInfo *)mapAssetData) )
  {
    v10->fields._IsPlayedDamageAnimation_k__BackingField = 1;
    v10->fields.animEndCall = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v10->fields.animEndCall,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    clearBossEffect = (UnityEngine_Object_o *)v10->fields.clearBossEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    if ( UnityEngine_Object__op_Equality(clearBossEffect, 0, 0) )
    {
      v20 = TitleInfoPersonalBossComponent__GetClearBossEffect(v10, mapAssetData, v19);
      v10->fields.clearBossEffect = v20;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v10->fields.clearBossEffect,
        (int32_t)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    TitleInfoPersonalBossComponent__PlayClearBossEffect(v10, v18);
  }
  else
  {
    if ( !v10->fields.isGaugeBreak )
    {
LABEL_4:
      ActionExtensions__Call(callback, 0);
      return;
    }
    v10->fields._IsPlayedDamageAnimation_k__BackingField = 1;
    v10->fields.animEndCall = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v10->fields.animEndCall,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    gaugeBreakEffect = (UnityEngine_Object_o *)v10->fields.gaugeBreakEffect;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0, 0) )
    {
      v31 = TitleInfoPersonalBossComponent__GetGaugeBreakEffect(v10, mapAssetData, v30);
      v10->fields.gaugeBreakEffect = v31;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v10->fields.gaugeBreakEffect,
        (int32_t)v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    if ( !System_String__IsNullOrEmpty(v10->fields.breakEffectBeforeSeName, 0) )
    {
      v38 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 83) & 2) != 0 )
        v38 = (_QWORD *)sub_2213A78(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v39 = (System_Reflection_MethodBase_o *)sub_2213A44(v38, v38[4]);
      OverwriteAssetSoundName__PlaySe(v39, v10->fields.breakEffectBeforeSeName, 0, 0);
    }
    breakEffectStartWaitTime = v10->fields.breakEffectStartWaitTime;
    v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)v10,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0);
    v42 = BasicHelper__DelayCall(breakEffectStartWaitTime, v41, 1, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v10, v42, 0);
  }
}


void TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct UserSuperBossEntity_o *currentUserBossEnt; // x8
  struct System_Int64_array *hpList; // x11
  int max_length; // w9
  int32_t maxBreakCount; // w1
  int32_t v7; // w10
  int64_t *m_Items; // x11
  int32_t v9; // w2
  int64_t v10; // t1
  struct UserSuperBossEntity_o *v11; // x12

  currentUserBossEnt = this->fields.currentUserBossEnt;
  if ( currentUserBossEnt )
    currentUserBossEnt = (struct UserSuperBossEntity_o *)currentUserBossEnt->fields.damage;
  hpList = this->fields.hpList;
  if ( !hpList )
    sub_2213CDC(this, method);
  max_length = hpList->max_length;
  maxBreakCount = this->fields.maxBreakCount;
  if ( max_length < 1 )
  {
    v9 = this->fields.maxBreakCount;
  }
  else
  {
    v7 = maxBreakCount - max_length;
    m_Items = hpList->m_Items;
    v9 = this->fields.maxBreakCount;
    while ( 1 )
    {
      v10 = *m_Items++;
      v11 = (struct UserSuperBossEntity_o *)((char *)currentUserBossEnt - v10);
      this->fields.currentMaxHp = v10;
      if ( (__int64)currentUserBossEnt < v10 )
        break;
      --max_length;
      --v9;
      currentUserBossEnt = v11;
      if ( !max_length )
      {
        currentUserBossEnt = v11;
        v9 = v7;
        break;
      }
    }
  }
  this->fields.currentDamage = (int64_t)currentUserBossEnt;
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, maxBreakCount, v9, v2);
}


void TitleInfoPersonalBossComponent__UpdateDisp(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_0(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TitleInfoPersonalBossComponent_o *v8; // x19
  System_Action_o *animEndCall; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  UnityEngine_Component_o *breakHpDownSeName; // x0

  v8 = this;
  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.animEndCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0);
  v8->fields.oldUserBossEnt = 0;
  v8 = (TitleInfoPersonalBossComponent_o *)((char *)v8 + 208);
  LOBYTE(v8->fields.totalHpLabel) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v8, 0, v10, v11, v12, v13, v14, v15);
  breakHpDownSeName = (UnityEngine_Component_o *)v8[-1].fields.breakHpDownSeName;
  if ( !breakHpDownSeName
    || (breakHpDownSeName = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(breakHpDownSeName, 0)) == 0 )
  {
    sub_2213CDC(breakHpDownSeName, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakHpDownSeName, 0, 0);
}


void TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_1(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bossIconSp; // x0

  bossIconSp = (UnityEngine_Component_o *)this->fields.bossIconSp;
  if ( !bossIconSp
    || (bossIconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bossIconSp, 0)) == 0 )
  {
    sub_2213CDC(bossIconSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0);
}


void TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_2(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *animEndCall; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.animEndCall, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0);
  this->fields.oldUserBossEnt = 0;
  this->fields.isGaugeBreak = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.oldUserBossEnt, 0, v10, v11, v12, v13, v14, v15);
}


void TitleInfoPersonalBossComponent___PlayGaugeBreakEffect_b__66_0(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(this, method);
  TitleInfoPersonalBossComponent__PlayHpRecoverEffect(this, v3);
}


void TitleInfoPersonalBossComponent___PlayGaugeBreakEffect_b__66_1(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(this, method);
  TitleInfoPersonalBossComponent__PlayHpRecoverEffect(this, v3);
}


void TitleInfoPersonalBossComponent___Setup_b__48_0(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  TitleInfoPersonalBossComponent__LoadLocalAtlas(this, this->fields.eventId, v2);
  TitleInfoPersonalBossComponent__SetDisp(this, v4);
}


bool TitleInfoPersonalBossComponent__get_IsPlayedDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlayedDamageAnimation_k__BackingField;
}


void TitleInfoPersonalBossComponent__set_IsPlayedDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlayedDamageAnimation_k__BackingField = value;
}


void TitleInfoPersonalBossComponent___c__DisplayClass55_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoPersonalBossComponent___c__DisplayClass55_0___LoadEventUIAssetData_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *_4__this; // x0

  _4__this = (MissionNaviTransitionBoardItem_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, data);
  _4__this[1].klass = (MissionNaviTransitionBoardItem_c *)data;
  sub_2213A04(_4__this + 1, (int32_t)data, (System_String_o *)method, v3, v4, v5, v6, v7);
  ActionExtensions__Call(this->fields.callback, 0);
}


void TitleInfoPersonalBossComponent___c__DisplayClass65_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoPersonalBossComponent___c__DisplayClass65_0___PlayHpCut_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  struct TitleInfoPersonalBossComponent_o *_4__this; // x8
  TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *v4; // x19
  float v5; // s0
  float mNow; // s1
  float v7; // s8
  const MethodInfo *v8; // x2
  double v9; // d0
  int64_t v10; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_13;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this )
    goto LABEL_13;
  v5 = 1.0;
  mNow = easingObj->fields.mNow;
  this = (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)_4__this->fields.hpBarSlider;
  if ( mNow <= 1.0 )
    v5 = easingObj->fields.mNow;
  if ( mNow < 0.0 )
    v5 = 0.0;
  if ( !this
    || (v7 = _4__this->fields.HPfrom + (float)((float)(_4__this->fields.HPto - _4__this->fields.HPfrom) * v5),
        UIProgressBar__set_value((UIProgressBar_o *)this, v7, 0),
        (this = (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_13:
    sub_2213CDC(this, method);
  }
  v9 = v7 * (double)v4->fields.maxHp;
  if ( v9 == INFINITY )
    v10 = 0x8000000000000000LL;
  else
    v10 = (__int64)v9;
  TitleInfoPersonalBossComponent__SetTotalHpText((TitleInfoPersonalBossComponent_o *)this, v10, v8);
}


void TitleInfoPersonalBossComponent___c__DisplayClass65_0___PlayHpCut_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(_4__this, method);
}


void TitleInfoPersonalBossComponent___c__DisplayClass68_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EasingObject_o *easingObj; // x9
  TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *v4; // x8
  float v5; // s0
  float mNow; // s1
  double v7; // d0
  int64_t v8; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v4 = this, (this = (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  v5 = 1.0;
  mNow = easingObj->fields.mNow;
  if ( mNow <= 1.0 )
    v5 = easingObj->fields.mNow;
  if ( mNow < 0.0 )
    v5 = 0.0;
  v7 = (double)v4->fields.maxHp
     * (float)(*((float *)this + 56) + (float)((float)(*((float *)this + 57) - *((float *)this + 56)) * v5));
  if ( v7 == INFINITY )
    v8 = 0x8000000000000000LL;
  else
    v8 = (__int64)v7;
  TitleInfoPersonalBossComponent__SetTotalHpText((TitleInfoPersonalBossComponent_o *)this, v8, v2);
}


void TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TitleInfoPersonalBossComponent_o *_4__this; // x0
  struct TitleInfoPersonalBossComponent_o *v5; // x20
  float breakEffectEndrWaitTime; // s8
  System_Action_o *_9__2; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_IEnumerator_o *v14; // x1

  if ( (byte_596F33E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__);
    byte_596F33E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_2213CDC(_4__this, method);
  }
  breakEffectEndrWaitTime = v5->fields.breakEffectEndrWaitTime;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  v14 = BasicHelper__DelayCall(breakEffectEndrWaitTime, _9__2, 1, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v5, v14, 0);
}


void TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, method);
}