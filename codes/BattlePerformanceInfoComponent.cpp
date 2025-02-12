void __fastcall BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x0
  struct System_Int32_array *v5; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_4BCAB19 & 1) == 0 )
  {
    sub_1C1ABD4(&BattlePerformanceInfoComponent_TypeInfo, v1);
    sub_1C1ABD4(&int___TypeInfo, v2);
    sub_1C1ABD4(
      &Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338,
      v3);
    byte_4BCAB19 = 1;
  }
  v4 = (System_Array_o *)sub_1C1AC7C(int___TypeInfo, 9LL);
  v12.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  v5 = (struct System_Int32_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62947704(v4, v12, 0LL);
  BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist = v5;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__Initialize(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nokoriTimeObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *transform; // x0
  unsigned int localPosition; // s0
  float v7; // s8
  float v8; // s1
  float v9; // s9
  UnityEngine_Object_o *nokoriTurnObject; // x20
  UnityEngine_Object_o *waveShowObject; // x20
  UnityEngine_Object_o *stockSprite; // x20
  const MethodInfo *v13; // x3
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCAB0F & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCAB0F = 1;
  }
  nokoriTimeObject = (UnityEngine_Object_o *)this->fields.nokoriTimeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nokoriTimeObject, 0LL, 0LL) )
  {
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_29;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_29;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_29;
    v7 = *(float *)&localPosition;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)transform,
                                            0LL);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_29;
    v9 = v8;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_29;
    v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    this->fields.timeDefPos.fields.x = v7;
    this->fields.timeDefPos.fields.y = v9;
    this->fields.timeDefPos.fields.z = v14.fields.z;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0LL, 0LL) )
  {
    transform = this->fields.nokoriTurnObject;
    if ( !transform )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0LL, 0LL) )
  {
    transform = this->fields.waveShowObject;
    if ( transform )
    {
      UnityEngine_GameObject__SetActive(transform, 0, 0LL);
      goto LABEL_24;
    }
LABEL_29:
    sub_1C1AE30(transform, v4);
  }
LABEL_24:
  stockSprite = (UnityEngine_Object_o *)this->fields.stockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(stockSprite, 0LL, 0LL) )
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, 0, v13);
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

  nowWaveLabel = (UnityEngine_Component_o *)this->fields.nowWaveLabel;
  if ( !nowWaveLabel )
    goto LABEL_10;
  nowWaveLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nowWaveLabel, 0LL);
  if ( !nowWaveLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowWaveLabel, !this->fields.isWaveCountInfinity, 0LL);
  nowWaveLabel = (UnityEngine_Component_o *)this->fields.maxWaveLabel;
  if ( !nowWaveLabel
    || (nowWaveLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nowWaveLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)nowWaveLabel,
          !this->fields.isWaveCountInfinity,
          0LL),
        (nowWaveLabel = (UnityEngine_Component_o *)this->fields.slashLabel) == 0LL)
    || (nowWaveLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nowWaveLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)nowWaveLabel,
          !this->fields.isWaveCountInfinity,
          0LL),
        (nowWaveLabel = (UnityEngine_Component_o *)this->fields.infinityLabel) == 0LL)
    || (nowWaveLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nowWaveLabel, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1C1AE30(nowWaveLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowWaveLabel, this->fields.isWaveCountInfinity, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__drawTime(
        BattlePerformanceInfoComponent_o *this,
        int64_t showTimeSeconds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  double TotalHours; // d0
  UILabel_o *v9; // x20
  int v10; // w25
  System_String_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x22
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  UILabel_o *nokoriTimeLabel; // x20
  System_String_o *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-50h] BYREF
  int v42; // [xsp+14h] [xbp-4Ch] BYREF
  int64_t v43; // [xsp+18h] [xbp-48h] BYREF
  System_TimeSpan_o v44; // 0:x0.8
  System_TimeSpan_o v45; // 0:x0.8
  System_TimeSpan_o v46; // 0:x0.8
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BCAB14 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, showTimeSeconds);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v5);
    sub_1C1ABD4(&System_TimeSpan_TypeInfo, v6);
    sub_1C1ABD4(&StringLiteral_2966/*"BATTLE_RAID_REMAINING_TIME"*/, v7);
    byte_4BCAB14 = 1;
  }
  v43 = 0LL;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2966/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
    v42 = 0;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v28, v29, v30);
    Minutes = 0;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v32, v33, v34);
    Seconds = 0;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v36, v37, v38);
    v24 = System_String__Format_63054808(v27, v31, v35, v39, 0LL);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v24, 0LL);
      goto LABEL_18;
    }
