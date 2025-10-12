void BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3AEF0 & 1) == 0 )
  {
    sub_1C32C20(&BattlePerformanceInfoComponent_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338);
    byte_4C3AEF0 = 1;
  }
  v1 = (System_Array_o *)sub_1C32CC8(int___TypeInfo, 9);
  v2.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v1, v2, 0);
  BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void BattlePerformanceInfoComponent___ctor(BattlePerformanceInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.AdjustY = 24.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattlePerformanceInfoComponent__ClearBattleInfo(BattlePerformanceInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void BattlePerformanceInfoComponent__Initialize(BattlePerformanceInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *nokoriTimeObject; // x20
  UnityEngine_GameObject_o *transform; // x0
  unsigned int localPosition; // s0
  float v6; // s8
  float y; // s9
  UnityEngine_Object_o *nokoriTurnObject; // x20
  UnityEngine_Object_o *waveShowObject; // x20
  UnityEngine_Object_o *stockSprite; // x20
  const MethodInfo *v11; // x3
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3AEE6 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AEE6 = 1;
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
    v6 = *(float *)&localPosition;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_29;
    v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_29;
    y = v12.fields.y;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_29;
    v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.timeDefPos.fields.x = v6;
    this->fields.timeDefPos.fields.y = y;
    this->fields.timeDefPos.fields.z = v13.fields.z;
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
    sub_1C32E7C(transform);
  }
LABEL_24:
  stockSprite = (UnityEngine_Object_o *)this->fields.stockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(stockSprite, 0, 0) )
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, 0, v11);
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
    sub_1C32E7C(nowWaveLabel);
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x22
  System_TimeSpan_o v17; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x23
  System_TimeSpan_o v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  UILabel_o *nokoriTimeLabel; // x20
  System_String_o *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  Il2CppObject *v49; // x23
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  Il2CppObject *v56; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-50h] BYREF
  int v59; // [xsp+14h] [xbp-4Ch] BYREF
  int64_t v60; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3AEEB & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_TimeSpan_TypeInfo);
    sub_1C32C20(&StringLiteral_2818/*"BATTLE_RAID_REMAINING_TIME"*/);
    byte_4C3AEEB = 1;
  }
  v60 = 0;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RAID_REMAINING_TIME"*/, 0);
    v59 = 0;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v36, v37, v38, v39, v40, v41);
    Minutes = 0;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v43, v44, v45, v46, v47, v48);
    Seconds = 0;
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v50, v51, v52, v53, v54, v55);
    v33 = System_String__Format_63559904(v35, v42, v49, v56, 0);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v33, 0);
      goto LABEL_18;
    }
LABEL_21:
    sub_1C32E7C(v33);
  }
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v5.fields._ticks = (int64_t)&v60;
  v60 = 10000000 * showTimeSeconds;
  TotalHours = System_TimeSpan__get_TotalHours(v5, 0);
  v7 = this->fields.nokoriTimeLabel;
  if ( TotalHours == INFINITY )
    v8 = 0x80000000;
  else
    v8 = (int)TotalHours;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RAID_REMAINING_TIME"*/, 0);
  v59 = v8;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v10, v11, v12, v13, v14, v15);
  v17.fields._ticks = (int64_t)&v60;
  Minutes = System_TimeSpan__get_Minutes(v17, 0);
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v18, v19, v20, v21, v22, v23);
  v25.fields._ticks = (int64_t)&v60;
  Seconds = System_TimeSpan__get_Seconds(v25, 0);
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v26, v27, v28, v29, v30, v31);
  v33 = System_String__Format_63559904(v9, v16, v24, v32, 0);
  if ( !v7 )
    goto LABEL_21;
  UILabel__set_text(v7, v33, 0);
  if ( v8 > 0 )
    return;
