void __fastcall TitleInfoPersonalBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct TitleInfoPersonalBossComponent_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct TitleInfoPersonalBossComponent_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B14CF1 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoPersonalBossComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_14649/*"TitleInfoEventSuperBossEffect_Dead"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19467/*"event_superboss_icon_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_14648/*"TitleInfoEventSuperBossEffect_Break"*/, v12, v13);
    byte_4B14CF1 = 1;
  }
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19467/*"event_superboss_icon_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields,
    StringLiteral_19467/*"event_superboss_icon_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_14649/*"TitleInfoEventSuperBossEffect_Dead"*/;
  static_fields = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14649/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
    v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = StringLiteral_14648/*"TitleInfoEventSuperBossEffect_Break"*/;
  v23 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v23->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14648/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v23->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
    v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x1
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B14CF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_17053/*"ar60"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17048/*"ar210"*/, v13, v14);
    byte_4B14CF0 = 1;
  }
  v15 = StringLiteral_17053/*"ar60"*/;
  this->fields.breakEffectBeforeSeName = (struct System_String_o *)StringLiteral_17053/*"ar60"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.breakEffectBeforeSeName, v15, v2, v3, v4, v5, v6, v7);
  v16 = StringLiteral_17048/*"ar210"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_17048/*"ar210"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.breakHpDownSeName, v16, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v26;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.atlasList, (int64_t)v26, v27, v28, v29, v30, v31, v32);
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


// local variable allocation has failed, the output may be wrong!
UserSuperBossEntity_o *__fastcall TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(
        int32_t eventId,
        int32_t id,
        int64_t damange,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UserSuperBossEntity_o *v9; // x22
  __int64 v10; // x1
  int64_t UserId; // x0
  __int64 v12; // x1

  if ( (byte_4B14CEF & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&id, damange);
    sub_1BCA7E0(&UserSuperBossEntity_TypeInfo, v7, v8);
    byte_4B14CEF = 1;
  }
  v9 = (UserSuperBossEntity_o *)sub_1BCAA2C(UserSuperBossEntity_TypeInfo, *(_QWORD *)&id, damange, method);
  UserSuperBossEntity___ctor(v9, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v9 )
    sub_1BCAA3C(UserId, v12);
  v9->fields.userId = UserId;
  v9->fields.eventId = eventId;
  v9->fields.superBossId = id;
  v9->fields.damage = damange;
  return v9;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  TitleInfoPersonalBossComponent_c *v11; // x0
  System_String_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  int32_t id; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14CE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, mapAssetData, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_16781/*"_{0}{1:D2}"*/, v9, v10);
    byte_4B14CE6 = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v11 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, mapAssetData);
    v11 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  v12 = System_String__Concat_62401220(
          v11->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16781/*"_{0}{1:D2}"*/,
          0LL);
  eventId = this->fields.eventId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    sub_1BCAA3C(v13, v14);
  v16 = (Il2CppObject *)v13;
  id = eventSuperBossEntity->fields.id;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v18 = System_String__Format_62415592(v12, v16, v17, 0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49237568(
                                       mapAssetData,
                                       v18,
                                       (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
}


UserSuperBossEntity_o *__fastcall TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w20
  int64_t OrtLatePhaseBreak; // x21
  __int64 v12; // x1
  BalanceConfig_c *v13; // x0
  struct BalanceConfig_StaticFields *v14; // x8
  int32_t v15; // w20
  int64_t OrtLatePhaseDead; // x21
  EventSuperBossEntity_o *IsOpen; // x0
  const MethodInfo *v18; // x3
  struct System_Int64_array *hpList; // x11
  unsigned __int64 max_length; // x8
  __int64 v21; // x10
  int64_t v22; // x20
  __int64 v23; // x9
  __int64 v24; // x10
  int64_t *m_Items; // x11
  int64_t v26; // x12
  BalanceConfig_c *v27; // x0
  struct BalanceConfig_StaticFields *v28; // x8
  int32_t v29; // w20
  int64_t v30; // x21
  BalanceConfig_c *v31; // x0
  struct BalanceConfig_StaticFields *v32; // x8
  int32_t v33; // w20
  int32_t v34; // w21
  struct System_Int64_array *v35; // x11
  unsigned __int64 v36; // x8
  unsigned __int64 v37; // x9
  int64_t *v38; // x11
  int64_t v39; // x12
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  int32_t id; // w19
  int32_t eventId; // w21

  if ( (byte_4B14CEE & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent_TypeInfo, v6, v7);
    byte_4B14CEE = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseBreak = static_fields->OrtLatePhaseBreak;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  if ( !CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseBreak, 0, 0LL, 0LL) )
    goto LABEL_19;
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12);
    v13 = BalanceConfig_TypeInfo;
  }
  v14 = v13->static_fields;
  v15 = v14->OrtLateQuestId;
  OrtLatePhaseDead = v14->OrtLatePhaseDead;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
  IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v15, OrtLatePhaseDead, 0, 0LL, 0LL);
  if ( ((unsigned __int8)IsOpen & 1) != 0 )
  {
    hpList = this->fields.hpList;
    if ( !hpList )
      goto LABEL_43;
    max_length = hpList->max_length;
    v21 = (max_length << 32) - 0x100000000LL;
    if ( v21 >= 1 )
    {
      v22 = 0LL;
      v23 = 0LL;
      v24 = v21 >> 32;
      m_Items = hpList->m_Items;
      while ( v23 < max_length )
      {
        v26 = m_Items[v23++];
        v22 += v26;
        if ( v23 >= v24 )
          goto LABEL_38;
      }
      goto LABEL_42;
    }
  }
  else
  {
LABEL_19:
    v27 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12);
      v27 = BalanceConfig_TypeInfo;
    }
    v28 = v27->static_fields;
    v29 = v28->OrtLateQuestId;
    v30 = v28->OrtLatePhaseDead;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
    if ( !CondType__IsOpen(46, v29, v30, 0, 0LL, 0LL) )
      goto LABEL_35;
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12);
      v31 = BalanceConfig_TypeInfo;
    }
    v32 = v31->static_fields;
    v33 = v32->OrtLateQuestId;
    v34 = v32->OrtLatePhaseDead;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v12);
    IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v33, v34 + 1, 0, 0LL, 0LL);
    if ( ((unsigned __int8)IsOpen & 1) == 0 )
    {
LABEL_35:
      IsOpen = this->fields.eventSuperBossEntity;
      if ( IsOpen )
        return EventSuperBossEntity__GetUserSuperBossEntity(IsOpen, 0LL);
LABEL_43:
      sub_1BCAA3C(IsOpen, v12);
    }
    v35 = this->fields.hpList;
    if ( !v35 )
      goto LABEL_43;
    v36 = v35->max_length;
    if ( (__int64)(v36 << 32) >= 1 )
    {
      v22 = 0LL;
      v37 = 0LL;
      v38 = v35->m_Items;
      while ( v37 < v36 )
      {
        v39 = v38[v37++];
        v22 += v39;
        if ( (__int64)v37 >= (int)v36 )
          goto LABEL_38;
      }
LABEL_42:
      sub_1BCAA44(IsOpen, v12);
    }
  }
  v22 = 0LL;
