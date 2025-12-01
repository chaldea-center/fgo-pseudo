void BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCAA15 & 1) == 0 )
  {
    sub_1C713B0(&BattlePerformanceInfoComponent_TypeInfo);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338);
    byte_4CCAA15 = 1;
  }
  v1 = (System_Array_o *)sub_1C71458(int___TypeInfo, 9);
  v2.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v1, v2, 0);
  BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist = v3;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void BattlePerformanceInfoComponent___ctor(BattlePerformanceInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.AdjustY = 24.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattlePerformanceInfoComponent__ClearBattleInfo(BattlePerformanceInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void BattlePerformanceInfoComponent__Initialize(BattlePerformanceInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nokoriTimeObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  unsigned int localPosition; // s0
  float v7; // s8
  float y; // s9
  UnityEngine_Object_o *nokoriTurnObject; // x20
  UnityEngine_Object_o *waveShowObject; // x20
  UnityEngine_Object_o *stockSprite; // x20
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCAA0B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAA0B = 1;
  }
  nokoriTimeObject = (UnityEngine_Object_o *)this->fields.nokoriTimeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nokoriTimeObject, 0, 0) )
  {
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(transform, 0, 0);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_29;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_29;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_29;
    v7 = *(float *)&localPosition;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_29;
    v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_29;
    y = v13.fields.y;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_29;
    v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.timeDefPos.fields.x = v7;
    this->fields.timeDefPos.fields.y = y;
    this->fields.timeDefPos.fields.z = v14.fields.z;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0, 0) )
  {
    transform = this->fields.nokoriTurnObject;
    if ( !transform )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(transform, 0, 0);
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0, 0) )
  {
    transform = this->fields.waveShowObject;
    if ( transform )
    {
      UnityEngine_GameObject__SetActive(transform, 0, 0);
      goto LABEL_24;
    }
LABEL_29:
    sub_1C71608(transform, v4);
  }
LABEL_24:
  stockSprite = (UnityEngine_Object_o *)this->fields.stockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(stockSprite, 0, 0) )
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, 0, v12);
  }
}


void BattlePerformanceInfoComponent__Update(BattlePerformanceInfoComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.isUpdateTimer )
    BattlePerformanceInfoComponent__updateTime(this, method);
}


void BattlePerformanceInfoComponent__UpdateWaveDisplay(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *nowWaveLabel; // x0

  nowWaveLabel = (UnityEngine_Component_o *)this->fields.nowWaveLabel;
  if ( !nowWaveLabel )
    goto LABEL_10;
  nowWaveLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nowWaveLabel, 0);
  if ( !nowWaveLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowWaveLabel, !this->fields.isWaveCountInfinity, 0);
  nowWaveLabel = (UnityEngine_Component_o *)this->fields.maxWaveLabel;
  if ( !nowWaveLabel
    || (nowWaveLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nowWaveLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)nowWaveLabel,
          !this->fields.isWaveCountInfinity,
          0),
        (nowWaveLabel = (UnityEngine_Component_o *)this->fields.slashLabel) == 0)
    || (nowWaveLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nowWaveLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)nowWaveLabel,
          !this->fields.isWaveCountInfinity,
          0),
        (nowWaveLabel = (UnityEngine_Component_o *)this->fields.infinityLabel) == 0)
    || (nowWaveLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nowWaveLabel, 0)) == 0 )
  {
LABEL_10:
    sub_1C71608(nowWaveLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowWaveLabel, this->fields.isWaveCountInfinity, 0);
}


void BattlePerformanceInfoComponent__drawTime(
        BattlePerformanceInfoComponent_o *this,
        int64_t showTimeSeconds,
        const MethodInfo *method)
{
  System_TimeSpan_o v5; // x0
  double TotalHours; // d0
  UILabel_o *v7; // x20
  int v8; // w25
  System_String_o *v9; // x21
  Il2CppObject *v10; // x22
  System_TimeSpan_o v11; // x0
  Il2CppObject *v12; // x23
  System_TimeSpan_o v13; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *nokoriTimeLabel; // x20
  System_String_o *v18; // x21
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x23
  Il2CppObject *v21; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-50h] BYREF
  int v24; // [xsp+14h] [xbp-4Ch] BYREF
  int64_t v25; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCAA10 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&System_TimeSpan_TypeInfo);
    sub_1C713B0(&StringLiteral_2812/*"BATTLE_RAID_REMAINING_TIME"*/);
    byte_4CCAA10 = 1;
  }
  v25 = 0;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2812/*"BATTLE_RAID_REMAINING_TIME"*/, 0);
    v24 = 0;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    Minutes = 0;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
    Seconds = 0;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v15 = System_String__Format_64073100(v18, v19, v20, v21, 0);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v15, 0);
      goto LABEL_18;
    }
