void __fastcall TitleInfoPersonalBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct TitleInfoPersonalBossComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct TitleInfoPersonalBossComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A1E629 & 1) == 0 )
  {
    sub_1B715CC(&TitleInfoPersonalBossComponent_TypeInfo, v1);
    sub_1B715CC(&StringLiteral_14436/*"TitleInfoEventSuperBossEffect_Dead"*/, v4);
    sub_1B715CC(&StringLiteral_19215/*"event_superboss_icon_"*/, v5);
    sub_1B715CC(&StringLiteral_14435/*"TitleInfoEventSuperBossEffect_Break"*/, v6);
    byte_4A1E629 = 1;
  }
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19215/*"event_superboss_icon_"*/;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields,
    StringLiteral_19215/*"event_superboss_icon_"*/,
    v2,
    v3);
  v7 = StringLiteral_14436/*"TitleInfoEventSuperBossEffect_Dead"*/;
  static_fields = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14436/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB, v7, v9, v10);
  v11 = StringLiteral_14435/*"TitleInfoEventSuperBossEffect_Break"*/;
  v12 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v12->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14435/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v12->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB, v11, v13, v14);
  *(_QWORD *)&TitleInfoPersonalBossComponent_TypeInfo->static_fields->ANIM_DURATION_HP_CUT = 0x400000003FC00000LL;
}


void __fastcall TitleInfoPersonalBossComponent___ctor(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A1E628 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1B715CC(&System_Collections_Generic_List_UIAtlas__TypeInfo, v5);
    sub_1B715CC(&StringLiteral_16832/*"ar60"*/, v6);
    sub_1B715CC(&StringLiteral_16827/*"ar210"*/, v7);
    byte_4A1E628 = 1;
  }
  v8 = StringLiteral_16832/*"ar60"*/;
  this->fields.breakEffectBeforeSeName = (struct System_String_o *)StringLiteral_16832/*"ar60"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.breakEffectBeforeSeName, v8, v2, v3);
  v9 = StringLiteral_16827/*"ar210"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_16827/*"ar210"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.breakHpDownSeName, v9, v10, v11);
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v12;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)v12, v13, v14);
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
  UserSuperBossEntity_o *v8; // x22
  int64_t UserId; // x0
  __int64 v10; // x1

  if ( (byte_4A1E627 & 1) == 0 )
  {
    sub_1B715CC(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    sub_1B715CC(&UserSuperBossEntity_TypeInfo, v7);
    byte_4A1E627 = 1;
  }
  v8 = (UserSuperBossEntity_o *)sub_1B71818(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v8, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v8 )
    sub_1B71828(UserId, v10);
  v8->fields.userId = UserId;
  v8->fields.eventId = eventId;
  v8->fields.superBossId = id;
  v8->fields.damage = damange;
  return v8;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TitleInfoPersonalBossComponent_c *v8; // x0
  System_String_o *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  int32_t id; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A1E61E & 1) == 0 )
  {
    sub_1B715CC(&Method_AssetData_GetObject_GameObject____75846976, mapAssetData);
    sub_1B715CC(&int_TypeInfo, v5);
    sub_1B715CC(&TitleInfoPersonalBossComponent_TypeInfo, v6);
    sub_1B715CC(&StringLiteral_16562/*"_{0}{1:D2}"*/, v7);
    byte_4A1E61E = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v8 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v8 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  v9 = System_String__Concat_61505504(
         v8->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16562/*"_{0}{1:D2}"*/,
         0LL);
  eventId = this->fields.eventId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v10, v11, v12);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    sub_1B71828(v13, v14);
  v19 = (Il2CppObject *)v13;
  id = eventSuperBossEntity->fields.id;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v15, v16, v17);
  v21 = System_String__Format_61519876(v9, v19, v20, 0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48486748(
                                       mapAssetData,
                                       v21,
                                       (const MethodInfo_2E3D95C *)Method_AssetData_GetObject_GameObject____75846976);
}