LABEL_38:
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_43;
  eventId = eventSuperBossEntity->fields.eventId;
  id = eventSuperBossEntity->fields.id;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v12);
  return TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(eventId, id, v22, v18);
}


System_String_o *__fastcall TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B14CDE & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v4, v5);
    byte_4B14CDE = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4B14CE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, name, method);
    byte_4B14CE4 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49237568(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  int v4; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  TitleInfoPersonalBossComponent_c *v9; // x0
  System_String_o *SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x1

  v4 = (int)this;
  if ( (byte_4B14CE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, mapAssetData, method);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_16290/*"_"*/, v7, v8);
    byte_4B14CE8 = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v9 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, mapAssetData);
    v9 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = v9->static_fields->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB;
  v11 = System_Int32__ToString(v4 + 184, 0LL);
  v12 = System_String__Concat_62412480(
          SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16290/*"_"*/,
          v11,
          0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__49237568(
                                       mapAssetData,
                                       v12,
                                       (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
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
  __int64 v2; // x2
  TerminalSceneComponent_c *dispRoot; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4B14CDA & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B14CDA = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  dispRoot = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    dispRoot = TerminalSceneComponent_TypeInfo;
  }
  mInstance = dispRoot->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL
    || (dispRoot = (TerminalSceneComponent_c *)mTerminalMap->fields.dispRoot) == 0LL )
  {
    sub_1BCAA3C(dispRoot, method);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  BalanceConfig_c *v5; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w19
  int64_t OrtLatePhaseDead; // x20

  if ( (byte_4B14CED & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v3, v4);
    byte_4B14CED = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v5 = BalanceConfig_TypeInfo;
  }
  static_fields = v5->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseDead = static_fields->OrtLatePhaseDead;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseDead, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__LoadEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1
  System_String_o *EventUIAssetDataPath; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  AssetLoader_LoadEndDataHandler_o *v35; // x20
  __int64 v36; // x1

  if ( (byte_4B14CDF & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, callback);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__, v11, v12);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo, v13, v14);
    byte_4B14CDF = 1;
  }
  v15 = sub_1BCAA2C(
          TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo,
          *(_QWORD *)&eventId,
          callback,
          method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)callback, v24, v25, v26, v27, v28, v29);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v30);
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v30);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33, v34);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v15,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v35, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v15 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__LoadLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v19; // w9
  int i; // w28
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  __int64 v26; // x1
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  __int64 v28; // x1
  Il2CppObject *Component_object; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v39; // x8
  int32_t v40; // [xsp+8h] [xbp-58h] BYREF
  int v41; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4B14CE0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_25200/*"{0:D2}"*/, v13, v14);
    this = (TitleInfoPersonalBossComponent_o *)sub_1BCA7E0(&StringLiteral_5455/*"DownloadEventUIAtlas{0}{1}"*/, v15, v16);
    byte_4B14CE0 = 1;
  }
  if ( v4->fields.assetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1BCAA3C(this, *(_QWORD *)&eventId);
    size = atlasList->fields._size;
    v19 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v19;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v41 = i;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v22 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25200/*"{0:D2}"*/, v21, 0LL);
      v40 = eventId;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
      v24 = System_String__Format_62415592((System_String_o *)StringLiteral_5455/*"DownloadEventUIAtlas{0}{1}"*/, v23, v22, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v24,
                                                                 v25);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (TitleInfoPersonalBossComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v36 = *(_QWORD *)&this->fields.m_CachedPtr;
      v37 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v36 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v36 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = v36 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v39 + 32) = Component_object;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)Component_object, v30, v31, v32, v33, v34, v35);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0LL);
  this->fields.isGaugeBreak = 0;
  this->fields.oldUserBossEnt = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldUserBossEnt, 0LL, v10, v11, v12, v13, v14, v15);
  TitleInfoPersonalBossComponent__SetDisp(this, v16);
}


