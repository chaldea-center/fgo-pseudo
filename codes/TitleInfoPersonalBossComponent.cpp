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

  if ( (byte_49FAF7E & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoPersonalBossComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_14414/*"TitleInfoEventSuperBossEffect_Dead"*/, v4);
    sub_1B640C8(&StringLiteral_19189/*"event_superboss_icon_"*/, v5);
    sub_1B640C8(&StringLiteral_14413/*"TitleInfoEventSuperBossEffect_Break"*/, v6);
    byte_49FAF7E = 1;
  }
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19189/*"event_superboss_icon_"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields,
    StringLiteral_19189/*"event_superboss_icon_"*/,
    v2,
    v3);
  v7 = StringLiteral_14414/*"TitleInfoEventSuperBossEffect_Dead"*/;
  static_fields = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14414/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB, v7, v9, v10);
  v11 = StringLiteral_14413/*"TitleInfoEventSuperBossEffect_Break"*/;
  v12 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v12->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14413/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB, v11, v13, v14);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FAF7D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_UIAtlas__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16813/*"ar60"*/, v6);
    sub_1B640C8(&StringLiteral_16808/*"ar210"*/, v7);
    byte_49FAF7D = 1;
  }
  v8 = StringLiteral_16813/*"ar60"*/;
  this->fields.breakEffectBeforeSeName = (struct System_String_o *)StringLiteral_16813/*"ar60"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.breakEffectBeforeSeName, v8, v2, v3);
  v9 = StringLiteral_16808/*"ar210"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_16808/*"ar210"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.breakHpDownSeName, v9, v10, v11);
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.atlasList, (int32_t)v14, v15, v16);
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

  if ( (byte_49FAF7C & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    sub_1B640C8(&UserSuperBossEntity_TypeInfo, v7);
    byte_49FAF7C = 1;
  }
  v8 = (UserSuperBossEntity_o *)sub_1B64314(UserSuperBossEntity_TypeInfo, *(_QWORD *)&id, damange);
  UserSuperBossEntity___ctor(v8, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v8 )
    sub_1B64324(UserId);
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
  __int64 v10; // x0
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int32_t id; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FAF73 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, mapAssetData);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&TitleInfoPersonalBossComponent_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_16543/*"_{0}{1:D2}"*/, v7);
    byte_49FAF73 = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v8 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v8 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  v9 = System_String__Concat_61375396(
         v8->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16543/*"_{0}{1:D2}"*/,
         0LL);
  eventId = this->fields.eventId;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    sub_1B64324(v10);
  v12 = (Il2CppObject *)v10;
  id = eventSuperBossEntity->fields.id;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
  v14 = System_String__Format_61389768(v9, v12, v13, 0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48347676(
                                       mapAssetData,
                                       v14,
                                       (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
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

  if ( (byte_49FAF7B & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&CondType_TypeInfo, v3);
    sub_1B640C8(&TitleInfoPersonalBossComponent_TypeInfo, v4);
    byte_49FAF7B = 1;
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
  if ( !CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseBreak, 0, 0LL) )
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
  IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v11, OrtLatePhaseDead, 0, 0LL);
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
    if ( !CondType__IsOpen(46, v26, v27, 0, 0LL) )
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
    IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v30, v31 + 1, 0, 0LL);
    if ( ((unsigned __int8)IsOpen & 1) == 0 )
    {
LABEL_35:
      IsOpen = this->fields.eventSuperBossEntity;
      if ( IsOpen )
        return EventSuperBossEntity__GetUserSuperBossEntity(IsOpen, 0LL);
LABEL_43:
      sub_1B64324(IsOpen);
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
      sub_1B6432C(IsOpen, v14);
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
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FAF6B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v3);
    byte_49FAF6B = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_49FAF71 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, name);
    byte_49FAF71 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48347676(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
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
  if ( (byte_49FAF75 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, mapAssetData);
    sub_1B640C8(&TitleInfoPersonalBossComponent_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_16054/*"_"*/, v6);
    byte_49FAF75 = 1;
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
  v10 = System_String__Concat_61386656(
          SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16054/*"_"*/,
          v9,
          0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__48347676(
                                       mapAssetData,
                                       v10,
                                       (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
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

  if ( (byte_49FAF67 & 1) == 0 )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49FAF67 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, method);
    byte_49F76BD = 1;
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
    sub_1B64324(dispRoot);
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

  if ( (byte_49FAF7A & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&CondType_TypeInfo, v2);
    byte_49FAF7A = 1;
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
  return CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseDead, 0, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  System_String_o *EventUIAssetDataPath; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  AssetLoader_LoadEndDataHandler_o *v21; // x20

  if ( (byte_49FAF6C & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B640C8(&TitleInfoPersonalBossComponent_TypeInfo, v8);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__, v9);
    sub_1B640C8(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo, v10);
    byte_49FAF6C = 1;
  }
  v11 = sub_1B64314(TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo, *(_QWORD *)&eventId, callback);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)callback, v15, v16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v17);
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v11,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v21, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__LoadLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v13; // w9
  int i; // w28
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8
  int32_t v28; // [xsp+8h] [xbp-58h] BYREF
  int v29; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_49FAF6D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_24845/*"{0:D2}"*/, v9);
    this = (TitleInfoPersonalBossComponent_o *)sub_1B640C8(&StringLiteral_5355/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_49FAF6D = 1;
  }
  if ( v4->fields.assetData )
  {
    atlasList = v4->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1B64324(this);
    size = atlasList->fields._size;
    v13 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v13;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0LL);
    for ( i = 1; ; ++i )
    {
      v29 = i;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24845/*"{0:D2}"*/, v15, 0LL);
      v28 = eventId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      v18 = System_String__Format_61389768((System_String_o *)StringLiteral_5355/*"DownloadEventUIAtlas{0}{1}"*/, v17, v16, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
                                                                 v4,
                                                                 v18,
                                                                 v19);
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
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        break;
      this = (TitleInfoPersonalBossComponent_o *)v4->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      v24 = *(_QWORD *)&this->fields.m_CachedPtr;
      v25 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v24 )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = v24 + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v27 + 32) = Component_object;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)Component_object, v22, v23);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  this->fields.isGaugeBreak = 0;
  this->fields.oldUserBossEnt = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.oldUserBossEnt, 0, v6, v7);
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
  Il2CppObject *Component_object; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  TitleInfoPersonalBossComponent_c *v17; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v19; // x20
  System_Collections_IEnumerator_o *v20; // x1
  System_Action_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49FAF74 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__, v6);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__, v7);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__, v8);
    sub_1B640C8(&TitleInfoPersonalBossComponent_TypeInfo, v9);
    byte_49FAF74 = 1;
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
            (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v12, (UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v12, 0LL);
    if ( v12 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v12,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        v17 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
          v17 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v17->static_fields->CLEAR_CALLBACK_DELAY;
        v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0LL);
        v20 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v19, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v20, 0LL);
        return;
      }
      v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(
        v21,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0LL);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v21, 0LL);
        v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
        System_Action___ctor(
          v24,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0LL);
        Component_object[2].monitor = v24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v24, v25, v26);
        return;
      }
    }
    sub_1B64324(v13);
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x0
  System_Action_o *v21; // x20
  System_Collections_IEnumerator_o *v22; // x1

  if ( (byte_49FAF77 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v3);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__, v6);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__, v7);
    byte_49FAF77 = 1;
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
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_17;
  if ( !breakIconList->max_length )
    sub_1B6432C(v11, v12);
  v14 = (UnityEngine_GameObject_o *)v11;
  v11 = (Il2CppObject *)breakIconList->m_Items[0];
  if ( !v11 )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
  GameObjectExtensions__SafeSetParent_33381252(v14, gameObject, 0LL);
  GameObjectExtensions__ResetLocalPosition(v14, 0LL);
  if ( !v14 )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v14,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
  v21 = v20;
  if ( v17 )
  {
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0LL);
    v22 = BasicHelper__DelayCall(0.533, v21, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v22, 0LL);
    return;
  }
  System_Action___ctor(
    v20,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0LL);
  if ( !Component_object )