UserSuperBossEntity_o *__fastcall TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w20
  int64_t OrtLatePhaseBreak; // x21
  BalanceConfig_c *v9; // x0
  struct BalanceConfig_StaticFields *v10; // x8
  int32_t v11; // w20
  int64_t OrtLatePhaseDead; // x21
  EventSuperBossEntity_o *IsOpen; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  struct System_Int64_array *hpList; // x11
  unsigned __int64 max_length; // x8
  __int64 v18; // x10
  int64_t v19; // x20
  __int64 v20; // x9
  __int64 v21; // x10
  int64_t *m_Items; // x11
  int64_t v23; // x12
  BalanceConfig_c *v24; // x0
  struct BalanceConfig_StaticFields *v25; // x8
  int32_t v26; // w20
  int64_t v27; // x21
  BalanceConfig_c *v28; // x0
  struct BalanceConfig_StaticFields *v29; // x8
  int32_t v30; // w20
  int32_t v31; // w21
  struct System_Int64_array *v32; // x11
  unsigned __int64 v33; // x8
  unsigned __int64 v34; // x9
  int64_t *v35; // x11
  int64_t v36; // x12
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  int32_t id; // w19
  int32_t eventId; // w21

  if ( (byte_4A1E626 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&CondType_TypeInfo, v3);
    sub_1B715CC(&TitleInfoPersonalBossComponent_TypeInfo, v4);
    byte_4A1E626 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  static_fields = v5->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseBreak = static_fields->OrtLatePhaseBreak;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseBreak, 0, 0LL, 0LL) )
    goto LABEL_19;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = v9->static_fields;
  v11 = v10->OrtLateQuestId;
  OrtLatePhaseDead = v10->OrtLatePhaseDead;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v11, OrtLatePhaseDead, 0, 0LL, 0LL);
  if ( ((unsigned __int8)IsOpen & 1) != 0 )
  {
    hpList = this->fields.hpList;
    if ( !hpList )
      goto LABEL_43;
    max_length = hpList->max_length;
    v18 = (max_length << 32) - 0x100000000LL;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      v20 = 0LL;
      v21 = v18 >> 32;
      m_Items = hpList->m_Items;
      while ( v20 < max_length )
      {
        v23 = m_Items[v20++];
        v19 += v23;
        if ( v20 >= v21 )
          goto LABEL_38;
      }
      goto LABEL_42;
    }
  }
  else
  {
LABEL_19:
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    v25 = v24->static_fields;
    v26 = v25->OrtLateQuestId;
    v27 = v25->OrtLatePhaseDead;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsOpen(46, v26, v27, 0, 0LL, 0LL) )
      goto LABEL_35;
    v28 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    v29 = v28->static_fields;
    v30 = v29->OrtLateQuestId;
    v31 = v29->OrtLatePhaseDead;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v30, v31 + 1, 0, 0LL, 0LL);
    if ( ((unsigned __int8)IsOpen & 1) == 0 )
    {
LABEL_35:
      IsOpen = this->fields.eventSuperBossEntity;
      if ( IsOpen )
        return EventSuperBossEntity__GetUserSuperBossEntity(IsOpen, 0LL);
LABEL_43:
      sub_1B71828(IsOpen, v14);
    }
    v32 = this->fields.hpList;
    if ( !v32 )
      goto LABEL_43;
    v33 = v32->max_length;
    if ( (__int64)(v33 << 32) >= 1 )
    {
      v19 = 0LL;
      v34 = 0LL;
      v35 = v32->m_Items;
      while ( v34 < v33 )
      {
        v36 = v35[v34++];
        v19 += v36;
        if ( (__int64)v34 >= (int)v33 )
          goto LABEL_38;
      }
LABEL_42:
      sub_1B71830(IsOpen, v14);
    }
  }
  v19 = 0LL;
LABEL_38:
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_43;
  eventId = eventSuperBossEntity->fields.eventId;
  id = eventSuperBossEntity->fields.id;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  return TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(eventId, id, v19, v15);
}


System_String_o *__fastcall TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A1E616 & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, method);
    sub_1B715CC(&StringLiteral_6213/*"EventUI/Prefabs/{0}"*/, v6);
    byte_4A1E616 = 1;
  }
  v9 = eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6213/*"EventUI/Prefabs/{0}"*/, v7, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4A1E61C & 1) == 0 )
  {
    sub_1B715CC(&Method_AssetData_GetObject_GameObject____75846976, name);
    byte_4A1E61C = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48486748(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2E3D95C *)Method_AssetData_GetObject_GameObject____75846976);
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  int v4; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  TitleInfoPersonalBossComponent_c *v7; // x0
  System_String_o *SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x1

  v4 = (int)this;
  if ( (byte_4A1E620 & 1) == 0 )
  {
    sub_1B715CC(&Method_AssetData_GetObject_GameObject____75846976, mapAssetData);
    sub_1B715CC(&TitleInfoPersonalBossComponent_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_16073/*"_"*/, v6);
    byte_4A1E620 = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v7 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v7 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = v7->static_fields->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB;
  v9 = System_Int32__ToString(v4 + 184, 0LL);
  v10 = System_String__Concat_61516764(
          SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16073/*"_"*/,
          v9,
          0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48486748(
                                       mapAssetData,
                                       v10,
                                       (const MethodInfo_2E3D95C *)Method_AssetData_GetObject_GameObject____75846976);
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

  if ( (byte_4A1E612 & 1) == 0 )
  {
    sub_1B715CC(&TerminalSceneComponent_TypeInfo, method);
    byte_4A1E612 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A1ACFD )
  {
    sub_1B715CC(&TerminalSceneComponent_TypeInfo, method);
    byte_4A1ACFD = 1;
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
    sub_1B71828(dispRoot, method);
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
  __int64 v2; // x1
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w19
  int64_t OrtLatePhaseDead; // x20

  if ( (byte_4A1E625 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&CondType_TypeInfo, v2);
    byte_4A1E625 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseDead = static_fields->OrtLatePhaseDead;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v20; // x20

  if ( (byte_4A1E617 & 1) == 0 )
  {
    sub_1B715CC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B715CC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B715CC(&TitleInfoPersonalBossComponent_TypeInfo, v8);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__, v9);
    sub_1B715CC(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo, v10);
    byte_4A1E617 = 1;
  }
  v11 = sub_1B71818(TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B71828(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)callback, v16, v17);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v18);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B71818(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v11,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v20, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v15; // w9
  int i; // w28
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v32; // x8
  int32_t v33; // [xsp+8h] [xbp-58h] BYREF
  int v34; // [xsp+Ch] [xbp-54h] BYREF

  v6 = this;
  if ( (byte_4A1E618 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_1B715CC(&int_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_UIAtlas__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v9);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v10);
    sub_1B715CC(&StringLiteral_24886/*"{0:D2}"*/, v11);
    this = (TitleInfoPersonalBossComponent_o *)sub_1B715CC(&StringLiteral_5361/*"DownloadEventUIAtlas{0}{1}"*/, v12);
    byte_4A1E618 = 1;
  }
  if ( v6->fields.assetData )
  {
    atlasList = v6->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1B71828(this, *(_QWORD *)&eventId);
    size = (unsigned int)atlasList->fields._size;
    v15 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v15;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v34 = i;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, size, v3, v4);
      v18 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24886/*"{0:D2}"*/, v17, 0LL);
      v33 = eventId;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v19, v20, v21);
      v23 = System_String__Format_61519876((System_String_o *)StringLiteral_5361/*"DownloadEventUIAtlas{0}{1}"*/, v22, v18, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
                                                                 v6,
                                                                 v23,
                                                                 v24);
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
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (TitleInfoPersonalBossComponent_o *)v6->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v29 = *(_QWORD *)&this->fields.m_CachedPtr;
      v30 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v29 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v32 + 32) = Component_object;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)Component_object, v27, v28);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  this->fields.isGaugeBreak = 0;
  this->fields.oldUserBossEnt = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.oldUserBossEnt, 0, v6, v7);
  TitleInfoPersonalBossComponent__SetDisp(this, v8);
}


