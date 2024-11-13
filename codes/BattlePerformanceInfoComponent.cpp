void __fastcall BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Array_o *v7; // x0
  struct System_Int32_array *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_4B19190 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceInfoComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&int___TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338,
      v5,
      v6);
    byte_4B19190 = 1;
  }
  v7 = (System_Array_o *)sub_1BCA888(int___TypeInfo, 9LL);
  v15.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  v8 = (struct System_Int32_array *)v7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v7, v15, 0LL);
  BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__Initialize(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *nokoriTimeObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *transform; // x0
  unsigned int localPosition; // s0
  float v8; // s8
  float v9; // s1
  float v10; // s9
  UnityEngine_Object_o *nokoriTurnObject; // x20
  UnityEngine_Object_o *waveShowObject; // x20
  UnityEngine_Object_o *stockSprite; // x20
  const MethodInfo *v14; // x3
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19186 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19186 = 1;
  }
  nokoriTimeObject = (UnityEngine_Object_o *)this->fields.nokoriTimeObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    v8 = *(float *)&localPosition;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_29;
    *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)transform,
                                            0LL);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_29;
    v10 = v9;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_29;
    v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    this->fields.timeDefPos.fields.x = v8;
    this->fields.timeDefPos.fields.y = v10;
    this->fields.timeDefPos.fields.z = v15.fields.z;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0LL, 0LL) )
  {
    transform = this->fields.nokoriTurnObject;
    if ( !transform )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0LL, 0LL) )
  {
    transform = this->fields.waveShowObject;
    if ( transform )
    {
      UnityEngine_GameObject__SetActive(transform, 0, 0LL);
      goto LABEL_24;
    }
LABEL_29:
    sub_1BCAA3C(transform, v5);
  }
LABEL_24:
  stockSprite = (UnityEngine_Object_o *)this->fields.stockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(stockSprite, 0LL, 0LL) )
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, 0, v14);
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
    sub_1BCAA3C(nowWaveLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowWaveLabel, this->fields.isWaveCountInfinity, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__drawTime(
        BattlePerformanceInfoComponent_o *this,
        int64_t showTimeSeconds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  double TotalHours; // d0
  UILabel_o *v13; // x20
  int v14; // w25
  System_String_o *v15; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  UILabel_o *nokoriTimeLabel; // x20
  System_String_o *v22; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x23
  Il2CppObject *v25; // x0
  int32_t Seconds; // [xsp+Ch] [xbp-54h] BYREF
  int32_t Minutes; // [xsp+10h] [xbp-50h] BYREF
  int v28; // [xsp+14h] [xbp-4Ch] BYREF
  int64_t v29; // [xsp+18h] [xbp-48h] BYREF
  System_TimeSpan_o v30; // 0:x0.8
  System_TimeSpan_o v31; // 0:x0.8
  System_TimeSpan_o v32; // 0:x0.8
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1918B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, showTimeSeconds, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_TimeSpan_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_2956/*"BATTLE_RAID_REMAINING_TIME"*/, v9, v10);
    byte_4B1918B = 1;
  }
  v29 = 0LL;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, showTimeSeconds);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2956/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
    v28 = 0;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    Minutes = 0;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
    Seconds = 0;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v19 = System_String__Format_62415660(v22, v23, v24, v25, 0LL);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v19, 0LL);
      goto LABEL_18;
    }
LABEL_21:
    sub_1BCAA3C(v19, v20);
  }
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, showTimeSeconds);
  v30.fields._ticks = (int64_t)&v29;
  v29 = 10000000 * showTimeSeconds;
  TotalHours = System_TimeSpan__get_TotalHours(v30, 0LL);
  v13 = this->fields.nokoriTimeLabel;
  if ( TotalHours == INFINITY )
    v14 = 0x80000000;
  else
    v14 = (int)TotalHours;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2956/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
  v28 = v14;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v31.fields._ticks = (int64_t)&v29;
  Minutes = System_TimeSpan__get_Minutes(v31, 0LL);
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v32.fields._ticks = (int64_t)&v29;
  Seconds = System_TimeSpan__get_Seconds(v32, 0LL);
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  v19 = System_String__Format_62415660(v15, v16, v17, v18, 0LL);
  if ( !v13 )
    goto LABEL_21;
  UILabel__set_text(v13, v19, 0LL);
  if ( v14 > 0 )
    return;
