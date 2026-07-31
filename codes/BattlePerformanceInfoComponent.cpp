void BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593BE46 & 1) == 0 )
  {
    sub_21FFC50(&BattlePerformanceInfoComponent_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338);
    byte_593BE46 = 1;
  }
  v1 = (System_Array_o *)sub_21FFD10(int___TypeInfo, 9);
  v2.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v1, v2, 0);
  BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist = v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields,
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
    sub_21FFECC(0, v3);
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

  if ( (byte_593BE3C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BE3C = 1;
  }
  nokoriTimeObject = (UnityEngine_Object_o *)this->fields.nokoriTimeObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0, 0) )
  {
    transform = this->fields.nokoriTurnObject;
    if ( !transform )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(transform, 0, 0);
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0, 0) )
  {
    transform = this->fields.waveShowObject;
    if ( transform )
    {
      UnityEngine_GameObject__SetActive(transform, 0, 0);
      goto LABEL_24;
    }
LABEL_29:
    sub_21FFECC(transform, v4);
  }
LABEL_24:
  stockSprite = (UnityEngine_Object_o *)this->fields.stockSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
    sub_21FFECC(nowWaveLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowWaveLabel, this->fields.isWaveCountInfinity, 0);
}


void BattlePerformanceInfoComponent__drawTime(
        BattlePerformanceInfoComponent_o *this,
        int64_t showTimeSeconds,
        const MethodInfo *method)
{
  System_TimeSpan_o v5; // x0
  __int64 v6; // x1
  double TotalHours; // d0
  UILabel_o *v8; // x20
  int v9; // w24
  System_String_o *v10; // x21
  Il2CppObject *v11; // x22
  System_TimeSpan_o v12; // x0
  Il2CppObject *v13; // x23
  System_TimeSpan_o v14; // x0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  UILabel_o *nokoriTimeLabel; // x20
  System_String_o *v19; // x21
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-50h] BYREF
  int v25; // [xsp+14h] [xbp-4Ch] BYREF
  int64_t v26; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593BE41 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_TimeSpan_TypeInfo);
    sub_21FFC50(&StringLiteral_2930/*"BATTLE_RAID_REMAINING_TIME"*/);
    byte_593BE41 = 1;
  }
  v26 = 0;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, showTimeSeconds);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"BATTLE_RAID_REMAINING_TIME"*/, 0);
    v25 = 0;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v25);
    Minutes = 0;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Minutes);
    Seconds = 0;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Seconds);
    v16 = System_String__Format_75484644(v19, v20, v21, v22, 0);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v16, 0);
      goto LABEL_18;
    }
LABEL_21:
    sub_21FFECC(v16, v17);
  }
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, showTimeSeconds);
  v5.fields._ticks = (int64_t)&v26;
  v26 = 10000000 * showTimeSeconds;
  TotalHours = System_TimeSpan__get_TotalHours(v5, 0);
  v8 = this->fields.nokoriTimeLabel;
  if ( TotalHours == INFINITY )
    v9 = 0x80000000;
  else
    v9 = (int)TotalHours;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2930/*"BATTLE_RAID_REMAINING_TIME"*/, 0);
  v25 = v9;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v25);
  v12.fields._ticks = (int64_t)&v26;
  Minutes = System_TimeSpan__get_Minutes(v12, 0);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Minutes);
  v14.fields._ticks = (int64_t)&v26;
  Seconds = System_TimeSpan__get_Seconds(v14, 0);
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Seconds);
  v16 = System_String__Format_75484644(v10, v11, v13, v15, 0);
  if ( !v8 )
    goto LABEL_21;
  UILabel__set_text(v8, v16, 0);
  if ( v9 > 0 )
    return;