LABEL_21:
    sub_1C71608(v15, v16);
  }
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v5.fields._ticks = (int64_t)&v25;
  v25 = 10000000 * showTimeSeconds;
  TotalHours = System_TimeSpan__get_TotalHours(v5, 0);
  v7 = this->fields.nokoriTimeLabel;
  if ( TotalHours == INFINITY )
    v8 = 0x80000000;
  else
    v8 = (int)TotalHours;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2812/*"BATTLE_RAID_REMAINING_TIME"*/, 0);
  v24 = v8;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v11.fields._ticks = (int64_t)&v25;
  Minutes = System_TimeSpan__get_Minutes(v11, 0);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v13.fields._ticks = (int64_t)&v25;
  Seconds = System_TimeSpan__get_Seconds(v13, 0);
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  v15 = System_String__Format_64073100(v9, v10, v12, v14, 0);
  if ( !v7 )
    goto LABEL_21;
  UILabel__set_text(v7, v15, 0);
  if ( v8 > 0 )
    return;
LABEL_18:
  v15 = (System_String_o *)this->fields.nokoriTimeLabel;
  if ( !v15 )
    goto LABEL_21;
  v26.fields.r = 1.0;
  v26.fields.g = 0.0;
  v26.fields.b = 0.0;
  v26.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v15, v26, 0);
}