LABEL_18:
  v19 = (System_String_o *)this->fields.nokoriTimeLabel;
  if ( !v19 )
    goto LABEL_21;
  v33.fields.r = 1.0;
  v33.fields.g = 0.0;
  v33.fields.b = 0.0;
  v33.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)v19, v33, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__setQuest(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct BattleEntity_o *battle_ent; // x21
  struct BattleInfoData_o *battle_info; // x8
  struct BattleRaidInfo_array *raidInfo; // x8
  bool v14; // w1
  __int64 v15; // x2
  BattlePerformanceInfoComponent_o *v16; // x20
  BattlePerformanceInfoComponent_o *v17; // x20
  __int64 v18; // x2
  BattlePerformanceInfoComponent_o *v19; // x20
  BattlePerformanceInfoComponent_o *v20; // x20
  int32_t eventId; // w21
  EventRaidMaster_o *v22; // x22
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v24; // x21
  __int64 v25; // x1
  int64_t endedAt; // x21
  int64_t Time_39269384; // x21
  __int64 v28; // x1
  int64_t Ticks; // x0
  int64_t remaingTimeSeconds; // x1
  const MethodInfo *v31; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B19187 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, data, method);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    this = (BattlePerformanceInfoComponent_o *)sub_1BCA7E0(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v9,
                                                 v10);
    byte_4B19187 = 1;
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
    v14 = 0;