void __fastcall TitleInfoPersonalBossComponent__PlayClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Object_o *clearBossEffect; // x20
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  Il2CppObject *Component_object; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  TitleInfoPersonalBossComponent_c *v28; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v30; // x20
  System_Collections_IEnumerator_o *v31; // x1
  System_Action_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B14CE7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__, v10, v11);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__, v12, v13);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__, v14, v15);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent_TypeInfo, v16, v17);
    byte_4B14CE7 = 1;
  }
  clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v20 = (Il2CppObject *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    v21 = UnityEngine_Object__Instantiate_object_(
            v20,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v21, (UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v21, 0LL);
    if ( v21 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v21,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        v28 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v25);
          v28 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v28->static_fields->CLEAR_CALLBACK_DELAY;
        v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
        System_Action___ctor(
          v30,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0LL);
        v31 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v30, 1, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v31, 0LL);
        return;
      }
      v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
      System_Action___ctor(
        v32,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0LL);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v32, 0LL);
        v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
        System_Action___ctor(
          v36,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0LL);
        Component_object[2].monitor = v36;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&Component_object[2].monitor,
          (int64_t)v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        return;
      }
    }
    sub_1BCAA3C(v22, v23);
  }
}


void __fastcall TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *gaugeBreakEffect; // x20
  const MethodInfo *v15; // x1
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  struct UISprite_array *breakIconList; // x8
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  bool v23; // w22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x0
  System_Action_o *v28; // x20
  System_Collections_IEnumerator_o *v29; // x1

  if ( (byte_4B14CEA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__, v10, v11);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__, v12, v13);
    byte_4B14CEA = 1;
  }
  gaugeBreakEffect = (UnityEngine_Object_o *)this->fields.gaugeBreakEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
  {
    TitleInfoPersonalBossComponent__OnEndAnimation(this, v15);
    return;
  }
  v16 = (Il2CppObject *)this->fields.gaugeBreakEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v17 = UnityEngine_Object__Instantiate_object_(
          v16,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_17;
  if ( !breakIconList->max_length )
    sub_1BCAA44(v17, v18);
  v20 = (UnityEngine_GameObject_o *)v17;
  v17 = (Il2CppObject *)breakIconList->m_Items[0];
  if ( !v17 )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
  GameObjectExtensions__SafeSetParent_34336992(v20, gameObject, 0LL);
  GameObjectExtensions__ResetLocalPosition(v20, 0LL);
  if ( !v20 )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v20,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v23 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  v28 = v27;
  if ( v23 )
  {
    System_Action___ctor(
      v27,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0LL);
    v29 = BasicHelper__DelayCall(0.533, v28, 1, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v29, 0LL);
    return;
  }
  System_Action___ctor(
    v27,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0LL);
  if ( !Component_object )
LABEL_17:
    sub_1BCAA3C(v17, v18);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v28, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpCut(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  TitleInfoPersonalBossComponent_c *v39; // x0
  EasingObject_o *v40; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x22

  if ( (byte_4B14CE9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5, v6);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent_PlayHpCut__, v7, v8);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__, v11, v12);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__, v13, v14);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo, v15, v16);
    byte_4B14CE9 = 1;
  }
  v17 = sub_1BCAA2C(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_12;
  *(_QWORD *)(v17 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 32) = this->fields.oldMaxHp;
  if ( !System_String__IsNullOrEmpty(this->fields.breakHpDownSeName, 0LL) )
  {
    v26 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1BCA7F8(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
    OverwriteAssetSoundName__PlaySe(v27, this->fields.breakHpDownSeName, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)Component_object, v30, v31, v32, v33, v34, v35);
  v39 = TitleInfoPersonalBossComponent_TypeInfo;
  v40 = *(EasingObject_o **)(v17 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v36);
    v39 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v39->static_fields->ANIM_DURATION_HP_CUT;
  v42 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v17,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0LL);
  v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v17,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0LL);
  if ( !v40 )