LABEL_21:
    sub_1C1AE30(v24, v25);
  }
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v44.fields._ticks = (int64_t)&v43;
  v43 = 10000000 * showTimeSeconds;
  TotalHours = System_TimeSpan__get_TotalHours(v44, 0LL);
  v9 = this->fields.nokoriTimeLabel;
  if ( TotalHours == INFINITY )
    v10 = 0x80000000;
  else
    v10 = (int)TotalHours;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2966/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
  v42 = v10;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v12, v13, v14);
  v45.fields._ticks = (int64_t)&v43;
  Minutes = System_TimeSpan__get_Minutes(v45, 0LL);
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v16, v17, v18);
  v46.fields._ticks = (int64_t)&v43;
  Seconds = System_TimeSpan__get_Seconds(v46, 0LL);
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v20, v21, v22);
  v24 = System_String__Format_63054808(v11, v15, v19, v23, 0LL);
  if ( !v9 )
    goto LABEL_21;
  UILabel__set_text(v9, v24, 0LL);
  if ( v10 > 0 )
    return;
LABEL_18:
  v24 = (System_String_o *)this->fields.nokoriTimeLabel;
  if ( !v24 )
    goto LABEL_21;
  v47.fields.r = 1.0;
  v47.fields.g = 0.0;
  v47.fields.b = 0.0;
  v47.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v24, v47, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__setQuest(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleEntity_o *battle_ent; // x21
  struct BattleInfoData_o *battle_info; // x8
  struct BattleRaidInfo_array *raidInfo; // x8
  bool v11; // w1
  BattlePerformanceInfoComponent_o *v12; // x20
  BattlePerformanceInfoComponent_o *v13; // x20
  BattlePerformanceInfoComponent_o *v14; // x20
  BattlePerformanceInfoComponent_o *v15; // x20
  int32_t eventId; // w21
  EventRaidMaster_o *v17; // x22
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v19; // x21
  int64_t endedAt; // x21
  int64_t Time_39759872; // x21
  int64_t Ticks; // x0
  int64_t remaingTimeSeconds; // x1
  const MethodInfo *v24; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4BCAB10 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventRaidMaster___, data);
    sub_1C1ABD4(&System_DateTime_TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    this = (BattlePerformanceInfoComponent_o *)sub_1C1ABD4(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v7);
    byte_4BCAB10 = 1;
  }
  dateData = 0LL;
  if ( !data )
    goto LABEL_75;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)BattleEntity__GetQuestPhaseEntity(data->fields.battle_ent, 0LL);
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)QuestPhaseEntity__IsWaveCountInfinity((QuestPhaseEntity_o *)this, 0LL);
  v4->fields.isWaveCountInfinity = (unsigned __int8)this & 1;
  battle_info = data->fields.battle_info;
  if ( !battle_info )
    goto LABEL_75;
  raidInfo = battle_info->fields.raidInfo;
  if ( !raidInfo || !*(_QWORD *)&raidInfo->max_length )
    goto LABEL_11;
  this = (BattlePerformanceInfoComponent_o *)data->fields.quest_ent;
  if ( !this )
    goto LABEL_75;
  if ( QuestEntity__HasFlag((QuestEntity_o *)this, 0x2000000LL, 0LL) )
  {
LABEL_11:
    this = (BattlePerformanceInfoComponent_o *)v4->fields.nokoriTimeObject;
    v4->fields.isUpdateTimer = 0;
    if ( !this )
      goto LABEL_75;
    v11 = 0;
LABEL_13:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11, 0LL);
    goto LABEL_14;
  }
  this = (BattlePerformanceInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v4->fields.isUpdateTimer = 1;
  if ( !data->fields.battle_info )
    goto LABEL_75;
  eventId = battle_ent->fields.eventId;
  v17 = (EventRaidMaster_o *)this;
  this = (BattlePerformanceInfoComponent_o *)BattleInfoData__getRaidId(data->fields.battle_info, 0LL);
  if ( !v17 )
    goto LABEL_75;
  Entity = EventRaidMaster__GetEntity(v17, eventId, (int32_t)this, 0LL);
  if ( Entity )
  {
    v19 = Entity;
    if ( BattleData__isRaidConnection(data, 0LL) )
    {
      endedAt = v19->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v26.fields._dateData = NetworkManager__getDateTime_39760652(endedAt, 0LL).fields._dateData;
      Time_39759872 = NetworkManager__getTime_39759872(v26, 0LL);
      v4->fields.remaingTimeSeconds = Time_39759872 - NetworkManager__getTime(0LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      dateData = System_DateTime__get_Now(0LL).fields._dateData;
      v27.fields._dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v27, 0LL);
      remaingTimeSeconds = v4->fields.remaingTimeSeconds;
      v4->fields.lastCheckTime = Ticks;
      BattlePerformanceInfoComponent__drawTime(v4, remaingTimeSeconds, v24);
      this = (BattlePerformanceInfoComponent_o *)v4->fields.nokoriTimeObject;
      if ( !this )
        goto LABEL_75;
      v11 = 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( !BattleData__IsWarBoard(data, 0LL) )
    return;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_75;
  v28.fields.z = 0.0;
  v28.fields.x = 316.0;
  v28.fields.y = 158.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v28, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.waveShowObject;
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.nowWaveLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.maxWaveLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.slashLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.infinityLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleBackGround;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_depth((UIWidget_o *)this, -1, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleBackGround;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_width((UIWidget_o *)this, 218, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleBackGround;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_height((UIWidget_o *)this, 24, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleSpr;
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyRoot;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
  v12 = this;
  if ( !byte_4BC2141 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, data);
    byte_4BC2141 = 1;
  }
  if ( !v12 )
    goto LABEL_75;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v4->fields.enemyRoot )
    goto LABEL_75;
  v13 = this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.enemyRoot, 0LL);
  if ( !v13 )
    goto LABEL_75;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v13, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  v29.fields.y = 0.0;
  v29.fields.z = 0.0;
  v29.fields.x = -66.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v29, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_width((UIWidget_o *)this, 42, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_height((UIWidget_o *)this, 18, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyBackGround;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  v30.fields.x = 4.0;
  v30.fields.y = -9.0;
  v30.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyLabel;
  if ( !this )
    goto LABEL_75;
  UILabel__set_fontSize((UILabel_o *)this, 17, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnRoot;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
  v14 = this;
  if ( !byte_4BC2141 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, data);
    byte_4BC2141 = 1;
  }
  if ( !v14 )
    goto LABEL_75;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v14,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v4->fields.turnRoot )
    goto LABEL_75;
  v15 = this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.turnRoot, 0LL);
  if ( !v15 )
    goto LABEL_75;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v15, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  v31.fields.x = 6.0;
  v31.fields.y = 0.0;
  v31.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v31, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_75;
  UIWidget__set_width((UIWidget_o *)this, 36, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnBackGround;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnLabel;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  v32.fields.y = -9.0;
  v32.fields.z = 0.0;
  v32.fields.x = 70.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v32, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnLabel;
  if ( !this
    || (UILabel__set_fontSize((UILabel_o *)this, 17, 0LL),
        (this = (BattlePerformanceInfoComponent_o *)v4->fields.itemRoot) == 0LL)
    || (this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_75:
    sub_1C1AE30(this, data);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
  __int64 v12; // x1
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  UILabel_o *nokoriTurnLabel; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_String_o *v18; // x20
  int32_t *v19; // x1
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BCAB12 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&state);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_2918/*"BATTLE_ELAPSED_TURN"*/, v9);
    sub_1C1ABD4(&StringLiteral_3035/*"BATTLE_TOTALELAPSED_TURN"*/, v10);
    byte_4BCAB12 = 1;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0LL, 0LL) )
  {
    nokoriTimeObject = this->fields.nokoriTimeObject;
    if ( !nokoriTimeObject )
      goto LABEL_22;
    nokoriTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nokoriTimeObject, 0LL);
    if ( !nokoriTimeObject )
      goto LABEL_22;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)nokoriTimeObject, this->fields.timeDefPos, 0LL);
    nokoriTimeObject = this->fields.nokoriTurnObject;
    if ( !nokoriTimeObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(nokoriTimeObject, 1, 0LL);
    if ( now <= 1 )
      now = 1;
    if ( state == 2 )
    {
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3035/*"BATTLE_TOTALELAPSED_TURN"*/, 0LL);
      v21 = now;
      v19 = &v21;
    }
    else
    {
      if ( state != 1 )
        return;
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2918/*"BATTLE_ELAPSED_TURN"*/, 0LL);
      v19 = &v22;
      v22 = now;
    }
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v19, v15, v16, v17);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v18, v20, 0LL);
    if ( !nokoriTurnLabel )