LABEL_13:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14, 0LL);
    goto LABEL_14;
  }
  this = (BattlePerformanceInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v4->fields.isUpdateTimer = 1;
  if ( !data->fields.battle_info )
    goto LABEL_75;
  eventId = battle_ent->fields.eventId;
  v22 = (EventRaidMaster_o *)this;
  this = (BattlePerformanceInfoComponent_o *)BattleInfoData__getRaidId(data->fields.battle_info, 0LL);
  if ( !v22 )
    goto LABEL_75;
  Entity = EventRaidMaster__GetEntity(v22, eventId, (int32_t)this, 0LL);
  if ( Entity )
  {
    v24 = Entity;
    if ( BattleData__isRaidConnection(data, 0LL) )
    {
      endedAt = v24->fields.endedAt;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
      v33.fields._dateData = NetworkManager__getDateTime_39270164(endedAt, 0LL).fields._dateData;
      Time_39269384 = NetworkManager__getTime_39269384(v33, 0LL);
      v4->fields.remaingTimeSeconds = Time_39269384 - NetworkManager__getTime(0LL);
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v28);
      dateData = System_DateTime__get_Now(0LL).fields._dateData;
      v34.fields._dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v34, 0LL);
      remaingTimeSeconds = v4->fields.remaingTimeSeconds;
      v4->fields.lastCheckTime = Ticks;
      BattlePerformanceInfoComponent__drawTime(v4, remaingTimeSeconds, v31);
      this = (BattlePerformanceInfoComponent_o *)v4->fields.nokoriTimeObject;
      if ( !this )
        goto LABEL_75;
      v14 = 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( !BattleData__IsWarBoard(data, 0LL) )
    return;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_75;
  v35.fields.z = 0.0;
  v35.fields.x = 316.0;
  v35.fields.y = 158.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v35, 0LL);
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
  v16 = this;
  if ( !byte_4B109C1 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v15);
    byte_4B109C1 = 1;
  }
  if ( !v16 )
    goto LABEL_75;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v16,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v4->fields.enemyRoot )
    goto LABEL_75;
  v17 = this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.enemyRoot, 0LL);
  if ( !v17 )
    goto LABEL_75;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v17, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  v36.fields.y = 0.0;
  v36.fields.z = 0.0;
  v36.fields.x = -66.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v36, 0LL);
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
  v37.fields.x = 4.0;
  v37.fields.y = -9.0;
  v37.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v37, 0LL);
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
  v19 = this;
  if ( !byte_4B109C1 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, data, v18);
    byte_4B109C1 = 1;
  }
  if ( !v19 )
    goto LABEL_75;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v19,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v4->fields.turnRoot )
    goto LABEL_75;
  v20 = this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.turnRoot, 0LL);
  if ( !v20 )
    goto LABEL_75;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v20, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_75;
  v38.fields.x = 6.0;
  v38.fields.y = 0.0;
  v38.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v38, 0LL);
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
  v39.fields.y = -9.0;
  v39.fields.z = 0.0;
  v39.fields.x = 70.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v39, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnLabel;
  if ( !this
    || (UILabel__set_fontSize((UILabel_o *)this, 17, 0LL),
        (this = (BattlePerformanceInfoComponent_o *)v4->fields.itemRoot) == 0LL)
    || (this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_75:
    sub_1BCAA3C(this, data);
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
  int32_t v4; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *nokoriTurnObject; // x22
  __int64 v16; // x1
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  __int64 v18; // x1
  UILabel_o *nokoriTurnLabel; // x19
  System_String_o *v20; // x20
  int *v21; // x1
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  v4 = now;
  if ( (byte_4B19189 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&state, *(_QWORD *)&now);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_2908/*"BATTLE_ELAPSED_TURN"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3021/*"BATTLE_TOTALELAPSED_TURN"*/, v13, v14);
    byte_4B19189 = 1;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&state);
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
    if ( v4 <= 1 )
      v4 = 1;
    if ( state == 2 )
    {
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3021/*"BATTLE_TOTALELAPSED_TURN"*/, 0LL);
      v23 = v4;
      v21 = &v23;
    }
    else
    {
      if ( state != 1 )
        return;
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2908/*"BATTLE_ELAPSED_TURN"*/, 0LL);
      v21 = &v24;
      v24 = v4;
    }
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v21);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v20, v22, 0LL);
    if ( !nokoriTurnLabel )
LABEL_22:
      sub_1BCAA3C(nokoriTimeObject, v16);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *nokoriTurnObject; // x23
  __int64 v16; // x1
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  int v18; // w8
  bool IsWarBoard; // w0
  __int64 v20; // x1
  UILabel_o *nokoriTurnLabel; // x19
  bool v22; // w20
  __int64 *v23; // x8
  System_String_o *v24; // x20
  Il2CppObject *v25; // x0
  int v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B19188 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&now, *(_QWORD *)&limit);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3024/*"BATTLE_WARBOARD_REMAINING"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_2957/*"BATTLE_RAID_REMAINING_TURN"*/, v13, v14);
    byte_4B19188 = 1;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
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
    v18 = now <= 1 ? 1 : now;
    v26 = (limit - v18 + 1) & ~((limit - v18 + 1) >> 31);
    if ( !bdata )
      goto LABEL_21;
    IsWarBoard = BattleData__IsWarBoard(bdata, 0LL);
    nokoriTurnLabel = this->fields.nokoriTurnLabel;
    v22 = IsWarBoard;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsWarBoard )
      {
LABEL_15:
        v23 = &StringLiteral_3024/*"BATTLE_WARBOARD_REMAINING"*/;
        goto LABEL_18;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      if ( v22 )
        goto LABEL_15;
    }
    v23 = &StringLiteral_2957/*"BATTLE_RAID_REMAINING_TURN"*/;
