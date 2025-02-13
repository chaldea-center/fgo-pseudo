void __fastcall TitleInfoPersonalBossComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct TitleInfoPersonalBossComponent_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct TitleInfoPersonalBossComponent_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDB016 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_14743/*"TitleInfoEventSuperBossEffect_Dead"*/);
    sub_1C21E38(&StringLiteral_19598/*"event_superboss_icon_"*/);
    sub_1C21E38(&StringLiteral_14742/*"TitleInfoEventSuperBossEffect_Break"*/);
    byte_4BDB016 = 1;
  }
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19598/*"event_superboss_icon_"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields,
    StringLiteral_19598/*"event_superboss_icon_"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_14743/*"TitleInfoEventSuperBossEffect_Dead"*/;
  static_fields = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14743/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_14742/*"TitleInfoEventSuperBossEffect_Break"*/;
  v16 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v16->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14742/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v16->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
    v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)&TitleInfoPersonalBossComponent_TypeInfo->static_fields->ANIM_DURATION_HP_CUT = 0x400000003FC00000LL;
}


void __fastcall TitleInfoPersonalBossComponent___ctor(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDB015 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1C21E38(&StringLiteral_17167/*"ar60"*/);
    sub_1C21E38(&StringLiteral_17162/*"ar210"*/);
    byte_4BDB015 = 1;
  }
  v9 = StringLiteral_17167/*"ar60"*/;
  this->fields.breakEffectBeforeSeName = (struct System_String_o *)StringLiteral_17167/*"ar60"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.breakEffectBeforeSeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17162/*"ar210"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_17162/*"ar210"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.breakHpDownSeName, v10, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.atlasList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__Awake(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  ;
}


float __fastcall TitleInfoPersonalBossComponent__ConvertHpToRate(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  return 1.0 - (double)hp / (double)maxHp;
}


UserSuperBossEntity_o *__fastcall TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(
        int32_t eventId,
        int32_t id,
        int64_t damange,
        const MethodInfo *method)
{
  UserSuperBossEntity_o *v7; // x22
  __int64 v8; // x1
  NetworkManager_c *v9; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  UserSuperBossEntity_o *result; // x0
  int64_t userIdNumber; // x8

  if ( (byte_4BDB014 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UserSuperBossEntity_TypeInfo);
    byte_4BDB014 = 1;
  }
  v7 = (UserSuperBossEntity_o *)sub_1C22084(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v7, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( !v7 )
    sub_1C22094(v9, v8);
  static_fields = v9->static_fields;
  result = v7;
  userIdNumber = static_fields->userIdNumber;
  v7->fields.eventId = eventId;
  v7->fields.superBossId = id;
  v7->fields.damage = damange;
  v7->fields.userId = userIdNumber;
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_c *v5; // x0
  System_String_o *v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  int32_t id; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDB00B & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_16893/*"_{0}{1:D2}"*/);
    byte_4BDB00B = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v5 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v5 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  v6 = System_String__Concat_63115476(
         v5->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16893/*"_{0}{1:D2}"*/,
         0LL);
  eventId = this->fields.eventId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v7, v8, v9);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    sub_1C22094(v10, v11);
  v16 = (Il2CppObject *)v10;
  id = eventSuperBossEntity->fields.id;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v12, v13, v14);
  v18 = System_String__Format_63129848(v6, v16, v17, 0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49880776(
                                       mapAssetData,
                                       v18,
                                       (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
}


UserSuperBossEntity_o *__fastcall TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w20
  int64_t OrtLatePhaseBreak; // x21
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *v8; // x8
  int32_t v9; // w20
  int64_t OrtLatePhaseDead; // x21
  EventSuperBossEntity_o *IsOpen; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  struct System_Int64_array *hpList; // x11
  unsigned __int64 max_length; // x8
  __int64 v16; // x10
  int64_t v17; // x20
  __int64 v18; // x9
  __int64 v19; // x10
  int64_t *m_Items; // x11
  int64_t v21; // x12
  BalanceConfig_c *v22; // x0
  struct BalanceConfig_StaticFields *v23; // x8
  int32_t v24; // w20
  int64_t v25; // x21
  BalanceConfig_c *v26; // x0
  struct BalanceConfig_StaticFields *v27; // x8
  int32_t v28; // w20
  int32_t v29; // w21
  struct System_Int64_array *v30; // x11
  unsigned __int64 v31; // x8
  unsigned __int64 v32; // x9
  int64_t *v33; // x11
  int64_t v34; // x12
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  int32_t id; // w19
  int32_t eventId; // w21

  if ( (byte_4BDB013 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4BDB013 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseBreak = static_fields->OrtLatePhaseBreak;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseBreak, 0, 0LL, 0LL) )
    goto LABEL_19;
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = v7->static_fields;
  v9 = v8->OrtLateQuestId;
  OrtLatePhaseDead = v8->OrtLatePhaseDead;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v9, OrtLatePhaseDead, 0, 0LL, 0LL);
  if ( ((unsigned __int8)IsOpen & 1) != 0 )
  {
    hpList = this->fields.hpList;
    if ( !hpList )
      goto LABEL_43;
    max_length = hpList->max_length;
    v16 = (max_length << 32) - 0x100000000LL;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      v18 = 0LL;
      v19 = v16 >> 32;
      m_Items = hpList->m_Items;
      while ( v18 < max_length )
      {
        v21 = m_Items[v18++];
        v17 += v21;
        if ( v18 >= v19 )
          goto LABEL_38;
      }
      goto LABEL_42;
    }
  }
  else
  {
LABEL_19:
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v23 = v22->static_fields;
    v24 = v23->OrtLateQuestId;
    v25 = v23->OrtLatePhaseDead;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsOpen(46, v24, v25, 0, 0LL, 0LL) )
      goto LABEL_35;
    v26 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    v27 = v26->static_fields;
    v28 = v27->OrtLateQuestId;
    v29 = v27->OrtLatePhaseDead;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v28, v29 + 1, 0, 0LL, 0LL);
    if ( ((unsigned __int8)IsOpen & 1) == 0 )
    {
LABEL_35:
      IsOpen = this->fields.eventSuperBossEntity;
      if ( IsOpen )
        return EventSuperBossEntity__GetUserSuperBossEntity(IsOpen, 0LL);
LABEL_43:
      sub_1C22094(IsOpen, v12);
    }
    v30 = this->fields.hpList;
    if ( !v30 )
      goto LABEL_43;
    v31 = v30->max_length;
    if ( (__int64)(v31 << 32) >= 1 )
    {
      v17 = 0LL;
      v32 = 0LL;
      v33 = v30->m_Items;
      while ( v32 < v31 )
      {
        v34 = v33[v32++];
        v17 += v34;
        if ( (__int64)v32 >= (int)v31 )
          goto LABEL_38;
      }
LABEL_42:
      sub_1C2209C(IsOpen, v12);
    }
  }
  v17 = 0LL;