LABEL_18:
  v33 = (System_String_o *)this->fields.nokoriTimeLabel;
  if ( !v33 )
    goto LABEL_21;
  v61.fields.r = 1.0;
  v61.fields.g = 0.0;
  v61.fields.b = 0.0;
  v61.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v33, v61, 0);
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
  int64_t Time_41266888; // x21
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
  if ( (byte_4C3AEE7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    this = (BattlePerformanceInfoComponent_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3AEE7 = 1;
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
  this = (BattlePerformanceInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
      v18.fields._dateData = NetworkManager__getDateTime_41267668(endedAt, 0).fields._dateData;
      Time_41266888 = NetworkManager__getTime_41266888(v18, 0);
      v4->fields.remaingTimeSeconds = Time_41266888 - NetworkManager__getTime(0);
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
  if ( !byte_4C313D1 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
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
  if ( !byte_4C313D1 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
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
    sub_1C32E7C(this);
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
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  UILabel_o *nokoriTurnLabel; // x19
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  System_String_o *v16; // x20
  int32_t *v17; // x1
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3AEE9 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_2770/*"BATTLE_ELAPSED_TURN"*/);
    sub_1C32C20(&StringLiteral_2891/*"BATTLE_TOTALELAPSED_TURN"*/);
    byte_4C3AEE9 = 1;
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
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2891/*"BATTLE_TOTALELAPSED_TURN"*/, 0);
      v19 = now;
      v17 = &v19;
    }
    else
    {
      if ( state != 1 )
        return;
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2770/*"BATTLE_ELAPSED_TURN"*/, 0);
      v17 = &v20;
      v20 = now;
    }
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v17, v10, v11, v12, v13, v14, v15);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v16, v18, 0);
    if ( !nokoriTurnLabel )
LABEL_22:
      sub_1C32E7C(nokoriTimeObject);
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
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  int v11; // w8
  bool IsWarBoard; // w0
  UILabel_o *nokoriTurnLabel; // x19
  bool v14; // w20
  __int64 *v15; // x8
  System_String_o *v16; // x20
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3AEE8 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_2896/*"BATTLE_WARBOARD_REMAINING"*/);
    sub_1C32C20(&StringLiteral_2819/*"BATTLE_RAID_REMAINING_TURN"*/);
    byte_4C3AEE8 = 1;
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
    v11 = now <= 1 ? 1 : now;
    v18 = (limit - v11 + 1) & ~((limit - v11 + 1) >> 31);
    if ( !bdata )
      goto LABEL_21;
    IsWarBoard = BattleData__IsWarBoard(bdata, 0);
    nokoriTurnLabel = this->fields.nokoriTurnLabel;
    v14 = IsWarBoard;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsWarBoard )
      {
LABEL_15:
        v15 = &StringLiteral_2896/*"BATTLE_WARBOARD_REMAINING"*/;
        goto LABEL_18;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v14 )
        goto LABEL_15;
    }
    v15 = &StringLiteral_2819/*"BATTLE_RAID_REMAINING_TURN"*/;
LABEL_18:
    v16 = LocalizationManager__Get((System_String_o *)*v15, 0);
    v17 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v16, v17, 0);
    if ( nokoriTurnLabel )
    {
      UILabel__set_text(nokoriTurnLabel, (System_String_o *)nokoriTimeObject, 0);
      return;
    }
LABEL_21:
    sub_1C32E7C(nokoriTimeObject);
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
    sub_1C32E7C(this);
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
  UnityEngine_GameObject_o *v10; // x0
  UILabel_o *nowWaveLabel; // x23
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x0
  UILabel_o *maxWaveLabel; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x1
  int v28; // [xsp+8h] [xbp-48h] BYREF
  int v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3AEED & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_25082/*"{0:D}"*/);
    byte_4C3AEED = 1;
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0, 0) )
  {
    v10 = this->fields.waveShowObject;
    if ( !v10 )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(v10, 1, 0);
    nowWaveLabel = this->fields.nowWaveLabel;
    v29 = now + 1;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v12, v13, v14, v15, v16, v17);
    v10 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25082/*"{0:D}"*/, v18, 0);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, (System_String_o *)v10, 0),
          maxWaveLabel = this->fields.maxWaveLabel,
          v28 = max + 1,
          v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v20, v21, v22, v23, v24, v25),
          v10 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25082/*"{0:D}"*/, v26, 0),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, (System_String_o *)v10, 0), !data) )
    {
LABEL_13:
      sub_1C32E7C(v10);
    }
    if ( !BattleData__IsWarBoard(data, 0) )
      BattlePerformanceInfoComponent__UpdateWaveDisplay(this, v27);
  }
}