LABEL_22:
      sub_1C1AE30(nokoriTimeObject, v12);
    UILabel__set_text(nokoriTurnLabel, (System_String_o *)nokoriTimeObject, 0LL);
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
  __int64 v13; // x1
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  int v15; // w8
  bool IsWarBoard; // w0
  UILabel_o *nokoriTurnLabel; // x19
  bool v18; // w20
  __int64 *v19; // x8
  System_String_o *v20; // x20
  Il2CppObject *v21; // x0
  int v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BCAB11 & 1) == 0 )
  {
    sub_1C1ABD4(&LocalizationManager_TypeInfo, *(_QWORD *)&now);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_3038/*"BATTLE_WARBOARD_REMAINING"*/, v10);
    sub_1C1ABD4(&StringLiteral_2967/*"BATTLE_RAID_REMAINING_TURN"*/, v11);
    byte_4BCAB11 = 1;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0LL, 0LL) )
  {
    nokoriTimeObject = this->fields.nokoriTimeObject;
    if ( !nokoriTimeObject )
      goto LABEL_21;
    nokoriTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nokoriTimeObject, 0LL);
    if ( !nokoriTimeObject )
      goto LABEL_21;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)nokoriTimeObject, this->fields.timeDefPos, 0LL);
    nokoriTimeObject = this->fields.nokoriTurnObject;
    if ( !nokoriTimeObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(nokoriTimeObject, 1, 0LL);
    v15 = now <= 1 ? 1 : now;
    v22 = (limit - v15 + 1) & ~((limit - v15 + 1) >> 31);
    if ( !bdata )
      goto LABEL_21;
    IsWarBoard = BattleData__IsWarBoard(bdata, 0LL);
    nokoriTurnLabel = this->fields.nokoriTurnLabel;
    v18 = IsWarBoard;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsWarBoard )
      {
LABEL_15:
        v19 = &StringLiteral_3038/*"BATTLE_WARBOARD_REMAINING"*/;
        goto LABEL_18;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v18 )
        goto LABEL_15;
    }
    v19 = &StringLiteral_2967/*"BATTLE_RAID_REMAINING_TURN"*/;