void BattlePerformanceInfoComponent__setQuest(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v4; // x19
  struct BattleEntity_o *battle_ent; // x21
  struct BattleInfoData_o *battle_info; // x8
  struct BattleRaidInfo_array *raidInfo; // x8
  bool v8; // w1
  BattlePerformanceInfoComponent_o *v9; // x20
  BattlePerformanceInfoComponent_o *v10; // x20
  BattlePerformanceInfoComponent_o *v11; // x20
  BattlePerformanceInfoComponent_o *v12; // x20
  int32_t eventId; // w21
  EventRaidMaster_o *v14; // x22
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v16; // x21
  int64_t endedAt; // x21
  System_DateTime_o v18; // x0
  int64_t Time_41642924; // x21
  System_DateTime_o v20; // x0
  int64_t Ticks; // x0
  int64_t remaingTimeSeconds; // x1
  const MethodInfo *v23; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CCAA0C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C713B0(&System_DateTime_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    this = (BattlePerformanceInfoComponent_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCAA0C = 1;
  }
  dateData = 0;
  if ( !data )
    goto LABEL_75;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)BattleEntity__GetQuestPhaseEntity(data->fields.battle_ent, 0);
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)QuestPhaseEntity__IsWaveCountInfinity((QuestPhaseEntity_o *)this, 0);
  v4->fields.isWaveCountInfinity = (unsigned __int8)this & 1;
  battle_info = data->fields.battle_info;
  if ( !battle_info )
    goto LABEL_75;
  raidInfo = battle_info->fields.raidInfo;
  if ( !raidInfo || !raidInfo->max_length )
    goto LABEL_11;
  this = (BattlePerformanceInfoComponent_o *)data->fields.quest_ent;
  if ( !this )
    goto LABEL_75;
  if ( QuestEntity__HasFlag((QuestEntity_o *)this, 0x2000000, 0) )
  {
LABEL_11:
    this = (BattlePerformanceInfoComponent_o *)v4->fields.nokoriTimeObject;
    v4->fields.isUpdateTimer = 0;
    if ( !this )
      goto LABEL_75;
    v8 = 0;
LABEL_13:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0);
    goto LABEL_14;
  }
  this = (BattlePerformanceInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v4->fields.isUpdateTimer = 1;
  if ( !data->fields.battle_info )
    goto LABEL_75;
  eventId = battle_ent->fields.eventId;
  v14 = (EventRaidMaster_o *)this;
  this = (BattlePerformanceInfoComponent_o *)BattleInfoData__getRaidId(data->fields.battle_info, 0);
  if ( !v14 )
    goto LABEL_75;
  Entity = EventRaidMaster__GetEntity(v14, eventId, (int32_t)this, 0);
  if ( Entity )
  {
    v16 = Entity;
    if ( BattleData__isRaidConnection(data, 0) )
    {
      endedAt = v16->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v18.fields._dateData = NetworkManager__getDateTime_41643704(endedAt, 0).fields._dateData;
      Time_41642924 = NetworkManager__getTime_41642924(v18, 0);
      v4->fields.remaingTimeSeconds = Time_41642924 - NetworkManager__getTime(0);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      dateData = System_DateTime__get_Now(0).fields._dateData;
      v20.fields._dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v20, 0);
      remaingTimeSeconds = v4->fields.remaingTimeSeconds;
      v4->fields.lastCheckTime = Ticks;
      BattlePerformanceInfoComponent__drawTime(v4, remaingTimeSeconds, v23);
      this = (BattlePerformanceInfoComponent_o *)v4->fields.nokoriTimeObject;
      if ( !this )
        goto LABEL_75;
      v8 = 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( !BattleData__IsWarBoard(data, 0) )
    return;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
  if ( !this )
    goto LABEL_75;
  v25.fields.z = 0.0;
  v25.fields.x = 316.0;
  v25.fields.y = 158.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v25, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.waveShowObject;
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.nowWaveLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.maxWaveLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.slashLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.infinityLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleBackGround;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_depth((UIWidget_o *)this, -1, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleBackGround;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_width((UIWidget_o *)this, 218, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleBackGround;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_height((UIWidget_o *)this, 24, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleSpr;
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyRoot;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v9 = this;
  if ( !byte_4CC0D09 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v9 )
    goto LABEL_75;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v9,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v4->fields.enemyRoot )
    goto LABEL_75;
  v10 = this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.enemyRoot, 0);
  if ( !v10 )
    goto LABEL_75;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v10, (UnityEngine_Transform_o *)this, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_75;
  v26.fields.y = 0.0;
  v26.fields.z = 0.0;
  v26.fields.x = -66.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v26, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_width((UIWidget_o *)this, 42, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_height((UIWidget_o *)this, 18, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyBackGround;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_75;
  v27.fields.x = 4.0;
  v27.fields.y = -9.0;
  v27.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v27, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyLabel;
  if ( !this )
    goto LABEL_75;
  UILabel__set_fontSize((UILabel_o *)this, 17, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnRoot;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v11 = this;
  if ( !byte_4CC0D09 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v11 )
    goto LABEL_75;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v4->fields.turnRoot )
    goto LABEL_75;
  v12 = this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.turnRoot, 0);
  if ( !v12 )
    goto LABEL_75;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v12, (UnityEngine_Transform_o *)this, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_75;
  v28.fields.x = 6.0;
  v28.fields.y = 0.0;
  v28.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v28, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_width((UIWidget_o *)this, 36, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnBackGround;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_75;
  v29.fields.y = -9.0;
  v29.fields.z = 0.0;
  v29.fields.x = 70.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v29, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnLabel;
  if ( !this
    || (UILabel__set_fontSize((UILabel_o *)this, 17, 0),
        (this = (BattlePerformanceInfoComponent_o *)v4->fields.itemRoot) == 0)
    || (this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0)) == 0 )
  {
LABEL_75:
    sub_1C71608(this, data);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void BattlePerformanceInfoComponent__setShowElapsedTurn(
        BattlePerformanceInfoComponent_o *this,
        int32_t state,
        int32_t now,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nokoriTurnObject; // x22
  __int64 v8; // x1
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  UILabel_o *nokoriTurnLabel; // x19
  System_String_o *v11; // x20
  int32_t *v12; // x1
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+8h] [xbp-38h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCAA0E & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_2764/*"BATTLE_ELAPSED_TURN"*/);
    sub_1C713B0(&StringLiteral_2885/*"BATTLE_TOTALELAPSED_TURN"*/);
    byte_4CCAA0E = 1;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0, 0) )
  {
    nokoriTimeObject = this->fields.nokoriTimeObject;
    if ( !nokoriTimeObject )
      goto LABEL_22;
    nokoriTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nokoriTimeObject, 0);
    if ( !nokoriTimeObject )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)nokoriTimeObject, this->fields.timeDefPos, 0);
    nokoriTimeObject = this->fields.nokoriTurnObject;
    if ( !nokoriTimeObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(nokoriTimeObject, 1, 0);
    if ( now <= 1 )
      now = 1;
    if ( state == 2 )
    {
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2885/*"BATTLE_TOTALELAPSED_TURN"*/, 0);
      v14 = now;
      v12 = &v14;
    }
    else
    {
      if ( state != 1 )
        return;
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2764/*"BATTLE_ELAPSED_TURN"*/, 0);
      v12 = &v15;
      v15 = now;
    }
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v12);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v11, v13, 0);
    if ( !nokoriTurnLabel )
LABEL_22:
      sub_1C71608(nokoriTimeObject, v8);
    UILabel__set_text(nokoriTurnLabel, (System_String_o *)nokoriTimeObject, 0);
  }
}