void __fastcall TitleInfoPersonalBossComponent__PlayClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *clearBossEffect; // x20
  Il2CppObject *v11; // x20
  Il2CppObject *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20
  TitleInfoPersonalBossComponent_c *v16; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v18; // x20
  System_Collections_IEnumerator_o *v19; // x1
  System_Action_o *v20; // x21
  System_Action_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A1E61F & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v3);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__, v6);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__, v7);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__, v8);
    sub_1B715CC(&TitleInfoPersonalBossComponent_TypeInfo, v9);
    byte_4A1E61F = 1;
  }
  clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
  {
    v11 = (Il2CppObject *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_object_(
            v11,
            (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v12, (UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v12, 0LL);
    if ( v12 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v12,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        v16 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
          v16 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v16->static_fields->CLEAR_CALLBACK_DELAY;
        v18 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0LL);
        v19 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v18, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
        return;
      }
      v20 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0LL);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v20, 0LL);
        v21 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
        System_Action___ctor(
          v21,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0LL);
        Component_object[2].monitor = v21;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v21, v22, v23);
        return;
      }
    }
    sub_1B71828(v13, v14);
  }
}


void __fastcall TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *gaugeBreakEffect; // x20
  const MethodInfo *v9; // x1
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  struct UISprite_array *breakIconList; // x8
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  bool v17; // w22
  System_Action_o *v18; // x0
  System_Action_o *v19; // x20
  System_Collections_IEnumerator_o *v20; // x1

  if ( (byte_4A1E622 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v3);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__, v6);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__, v7);
    byte_4A1E622 = 1;
  }
  gaugeBreakEffect = (UnityEngine_Object_o *)this->fields.gaugeBreakEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
  {
    TitleInfoPersonalBossComponent__OnEndAnimation(this, v9);
    return;
  }
  v10 = (Il2CppObject *)this->fields.gaugeBreakEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object_(
          v10,
          (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_17;
  if ( !breakIconList->max_length )
    sub_1B71830(v11, v12);
  v14 = (UnityEngine_GameObject_o *)v11;
  v11 = (Il2CppObject *)breakIconList->m_Items[0];
  if ( !v11 )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
  GameObjectExtensions__SafeSetParent_33535352(v14, gameObject, 0LL);
  GameObjectExtensions__ResetLocalPosition(v14, 0LL);
  if ( !v14 )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v14,
                       (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v18 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  v19 = v18;
  if ( v17 )
  {
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0LL);
    v20 = BasicHelper__DelayCall(0.533, v19, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v20, 0LL);
    return;
  }
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0LL);
  if ( !Component_object )
LABEL_17:
    sub_1B71828(v11, v12);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v19, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpCut(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  TitleInfoPersonalBossComponent_c *v20; // x0
  EasingObject_o *v21; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v23; // x21
  System_Action_o *v24; // x22

  if ( (byte_4A1E621 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent_PlayHpCut__, v4);
    sub_1B715CC(&TitleInfoPersonalBossComponent_TypeInfo, v5);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__, v6);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__, v7);
    sub_1B715CC(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo, v8);
    byte_4A1E621 = 1;
  }
  v9 = sub_1B71818(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = this->fields.oldMaxHp;
  if ( !System_String__IsNullOrEmpty(this->fields.breakHpDownSeName, 0LL) )
  {
    v14 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B715E4(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v15 = (System_Reflection_MethodBase_o *)sub_1B715B0(v14, v14[4]);
    OverwriteAssetSoundName__PlaySe(v15, this->fields.breakHpDownSeName, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2EAC480 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 16) = Component_object;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)Component_object, v18, v19);
  v20 = TitleInfoPersonalBossComponent_TypeInfo;
  v21 = *(EasingObject_o **)(v9 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v20 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v20->static_fields->ANIM_DURATION_HP_CUT;
  v23 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0LL);
  v24 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v9,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0LL);
  if ( !v21 )
