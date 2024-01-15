void __fastcall BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Array_o *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_RuntimeFieldHandle_o v13; // 0:w1.4

  if ( (byte_40FA826 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceInfoComponent_TypeInfo, v1);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338,
      v4);
    byte_40FA826 = 1;
  }
  v5 = (System_Array_o *)sub_B17014(int___TypeInfo, 9LL, v2);
  v13.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v5, v13, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BattlePerformanceInfoComponent___ctor(BattlePerformanceInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.AdjustY = 24.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__ClearBattleInfo(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__Initialize(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nokoriTimeObject; // x20
  UnityEngine_GameObject_o *v4; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localPosition; // s0
  UnityEngine_GameObject_o *v8; // x0
  float v9; // s8
  UnityEngine_Transform_o *v10; // x0
  float v11; // s1
  UnityEngine_GameObject_o *v12; // x0
  float v13; // s9
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Object_o *nokoriTurnObject; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *waveShowObject; // x20
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Object_o *stockSprite; // x20
  const MethodInfo *v20; // x2
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA81C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA81C = 1;
  }
  nokoriTimeObject = (UnityEngine_Object_o *)this->fields.nokoriTimeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nokoriTimeObject, 0LL, 0LL) )
  {
    v4 = this->fields.nokoriTimeObject;
    if ( !v4 )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
    v5 = this->fields.nokoriTimeObject;
    if ( !v5 )
      goto LABEL_33;
    transform = UnityEngine_GameObject__get_transform(v5, 0LL);
    if ( !transform )
      goto LABEL_33;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(transform, 0LL);
    v8 = this->fields.nokoriTimeObject;
    if ( !v8 )
      goto LABEL_33;
    v9 = *(float *)&localPosition;
    v10 = UnityEngine_GameObject__get_transform(v8, 0LL);
    if ( !v10 )
      goto LABEL_33;
    *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(v10, 0LL);
    v12 = this->fields.nokoriTimeObject;
    if ( !v12 )
      goto LABEL_33;
    v13 = v11;
    v14 = UnityEngine_GameObject__get_transform(v12, 0LL);
    if ( !v14 )
      goto LABEL_33;
    v21 = UnityEngine_Transform__get_localPosition(v14, 0LL);
    this->fields.timeDefPos.fields.x = v9;
    this->fields.timeDefPos.fields.y = v13;
    this->fields.timeDefPos.fields.z = v21.fields.z;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0LL, 0LL) )
  {
    v16 = this->fields.nokoriTurnObject;
    if ( !v16 )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(v16, 0, 0LL);
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0LL, 0LL) )
  {
    v18 = this->fields.waveShowObject;
    if ( v18 )
    {
      UnityEngine_GameObject__SetActive(v18, 0, 0LL);
      goto LABEL_27;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_27:
  stockSprite = (UnityEngine_Object_o *)this->fields.stockSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(stockSprite, 0LL, 0LL) )
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, v20);
  }
}


void __fastcall BattlePerformanceInfoComponent__Update(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isUpdateTimer )
    BattlePerformanceInfoComponent__updateTime(this, method);
}


