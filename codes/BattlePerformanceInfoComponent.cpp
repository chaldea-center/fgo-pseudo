void BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Int32_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C5A2FB & 1) == 0 )
  {
    sub_1C3E564(&BattlePerformanceInfoComponent_TypeInfo);
    sub_1C3E564(&int___TypeInfo);
    sub_1C3E564(&Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338);
    byte_4C5A2FB = 1;
  }
  v1 = (System_Array_o *)sub_1C3E60C(int___TypeInfo, 9);
  v2.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  v3 = (struct System_Int32_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64337244(v1, v2, 0);
  BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist = v3;
  sub_1C3E508((CGThumbnailListItem_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1C3E7C0(0, v3);
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

  if ( (byte_4C5A2F1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A2F1 = 1;
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
    sub_1C3E7C0(transform, v4);
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
    sub_1C3E7C0(nowWaveLabel, method);
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
  __int64 v34; // x1
  UILabel_o *nokoriTimeLabel; // x20
  System_String_o *v36; // x21
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  Il2CppObject *v43; // x22
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  Il2CppObject *v50; // x23
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  Il2CppObject *v57; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-50h] BYREF
  int v60; // [xsp+14h] [xbp-4Ch] BYREF
  int64_t v61; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5A2F6 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&System_TimeSpan_TypeInfo);
    sub_1C3E564(&StringLiteral_2818/*"BATTLE_RAID_REMAINING_TIME"*/);
    byte_4C5A2F6 = 1;
  }
  v61 = 0;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RAID_REMAINING_TIME"*/, 0);
    v60 = 0;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v37, v38, v39, v40, v41, v42);
    Minutes = 0;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v44, v45, v46, v47, v48, v49);
    Seconds = 0;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v51, v52, v53, v54, v55, v56);
    v33 = System_String__Format_63677828(v36, v43, v50, v57, 0);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v33, 0);
      goto LABEL_18;
    }
LABEL_21:
    sub_1C3E7C0(v33, v34);
  }
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v5.fields._ticks = (int64_t)&v61;
  v61 = 10000000 * showTimeSeconds;
  TotalHours = System_TimeSpan__get_TotalHours(v5, 0);
  v7 = this->fields.nokoriTimeLabel;
  if ( TotalHours == INFINITY )
    v8 = 0x80000000;
  else
    v8 = (int)TotalHours;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2818/*"BATTLE_RAID_REMAINING_TIME"*/, 0);
  v60 = v8;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v10, v11, v12, v13, v14, v15);
  v17.fields._ticks = (int64_t)&v61;
  Minutes = System_TimeSpan__get_Minutes(v17, 0);
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v18, v19, v20, v21, v22, v23);
  v25.fields._ticks = (int64_t)&v61;
  Seconds = System_TimeSpan__get_Seconds(v25, 0);
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v26, v27, v28, v29, v30, v31);
  v33 = System_String__Format_63677828(v9, v16, v24, v32, 0);
  if ( !v7 )
    goto LABEL_21;
  UILabel__set_text(v7, v33, 0);
  if ( v8 > 0 )
    return;
LABEL_18:
  v33 = (System_String_o *)this->fields.nokoriTimeLabel;
  if ( !v33 )
    goto LABEL_21;
  v62.fields.r = 1.0;
  v62.fields.g = 0.0;
  v62.fields.b = 0.0;
  v62.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v33, v62, 0);
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
  int64_t Time_41414896; // x21
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
  if ( (byte_4C5A2F2 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    this = (BattlePerformanceInfoComponent_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5A2F2 = 1;
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
  this = (BattlePerformanceInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
      v18.fields._dateData = NetworkManager__getDateTime_41415676(endedAt, 0).fields._dateData;
      Time_41414896 = NetworkManager__getTime_41414896(v18, 0);
      v4->fields.remaingTimeSeconds = Time_41414896 - NetworkManager__getTime(0);
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
  if ( !byte_4C506A1 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
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
  if ( !byte_4C506A1 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
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
    sub_1C3E7C0(this, data);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  System_String_o *v17; // x20
  int32_t *v18; // x1
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C5A2F4 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_2770/*"BATTLE_ELAPSED_TURN"*/);
    sub_1C3E564(&StringLiteral_2891/*"BATTLE_TOTALELAPSED_TURN"*/);
    byte_4C5A2F4 = 1;
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
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2891/*"BATTLE_TOTALELAPSED_TURN"*/, 0);
      v20 = now;
      v18 = &v20;
    }
    else
    {
      if ( state != 1 )
        return;
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2770/*"BATTLE_ELAPSED_TURN"*/, 0);
      v18 = &v21;
      v21 = now;
    }
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v18, v11, v12, v13, v14, v15, v16);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v17, v19, 0);
    if ( !nokoriTurnLabel )