LABEL_12:
    sub_1B71828(v10, v11);
  EasingObject__Play(v21, ANIM_DURATION_HP_CUT, v23, v24, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  int64_t currentMaxHp; // x8
  int64_t currentDamage; // x9
  float v15; // s0
  float v16; // s1
  bool v17; // nf
  float v18; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  TitleInfoPersonalBossComponent_c *v23; // x0
  EasingObject_o *v24; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v26; // x21
  System_Action_o *v27; // x22

  if ( (byte_4A1E623 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_1B715CC(&TitleInfoPersonalBossComponent_TypeInfo, v4);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__, v5);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__, v6);
    sub_1B715CC(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo, v7);
    byte_4A1E623 = 1;
  }
  v8 = sub_1B71818(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_10;
  *(_QWORD *)(v8 + 24) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v11, v12);
  currentMaxHp = this->fields.currentMaxHp;
  *(_QWORD *)(v8 + 32) = currentMaxHp;
  currentDamage = this->fields.currentDamage;
  v15 = 1.0 - (double)currentDamage / (double)currentMaxHp;
  v16 = fminf(v15, 1.0);
  v17 = v15 < 0.0;
  v18 = 0.0;
  if ( !v17 )
    v18 = v16;
  *(_QWORD *)(v8 + 40) = currentDamage;
  this->fields.HPfrom = 0.0;
  this->fields.HPto = v18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2EAC480 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v8 + 16) = Component_object;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)Component_object, v21, v22);
  v23 = TitleInfoPersonalBossComponent_TypeInfo;
  v24 = *(EasingObject_o **)(v8 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v23 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v23->static_fields->ANIM_DURATION_HP_CUT;
  v26 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v8,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0LL);
  v27 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v8,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0LL);
  if ( !v24 )