LABEL_12:
    sub_1BCAA3C(v18, v19);
  EasingObject__Play(v40, ANIM_DURATION_HP_CUT, v42, v46, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t currentMaxHp; // x8
  int64_t currentDamage; // x9
  float v26; // s0
  float v27; // s1
  bool v28; // nf
  float v29; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  TitleInfoPersonalBossComponent_c *v41; // x0
  EasingObject_o *v42; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Action_o *v48; // x22

  if ( (byte_4B14CEB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5, v6);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__, v9, v10);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__, v11, v12);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo, v13, v14);
    byte_4B14CEB = 1;
  }
  v15 = sub_1BCAA2C(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_10;
  *(_QWORD *)(v15 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)this, v18, v19, v20, v21, v22, v23);
  currentMaxHp = this->fields.currentMaxHp;
  *(_QWORD *)(v15 + 32) = currentMaxHp;
  currentDamage = this->fields.currentDamage;
  v26 = 1.0 - (double)currentDamage / (double)currentMaxHp;
  v27 = fminf(v26, 1.0);
  v28 = v26 < 0.0;
  v29 = 0.0;
  if ( !v28 )
    v29 = v27;
  *(_QWORD *)(v15 + 40) = currentDamage;
  this->fields.HPfrom = 0.0;
  this->fields.HPto = v29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v15 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)Component_object, v32, v33, v34, v35, v36, v37);
  v41 = TitleInfoPersonalBossComponent_TypeInfo;
  v42 = *(EasingObject_o **)(v15 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v38);
    v41 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v41->static_fields->ANIM_DURATION_HP_CUT;
  v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
  System_Action___ctor(
    v44,
    (Il2CppObject *)v15,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0LL);
  v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v45, v46, v47);
  System_Action___ctor(
    v48,
    (Il2CppObject *)v15,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0LL);
  if ( !v42 )