void __fastcall BattlePerformanceInfoComponent__UpdateWaveDisplay(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *nowWaveLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *maxWaveLabel; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Component_o *slashLabel; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Component_o *infinityLabel; // x0
  UnityEngine_GameObject_o *v10; // x0

  nowWaveLabel = (UnityEngine_Component_o *)this->fields.nowWaveLabel;
  if ( !nowWaveLabel )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(nowWaveLabel, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, !this->fields.isWaveCountInfinity, 0LL);
  maxWaveLabel = (UnityEngine_Component_o *)this->fields.maxWaveLabel;
  if ( !maxWaveLabel
    || (v6 = UnityEngine_Component__get_gameObject(maxWaveLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v6, !this->fields.isWaveCountInfinity, 0LL),
        (slashLabel = (UnityEngine_Component_o *)this->fields.slashLabel) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(slashLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v8, !this->fields.isWaveCountInfinity, 0LL),
        (infinityLabel = (UnityEngine_Component_o *)this->fields.infinityLabel) == 0LL)
    || (v10 = UnityEngine_Component__get_gameObject(infinityLabel, 0LL)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v10, this->fields.isWaveCountInfinity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__drawTime(
        BattlePerformanceInfoComponent_o *this,
        int64_t showTimeSeconds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  double TotalHours; // d0
  UILabel_o *v8; // x20
  int v9; // w24
  System_String_o *v10; // x21
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UILabel_o *nokoriTimeLabel; // x20
  System_String_o *v16; // x21
  Il2CppObject *v17; // x22
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UIWidget_o *v21; // x19
  int v22; // s0
  int32_t Seconds; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Minutes; // [xsp+8h] [xbp-48h] BYREF
  int v28; // [xsp+Ch] [xbp-44h] BYREF
  int64_t v29; // [xsp+18h] [xbp-38h] BYREF
  System_TimeSpan_o v30; // 0:x0.8
  System_TimeSpan_o v31; // 0:x0.8
  System_TimeSpan_o v32; // 0:x0.8

  if ( (byte_40FA821 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, showTimeSeconds);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2460/*"BATTLE_RAID_REMAINING_TIME"*/, v6);
    byte_40FA821 = 1;
  }
  v29 = 0LL;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2460/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
    v28 = 0;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    Minutes = 0;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
    Seconds = 0;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v20 = System_String__Format_43744796(v16, v17, v18, v19, 0LL);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v20, 0LL);
      goto LABEL_17;
    }
LABEL_20:
    sub_B170D4();
  }
  v30.fields._ticks = (int64_t)&v29;
  v29 = 10000000 * showTimeSeconds;
  TotalHours = System_TimeSpan__get_TotalHours(v30, 0LL);
  v8 = this->fields.nokoriTimeLabel;
  if ( TotalHours == INFINITY )
    TotalHours = -TotalHours;
  v9 = (int)TotalHours;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2460/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
  v28 = v9;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v31.fields._ticks = (int64_t)&v29;
  Minutes = System_TimeSpan__get_Minutes(v31, 0LL);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v32.fields._ticks = (int64_t)&v29;
  Seconds = System_TimeSpan__get_Seconds(v32, 0LL);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  v14 = System_String__Format_43744796(v10, v11, v12, v13, 0LL);
  if ( !v8 )
    goto LABEL_20;
  UILabel__set_text(v8, v14, 0LL);
  if ( v9 > 0 )
    return;