void BattlePerformanceInfoComponent__setShowLimitTurn(
        BattlePerformanceInfoComponent_o *this,
        int32_t now,
        int32_t limit,
        BattleData_o *bdata,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nokoriTurnObject; // x23
  __int64 v10; // x1
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  int v12; // w8
  bool IsWarBoard; // w0
  UILabel_o *nokoriTurnLabel; // x19
  bool v15; // w20
  __int64 *v16; // x8
  System_String_o *v17; // x20
  Il2CppObject *v18; // x0
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCAA0D & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_2890/*"BATTLE_WARBOARD_REMAINING"*/);
    sub_1C713B0(&StringLiteral_2813/*"BATTLE_RAID_REMAINING_TURN"*/);
    byte_4CCAA0D = 1;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0, 0) )
  {
    nokoriTimeObject = this->fields.nokoriTimeObject;
    if ( !nokoriTimeObject )
      goto LABEL_21;
    nokoriTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nokoriTimeObject, 0);
    if ( !nokoriTimeObject )
      goto LABEL_21;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)nokoriTimeObject, this->fields.timeDefPos, 0);
    nokoriTimeObject = this->fields.nokoriTurnObject;
    if ( !nokoriTimeObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(nokoriTimeObject, 1, 0);
    v12 = now <= 1 ? 1 : now;
    v19 = (limit - v12 + 1) & ~((limit - v12 + 1) >> 31);
    if ( !bdata )
      goto LABEL_21;
    IsWarBoard = BattleData__IsWarBoard(bdata, 0);
    nokoriTurnLabel = this->fields.nokoriTurnLabel;
    v15 = IsWarBoard;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsWarBoard )
      {
LABEL_15:
        v16 = &StringLiteral_2890/*"BATTLE_WARBOARD_REMAINING"*/;
        goto LABEL_18;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v15 )
        goto LABEL_15;
    }
    v16 = &StringLiteral_2813/*"BATTLE_RAID_REMAINING_TURN"*/;
LABEL_18:
    v17 = LocalizationManager__Get((System_String_o *)*v16, 0);
    v18 = (Il2CppObject *)System_Int32__ToString((int32_t)&v19, 0);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v17, v18, 0);
    if ( nokoriTurnLabel )
    {
      UILabel__set_text(nokoriTurnLabel, (System_String_o *)nokoriTimeObject, 0);
      return;
    }
LABEL_21:
    sub_1C71608(nokoriTimeObject, v10);
  }
}


void BattlePerformanceInfoComponent__setShowTurn(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bdata,
        int32_t addTurn,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v5; // x19
  int32_t LimitElapsedTurn; // w0
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( !bdata )
    goto LABEL_10;
  v5 = this;
  if ( BattleData__IsDispLimitTurn(bdata, 0) )
  {
    LimitElapsedTurn = BattleData__GetLimitElapsedTurn(bdata, 0);
    BattlePerformanceInfoComponent__setShowLimitTurn(
      v5,
      LimitElapsedTurn + addTurn,
      bdata->fields.limitTurnCount,
      bdata,
      v8);
    return;
  }
  if ( BattleData__isShowTurn(bdata, 0) )
  {
    BattlePerformanceInfoComponent__setShowElapsedTurn(
      v5,
      bdata->fields.stateshowturn,
      bdata->fields.turnCount + bdata->fields.totalTurnCount,
      v9);
    return;
  }
  this = (BattlePerformanceInfoComponent_o *)v5->fields.nokoriTimeObject;
  if ( !this
    || (this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0)) == 0
    || (v10.fields.z = v5->fields.timeDefPos.fields.z + 0.0,
        v10.fields.y = v5->fields.timeDefPos.fields.y + v5->fields.AdjustY,
        v10.fields.x = v5->fields.timeDefPos.fields.x + 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v10, 0),
        (this = (BattlePerformanceInfoComponent_o *)v5->fields.nokoriTurnObject) == 0) )
  {
LABEL_10:
    sub_1C71608(this, bdata);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void BattlePerformanceInfoComponent__setShowWave(
        BattlePerformanceInfoComponent_o *this,
        int32_t now,
        int32_t max,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *waveShowObject; // x23
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x0
  UILabel_o *nowWaveLabel; // x23
  Il2CppObject *v13; // x0
  UILabel_o *maxWaveLabel; // x22
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x1
  int v17; // [xsp+8h] [xbp-48h] BYREF
  int v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CCAA12 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_25217/*"{0:D}"*/);
    byte_4CCAA12 = 1;
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0, 0) )
  {
    v11 = this->fields.waveShowObject;
    if ( !v11 )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(v11, 1, 0);
    nowWaveLabel = this->fields.nowWaveLabel;
    v18 = now + 1;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v11 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25217/*"{0:D}"*/, v13, 0);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, (System_String_o *)v11, 0),
          maxWaveLabel = this->fields.maxWaveLabel,
          v17 = max + 1,
          v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17),
          v11 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25217/*"{0:D}"*/, v15, 0),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, (System_String_o *)v11, 0), !data) )
    {
LABEL_13:
      sub_1C71608(v11, v10);
    }
    if ( !BattleData__IsWarBoard(data, 0) )
      BattlePerformanceInfoComponent__UpdateWaveDisplay(this, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceInfoComponent__setStockSprite(
        BattlePerformanceInfoComponent_o *this,
        int32_t index,
        bool isPlayChangeEffect,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *stockPSrpite; // x0
  UISprite_o *stockSprite; // x22
  Il2CppObject *v9; // x0
  UnityEngine_GameObject_o *stockEffectPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCAA14 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_20262/*"icon_drop_item_0"*/);
    byte_4CCAA14 = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0),
        (stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0)
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0),
        stockSprite = this->fields.stockSprite,
        v12 = index / 3 + 1,
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12),
        stockPSrpite = (UnityEngine_Behaviour_o *)System_String__Concat((Il2CppObject *)StringLiteral_20262/*"icon_drop_item_0"*/, v9, 0),
        !stockSprite) )
  {
LABEL_16:
    sub_1C71608(stockPSrpite, *(_QWORD *)&index);
  }
  UISprite__set_spriteName(stockSprite, (System_String_o *)stockPSrpite, 0);
  if ( index % 3 == 2 )
  {
    stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite;
    if ( !stockPSrpite )
      goto LABEL_16;
  }
  else
  {
    if ( index % 3 != 1 )
      goto LABEL_12;
    stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
    if ( !stockPSrpite )
      goto LABEL_16;
  }
  UnityEngine_Behaviour__set_enabled(stockPSrpite, 1, 0);