LABEL_18:
    v20 = LocalizationManager__Get((System_String_o *)*v19, 0LL);
    v21 = (Il2CppObject *)System_Int32__ToString((int32_t)&v22, 0LL);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v20, v21, 0LL);
    if ( nokoriTurnLabel )
    {
      UILabel__set_text(nokoriTurnLabel, (System_String_o *)nokoriTimeObject, 0LL);
      return;
    }
LABEL_21:
    sub_1C1AE30(nokoriTimeObject, v13);
  }
}


void __fastcall BattlePerformanceInfoComponent__setShowTurn(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bdata,
        int32_t addturn,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v5; // x19
  const MethodInfo *v7; // x4
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !bdata )
    goto LABEL_10;
  v5 = this;
  if ( BattleData__isLimitTurn(bdata, 0LL) )
  {
    BattlePerformanceInfoComponent__setShowLimitTurn(
      v5,
      bdata->fields.turnCount + addturn,
      bdata->fields.limitTurnCount,
      bdata,
      v7);
    return;
  }
  if ( BattleData__isShowTurn(bdata, 0LL) )
  {
    BattlePerformanceInfoComponent__setShowElapsedTurn(
      v5,
      bdata->fields.stateshowturn,
      bdata->fields.turnCount + bdata->fields.totalTurnCount,
      v8);
    return;
  }
  this = (BattlePerformanceInfoComponent_o *)v5->fields.nokoriTimeObject;
  if ( !this
    || (this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL)) == 0LL
    || (v9.fields.z = v5->fields.timeDefPos.fields.z + 0.0,
        v9.fields.y = v5->fields.timeDefPos.fields.y + v5->fields.AdjustY,
        v9.fields.x = v5->fields.timeDefPos.fields.x + 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL),
        (this = (BattlePerformanceInfoComponent_o *)v5->fields.nokoriTurnObject) == 0LL) )
  {
LABEL_10:
    sub_1C1AE30(this, bdata);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UILabel_o *nowWaveLabel; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  UILabel_o *maxWaveLabel; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x1
  int v25; // [xsp+8h] [xbp-48h] BYREF
  int v26; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BCAB16 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&now);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_25388/*"{0:D}"*/, v10);
    byte_4BCAB16 = 1;
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0LL, 0LL) )
  {
    v13 = this->fields.waveShowObject;
    if ( !v13 )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(v13, 1, 0LL);
    nowWaveLabel = this->fields.nowWaveLabel;
    v26 = now + 1;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v15, v16, v17);
    v13 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25388/*"{0:D}"*/, v18, 0LL);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, (System_String_o *)v13, 0LL),
          maxWaveLabel = this->fields.maxWaveLabel,
          v25 = max + 1,
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v20, v21, v22),
          v13 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25388/*"{0:D}"*/, v23, 0LL),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, (System_String_o *)v13, 0LL), !data) )
    {
LABEL_13:
      sub_1C1AE30(v13, v12);
    }
    if ( !BattleData__IsWarBoard(data, 0LL) )
      BattlePerformanceInfoComponent__UpdateWaveDisplay(this, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__setStockSprite(
        BattlePerformanceInfoComponent_o *this,
        int32_t index,
        bool isPlayChangeEffect,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Behaviour_o *stockPSrpite; // x0
  UISprite_o *stockSprite; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  UnityEngine_GameObject_o *stockEffectPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BCAB18 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, *(_QWORD *)&index);
    sub_1C1ABD4(&StringLiteral_20476/*"icon_drop_item_0"*/, v7);
    byte_4BCAB18 = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        (stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        stockSprite = this->fields.stockSprite,
        v16 = index / 3 + 1,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v10, v11, v12),
        stockPSrpite = (UnityEngine_Behaviour_o *)System_String__Concat((Il2CppObject *)StringLiteral_20476/*"icon_drop_item_0"*/, v13, 0LL),
        !stockSprite) )
  {
LABEL_16:
    sub_1C1AE30(stockPSrpite, *(_QWORD *)&index);
  }
  UISprite__set_spriteName(stockSprite, (System_String_o *)stockPSrpite, 0LL);
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
  UnityEngine_Behaviour__set_enabled(stockPSrpite, 1, 0LL);