LABEL_17:
  v21 = (UIWidget_o *)this->fields.nokoriTimeLabel;
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_red(0LL);
  if ( !v21 )
    goto LABEL_20;
  UIWidget__set_color(v21, *(UnityEngine_Color_o *)&v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__setQuest(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleEntity_o *battle_ent; // x21
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  struct BattleInfoData_o *battle_info; // x8
  struct BattleRaidInfo_array *raidInfo; // x8
  QuestEntity_o *quest_ent; // x0
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  bool v14; // w1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *waveShowObject; // x0
  UnityEngine_Component_o *nowWaveLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *maxWaveLabel; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Component_o *slashLabel; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Component_o *infinityLabel; // x0
  UnityEngine_GameObject_o *v24; // x0
  UIWidget_o *battleBackGround; // x0
  UIWidget_o *v26; // x0
  UIWidget_o *v27; // x0
  UnityEngine_GameObject_o *battleSpr; // x0
  UnityEngine_GameObject_o *enemyRoot; // x0
  UnityEngine_Transform_o *v30; // x20
  int v31; // s0
  UnityEngine_Component_o *enemySpr; // x0
  UnityEngine_Transform_o *v35; // x0
  UnityEngine_Transform_o *v36; // x20
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_Transform_o *v39; // x0
  UIWidget_o *v40; // x0
  UIWidget_o *v41; // x0
  UnityEngine_Component_o *enemyBackGround; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Component_o *enemyLabel; // x0
  UnityEngine_Transform_o *v45; // x0
  UILabel_o *v46; // x0
  UnityEngine_GameObject_o *turnRoot; // x0
  UnityEngine_Transform_o *v48; // x20
  int v49; // s0
  UnityEngine_Component_o *turnSpr; // x0
  UnityEngine_Transform_o *v53; // x0
  UnityEngine_Transform_o *v54; // x20
  UnityEngine_Transform_o *v55; // x0
  UnityEngine_Component_o *v56; // x0
  UnityEngine_Transform_o *v57; // x0
  UIWidget_o *v58; // x0
  UnityEngine_Component_o *turnBackGround; // x0
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_Component_o *turnLabel; // x0
  UnityEngine_Transform_o *v62; // x0
  UILabel_o *v63; // x0
  UnityEngine_GameObject_o *itemRoot; // x0
  UnityEngine_GameObject_o *v65; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t eventId; // w21
  EventRaidMaster_o *v69; // x22
  int32_t RaidId; // w0
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v72; // x21
  int64_t endedAt; // x21
  int64_t Time_23684488; // x21
  int64_t Ticks; // x0
  int64_t remaingTimeSeconds; // x1
  const MethodInfo *v77; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v79; // 0:x0.8
  System_DateTime_o v80; // 0:x0.8
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA81D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, data);
    sub_B16FFC(&System_DateTime_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA81D = 1;
  }
  dateData = 0LL;
  if ( !data )
    goto LABEL_73;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_73;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(data->fields.battle_ent, 0LL);
  if ( !QuestPhaseEntity )
    goto LABEL_73;
  this->fields.isWaveCountInfinity = QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity, 0LL);
  battle_info = data->fields.battle_info;
  if ( !battle_info )
    goto LABEL_73;
  raidInfo = battle_info->fields.raidInfo;
  if ( !raidInfo || !*(_QWORD *)&raidInfo->max_length )
    goto LABEL_11;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_73;
  if ( QuestEntity__HasFlag(quest_ent, 0x2000000LL, 0LL) )
  {
LABEL_11:
    nokoriTimeObject = this->fields.nokoriTimeObject;
    this->fields.isUpdateTimer = 0;
    if ( !nokoriTimeObject )
      goto LABEL_73;
    v14 = 0;
LABEL_13:
    UnityEngine_GameObject__SetActive(nokoriTimeObject, v14, 0LL);
    goto LABEL_14;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  this->fields.isUpdateTimer = 1;
  if ( !data->fields.battle_info )
    goto LABEL_73;
  eventId = battle_ent->fields.eventId;
  v69 = (EventRaidMaster_o *)MasterData_WarQuestSelectionMaster;
  RaidId = BattleInfoData__getRaidId(data->fields.battle_info, 0LL);
  if ( !v69 )
    goto LABEL_73;
  Entity = EventRaidMaster__GetEntity(v69, eventId, RaidId, 0LL);
  if ( Entity )
  {
    v72 = Entity;
    if ( BattleData__isRaidConnection(data, 0LL) )
    {
      endedAt = v72->fields.endedAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v79.fields.dateData = NetworkManager__getDateTime_23685272(endedAt, 0LL).fields.dateData;
      Time_23684488 = NetworkManager__getTime_23684488(v79, 0LL);
      this->fields.remaingTimeSeconds = Time_23684488 - NetworkManager__getTime(0LL);
      if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_DateTime_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      }
      dateData = System_DateTime__get_Now(0LL).fields.dateData;
      v80.fields.dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v80, 0LL);
      remaingTimeSeconds = this->fields.remaingTimeSeconds;
      this->fields.lastCheckTime = Ticks;
      BattlePerformanceInfoComponent__drawTime(this, remaingTimeSeconds, v77);
      nokoriTimeObject = this->fields.nokoriTimeObject;
      if ( !nokoriTimeObject )
        goto LABEL_73;
      v14 = 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( !BattleData__IsWarBoard(data, 0LL) )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_73;
  v81.fields.x = 316.0;
  v81.fields.y = 158.0;
  v81.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v81, 0LL);
  waveShowObject = this->fields.waveShowObject;
  if ( !waveShowObject )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(waveShowObject, 0, 0LL);
  nowWaveLabel = (UnityEngine_Component_o *)this->fields.nowWaveLabel;
  if ( !nowWaveLabel )
    goto LABEL_73;
  gameObject = UnityEngine_Component__get_gameObject(nowWaveLabel, 0LL);
  if ( !gameObject )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  maxWaveLabel = (UnityEngine_Component_o *)this->fields.maxWaveLabel;
  if ( !maxWaveLabel )
    goto LABEL_73;
  v20 = UnityEngine_Component__get_gameObject(maxWaveLabel, 0LL);
  if ( !v20 )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(v20, 0, 0LL);
  slashLabel = (UnityEngine_Component_o *)this->fields.slashLabel;
  if ( !slashLabel )
    goto LABEL_73;
  v22 = UnityEngine_Component__get_gameObject(slashLabel, 0LL);
  if ( !v22 )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(v22, 0, 0LL);
  infinityLabel = (UnityEngine_Component_o *)this->fields.infinityLabel;
  if ( !infinityLabel )
    goto LABEL_73;
  v24 = UnityEngine_Component__get_gameObject(infinityLabel, 0LL);
  if ( !v24 )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(v24, 0, 0LL);
  battleBackGround = (UIWidget_o *)this->fields.battleBackGround;
  if ( !battleBackGround )
    goto LABEL_73;
  UIWidget__set_depth(battleBackGround, -1, 0LL);
  v26 = (UIWidget_o *)this->fields.battleBackGround;
  if ( !v26 )
    goto LABEL_73;
  UIWidget__set_width(v26, 218, 0LL);
  v27 = (UIWidget_o *)this->fields.battleBackGround;
  if ( !v27 )
    goto LABEL_73;
  UIWidget__set_height(v27, 24, 0LL);
  battleSpr = this->fields.battleSpr;
  if ( !battleSpr )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(battleSpr, 0, 0LL);
  enemyRoot = this->fields.enemyRoot;
  if ( !enemyRoot )
    goto LABEL_73;
  v30 = UnityEngine_GameObject__get_transform(enemyRoot, 0LL);
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v30 )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
  enemySpr = (UnityEngine_Component_o *)this->fields.enemySpr;
  if ( !enemySpr )
    goto LABEL_73;
  v35 = UnityEngine_Component__get_transform(enemySpr, 0LL);
  if ( !this->fields.enemyRoot )
    goto LABEL_73;
  v36 = v35;
  v37 = UnityEngine_GameObject__get_transform(this->fields.enemyRoot, 0LL);
  if ( !v36 )
    goto LABEL_73;
  UnityEngine_Transform__set_parent(v36, v37, 0LL);
  v38 = (UnityEngine_Component_o *)this->fields.enemySpr;
  if ( !v38 )
    goto LABEL_73;
  v39 = UnityEngine_Component__get_transform(v38, 0LL);
  if ( !v39 )
    goto LABEL_73;
  v82.fields.x = -66.0;
  v82.fields.y = 0.0;
  v82.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v39, v82, 0LL);
  v40 = (UIWidget_o *)this->fields.enemySpr;
  if ( !v40 )
    goto LABEL_73;
  UIWidget__set_width(v40, 42, 0LL);
  v41 = (UIWidget_o *)this->fields.enemySpr;
  if ( !v41 )
    goto LABEL_73;
  UIWidget__set_height(v41, 18, 0LL);
  enemyBackGround = (UnityEngine_Component_o *)this->fields.enemyBackGround;
  if ( !enemyBackGround )
    goto LABEL_73;
  v43 = UnityEngine_Component__get_gameObject(enemyBackGround, 0LL);
  if ( !v43 )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(v43, 0, 0LL);
  enemyLabel = (UnityEngine_Component_o *)this->fields.enemyLabel;
  if ( !enemyLabel )
    goto LABEL_73;
  v45 = UnityEngine_Component__get_transform(enemyLabel, 0LL);
  if ( !v45 )
    goto LABEL_73;
  v83.fields.x = 4.0;
  v83.fields.y = -9.0;
  v83.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v45, v83, 0LL);
  v46 = this->fields.enemyLabel;
  if ( !v46 )
    goto LABEL_73;
  UILabel__set_fontSize(v46, 17, 0LL);
  turnRoot = this->fields.turnRoot;
  if ( !turnRoot )
    goto LABEL_73;
  v48 = UnityEngine_GameObject__get_transform(turnRoot, 0LL);
  *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v48 )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
  turnSpr = (UnityEngine_Component_o *)this->fields.turnSpr;
  if ( !turnSpr )
    goto LABEL_73;
  v53 = UnityEngine_Component__get_transform(turnSpr, 0LL);
  if ( !this->fields.turnRoot )
    goto LABEL_73;
  v54 = v53;
  v55 = UnityEngine_GameObject__get_transform(this->fields.turnRoot, 0LL);
  if ( !v54 )
    goto LABEL_73;
  UnityEngine_Transform__set_parent(v54, v55, 0LL);
  v56 = (UnityEngine_Component_o *)this->fields.turnSpr;
  if ( !v56 )
    goto LABEL_73;
  v57 = UnityEngine_Component__get_transform(v56, 0LL);
  if ( !v57 )
    goto LABEL_73;
  v84.fields.x = 6.0;
  v84.fields.y = 0.0;
  v84.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v57, v84, 0LL);
  v58 = (UIWidget_o *)this->fields.turnSpr;
  if ( !v58 )
    goto LABEL_73;
  UIWidget__set_width(v58, 36, 0LL);
  turnBackGround = (UnityEngine_Component_o *)this->fields.turnBackGround;
  if ( !turnBackGround )
    goto LABEL_73;
  v60 = UnityEngine_Component__get_gameObject(turnBackGround, 0LL);
  if ( !v60 )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive(v60, 0, 0LL);
  turnLabel = (UnityEngine_Component_o *)this->fields.turnLabel;
  if ( !turnLabel )
    goto LABEL_73;
  v62 = UnityEngine_Component__get_transform(turnLabel, 0LL);
  if ( !v62 )
    goto LABEL_73;
  v85.fields.x = 70.0;
  v85.fields.y = -9.0;
  v85.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v62, v85, 0LL);
  v63 = this->fields.turnLabel;
  if ( !v63
    || (UILabel__set_fontSize(v63, 17, 0LL), (itemRoot = this->fields.itemRoot) == 0LL)
    || (v65 = UnityEngine_GameObject__get_gameObject(itemRoot, 0LL)) == 0LL )
  {
LABEL_73:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v65, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__setShowElapsedTurn(
        BattlePerformanceInfoComponent_o *this,
        int32_t state,
        int32_t now,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *nokoriTurnObject; // x22
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v14; // x0
  UILabel_o *nokoriTurnLabel; // x19
  System_String_o *v16; // x20
  int32_t *v17; // x1
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA81F & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_2432/*"BATTLE_ELAPSED_TURN"*/, v9);
    sub_B16FFC(&StringLiteral_2524/*"BATTLE_TOTALELAPSED_TURN"*/, v10);
    byte_40FA81F = 1;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0LL, 0LL) )
  {
    nokoriTimeObject = this->fields.nokoriTimeObject;
    if ( !nokoriTimeObject )
      goto LABEL_25;
    transform = UnityEngine_GameObject__get_transform(nokoriTimeObject, 0LL);
    if ( !transform )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition(transform, this->fields.timeDefPos, 0LL);
    v14 = this->fields.nokoriTurnObject;
    if ( !v14 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(v14, 1, 0LL);
    if ( now <= 1 )
      now = 1;
    if ( state == 2 )
    {
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2524/*"BATTLE_TOTALELAPSED_TURN"*/, 0LL);
      v20 = now;
      v17 = &v20;
    }
    else
    {
      if ( state != 1 )
        return;
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2432/*"BATTLE_ELAPSED_TURN"*/, 0LL);
      v17 = &v21;
      v21 = now;
    }
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v17);
    v19 = System_String__Format(v16, v18, 0LL);
    if ( !nokoriTurnLabel )