LABEL_18:
  v16 = (System_String_o *)this->fields.nokoriTimeLabel;
  if ( !v16 )
    goto LABEL_21;
  v27.fields.g = 0.0;
  v27.fields.b = 0.0;
  v27.fields.r = 1.0;
  v27.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v16, v27, 0);
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
  Il2CppObject *MasterData_object; // x22
  int32_t eventId; // w21
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v16; // x21
  __int64 v17; // x1
  int64_t endedAt; // x21
  System_DateTime_o v19; // x0
  int64_t Time_48310584; // x21
  __int64 v21; // x1
  System_DateTime_o v22; // x0
  int64_t Ticks; // x0
  int64_t remaingTimeSeconds; // x1
  const MethodInfo *v25; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_593BE3D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    this = (BattlePerformanceInfoComponent_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593BE3D = 1;
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
  battle_info = data->fields.battle_info;
  v4->fields.isWaveCountInfinity = (unsigned __int8)this & 1;
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
  this = (BattlePerformanceInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_75;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  this = (BattlePerformanceInfoComponent_o *)data->fields.battle_info;
  v4->fields.isUpdateTimer = 1;
  if ( !this )
    goto LABEL_75;
  eventId = battle_ent->fields.eventId;
  this = (BattlePerformanceInfoComponent_o *)BattleInfoData__getRaidId((BattleInfoData_o *)this, 0);
  if ( !MasterData_object )
    goto LABEL_75;
  Entity = EventRaidMaster__GetEntity((EventRaidMaster_o *)MasterData_object, eventId, (int32_t)this, 0);
  if ( Entity )
  {
    v16 = Entity;
    if ( BattleData__isRaidConnection(data, 0) )
    {
      endedAt = v16->fields.endedAt;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
      v19.fields._dateData = NetworkManager__getDateTime_48311376(endedAt, 0).fields._dateData;
      Time_48310584 = NetworkManager__getTime_48310584(v19, 0);
      v4->fields.remaingTimeSeconds = Time_48310584 - NetworkManager__getTime(0);
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v21);
      dateData = System_DateTime__get_Now(0).fields._dateData;
      v22.fields._dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v22, 0);
      remaingTimeSeconds = v4->fields.remaingTimeSeconds;
      v4->fields.lastCheckTime = Ticks;
      BattlePerformanceInfoComponent__drawTime(v4, remaingTimeSeconds, v25);
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
  v27.fields.z = 0.0;
  v27.fields.x = 316.0;
  v27.fields.y = 158.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v27, 0);
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
  if ( !byte_5931940 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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
  v28.fields.y = 0.0;
  v28.fields.z = 0.0;
  v28.fields.x = -66.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v28, 0);
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
  v29.fields.z = 0.0;
  v29.fields.x = 4.0;
  v29.fields.y = -9.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v29, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyLabel;
  if ( !this )
    goto LABEL_75;
  UILabel__set_fontSize((UILabel_o *)this, 17, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnRoot;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v11 = this;
  if ( !byte_5931940 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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
  v30.fields.y = 0.0;
  v30.fields.z = 0.0;
  v30.fields.x = 6.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0);
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
  v31.fields.z = 0.0;
  v31.fields.y = -9.0;
  v31.fields.x = 70.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v31, 0);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnLabel;
  if ( !this
    || (UILabel__set_fontSize((UILabel_o *)this, 17, 0),
        (this = (BattlePerformanceInfoComponent_o *)v4->fields.itemRoot) == 0)
    || (this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0)) == 0 )
  {
LABEL_75:
    sub_21FFECC(this, data);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceInfoComponent__setShowElapsedTurn(
        BattlePerformanceInfoComponent_o *this,
        int32_t state,
        int32_t now,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nokoriTurnObject; // x22
  __int64 v8; // x1
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  __int64 v10; // x1
  UILabel_o *nokoriTurnLabel; // x19
  System_String_o *v12; // x20
  int32_t *v13; // x1
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-38h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593BE3F & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_2882/*"BATTLE_ELAPSED_TURN"*/);
    sub_21FFC50(&StringLiteral_3004/*"BATTLE_TOTALELAPSED_TURN"*/);
    byte_593BE3F = 1;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_TOTALELAPSED_TURN"*/, 0);
      v13 = &v15;
      v15 = now;
    }
    else
    {
      if ( state != 1 )
        return;
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2882/*"BATTLE_ELAPSED_TURN"*/, 0);
      v13 = &v16;
      v16 = now;
    }
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, v13);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v12, v14, 0);
    if ( !nokoriTurnLabel )