LABEL_18:
    v24 = LocalizationManager__Get((System_String_o *)*v23, 0LL);
    v25 = (Il2CppObject *)System_Int32__ToString((int32_t)&v26, 0LL);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v24, v25, 0LL);
    if ( nokoriTurnLabel )
    {
      UILabel__set_text(nokoriTurnLabel, (System_String_o *)nokoriTimeObject, 0LL);
      return;
    }
LABEL_21:
    sub_1BCAA3C(nokoriTimeObject, v16);
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
    sub_1BCAA3C(this, bdata);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *waveShowObject; // x23
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x0
  UILabel_o *nowWaveLabel; // x23
  Il2CppObject *v17; // x0
  UILabel_o *maxWaveLabel; // x22
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x1
  int v21; // [xsp+8h] [xbp-48h] BYREF
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1918D & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&now, *(_QWORD *)&max);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_25221/*"{0:D}"*/, v11, v12);
    byte_4B1918D = 1;
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0LL, 0LL) )
  {
    v15 = this->fields.waveShowObject;
    if ( !v15 )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(v15, 1, 0LL);
    nowWaveLabel = this->fields.nowWaveLabel;
    v22 = now + 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v15 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25221/*"{0:D}"*/, v17, 0LL);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, (System_String_o *)v15, 0LL),
          maxWaveLabel = this->fields.maxWaveLabel,
          v21 = max + 1,
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21),
          v15 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_25221/*"{0:D}"*/, v19, 0LL),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, (System_String_o *)v15, 0LL), !data) )
    {
LABEL_13:
      sub_1BCAA3C(v15, v14);
    }
    if ( !BattleData__IsWarBoard(data, 0LL) )
      BattlePerformanceInfoComponent__UpdateWaveDisplay(this, v20);
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
  __int64 v8; // x2
  UnityEngine_Behaviour_o *stockPSrpite; // x0
  UISprite_o *stockSprite; // x22
  Il2CppObject *v11; // x0
  UnityEngine_GameObject_o *stockEffectPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1918F & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&index, isPlayChangeEffect);
    sub_1BCA7E0(&StringLiteral_20350/*"icon_drop_item_0"*/, v7, v8);
    byte_4B1918F = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        (stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        stockSprite = this->fields.stockSprite,
        v14 = index / 3 + 1,
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14),
        stockPSrpite = (UnityEngine_Behaviour_o *)System_String__Concat((Il2CppObject *)StringLiteral_20350/*"icon_drop_item_0"*/, v11, 0LL),
        !stockSprite) )
  {
LABEL_16:
    sub_1BCAA3C(stockPSrpite, *(_QWORD *)&index);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__updateDropItemCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        bool isPlayChangeEffect,
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x20
  int64_t Instance; // x0
  const MethodInfo *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x21
  __int64 v43; // x2
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  int v46; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x25
  int32_t stockIndex; // w22
  System_Collections_Generic_List_object__o *v49; // x24
  const MethodInfo *v50; // x2
  __int64 v51; // x3
  int32_t v52; // w26
  System_Collections_Generic_List_object__o *v53; // x8
  __int64 v54; // x27
  __int64 v55; // x8
  int v56; // w8
  __int64 v57; // x8
  __int64 v58; // x8
  BattleItemData_o *v59; // x27
  System_Collections_Generic_List_object__o *v60; // x8
  int32_t v61; // w28
  __int64 v62; // x8
  __int64 v63; // x8
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  int64_t v73; // x1
  Il2CppClass **v74; // x0
  __int64 v75; // x27
  System_Collections_Generic_List_object__o *v76; // x8
  __int64 v77; // x27
  __int64 v78; // x8
  int32_t v79; // w8
  signed int monitor_high; // w27
  struct System_Int32_array *raritylist; // x8
  int v82; // w9
  int32_t v83; // w27
  System_Action_object__o *v84; // x25
  __int64 v85; // x8
  UILabel_o *stockLabel; // x21
  const MethodInfo *v87; // x3
  __int64 v88; // x8
  UILabel_o *v89; // x19
  bool v90; // [xsp+Ch] [xbp-84h]
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  int v92; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4B1918E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleDropItem__TypeInfo, bData, isPlayChangeEffect);
    sub_1BCA7E0(&BattlePerformanceInfoComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__ForEach__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_SingletonTemplate_BattleItemData__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__, v29, v30);
    sub_1BCA7E0(&BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo, v31, v32);
    byte_4B1918E = 1;
  }
  v92 = 0;
  entity = 0LL;
  v33 = sub_1BCAA2C(BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo, bData, isPlayChangeEffect, method);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_106;
  *(_QWORD *)(v33 + 16) = bData;
  v42 = v33 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)bData, v36, v37, v38, v39, v40, v41);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_QWORD *)v42 )
    goto LABEL_106;
  v45 = *(_QWORD *)(*(_QWORD *)v42 + 528LL);
  if ( !v45 )
    goto LABEL_106;
  v46 = *(_DWORD *)(v45 + 24);
  if ( v46 )
  {
    v90 = isPlayChangeEffect;
    v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    stockIndex = this->fields.stockIndex;
    v49 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_BattleDropItem__TypeInfo,
                                                         v35,
                                                         v43,
                                                         v44);
    System_Collections_Generic_List_object____ctor(
      v49,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    if ( v46 >= 1 )
    {
      v52 = 0;
      while ( *(_QWORD *)v42 )
      {
        Instance = *(_QWORD *)(*(_QWORD *)v42 + 528LL);
        if ( !Instance )
          break;
        Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)Instance,
                              v52,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !Instance || !v47 )
          break;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v47,
               &entity,
               *(_DWORD *)(Instance + 24),
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = (int64_t)entity;
          if ( !entity )
            break;
          if ( LODWORD(entity[3].klass) != 35 )
          {
            if ( !*(_QWORD *)v42 )
              break;
            Instance = *(_QWORD *)(*(_QWORD *)v42 + 528LL);
            if ( !Instance )
              break;
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v52,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *(int *)(Instance + 60) < 1000 )
              goto LABEL_25;
            if ( !*(_QWORD *)v42 )
              break;
            Instance = *(_QWORD *)(*(_QWORD *)v42 + 528LL);
            if ( !Instance )
              break;
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)Instance,
                                  v52,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
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
                j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo, v35);
                Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
              }
              raritylist = **(struct System_Int32_array ***)(Instance + 184);
              if ( !raritylist )
                break;
              if ( monitor_high >= (signed int)raritylist->max_length )
              {
                v56 = 0;
              }
              else
              {
                if ( !*(_DWORD *)(Instance + 224) )
                {
                  j_il2cpp_runtime_class_init_0(Instance, v35);
                  raritylist = BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist;
                }
                if ( !entity || !raritylist )
                  break;
                v82 = HIDWORD(entity[2].monitor) - 1;
                if ( v82 >= raritylist->max_length )
LABEL_107:
                  sub_1BCAA44(Instance, v35);
                if ( !*(_QWORD *)v42 )
                  break;
                Instance = *(_QWORD *)(*(_QWORD *)v42 + 528LL);
                if ( !Instance )
                  break;
                v83 = raritylist->m_Items[v82 + 1];
                Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)Instance,
                                      v52,
                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
                if ( !Instance )
                  break;
                v56 = v83 + *(_DWORD *)(Instance + 60) - 1000;
              }
            }
            else
            {
LABEL_25:
              Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
              if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo, v35);
                Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
              }
              if ( !*(_QWORD *)v42 )
                break;
              v53 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v42 + 528LL);
              if ( !v53 )
                break;
              v54 = **(_QWORD **)(Instance + 184);
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v53,
                                    v52,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance || !v54 )
                break;
              v55 = *(int *)(Instance + 60);
              if ( (unsigned int)v55 >= *(_DWORD *)(v54 + 24) )
                goto LABEL_107;
              v56 = *(_DWORD *)(v54 + 4 * v55 + 32);
            }
            Instance = (int64_t)entity;
            if ( stockIndex < v56 )
              stockIndex = v56;
            if ( !entity )
              break;
          }
          Instance = ItemEntity__GetBattleGetEffect((ItemEntity_o *)Instance, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( !*(_QWORD *)v42 )
              break;
            v57 = *(_QWORD *)(*(_QWORD *)v42 + 64LL);
            if ( !v57 )
              break;
            v58 = *(_QWORD *)(v57 + 264);
            if ( !v58 )
              break;
            v35 = (const MethodInfo *)(unsigned int)Instance;
            Instance = *(_QWORD *)(v58 + 72);
            if ( !Instance )
              break;
            BattlePerformanceMaster__StartBattleGetEffect((BattlePerformanceMaster_o *)Instance, (int32_t)v35, v50);
            if ( !entity )
              break;
            if ( LODWORD(entity[3].klass) == 35 )
            {
              Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
              if ( !*(_QWORD *)v42 )
                break;
              v59 = (BattleItemData_o *)Instance;
              Instance = *(_QWORD *)(*(_QWORD *)v42 + 528LL);
              if ( !Instance )
                break;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v52,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !*(_QWORD *)v42 )
                break;
              v60 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v42 + 528LL);
              if ( !v60 )
                break;
              v61 = *(_DWORD *)(Instance + 24);
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    v60,
                                    v52,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !v59 )
                break;
              BattleItemData__AddItemCountWithIdCheck(v59, v61, *(_DWORD *)(Instance + 44), 0LL);
              if ( !*(_QWORD *)v42 )
                break;
              v62 = *(_QWORD *)(*(_QWORD *)v42 + 64LL);
              if ( !v62 )
                break;
              v63 = *(_QWORD *)(v62 + 264);
              if ( !v63 )
                break;
              Instance = *(_QWORD *)(v63 + 72);
              if ( !Instance )
                break;
              BattlePerformanceMaster__UpdateBattleItemUi((BattlePerformanceMaster_o *)Instance, v35);
              if ( !*(_QWORD *)v42 )
                break;
              Instance = *(_QWORD *)(*(_QWORD *)v42 + 528LL);
              if ( !Instance )
                break;
              Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)Instance,
                                    v52,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !v49 )
                break;
              items = v49->fields._items;
              v71 = Method_System_Collections_Generic_List_BattleDropItem__Add__;
              ++v49->fields._version;
              if ( !items )
                break;
              size = v49->fields._size;
              v73 = Instance;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v49,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
              }
              else
              {
                v74 = &items->obj.klass + size;
                v49->fields._size = size + 1;
                v74[4] = (Il2CppClass *)v73;
                sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 4), v73, v64, v65, v66, v67, v68, v69);
              }
            }
          }
        }
        else
        {
          Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
          if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo, v35);
            Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
          }
          v75 = **(_QWORD **)(Instance + 184);
          if ( !v75 )
            break;
          if ( !*(_QWORD *)v42 )
            break;
          Instance = *(_QWORD *)(*(_QWORD *)v42 + 528LL);
          if ( !Instance )
            break;
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                v52,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
          if ( !Instance )
            break;
          if ( *(_DWORD *)(Instance + 60) < *(_DWORD *)(v75 + 24) )
          {
            Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
            if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo, v35);
              Instance = (int64_t)BattlePerformanceInfoComponent_TypeInfo;
            }
            if ( !*(_QWORD *)v42 )
              break;
            v76 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v42 + 528LL);
            if ( !v76 )
              break;
            v77 = **(_QWORD **)(Instance + 184);
            Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                  v76,
                                  v52,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance || !v77 )
              break;
            v78 = *(int *)(Instance + 60);
            if ( (unsigned int)v78 >= *(_DWORD *)(v77 + 24) )
              goto LABEL_107;
            v79 = *(_DWORD *)(v77 + 4 * v78 + 32);
            if ( stockIndex < v79 )
              stockIndex = v79;
          }
        }
        if ( v46 == ++v52 )
          goto LABEL_95;
      }