LABEL_10:
    sub_1B71828(v9, v10);
  EasingObject__Play(v24, ANIM_DURATION_HP_CUT, v26, v27, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseAssetData(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_assetData; // x19
  int32_t eventId; // w20
  System_String_o *EventUIAssetDataPath; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A1E61B & 1) == 0 )
  {
    sub_1B715CC(&AssetManager_TypeInfo, method);
    sub_1B715CC(&TitleInfoPersonalBossComponent_TypeInfo, v3);
    byte_4A1E61B = 1;
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
    sub_1B71570(p_assetData, 0, v7, v8);
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
  if ( (byte_4A1E61A & 1) == 0 )
  {
    this = (TitleInfoPersonalBossComponent_o *)sub_1B715CC(
                                                 &Method_System_Collections_Generic_List_UIAtlas__Clear__,
                                                 method);
    byte_4A1E61A = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1B71828(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UserSuperBossEntity_o *CurrentUserSuperBossEntity; // x0
  struct UserSuperBossEntity_o **p_currentUserBossEnt; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  BalanceConfig_c *v17; // x0
  __int64 v18; // x8
  __int64 v19; // x24
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w21
  int64_t OrtLatePhaseSecondForm; // x22
  __int64 v23; // x1
  UILabel_o *Master_object; // x0
  int32_t eventId; // w21
  EventSuperBossMaster_o *v26; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  const MethodInfo *v30; // x2
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
  int v41; // s0
  struct System_Int64_array *hpList; // x8
  int max_length; // w9
  int v47; // w22
  int64_t v48; // x10
  int v49; // w12
  int32_t v50; // w21
  Il2CppClass **v51; // x11
  Il2CppClass *v52; // x11
  bool v53; // vf
  int64_t v54; // x11
  struct UserSuperBossEntity_o *currentUserBossEnt; // x10
  int v56; // w11
  Il2CppClass **v57; // x9
  Il2CppClass *v58; // x9
  int64_t v59; // x9
  struct EventSuperBossEntity_o *v60; // x8
  BalanceConfig_c *v61; // x0
  int32_t id; // w24
  TitleInfoPersonalBossComponent_o *v63; // x0
  const MethodInfo *v64; // x1
  float v65; // s8
  const MethodInfo *v66; // x2
  struct EventSuperBossEntity_o *v67; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  int64_t oldDamage; // d0
  int64_t oldMaxHp; // d1
  float v72; // s1
  bool v73; // nf
  float v74; // s0
  const MethodInfo *v75; // x2
  float v76; // s0
  float v77; // s1
  float v78; // s0
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x3
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
  EventSuperBossEntity_o *v93; // [xsp+0h] [xbp-60h] BYREF
  __int64 v94; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A1E614 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&CondType_TypeInfo, v3);
    sub_1B715CC(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v4);
    sub_1B715CC(&Method_DataManager_GetMaster_EventSuperBossMaster___, v5);
    sub_1B715CC(&DataManager_TypeInfo, v6);
    sub_1B715CC(&TitleInfoPersonalBossComponent_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_19214/*"event_superboss_hp_white"*/, v8);
    sub_1B715CC(&StringLiteral_19167/*"event_raid_hp_back"*/, v9);
    sub_1B715CC(&StringLiteral_19209/*"event_superboss_hp_lower_"*/, v10);
    sub_1B715CC(&StringLiteral_19168/*"event_raid_hp_frame"*/, v11);
    sub_1B715CC(&StringLiteral_19213/*"event_superboss_hp_upper_"*/, v12);
    byte_4A1E614 = 1;
  }
  v93 = 0LL;
  v94 = 0LL;
  CurrentUserSuperBossEntity = TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(this, method);
  this->fields.currentUserBossEnt = CurrentUserSuperBossEntity;
  p_currentUserBossEnt = &this->fields.currentUserBossEnt;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.currentUserBossEnt,
    (int32_t)CurrentUserSuperBossEntity,
    v15,
    v16);
  v17 = BalanceConfig_TypeInfo;
  if ( this->fields.oldUserBossEnt )
    v18 = 208LL;
  else
    v18 = 216LL;
  v19 = *(__int64 *)((char *)&this->klass + v18);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  static_fields = v17->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseSecondForm = static_fields->OrtLatePhaseSecondForm;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventId = this->fields.eventId;
    v26 = (EventSuperBossMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v26 )
      goto LABEL_98;
    if ( EventSuperBossMaster__TryGetEntity(
           v26,
           &v93,
           eventId,
           BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
           0LL) )
    {
      Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
      if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
      if ( !v93 )
        goto LABEL_98;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v28 = System_Int32__ToString((int)v93 + 56, 0LL);
      v29 = System_String__Concat_61505504(SUPERBOSS_ICON_SPNAME_PREFIX, v28, 0LL);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v29, v30);
      if ( !v93 )
        goto LABEL_98;
      Master_object = this->fields.bossName;
      if ( !Master_object )
        goto LABEL_98;
      UILabel__set_text(Master_object, v93->fields.name, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v31 = this->fields.eventId;
    v32 = (EventBossStatusUiMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v32 )
      goto LABEL_98;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v32,
                                  v31,
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
    v35 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v36 = System_Int32__ToString((int)eventSuperBossEntity + 56, 0LL);
    v37 = System_String__Concat_61505504(v35, v36, 0LL);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v37, v38);
    v39 = this->fields.eventSuperBossEntity;
    if ( !v39 )
      goto LABEL_98;
    Master_object = this->fields.bossName;
    if ( !Master_object )
      goto LABEL_98;
    UILabel__set_text(Master_object, v39->fields.name, 0LL);
    EntityFromEventIdAndIndex = this->fields.eventBossStatusUiEntity;
  }
  bossName = this->fields.bossName;
  if ( EntityFromEventIdAndIndex )
  {
    v95.fields.r = 0.0;
    v95.fields.g = 0.0;
    v95.fields.b = 0.0;
    v95.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v41 = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v95, 0LL);
    if ( !bossName )
      goto LABEL_98;
  }
  else
  {
    Master_object = (UILabel_o *)this->fields.eventSuperBossEntity;
    if ( !Master_object )
      goto LABEL_98;
    *(UnityEngine_Color_o *)&v41 = EventSuperBossEntity__GetBossColor((EventSuperBossEntity_o *)Master_object, 0LL);
    if ( !bossName )
      goto LABEL_98;
  }
  UILabel__set_effectColor(bossName, *(UnityEngine_Color_o *)&v41, 0LL);
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
  v47 = max_length - 1;
  this->fields.maxBreakCount = max_length - 1;
  v48 = v19 ? *(_QWORD *)(v19 + 32) : 0LL;
  if ( max_length < 1 )
  {
    v54 = v48;
    v50 = max_length - 1;
  }
  else
  {
    v49 = 0;
    v50 = max_length - 1;
    while ( 1 )
    {
      v51 = &hpList->obj.klass + v49;
      this->fields.oldMaxHp = (int64_t)v51[4];
      v52 = v51[4];
      v53 = __OFSUB__(v48, v52);
      v54 = v48 - (_QWORD)v52;
      if ( v54 < 0 != v53 )
        break;
      --v50;
      ++v49;
      v48 = v54;
      if ( v50 == -1 )
        goto LABEL_53;
    }
    v54 = v48;
  }
LABEL_53:
  currentUserBossEnt = this->fields.currentUserBossEnt;
  this->fields.oldDamage = v54;
  if ( currentUserBossEnt )
    currentUserBossEnt = (struct UserSuperBossEntity_o *)currentUserBossEnt->fields.damage;
  if ( max_length >= 1 )
  {
    v56 = 0;
    while ( 1 )
    {
      v57 = &hpList->obj.klass + v56;
      this->fields.currentMaxHp = (int64_t)v57[4];
      v58 = v57[4];
      v53 = __OFSUB__(currentUserBossEnt, v58);
      v59 = (char *)currentUserBossEnt - (char *)v58;
      if ( v59 < 0 != v53 )
        break;
      --v47;
      ++v56;
      currentUserBossEnt = (struct UserSuperBossEntity_o *)v59;
      if ( v47 == -1 )
        goto LABEL_61;
    }
  }
  v59 = (int64_t)currentUserBossEnt;