LABEL_22:
      sub_1C3E7C0(nokoriTimeObject, v8);
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

  if ( (byte_4C5A2F3 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_2896/*"BATTLE_WARBOARD_REMAINING"*/);
    sub_1C3E564(&StringLiteral_2819/*"BATTLE_RAID_REMAINING_TURN"*/);
    byte_4C5A2F3 = 1;
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
        v16 = &StringLiteral_2896/*"BATTLE_WARBOARD_REMAINING"*/;
        goto LABEL_18;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v15 )
        goto LABEL_15;
    }
    v16 = &StringLiteral_2819/*"BATTLE_RAID_REMAINING_TURN"*/;
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
    sub_1C3E7C0(nokoriTimeObject, v10);
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
    sub_1C3E7C0(this, bdata);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  UILabel_o *maxWaveLabel; // x22
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x1
  int v29; // [xsp+8h] [xbp-48h] BYREF
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C5A2F8 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_25107/*"{0:D}"*/);
    byte_4C5A2F8 = 1;
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
    v30 = now + 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v13, v14, v15, v16, v17, v18);
    v11 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25107/*"{0:D}"*/, v19, 0);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, (System_String_o *)v11, 0),
          maxWaveLabel = this->fields.maxWaveLabel,
          v29 = max + 1,
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v21, v22, v23, v24, v25, v26),
          v11 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25107/*"{0:D}"*/, v27, 0),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, (System_String_o *)v11, 0), !data) )
    {
LABEL_13:
      sub_1C3E7C0(v11, v10);
    }
    if ( !BattleData__IsWarBoard(data, 0) )
      BattlePerformanceInfoComponent__UpdateWaveDisplay(this, v28);
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

  if ( (byte_4C5A2FA & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_20204/*"icon_drop_item_0"*/);
    byte_4C5A2FA = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0),
        (stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0)
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0),
        stockSprite = this->fields.stockSprite,
        v18 = index / 3 + 1,
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v9, v10, v11, v12, v13, v14),
        stockPSrpite = (UnityEngine_Behaviour_o *)System_String__Concat((Il2CppObject *)StringLiteral_20204/*"icon_drop_item_0"*/, v15, 0),
        !stockSprite) )
  {
LABEL_16:
    sub_1C3E7C0(stockPSrpite, *(_QWORD *)&index);
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
  const MethodInfo *v11; // x3
  __int64 v12; // x21
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  int v15; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x25
  int32_t stockIndex; // w22
  System_Collections_Generic_List_object__o *v18; // x24
  int32_t v19; // w26
  System_Collections_Generic_List_object__o *v20; // x8
  __int64 v21; // x27
  __int64 v22; // x8
  int v23; // w8
  const MethodInfo *v24; // x2
  __int64 v25; // x8
  __int64 v26; // x8
  BattleItemData_o *v27; // x27
  System_Collections_Generic_List_object__o *v28; // x8
  int32_t v29; // w28
  __int64 v30; // x8
  __int64 v31; // x8
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass *v37; // x1
  Il2CppClass **v38; // x0
  __int64 v39; // x27
  System_Collections_Generic_List_object__o *v40; // x8
  __int64 v41; // x27
  __int64 v42; // x8
  int32_t v43; // w8
  int monitor_high; // w27
  struct System_Int32_array *raritylist; // x8
  int v46; // w9
  int32_t v47; // w27
  System_Action_object__o *v48; // x25
  __int64 v49; // x8
  UILabel_o *stockLabel; // x21
  const MethodInfo *v51; // x3
  __int64 v52; // x8
  UILabel_o *v53; // x19
  bool v54; // [xsp+Ch] [xbp-84h]
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  int v56; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4C5A2F9 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_BattleDropItem__TypeInfo);
    sub_1C3E564(&BattlePerformanceInfoComponent_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C3E564(&Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__);
    sub_1C3E564(&BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
    byte_4C5A2F9 = 1;
  }
  v56 = 0;
  entity = 0;
  v7 = sub_1C3E7B0(BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_106;
  *(_QWORD *)(v7 + 16) = bData;
  v12 = v7 + 16;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)bData, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_QWORD *)v12 )
    goto LABEL_106;
  v14 = *(_QWORD *)(*(_QWORD *)v12 + 536LL);
  if ( !v14 )
    goto LABEL_106;
  v15 = *(_DWORD *)(v14 + 24);
  if ( v15 )
  {
    v54 = isPlayChangeEffect;
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    stockIndex = this->fields.stockIndex;
    v18 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleDropItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    if ( v15 >= 1 )
    {
      v19 = 0;
      while ( *(_QWORD *)v12 )
      {
        Instance = *(void **)(*(_QWORD *)v12 + 536LL);
        if ( !Instance )
          break;
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v19,
                     (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !Instance || !v16 )
          break;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v16,
               &entity,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = entity;
          if ( !entity )
            break;
          if ( LODWORD(entity[3].klass) != 35 )
          {
            if ( !*(_QWORD *)v12 )
              break;
            Instance = *(void **)(*(_QWORD *)v12 + 536LL);
            if ( !Instance )
              break;
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Instance,
                         v19,
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *((int *)Instance + 15) < 1000 )
              goto LABEL_25;
            if ( !*(_QWORD *)v12 )
              break;
            Instance = *(void **)(*(_QWORD *)v12 + 536LL);
            if ( !Instance )
              break;
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Instance,
                         v19,
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
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
                v23 = 0;
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
                v46 = HIDWORD(entity[2].monitor) - 1;
                if ( (unsigned int)v46 >= LODWORD(raritylist->max_length) )
LABEL_107:
                  sub_1C3E7C8(Instance, v9);
                if ( !*(_QWORD *)v12 )
                  break;
                Instance = *(void **)(*(_QWORD *)v12 + 536LL);
                if ( !Instance )
                  break;
                v47 = raritylist->m_Items[v46];
                Instance = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             v19,
                             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
                if ( !Instance )
                  break;
                v23 = v47 + *((_DWORD *)Instance + 15) - 1000;
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
              if ( !*(_QWORD *)v12 )
                break;
              v20 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v12 + 536LL);
              if ( !v20 )
                break;
              v21 = **((_QWORD **)Instance + 23);
              Instance = System_Collections_Generic_List_object___get_Item(
                           v20,
                           v19,
                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance || !v21 )
                break;
              v22 = *((int *)Instance + 15);
              if ( (unsigned int)v22 >= *(_DWORD *)(v21 + 24) )
                goto LABEL_107;
              v23 = *(_DWORD *)(v21 + 4 * v22 + 32);
            }
            Instance = entity;
            if ( stockIndex < v23 )
              stockIndex = v23;
            if ( !entity )
              break;
          }
          Instance = (void *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)Instance, 0);
          if ( (int)Instance >= 1 )
          {
            if ( !*(_QWORD *)v12 )
              break;
            v25 = *(_QWORD *)(*(_QWORD *)v12 + 64LL);
            if ( !v25 )
              break;
            v26 = *(_QWORD *)(v25 + 288);
            if ( !v26 )
              break;
            v9 = (const MethodInfo *)(unsigned int)Instance;
            Instance = *(void **)(v26 + 72);
            if ( !Instance )
              break;
            BattlePerformanceMaster__StartBattleGetEffect((BattlePerformanceMaster_o *)Instance, (int32_t)v9, v24);
            if ( !entity )
              break;
            if ( LODWORD(entity[3].klass) == 35 )
            {
              Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
              if ( !*(_QWORD *)v12 )
                break;
              v27 = (BattleItemData_o *)Instance;
              Instance = *(void **)(*(_QWORD *)v12 + 536LL);
              if ( !Instance )
                break;
              Instance = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)Instance,
                           v19,
                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !*(_QWORD *)v12 )
                break;
              v28 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v12 + 536LL);
              if ( !v28 )
                break;
              v29 = *((_DWORD *)Instance + 6);
              Instance = System_Collections_Generic_List_object___get_Item(
                           v28,
                           v19,
                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !v27 )
                break;
              BattleItemData__AddItemCountWithIdCheck(v27, v29, *((_DWORD *)Instance + 11), 0);
              if ( !*(_QWORD *)v12 )
                break;
              v30 = *(_QWORD *)(*(_QWORD *)v12 + 64LL);
              if ( !v30 )
                break;
              v31 = *(_QWORD *)(v30 + 288);
              if ( !v31 )
                break;
              Instance = *(void **)(v31 + 72);
              if ( !Instance )
                break;
              BattlePerformanceMaster__UpdateBattleItemUi((BattlePerformanceMaster_o *)Instance, v9);
              if ( !*(_QWORD *)v12 )
                break;
              Instance = *(void **)(*(_QWORD *)v12 + 536LL);
              if ( !Instance )
                break;
              Instance = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)Instance,
                           v19,
                           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !v18 )
                break;
              items = v18->fields._items;
              v35 = Method_System_Collections_Generic_List_BattleDropItem__Add__;
              ++v18->fields._version;
              if ( !items )
                break;
              size = v18->fields._size;
              v37 = (Il2CppClass *)Instance;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v18,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &items->obj.klass + size;
                v18->fields._size = size + 1;
                v38[4] = v37;
                sub_1C3E508((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v37, v32, v33);
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
          v39 = **((_QWORD **)Instance + 23);
          if ( !v39 )
            break;
          if ( !*(_QWORD *)v12 )
            break;
          Instance = *(void **)(*(_QWORD *)v12 + 536LL);
          if ( !Instance )
            break;
          Instance = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Instance,
                       v19,
                       (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
          if ( !Instance )
            break;
          if ( *((_DWORD *)Instance + 15) < *(_DWORD *)(v39 + 24) )
          {
            Instance = BattlePerformanceInfoComponent_TypeInfo;
            if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
              Instance = BattlePerformanceInfoComponent_TypeInfo;
            }
            if ( !*(_QWORD *)v12 )
              break;
            v40 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v12 + 536LL);
            if ( !v40 )
              break;
            v41 = **((_QWORD **)Instance + 23);
            Instance = System_Collections_Generic_List_object___get_Item(
                         v40,
                         v19,
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance || !v41 )
              break;
            v42 = *((int *)Instance + 15);
            if ( (unsigned int)v42 >= *(_DWORD *)(v41 + 24) )
              goto LABEL_107;
            v43 = *(_DWORD *)(v41 + 4 * v42 + 32);
            if ( stockIndex < v43 )
              stockIndex = v43;
          }
        }
        if ( v15 == ++v19 )
          goto LABEL_95;
      }