LABEL_12:
  if ( isPlayChangeEffect )
  {
    stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockSprite;
    if ( !stockPSrpite )
      goto LABEL_16;
    stockEffectPrefab = this->fields.stockEffectPrefab;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)stockPSrpite, 0LL);
    BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, stockEffectPrefab, transform, 0LL, 0LL);
  }
}


void __fastcall BattlePerformanceInfoComponent__updateDropItemCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        bool isPlayChangeEffect,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  int64_t Instance; // x0
  const MethodInfo *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x21
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  int v32; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x25
  int32_t stockIndex; // w22
  System_Collections_Generic_List_object__o *v35; // x24
  int32_t v36; // w26
  System_Collections_Generic_List_object__o *v37; // x8
  __int64 v38; // x27
  __int64 v39; // x8
  int v40; // w8
  const MethodInfo *v41; // x2
  __int64 v42; // x8
  __int64 v43; // x8
  BattleItemData_o *v44; // x27
  System_Collections_Generic_List_object__o *v45; // x8
  int32_t v46; // w28
  __int64 v47; // x8
  __int64 v48; // x8
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  int64_t v58; // x1
  Il2CppClass **v59; // x0
  __int64 v60; // x27
  System_Collections_Generic_List_object__o *v61; // x8
  __int64 v62; // x27
  __int64 v63; // x8
  int32_t v64; // w8
  signed int monitor_high; // w27
  struct System_Int32_array *raritylist; // x8
  int v67; // w9
  int32_t v68; // w27
  System_Action_object__o *v69; // x25
  __int64 v70; // x8
  UILabel_o *stockLabel; // x21
  const MethodInfo *v72; // x3
  __int64 v73; // x8
  UILabel_o *v74; // x19
  bool v75; // [xsp+Ch] [xbp-84h]
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  int v77; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4BCAB17 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_BattleDropItem__TypeInfo, bData);
    sub_1C1ABD4(&BattlePerformanceInfoComponent_TypeInfo, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleDropItem__Add__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleDropItem__ForEach__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v14);
    sub_1C1ABD4(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C1ABD4(&Method_SingletonTemplate_BattleItemData__get_Instance__, v17);
    sub_1C1ABD4(&Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__, v18);
    sub_1C1ABD4(&BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo, v19);
    byte_4BCAB17 = 1;
  }
  v77 = 0;
  entity = 0LL;
  v20 = sub_1C1AE20(BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_106;
  *(_QWORD *)(v20 + 16) = bData;
  v29 = v20 + 16;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)bData, v23, v24, v25, v26, v27, v28);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_QWORD *)v29 )
    goto LABEL_106;
  v31 = *(_QWORD *)(*(_QWORD *)v29 + 528LL);
  if ( !v31 )
    goto LABEL_106;
  v32 = *(_DWORD *)(v31 + 24);
  if ( v32 )
  {
    v75 = isPlayChangeEffect;
    v33 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    stockIndex = this->fields.stockIndex;
    v35 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_BattleDropItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v35,
      (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    if ( v32 >= 1 )
    {
      v36 = 0;
      while ( *(_QWORD *)v29 )
      {
        Instance = *(_QWORD *)(*(_QWORD *)v29 + 528LL);
        if ( !Instance )
          break;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)Instance,
                              v36,
                              (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !Instance || !v33 )
          break;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v33,
               &entity,
               *(_DWORD *)(Instance + 24),
               (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = (int64_t)entity;
          if ( !entity )
            break;
          if ( LODWORD(entity[3].klass) != 35 )
          {
            if ( !*(_QWORD *)v29 )
              break;
            Instance = *(_QWORD *)(*(_QWORD *)v29 + 528LL);
            if ( !Instance )
              break;
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v36,
                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *(int *)(Instance + 60) < 1000 )
              goto LABEL_25;
            if ( !*(_QWORD *)v29 )
              break;
            Instance = *(_QWORD *)(*(_QWORD *)v29 + 528LL);
            if ( !Instance )
              break;
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v36,
                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *(int *)(Instance + 60) <= 1002 )
            {
              if ( !entity )
                break;
              Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
              monitor_high = HIDWORD(entity[2].monitor);
              if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
                Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
              }
              raritylist = **(struct System_Int32_array ***)(Instance + 184);
              if ( !raritylist )
                break;
              if ( monitor_high >= (signed int)raritylist->max_length )
              {
                v40 = 0;
              }
              else
              {
                if ( !*(_DWORD *)(Instance + 224) )
                {
                  j_il2cpp_runtime_class_init_0(Instance);
                  raritylist = BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist;
                }
                if ( !entity || !raritylist )
                  break;
                v67 = HIDWORD(entity[2].monitor) - 1;
                if ( v67 >= raritylist->max_length )
LABEL_107:
                  sub_1C1AE38(Instance, v22);
                if ( !*(_QWORD *)v29 )
                  break;
                Instance = *(_QWORD *)(*(_QWORD *)v29 + 528LL);
                if ( !Instance )
                  break;
                v68 = raritylist->m_Items[v67 + 1];
                Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v36,
                                      (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
                if ( !Instance )
                  break;
                v40 = v68 + *(_DWORD *)(Instance + 60) - 1000;
              }
            }
            else
            {
LABEL_25:
              Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
              if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
                Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
              }
              if ( !*(_QWORD *)v29 )
                break;
              v37 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v29 + 528LL);
              if ( !v37 )
                break;
              v38 = **(_QWORD **)(Instance + 184);
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v37,
                                    v36,
                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance || !v38 )
                break;
              v39 = *(int *)(Instance + 60);
              if ( (unsigned int)v39 >= *(_DWORD *)(v38 + 24) )
                goto LABEL_107;
              v40 = *(_DWORD *)(v38 + 4 * v39 + 32);
            }
            Instance = (int64_t)entity;
            if ( stockIndex < v40 )
              stockIndex = v40;
            if ( !entity )
              break;
          }
          Instance = ItemEntity__GetBattleGetEffect((ItemEntity_o *)Instance, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( !*(_QWORD *)v29 )
              break;
            v42 = *(_QWORD *)(*(_QWORD *)v29 + 64LL);
            if ( !v42 )
              break;
            v43 = *(_QWORD *)(v42 + 272);
            if ( !v43 )
              break;
            v22 = (const MethodInfo *)(unsigned int)Instance;
            Instance = *(_QWORD *)(v43 + 72);
            if ( !Instance )
              break;
            BattlePerformanceMaster__StartBattleGetEffect((BattlePerformanceMaster_o *)Instance, (int32_t)v22, v41);
            if ( !entity )
              break;
            if ( LODWORD(entity[3].klass) == 35 )
            {
              Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
              if ( !*(_QWORD *)v29 )
                break;
              v44 = (BattleItemData_o *)Instance;
              Instance = *(_QWORD *)(*(_QWORD *)v29 + 528LL);
              if ( !Instance )
                break;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v36,
                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !*(_QWORD *)v29 )
                break;
              v45 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v29 + 528LL);
              if ( !v45 )
                break;
              v46 = *(_DWORD *)(Instance + 24);
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v45,
                                    v36,
                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !v44 )
                break;
              BattleItemData__AddItemCountWithIdCheck(v44, v46, *(_DWORD *)(Instance + 44), 0LL);
              if ( !*(_QWORD *)v29 )
                break;
              v47 = *(_QWORD *)(*(_QWORD *)v29 + 64LL);
              if ( !v47 )
                break;
              v48 = *(_QWORD *)(v47 + 272);
              if ( !v48 )
                break;
              Instance = *(_QWORD *)(v48 + 72);
              if ( !Instance )
                break;
              BattlePerformanceMaster__UpdateBattleItemUi((BattlePerformanceMaster_o *)Instance, v22);
              if ( !*(_QWORD *)v29 )
                break;
              Instance = *(_QWORD *)(*(_QWORD *)v29 + 528LL);
              if ( !Instance )
                break;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v36,
                                    (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !v35 )
                break;
              items = v35->fields._items;
              v56 = Method_System_Collections_Generic_List_BattleDropItem__Add__;
              ++v35->fields._version;
              if ( !items )
                break;
              size = v35->fields._size;
              v58 = Instance;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v35,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_363C890 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
              }
              else
              {
                v59 = &items->obj.klass + size;
                v35->fields._size = size + 1;
                v59[4] = (Il2CppClass *)v58;
                sub_1C1AB78((PartyOrganizationUtility_o *)(v59 + 4), v58, v49, v50, v51, v52, v53, v54);
              }
            }
          }
        }
        else
        {
          Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
          if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
            Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
          }
          v60 = **(_QWORD **)(Instance + 184);
          if ( !v60 )
            break;
          if ( !*(_QWORD *)v29 )
            break;
          Instance = *(_QWORD *)(*(_QWORD *)v29 + 528LL);
          if ( !Instance )
            break;
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v36,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)(Instance + 60) < *(_DWORD *)(v60 + 24) )
          {
            Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
            if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
              Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
            }
            if ( !*(_QWORD *)v29 )
              break;
            v61 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v29 + 528LL);
            if ( !v61 )
              break;
            v62 = **(_QWORD **)(Instance + 184);
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v61,
                                  v36,
                                  (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance || !v62 )
              break;
            v63 = *(int *)(Instance + 60);
            if ( (unsigned int)v63 >= *(_DWORD *)(v62 + 24) )
              goto LABEL_107;
            v64 = *(_DWORD *)(v62 + 4 * v63 + 32);
            if ( stockIndex < v64 )
              stockIndex = v64;
          }
        }
        if ( v32 == ++v36 )
          goto LABEL_95;
      }