LABEL_38:
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_43;
  eventId = eventSuperBossEntity->fields.eventId;
  id = eventSuperBossEntity->fields.id;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  return TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(eventId, id, v17, v13);
}


System_String_o *__fastcall TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDB003 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_6402/*"EventUI/Prefabs/{0}"*/);
    byte_4BDB003 = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6402/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4BDB009 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    byte_4BDB009 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49880776(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGaugeBreakEffect(
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
  if ( (byte_4BDB00D & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_16399/*"_"*/);
    byte_4BDB00D = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v5 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v5 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = v5->static_fields->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB;
  v7 = System_Int32__ToString(v4 + 184, 0LL);
  v8 = System_String__Concat_63126736(
         SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16399/*"_"*/,
         v7,
         0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49880776(
                                       mapAssetData,
                                       v8,
                                       (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
}


bool __fastcall TitleInfoPersonalBossComponent__IsAlive(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9

  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  return eventSuperBossEntity
      && (currentUserBossEnt = this->fields.currentUserBossEnt) != 0LL
      && currentUserBossEnt->fields.damage < eventSuperBossEntity->fields.maxHp;
}


bool __fastcall TitleInfoPersonalBossComponent__IsAliveOldUserBoss(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9

  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  return eventSuperBossEntity
      && (oldUserBossEnt = this->fields.oldUserBossEnt) != 0LL
      && oldUserBossEnt->fields.damage < eventSuperBossEntity->fields.maxHp;
}


bool __fastcall TitleInfoPersonalBossComponent__IsDispPossible(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *dispRoot; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4BDAFFF & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BDAFFF = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  dispRoot = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    dispRoot = TerminalSceneComponent_TypeInfo;
  }
  mInstance = dispRoot->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL
    || (dispRoot = (TerminalSceneComponent_c *)mTerminalMap->fields.dispRoot) == 0LL )
  {
    sub_1C22094(dispRoot, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)dispRoot, 0LL);
}


bool __fastcall TitleInfoPersonalBossComponent__IsEventRaidBoss(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall TitleInfoPersonalBossComponent__IsForcePlayClearEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w19
  int64_t OrtLatePhaseDead; // x20

  if ( (byte_4BDB012 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    byte_4BDB012 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  static_fields = v2->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseDead = static_fields->OrtLatePhaseDead;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseDead, 0, 0LL, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__LoadEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x20

  if ( (byte_4BDB004 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__);
    sub_1C21E38(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
    byte_4BDB004 = 1;
  }
  v7 = sub_1C22084(TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass55_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)callback, v16, v17, v18, v19, v20, v21);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v22);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v24, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__LoadLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  TitleInfoPersonalBossComponent_o *v6; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v9; // w9
  int i; // w28
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v30; // x8
  int32_t v31; // [xsp+8h] [xbp-58h] BYREF
  int v32; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4BDB005 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25389/*"{0:D2}"*/);
    this = (TitleInfoPersonalBossComponent_o *)sub_1C21E38(&StringLiteral_5493/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4BDB005 = 1;
  }
  if ( v6->fields.assetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C22094(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v9 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v9;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v32 = i;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, size, v3, v4);
      v12 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25389/*"{0:D2}"*/, v11, 0LL);
      v31 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v13, v14, v15);
      v17 = System_String__Format_63129848((System_String_o *)StringLiteral_5493/*"DownloadEventUIAtlas{0}{1}"*/, v16, v12, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v17,
                                                                 v18);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoPersonalBossComponent_o *)UnityEngine_Object__op_Equality(
                                                   GameObjectFromEventUIAssetData,
                                                   0LL,
                                                   0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (TitleInfoPersonalBossComponent_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v27 = *(_QWORD *)&this->fields.m_CachedPtr;
      v28 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v27 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v27 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = v27 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v30 + 32) = Component_object;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)Component_object, v21, v22, v23, v24, v25, v26);
      }
    }
  }
}


void __fastcall TitleInfoPersonalBossComponent__OnDestroy(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__ReleaseLocalAtlas(this, method);
  TitleInfoPersonalBossComponent__ReleaseAssetData(this, v3);
}


void __fastcall TitleInfoPersonalBossComponent__OnEndAnimation(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *animEndCall; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1

  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0LL);
  this->fields.isGaugeBreak = 0;
  this->fields.oldUserBossEnt = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.oldUserBossEnt, 0LL, v10, v11, v12, v13, v14, v15);
  TitleInfoPersonalBossComponent__SetDisp(this, v16);
}