LABEL_10:
    sub_1BCAA3C(v16, v17);
  EasingObject__Play(v42, ANIM_DURATION_HP_CUT, v44, v48, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseAssetData(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_assetData; // x19
  int32_t eventId; // w20
  __int64 v8; // x1
  System_String_o *EventUIAssetDataPath; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B14CE3 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent_TypeInfo, v4, v5);
    byte_4B14CE3 = 1;
  }
  p_assetData = (PartyOrganizationUtility_o *)&this->fields.assetData;
  if ( this->fields.assetData )
  {
    eventId = this->fields.eventId;
    if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, method);
    EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, method);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
    p_assetData->klass = 0LL;
    sub_1BCA784(p_assetData, 0LL, v10, v11, v12, v13, v14, v15);
  }
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoPersonalBossComponent_o *v3; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B14CE2 & 1) == 0 )
  {
    this = (TitleInfoPersonalBossComponent_o *)sub_1BCA7E0(
                                                 &Method_System_Collections_Generic_List_UIAtlas__Clear__,
                                                 method,
                                                 v2);
    byte_4B14CE2 = 1;
  }
  atlasList = v3->fields.atlasList;
  if ( !atlasList )
    sub_1BCAA3C(this, method);
  size = atlasList->fields._size;
  v6 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__SetDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  struct UserSuperBossEntity_o *CurrentUserSuperBossEntity; // x0
  struct UserSuperBossEntity_o **p_currentUserBossEnt; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  BalanceConfig_c *v33; // x0
  __int64 v34; // x8
  __int64 v35; // x24
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w21
  int64_t OrtLatePhaseSecondForm; // x22
  __int64 v39; // x1
  UILabel_o *Master_object; // x0
  int32_t eventId; // w21
  EventSuperBossMaster_o *v42; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  const MethodInfo *v46; // x2
  int32_t v47; // w21
  EventBossStatusUiMaster_o *v48; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  System_String_o *v51; // x21
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  const MethodInfo *v54; // x2
  struct EventSuperBossEntity_o *v55; // x8
  UILabel_o *bossName; // x21
  int v57; // s0
  struct System_Int64_array *hpList; // x8
  int max_length; // w9
  int v63; // w22
  int64_t v64; // x10
  int v65; // w12
  int32_t v66; // w21
  Il2CppClass **v67; // x11
  Il2CppClass *v68; // x11
  bool v69; // vf
  int64_t v70; // x11
  struct UserSuperBossEntity_o *currentUserBossEnt; // x10
  int v72; // w11
  Il2CppClass **v73; // x9
  Il2CppClass *v74; // x9
  int64_t v75; // x9
  struct EventSuperBossEntity_o *v76; // x8
  BalanceConfig_c *v77; // x0
  int32_t id; // w24
  TitleInfoPersonalBossComponent_o *v79; // x0
  const MethodInfo *v80; // x1
  float v81; // s8
  const MethodInfo *v82; // x2
  struct EventSuperBossEntity_o *v83; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  int64_t oldDamage; // d0
  int64_t oldMaxHp; // d1
  float v88; // s1
  bool v89; // nf
  float v90; // s0
  const MethodInfo *v91; // x2
  float v92; // s0
  float v93; // s1
  float v94; // s0
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x2
  const MethodInfo *v97; // x3
  UISprite_o *hpBarUnderSprite; // x20
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  const MethodInfo *v101; // x3
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v103; // x0
  System_String_o *v104; // x0
  const MethodInfo *v105; // x3
  const MethodInfo *v106; // x3
  const MethodInfo *v107; // x3
  const MethodInfo *v108; // x3
  EventSuperBossEntity_o *v109; // [xsp+0h] [xbp-60h] BYREF
  __int64 v110; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B14CDC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventSuperBossMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&TitleInfoPersonalBossComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_19466/*"event_superboss_hp_white"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_19419/*"event_raid_hp_back"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_19461/*"event_superboss_hp_lower_"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19420/*"event_raid_hp_frame"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_19465/*"event_superboss_hp_upper_"*/, v22, v23);
    byte_4B14CDC = 1;
  }
  v109 = 0LL;
  v110 = 0LL;
  CurrentUserSuperBossEntity = TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(this, method);
  this->fields.currentUserBossEnt = CurrentUserSuperBossEntity;
  p_currentUserBossEnt = &this->fields.currentUserBossEnt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentUserBossEnt,
    (int64_t)CurrentUserSuperBossEntity,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = BalanceConfig_TypeInfo;
  if ( this->fields.oldUserBossEnt )
    v34 = 208LL;
  else
    v34 = 216LL;
  v35 = *(__int64 *)((char *)&this->klass + v34);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v32);
    v33 = BalanceConfig_TypeInfo;
  }
  static_fields = v33->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseSecondForm = static_fields->OrtLatePhaseSecondForm;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v32);
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventId = this->fields.eventId;
    v42 = (EventSuperBossMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39);
    if ( !v42 )
      goto LABEL_98;
    if ( EventSuperBossMaster__TryGetEntity(
           v42,
           &v109,
           eventId,
           BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
           0LL) )
    {
      Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
      if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v39);
      if ( !v109 )
        goto LABEL_98;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v44 = System_Int32__ToString((int)v109 + 56, 0LL);
      v45 = System_String__Concat_62401220(SUPERBOSS_ICON_SPNAME_PREFIX, v44, 0LL);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v45, v46);
      if ( !v109 )
        goto LABEL_98;
      Master_object = this->fields.bossName;
      if ( !Master_object )
        goto LABEL_98;
      UILabel__set_text(Master_object, v109->fields.name, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v47 = this->fields.eventId;
    v48 = (EventBossStatusUiMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39);
    if ( !v48 )
      goto LABEL_98;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v48,
                                  v47,
                                  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
                                  0LL);
  }
  else
  {
    Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
    if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo, v39);
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity )
      goto LABEL_98;
    v51 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v52 = System_Int32__ToString((int)eventSuperBossEntity + 56, 0LL);
    v53 = System_String__Concat_62401220(v51, v52, 0LL);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v53, v54);
    v55 = this->fields.eventSuperBossEntity;
    if ( !v55 )
      goto LABEL_98;
    Master_object = this->fields.bossName;
    if ( !Master_object )
      goto LABEL_98;
    UILabel__set_text(Master_object, v55->fields.name, 0LL);
    EntityFromEventIdAndIndex = this->fields.eventBossStatusUiEntity;
  }
  bossName = this->fields.bossName;
  if ( EntityFromEventIdAndIndex )
  {
    v111.fields.r = 0.0;
    v111.fields.g = 0.0;
    v111.fields.b = 0.0;
    v111.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v57 = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v111, 0LL);
    if ( !bossName )
      goto LABEL_98;
  }
  else
  {
    Master_object = (UILabel_o *)this->fields.eventSuperBossEntity;
    if ( !Master_object )
      goto LABEL_98;
    *(UnityEngine_Color_o *)&v57 = EventSuperBossEntity__GetBossColor((EventSuperBossEntity_o *)Master_object, 0LL);
    if ( !bossName )
      goto LABEL_98;
  }
  UILabel__set_effectColor(bossName, *(UnityEngine_Color_o *)&v57, 0LL);
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
  v63 = max_length - 1;
  this->fields.maxBreakCount = max_length - 1;
  v64 = v35 ? *(_QWORD *)(v35 + 32) : 0LL;
  if ( max_length < 1 )
  {
    v70 = v64;
    v66 = max_length - 1;
  }
  else
  {
    v65 = 0;
    v66 = max_length - 1;
    while ( 1 )
    {
      v67 = &hpList->obj.klass + v65;
      this->fields.oldMaxHp = (int64_t)v67[4];
      v68 = v67[4];
      v69 = __OFSUB__(v64, v68);
      v70 = v64 - (_QWORD)v68;
      if ( v70 < 0 != v69 )
        break;
      --v66;
      ++v65;
      v64 = v70;
      if ( v66 == -1 )
        goto LABEL_53;
    }
    v70 = v64;
  }
LABEL_53:
  currentUserBossEnt = this->fields.currentUserBossEnt;
  this->fields.oldDamage = v70;
  if ( currentUserBossEnt )
    currentUserBossEnt = (struct UserSuperBossEntity_o *)currentUserBossEnt->fields.damage;
  if ( max_length >= 1 )
  {
    v72 = 0;
    while ( 1 )
    {
      v73 = &hpList->obj.klass + v72;
      this->fields.currentMaxHp = (int64_t)v73[4];
      v74 = v73[4];
      v69 = __OFSUB__(currentUserBossEnt, v74);
      v75 = (char *)currentUserBossEnt - (char *)v74;
      if ( v75 < 0 != v69 )
        break;
      --v63;
      ++v72;
      currentUserBossEnt = (struct UserSuperBossEntity_o *)v75;
      if ( v63 == -1 )
        goto LABEL_61;
    }
  }
  v75 = (int64_t)currentUserBossEnt;