LABEL_12:
  if ( isPlayChangeEffect )
  {
    stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockSprite;
    if ( !stockPSrpite )
      goto LABEL_16;
    stockEffectPrefab = this->fields.stockEffectPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)stockPSrpite, 0);
    BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, stockEffectPrefab, transform, 0, 0);
  }
}


void BattlePerformanceInfoComponent__updateDropItemCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        bool isPlayChangeEffect,
        const MethodInfo *method)
{
  __int64 v7; // x20
  void *Instance; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x21
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  int v19; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x25
  int32_t stockIndex; // w22
  System_Collections_Generic_List_object__o *v22; // x24
  int32_t v23; // w26
  System_Collections_Generic_List_object__o *v24; // x8
  __int64 v25; // x27
  __int64 v26; // x8
  int v27; // w8
  const MethodInfo *v28; // x2
  __int64 v29; // x8
  __int64 v30; // x8
  BattleItemData_o *v31; // x27
  System_Collections_Generic_List_object__o *v32; // x8
  int32_t v33; // w28
  __int64 v34; // x8
  __int64 v35; // x8
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass *v45; // x1
  Il2CppClass **v46; // x0
  __int64 v47; // x27
  System_Collections_Generic_List_object__o *v48; // x8
  __int64 v49; // x27
  __int64 v50; // x8
  int32_t v51; // w8
  int monitor_high; // w27
  struct System_Int32_array *raritylist; // x8
  int v54; // w9
  int32_t v55; // w27
  System_Action_object__o *v56; // x25
  __int64 v57; // x8
  UILabel_o *stockLabel; // x21
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  UILabel_o *v61; // x19
  bool v62; // [xsp+Ch] [xbp-84h]
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  int v64; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4CCAA13 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_BattleDropItem__TypeInfo);
    sub_1C713B0(&BattlePerformanceInfoComponent_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleDropItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C713B0(&Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__);
    sub_1C713B0(&BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
    byte_4CCAA13 = 1;
  }
  v64 = 0;
  entity = 0;
  v7 = sub_1C715FC(BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_107;
  *(_QWORD *)(v7 + 16) = bData;
  v16 = v7 + 16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)bData, v10, v11, v12, v13, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_107;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_QWORD *)v16 )
    goto LABEL_107;
  v18 = *(_QWORD *)(*(_QWORD *)v16 + 536LL);
  if ( !v18 )
    goto LABEL_107;
  v19 = *(_DWORD *)(v18 + 24);
  if ( v19 )
  {
    v62 = isPlayChangeEffect;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    stockIndex = this->fields.stockIndex;
    v22 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleDropItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    if ( v19 >= 1 )
    {
      v23 = 0;
      while ( *(_QWORD *)v16 )
      {
        Instance = *(void **)(*(_QWORD *)v16 + 536LL);
        if ( !Instance )
          break;
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v23,
                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !Instance || !v20 )
          break;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v20,
               &entity,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_3408ECC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = entity;
          if ( !entity )
            break;
          if ( LODWORD(entity[3].klass) != 35 )
          {
            if ( !*(_QWORD *)v16 )
              break;
            Instance = *(void **)(*(_QWORD *)v16 + 536LL);
            if ( !Instance )
              break;
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Instance,
                         v23,
                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *((int *)Instance + 15) < 1000 )
              goto LABEL_25;
            if ( !*(_QWORD *)v16 )
              break;
            Instance = *(void **)(*(_QWORD *)v16 + 536LL);
            if ( !Instance )
              break;
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Instance,
                         v23,
                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *((int *)Instance + 15) <= 1002 )
            {
              if ( !entity )
                break;
              monitor_high = HIDWORD(entity[2].monitor);
              if ( monitor_high < 1 )
                goto LABEL_95;
              Instance = BattlePerformanceInfoComponent_TypeInfo;
              if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
                Instance = BattlePerformanceInfoComponent_TypeInfo;
              }
              raritylist = (struct System_Int32_array *)**((_QWORD **)Instance + 23);
              if ( !raritylist )
                break;
              if ( monitor_high >= SLODWORD(raritylist->max_length) )
              {
LABEL_95:
                v27 = 0;
              }
              else
              {
                if ( !*((_DWORD *)Instance + 56) )
                {
                  j_il2cpp_runtime_class_init_0(Instance);
                  raritylist = BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist;
                }
                if ( !entity || !raritylist )
                  break;
                v54 = HIDWORD(entity[2].monitor) - 1;
                if ( (unsigned int)v54 >= LODWORD(raritylist->max_length) )
LABEL_108:
                  sub_1C71610(Instance);
                if ( !*(_QWORD *)v16 )
                  break;
                Instance = *(void **)(*(_QWORD *)v16 + 536LL);
                if ( !Instance )
                  break;
                v55 = raritylist->m_Items[v54];
                Instance = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             v23,
                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
                if ( !Instance )
                  break;
                v27 = v55 + *((_DWORD *)Instance + 15) - 1000;
              }
            }
            else
            {
LABEL_25:
              Instance = BattlePerformanceInfoComponent_TypeInfo;
              if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
                Instance = BattlePerformanceInfoComponent_TypeInfo;
              }
              if ( !*(_QWORD *)v16 )
                break;
              v24 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v16 + 536LL);
              if ( !v24 )
                break;
              v25 = **((_QWORD **)Instance + 23);
              Instance = System_Collections_Generic_List_object___get_Item(
                           v24,
                           v23,
                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance || !v25 )
                break;
              v26 = *((int *)Instance + 15);
              if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 24) )
                goto LABEL_108;
              v27 = *(_DWORD *)(v25 + 4 * v26 + 32);
            }
            Instance = entity;
            if ( stockIndex < v27 )
              stockIndex = v27;
            if ( !entity )
              break;
          }
          Instance = (void *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)Instance, 0);
          if ( (int)Instance >= 1 )
          {
            if ( !*(_QWORD *)v16 )
              break;
            v29 = *(_QWORD *)(*(_QWORD *)v16 + 64LL);
            if ( !v29 )
              break;
            v30 = *(_QWORD *)(v29 + 288);
            if ( !v30 )
              break;
            v9 = (const MethodInfo *)(unsigned int)Instance;
            Instance = *(void **)(v30 + 72);
            if ( !Instance )
              break;
            BattlePerformanceMaster__StartBattleGetEffect((BattlePerformanceMaster_o *)Instance, (int32_t)v9, v28);
            if ( !entity )
              break;
            if ( LODWORD(entity[3].klass) == 35 )
            {
              Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
              if ( !*(_QWORD *)v16 )
                break;
              v31 = (BattleItemData_o *)Instance;
              Instance = *(void **)(*(_QWORD *)v16 + 536LL);
              if ( !Instance )
                break;
              Instance = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)Instance,
                           v23,
                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !*(_QWORD *)v16 )
                break;
              v32 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v16 + 536LL);
              if ( !v32 )
                break;
              v33 = *((_DWORD *)Instance + 6);
              Instance = System_Collections_Generic_List_object___get_Item(
                           v32,
                           v23,
                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !v31 )
                break;
              BattleItemData__AddItemCountWithIdCheck(v31, v33, *((_DWORD *)Instance + 11), 0);
              if ( !*(_QWORD *)v16 )
                break;
              v34 = *(_QWORD *)(*(_QWORD *)v16 + 64LL);
              if ( !v34 )
                break;
              v35 = *(_QWORD *)(v34 + 288);
              if ( !v35 )
                break;
              Instance = *(void **)(v35 + 72);
              if ( !Instance )
                break;
              BattlePerformanceMaster__UpdateBattleItemUi((BattlePerformanceMaster_o *)Instance, v9);
              if ( !*(_QWORD *)v16 )
                break;
              Instance = *(void **)(*(_QWORD *)v16 + 536LL);
              if ( !Instance )
                break;
              Instance = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)Instance,
                           v23,
                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !v22 )
                break;
              items = v22->fields._items;
              v43 = Method_System_Collections_Generic_List_BattleDropItem__Add__;
              ++v22->fields._version;
              if ( !items )
                break;
              size = v22->fields._size;
              v45 = (Il2CppClass *)Instance;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
              }
              else
              {
                v46 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v46[4] = v45;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)v45, v36, v37, v38, v39, v40, v41);
              }
            }
          }
        }
        else
        {
          Instance = BattlePerformanceInfoComponent_TypeInfo;
          if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
            Instance = BattlePerformanceInfoComponent_TypeInfo;
          }
          v47 = **((_QWORD **)Instance + 23);
          if ( !v47 )
            break;
          if ( !*(_QWORD *)v16 )
            break;
          Instance = *(void **)(*(_QWORD *)v16 + 536LL);
          if ( !Instance )
            break;
          Instance = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Instance,
                       v23,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
          if ( !Instance )
            break;
          if ( *((_DWORD *)Instance + 15) < *(_DWORD *)(v47 + 24) )
          {
            Instance = BattlePerformanceInfoComponent_TypeInfo;
            if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
              Instance = BattlePerformanceInfoComponent_TypeInfo;
            }
            if ( !*(_QWORD *)v16 )
              break;
            v48 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v16 + 536LL);
            if ( !v48 )
              break;
            v49 = **((_QWORD **)Instance + 23);
            Instance = System_Collections_Generic_List_object___get_Item(
                         v48,
                         v23,
                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance || !v49 )
              break;
            v50 = *((int *)Instance + 15);
            if ( (unsigned int)v50 >= *(_DWORD *)(v49 + 24) )
              goto LABEL_108;
            v51 = *(_DWORD *)(v49 + 4 * v50 + 32);
            if ( stockIndex < v51 )
              stockIndex = v51;
          }
        }
        if ( v19 == ++v23 )
          goto LABEL_96;
      }