LABEL_61:
  v60 = this->fields.eventSuperBossEntity;
  this->fields.currentDamage = v59;
  if ( !v60 )
    goto LABEL_98;
  v61 = BalanceConfig_TypeInfo;
  id = v60->fields.id;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v61 = BalanceConfig_TypeInfo;
  }
  if ( id == v61->static_fields->OrtThirdFormId )
    this->fields.isGaugeBreak = v50 == 1 && v47 == 0;
  LODWORD(v94) = v50 + 1;
  HIDWORD(v94) = v50;
  Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
  if ( !Master_object
    || (Master_object = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)Master_object,
                                       0LL)) == 0LL )
  {
LABEL_98:
    sub_1B71828(Master_object, v23);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v63, v64) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( Master_object )
    {
      v65 = 0.0;
      UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v66);
      Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
      if ( Master_object )
      {
        v50 = 0;
        goto LABEL_97;
      }
    }
    goto LABEL_98;
  }
  v67 = this->fields.eventSuperBossEntity;
  if ( v67
    && (oldUserBossEnt = this->fields.oldUserBossEnt) != 0LL
    && (maxHp = v67->fields.maxHp, oldUserBossEnt->fields.damage < maxHp)
    && (!*p_currentUserBossEnt || (*p_currentUserBossEnt)->fields.damage >= maxHp) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( !Master_object )
      goto LABEL_98;
    v65 = 0.0;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v80);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v50 > 0 )
      v65 = 1.0;
  }
  else if ( this->fields.isGaugeBreak )
  {
    oldMaxHp = this->fields.oldMaxHp;
    oldDamage = this->fields.oldDamage;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    this->fields.HPto = 0.0;
    *(float *)&oldDamage = 1.0 - (double)oldDamage / (double)oldMaxHp;
    v72 = fminf(*(float *)&oldDamage, 1.0);
    v73 = *(float *)&oldDamage < 0.0;
    v74 = 0.0;
    if ( !v73 )
      v74 = v72;
    this->fields.HPfrom = v74;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v74, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.oldMaxHp - this->fields.oldDamage, v75);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v50 <= 0 )
      v65 = 0.0;
    else
      v65 = 1.0;
  }
  else
  {
    LODWORD(v94) = v47 + 1;
    HIDWORD(v94) = v47;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    v76 = 1.0 - (double)this->fields.currentDamage / (double)this->fields.currentMaxHp;
    v77 = fminf(v76, 1.0);
    v73 = v76 < 0.0;
    v78 = 0.0;
    if ( !v73 )
      v78 = v77;
    this->fields.HPfrom = v78;
    this->fields.HPto = v78;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v78, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentMaxHp - this->fields.currentDamage, v79);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v47 <= 0 )
      v65 = 0.0;
    else
      v65 = 1.0;
    v50 = v47;
  }
LABEL_97:
  UIProgressBar__set_value((UIProgressBar_o *)Master_object, v65, 0LL);
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, this->fields.maxBreakCount, v50, v81);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v83 = System_Int32__ToString((int32_t)&v94 + 4, 0LL);
  v84 = System_String__Concat_61505504((System_String_o *)StringLiteral_19209/*"event_superboss_hp_lower_"*/, v83, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v84, v85);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v87 = System_Int32__ToString((int32_t)&v94, 0LL);
  v88 = System_String__Concat_61505504((System_String_o *)StringLiteral_19213/*"event_superboss_hp_upper_"*/, v87, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v88, v89);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.hpBarWhiteSprite,
    (System_String_o *)StringLiteral_19214/*"event_superboss_hp_white"*/,
    v90);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_19168/*"event_raid_hp_frame"*/,
    v91);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_19167/*"event_raid_hp_back"*/,
    v92);
}