LABEL_61:
  v76 = this->fields.eventSuperBossEntity;
  this->fields.currentDamage = v75;
  if ( !v76 )
    goto LABEL_98;
  v77 = BalanceConfig_TypeInfo;
  id = v76->fields.id;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v39);
    v77 = BalanceConfig_TypeInfo;
  }
  if ( id == v77->static_fields->OrtThirdFormId )
    this->fields.isGaugeBreak = v66 == 1 && v63 == 0;
  LODWORD(v110) = v66 + 1;
  HIDWORD(v110) = v66;
  Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
  if ( !Master_object
    || (Master_object = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)Master_object,
                                       0LL)) == 0LL )
  {
LABEL_98:
    sub_1BCAA3C(Master_object, v39);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v79, v80) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( Master_object )
    {
      v81 = 0.0;
      UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v82);
      Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
      if ( Master_object )
      {
        v66 = 0;
        goto LABEL_97;
      }
    }
    goto LABEL_98;
  }
  v83 = this->fields.eventSuperBossEntity;
  if ( v83
    && (oldUserBossEnt = this->fields.oldUserBossEnt) != 0LL
    && (maxHp = v83->fields.maxHp, oldUserBossEnt->fields.damage < maxHp)
    && (!*p_currentUserBossEnt || (*p_currentUserBossEnt)->fields.damage >= maxHp) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( !Master_object )
      goto LABEL_98;
    v81 = 0.0;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v96);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v66 > 0 )
      v81 = 1.0;
  }
  else if ( this->fields.isGaugeBreak )
  {
    oldMaxHp = this->fields.oldMaxHp;
    oldDamage = this->fields.oldDamage;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    this->fields.HPto = 0.0;
    *(float *)&oldDamage = 1.0 - (double)oldDamage / (double)oldMaxHp;
    v88 = fminf(*(float *)&oldDamage, 1.0);
    v89 = *(float *)&oldDamage < 0.0;
    v90 = 0.0;
    if ( !v89 )
      v90 = v88;
    this->fields.HPfrom = v90;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v90, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.oldMaxHp - this->fields.oldDamage, v91);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v66 <= 0 )
      v81 = 0.0;
    else
      v81 = 1.0;
  }
  else
  {
    LODWORD(v110) = v63 + 1;
    HIDWORD(v110) = v63;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    v92 = 1.0 - (double)this->fields.currentDamage / (double)this->fields.currentMaxHp;
    v93 = fminf(v92, 1.0);
    v89 = v92 < 0.0;
    v94 = 0.0;
    if ( !v89 )
      v94 = v93;
    this->fields.HPfrom = v94;
    this->fields.HPto = v94;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v94, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentMaxHp - this->fields.currentDamage, v95);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v63 <= 0 )
      v81 = 0.0;
    else
      v81 = 1.0;
    v66 = v63;
  }
LABEL_97:
  UIProgressBar__set_value((UIProgressBar_o *)Master_object, v81, 0LL);
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, this->fields.maxBreakCount, v66, v97);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v99 = System_Int32__ToString((int32_t)&v110 + 4, 0LL);
  v100 = System_String__Concat_62401220((System_String_o *)StringLiteral_19461/*"event_superboss_hp_lower_"*/, v99, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v100, v101);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v103 = System_Int32__ToString((int32_t)&v110, 0LL);
  v104 = System_String__Concat_62401220((System_String_o *)StringLiteral_19465/*"event_superboss_hp_upper_"*/, v103, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v104, v105);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.hpBarWhiteSprite,
    (System_String_o *)StringLiteral_19466/*"event_superboss_hp_white"*/,
    v106);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_19420/*"event_raid_hp_frame"*/,
    v107);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_19419/*"event_raid_hp_back"*/,
    v108);
}