LABEL_17:
    sub_1B64324(v11);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v21, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpCut(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  TitleInfoPersonalBossComponent_c *v22; // x0
  EasingObject_o *v23; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x22

  if ( (byte_49FAF76 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v4);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent_PlayHpCut__, v5);
    sub_1B640C8(&TitleInfoPersonalBossComponent_TypeInfo, v6);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__, v7);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__, v8);
    sub_1B640C8(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo, v9);
    byte_49FAF76 = 1;
  }
  v10 = sub_1B64314(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_QWORD *)(v10 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 32) = this->fields.oldMaxHp;
  if ( !System_String__IsNullOrEmpty(this->fields.breakHpDownSeName, 0LL) )
  {
    v14 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B640E0(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v15 = (System_Reflection_MethodBase_o *)sub_1B640AC(v14, v14[4]);
    OverwriteAssetSoundName__PlaySe(v15, this->fields.breakHpDownSeName, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v10 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)Component_object, v18, v19);
  v22 = TitleInfoPersonalBossComponent_TypeInfo;
  v23 = *(EasingObject_o **)(v10 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v22 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v22->static_fields->ANIM_DURATION_HP_CUT;
  v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v10,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0LL);
  v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0LL);
  if ( !v23 )
LABEL_12:
    sub_1B64324(v11);
  EasingObject__Play(v23, ANIM_DURATION_HP_CUT, v25, v28, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x0
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
  __int64 v23; // x1
  __int64 v24; // x2
  TitleInfoPersonalBossComponent_c *v25; // x0
  EasingObject_o *v26; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x22

  if ( (byte_49FAF78 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v4);
    sub_1B640C8(&TitleInfoPersonalBossComponent_TypeInfo, v5);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__, v6);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__, v7);
    sub_1B640C8(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo, v8);
    byte_49FAF78 = 1;
  }
  v9 = sub_1B64314(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  currentMaxHp = this->fields.currentMaxHp;
  *(_QWORD *)(v9 + 32) = currentMaxHp;
  currentDamage = this->fields.currentDamage;
  v15 = 1.0 - (double)currentDamage / (double)currentMaxHp;
  v16 = fminf(v15, 1.0);
  v17 = v15 < 0.0;
  v18 = 0.0;
  if ( !v17 )
    v18 = v16;
  *(_QWORD *)(v9 + 40) = currentDamage;
  this->fields.HPfrom = 0.0;
  this->fields.HPto = v18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)Component_object, v21, v22);
  v25 = TitleInfoPersonalBossComponent_TypeInfo;
  v26 = *(EasingObject_o **)(v9 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v25 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v25->static_fields->ANIM_DURATION_HP_CUT;
  v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0LL);
  v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v9,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0LL);
  if ( !v26 )