LABEL_25:
      sub_B170D4();
    UILabel__set_text(nokoriTurnLabel, v19, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__setShowLimitTurn(
        BattlePerformanceInfoComponent_o *this,
        int32_t now,
        int32_t limit,
        BattleData_o *bdata,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *nokoriTurnObject; // x23
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v15; // x0
  int v16; // w8
  bool IsWarBoard; // w0
  UILabel_o *nokoriTurnLabel; // x19
  __int64 *v19; // x8
  System_String_o *v20; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA81E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&now);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_2527/*"BATTLE_WARBOARD_REMAINING"*/, v10);
    sub_B16FFC(&StringLiteral_2461/*"BATTLE_RAID_REMAINING_TURN"*/, v11);
    byte_40FA81E = 1;
  }
  v23 = 0;
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0LL, 0LL) )
  {
    nokoriTimeObject = this->fields.nokoriTimeObject;
    if ( !nokoriTimeObject )
      goto LABEL_26;
    transform = UnityEngine_GameObject__get_transform(nokoriTimeObject, 0LL);
    if ( !transform )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition(transform, this->fields.timeDefPos, 0LL);
    v15 = this->fields.nokoriTurnObject;
    if ( !v15 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(v15, 1, 0LL);
    v16 = now <= 1 ? 1 : now;
    v23 = (limit - v16 + 1) & ~((limit - v16 + 1) >> 31);
    if ( !bdata )
      goto LABEL_26;
    IsWarBoard = BattleData__IsWarBoard(bdata, 0LL);
    nokoriTurnLabel = this->fields.nokoriTurnLabel;
    if ( IsWarBoard )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_2527/*"BATTLE_WARBOARD_REMAINING"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v19 = &StringLiteral_2461/*"BATTLE_RAID_REMAINING_TURN"*/;
    }
    v20 = LocalizationManager__Get((System_String_o *)*v19, 0LL);
    v21 = (Il2CppObject *)System_Int32__ToString((int32_t)&v23, 0LL);
    v22 = System_String__Format(v20, v21, 0LL);
    if ( !nokoriTurnLabel )
LABEL_26:
      sub_B170D4();
    UILabel__set_text(nokoriTurnLabel, v22, 0LL);
  }
}