void __fastcall TitleInfoPersonalBossComponent__PlayClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *clearBossEffect; // x20
  Il2CppObject *v4; // x20
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  TitleInfoPersonalBossComponent_c *v9; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v11; // x20
  System_Collections_IEnumerator_o *v12; // x1
  System_Action_o *v13; // x21
  System_Action_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BDB00C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__);
    sub_1C21E38(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4BDB00C = 1;
  }
  clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v4 = (Il2CppObject *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__Instantiate_object_(
           v4,
           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v5, (UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v5, 0LL);
    if ( v5 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v5,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        v9 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
          v9 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v9->static_fields->CLEAR_CALLBACK_DELAY;
        v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0LL);
        v12 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v11, 1, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
        return;
      }
      v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0LL);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v13, 0LL);
        v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0LL);
        Component_object[2].monitor = v14;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&Component_object[2].monitor,
          (int64_t)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        return;
      }
    }
    sub_1C22094(v6, v7);
  }
}


void __fastcall TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gaugeBreakEffect; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  struct UISprite_array *breakIconList; // x8
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  bool v12; // w22
  System_Action_o *v13; // x0
  System_Action_o *v14; // x20
  System_Collections_IEnumerator_o *v15; // x1

  if ( (byte_4BDB00F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__);
    byte_4BDB00F = 1;
  }
  gaugeBreakEffect = (UnityEngine_Object_o *)this->fields.gaugeBreakEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
  {
    TitleInfoPersonalBossComponent__OnEndAnimation(this, v4);
    return;
  }
  v5 = (Il2CppObject *)this->fields.gaugeBreakEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         v5,
         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_17;
  if ( !breakIconList->max_length )
    sub_1C2209C(v6, v7);
  v9 = (UnityEngine_GameObject_o *)v6;
  v6 = (Il2CppObject *)breakIconList->m_Items[0];
  if ( !v6 )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  GameObjectExtensions__SafeSetParent_34803616(v9, gameObject, 0LL);
  GameObjectExtensions__ResetLocalPosition(v9, 0LL);
  if ( !v9 )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  v14 = v13;
  if ( v12 )
  {
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0LL);
    v15 = BasicHelper__DelayCall(0.533, v14, 1, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
    return;
  }
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0LL);
  if ( !Component_object )