bool __fastcall TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A1E619 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_4A1E619 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E68DBC *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v20 = v19;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B71828(IsNullOrEmpty, v12);
    }
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1B71828(v13, v14);
    v16 = UIAtlas__GetSprite((UIAtlas_o *)v20.fields._current, spriteName, 0LL);
  }
  while ( !v16 );
  if ( !sprite )
    sub_1B71828(v16, v17);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall TitleInfoPersonalBossComponent__SetTotalHpText(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *totalHpLabel; // x20
  System_String_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A1E624 & 1) == 0 )
  {
    sub_1B715CC(&long_TypeInfo, hp);
    sub_1B715CC(&LocalizationManager_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_3755/*"COMMON_NUM_FORMAT"*/, v6);
    byte_4A1E624 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_NUM_FORMAT"*/, 0LL);
  v15 = hp;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15, v9, v10, v11);
  v13 = System_String__Format(v8, v12, 0LL);
  if ( !totalHpLabel )
    sub_1B71828(v13, v14);
  UILabel__set_text(totalHpLabel, v13, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__Setup(
        TitleInfoPersonalBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UserSuperBossEntity_o *oldUserBossEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  EventBossStatusUiMaster_o *Master_object; // x0
  __int64 v13; // x1
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Int64_array *BreakGaugeHpList; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t eventId; // w20
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_4A1E613 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, superBossEntity);
    sub_1B715CC(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v7);
    sub_1B715CC(&DataManager_TypeInfo, v8);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, v9);
    byte_4A1E613 = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventSuperBossEntity,
    (int32_t)superBossEntity,
    (int32_t)oldUserBossEnt,
    (int32_t)method);
  this->fields.oldUserBossEnt = oldUserBossEnt;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.oldUserBossEnt, (int32_t)oldUserBossEnt, v10, v11);
  this->fields._IsPlayedDamageAnimation_k__BackingField = 0;
  if ( this->fields.eventSuperBossEntity )
  {
    this->fields.eventId = this->fields.eventSuperBossEntity->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventBossStatusUiMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity
      || !Master_object
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_object,
                                        this->fields.eventId,
                                        eventSuperBossEntity->fields.id,
                                        0LL),
          this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
          sub_1B71570(
            (ServantStatusBattleListViewItem_o *)&this->fields.eventBossStatusUiEntity,
            (int32_t)EntityFromEventIdAndIndex,
            v16,
            v17),
          (Master_object = (EventBossStatusUiMaster_o *)this->fields.eventSuperBossEntity) == 0LL) )
    {
      sub_1B71828(Master_object, v13);
    }
    BreakGaugeHpList = EventSuperBossEntity__GetBreakGaugeHpList((EventSuperBossEntity_o *)Master_object, 0LL);
    this->fields.hpList = BreakGaugeHpList;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.hpList, (int32_t)BreakGaugeHpList, v19, v20);
    eventId = this->fields.eventId;
    v22 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0LL);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventId, v22, v23);
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
    sub_1B71828(v6, v7);
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
  __int64 v8; // x1
  struct UISprite_array *breakIconList; // x8
  int max_length; // w22
  il2cpp_array_size_t v11; // w20
  int v12; // w23
  il2cpp_array_size_t v13; // w9
  __int64 v14; // x26
  struct UISprite_array *v15; // x8
  UISprite_o *v16; // x22
  System_String_o *v17; // x0
  System_String_o *v18; // x2
  TitleInfoPersonalBossComponent_o *v19; // x0
  UISprite_o *v20; // x1
  struct UISprite_array *v21; // x8
  struct UISprite_array *v22; // x8
  long double v23; // q0
  TitleInfoPersonalBossComponent_c *klass; // x8
  int v25; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4A1E615 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_19206/*"event_superboss_hp_icon_0"*/, *(_QWORD *)&maxCount);
    sub_1B715CC(&StringLiteral_19207/*"event_superboss_hp_icon_11"*/, v7);
    this = (TitleInfoPersonalBossComponent_o *)sub_1B715CC(&StringLiteral_19205/*"event_superboss_hp_icon_"*/, v8);
    byte_4A1E615 = 1;
  }
  v25 = 0;
  breakIconList = v6->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_36;
  max_length = breakIconList->max_length;
  if ( restCount <= 9 )
  {
    v12 = max_length - 1;
    if ( max_length < 1 )
    {
LABEL_33:
      TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        v6,
        v6->fields.breakIcon_11,
        (System_String_o *)StringLiteral_19207/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
      if ( this )
      {
        klass = this->klass;
        LODWORD(v23) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_1B71828(this, *(_QWORD *)&maxCount);
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= breakIconList->max_length )
        goto LABEL_37;
      v14 = (int)v13;
      this = (TitleInfoPersonalBossComponent_o *)breakIconList->m_Items[v13];
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)v14 < restCount )
        break;
      if ( (int)v14 < maxCount )
      {
        v21 = v6->fields.breakIconList;
        if ( !v21 )
          goto LABEL_36;
        if ( (unsigned int)v14 >= v21->max_length )
          goto LABEL_37;
        v20 = v21->m_Items[v14];
        v18 = (System_String_o *)StringLiteral_19206/*"event_superboss_hp_icon_0"*/;
        v19 = v6;
        goto LABEL_24;
      }
LABEL_28:
      if ( v12 == (_DWORD)v14 )
        goto LABEL_33;
      breakIconList = v6->fields.breakIconList;
      v13 = v14 + 1;
      if ( !breakIconList )
        goto LABEL_36;
    }
    v15 = v6->fields.breakIconList;
    if ( !v15 )
      goto LABEL_36;
    if ( (unsigned int)v14 >= v15->max_length )
      goto LABEL_37;
    v16 = v15->m_Items[v14];
    v25 = v14 + 2;
    v17 = System_Int32__ToString((int32_t)&v25, 0LL);
    v18 = System_String__Concat_61505504((System_String_o *)StringLiteral_19205/*"event_superboss_hp_icon_"*/, v17, 0LL);
    v19 = v6;
    v20 = v16;