LABEL_10:
    sub_1B64324(v10);
  EasingObject__Play(v26, ANIM_DURATION_HP_CUT, v28, v31, 0.0, 0, 0LL);
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

  if ( (byte_49FAF70 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&TitleInfoPersonalBossComponent_TypeInfo, v3);
    byte_49FAF70 = 1;
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
    sub_1B6406C(p_assetData, 0, v7, v8);
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
  if ( (byte_49FAF6F & 1) == 0 )
  {
    this = (TitleInfoPersonalBossComponent_o *)sub_1B640C8(
                                                 &Method_System_Collections_Generic_List_UIAtlas__Clear__,
                                                 method);
    byte_49FAF6F = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1B64324(this);
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
  UILabel_o *Master_object; // x0
  int32_t eventId; // w21
  EventSuperBossMaster_o *v25; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  const MethodInfo *v29; // x2
  int32_t v30; // w21
  EventBossStatusUiMaster_o *v31; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  System_String_o *v34; // x21
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  const MethodInfo *v37; // x2
  struct EventSuperBossEntity_o *v38; // x8
  UILabel_o *bossName; // x21
  int v40; // s0
  struct System_Int64_array *hpList; // x8
  int max_length; // w9
  int v46; // w22
  int64_t v47; // x10
  int v48; // w12
  int32_t v49; // w21
  Il2CppClass **v50; // x11
  Il2CppClass *v51; // x11
  bool v52; // vf
  int64_t v53; // x11
  struct UserSuperBossEntity_o *currentUserBossEnt; // x10
  int v55; // w11
  Il2CppClass **v56; // x9
  Il2CppClass *v57; // x9
  int64_t v58; // x9
  struct EventSuperBossEntity_o *v59; // x8
  BalanceConfig_c *v60; // x0
  int32_t id; // w24
  TitleInfoPersonalBossComponent_o *v62; // x0
  const MethodInfo *v63; // x1
  float v64; // s8
  const MethodInfo *v65; // x2
  struct EventSuperBossEntity_o *v66; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  int64_t oldDamage; // d0
  int64_t oldMaxHp; // d1
  float v71; // s1
  bool v72; // nf
  float v73; // s0
  const MethodInfo *v74; // x2
  float v75; // s0
  float v76; // s1
  float v77; // s0
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x3
  UISprite_o *hpBarUnderSprite; // x20
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  const MethodInfo *v84; // x3
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  const MethodInfo *v88; // x3
  const MethodInfo *v89; // x3
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x3
  EventSuperBossEntity_o *v92; // [xsp+0h] [xbp-60h] BYREF
  __int64 v93; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FAF69 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&CondType_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_EventSuperBossMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&TitleInfoPersonalBossComponent_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_19188/*"event_superboss_hp_white"*/, v8);
    sub_1B640C8(&StringLiteral_19141/*"event_raid_hp_back"*/, v9);
    sub_1B640C8(&StringLiteral_19183/*"event_superboss_hp_lower_"*/, v10);
    sub_1B640C8(&StringLiteral_19142/*"event_raid_hp_frame"*/, v11);
    sub_1B640C8(&StringLiteral_19187/*"event_superboss_hp_upper_"*/, v12);
    byte_49FAF69 = 1;
  }
  v92 = 0LL;
  v93 = 0LL;
  CurrentUserSuperBossEntity = TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(this, method);
  this->fields.currentUserBossEnt = CurrentUserSuperBossEntity;
  p_currentUserBossEnt = &this->fields.currentUserBossEnt;
  sub_1B6406C(
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
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventId = this->fields.eventId;
    v25 = (EventSuperBossMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v25 )
      goto LABEL_98;
    if ( EventSuperBossMaster__TryGetEntity(
           v25,
           &v92,
           eventId,
           BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
           0LL) )
    {
      Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
      if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
      if ( !v92 )
        goto LABEL_98;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v27 = System_Int32__ToString((int)v92 + 56, 0LL);
      v28 = System_String__Concat_61375396(SUPERBOSS_ICON_SPNAME_PREFIX, v27, 0LL);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v28, v29);
      if ( !v92 )
        goto LABEL_98;
      Master_object = this->fields.bossName;
      if ( !Master_object )
        goto LABEL_98;
      UILabel__set_text(Master_object, v92->fields.name, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v30 = this->fields.eventId;
    v31 = (EventBossStatusUiMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v31 )
      goto LABEL_98;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v31,
                                  v30,
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
    v34 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v35 = System_Int32__ToString((int)eventSuperBossEntity + 56, 0LL);
    v36 = System_String__Concat_61375396(v34, v35, 0LL);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v36, v37);
    v38 = this->fields.eventSuperBossEntity;
    if ( !v38 )
      goto LABEL_98;
    Master_object = this->fields.bossName;
    if ( !Master_object )
      goto LABEL_98;
    UILabel__set_text(Master_object, v38->fields.name, 0LL);
    EntityFromEventIdAndIndex = this->fields.eventBossStatusUiEntity;
  }
  bossName = this->fields.bossName;
  if ( EntityFromEventIdAndIndex )
  {
    v94.fields.r = 0.0;
    v94.fields.g = 0.0;
    v94.fields.b = 0.0;
    v94.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v40 = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v94, 0LL);
    if ( !bossName )
      goto LABEL_98;
  }
  else
  {
    Master_object = (UILabel_o *)this->fields.eventSuperBossEntity;
    if ( !Master_object )
      goto LABEL_98;
    *(UnityEngine_Color_o *)&v40 = EventSuperBossEntity__GetBossColor((EventSuperBossEntity_o *)Master_object, 0LL);
    if ( !bossName )
      goto LABEL_98;
  }
  UILabel__set_effectColor(bossName, *(UnityEngine_Color_o *)&v40, 0LL);
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
  v46 = max_length - 1;
  this->fields.maxBreakCount = max_length - 1;
  v47 = v19 ? *(_QWORD *)(v19 + 32) : 0LL;
  if ( max_length < 1 )
  {
    v53 = v47;
    v49 = max_length - 1;
  }
  else
  {
    v48 = 0;
    v49 = max_length - 1;
    while ( 1 )
    {
      v50 = &hpList->obj.klass + v48;
      this->fields.oldMaxHp = (int64_t)v50[4];
      v51 = v50[4];
      v52 = __OFSUB__(v47, v51);
      v53 = v47 - (_QWORD)v51;
      if ( v53 < 0 != v52 )
        break;
      --v49;
      ++v48;
      v47 = v53;
      if ( v49 == -1 )
        goto LABEL_53;
    }
    v53 = v47;
  }