LABEL_22:
      sub_21FFECC(nokoriTimeObject, v8);
    UILabel__set_text(nokoriTurnLabel, (System_String_o *)nokoriTimeObject, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v13; // x1
  bool IsWarBoard; // w8
  UILabel_o *nokoriTurnLabel; // x19
  int v16; // w9
  __int64 *v17; // x8
  System_String_o *v18; // x20
  Il2CppObject *v19; // x0
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593BE3E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3009/*"BATTLE_WARBOARD_REMAINING"*/);
    sub_21FFC50(&StringLiteral_2931/*"BATTLE_RAID_REMAINING_TURN"*/);
    byte_593BE3E = 1;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  v20 = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0, 0) )
  {
    nokoriTimeObject = this->fields.nokoriTimeObject;
    if ( !nokoriTimeObject )
      goto LABEL_23;
    nokoriTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nokoriTimeObject, 0);
    if ( !nokoriTimeObject )
      goto LABEL_23;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)nokoriTimeObject, this->fields.timeDefPos, 0);
    nokoriTimeObject = this->fields.nokoriTurnObject;
    if ( !nokoriTimeObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(nokoriTimeObject, 1, 0);
    v12 = now <= 1 ? 1 : now;
    v20 = (limit - v12 + 1) & ~((limit - v12 + 1) >> 31);
    if ( !bdata )
      goto LABEL_23;
    IsWarBoard = BattleData__IsWarBoard(bdata, 0);
    nokoriTurnLabel = this->fields.nokoriTurnLabel;
    v16 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( IsWarBoard )
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
      v17 = &StringLiteral_3009/*"BATTLE_WARBOARD_REMAINING"*/;
    }
    else
    {
      if ( !v16 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
      v17 = &StringLiteral_2931/*"BATTLE_RAID_REMAINING_TURN"*/;
    }
    v18 = LocalizationManager__Get((System_String_o *)*v17, 0);
    v19 = (Il2CppObject *)System_Int32__ToString((int32_t)&v20, 0);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v18, v19, 0);
    if ( !nokoriTurnLabel )