void __fastcall BattlePerformanceInfoComponent__setShowTurn(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bdata,
        int32_t addturn,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *nokoriTurnObject; // x0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( !bdata )
    goto LABEL_10;
  if ( BattleData__isLimitTurn(bdata, 0LL) )
  {
    BattlePerformanceInfoComponent__setShowLimitTurn(
      this,
      bdata->fields.turnCount + addturn,
      bdata->fields.limitTurnCount,
      bdata,
      v7);
    return;
  }
  if ( BattleData__isShowTurn(bdata, 0LL) )
  {
    BattlePerformanceInfoComponent__setShowElapsedTurn(
      this,
      bdata->fields.stateshowturn,
      bdata->fields.turnCount + bdata->fields.totalTurnCount,
      v8);
    return;
  }
  nokoriTimeObject = this->fields.nokoriTimeObject;
  if ( !nokoriTimeObject
    || (transform = UnityEngine_GameObject__get_transform(nokoriTimeObject, 0LL)) == 0LL
    || (v12.fields.x = this->fields.timeDefPos.fields.x + 0.0,
        v12.fields.y = this->fields.timeDefPos.fields.y + this->fields.AdjustY,
        v12.fields.z = this->fields.timeDefPos.fields.z + 0.0,
        UnityEngine_Transform__set_localPosition(transform, v12, 0LL),
        (nokoriTurnObject = this->fields.nokoriTurnObject) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(nokoriTurnObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__setShowWave(
        BattlePerformanceInfoComponent_o *this,
        int32_t now,
        int32_t max,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *waveShowObject; // x23
  UnityEngine_GameObject_o *v12; // x0
  UILabel_o *nowWaveLabel; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UILabel_o *maxWaveLabel; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x1
  int v20; // [xsp+8h] [xbp-38h] BYREF
  int v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FA823 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&now);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_23428/*"{0:D}"*/, v10);
    byte_40FA823 = 1;
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0LL, 0LL) )
  {
    v12 = this->fields.waveShowObject;
    if ( !v12 )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(v12, 1, 0LL);
    nowWaveLabel = this->fields.nowWaveLabel;
    v21 = now + 1;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v15 = System_String__Format((System_String_o *)StringLiteral_23428/*"{0:D}"*/, v14, 0LL);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, v15, 0LL),
          maxWaveLabel = this->fields.maxWaveLabel,
          v20 = max + 1,
          v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20),
          v18 = System_String__Format((System_String_o *)StringLiteral_23428/*"{0:D}"*/, v17, 0LL),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, v18, 0LL), !data) )
    {
LABEL_14:
      sub_B170D4();
    }
    if ( !BattleData__IsWarBoard(data, 0LL) )
      BattlePerformanceInfoComponent__UpdateWaveDisplay(this, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__setStockSprite(
        BattlePerformanceInfoComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *stockPSrpite; // x0
  UnityEngine_Behaviour_o *stockPPSrpite; // x0
  UISprite_o *stockSprite; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  UnityEngine_Behaviour_o *v11; // x0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *stockEffectPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FA825 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&StringLiteral_19253/*"icon_drop_item_0"*/, v5);
    byte_40FA825 = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        (stockPPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(stockPPSrpite, 0, 0LL),
        stockSprite = this->fields.stockSprite,
        v15 = index / 3 + 1,
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15),
        v10 = System_String__Concat((Il2CppObject *)StringLiteral_19253/*"icon_drop_item_0"*/, v9, 0LL),
        !stockSprite) )
  {
LABEL_14:
    sub_B170D4();
  }
  UISprite__set_spriteName(stockSprite, v10, 0LL);
  if ( index % 3 == 2 )
  {
    v11 = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite;
    if ( !v11 )
      goto LABEL_14;
  }
  else
  {
    if ( index % 3 != 1 )
      goto LABEL_12;
    v11 = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
    if ( !v11 )
      goto LABEL_14;
  }
  UnityEngine_Behaviour__set_enabled(v11, 1, 0LL);