LABEL_106:
      sub_1BCAA3C(Instance, v35);
    }
LABEL_95:
    v84 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleDropItem__TypeInfo, v35, v50, v51);
    System_Action_object____ctor(
      v84,
      (Il2CppObject *)v33,
      Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__,
      0LL);
    if ( !v49 )
      goto LABEL_106;
    System_Collections_Generic_List_object___ForEach(
      v49,
      (System_Action_T__o *)v84,
      (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    if ( !*(_QWORD *)v42 )
      goto LABEL_106;
    v85 = *(_QWORD *)(*(_QWORD *)v42 + 528LL);
    if ( !v85 )
      goto LABEL_106;
    stockLabel = this->fields.stockLabel;
    v92 = *(_DWORD *)(v85 + 24);
    Instance = (int64_t)System_Int32__ToString((int32_t)&v92, 0LL);
    if ( !stockLabel )
      goto LABEL_106;
    UILabel__set_text(stockLabel, (System_String_o *)Instance, 0LL);
    if ( stockIndex != this->fields.stockIndex )
    {
      this->fields.stockIndex = stockIndex;
      BattlePerformanceInfoComponent__setStockSprite(this, stockIndex, v90, v87);
    }
  }
  else
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, isPlayChangeEffect, v44);
    if ( !*(_QWORD *)v42 )
      goto LABEL_106;
    v88 = *(_QWORD *)(*(_QWORD *)v42 + 528LL);
    if ( !v88 )
      goto LABEL_106;
    v89 = this->fields.stockLabel;
    v92 = *(_DWORD *)(v88 + 24);
    Instance = (int64_t)System_Int32__ToString((int32_t)&v92, 0LL);
    if ( !v89 )
      goto LABEL_106;
    UILabel__set_text(v89, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall BattlePerformanceInfoComponent__updateNokoriEnemyCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t EnemyCountStartValue_k__BackingField; // w22
  int m_CancellationTokenSource; // w8
  BattlePerformanceInfoComponent_o *v15; // x21
  unsigned int v16; // w23
  __int64 v17; // x1
  UILabel_o *nokoriEnemyCountLabel; // x19
  System_String_o *v19; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  bool v22; // w0
  Il2CppObject *v23; // x1
  System_String_o *v24; // x0
  int32_t v25; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B1918C & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, bData, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3024/*"BATTLE_WARBOARD_REMAINING"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_2952/*"BATTLE_NOKORIENEMY"*/, v9, v10);
    this = (BattlePerformanceInfoComponent_o *)sub_1BCA7E0(&StringLiteral_25636/*"残り{0:#,0}体"*/, v11, v12);
    byte_4B1918C = 1;
  }
  if ( !bData )
    goto LABEL_27;
  this = (BattlePerformanceInfoComponent_o *)BattleData__getEnemyServantList(bData, 0LL);
  EnemyCountStartValue_k__BackingField = bData->fields._EnemyCountStartValue_k__BackingField;
  v27 = EnemyCountStartValue_k__BackingField;
  if ( !this )
    goto LABEL_27;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v15 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= m_CancellationTokenSource )
        sub_1BCAA44(this, bData);
      this = (BattlePerformanceInfoComponent_o *)*((_QWORD *)&v15->fields.nokoriEnemyCountLabel + (int)v16);
      if ( !this )
        break;
      this = (BattlePerformanceInfoComponent_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        v27 = ++EnemyCountStartValue_k__BackingField;
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= m_CancellationTokenSource )
        goto LABEL_12;
    }