LABEL_23:
      sub_21FFECC(nokoriTimeObject, v10);
    UILabel__set_text(nokoriTurnLabel, (System_String_o *)nokoriTimeObject, 0);
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
    sub_21FFECC(this, bdata);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_593BE43 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_26418/*"{0:D}"*/);
    byte_593BE43 = 1;
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0, 0) )
  {
    v11 = this->fields.waveShowObject;
    if ( !v11 )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(v11, 1, 0);
    nowWaveLabel = this->fields.nowWaveLabel;
    v18 = now + 1;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v18);
    v11 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_26418/*"{0:D}"*/, v13, 0);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, (System_String_o *)v11, 0),
          maxWaveLabel = this->fields.maxWaveLabel,
          v17 = max + 1,
          v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17),
          v11 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_26418/*"{0:D}"*/, v15, 0),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, (System_String_o *)v11, 0), !data) )
    {
LABEL_13:
      sub_21FFECC(v11, v10);
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

  if ( (byte_593BE45 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21116/*"icon_drop_item_0"*/);
    byte_593BE45 = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0),
        (stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0)
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0),
        stockSprite = this->fields.stockSprite,
        v12 = index / 3 + 1,
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12),
        stockPSrpite = (UnityEngine_Behaviour_o *)System_String__Concat((Il2CppObject *)StringLiteral_21116/*"icon_drop_item_0"*/, v9, 0),
        !stockSprite) )
  {
LABEL_16:
    sub_21FFECC(stockPSrpite, *(_QWORD *)&index);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
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
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
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

  if ( (byte_593BE44 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleDropItem__TypeInfo);
    sub_21FFC50(&BattlePerformanceInfoComponent_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_21FFC50(&Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__);
    sub_21FFC50(&BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
    byte_593BE44 = 1;
  }
  v64 = 0;
  entity = 0;
  v7 = sub_21FFEBC(BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_106;
  *(_QWORD *)(v7 + 16) = bData;
  v16 = v7 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)bData, v10, v11, v12, v13, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_QWORD *)v16 )
    goto LABEL_106;
  v18 = *(_QWORD *)(*(_QWORD *)v16 + 544LL);
  if ( !v18 )
    goto LABEL_106;
  v19 = *(_DWORD *)(v18 + 24);
  if ( v19 )
  {
    v62 = isPlayChangeEffect;
    v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    stockIndex = this->fields.stockIndex;
    v22 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleDropItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v22,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    if ( v19 >= 1 )
    {
      v23 = 0;
      while ( *(_QWORD *)v16 )
      {
        Instance = *(void **)(*(_QWORD *)v16 + 544LL);
        if ( !Instance )
          break;
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v23,
                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !Instance || !v20 )
          break;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v20,
               &entity,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = entity;
          if ( !entity )
            break;
          if ( LODWORD(entity[3].klass) != 35 )
          {
            if ( !*(_QWORD *)v16 )
              break;
            Instance = *(void **)(*(_QWORD *)v16 + 544LL);
            if ( !Instance )
              break;
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Instance,
                         v23,
                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *((int *)Instance + 15) < 1000 )
              goto LABEL_25;
            if ( !*(_QWORD *)v16 )
              break;
            Instance = *(void **)(*(_QWORD *)v16 + 544LL);
            if ( !Instance )
              break;
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Instance,
                         v23,
                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *((int *)Instance + 15) <= 1002 )
            {
              if ( !entity )
                break;
              monitor_high = HIDWORD(entity[2].monitor);
              if ( monitor_high < 1 )
                goto LABEL_94;
              Instance = BattlePerformanceInfoComponent_TypeInfo;
              if ( !*(&BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo, v9);
                Instance = BattlePerformanceInfoComponent_TypeInfo;
              }
              raritylist = (struct System_Int32_array *)**((_QWORD **)Instance + 23);
              if ( !raritylist )
                break;
              if ( monitor_high >= SLODWORD(raritylist->max_length) )
              {
LABEL_94:
                v27 = 0;
              }
              else
              {
                if ( !*((_DWORD *)Instance + 57) )
                {
                  j_il2cpp_runtime_class_init_0(Instance, v9);
                  raritylist = BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist;
                }
                if ( !entity || !raritylist )
                  break;
                v54 = HIDWORD(entity[2].monitor) - 1;
                if ( (unsigned int)v54 >= LODWORD(raritylist->max_length) )
LABEL_107:
                  sub_21FFED4(Instance);
                if ( !*(_QWORD *)v16 )
                  break;
                Instance = *(void **)(*(_QWORD *)v16 + 544LL);
                if ( !Instance )
                  break;
                v55 = raritylist->m_Items[v54];
                Instance = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             v23,
                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
                if ( !Instance )
                  break;
                v27 = v55 + *((_DWORD *)Instance + 15) - 1000;
              }
            }
            else
            {
LABEL_25:
              Instance = BattlePerformanceInfoComponent_TypeInfo;
              if ( !*(&BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo, v9);
                Instance = BattlePerformanceInfoComponent_TypeInfo;
              }
              if ( !*(_QWORD *)v16 )
                break;
              v24 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v16 + 544LL);
              if ( !v24 )
                break;
              v25 = **((_QWORD **)Instance + 23);
              Instance = System_Collections_Generic_List_object___get_Item(
                           v24,
                           v23,
                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance || !v25 )
                break;
              v26 = *((int *)Instance + 15);
              if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 24) )
                goto LABEL_107;
              v27 = *(_DWORD *)(v25 + 4 * v26 + 32);
            }
            Instance = entity;
            if ( stockIndex <= v27 )
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
              Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
              if ( !*(_QWORD *)v16 )
                break;
              v31 = (BattleItemData_o *)Instance;
              Instance = *(void **)(*(_QWORD *)v16 + 544LL);
              if ( !Instance )
                break;
              Instance = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)Instance,
                           v23,
                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !*(_QWORD *)v16 )
                break;
              v32 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v16 + 544LL);
              if ( !v32 )
                break;
              v33 = *((_DWORD *)Instance + 6);
              Instance = System_Collections_Generic_List_object___get_Item(
                           v32,
                           v23,
                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
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
              Instance = *(void **)(*(_QWORD *)v16 + 544LL);
              if ( !Instance )
                break;
              Instance = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)Instance,
                           v23,
                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
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
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
              }
              else
              {
                v46 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v46[4] = v45;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v46 + 4), (int32_t)v45, v36, v37, v38, v39, v40, v41);
              }
            }
          }
        }
        else
        {
          Instance = BattlePerformanceInfoComponent_TypeInfo;
          if ( !*(&BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo, v9);
            Instance = BattlePerformanceInfoComponent_TypeInfo;
          }
          v47 = **((_QWORD **)Instance + 23);
          if ( !v47 )
            break;
          if ( !*(_QWORD *)v16 )
            break;
          Instance = *(void **)(*(_QWORD *)v16 + 544LL);
          if ( !Instance )
            break;
          Instance = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Instance,
                       v23,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
          if ( !Instance )
            break;
          if ( *((_DWORD *)Instance + 15) < *(_DWORD *)(v47 + 24) )
          {
            Instance = BattlePerformanceInfoComponent_TypeInfo;
            if ( !*(&BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo, v9);
              Instance = BattlePerformanceInfoComponent_TypeInfo;
            }
            if ( !*(_QWORD *)v16 )
              break;
            v48 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v16 + 544LL);
            if ( !v48 )
              break;
            v49 = **((_QWORD **)Instance + 23);
            Instance = System_Collections_Generic_List_object___get_Item(
                         v48,
                         v23,
                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance || !v49 )
              break;
            v50 = *((int *)Instance + 15);
            if ( (unsigned int)v50 >= *(_DWORD *)(v49 + 24) )
              goto LABEL_107;
            v51 = *(_DWORD *)(v49 + 4 * v50 + 32);
            if ( stockIndex <= v51 )
              stockIndex = v51;
          }
        }
        if ( v19 == ++v23 )
          goto LABEL_95;
      }