LABEL_12:
  v12 = (UnityEngine_Component_o *)this->fields.stockSprite;
  if ( !v12 )
    goto LABEL_14;
  stockEffectPrefab = this->fields.stockEffectPrefab;
  transform = UnityEngine_Component__get_transform(v12, 0LL);
  BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, stockEffectPrefab, transform, 0LL, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__updateDropItemCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  UILabel_o *stockLabel; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  System_String_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  struct System_Collections_Generic_List_BattleDropItem__o *v18; // x23
  int v19; // w24
  int32_t stockIndex; // w22
  int v21; // w25
  unsigned int v22; // w27
  BattleDropItem_o *v23; // x8
  struct System_Collections_Generic_List_BattleDropItem__o *v24; // x19
  BattleDropItem_o *v25; // x8
  BattlePerformanceInfoComponent_c *v26; // x0
  struct System_Collections_Generic_List_BattleDropItem__o *v27; // x19
  struct System_Int32_array *v28; // x23
  BattleDropItem_o *v29; // x8
  __int64 rarity; // x8
  int v31; // w8
  struct System_Collections_Generic_List_BattleDropItem__o *v32; // x19
  BattleDropItem_o *v33; // x8
  WarEntity_o *Entity; // x0
  WarEntity_o *v35; // x23
  signed int longName_high; // w19
  struct System_Int32_array *raritylist; // x8
  int v38; // w9
  struct System_Collections_Generic_List_BattleDropItem__o *v39; // x23
  int32_t v40; // w19
  BattleDropItem_o *v41; // x8
  BattlePerformanceInfoComponent_o *v42; // [xsp+0h] [xbp-60h]
  int32_t size; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FA824 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceInfoComponent_TypeInfo, bData);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FA824 = 1;
  }
  size = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !bData
    || (droplist = bData->fields.droplist) == 0LL
    || (stockLabel = this->fields.stockLabel,
        v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster,
        size = droplist->fields._size,
        v15 = System_Int32__ToString((int32_t)&size, 0LL),
        !stockLabel)
    || (UILabel__set_text(stockLabel, v15, 0LL), (v18 = bData->fields.droplist) == 0LL) )
  {
LABEL_58:
    sub_B170D4();
  }
  v19 = v18->fields._size;
  if ( v19 >= 1 )
  {
    v42 = this;
    stockIndex = this->fields.stockIndex;
    v21 = 1;
    while ( 1 )
    {
      v22 = v21 - 1;
      if ( v18->fields._size <= (unsigned int)(v21 - 1) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v23 = v18->fields._items->m_Items[v22];
      if ( !v23 )
        goto LABEL_58;
      if ( v23->fields.rarity < 1000 )
        goto LABEL_19;
      v24 = bData->fields.droplist;
      if ( !v24 )
        goto LABEL_58;
      if ( v24->fields._size <= v22 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v25 = v24->fields._items->m_Items[v22];
      if ( !v25 )
        goto LABEL_58;
      if ( v25->fields.rarity <= 1002 )
      {
        v32 = bData->fields.droplist;
        if ( !v32 )
          goto LABEL_58;
        if ( v32->fields._size <= v22 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v33 = v32->fields._items->m_Items[v22];
        if ( !v33 )
          goto LABEL_58;
        if ( !v14 )
          goto LABEL_58;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v14,
                   v33->fields.objectId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Entity )
          goto LABEL_58;
        v35 = Entity;
        v26 = BattlePerformanceInfoComponent_TypeInfo;
        longName_high = HIDWORD(v35->fields.longName);
        if ( (BYTE3(BattlePerformanceInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
          v26 = BattlePerformanceInfoComponent_TypeInfo;
        }
        raritylist = v26->static_fields->raritylist;
        if ( !raritylist )
          goto LABEL_58;
        if ( longName_high >= (signed int)raritylist->max_length )
        {
          v31 = 0;
        }
        else
        {
          if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26);
            raritylist = BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist;
            if ( !raritylist )
              goto LABEL_58;
          }
          v38 = HIDWORD(v35->fields.longName) - 1;
          if ( v38 >= raritylist->max_length )
          {
LABEL_59:
            sub_B17100(v26, v16, v17);
            sub_B170A0();
          }
          v39 = bData->fields.droplist;
          if ( !v39 )
            goto LABEL_58;
          v40 = raritylist->m_Items[v38 + 1];
          if ( v39->fields._size <= v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v41 = v39->fields._items->m_Items[v22];
          if ( !v41 )
            goto LABEL_58;
          v31 = v40 + v41->fields.rarity - 1000;
        }
      }
      else
      {
LABEL_19:
        v26 = BattlePerformanceInfoComponent_TypeInfo;
        if ( (BYTE3(BattlePerformanceInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
          v26 = BattlePerformanceInfoComponent_TypeInfo;
        }
        v27 = bData->fields.droplist;
        if ( !v27 )
          goto LABEL_58;
        v28 = v26->static_fields->raritylist;
        if ( v27->fields._size <= v22 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v29 = v27->fields._items->m_Items[v22];
        if ( !v29 || !v28 )
          goto LABEL_58;
        rarity = v29->fields.rarity;
        if ( (unsigned int)rarity >= v28->max_length )
          goto LABEL_59;
        v31 = v28->m_Items[rarity + 1];
      }
      if ( stockIndex < v31 )
        stockIndex = v31;
      if ( v21 >= v19 )
        break;
      v18 = bData->fields.droplist;
      ++v21;
      if ( !v18 )
        goto LABEL_58;
    }
    if ( stockIndex != v42->fields.stockIndex )
    {
      v42->fields.stockIndex = stockIndex;
      BattlePerformanceInfoComponent__setStockSprite(v42, stockIndex, v17);
    }
  }
}


void __fastcall BattlePerformanceInfoComponent__updateNokoriEnemyCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleServantData_array *EnemyServantList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t EnemyCountStartValue_k__BackingField; // w22
  int max_length; // w8
  BattleServantData_array *v14; // x21
  unsigned int v15; // w23
  BattleServantData_o *v16; // x0
  UILabel_o *nokoriEnemyCountLabel; // x19
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  bool v22; // w0
  Il2CppObject *v23; // x1
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v27; // [xsp+18h] [xbp-28h] BYREF
  int32_t v28; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FA822 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, bData);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2527/*"BATTLE_WARBOARD_REMAINING"*/, v6);
    sub_B16FFC(&StringLiteral_2456/*"BATTLE_NOKORIENEMY"*/, v7);
    sub_B16FFC(&StringLiteral_23783/*"残り{0:#,0}体"*/, v8);
    byte_40FA822 = 1;
  }
  v28 = 0;
  if ( !bData )
    goto LABEL_27;
  EnemyServantList = BattleData__getEnemyServantList(bData, 0LL);
  EnemyCountStartValue_k__BackingField = bData->fields._EnemyCountStartValue_k__BackingField;
  v28 = EnemyCountStartValue_k__BackingField;
  if ( !EnemyServantList )
    goto LABEL_27;
  max_length = EnemyServantList->max_length;
  v14 = EnemyServantList;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        sub_B17100(EnemyServantList, v10, v11);
        sub_B170A0();
      }
      v16 = v14->m_Items[v15];
      if ( !v16 )
        break;
      EnemyServantList = (BattleServantData_array *)BattleServantData__isAlive(v16, 0, 0LL);
      if ( ((unsigned __int8)EnemyServantList & 1) != 0 )
        v28 = ++EnemyCountStartValue_k__BackingField;
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_12;
    }