LABEL_17:
    sub_1C22094(v6, v7);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v14, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpCut(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  TitleInfoPersonalBossComponent_c *v22; // x0
  EasingObject_o *v23; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v25; // x21
  System_Action_o *v26; // x22

  if ( (byte_4BDB00E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    sub_1C21E38(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__);
    sub_1C21E38(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
    byte_4BDB00E = 1;
  }
  v3 = sub_1C22084(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass65_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_12;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v3 + 32) = this->fields.oldMaxHp;
  if ( !System_String__IsNullOrEmpty(this->fields.breakHpDownSeName, 0LL) )
  {
    v12 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C21E50(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v12, v12[4]);
    OverwriteAssetSoundName__PlaySe(v13, this->fields.breakHpDownSeName, 0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)Component_object, v16, v17, v18, v19, v20, v21);
  v22 = TitleInfoPersonalBossComponent_TypeInfo;
  v23 = *(EasingObject_o **)(v3 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v22 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v22->static_fields->ANIM_DURATION_HP_CUT;
  v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0LL);
  v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0LL);
  if ( !v23 )
LABEL_12:
    sub_1C22094(v4, v5);
  EasingObject__Play(v23, ANIM_DURATION_HP_CUT, v25, v26, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t currentMaxHp; // x8
  int64_t currentDamage; // x9
  float v14; // s0
  float v15; // s1
  bool v16; // nf
  float v17; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  TitleInfoPersonalBossComponent_c *v26; // x0
  EasingObject_o *v27; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v29; // x21
  System_Action_o *v30; // x22

  if ( (byte_4BDB010 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C21E38(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__);
    sub_1C21E38(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
    byte_4BDB010 = 1;
  }
  v3 = sub_1C22084(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass68_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)this, v6, v7, v8, v9, v10, v11);
  currentMaxHp = this->fields.currentMaxHp;
  *(_QWORD *)(v3 + 32) = currentMaxHp;
  currentDamage = this->fields.currentDamage;
  v14 = 1.0 - (double)currentDamage / (double)currentMaxHp;
  v15 = fminf(v14, 1.0);
  v16 = v14 < 0.0;
  v17 = 0.0;
  if ( !v16 )
    v17 = v15;
  *(_QWORD *)(v3 + 40) = currentDamage;
  this->fields.HPfrom = 0.0;
  this->fields.HPto = v17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)Component_object, v20, v21, v22, v23, v24, v25);
  v26 = TitleInfoPersonalBossComponent_TypeInfo;
  v27 = *(EasingObject_o **)(v3 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v26 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v26->static_fields->ANIM_DURATION_HP_CUT;
  v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0LL);
  v30 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0LL);
  if ( !v27 )
LABEL_10:
    sub_1C22094(v4, v5);
  EasingObject__Play(v27, ANIM_DURATION_HP_CUT, v29, v30, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseAssetData(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_assetData; // x19
  int32_t eventId; // w20
  System_String_o *EventUIAssetDataPath; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDB008 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4BDB008 = 1;
  }
  p_assetData = (PartyOrganizationUtility_o *)&this->fields.assetData;
  if ( this->fields.assetData )
  {
    eventId = this->fields.eventId;
    if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, method);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
    p_assetData->klass = 0LL;
    sub_1C21DDC(p_assetData, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v2; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4BDB007 & 1) == 0 )
  {
    this = (TitleInfoPersonalBossComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_4BDB007 = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1C22094(this, method);
  size = atlasList->fields._size;
  v5 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__SetDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  struct UserSuperBossEntity_o *CurrentUserSuperBossEntity; // x0
  struct UserSuperBossEntity_o **p_currentUserBossEnt; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  BalanceConfig_c *v11; // x0
  __int64 v12; // x8
  __int64 v13; // x24
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w21
  int64_t OrtLatePhaseSecondForm; // x22
  __int64 v17; // x1
  UILabel_o *Master_object; // x0
  int32_t eventId; // w21
  EventSuperBossMaster_o *v20; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  int32_t v25; // w21
  EventBossStatusUiMaster_o *v26; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  System_String_o *v29; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // x2
  struct EventSuperBossEntity_o *v33; // x8
  UILabel_o *bossName; // x21
  int v35; // s0
  struct System_Int64_array *hpList; // x8
  int max_length; // w9
  int v41; // w22
  int64_t v42; // x10
  int v43; // w12
  int32_t v44; // w21
  Il2CppClass **v45; // x11
  Il2CppClass *v46; // x11
  bool v47; // vf
  int64_t v48; // x11
  struct UserSuperBossEntity_o *currentUserBossEnt; // x10
  int v50; // w11
  Il2CppClass **v51; // x9
  Il2CppClass *v52; // x9
  int64_t v53; // x9
  struct EventSuperBossEntity_o *v54; // x8
  BalanceConfig_c *v55; // x0
  int32_t id; // w24
  TitleInfoPersonalBossComponent_o *v57; // x0
  const MethodInfo *v58; // x1
  float v59; // s8
  const MethodInfo *v60; // x2
  struct EventSuperBossEntity_o *v61; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  int64_t oldDamage; // d0
  int64_t oldMaxHp; // d1
  float v66; // s1
  bool v67; // nf
  float v68; // s0
  const MethodInfo *v69; // x2
  float v70; // s0
  float v71; // s1
  float v72; // s0
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x3
  UISprite_o *hpBarUnderSprite; // x20
  System_String_o *v77; // x0
  System_String_o *v78; // x0
  const MethodInfo *v79; // x3
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // x3
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x3
  EventSuperBossEntity_o *v87; // [xsp+0h] [xbp-60h] BYREF
  __int64 v88; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDB001 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventSuperBossMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_19597/*"event_superboss_hp_white"*/);
    sub_1C21E38(&StringLiteral_19550/*"event_raid_hp_back"*/);
    sub_1C21E38(&StringLiteral_19592/*"event_superboss_hp_lower_"*/);
    sub_1C21E38(&StringLiteral_19551/*"event_raid_hp_frame"*/);
    sub_1C21E38(&StringLiteral_19596/*"event_superboss_hp_upper_"*/);
    byte_4BDB001 = 1;
  }
  v87 = 0LL;
  v88 = 0LL;
  CurrentUserSuperBossEntity = TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(this, method);
  this->fields.currentUserBossEnt = CurrentUserSuperBossEntity;
  p_currentUserBossEnt = &this->fields.currentUserBossEnt;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.currentUserBossEnt,
    (int64_t)CurrentUserSuperBossEntity,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = BalanceConfig_TypeInfo;
  if ( this->fields.oldUserBossEnt )
    v12 = 208LL;
  else
    v12 = 216LL;
  v13 = *(__int64 *)((char *)&this->klass + v12);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  static_fields = v11->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseSecondForm = static_fields->OrtLatePhaseSecondForm;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventId = this->fields.eventId;
    v20 = (EventSuperBossMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v20 )
      goto LABEL_98;
    if ( EventSuperBossMaster__TryGetEntity(
           v20,
           &v87,
           eventId,
           BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
           0LL) )
    {
      Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
      if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
      if ( !v87 )
        goto LABEL_98;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v22 = System_Int32__ToString((int)v87 + 56, 0LL);
      v23 = System_String__Concat_63115476(SUPERBOSS_ICON_SPNAME_PREFIX, v22, 0LL);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v23, v24);
      if ( !v87 )
        goto LABEL_98;
      Master_object = this->fields.bossName;
      if ( !Master_object )
        goto LABEL_98;
      UILabel__set_text(Master_object, v87->fields.name, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v25 = this->fields.eventId;
    v26 = (EventBossStatusUiMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v26 )
      goto LABEL_98;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v26,
                                  v25,
                                  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
                                  0LL);
  }
  else
  {
    Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
    if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity )
      goto LABEL_98;
    v29 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v30 = System_Int32__ToString((int)eventSuperBossEntity + 56, 0LL);
    v31 = System_String__Concat_63115476(v29, v30, 0LL);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v31, v32);
    v33 = this->fields.eventSuperBossEntity;
    if ( !v33 )
      goto LABEL_98;
    Master_object = this->fields.bossName;
    if ( !Master_object )
      goto LABEL_98;
    UILabel__set_text(Master_object, v33->fields.name, 0LL);
    EntityFromEventIdAndIndex = this->fields.eventBossStatusUiEntity;
  }
  bossName = this->fields.bossName;
  if ( EntityFromEventIdAndIndex )
  {
    v89.fields.r = 0.0;
    v89.fields.g = 0.0;
    v89.fields.b = 0.0;
    v89.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v35 = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v89, 0LL);
    if ( !bossName )
      goto LABEL_98;
  }
  else
  {
    Master_object = (UILabel_o *)this->fields.eventSuperBossEntity;
    if ( !Master_object )
      goto LABEL_98;
    *(UnityEngine_Color_o *)&v35 = EventSuperBossEntity__GetBossColor((EventSuperBossEntity_o *)Master_object, 0LL);
    if ( !bossName )
      goto LABEL_98;
  }
  UILabel__set_effectColor(bossName, *(UnityEngine_Color_o *)&v35, 0LL);
  Master_object = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_object )
    goto LABEL_98;
  Master_object = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  hpList = this->fields.hpList;
  if ( !hpList )
    goto LABEL_98;
  max_length = hpList->max_length;
  v41 = max_length - 1;
  this->fields.maxBreakCount = max_length - 1;
  v42 = v13 ? *(_QWORD *)(v13 + 32) : 0LL;
  if ( max_length < 1 )
  {
    v48 = v42;
    v44 = max_length - 1;
  }
  else
  {
    v43 = 0;
    v44 = max_length - 1;
    while ( 1 )
    {
      v45 = &hpList->obj.klass + v43;
      this->fields.oldMaxHp = (int64_t)v45[4];
      v46 = v45[4];
      v47 = __OFSUB__(v42, v46);
      v48 = v42 - (_QWORD)v46;
      if ( v48 < 0 != v47 )
        break;
      --v44;
      ++v43;
      v42 = v48;
      if ( v44 == -1 )
        goto LABEL_53;
    }
    v48 = v42;
  }
