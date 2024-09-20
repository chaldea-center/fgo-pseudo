void __fastcall TitleInfoPersonalBossComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct TitleInfoPersonalBossComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct TitleInfoPersonalBossComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A59C97 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_14485/*"TitleInfoEventSuperBossEffect_Dead"*/);
    sub_1B885B0(&StringLiteral_19266/*"event_superboss_icon_"*/);
    sub_1B885B0(&StringLiteral_14484/*"TitleInfoEventSuperBossEffect_Break"*/);
    byte_4A59C97 = 1;
  }
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19266/*"event_superboss_icon_"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields,
    StringLiteral_19266/*"event_superboss_icon_"*/,
    v1,
    v2);
  v3 = StringLiteral_14485/*"TitleInfoEventSuperBossEffect_Dead"*/;
  static_fields = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14485/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB, v3, v5, v6);
  v7 = StringLiteral_14484/*"TitleInfoEventSuperBossEffect_Break"*/;
  v8 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v8->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14484/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB, v7, v9, v10);
  *(_QWORD *)&TitleInfoPersonalBossComponent_TypeInfo->static_fields->ANIM_DURATION_HP_CUT = 0x400000003FC00000LL;
}


void __fastcall TitleInfoPersonalBossComponent___ctor(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A59C96 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1B885B0(&StringLiteral_16882/*"ar60"*/);
    sub_1B885B0(&StringLiteral_16877/*"ar210"*/);
    byte_4A59C96 = 1;
  }
  v5 = StringLiteral_16882/*"ar60"*/;
  this->fields.breakEffectBeforeSeName = (struct System_String_o *)StringLiteral_16882/*"ar60"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.breakEffectBeforeSeName, v5, v2, v3);
  v6 = StringLiteral_16877/*"ar210"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_16877/*"ar210"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.breakHpDownSeName, v6, v7, v8);
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)v9, v10, v11);
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
  int64_t UserId; // x0
  __int64 v9; // x1

  if ( (byte_4A59C95 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserSuperBossEntity_TypeInfo);
    byte_4A59C95 = 1;
  }
  v7 = (UserSuperBossEntity_o *)sub_1B887FC(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v7, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v7 )
    sub_1B8880C(UserId, v9);
  v7->fields.userId = UserId;
  v7->fields.eventId = eventId;
  v7->fields.superBossId = id;
  v7->fields.damage = damange;
  return v7;
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

  if ( (byte_4A59C8C & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_16612/*"_{0}{1:D2}"*/);
    byte_4A59C8C = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v5 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v5 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  v6 = System_String__Concat_61707032(
         v5->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16612/*"_{0}{1:D2}"*/,
         0LL);
  eventId = this->fields.eventId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v7, v8, v9);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    sub_1B8880C(v10, v11);
  v16 = (Il2CppObject *)v10;
  id = eventSuperBossEntity->fields.id;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v12, v13, v14);
  v18 = System_String__Format_61721404(v6, v16, v17, 0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48635516(
                                       mapAssetData,
                                       v18,
                                       (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
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

  if ( (byte_4A59C94 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4A59C94 = 1;
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
      sub_1B8880C(IsOpen, v12);
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
      sub_1B88814(IsOpen, v12);
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

  if ( (byte_4A59C84 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_6234/*"EventUI/Prefabs/{0}"*/);
    byte_4A59C84 = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6234/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4A59C8A & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    byte_4A59C8A = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48635516(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
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
  if ( (byte_4A59C8E & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A59C8E = 1;
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
  v8 = System_String__Concat_61718292(
         SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16123/*"_"*/,
         v7,
         0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48635516(
                                       mapAssetData,
                                       v8,
                                       (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
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

  if ( (byte_4A59C80 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A59C80 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
    sub_1B8880C(dispRoot, method);
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

  if ( (byte_4A59C93 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A59C93 = 1;
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v16; // x20

  if ( (byte_4A59C85 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__);
    sub_1B885B0(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
    byte_4A59C85 = 1;
  }
  v7 = sub_1B887FC(TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v14);
  v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v16, 1, 0LL) )
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
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v26; // x8
  int32_t v27; // [xsp+8h] [xbp-58h] BYREF
  int v28; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4A59C86 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24945/*"{0:D2}"*/);
    this = (TitleInfoPersonalBossComponent_o *)sub_1B885B0(&StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4A59C86 = 1;
  }
  if ( v6->fields.assetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1B8880C(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v9 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v9;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v28 = i;
      v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, size, v3, v4);
      v12 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24945/*"{0:D2}"*/, v11, 0LL);
      v27 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v13, v14, v15);
      v17 = System_String__Format_61721404((System_String_o *)StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v16, v12, 0LL);
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (TitleInfoPersonalBossComponent_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v23 = *(_QWORD *)&this->fields.m_CachedPtr;
      v24 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v23 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v23 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = v23 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v26 + 32) = Component_object;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 32), (int32_t)Component_object, v21, v22);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_Action_o *animEndCall; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  this->fields.isGaugeBreak = 0;
  this->fields.oldUserBossEnt = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.oldUserBossEnt, 0, v6, v7);
  TitleInfoPersonalBossComponent__SetDisp(this, v8);
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
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A59C8D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__);
    sub_1B885B0(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4A59C8D = 1;
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
           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v5, (UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v5, 0LL);
    if ( v5 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v5,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        v9 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
          v9 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v9->static_fields->CLEAR_CALLBACK_DELAY;
        v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0LL);
        v12 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v11, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
        return;
      }
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0LL);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v13, 0LL);
        v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0LL);
        Component_object[2].monitor = v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v14, v15, v16);
        return;
      }
    }
    sub_1B8880C(v6, v7);
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

  if ( (byte_4A59C90 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__);
    byte_4A59C90 = 1;
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
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_17;
  if ( !breakIconList->max_length )
    sub_1B88814(v6, v7);
  v9 = (UnityEngine_GameObject_o *)v6;
  v6 = (Il2CppObject *)breakIconList->m_Items[0];
  if ( !v6 )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  GameObjectExtensions__SafeSetParent_33730068(v9, gameObject, 0LL);
  GameObjectExtensions__ResetLocalPosition(v9, 0LL);
  if ( !v9 )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  v14 = v13;
  if ( v12 )
  {
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0LL);
    v15 = BasicHelper__DelayCall(0.533, v14, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
    return;
  }
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0LL);
  if ( !Component_object )
LABEL_17:
    sub_1B8880C(v6, v7);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v14, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpCut(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  TitleInfoPersonalBossComponent_c *v14; // x0
  EasingObject_o *v15; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v17; // x21
  System_Action_o *v18; // x22

  if ( (byte_4A59C8F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    sub_1B885B0(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__);
    sub_1B885B0(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
    byte_4A59C8F = 1;
  }
  v3 = sub_1B887FC(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_12;
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  *(_QWORD *)(v3 + 32) = this->fields.oldMaxHp;
  if ( !System_String__IsNullOrEmpty(this->fields.breakHpDownSeName, 0LL) )
  {
    v8 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B885C8(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
    OverwriteAssetSoundName__PlaySe(v9, this->fields.breakHpDownSeName, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)Component_object, v12, v13);
  v14 = TitleInfoPersonalBossComponent_TypeInfo;
  v15 = *(EasingObject_o **)(v3 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v14 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v14->static_fields->ANIM_DURATION_HP_CUT;
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0LL);
  v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0LL);
  if ( !v15 )
LABEL_12:
    sub_1B8880C(v4, v5);
  EasingObject__Play(v15, ANIM_DURATION_HP_CUT, v17, v18, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int64_t currentMaxHp; // x8
  int64_t currentDamage; // x9
  float v10; // s0
  float v11; // s1
  bool v12; // nf
  float v13; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  TitleInfoPersonalBossComponent_c *v18; // x0
  EasingObject_o *v19; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v21; // x21
  System_Action_o *v22; // x22

  if ( (byte_4A59C91 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__);
    sub_1B885B0(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
    byte_4A59C91 = 1;
  }
  v3 = sub_1B887FC(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  currentMaxHp = this->fields.currentMaxHp;
  *(_QWORD *)(v3 + 32) = currentMaxHp;
  currentDamage = this->fields.currentDamage;
  v10 = 1.0 - (double)currentDamage / (double)currentMaxHp;
  v11 = fminf(v10, 1.0);
  v12 = v10 < 0.0;
  v13 = 0.0;
  if ( !v12 )
    v13 = v11;
  *(_QWORD *)(v3 + 40) = currentDamage;
  this->fields.HPfrom = 0.0;
  this->fields.HPto = v13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)Component_object, v16, v17);
  v18 = TitleInfoPersonalBossComponent_TypeInfo;
  v19 = *(EasingObject_o **)(v3 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v18 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v18->static_fields->ANIM_DURATION_HP_CUT;
  v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0LL);
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0LL);
  if ( !v19 )
LABEL_10:
    sub_1B8880C(v4, v5);
  EasingObject__Play(v19, ANIM_DURATION_HP_CUT, v21, v22, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseAssetData(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_assetData; // x19
  int32_t eventId; // w20
  System_String_o *EventUIAssetDataPath; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A59C89 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4A59C89 = 1;
  }
  p_assetData = (ServantStatusBattleListViewItem_o *)&this->fields.assetData;
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
    sub_1B88554(p_assetData, 0, v6, v7);
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
  if ( (byte_4A59C88 & 1) == 0 )
  {
    this = (TitleInfoPersonalBossComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_4A59C88 = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1B8880C(this, method);
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
  int32_t v5; // w2
  int32_t v6; // w3
  BalanceConfig_c *v7; // x0
  __int64 v8; // x8
  __int64 v9; // x24
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w21
  int64_t OrtLatePhaseSecondForm; // x22
  __int64 v13; // x1
  UILabel_o *Master_object; // x0
  int32_t eventId; // w21
  EventSuperBossMaster_o *v16; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  const MethodInfo *v20; // x2
  int32_t v21; // w21
  EventBossStatusUiMaster_o *v22; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  const MethodInfo *v28; // x2
  struct EventSuperBossEntity_o *v29; // x8
  UILabel_o *bossName; // x21
  int v31; // s0
  struct System_Int64_array *hpList; // x8
  int max_length; // w9
  int v37; // w22
  int64_t v38; // x10
  int v39; // w12
  int32_t v40; // w21
  Il2CppClass **v41; // x11
  Il2CppClass *v42; // x11
  bool v43; // vf
  int64_t v44; // x11
  struct UserSuperBossEntity_o *currentUserBossEnt; // x10
  int v46; // w11
  Il2CppClass **v47; // x9
  Il2CppClass *v48; // x9
  int64_t v49; // x9
  struct EventSuperBossEntity_o *v50; // x8
  BalanceConfig_c *v51; // x0
  int32_t id; // w24
  TitleInfoPersonalBossComponent_o *v53; // x0
  const MethodInfo *v54; // x1
  float v55; // s8
  const MethodInfo *v56; // x2
  struct EventSuperBossEntity_o *v57; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  int64_t oldDamage; // d0
  int64_t oldMaxHp; // d1
  float v62; // s1
  bool v63; // nf
  float v64; // s0
  const MethodInfo *v65; // x2
  float v66; // s0
  float v67; // s1
  float v68; // s0
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x3
  UISprite_o *hpBarUnderSprite; // x20
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  const MethodInfo *v75; // x3
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v77; // x0
  System_String_o *v78; // x0
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x3
  EventSuperBossEntity_o *v83; // [xsp+0h] [xbp-60h] BYREF
  __int64 v84; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A59C82 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventSuperBossMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_19265/*"event_superboss_hp_white"*/);
    sub_1B885B0(&StringLiteral_19218/*"event_raid_hp_back"*/);
    sub_1B885B0(&StringLiteral_19260/*"event_superboss_hp_lower_"*/);
    sub_1B885B0(&StringLiteral_19219/*"event_raid_hp_frame"*/);
    sub_1B885B0(&StringLiteral_19264/*"event_superboss_hp_upper_"*/);
    byte_4A59C82 = 1;
  }
  v83 = 0LL;
  v84 = 0LL;
  CurrentUserSuperBossEntity = TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(this, method);
  this->fields.currentUserBossEnt = CurrentUserSuperBossEntity;
  p_currentUserBossEnt = &this->fields.currentUserBossEnt;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.currentUserBossEnt,
    (int32_t)CurrentUserSuperBossEntity,
    v5,
    v6);
  v7 = BalanceConfig_TypeInfo;
  if ( this->fields.oldUserBossEnt )
    v8 = 208LL;
  else
    v8 = 216LL;
  v9 = *(__int64 *)((char *)&this->klass + v8);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseSecondForm = static_fields->OrtLatePhaseSecondForm;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventId = this->fields.eventId;
    v16 = (EventSuperBossMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v16 )
      goto LABEL_98;
    if ( EventSuperBossMaster__TryGetEntity(
           v16,
           &v83,
           eventId,
           BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
           0LL) )
    {
      Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
      if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
      if ( !v83 )
        goto LABEL_98;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v18 = System_Int32__ToString((int)v83 + 56, 0LL);
      v19 = System_String__Concat_61707032(SUPERBOSS_ICON_SPNAME_PREFIX, v18, 0LL);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v19, v20);
      if ( !v83 )
        goto LABEL_98;
      Master_object = this->fields.bossName;
      if ( !Master_object )
        goto LABEL_98;
      UILabel__set_text(Master_object, v83->fields.name, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v21 = this->fields.eventId;
    v22 = (EventBossStatusUiMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v22 )
      goto LABEL_98;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v22,
                                  v21,
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
    v25 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v26 = System_Int32__ToString((int)eventSuperBossEntity + 56, 0LL);
    v27 = System_String__Concat_61707032(v25, v26, 0LL);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v27, v28);
    v29 = this->fields.eventSuperBossEntity;
    if ( !v29 )
      goto LABEL_98;
    Master_object = this->fields.bossName;
    if ( !Master_object )
      goto LABEL_98;
    UILabel__set_text(Master_object, v29->fields.name, 0LL);
    EntityFromEventIdAndIndex = this->fields.eventBossStatusUiEntity;
  }
  bossName = this->fields.bossName;
  if ( EntityFromEventIdAndIndex )
  {
    v85.fields.r = 0.0;
    v85.fields.g = 0.0;
    v85.fields.b = 0.0;
    v85.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v31 = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v85, 0LL);
    if ( !bossName )
      goto LABEL_98;
  }
  else
  {
    Master_object = (UILabel_o *)this->fields.eventSuperBossEntity;
    if ( !Master_object )
      goto LABEL_98;
    *(UnityEngine_Color_o *)&v31 = EventSuperBossEntity__GetBossColor((EventSuperBossEntity_o *)Master_object, 0LL);
    if ( !bossName )
      goto LABEL_98;
  }
  UILabel__set_effectColor(bossName, *(UnityEngine_Color_o *)&v31, 0LL);
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
  v37 = max_length - 1;
  this->fields.maxBreakCount = max_length - 1;
  v38 = v9 ? *(_QWORD *)(v9 + 32) : 0LL;
  if ( max_length < 1 )
  {
    v44 = v38;
    v40 = max_length - 1;
  }
  else
  {
    v39 = 0;
    v40 = max_length - 1;
    while ( 1 )
    {
      v41 = &hpList->obj.klass + v39;
      this->fields.oldMaxHp = (int64_t)v41[4];
      v42 = v41[4];
      v43 = __OFSUB__(v38, v42);
      v44 = v38 - (_QWORD)v42;
      if ( v44 < 0 != v43 )
        break;
      --v40;
      ++v39;
      v38 = v44;
      if ( v40 == -1 )
        goto LABEL_53;
    }
    v44 = v38;
  }
LABEL_53:
  currentUserBossEnt = this->fields.currentUserBossEnt;
  this->fields.oldDamage = v44;
  if ( currentUserBossEnt )
    currentUserBossEnt = (struct UserSuperBossEntity_o *)currentUserBossEnt->fields.damage;
  if ( max_length >= 1 )
  {
    v46 = 0;
    while ( 1 )
    {
      v47 = &hpList->obj.klass + v46;
      this->fields.currentMaxHp = (int64_t)v47[4];
      v48 = v47[4];
      v43 = __OFSUB__(currentUserBossEnt, v48);
      v49 = (char *)currentUserBossEnt - (char *)v48;
      if ( v49 < 0 != v43 )
        break;
      --v37;
      ++v46;
      currentUserBossEnt = (struct UserSuperBossEntity_o *)v49;
      if ( v37 == -1 )
        goto LABEL_61;
    }
  }
  v49 = (int64_t)currentUserBossEnt;
LABEL_61:
  v50 = this->fields.eventSuperBossEntity;
  this->fields.currentDamage = v49;
  if ( !v50 )
    goto LABEL_98;
  v51 = BalanceConfig_TypeInfo;
  id = v50->fields.id;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v51 = BalanceConfig_TypeInfo;
  }
  if ( id == v51->static_fields->OrtThirdFormId )
    this->fields.isGaugeBreak = v40 == 1 && v37 == 0;
  LODWORD(v84) = v40 + 1;
  HIDWORD(v84) = v40;
  Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
  if ( !Master_object
    || (Master_object = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)Master_object,
                                       0LL)) == 0LL )
  {
LABEL_98:
    sub_1B8880C(Master_object, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v53, v54) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( Master_object )
    {
      v55 = 0.0;
      UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v56);
      Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
      if ( Master_object )
      {
        v40 = 0;
        goto LABEL_97;
      }
    }
    goto LABEL_98;
  }
  v57 = this->fields.eventSuperBossEntity;
  if ( v57
    && (oldUserBossEnt = this->fields.oldUserBossEnt) != 0LL
    && (maxHp = v57->fields.maxHp, oldUserBossEnt->fields.damage < maxHp)
    && (!*p_currentUserBossEnt || (*p_currentUserBossEnt)->fields.damage >= maxHp) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( !Master_object )
      goto LABEL_98;
    v55 = 0.0;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v70);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v40 > 0 )
      v55 = 1.0;
  }
  else if ( this->fields.isGaugeBreak )
  {
    oldMaxHp = this->fields.oldMaxHp;
    oldDamage = this->fields.oldDamage;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    this->fields.HPto = 0.0;
    *(float *)&oldDamage = 1.0 - (double)oldDamage / (double)oldMaxHp;
    v62 = fminf(*(float *)&oldDamage, 1.0);
    v63 = *(float *)&oldDamage < 0.0;
    v64 = 0.0;
    if ( !v63 )
      v64 = v62;
    this->fields.HPfrom = v64;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v64, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.oldMaxHp - this->fields.oldDamage, v65);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v40 <= 0 )
      v55 = 0.0;
    else
      v55 = 1.0;
  }
  else
  {
    LODWORD(v84) = v37 + 1;
    HIDWORD(v84) = v37;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    v66 = 1.0 - (double)this->fields.currentDamage / (double)this->fields.currentMaxHp;
    v67 = fminf(v66, 1.0);
    v63 = v66 < 0.0;
    v68 = 0.0;
    if ( !v63 )
      v68 = v67;
    this->fields.HPfrom = v68;
    this->fields.HPto = v68;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v68, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentMaxHp - this->fields.currentDamage, v69);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v37 <= 0 )
      v55 = 0.0;
    else
      v55 = 1.0;
    v40 = v37;
  }