LABEL_53:
  currentUserBossEnt = this->fields.currentUserBossEnt;
  this->fields.oldDamage = v53;
  if ( currentUserBossEnt )
    currentUserBossEnt = (struct UserSuperBossEntity_o *)currentUserBossEnt->fields.damage;
  if ( max_length >= 1 )
  {
    v55 = 0;
    while ( 1 )
    {
      v56 = &hpList->obj.klass + v55;
      this->fields.currentMaxHp = (int64_t)v56[4];
      v57 = v56[4];
      v52 = __OFSUB__(currentUserBossEnt, v57);
      v58 = (char *)currentUserBossEnt - (char *)v57;
      if ( v58 < 0 != v52 )
        break;
      --v46;
      ++v55;
      currentUserBossEnt = (struct UserSuperBossEntity_o *)v58;
      if ( v46 == -1 )
        goto LABEL_61;
    }
  }
  v58 = (int64_t)currentUserBossEnt;
LABEL_61:
  v59 = this->fields.eventSuperBossEntity;
  this->fields.currentDamage = v58;
  if ( !v59 )
    goto LABEL_98;
  v60 = BalanceConfig_TypeInfo;
  id = v59->fields.id;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v60 = BalanceConfig_TypeInfo;
  }
  if ( id == v60->static_fields->OrtThirdFormId )
    this->fields.isGaugeBreak = v49 == 1 && v46 == 0;
  LODWORD(v93) = v49 + 1;
  HIDWORD(v93) = v49;
  Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
  if ( !Master_object
    || (Master_object = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)Master_object,
                                       0LL)) == 0LL )
  {
LABEL_98:
    sub_1B64324(Master_object);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v62, v63) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( Master_object )
    {
      v64 = 0.0;
      UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v65);
      Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
      if ( Master_object )
      {
        v49 = 0;
        goto LABEL_97;
      }
    }
    goto LABEL_98;
  }
  v66 = this->fields.eventSuperBossEntity;
  if ( v66
    && (oldUserBossEnt = this->fields.oldUserBossEnt) != 0LL
    && (maxHp = v66->fields.maxHp, oldUserBossEnt->fields.damage < maxHp)
    && (!*p_currentUserBossEnt || (*p_currentUserBossEnt)->fields.damage >= maxHp) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( !Master_object )
      goto LABEL_98;
    v64 = 0.0;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v79);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v49 > 0 )
      v64 = 1.0;
  }
  else if ( this->fields.isGaugeBreak )
  {
    oldMaxHp = this->fields.oldMaxHp;
    oldDamage = this->fields.oldDamage;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    this->fields.HPto = 0.0;
    *(float *)&oldDamage = 1.0 - (double)oldDamage / (double)oldMaxHp;
    v71 = fminf(*(float *)&oldDamage, 1.0);
    v72 = *(float *)&oldDamage < 0.0;
    v73 = 0.0;
    if ( !v72 )
      v73 = v71;
    this->fields.HPfrom = v73;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v73, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.oldMaxHp - this->fields.oldDamage, v74);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v49 <= 0 )
      v64 = 0.0;
    else
      v64 = 1.0;
  }
  else
  {
    LODWORD(v93) = v46 + 1;
    HIDWORD(v93) = v46;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    v75 = 1.0 - (double)this->fields.currentDamage / (double)this->fields.currentMaxHp;
    v76 = fminf(v75, 1.0);
    v72 = v75 < 0.0;
    v77 = 0.0;
    if ( !v72 )
      v77 = v76;
    this->fields.HPfrom = v77;
    this->fields.HPto = v77;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v77, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentMaxHp - this->fields.currentDamage, v78);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v46 <= 0 )
      v64 = 0.0;
    else
      v64 = 1.0;
    v49 = v46;
  }