LABEL_53:
  currentUserBossEnt = this->fields.currentUserBossEnt;
  this->fields.oldDamage = v48;
  if ( currentUserBossEnt )
    currentUserBossEnt = (struct UserSuperBossEntity_o *)currentUserBossEnt->fields.damage;
  if ( max_length >= 1 )
  {
    v50 = 0;
    while ( 1 )
    {
      v51 = &hpList->obj.klass + v50;
      this->fields.currentMaxHp = (int64_t)v51[4];
      v52 = v51[4];
      v47 = __OFSUB__(currentUserBossEnt, v52);
      v53 = (char *)currentUserBossEnt - (char *)v52;
      if ( v53 < 0 != v47 )
        break;
      --v41;
      ++v50;
      currentUserBossEnt = (struct UserSuperBossEntity_o *)v53;
      if ( v41 == -1 )
        goto LABEL_61;
    }
  }
  v53 = (int64_t)currentUserBossEnt;
LABEL_61:
  v54 = this->fields.eventSuperBossEntity;
  this->fields.currentDamage = v53;
  if ( !v54 )
    goto LABEL_98;
  v55 = BalanceConfig_TypeInfo;
  id = v54->fields.id;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v55 = BalanceConfig_TypeInfo;
  }
  if ( id == v55->static_fields->OrtThirdFormId )
    this->fields.isGaugeBreak = v44 == 1 && v41 == 0;
  LODWORD(v88) = v44 + 1;
  HIDWORD(v88) = v44;
  Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
  if ( !Master_object
    || (Master_object = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)Master_object,
                                       0LL)) == 0LL )
  {
LABEL_98:
    sub_1C22094(Master_object, v17);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v57, v58) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( Master_object )
    {
      v59 = 0.0;
      UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v60);
      Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
      if ( Master_object )
      {
        v44 = 0;
        goto LABEL_97;
      }
    }
    goto LABEL_98;
  }
  v61 = this->fields.eventSuperBossEntity;
  if ( v61
    && (oldUserBossEnt = this->fields.oldUserBossEnt) != 0LL
    && (maxHp = v61->fields.maxHp, oldUserBossEnt->fields.damage < maxHp)
    && (!*p_currentUserBossEnt || (*p_currentUserBossEnt)->fields.damage >= maxHp) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( !Master_object )
      goto LABEL_98;
    v59 = 0.0;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v74);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v44 > 0 )
      v59 = 1.0;
  }
  else if ( this->fields.isGaugeBreak )
  {
    oldMaxHp = this->fields.oldMaxHp;
    oldDamage = this->fields.oldDamage;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    this->fields.HPto = 0.0;
    *(float *)&oldDamage = 1.0 - (double)oldDamage / (double)oldMaxHp;
    v66 = fminf(*(float *)&oldDamage, 1.0);
    v67 = *(float *)&oldDamage < 0.0;
    v68 = 0.0;
    if ( !v67 )
      v68 = v66;
    this->fields.HPfrom = v68;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v68, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.oldMaxHp - this->fields.oldDamage, v69);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v44 <= 0 )
      v59 = 0.0;
    else
      v59 = 1.0;
  }
  else
  {
    LODWORD(v88) = v41 + 1;
    HIDWORD(v88) = v41;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    v70 = 1.0 - (double)this->fields.currentDamage / (double)this->fields.currentMaxHp;
    v71 = fminf(v70, 1.0);
    v67 = v70 < 0.0;
    v72 = 0.0;
    if ( !v67 )
      v72 = v71;
    this->fields.HPfrom = v72;
    this->fields.HPto = v72;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v72, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentMaxHp - this->fields.currentDamage, v73);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v41 <= 0 )
      v59 = 0.0;
    else
      v59 = 1.0;
    v44 = v41;
  }
LABEL_97:
  UIProgressBar__set_value((UIProgressBar_o *)Master_object, v59, 0LL);
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, this->fields.maxBreakCount, v44, v75);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v77 = System_Int32__ToString((int32_t)&v88 + 4, 0LL);
  v78 = System_String__Concat_63115476((System_String_o *)StringLiteral_19592/*"event_superboss_hp_lower_"*/, v77, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v78, v79);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v81 = System_Int32__ToString((int32_t)&v88, 0LL);
  v82 = System_String__Concat_63115476((System_String_o *)StringLiteral_19596/*"event_superboss_hp_upper_"*/, v81, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v82, v83);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.hpBarWhiteSprite,
    (System_String_o *)StringLiteral_19597/*"event_superboss_hp_white"*/,
    v84);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_19551/*"event_raid_hp_frame"*/,
    v85);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_19550/*"event_raid_hp_back"*/,
    v86);
}