LABEL_106:
      sub_21FFECC(Instance, v9);
    }
LABEL_95:
    v56 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleDropItem__TypeInfo);
    System_Action_object____ctor(
      v56,
      (Il2CppObject *)v7,
      Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__,
      0);
    if ( !v22 )
      goto LABEL_106;
    System_Collections_Generic_List_object___ForEach(
      v22,
      (System_Action_T__o *)v56,
      (const MethodInfo_445054C *)Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    if ( !*(_QWORD *)v16 )
      goto LABEL_106;
    v57 = *(_QWORD *)(*(_QWORD *)v16 + 544LL);
    if ( !v57 )
      goto LABEL_106;
    stockLabel = this->fields.stockLabel;
    v64 = *(_DWORD *)(v57 + 24);
    Instance = System_Int32__ToString((int32_t)&v64, 0);
    if ( !stockLabel )
      goto LABEL_106;
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
      goto LABEL_106;
    v60 = *(_QWORD *)(*(_QWORD *)v16 + 544LL);
    if ( !v60 )
      goto LABEL_106;
    v61 = this->fields.stockLabel;
    v64 = *(_DWORD *)(v60 + 24);
    Instance = System_Int32__ToString((int32_t)&v64, 0);
    if ( !v61 )
      goto LABEL_106;
    UILabel__set_text(v61, (System_String_o *)Instance, 0);
  }
}


void BattlePerformanceInfoComponent__updateNokoriEnemyCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v4; // x19
  BattleServantData_array *EnemyServantList; // x0
  __int64 v6; // x1
  int32_t EnemyCountStartValue_k__BackingField; // w22
  int max_length; // w8
  BattleServantData_array *v9; // x21
  __int64 v10; // x23
  int v11; // w22
  __int64 v12; // x1
  UILabel_o *nokoriEnemyCountLabel; // x19
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  bool v17; // w0
  Il2CppObject *v18; // x1
  System_String_o *v19; // x0
  int v20; // [xsp+Ch] [xbp-44h] BYREF
  int v21; // [xsp+18h] [xbp-38h] BYREF
  int32_t v22; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_593BE42 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3009/*"BATTLE_WARBOARD_REMAINING"*/);
    sub_21FFC50(&StringLiteral_2926/*"BATTLE_NOKORIENEMY"*/);
    this = (BattlePerformanceInfoComponent_o *)sub_21FFC50(&StringLiteral_26847/*"残り{0:#,0}体"*/);
    byte_593BE42 = 1;
  }
  v22 = 0;
  if ( !bData )
    goto LABEL_25;
  EnemyServantList = BattleData__getEnemyServantList(bData, 0);
  EnemyCountStartValue_k__BackingField = bData->fields._EnemyCountStartValue_k__BackingField;
  v22 = EnemyCountStartValue_k__BackingField;
  if ( !EnemyServantList )
    goto LABEL_23;
  max_length = EnemyServantList->max_length;
  v9 = EnemyServantList;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v10 >= max_length )
      {
        v22 = EnemyCountStartValue_k__BackingField;
        sub_21FFED4(EnemyServantList);
      }
      EnemyServantList = (BattleServantData_array *)v9->m_Items[v10];
      if ( !EnemyServantList )
        break;
      EnemyServantList = (BattleServantData_array *)BattleServantData__isAlive(
                                                      (BattleServantData_o *)EnemyServantList,
                                                      0,
                                                      0);
      max_length = v9->max_length;
      ++v10;
      EnemyCountStartValue_k__BackingField += (unsigned __int8)EnemyServantList & 1;
      if ( (int)v10 >= max_length )
        goto LABEL_10;
    }