LABEL_107:
      sub_1C71608(Instance, v9);
    }
LABEL_96:
    v56 = (System_Action_object__o *)sub_1C715FC(System_Action_BattleDropItem__TypeInfo);
    System_Action_object____ctor(
      v56,
      (Il2CppObject *)v7,
      Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__,
      0);
    if ( !v22 )
      goto LABEL_107;
    System_Collections_Generic_List_object___ForEach(
      v22,
      (System_Action_T__o *)v56,
      (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    if ( !*(_QWORD *)v16 )
      goto LABEL_107;
    v57 = *(_QWORD *)(*(_QWORD *)v16 + 536LL);
    if ( !v57 )
      goto LABEL_107;
    stockLabel = this->fields.stockLabel;
    v64 = *(_DWORD *)(v57 + 24);
    Instance = System_Int32__ToString((int32_t)&v64, 0);
    if ( !stockLabel )
      goto LABEL_107;
    UILabel__set_text(stockLabel, (System_String_o *)Instance, 0);
    if ( stockIndex != this->fields.stockIndex )
    {
      this->fields.stockIndex = stockIndex;
      BattlePerformanceInfoComponent__setStockSprite(this, stockIndex, v62, v59);
    }
  }
  else
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, isPlayChangeEffect, v17);
    if ( !*(_QWORD *)v16 )
      goto LABEL_107;
    v60 = *(_QWORD *)(*(_QWORD *)v16 + 536LL);
    if ( !v60 )
      goto LABEL_107;
    v61 = this->fields.stockLabel;
    v64 = *(_DWORD *)(v60 + 24);
    Instance = System_Int32__ToString((int32_t)&v64, 0);
    if ( !v61 )
      goto LABEL_107;
    UILabel__set_text(v61, (System_String_o *)Instance, 0);
  }
}