bool __fastcall TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
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

  if ( (byte_4BDB006 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4BDB006 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0LL, 0LL);
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
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1C22094(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C22094(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0LL);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1C22094(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall TitleInfoPersonalBossComponent__SetTotalHpText(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  UILabel_o *totalHpLabel; // x20
  System_String_o *v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  int64_t v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDB011 & 1) == 0 )
  {
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3829/*"COMMON_NUM_FORMAT"*/);
    byte_4BDB011 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_NUM_FORMAT"*/, 0LL);
  v13 = hp;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13, v7, v8, v9);
  v11 = System_String__Format(v6, v10, 0LL);
  if ( !totalHpLabel )
    sub_1C22094(v11, v12);
  UILabel__set_text(totalHpLabel, v11, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__Setup(
        TitleInfoPersonalBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UserSuperBossEntity_o *oldUserBossEnt,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  EventBossStatusUiMaster_o *Master_object; // x0
  __int64 v18; // x1
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Int64_array *BreakGaugeHpList; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int32_t eventId; // w20
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x3

  if ( (byte_4BDB000 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__);
    byte_4BDB000 = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.eventSuperBossEntity,
    (int64_t)superBossEntity,
    (int64_t)oldUserBossEnt,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.oldUserBossEnt = oldUserBossEnt;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.oldUserBossEnt,
    (int64_t)oldUserBossEnt,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields._IsPlayedDamageAnimation_k__BackingField = 0;
  if ( this->fields.eventSuperBossEntity )
  {
    this->fields.eventId = this->fields.eventSuperBossEntity->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventBossStatusUiMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity
      || !Master_object
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_object,
                                        this->fields.eventId,
                                        eventSuperBossEntity->fields.id,
                                        0LL),
          this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.eventBossStatusUiEntity,
            (int64_t)EntityFromEventIdAndIndex,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26),
          (Master_object = (EventBossStatusUiMaster_o *)this->fields.eventSuperBossEntity) == 0LL) )
    {
      sub_1C22094(Master_object, v18);
    }
    BreakGaugeHpList = EventSuperBossEntity__GetBreakGaugeHpList((EventSuperBossEntity_o *)Master_object, 0LL);
    this->fields.hpList = BreakGaugeHpList;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.hpList,
      (int64_t)BreakGaugeHpList,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    eventId = this->fields.eventId;
    v35 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0LL);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventId, v35, v36);
  }
}


void __fastcall TitleInfoPersonalBossComponent__SetupBossIcon(
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, (unsigned __int8)v6 & 1, 0LL);
  v6 = this->fields.bossIconSp;
  if ( !v6 )
    goto LABEL_7;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0LL) )
  {
    v6 = this->fields.bossIconSp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
        v6,
        v6->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_7:
    sub_1C22094(v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__SetupBreakGauge(
        TitleInfoPersonalBossComponent_o *this,
        int32_t maxCount,
        int32_t restCount,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v6; // x19
  struct UISprite_array *breakIconList; // x8
  int max_length; // w22
  il2cpp_array_size_t v9; // w20
  int v10; // w23
  il2cpp_array_size_t v11; // w9
  __int64 v12; // x26
  struct UISprite_array *v13; // x8
  UISprite_o *v14; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x2
  TitleInfoPersonalBossComponent_o *v17; // x0
  UISprite_o *v18; // x1
  struct UISprite_array *v19; // x8
  struct UISprite_array *v20; // x8
  long double v21; // q0
  TitleInfoPersonalBossComponent_c *klass; // x8
  int v23; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4BDB002 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_19589/*"event_superboss_hp_icon_0"*/);
    sub_1C21E38(&StringLiteral_19590/*"event_superboss_hp_icon_11"*/);
    this = (TitleInfoPersonalBossComponent_o *)sub_1C21E38(&StringLiteral_19588/*"event_superboss_hp_icon_"*/);
    byte_4BDB002 = 1;
  }
  v23 = 0;
  breakIconList = v6->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_36;
  max_length = breakIconList->max_length;
  if ( restCount <= 9 )
  {
    v10 = max_length - 1;
    if ( max_length < 1 )
    {
LABEL_33:
      TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        v6,
        v6->fields.breakIcon_11,
        (System_String_o *)StringLiteral_19590/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
      if ( this )
      {
        klass = this->klass;
        LODWORD(v21) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_1C22094(this, *(_QWORD *)&maxCount);
    }
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= breakIconList->max_length )
        goto LABEL_37;
      v12 = (int)v11;
      this = (TitleInfoPersonalBossComponent_o *)breakIconList->m_Items[v11];
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)v12 < restCount )
        break;
      if ( (int)v12 < maxCount )
      {
        v19 = v6->fields.breakIconList;
        if ( !v19 )
          goto LABEL_36;
        if ( (unsigned int)v12 >= v19->max_length )
          goto LABEL_37;
        v18 = v19->m_Items[v12];
        v16 = (System_String_o *)StringLiteral_19589/*"event_superboss_hp_icon_0"*/;
        v17 = v6;
        goto LABEL_24;
      }
LABEL_28:
      if ( v10 == (_DWORD)v12 )
        goto LABEL_33;
      breakIconList = v6->fields.breakIconList;
      v11 = v12 + 1;
      if ( !breakIconList )
        goto LABEL_36;
    }
    v13 = v6->fields.breakIconList;
    if ( !v13 )
      goto LABEL_36;
    if ( (unsigned int)v12 >= v13->max_length )
      goto LABEL_37;
    v14 = v13->m_Items[v12];
    v23 = v12 + 2;
    v15 = System_Int32__ToString((int32_t)&v23, 0LL);
    v16 = System_String__Concat_63115476((System_String_o *)StringLiteral_19588/*"event_superboss_hp_icon_"*/, v15, 0LL);
    v17 = v6;
    v18 = v14;