LABEL_106:
      sub_1C3E7C0(Instance, v9);
    }
LABEL_95:
    v48 = (System_Action_object__o *)sub_1C3E7B0(System_Action_BattleDropItem__TypeInfo);
    System_Action_object____ctor(
      v48,
      (Il2CppObject *)v7,
      Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__,
      0);
    if ( !v18 )
      goto LABEL_106;
    System_Collections_Generic_List_object___ForEach(
      v18,
      (System_Action_T__o *)v48,
      (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    if ( !*(_QWORD *)v12 )
      goto LABEL_106;
    v49 = *(_QWORD *)(*(_QWORD *)v12 + 536LL);
    if ( !v49 )
      goto LABEL_106;
    stockLabel = this->fields.stockLabel;
    v56 = *(_DWORD *)(v49 + 24);
    Instance = System_Int32__ToString((int32_t)&v56, 0);
    if ( !stockLabel )
      goto LABEL_106;
    UILabel__set_text(stockLabel, (System_String_o *)Instance, 0);
    if ( stockIndex != this->fields.stockIndex )
    {
      this->fields.stockIndex = stockIndex;
      BattlePerformanceInfoComponent__setStockSprite(this, stockIndex, v54, v51);
    }
  }
  else
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, isPlayChangeEffect, v13);
    if ( !*(_QWORD *)v12 )
      goto LABEL_106;
    v52 = *(_QWORD *)(*(_QWORD *)v12 + 536LL);
    if ( !v52 )
      goto LABEL_106;
    v53 = this->fields.stockLabel;
    v56 = *(_DWORD *)(v52 + 24);
    Instance = System_Int32__ToString((int32_t)&v56, 0);
    if ( !v53 )
      goto LABEL_106;
    UILabel__set_text(v53, (System_String_o *)Instance, 0);
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
  if ( (byte_4C5A2F7 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_2896/*"BATTLE_WARBOARD_REMAINING"*/);
    sub_1C3E564(&StringLiteral_2814/*"BATTLE_NOKORIENEMY"*/);
    this = (BattlePerformanceInfoComponent_o *)sub_1C3E564(&StringLiteral_25519/*"残り{0:#,0}体"*/);
    byte_4C5A2F7 = 1;
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
        sub_1C3E7C8(this, bData);
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
    sub_1C3E7C0(this, bData);
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
    v13 = System_String__Equals_63671772((System_String_o *)this, v12, 0);
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( v13 )
    {
      v22 = EnemyCountStartValue_k__BackingField;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16, v17, v18, v19);
      v21 = (System_String_o *)StringLiteral_25519/*"残り{0:#,0}体"*/;
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

  if ( (byte_4C5A2F5 & 1) == 0 )
  {
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&System_TimeSpan_TypeInfo);
    byte_4C5A2F5 = 1;
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
  if ( (byte_4C5A2FC & 1) == 0 )
  {
    this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)sub_1C3E564(&Method_System_Collections_Generic_List_BattleDropItem__Remove__);
    byte_4C5A2FC = 1;
  }
  bData = v4->fields.bData;
  if ( !bData || (this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)bData->fields.droplist) == 0 )
    sub_1C3E7C0(this, x);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this,
    (Il2CppObject *)x,
    (const MethodInfo_37B6988 *)Method_System_Collections_Generic_List_BattleDropItem__Remove__);
}