LABEL_97:
  UIProgressBar__set_value((UIProgressBar_o *)Master_object, v64, 0LL);
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, this->fields.maxBreakCount, v49, v80);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v82 = System_Int32__ToString((int32_t)&v93 + 4, 0LL);
  v83 = System_String__Concat_61375396((System_String_o *)StringLiteral_19183/*"event_superboss_hp_lower_"*/, v82, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v83, v84);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v86 = System_Int32__ToString((int32_t)&v93, 0LL);
  v87 = System_String__Concat_61375396((System_String_o *)StringLiteral_19187/*"event_superboss_hp_upper_"*/, v86, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v87, v88);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.hpBarWhiteSprite,
    (System_String_o *)StringLiteral_19188/*"event_superboss_hp_white"*/,
    v89);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_19142/*"event_raid_hp_frame"*/,
    v90);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_19141/*"event_raid_hp_back"*/,
    v91);
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
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FAF6E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_49FAF6E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v17 = v16;
  do
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v12 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1B64324(IsNullOrEmpty);
    }
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B64324(v12);
    v14 = UIAtlas__GetSprite((UIAtlas_o *)v17.fields._current, spriteName, 0LL);
  }
  while ( !v14 );
  if ( !sprite )
    sub_1B64324(v14);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
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
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FAF79 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, hp);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_3750/*"COMMON_NUM_FORMAT"*/, v6);
    byte_49FAF79 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"COMMON_NUM_FORMAT"*/, 0LL);
  v11 = hp;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
  v10 = System_String__Format(v8, v9, 0LL);
  if ( !totalHpLabel )
    sub_1B64324(v10);
  UILabel__set_text(totalHpLabel, v10, 0LL);
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
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Int64_array *BreakGaugeHpList; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t eventId; // w20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x3

  if ( (byte_49FAF68 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, superBossEntity);
    sub_1B640C8(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, v9);
    byte_49FAF68 = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventSuperBossEntity,
    (int32_t)superBossEntity,
    (int32_t)oldUserBossEnt,
    (int32_t)method);
  this->fields.oldUserBossEnt = oldUserBossEnt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.oldUserBossEnt, (int32_t)oldUserBossEnt, v10, v11);
  this->fields._IsPlayedDamageAnimation_k__BackingField = 0;
  if ( this->fields.eventSuperBossEntity )
  {
    this->fields.eventId = this->fields.eventSuperBossEntity->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventBossStatusUiMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity
      || !Master_object
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_object,
                                        this->fields.eventId,
                                        eventSuperBossEntity->fields.id,
                                        0LL),
          this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.eventBossStatusUiEntity,
            (int32_t)EntityFromEventIdAndIndex,
            v15,
            v16),
          (Master_object = (EventBossStatusUiMaster_o *)this->fields.eventSuperBossEntity) == 0LL) )
    {
      sub_1B64324(Master_object);
    }
    BreakGaugeHpList = EventSuperBossEntity__GetBreakGaugeHpList((EventSuperBossEntity_o *)Master_object, 0LL);
    this->fields.hpList = BreakGaugeHpList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.hpList, (int32_t)BreakGaugeHpList, v18, v19);
    eventId = this->fields.eventId;
    v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0LL);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventId, v23, v24);
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
    sub_1B64324(v6);
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
  if ( (byte_49FAF6A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19180/*"event_superboss_hp_icon_0"*/, *(_QWORD *)&maxCount);
    sub_1B640C8(&StringLiteral_19181/*"event_superboss_hp_icon_11"*/, v7);
    this = (TitleInfoPersonalBossComponent_o *)sub_1B640C8(&StringLiteral_19179/*"event_superboss_hp_icon_"*/, v8);
    byte_49FAF6A = 1;
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
        (System_String_o *)StringLiteral_19181/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
      if ( this )
      {
        klass = this->klass;
        LODWORD(v23) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_1B64324(this);
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
        v18 = (System_String_o *)StringLiteral_19180/*"event_superboss_hp_icon_0"*/;
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
    v18 = System_String__Concat_61375396((System_String_o *)StringLiteral_19179/*"event_superboss_hp_icon_"*/, v17, 0LL);
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
    sub_1B6432C(this, *(_QWORD *)&maxCount);
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v6,
    v6->fields.breakIcon_11,
    (System_String_o *)StringLiteral_19181/*"event_superboss_hp_icon_11"*/,
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
  __int64 v25; // x1
  __int64 v26; // x2
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  float breakEffectStartWaitTime; // s8
  System_Action_o *v30; // x20
  System_Collections_IEnumerator_o *v31; // x1

  v6 = this;
  if ( (byte_49FAF72 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, mapAssetData);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__, v8);
    this = (TitleInfoPersonalBossComponent_o *)sub_1B640C8(
                                                 &Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
                                                 v9);
    byte_49FAF72 = 1;
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
    sub_1B6406C(
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.clearBossEffect, (int32_t)v17, v18, v19);
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
    sub_1B6406C(
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.gaugeBreakEffect, (int32_t)v22, v23, v24);
    }
    if ( !System_String__IsNullOrEmpty(v6->fields.breakEffectBeforeSeName, 0LL) )
    {
      v27 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1B640E0(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v28 = (System_Reflection_MethodBase_o *)sub_1B640AC(v27, v27[4]);
      OverwriteAssetSoundName__PlaySe(v28, v6->fields.breakEffectBeforeSeName, 0LL);
    }
    breakEffectStartWaitTime = v6->fields.breakEffectStartWaitTime;
    v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v6,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0LL);
    v31 = BasicHelper__DelayCall(breakEffectStartWaitTime, v30, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v6, v31, 0LL);
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
    sub_1B64324(this);
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
  UnityEngine_Component_o *klass; // x0

  animEndCall = this->fields.animEndCall;
  v5 = (ServantStatusBattleListViewItem_o *)this;
  this->fields.animEndCall = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  v5[1].fields.sortValue0B = 0LL;
  v5 = (ServantStatusBattleListViewItem_o *)((char *)v5 + 208);
  v5->fields.isTermination = 0;
  sub_1B6406C(v5, 0, v6, v7);
  klass = (UnityEngine_Component_o *)v5[-1].klass;
  if ( !klass || (klass = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(klass, 0LL)) == 0LL )
    sub_1B64324(klass);
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
    sub_1B64324(bossIconSp);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0LL);
  v5[1].fields.sortValue0B = 0LL;
  v5 = (ServantStatusBattleListViewItem_o *)((char *)v5 + 208);
  v5->fields.isTermination = 0;
  sub_1B6406C(v5, 0, v6, v7);
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
    sub_1B64324(0LL);
  _4__this[1].klass = (ServantStatusBattleListViewItem_c *)data;
  sub_1B6406C(_4__this + 1, (int32_t)data, (int32_t)method, v3);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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
    sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x2
  struct TitleInfoPersonalBossComponent_o *v8; // x20
  float breakEffectEndrWaitTime; // s8
  System_Action_o *_9__2; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_49FAF7F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__, v4);
    byte_49FAF7F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, v2),
        (v8 = this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(_4__this);
  }
  breakEffectEndrWaitTime = v8->fields.breakEffectEndrWaitTime;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  v13 = BasicHelper__DelayCall(breakEffectEndrWaitTime, _9__2, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)v8, v13, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, method);
}