LABEL_24:
    this = (TitleInfoPersonalBossComponent_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
                                                 v17,
                                                 v18,
                                                 v16,
                                                 method);
    v20 = v6->fields.breakIconList;
    if ( !v20 )
      goto LABEL_36;
    if ( (unsigned int)v12 >= v20->max_length )
      goto LABEL_37;
    this = (TitleInfoPersonalBossComponent_o *)v20->m_Items[v12];
    if ( !this )
      goto LABEL_36;
    this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, float))this->klass[1]._1.namespaze)(
                                                 this,
                                                 this->klass[1]._1.byval_arg.data,
                                                 1.0);
    goto LABEL_28;
  }
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < breakIconList->max_length )
    {
      this = (TitleInfoPersonalBossComponent_o *)breakIconList->m_Items[v9];
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( max_length == ++v9 )
        goto LABEL_31;
      breakIconList = v6->fields.breakIconList;
      if ( !breakIconList )
        goto LABEL_36;
    }
LABEL_37:
    sub_1C2209C(this, *(_QWORD *)&maxCount);
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v6,
    v6->fields.breakIcon_11,
    (System_String_o *)StringLiteral_19590/*"event_superboss_hp_icon_11"*/,
    method);
  this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
  if ( !this )
    goto LABEL_36;
  klass = this->klass;
  LODWORD(v21) = 1.0;
LABEL_35:
  ((void (__fastcall *)(long double))klass[1]._1.namespaze)(v21);
}


void __fastcall TitleInfoPersonalBossComponent__StartDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TitleInfoPersonalBossComponent_o *v10; // x19
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9
  UnityEngine_Object_o *clearBossEffect; // x21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Object_o *gaugeBreakEffect; // x21
  const MethodInfo *v26; // x2
  UnityEngine_GameObject_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  float breakEffectStartWaitTime; // s8
  System_Action_o *v37; // x20
  System_Collections_IEnumerator_o *v38; // x1

  v10 = this;
  if ( (byte_4BDB00A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
    this = (TitleInfoPersonalBossComponent_o *)sub_1C21E38(&Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__);
    byte_4BDB00A = 1;
  }
  if ( v10->fields._IsPlayedDamageAnimation_k__BackingField )
    goto LABEL_4;
  eventSuperBossEntity = v10->fields.eventSuperBossEntity;
  if ( eventSuperBossEntity
    && (oldUserBossEnt = v10->fields.oldUserBossEnt) != 0LL
    && (maxHp = eventSuperBossEntity->fields.maxHp, oldUserBossEnt->fields.damage < maxHp)
    && ((currentUserBossEnt = v10->fields.currentUserBossEnt) == 0LL || currentUserBossEnt->fields.damage >= maxHp)
    || TitleInfoPersonalBossComponent__IsForcePlayClearEffect(this, (const MethodInfo *)mapAssetData) )
  {
    v10->fields._IsPlayedDamageAnimation_k__BackingField = 1;
    v10->fields.animEndCall = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v10->fields.animEndCall,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    clearBossEffect = (UnityEngine_Object_o *)v10->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
    {
      v18 = TitleInfoPersonalBossComponent__GetClearBossEffect(v10, mapAssetData, v17);
      v10->fields.clearBossEffect = v18;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v10->fields.clearBossEffect,
        (int64_t)v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    TitleInfoPersonalBossComponent__PlayClearBossEffect(v10, v16);
  }
  else
  {
    if ( !v10->fields.isGaugeBreak )
    {
LABEL_4:
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    v10->fields._IsPlayedDamageAnimation_k__BackingField = 1;
    v10->fields.animEndCall = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v10->fields.animEndCall,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    gaugeBreakEffect = (UnityEngine_Object_o *)v10->fields.gaugeBreakEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
    {
      v27 = TitleInfoPersonalBossComponent__GetGaugeBreakEffect(v10, mapAssetData, v26);
      v10->fields.gaugeBreakEffect = v27;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v10->fields.gaugeBreakEffect,
        (int64_t)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    if ( !System_String__IsNullOrEmpty(v10->fields.breakEffectBeforeSeName, 0LL) )
    {
      v34 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1C21E50(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v35 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v34, v34[4]);
      OverwriteAssetSoundName__PlaySe(v35, v10->fields.breakEffectBeforeSeName, 0, 0LL);
    }
    breakEffectStartWaitTime = v10->fields.breakEffectStartWaitTime;
    v37 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v10,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0LL);
    v38 = BasicHelper__DelayCall(breakEffectStartWaitTime, v37, 1, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v10, v38, 0LL);
  }
}


void __fastcall TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct UserSuperBossEntity_o *currentUserBossEnt; // x8
  struct System_Int64_array *hpList; // x9
  int max_length; // w10
  int32_t maxBreakCount; // w1
  int v7; // w12
  int32_t v8; // w2
  Il2CppClass **v9; // x13
  Il2CppClass *v10; // x13
  bool v11; // vf
  __int64 v12; // x13

  currentUserBossEnt = this->fields.currentUserBossEnt;
  if ( currentUserBossEnt )
    currentUserBossEnt = (struct UserSuperBossEntity_o *)currentUserBossEnt->fields.damage;
  hpList = this->fields.hpList;
  if ( !hpList )
    sub_1C22094(this, method);
  max_length = hpList->max_length;
  maxBreakCount = this->fields.maxBreakCount;
  if ( max_length < 1 )
  {
    v8 = this->fields.maxBreakCount;
  }
  else
  {
    v7 = 0;
    v8 = this->fields.maxBreakCount;
    while ( 1 )
    {
      v9 = &hpList->obj.klass + v7;
      this->fields.currentMaxHp = (int64_t)v9[4];
      v10 = v9[4];
      v11 = __OFSUB__(currentUserBossEnt, v10);
      v12 = (char *)currentUserBossEnt - (char *)v10;
      if ( v12 < 0 != v11 )
        break;
      ++v7;
      --v8;
      currentUserBossEnt = (struct UserSuperBossEntity_o *)v12;
      if ( max_length == v7 )
      {
        currentUserBossEnt = (struct UserSuperBossEntity_o *)v12;
        v8 = maxBreakCount - max_length;
        break;
      }
    }
  }
  this->fields.currentDamage = (int64_t)currentUserBossEnt;
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, maxBreakCount, v8, v2);
}