LABEL_97:
  UIProgressBar__set_value((UIProgressBar_o *)Master_object, v55, 0LL);
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, this->fields.maxBreakCount, v40, v71);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v73 = System_Int32__ToString((int32_t)&v84 + 4, 0LL);
  v74 = System_String__Concat_61707032((System_String_o *)StringLiteral_19260/*"event_superboss_hp_lower_"*/, v73, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v74, v75);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v77 = System_Int32__ToString((int32_t)&v84, 0LL);
  v78 = System_String__Concat_61707032((System_String_o *)StringLiteral_19264/*"event_superboss_hp_upper_"*/, v77, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v78, v79);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.hpBarWhiteSprite,
    (System_String_o *)StringLiteral_19265/*"event_superboss_hp_white"*/,
    v80);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_19219/*"event_raid_hp_frame"*/,
    v81);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_19218/*"event_raid_hp_back"*/,
    v82);
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

  if ( (byte_4A59C87 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4A59C87 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v16 = v15;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B8880C(IsNullOrEmpty, v8);
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1B8880C(v9, v10);
    v12 = UIAtlas__GetSprite((UIAtlas_o *)v16.fields._current, spriteName, 0LL);
  }
  while ( !v12 );
  if ( !sprite )
    sub_1B8880C(v12, v13);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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

  if ( (byte_4A59C92 & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3773/*"COMMON_NUM_FORMAT"*/);
    byte_4A59C92 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3773/*"COMMON_NUM_FORMAT"*/, 0LL);
  v13 = hp;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13, v7, v8, v9);
  v11 = System_String__Format(v6, v10, 0LL);
  if ( !totalHpLabel )
    sub_1B8880C(v11, v12);
  UILabel__set_text(totalHpLabel, v11, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__Setup(
        TitleInfoPersonalBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UserSuperBossEntity_o *oldUserBossEnt,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  EventBossStatusUiMaster_o *Master_object; // x0
  __int64 v10; // x1
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Int64_array *BreakGaugeHpList; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t eventId; // w20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x3

  if ( (byte_4A59C81 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__);
    byte_4A59C81 = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventSuperBossEntity,
    (int32_t)superBossEntity,
    (int32_t)oldUserBossEnt,
    (int32_t)method);
  this->fields.oldUserBossEnt = oldUserBossEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.oldUserBossEnt, (int32_t)oldUserBossEnt, v7, v8);
  this->fields._IsPlayedDamageAnimation_k__BackingField = 0;
  if ( this->fields.eventSuperBossEntity )
  {
    this->fields.eventId = this->fields.eventSuperBossEntity->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventBossStatusUiMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity
      || !Master_object
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_object,
                                        this->fields.eventId,
                                        eventSuperBossEntity->fields.id,
                                        0LL),
          this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.eventBossStatusUiEntity,
            (int32_t)EntityFromEventIdAndIndex,
            v13,
            v14),
          (Master_object = (EventBossStatusUiMaster_o *)this->fields.eventSuperBossEntity) == 0LL) )
    {
      sub_1B8880C(Master_object, v10);
    }
    BreakGaugeHpList = EventSuperBossEntity__GetBreakGaugeHpList((EventSuperBossEntity_o *)Master_object, 0LL);
    this->fields.hpList = BreakGaugeHpList;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.hpList, (int32_t)BreakGaugeHpList, v16, v17);
    eventId = this->fields.eventId;
    v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0LL);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventId, v19, v20);
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
    sub_1B8880C(v6, v7);
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
  if ( (byte_4A59C83 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19257/*"event_superboss_hp_icon_0"*/);
    sub_1B885B0(&StringLiteral_19258/*"event_superboss_hp_icon_11"*/);
    this = (TitleInfoPersonalBossComponent_o *)sub_1B885B0(&StringLiteral_19256/*"event_superboss_hp_icon_"*/);
    byte_4A59C83 = 1;
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
        (System_String_o *)StringLiteral_19258/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
      if ( this )
      {
        klass = this->klass;
        LODWORD(v21) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_1B8880C(this, *(_QWORD *)&maxCount);
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
        v16 = (System_String_o *)StringLiteral_19257/*"event_superboss_hp_icon_0"*/;
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
    v16 = System_String__Concat_61707032((System_String_o *)StringLiteral_19256/*"event_superboss_hp_icon_"*/, v15, 0LL);
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
    sub_1B88814(this, *(_QWORD *)&maxCount);
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v6,
    v6->fields.breakIcon_11,
    (System_String_o *)StringLiteral_19258/*"event_superboss_hp_icon_11"*/,
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
  TitleInfoPersonalBossComponent_o *v6; // x19
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9
  UnityEngine_Object_o *clearBossEffect; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *gaugeBreakEffect; // x21
  const MethodInfo *v18; // x2
  UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  float breakEffectStartWaitTime; // s8
  System_Action_o *v25; // x20
  System_Collections_IEnumerator_o *v26; // x1

  v6 = this;
  if ( (byte_4A59C8B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
    this = (TitleInfoPersonalBossComponent_o *)sub_1B885B0(&Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__);
    byte_4A59C8B = 1;
  }
  if ( v6->fields._IsPlayedDamageAnimation_k__BackingField )
    goto LABEL_4;
  eventSuperBossEntity = v6->fields.eventSuperBossEntity;
  if ( eventSuperBossEntity
    && (oldUserBossEnt = v6->fields.oldUserBossEnt) != 0LL
    && (maxHp = eventSuperBossEntity->fields.maxHp, oldUserBossEnt->fields.damage < maxHp)
    && ((currentUserBossEnt = v6->fields.currentUserBossEnt) == 0LL || currentUserBossEnt->fields.damage >= maxHp)
    || TitleInfoPersonalBossComponent__IsForcePlayClearEffect(this, (const MethodInfo *)mapAssetData) )
  {
    v6->fields._IsPlayedDamageAnimation_k__BackingField = 1;
    v6->fields.animEndCall = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v6->fields.animEndCall,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
    {
      v14 = TitleInfoPersonalBossComponent__GetClearBossEffect(v6, mapAssetData, v13);
      v6->fields.clearBossEffect = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.clearBossEffect, (int32_t)v14, v15, v16);
    }
    TitleInfoPersonalBossComponent__PlayClearBossEffect(v6, v12);
  }
  else
  {
    if ( !v6->fields.isGaugeBreak )
    {
LABEL_4:
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    v6->fields._IsPlayedDamageAnimation_k__BackingField = 1;
    v6->fields.animEndCall = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v6->fields.animEndCall,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    gaugeBreakEffect = (UnityEngine_Object_o *)v6->fields.gaugeBreakEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
    {
      v19 = TitleInfoPersonalBossComponent__GetGaugeBreakEffect(v6, mapAssetData, v18);
      v6->fields.gaugeBreakEffect = v19;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.gaugeBreakEffect, (int32_t)v19, v20, v21);
    }
    if ( !System_String__IsNullOrEmpty(v6->fields.breakEffectBeforeSeName, 0LL) )
    {
      v22 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1B885C8(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v23 = (System_Reflection_MethodBase_o *)sub_1B88594(v22, v22[4]);
      OverwriteAssetSoundName__PlaySe(v23, v6->fields.breakEffectBeforeSeName, 0LL);
    }
    breakEffectStartWaitTime = v6->fields.breakEffectStartWaitTime;
    v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v6,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0LL);
    v26 = BasicHelper__DelayCall(breakEffectStartWaitTime, v25, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)v6, v26, 0LL);
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
    sub_1B8880C(this, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_Action_o *animEndCall; // x20
  ServantStatusBattleListViewItem_o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  UnityEngine_Component_o *klass; // x0

  animEndCall = this->fields.animEndCall;
  v5 = (ServantStatusBattleListViewItem_o *)this;
  this->fields.animEndCall = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  v5[1].fields.sortValue0B = 0LL;
  v5 = (ServantStatusBattleListViewItem_o *)((char *)v5 + 208);
  v5->fields.isTermination = 0;
  sub_1B88554(v5, 0, v6, v7);
  klass = (UnityEngine_Component_o *)v5[-1].klass;
  if ( !klass || (klass = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(klass, 0LL)) == 0LL )
    sub_1B8880C(klass, v8);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0LL);
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
    sub_1B8880C(bossIconSp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_2(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_Action_o *animEndCall; // x20
  ServantStatusBattleListViewItem_o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  animEndCall = this->fields.animEndCall;
  v5 = (ServantStatusBattleListViewItem_o *)this;
  this->fields.animEndCall = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  v5[1].fields.sortValue0B = 0LL;
  v5 = (ServantStatusBattleListViewItem_o *)((char *)v5 + 208);
  v5->fields.isTermination = 0;
  sub_1B88554(v5, 0, v6, v7);
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
  ServantStatusBattleListViewItem_o *_4__this; // x0

  _4__this = (ServantStatusBattleListViewItem_o *)this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, data);
  _4__this[1].klass = (ServantStatusBattleListViewItem_c *)data;
  sub_1B88554(_4__this + 1, (int32_t)data, (int32_t)method, v3);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(this, method);
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
  TitleInfoPersonalBossComponent_o *_4__this; // x0
  struct TitleInfoPersonalBossComponent_o *v5; // x20
  float breakEffectEndrWaitTime; // s8
  System_Action_o *_9__2; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_4A59C98 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__);
    byte_4A59C98 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, v2),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(_4__this, method);
  }
  breakEffectEndrWaitTime = v5->fields.breakEffectEndrWaitTime;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  v10 = BasicHelper__DelayCall(breakEffectEndrWaitTime, _9__2, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)v5, v10, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, method);
}