void BattlePerformanceInfoComponent__updateNokoriEnemyCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v4; // x19
  int32_t EnemyCountStartValue_k__BackingField; // w22
  int m_CancellationTokenSource; // w8
  BattlePerformanceInfoComponent_o *v7; // x21
  unsigned int v8; // w23
  UILabel_o *nokoriEnemyCountLabel; // x19
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x21
  bool v13; // w0
  Il2CppObject *v14; // x1
  System_String_o *v15; // x0
  int32_t v16; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v17; // [xsp+8h] [xbp-38h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4CCAA11 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_2890/*"BATTLE_WARBOARD_REMAINING"*/);
    sub_1C713B0(&StringLiteral_2808/*"BATTLE_NOKORIENEMY"*/);
    this = (BattlePerformanceInfoComponent_o *)sub_1C713B0(&StringLiteral_25629/*"残り{0:#,0}体"*/);
    byte_4CCAA11 = 1;
  }
  if ( !bData )
    goto LABEL_27;
  this = (BattlePerformanceInfoComponent_o *)BattleData__getEnemyServantList(bData, 0);
  EnemyCountStartValue_k__BackingField = bData->fields._EnemyCountStartValue_k__BackingField;
  v18 = EnemyCountStartValue_k__BackingField;
  if ( !this )
    goto LABEL_27;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= m_CancellationTokenSource )
        sub_1C71610(this);
      this = (BattlePerformanceInfoComponent_o *)*((_QWORD *)&v7->fields.nokoriEnemyCountLabel + (int)v8);
      if ( !this )
        break;
      this = (BattlePerformanceInfoComponent_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        v18 = ++EnemyCountStartValue_k__BackingField;
      m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
      if ( (int)++v8 >= m_CancellationTokenSource )
        goto LABEL_12;
    }