void __fastcall TitleInfoPersonalBossComponent__UpdateDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_0(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *animEndCall; // x20
  TitleInfoPersonalBossComponent_o *v9; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  UnityEngine_Component_o *breakHpDownSeName; // x0

  animEndCall = this->fields.animEndCall;
  v9 = this;
  this->fields.animEndCall = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0LL);
  v9->fields.oldUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 208);
  LOBYTE(v9->fields.totalHpLabel) = 0;
  sub_1C21DDC((PartyOrganizationUtility_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
  breakHpDownSeName = (UnityEngine_Component_o *)v9[-1].fields.breakHpDownSeName;
  if ( !breakHpDownSeName
    || (breakHpDownSeName = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(breakHpDownSeName, 0LL)) == 0LL )
  {
    sub_1C22094(breakHpDownSeName, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakHpDownSeName, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_1(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bossIconSp; // x0

  bossIconSp = (UnityEngine_Component_o *)this->fields.bossIconSp;
  if ( !bossIconSp
    || (bossIconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bossIconSp, 0LL)) == 0LL )
  {
    sub_1C22094(bossIconSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_2(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *animEndCall; // x20
  TitleInfoPersonalBossComponent_o *v9; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  animEndCall = this->fields.animEndCall;
  v9 = this;
  this->fields.animEndCall = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0LL);
  v9->fields.oldUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 208);
  LOBYTE(v9->fields.totalHpLabel) = 0;
  sub_1C21DDC((PartyOrganizationUtility_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
}


void __fastcall TitleInfoPersonalBossComponent___PlayGaugeBreakEffect_b__66_0(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(this, method);
  TitleInfoPersonalBossComponent__PlayHpRecoverEffect(this, v3);
}


void __fastcall TitleInfoPersonalBossComponent___PlayGaugeBreakEffect_b__66_1(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(this, method);
  TitleInfoPersonalBossComponent__PlayHpRecoverEffect(this, v3);
}


void __fastcall TitleInfoPersonalBossComponent___Setup_b__48_0(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  TitleInfoPersonalBossComponent__LoadLocalAtlas(this, this->fields.eventId, v2);
  TitleInfoPersonalBossComponent__SetDisp(this, v4);
}


bool __fastcall TitleInfoPersonalBossComponent__get_IsPlayedDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlayedDamageAnimation_k__BackingField;
}


void __fastcall TitleInfoPersonalBossComponent__set_IsPlayedDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlayedDamageAnimation_k__BackingField = value;
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass55_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass55_0___LoadEventUIAssetData_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *_4__this; // x0

  _4__this = (PartyOrganizationUtility_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, data);
  _4__this[1].klass = (PartyOrganizationUtility_c *)data;
  sub_1C21DDC(_4__this + 1, (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass65_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass65_0___PlayHpCut_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  struct TitleInfoPersonalBossComponent_o *_4__this; // x8
  TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *v4; // x19
  float mNow; // s0
  float v6; // s1
  bool v7; // nf
  float v8; // s0
  float v9; // s8
  double v10; // d0
  int64_t v11; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_11;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this )
    goto LABEL_11;
  mNow = easingObj->fields.mNow;
  this = (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)_4__this->fields.hpBarSlider;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  if ( !this
    || (v9 = _4__this->fields.HPfrom + (float)(v8 * (float)(_4__this->fields.HPto - _4__this->fields.HPfrom)),
        UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0LL),
        (this = (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1C22094(this, method);
  }
  v10 = v9 * (double)v4->fields.maxHp;
  if ( v10 == INFINITY )
    v11 = 0x8000000000000000LL;
  else
    v11 = (__int64)v10;
  TitleInfoPersonalBossComponent__SetTotalHpText((TitleInfoPersonalBossComponent_o *)this, v11, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass65_0___PlayHpCut_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(_4__this, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *v3; // x8
  float mNow; // s0
  float v5; // s3
  bool v6; // nf
  float v7; // s0
  double v8; // d0
  int64_t v9; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v3 = this, (this = (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C22094(this, method);
  }
  mNow = easingObj->fields.mNow;
  v5 = fminf(mNow, 1.0);
  v6 = mNow < 0.0;
  v7 = 0.0;
  if ( !v6 )
    v7 = v5;
  v8 = (double)v3->fields.maxHp
     * (float)(*(float *)&this[4].klass
             + (float)(v7 * (float)(*((float *)&this[4].klass + 1) - *(float *)&this[4].klass)));
  if ( v8 == INFINITY )
    v9 = 0x8000000000000000LL;
  else
    v9 = (__int64)v8;
  TitleInfoPersonalBossComponent__SetTotalHpText((TitleInfoPersonalBossComponent_o *)this, v9, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0
  struct TitleInfoPersonalBossComponent_o *v4; // x20
  float breakEffectEndrWaitTime; // s8
  System_Action_o *_9__2; // x22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_4BDB0F2 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__);
    byte_4BDB0F2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, 0LL),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_1C22094(_4__this, method);
  }
  breakEffectEndrWaitTime = v4->fields.breakEffectEndrWaitTime;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v7, v8, v9, v10, v11, v12);
  }
  v13 = BasicHelper__DelayCall(breakEffectEndrWaitTime, _9__2, 1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v4, v13, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, 0LL);
}