LABEL_23:
    v22 = EnemyCountStartValue_k__BackingField;
    sub_21FFECC(EnemyServantList, v6);
  }
LABEL_10:
  v11 = EnemyCountStartValue_k__BackingField & ~(EnemyCountStartValue_k__BackingField >> 31);
  v22 = v11;
  if ( BattleData__IsWarBoard(bData, 0) )
  {
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3009/*"BATTLE_WARBOARD_REMAINING"*/, 0);
    v15 = System_Int32__ToString((int32_t)&v22, 0);
    goto LABEL_20;
  }
  v16 = (System_String_o *)StringLiteral_2926/*"BATTLE_NOKORIENEMY"*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  this = (BattlePerformanceInfoComponent_o *)LocalizationManager__Get(v16, 0);
  if ( !this )
LABEL_25:
    sub_21FFECC(this, bData);
  v14 = (System_String_o *)this;
  v17 = System_String__Equals_75473208((System_String_o *)this, v16, 0);
  nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
  if ( v17 )
  {
    v20 = v11;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v20);
    v19 = (System_String_o *)StringLiteral_26847/*"残り{0:#,0}体"*/;
    goto LABEL_21;
  }
  v21 = v11;
  v15 = (System_String_o *)j_il2cpp_value_box_0(qword_594C070, &v21);
LABEL_20:
  v18 = (Il2CppObject *)v15;
  v19 = v14;
LABEL_21:
  this = (BattlePerformanceInfoComponent_o *)System_String__Format(v19, v18, 0);
  if ( !nokoriEnemyCountLabel )
    goto LABEL_25;
  UILabel__set_text(nokoriEnemyCountLabel, (System_String_o *)this, 0);
}


void BattlePerformanceInfoComponent__updateTime(BattlePerformanceInfoComponent_o *this, const MethodInfo *method)
{
  int v3; // w8
  System_DateTime_o v4; // x0
  int64_t Ticks; // x0
  __int64 v6; // x1
  int64_t lastCheckTime; // x22
  int64_t v8; // x20
  System_TimeSpan_o v9; // x0
  __int64 v10; // x1
  double TotalSeconds; // d0
  int v12; // w20
  System_DateTime_o v13; // x0
  int64_t v14; // x0
  int64_t v15; // x1
  const MethodInfo *v16; // x2
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  int64_t v18; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_593BE40 & 1) == 0 )
  {
    sub_21FFC50(&System_DateTime_TypeInfo);
    sub_21FFC50(&System_TimeSpan_TypeInfo);
    byte_593BE40 = 1;
  }
  v3 = *(&System_DateTime_TypeInfo->_2.cctor_finished + 1);
  v18 = 0;
  dateData = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, method);
  dateData = System_DateTime__get_Now(0).fields._dateData;
  v4.fields._dateData = (uint64_t)&dateData;
  Ticks = System_DateTime__get_Ticks(v4, 0);
  lastCheckTime = this->fields.lastCheckTime;
  v8 = Ticks;
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v6);
  v9.fields._ticks = (int64_t)&v18;
  v18 = v8 - lastCheckTime;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v9, 0);
  if ( TotalSeconds == INFINITY )
    v12 = 0x80000000;
  else
    v12 = (int)TotalSeconds;
  if ( v12 >= 1 && this->fields.remaingTimeSeconds >= 1 )
  {
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v10);
    dateData = System_DateTime__get_Now(0).fields._dateData;
    v13.fields._dateData = (uint64_t)&dateData;
    v14 = System_DateTime__get_Ticks(v13, 0);
    v15 = this->fields.remaingTimeSeconds - (unsigned int)v12;
    this->fields.remaingTimeSeconds = v15;
    this->fields.lastCheckTime = v14;
    BattlePerformanceInfoComponent__drawTime(this, v15, v16);
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
  if ( (byte_593BE47 & 1) == 0 )
  {
    this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BattleDropItem__Remove__);
    byte_593BE47 = 1;
  }
  bData = v4->fields.bData;
  if ( !bData || (this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)bData->fields.droplist) == 0 )
    sub_21FFECC(this, x);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this,
    (Il2CppObject *)x,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_BattleDropItem__Remove__);
}