LABEL_27:
    sub_1C71608(this, bData);
  }
LABEL_12:
  if ( EnemyCountStartValue_k__BackingField < 0 )
  {
    EnemyCountStartValue_k__BackingField = 0;
    v18 = 0;
  }
  if ( BattleData__IsWarBoard(bData, 0) )
  {
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2890/*"BATTLE_WARBOARD_REMAINING"*/, 0);
    v11 = System_Int32__ToString((int32_t)&v18, 0);
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_2808/*"BATTLE_NOKORIENEMY"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BattlePerformanceInfoComponent_o *)LocalizationManager__Get(v12, 0);
    if ( !this )
      goto LABEL_27;
    v10 = (System_String_o *)this;
    v13 = System_String__Equals_64067044((System_String_o *)this, v12, 0);
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( v13 )
    {
      v16 = EnemyCountStartValue_k__BackingField;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
      v15 = (System_String_o *)StringLiteral_25629/*"残り{0:#,0}体"*/;
      goto LABEL_25;
    }
    v17 = EnemyCountStartValue_k__BackingField;
    v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  }
  v14 = (Il2CppObject *)v11;
  v15 = v10;
LABEL_25:
  this = (BattlePerformanceInfoComponent_o *)System_String__Format(v15, v14, 0);
  if ( !nokoriEnemyCountLabel )
    goto LABEL_27;
  UILabel__set_text(nokoriEnemyCountLabel, (System_String_o *)this, 0);
}


void BattlePerformanceInfoComponent__updateTime(BattlePerformanceInfoComponent_o *this, const MethodInfo *method)
{
  System_DateTime_o v3; // x0
  int64_t Ticks; // x0
  int64_t lastCheckTime; // x22
  int64_t v6; // x20
  System_TimeSpan_o v7; // x0
  double TotalSeconds; // d0
  int v9; // w20
  System_DateTime_o v10; // x0
  int64_t v11; // x0
  int64_t v12; // x1
  const MethodInfo *v13; // x2
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  int64_t v15; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CCAA0F & 1) == 0 )
  {
    sub_1C713B0(&System_DateTime_TypeInfo);
    sub_1C713B0(&System_TimeSpan_TypeInfo);
    byte_4CCAA0F = 1;
  }
  v15 = 0;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0).fields._dateData;
  v3.fields._dateData = (uint64_t)&dateData;
  Ticks = System_DateTime__get_Ticks(v3, 0);
  lastCheckTime = this->fields.lastCheckTime;
  v6 = Ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v7.fields._ticks = (int64_t)&v15;
  v15 = v6 - lastCheckTime;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v7, 0);
  if ( TotalSeconds == INFINITY )
    v9 = 0x80000000;
  else
    v9 = (int)TotalSeconds;
  if ( v9 >= 1 && this->fields.remaingTimeSeconds >= 1 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    dateData = System_DateTime__get_Now(0).fields._dateData;
    v10.fields._dateData = (uint64_t)&dateData;
    v11 = System_DateTime__get_Ticks(v10, 0);
    v12 = this->fields.remaingTimeSeconds - (unsigned int)v9;
    this->fields.remaingTimeSeconds = v12;
    this->fields.lastCheckTime = v11;
    BattlePerformanceInfoComponent__drawTime(this, v12, v13);
  }
}


void BattlePerformanceInfoComponent___c__DisplayClass49_0___ctor(
        BattlePerformanceInfoComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceInfoComponent___c__DisplayClass49_0___updateDropItemCount_b__0(
        BattlePerformanceInfoComponent___c__DisplayClass49_0_o *this,
        BattleDropItem_o *x,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent___c__DisplayClass49_0_o *v4; // x20
  struct BattleData_o *bData; // x8

  v4 = this;
  if ( (byte_4CCAA16 & 1) == 0 )
  {
    this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)sub_1C713B0(&Method_System_Collections_Generic_List_BattleDropItem__Remove__);
    byte_4CCAA16 = 1;
  }
  bData = v4->fields.bData;
  if ( !bData || (this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)bData->fields.droplist) == 0 )
    sub_1C71608(this, x);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this,
    (Il2CppObject *)x,
    (const MethodInfo_3811C40 *)Method_System_Collections_Generic_List_BattleDropItem__Remove__);
}