void BattlePerformanceInfoComponent__setStockSprite(
        BattlePerformanceInfoComponent_o *this,
        int32_t index,
        bool isPlayChangeEffect,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *stockPSrpite; // x0
  UISprite_o *stockSprite; // x22
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  UnityEngine_GameObject_o *stockEffectPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3AEEF & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_20183/*"icon_drop_item_0"*/);
    byte_4C3AEEF = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0),
        (stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0)
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0),
        stockSprite = this->fields.stockSprite,
        v18 = index / 3 + 1,
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v9, v10, v11, v12, v13, v14),
        stockPSrpite = (UnityEngine_Behaviour_o *)System_String__Concat((Il2CppObject *)StringLiteral_20183/*"icon_drop_item_0"*/, v15, 0),
        !stockSprite) )
  {
LABEL_16:
    sub_1C32E7C(stockPSrpite);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x21
  const MethodInfo *v12; // x3
  __int64 v13; // x8
  int v14; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x25
  int32_t stockIndex; // w22
  System_Collections_Generic_List_object__o *v17; // x24
  int32_t v18; // w26
  System_Collections_Generic_List_object__o *v19; // x8
  __int64 v20; // x27
  __int64 v21; // x8
  int v22; // w8
  __int64 v23; // x8
  __int64 v24; // x8
  int32_t v25; // w1
  BattleItemData_o *v26; // x27
  System_Collections_Generic_List_object__o *v27; // x8
  int32_t v28; // w28
  __int64 v29; // x8
  __int64 v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass *v36; // x1
  Il2CppClass **v37; // x0
  __int64 v38; // x27
  System_Collections_Generic_List_object__o *v39; // x8
  __int64 v40; // x27
  __int64 v41; // x8
  int32_t v42; // w8
  int monitor_high; // w27
  struct System_Int32_array *raritylist; // x8
  int v45; // w9
  int32_t v46; // w27
  System_Action_object__o *v47; // x25
  __int64 v48; // x8
  UILabel_o *stockLabel; // x21
  const MethodInfo *v50; // x3
  __int64 v51; // x8
  UILabel_o *v52; // x19
  bool v53; // [xsp+Ch] [xbp-84h]
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  int v55; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C3AEEE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleDropItem__TypeInfo);
    sub_1C32C20(&BattlePerformanceInfoComponent_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleDropItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C32C20(&Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__);
    sub_1C32C20(&BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
    byte_4C3AEEE = 1;
  }
  v55 = 0;
  entity = 0;
  v7 = sub_1C32E6C(BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
  BattlePerformanceInfoComponent___c__DisplayClass49_0___ctor(
    (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)v7,
    0);
  if ( !v7 )
    goto LABEL_106;
  *(_QWORD *)(v7 + 16) = bData;
  v11 = v7 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)bData, v9, v10);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_QWORD *)v11 )
    goto LABEL_106;
  v13 = *(_QWORD *)(*(_QWORD *)v11 + 536LL);
  if ( !v13 )
    goto LABEL_106;
  v14 = *(_DWORD *)(v13 + 24);
  if ( v14 )
  {
    v53 = isPlayChangeEffect;
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    stockIndex = this->fields.stockIndex;
    v17 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleDropItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    if ( v14 >= 1 )
    {
      v18 = 0;
      while ( *(_QWORD *)v11 )
      {
        Instance = *(void **)(*(_QWORD *)v11 + 536LL);
        if ( !Instance )
          break;
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v18,
                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !Instance || !v15 )
          break;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v15,
               &entity,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_3396884 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = entity;
          if ( !entity )
            break;
          if ( LODWORD(entity[3].klass) != 35 )
          {
            if ( !*(_QWORD *)v11 )
              break;
            Instance = *(void **)(*(_QWORD *)v11 + 536LL);
            if ( !Instance )
              break;
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Instance,
                         v18,
                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *((int *)Instance + 15) < 1000 )
              goto LABEL_25;
            if ( !*(_QWORD *)v11 )
              break;
            Instance = *(void **)(*(_QWORD *)v11 + 536LL);
            if ( !Instance )
              break;
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Instance,
                         v18,
                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *((int *)Instance + 15) <= 1002 )
            {
              if ( !entity )
                break;
              Instance = BattlePerformanceInfoComponent_TypeInfo;
              monitor_high = HIDWORD(entity[2].monitor);
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
                v22 = 0;
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
                v45 = HIDWORD(entity[2].monitor) - 1;
                if ( (unsigned int)v45 >= LODWORD(raritylist->max_length) )
LABEL_107:
                  sub_1C32E84(Instance);
                if ( !*(_QWORD *)v11 )
                  break;
                Instance = *(void **)(*(_QWORD *)v11 + 536LL);
                if ( !Instance )
                  break;
                v46 = raritylist->m_Items[v45];
                Instance = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             v18,
                             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
                if ( !Instance )
                  break;
                v22 = v46 + *((_DWORD *)Instance + 15) - 1000;
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
              if ( !*(_QWORD *)v11 )
                break;
              v19 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v11 + 536LL);
              if ( !v19 )
                break;
              v20 = **((_QWORD **)Instance + 23);
              Instance = System_Collections_Generic_List_object___get_Item(
                           v19,
                           v18,
                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance || !v20 )
                break;
              v21 = *((int *)Instance + 15);
              if ( (unsigned int)v21 >= *(_DWORD *)(v20 + 24) )
                goto LABEL_107;
              v22 = *(_DWORD *)(v20 + 4 * v21 + 32);
            }
            Instance = entity;
            if ( stockIndex < v22 )
              stockIndex = v22;
            if ( !entity )
              break;
          }
          Instance = (void *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)Instance, 0);
          if ( (int)Instance >= 1 )
          {
            if ( !*(_QWORD *)v11 )
              break;
            v23 = *(_QWORD *)(*(_QWORD *)v11 + 64LL);
            if ( !v23 )
              break;
            v24 = *(_QWORD *)(v23 + 288);
            if ( !v24 )
              break;
            v25 = (int)Instance;
            Instance = *(void **)(v24 + 72);
            if ( !Instance )
              break;
            BattlePerformanceMaster__StartBattleGetEffect((BattlePerformanceMaster_o *)Instance, v25, 0);
            if ( !entity )
              break;
            if ( LODWORD(entity[3].klass) == 35 )
            {
              Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
              if ( !*(_QWORD *)v11 )
                break;
              v26 = (BattleItemData_o *)Instance;
              Instance = *(void **)(*(_QWORD *)v11 + 536LL);
              if ( !Instance )
                break;
              Instance = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)Instance,
                           v18,
                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !*(_QWORD *)v11 )
                break;
              v27 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v11 + 536LL);
              if ( !v27 )
                break;
              v28 = *((_DWORD *)Instance + 6);
              Instance = System_Collections_Generic_List_object___get_Item(
                           v27,
                           v18,
                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !v26 )
                break;
              BattleItemData__AddItemCountWithIdCheck(v26, v28, *((_DWORD *)Instance + 11), 0);
              if ( !*(_QWORD *)v11 )
                break;
              v29 = *(_QWORD *)(*(_QWORD *)v11 + 64LL);
              if ( !v29 )
                break;
              v30 = *(_QWORD *)(v29 + 288);
              if ( !v30 )
                break;
              Instance = *(void **)(v30 + 72);
              if ( !Instance )
                break;
              BattlePerformanceMaster__UpdateBattleItemUi((BattlePerformanceMaster_o *)Instance, 0);
              if ( !*(_QWORD *)v11 )
                break;
              Instance = *(void **)(*(_QWORD *)v11 + 536LL);
              if ( !Instance )
                break;
              Instance = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)Instance,
                           v18,
                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !v17 )
                break;
              items = v17->fields._items;
              v34 = Method_System_Collections_Generic_List_BattleDropItem__Add__;
              ++v17->fields._version;
              if ( !items )
                break;
              size = v17->fields._size;
              v36 = (Il2CppClass *)Instance;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v17,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v37 = &items->obj.klass + size;
                v17->fields._size = size + 1;
                v37[4] = v36;
                sub_1C32BC4((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v36, v31, v32);
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
          v38 = **((_QWORD **)Instance + 23);
          if ( !v38 )
            break;
          if ( !*(_QWORD *)v11 )
            break;
          Instance = *(void **)(*(_QWORD *)v11 + 536LL);
          if ( !Instance )
            break;
          Instance = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Instance,
                       v18,
                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
          if ( !Instance )
            break;
          if ( *((_DWORD *)Instance + 15) < *(_DWORD *)(v38 + 24) )
          {
            Instance = BattlePerformanceInfoComponent_TypeInfo;
            if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
              Instance = BattlePerformanceInfoComponent_TypeInfo;
            }
            if ( !*(_QWORD *)v11 )
              break;
            v39 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v11 + 536LL);
            if ( !v39 )
              break;
            v40 = **((_QWORD **)Instance + 23);
            Instance = System_Collections_Generic_List_object___get_Item(
                         v39,
                         v18,
                         (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance || !v40 )
              break;
            v41 = *((int *)Instance + 15);
            if ( (unsigned int)v41 >= *(_DWORD *)(v40 + 24) )
              goto LABEL_107;
            v42 = *(_DWORD *)(v40 + 4 * v41 + 32);
            if ( stockIndex < v42 )
              stockIndex = v42;
          }
        }
        if ( v14 == ++v18 )
          goto LABEL_95;
      }