bool __fastcall TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B14CE1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite, spriteName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v13, v14);
    byte_4B14CE1 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v24 = v23;
  do
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v17 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1BCAA3C(IsNullOrEmpty, v16);
    }
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1BCAA3C(v17, v18);
    v20 = UIAtlas__GetSprite((UIAtlas_o *)v24.fields._current, spriteName, 0LL);
  }
  while ( !v20 );
  if ( !sprite )
    sub_1BCAA3C(v20, v21);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall TitleInfoPersonalBossComponent__SetTotalHpText(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *totalHpLabel; // x20
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int64_t v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B14CEC & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, hp, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3805/*"COMMON_NUM_FORMAT"*/, v7, v8);
    byte_4B14CEC = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, hp);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"COMMON_NUM_FORMAT"*/, 0LL);
  v14 = hp;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  v12 = System_String__Format(v10, v11, 0LL);
  if ( !totalHpLabel )
    sub_1BCAA3C(v12, v13);
  UILabel__set_text(totalHpLabel, v12, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  EventBossStatusUiMaster_o *Master_object; // x0
  __int64 v25; // x1
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Int64_array *BreakGaugeHpList; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int32_t eventId; // w20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x3

  if ( (byte_4B14CDB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, superBossEntity, oldUserBossEnt);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, v15, v16);
    byte_4B14CDB = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventSuperBossEntity,
    (int64_t)superBossEntity,
    (int64_t)oldUserBossEnt,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.oldUserBossEnt = oldUserBossEnt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.oldUserBossEnt,
    (int64_t)oldUserBossEnt,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._IsPlayedDamageAnimation_k__BackingField = 0;
  if ( this->fields.eventSuperBossEntity )
  {
    this->fields.eventId = this->fields.eventSuperBossEntity->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
    Master_object = (EventBossStatusUiMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity
      || !Master_object
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_object,
                                        this->fields.eventId,
                                        eventSuperBossEntity->fields.id,
                                        0LL),
          this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.eventBossStatusUiEntity,
            (int64_t)EntityFromEventIdAndIndex,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33),
          (Master_object = (EventBossStatusUiMaster_o *)this->fields.eventSuperBossEntity) == 0LL) )
    {
      sub_1BCAA3C(Master_object, v25);
    }
    BreakGaugeHpList = EventSuperBossEntity__GetBreakGaugeHpList((EventSuperBossEntity_o *)Master_object, 0LL);
    this->fields.hpList = BreakGaugeHpList;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.hpList,
      (int64_t)BreakGaugeHpList,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    eventId = this->fields.eventId;
    v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0LL);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventId, v45, v46);
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
    sub_1BCAA3C(v6, v7);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct UISprite_array *breakIconList; // x8
  int max_length; // w22
  il2cpp_array_size_t v13; // w20
  int v14; // w23
  il2cpp_array_size_t v15; // w9
  __int64 v16; // x26
  struct UISprite_array *v17; // x8
  UISprite_o *v18; // x22
  System_String_o *v19; // x0
  System_String_o *v20; // x2
  TitleInfoPersonalBossComponent_o *v21; // x0
  UISprite_o *v22; // x1
  struct UISprite_array *v23; // x8
  struct UISprite_array *v24; // x8
  long double v25; // q0
  TitleInfoPersonalBossComponent_c *klass; // x8
  int v27; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4B14CDD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19458/*"event_superboss_hp_icon_0"*/, *(_QWORD *)&maxCount, *(_QWORD *)&restCount);
    sub_1BCA7E0(&StringLiteral_19459/*"event_superboss_hp_icon_11"*/, v7, v8);
    this = (TitleInfoPersonalBossComponent_o *)sub_1BCA7E0(&StringLiteral_19457/*"event_superboss_hp_icon_"*/, v9, v10);
    byte_4B14CDD = 1;
  }
  v27 = 0;
  breakIconList = v6->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_36;
  max_length = breakIconList->max_length;
  if ( restCount <= 9 )
  {
    v14 = max_length - 1;
    if ( max_length < 1 )
    {
LABEL_33:
      TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        v6,
        v6->fields.breakIcon_11,
        (System_String_o *)StringLiteral_19459/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
      if ( this )
      {
        klass = this->klass;
        LODWORD(v25) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_1BCAA3C(this, *(_QWORD *)&maxCount);
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= breakIconList->max_length )
        goto LABEL_37;
      v16 = (int)v15;
      this = (TitleInfoPersonalBossComponent_o *)breakIconList->m_Items[v15];
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)v16 < restCount )
        break;
      if ( (int)v16 < maxCount )
      {
        v23 = v6->fields.breakIconList;
        if ( !v23 )
          goto LABEL_36;
        if ( (unsigned int)v16 >= v23->max_length )
          goto LABEL_37;
        v22 = v23->m_Items[v16];
        v20 = (System_String_o *)StringLiteral_19458/*"event_superboss_hp_icon_0"*/;
        v21 = v6;
        goto LABEL_24;
      }
LABEL_28:
      if ( v14 == (_DWORD)v16 )
        goto LABEL_33;
      breakIconList = v6->fields.breakIconList;
      v15 = v16 + 1;
      if ( !breakIconList )
        goto LABEL_36;
    }
    v17 = v6->fields.breakIconList;
    if ( !v17 )
      goto LABEL_36;
    if ( (unsigned int)v16 >= v17->max_length )
      goto LABEL_37;
    v18 = v17->m_Items[v16];
    v27 = v16 + 2;
    v19 = System_Int32__ToString((int32_t)&v27, 0LL);
    v20 = System_String__Concat_62401220((System_String_o *)StringLiteral_19457/*"event_superboss_hp_icon_"*/, v19, 0LL);
    v21 = v6;
    v22 = v18;
LABEL_24:
    this = (TitleInfoPersonalBossComponent_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
                                                 v21,
                                                 v22,
                                                 v20,
                                                 method);
    v24 = v6->fields.breakIconList;
    if ( !v24 )
      goto LABEL_36;
    if ( (unsigned int)v16 >= v24->max_length )
      goto LABEL_37;
    this = (TitleInfoPersonalBossComponent_o *)v24->m_Items[v16];
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
    v13 = 0;
    while ( v13 < breakIconList->max_length )
    {
      this = (TitleInfoPersonalBossComponent_o *)breakIconList->m_Items[v13];
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( max_length == ++v13 )
        goto LABEL_31;
      breakIconList = v6->fields.breakIconList;
      if ( !breakIconList )
        goto LABEL_36;
    }