LABEL_27:
    sub_1BCAA3C(this, bData);
  }
LABEL_12:
  if ( (EnemyCountStartValue_k__BackingField & 0x80000000) != 0 )
  {
    EnemyCountStartValue_k__BackingField = 0;
    v27 = 0;
  }
  if ( BattleData__IsWarBoard(bData, 0LL) )
  {
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3024/*"BATTLE_WARBOARD_REMAINING"*/, 0LL);
    v20 = System_Int32__ToString((int32_t)&v27, 0LL);
  }
  else
  {
    v21 = (System_String_o *)StringLiteral_2952/*"BATTLE_NOKORIENEMY"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
    this = (BattlePerformanceInfoComponent_o *)LocalizationManager__Get(v21, 0LL);
    if ( !this )
      goto LABEL_27;
    v19 = (System_String_o *)this;
    v22 = System_String__Equals_62409536((System_String_o *)this, v21, 0LL);
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( v22 )
    {
      v25 = EnemyCountStartValue_k__BackingField;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      v24 = (System_String_o *)StringLiteral_25636/*"残り{0:#,0}体"*/;
      goto LABEL_25;
    }
    v26 = EnemyCountStartValue_k__BackingField;
    v20 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  }
  v23 = (Il2CppObject *)v20;
  v24 = v19;