LABEL_106:
      sub_1C32E7C(Instance);
    }
LABEL_95:
    v47 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleDropItem__TypeInfo);
    System_Action_object____ctor(
      v47,
      (Il2CppObject *)v7,
      Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__,
      0);
    if ( !v17 )
      goto LABEL_106;
    System_Collections_Generic_List_object___ForEach(
      v17,
      (System_Action_T__o *)v47,
      (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    if ( !*(_QWORD *)v11 )
      goto LABEL_106;
    v48 = *(_QWORD *)(*(_QWORD *)v11 + 536LL);
    if ( !v48 )
      goto LABEL_106;
    stockLabel = this->fields.stockLabel;
    v55 = *(_DWORD *)(v48 + 24);
    Instance = System_Int32__ToString((int32_t)&v55, 0);
    if ( !stockLabel )
      goto LABEL_106;
    UILabel__set_text(stockLabel, (System_String_o *)Instance, 0);
    if ( stockIndex != this->fields.stockIndex )
    {
      this->fields.stockIndex = stockIndex;
      BattlePerformanceInfoComponent__setStockSprite(this, stockIndex, v53, v50);
    }
  }
  else
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, isPlayChangeEffect, v12);
    if ( !*(_QWORD *)v11 )
      goto LABEL_106;
    v51 = *(_QWORD *)(*(_QWORD *)v11 + 536LL);
    if ( !v51 )
      goto LABEL_106;
    v52 = this->fields.stockLabel;
    v55 = *(_DWORD *)(v51 + 24);
    Instance = System_Int32__ToString((int32_t)&v55, 0);
    if ( !v52 )
      goto LABEL_106;
    UILabel__set_text(v52, (System_String_o *)Instance, 0);
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
  __int64 v11; // x0
  System_String_o *v12; // x21
  bool v13; // w0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  Il2CppObject *v20; // x1
  System_String_o *v21; // x0
  int32_t v22; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4C3AEEC & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_2896/*"BATTLE_WARBOARD_REMAINING"*/);
    sub_1C32C20(&StringLiteral_2814/*"BATTLE_NOKORIENEMY"*/);
    this = (BattlePerformanceInfoComponent_o *)sub_1C32C20(&StringLiteral_25494/*"残り{0:#,0}体"*/);
    byte_4C3AEEC = 1;
  }
  if ( !bData )
    goto LABEL_27;
  this = (BattlePerformanceInfoComponent_o *)BattleData__getEnemyServantList(bData, 0);
  EnemyCountStartValue_k__BackingField = bData->fields._EnemyCountStartValue_k__BackingField;
  v24 = EnemyCountStartValue_k__BackingField;
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
        sub_1C32E84(this);
      this = (BattlePerformanceInfoComponent_o *)*((_QWORD *)&v7->fields.nokoriEnemyCountLabel + (int)v8);
      if ( !this )
        break;
      this = (BattlePerformanceInfoComponent_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        v24 = ++EnemyCountStartValue_k__BackingField;
      m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
      if ( (int)++v8 >= m_CancellationTokenSource )
        goto LABEL_12;
    }