LABEL_106:
      sub_1C1AE30(Instance, v22);
    }
LABEL_95:
    v69 = (System_Action_object__o *)sub_1C1AE20(System_Action_BattleDropItem__TypeInfo);
    System_Action_object____ctor(
      v69,
      (Il2CppObject *)v20,
      Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__,
      0LL);
    if ( !v35 )
      goto LABEL_106;
    System_Collections_Generic_List_object___ForEach(
      v35,
      (System_Action_T__o *)v69,
      (const MethodInfo_363D2D0 *)Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    if ( !*(_QWORD *)v29 )
      goto LABEL_106;
    v70 = *(_QWORD *)(*(_QWORD *)v29 + 528LL);
    if ( !v70 )
      goto LABEL_106;
    stockLabel = this->fields.stockLabel;
    v77 = *(_DWORD *)(v70 + 24);
    Instance = (int64_t)System_Int32__ToString((int32_t)&v77, 0LL);
    if ( !stockLabel )
      goto LABEL_106;
    UILabel__set_text(stockLabel, (System_String_o *)Instance, 0LL);
    if ( stockIndex != this->fields.stockIndex )
    {
      this->fields.stockIndex = stockIndex;
      BattlePerformanceInfoComponent__setStockSprite(this, stockIndex, v75, v72);
    }
  }
  else
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, isPlayChangeEffect, v30);
    if ( !*(_QWORD *)v29 )
      goto LABEL_106;
    v73 = *(_QWORD *)(*(_QWORD *)v29 + 528LL);
    if ( !v73 )
      goto LABEL_106;
    v74 = this->fields.stockLabel;
    v77 = *(_DWORD *)(v73 + 24);
    Instance = (int64_t)System_Int32__ToString((int32_t)&v77, 0LL);
    if ( !v74 )
      goto LABEL_106;
    UILabel__set_text(v74, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall BattlePerformanceInfoComponent__updateNokoriEnemyCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t EnemyCountStartValue_k__BackingField; // w22
  int m_CancellationTokenSource; // w8
  BattlePerformanceInfoComponent_o *v11; // x21
  unsigned int v12; // w23
  UILabel_o *nokoriEnemyCountLabel; // x19
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  bool v17; // w0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x1
  System_String_o *v22; // x0
  int32_t v23; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4BCAB15 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, bData);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_3038/*"BATTLE_WARBOARD_REMAINING"*/, v6);
    sub_1C1ABD4(&StringLiteral_2962/*"BATTLE_NOKORIENEMY"*/, v7);
    this = (BattlePerformanceInfoComponent_o *)sub_1C1ABD4(&StringLiteral_25809/*"残り{0:#,0}体"*/, v8);
    byte_4BCAB15 = 1;
  }
  if ( !bData )
    goto LABEL_27;
  this = (BattlePerformanceInfoComponent_o *)BattleData__getEnemyServantList(bData, 0LL);
  EnemyCountStartValue_k__BackingField = bData->fields._EnemyCountStartValue_k__BackingField;
  v25 = EnemyCountStartValue_k__BackingField;
  if ( !this )
    goto LABEL_27;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= m_CancellationTokenSource )
        sub_1C1AE38(this, bData);
      this = (BattlePerformanceInfoComponent_o *)*((_QWORD *)&v11->fields.nokoriEnemyCountLabel + (int)v12);
      if ( !this )
        break;
      this = (BattlePerformanceInfoComponent_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        v25 = ++EnemyCountStartValue_k__BackingField;
      m_CancellationTokenSource = (int)v11->fields.m_CancellationTokenSource;
      if ( (int)++v12 >= m_CancellationTokenSource )
        goto LABEL_12;
    }