LABEL_27:
    sub_B170D4();
  }
LABEL_12:
  if ( BattleData__IsWarBoard(bData, 0LL) )
  {
    nokoriEnemyCountLabel = this->fields.nokoriEnemyCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2527/*"BATTLE_WARBOARD_REMAINING"*/, 0LL);
    v19 = System_Int32__ToString((int32_t)&v28, 0LL);
  }
  else
  {
    v20 = (System_String_o *)StringLiteral_2456/*"BATTLE_NOKORIENEMY"*/;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get(v20, 0LL);
    if ( !v21 )
      goto LABEL_27;
    v18 = v21;
    v22 = System_String__Equals_43731072(v21, v20, 0LL);
    nokoriEnemyCountLabel = this->fields.nokoriEnemyCountLabel;
    if ( v22 )
    {
      v26 = EnemyCountStartValue_k__BackingField;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      v24 = (System_String_o *)StringLiteral_23783/*"残り{0:#,0}体"*/;
      goto LABEL_25;
    }
    v27 = EnemyCountStartValue_k__BackingField;
    v19 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  }
  v23 = (Il2CppObject *)v19;
  v24 = v18;
LABEL_25:
  v25 = System_String__Format(v24, v23, 0LL);
  if ( !nokoriEnemyCountLabel )
    goto LABEL_27;
  UILabel__set_text(nokoriEnemyCountLabel, v25, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__updateTime(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x8
  double TotalSeconds; // d0
  int v5; // w21
  int64_t Ticks; // x0
  int64_t v7; // x1
  const MethodInfo *v8; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  int64_t v10; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_TimeSpan_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8

  if ( (byte_40FA820 & 1) == 0 )
  {
    sub_B16FFC(&System_DateTime_TypeInfo, method);
    byte_40FA820 = 1;
  }
  v10 = 0LL;
  dateData = 0LL;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  dateData = System_DateTime__get_Now(0LL).fields.dateData;
  v11.fields.dateData = (uint64_t)&dateData;
  v3 = System_DateTime__get_Ticks(v11, 0LL) - this->fields.lastCheckTime;
  v12.fields._ticks = (int64_t)&v10;
  v10 = v3;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v12, 0LL);
  if ( TotalSeconds == INFINITY )
    TotalSeconds = -TotalSeconds;
  v5 = (int)TotalSeconds;
  if ( (int)TotalSeconds >= 1 && this->fields.remaingTimeSeconds >= 1 )
  {
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    dateData = System_DateTime__get_Now(0LL).fields.dateData;
    v13.fields.dateData = (uint64_t)&dateData;
    Ticks = System_DateTime__get_Ticks(v13, 0LL);
    v7 = this->fields.remaingTimeSeconds - v5;
    this->fields.remaingTimeSeconds = v7;
    this->fields.lastCheckTime = Ticks;
    BattlePerformanceInfoComponent__drawTime(this, v7, v8);
  }
}