LABEL_27:
    sub_1C32E7C(this);
  }
LABEL_12:
  if ( EnemyCountStartValue_k__BackingField < 0 )
  {
    EnemyCountStartValue_k__BackingField = 0;
    v24 = 0;
  }
  if ( BattleData__IsWarBoard(bData, 0) )
  {
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2896/*"BATTLE_WARBOARD_REMAINING"*/, 0);
    v11 = (__int64)System_Int32__ToString((int32_t)&v24, 0);
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_2814/*"BATTLE_NOKORIENEMY"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BattlePerformanceInfoComponent_o *)LocalizationManager__Get(v12, 0);
    if ( !this )
      goto LABEL_27;
    v10 = (System_String_o *)this;
    v13 = System_String__Equals_63553848((System_String_o *)this, v12, 0);
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( v13 )
    {
      v22 = EnemyCountStartValue_k__BackingField;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16, v17, v18, v19);
      v21 = (System_String_o *)StringLiteral_25494/*"残り{0:#,0}体"*/;
      goto LABEL_25;
    }
    v23 = EnemyCountStartValue_k__BackingField;
    v11 = j_il2cpp_value_box_0(int_TypeInfo, &v23, v14, v15, v16, v17, v18, v19);
  }
  v20 = (Il2CppObject *)v11;
  v21 = v10;
LABEL_25:
  this = (BattlePerformanceInfoComponent_o *)System_String__Format(v21, v20, 0);
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

  if ( (byte_4C3AEEA & 1) == 0 )
  {
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&System_TimeSpan_TypeInfo);
    byte_4C3AEEA = 1;
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
  if ( (byte_4C3AEF1 & 1) == 0 )
  {
    this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleDropItem__Remove__);
    byte_4C3AEF1 = 1;
  }
  bData = v4->fields.bData;
  if ( !bData || (this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)bData->fields.droplist) == 0 )
    sub_1C32E7C(this);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this,
    (Il2CppObject *)x,
    (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_BattleDropItem__Remove__);
}