LABEL_27:
    sub_1C1AE30(this, bData);
  }
LABEL_12:
  if ( (EnemyCountStartValue_k__BackingField & 0x80000000) != 0 )
  {
    EnemyCountStartValue_k__BackingField = 0;
    v25 = 0;
  }
  if ( BattleData__IsWarBoard(bData, 0LL) )
  {
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3038/*"BATTLE_WARBOARD_REMAINING"*/, 0LL);
    v15 = System_Int32__ToString((int32_t)&v25, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_2962/*"BATTLE_NOKORIENEMY"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BattlePerformanceInfoComponent_o *)LocalizationManager__Get(v16, 0LL);
    if ( !this )
      goto LABEL_27;
    v14 = (System_String_o *)this;
    v17 = System_String__Equals_63048684((System_String_o *)this, v16, 0LL);
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( v17 )
    {
      v23 = EnemyCountStartValue_k__BackingField;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v18, v19, v20);
      v22 = (System_String_o *)StringLiteral_25809/*"残り{0:#,0}体"*/;
      goto LABEL_25;
    }
    v24 = EnemyCountStartValue_k__BackingField;
    v15 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v18, v19, v20);
  }
  v21 = (Il2CppObject *)v15;
  v22 = v14;
LABEL_25:
  this = (BattlePerformanceInfoComponent_o *)System_String__Format(v22, v21, 0LL);
  if ( !nokoriEnemyCountLabel )
    goto LABEL_27;
  UILabel__set_text(nokoriEnemyCountLabel, (System_String_o *)this, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__updateTime(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Ticks; // x0
  int64_t lastCheckTime; // x22
  int64_t v6; // x20
  double TotalSeconds; // d0
  int v8; // w20
  int64_t v9; // x0
  int64_t v10; // x1
  const MethodInfo *v11; // x2
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  int64_t v13; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v14; // 0:x0.8
  System_TimeSpan_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8

  if ( (byte_4BCAB13 & 1) == 0 )
  {
    sub_1C1ABD4(&System_DateTime_TypeInfo, method);
    sub_1C1ABD4(&System_TimeSpan_TypeInfo, v3);
    byte_4BCAB13 = 1;
  }
  v13 = 0LL;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v14.fields._dateData = (uint64_t)&dateData;
  Ticks = System_DateTime__get_Ticks(v14, 0LL);
  lastCheckTime = this->fields.lastCheckTime;
  v6 = Ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v15.fields._ticks = (int64_t)&v13;
  v13 = v6 - lastCheckTime;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v15, 0LL);
  if ( TotalSeconds == INFINITY )
    v8 = 0x80000000;
  else
    v8 = (int)TotalSeconds;
  if ( v8 >= 1 && this->fields.remaingTimeSeconds >= 1 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    dateData = System_DateTime__get_Now(0LL).fields._dateData;
    v16.fields._dateData = (uint64_t)&dateData;
    v9 = System_DateTime__get_Ticks(v16, 0LL);
    v10 = this->fields.remaingTimeSeconds - (unsigned int)v8;
    this->fields.remaingTimeSeconds = v10;
    this->fields.lastCheckTime = v9;
    BattlePerformanceInfoComponent__drawTime(this, v10, v11);
  }
}


void __fastcall BattlePerformanceInfoComponent___c__DisplayClass49_0___ctor(
        BattlePerformanceInfoComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceInfoComponent___c__DisplayClass49_0___updateDropItemCount_b__0(
        BattlePerformanceInfoComponent___c__DisplayClass49_0_o *this,
        BattleDropItem_o *x,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent___c__DisplayClass49_0_o *v4; // x20
  struct BattleData_o *bData; // x8

  v4 = this;
  if ( (byte_4BCAB1A & 1) == 0 )
  {
    this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)sub_1C1ABD4(
                                                                       &Method_System_Collections_Generic_List_BattleDropItem__Remove__,
                                                                       x);
    byte_4BCAB1A = 1;
  }
  bData = v4->fields.bData;
  if ( !bData || (this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)bData->fields.droplist) == 0LL )
    sub_1C1AE30(this, x);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this,
    (Il2CppObject *)x,
    (const MethodInfo_363DDB8 *)Method_System_Collections_Generic_List_BattleDropItem__Remove__);
}