LABEL_25:
  this = (BattlePerformanceInfoComponent_o *)System_String__Format(v24, v23, 0LL);
  if ( !nokoriEnemyCountLabel )
    goto LABEL_27;
  UILabel__set_text(nokoriEnemyCountLabel, (System_String_o *)this, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__updateTime(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t Ticks; // x0
  __int64 v7; // x1
  int64_t lastCheckTime; // x22
  int64_t v9; // x20
  __int64 v10; // x1
  double TotalSeconds; // d0
  int v12; // w20
  int64_t v13; // x0
  int64_t v14; // x1
  const MethodInfo *v15; // x2
  uint64_t dateData; // [xsp+8h] [xbp-38h] BYREF
  int64_t v17; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v18; // 0:x0.8
  System_TimeSpan_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8

  if ( (byte_4B1918A & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, method, v2);
    sub_1BCA7E0(&System_TimeSpan_TypeInfo, v4, v5);
    byte_4B1918A = 1;
  }
  v17 = 0LL;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, method);
  dateData = System_DateTime__get_Now(0LL).fields._dateData;
  v18.fields._dateData = (uint64_t)&dateData;
  Ticks = System_DateTime__get_Ticks(v18, 0LL);
  lastCheckTime = this->fields.lastCheckTime;
  v9 = Ticks;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v7);
  v19.fields._ticks = (int64_t)&v17;
  v17 = v9 - lastCheckTime;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v19, 0LL);
  if ( TotalSeconds == INFINITY )
    v12 = 0x80000000;
  else
    v12 = (int)TotalSeconds;
  if ( v12 >= 1 && this->fields.remaingTimeSeconds >= 1 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v10);
    dateData = System_DateTime__get_Now(0LL).fields._dateData;
    v20.fields._dateData = (uint64_t)&dateData;
    v13 = System_DateTime__get_Ticks(v20, 0LL);
    v14 = this->fields.remaingTimeSeconds - (unsigned int)v12;
    this->fields.remaingTimeSeconds = v14;
    this->fields.lastCheckTime = v13;
    BattlePerformanceInfoComponent__drawTime(this, v14, v15);
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
  if ( (byte_4B19191 & 1) == 0 )
  {
    this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)sub_1BCA7E0(
                                                                       &Method_System_Collections_Generic_List_BattleDropItem__Remove__,
                                                                       x,
                                                                       method);
    byte_4B19191 = 1;
  }
  bData = v4->fields.bData;
  if ( !bData || (this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)bData->fields.droplist) == 0LL )
    sub_1BCAA3C(this, x);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this,
    (Il2CppObject *)x,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_BattleDropItem__Remove__);
}