LABEL_24:
    this = (TitleInfoPersonalBossComponent_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
                                                 v19,
                                                 v20,
                                                 v18,
                                                 method);
    v22 = v6->fields.breakIconList;
    if ( !v22 )
      goto LABEL_36;
    if ( (unsigned int)v14 >= v22->max_length )
      goto LABEL_37;
    this = (TitleInfoPersonalBossComponent_o *)v22->m_Items[v14];
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
    v11 = 0;
    while ( v11 < breakIconList->max_length )
    {
      this = (TitleInfoPersonalBossComponent_o *)breakIconList->m_Items[v11];
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( max_length == ++v11 )
        goto LABEL_31;
      breakIconList = v6->fields.breakIconList;
      if ( !breakIconList )
        goto LABEL_36;
    }
LABEL_37:
    sub_1B71830(this, *(_QWORD *)&maxCount);
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v6,
    v6->fields.breakIcon_11,
    (System_String_o *)StringLiteral_19207/*"event_superboss_hp_icon_11"*/,
    method);
  this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
  if ( !this )
    goto LABEL_36;
  klass = this->klass;
  LODWORD(v23) = 1.0;
LABEL_35:
  ((void (__fastcall *)(long double))klass[1]._1.namespaze)(v23);
}


void __fastcall TitleInfoPersonalBossComponent__StartDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9
  UnityEngine_Object_o *clearBossEffect; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Object_o *gaugeBreakEffect; // x21
  const MethodInfo *v21; // x2
  UnityEngine_GameObject_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  float breakEffectStartWaitTime; // s8
  System_Action_o *v28; // x20
  System_Collections_IEnumerator_o *v29; // x1

  v6 = this;
  if ( (byte_4A1E61D & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, mapAssetData);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__, v8);
    this = (TitleInfoPersonalBossComponent_o *)sub_1B715CC(
                                                 &Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
                                                 v9);
    byte_4A1E61D = 1;
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
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&v6->fields.animEndCall,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(clearBossEffect, 0LL, 0LL) )
    {
      v17 = TitleInfoPersonalBossComponent__GetClearBossEffect(v6, mapAssetData, v16);
      v6->fields.clearBossEffect = v17;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v6->fields.clearBossEffect, (int32_t)v17, v18, v19);
    }
    TitleInfoPersonalBossComponent__PlayClearBossEffect(v6, v15);
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
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&v6->fields.animEndCall,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    gaugeBreakEffect = (UnityEngine_Object_o *)v6->fields.gaugeBreakEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
    {
      v22 = TitleInfoPersonalBossComponent__GetGaugeBreakEffect(v6, mapAssetData, v21);
      v6->fields.gaugeBreakEffect = v22;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v6->fields.gaugeBreakEffect, (int32_t)v22, v23, v24);
    }
    if ( !System_String__IsNullOrEmpty(v6->fields.breakEffectBeforeSeName, 0LL) )
    {
      v25 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 83) & 2) != 0 )
        v25 = (_QWORD *)sub_1B715E4(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v26 = (System_Reflection_MethodBase_o *)sub_1B715B0(v25, v25[4]);
      OverwriteAssetSoundName__PlaySe(v26, v6->fields.breakEffectBeforeSeName, 0LL);
    }
    breakEffectStartWaitTime = v6->fields.breakEffectStartWaitTime;
    v28 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v6,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0LL);
    v29 = BasicHelper__DelayCall(breakEffectStartWaitTime, v28, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)v6, v29, 0LL);
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
    sub_1B71828(this, method);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  v5[1].fields.sortValue0B = 0LL;
  v5 = (ServantStatusBattleListViewItem_o *)((char *)v5 + 208);
  v5->fields.isTermination = 0;
  sub_1B71570(v5, 0, v6, v7);
  klass = (UnityEngine_Component_o *)v5[-1].klass;
  if ( !klass || (klass = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(klass, 0LL)) == 0LL )
    sub_1B71828(klass, v8);
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
    sub_1B71828(bossIconSp, method);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  v5[1].fields.sortValue0B = 0LL;
  v5 = (ServantStatusBattleListViewItem_o *)((char *)v5 + 208);
  v5->fields.isTermination = 0;
  sub_1B71570(v5, 0, v6, v7);
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
    sub_1B71828(0LL, data);
  _4__this[1].klass = (ServantStatusBattleListViewItem_c *)data;
  sub_1B71570(_4__this + 1, (int32_t)data, (int32_t)method, v3);
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
    sub_1B71828(this, method);
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
    sub_1B71828(0LL, method);
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
    sub_1B71828(this, method);
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
  TitleInfoPersonalBossComponent_o *_4__this; // x0
  struct TitleInfoPersonalBossComponent_o *v6; // x20
  float breakEffectEndrWaitTime; // s8
  System_Action_o *_9__2; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_4A1E62A & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__, v4);
    byte_4A1E62A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, v2),
        (v6 = this->fields.__4__this) == 0LL) )
  {
    sub_1B71828(_4__this, method);
  }
  breakEffectEndrWaitTime = v6->fields.breakEffectEndrWaitTime;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  v11 = BasicHelper__DelayCall(breakEffectEndrWaitTime, _9__2, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)v6, v11, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B71828(0LL, method);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, method);
}