LABEL_37:
    sub_1BCAA44(this, *(_QWORD *)&maxCount);
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v6,
    v6->fields.breakIcon_11,
    (System_String_o *)StringLiteral_19459/*"event_superboss_hp_icon_11"*/,
    method);
  this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
  if ( !this )
    goto LABEL_36;
  klass = this->klass;
  LODWORD(v25) = 1.0;
LABEL_35:
  ((void (__fastcall *)(long double))klass[1]._1.namespaze)(v25);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9
  __int64 v21; // x1
  UnityEngine_Object_o *clearBossEffect; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  UnityEngine_GameObject_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  UnityEngine_Object_o *gaugeBreakEffect; // x21
  const MethodInfo *v34; // x2
  UnityEngine_GameObject_o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  float breakEffectStartWaitTime; // s8
  System_Action_o *v48; // x20
  System_Collections_IEnumerator_o *v49; // x1

  v10 = this;
  if ( (byte_4B14CE5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, mapAssetData, callback);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__, v13, v14);
    this = (TitleInfoPersonalBossComponent_o *)sub_1BCA7E0(
                                                 &Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
                                                 v15,
                                                 v16);
    byte_4B14CE5 = 1;
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
    sub_1BCA784(
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
    {
      v25 = TitleInfoPersonalBossComponent__GetClearBossEffect(v10, mapAssetData, v24);
      v10->fields.clearBossEffect = v25;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v10->fields.clearBossEffect,
        (int64_t)v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    TitleInfoPersonalBossComponent__PlayClearBossEffect(v10, v23);
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
    sub_1BCA784(
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
    {
      v35 = TitleInfoPersonalBossComponent__GetGaugeBreakEffect(v10, mapAssetData, v34);
      v10->fields.gaugeBreakEffect = v35;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v10->fields.gaugeBreakEffect,
        (int64_t)v35,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    if ( !System_String__IsNullOrEmpty(v10->fields.breakEffectBeforeSeName, 0LL) )
    {
      v45 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 83) & 2) != 0 )
        v45 = (_QWORD *)sub_1BCA7F8(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v46 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v45, v45[4]);
      OverwriteAssetSoundName__PlaySe(v46, v10->fields.breakEffectBeforeSeName, 0LL);
    }
    breakEffectStartWaitTime = v10->fields.breakEffectStartWaitTime;
    v48 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v10,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0LL);
    v49 = BasicHelper__DelayCall(breakEffectStartWaitTime, v48, 1, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v10, v49, 0LL);
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
    sub_1BCAA3C(this, method);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0LL);
  v9->fields.oldUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 208);
  LOBYTE(v9->fields.totalHpLabel) = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
  breakHpDownSeName = (UnityEngine_Component_o *)v9[-1].fields.breakHpDownSeName;
  if ( !breakHpDownSeName
    || (breakHpDownSeName = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(breakHpDownSeName, 0LL)) == 0LL )
  {
    sub_1BCAA3C(breakHpDownSeName, v16);
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
    sub_1BCAA3C(bossIconSp, method);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animEndCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animEndCall, 0LL);
  v9->fields.oldUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 208);
  LOBYTE(v9->fields.totalHpLabel) = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
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
  struct TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, data);
  _4__this->fields.assetData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.assetData,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  const MethodInfo *v10; // x2
  double v11; // d0
  int64_t v12; // x1

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
    sub_1BCAA3C(this, method);
  }
  v11 = v9 * (double)v4->fields.maxHp;
  if ( v11 == INFINITY )
    v12 = 0x8000000000000000LL;
  else
    v12 = (__int64)v11;
  TitleInfoPersonalBossComponent__SetTotalHpText((TitleInfoPersonalBossComponent_o *)this, v12, v10);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass65_0___PlayHpCut_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(_4__this, method);
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
  const MethodInfo *v2; // x2
  struct EasingObject_o *easingObj; // x9
  TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *v4; // x8
  float mNow; // s0
  float v6; // s3
  bool v7; // nf
  float v8; // s0
  double v9; // d0
  int64_t v10; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v4 = this, (this = (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  mNow = easingObj->fields.mNow;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  v9 = (double)v4->fields.maxHp
     * (float)(*(float *)&this[4].klass
             + (float)(v8 * (float)(*((float *)&this[4].klass + 1) - *(float *)&this[4].klass)));
  if ( v9 == INFINITY )
    v10 = 0x8000000000000000LL;
  else
    v10 = (__int64)v9;
  TitleInfoPersonalBossComponent__SetTotalHpText((TitleInfoPersonalBossComponent_o *)this, v10, v2);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TitleInfoPersonalBossComponent_o *_4__this; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  struct TitleInfoPersonalBossComponent_o *v9; // x20
  float breakEffectEndrWaitTime; // s8
  System_Action_o *_9__2; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_4B14CF2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__, v4, v5);
    byte_4B14CF2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, v2),
        (v9 = this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  breakEffectEndrWaitTime = v9->fields.breakEffectEndrWaitTime;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v7, v8);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v12, v13, v14, v15, v16, v17);
  }
  v18 = BasicHelper__DelayCall(breakEffectEndrWaitTime, _9__2, 1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v9, v18, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, method);
}