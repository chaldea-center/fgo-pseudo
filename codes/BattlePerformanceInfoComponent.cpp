void __fastcall BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x0
  struct System_Int32_array *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4A019CA & 1) == 0 )
  {
    sub_1B64A00(&BattlePerformanceInfoComponent_TypeInfo, v1);
    sub_1B64A00(&int___TypeInfo, v2);
    sub_1B64A00(
      &Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338,
      v3);
    byte_4A019CA = 1;
  }
  v4 = (System_Array_o *)sub_1B64AA8(int___TypeInfo, 9LL);
  v8.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  v5 = (struct System_Int32_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61293216(v4, v8, 0LL);
  BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist = v5;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields,
    (int32_t)v5,
    v6,
    v7);
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
    sub_1B64C5C(0LL, v3);
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

  if ( (byte_4A019C0 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A019C0 = 1;
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
    sub_1B64C5C(transform, v4);
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
    sub_1B64C5C(nowWaveLabel, method);
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

  if ( (byte_4A019C5 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, showTimeSeconds);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&System_TimeSpan_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_2915/*"BATTLE_RAID_REMAINING_TIME"*/, v7);
    byte_4A019C5 = 1;
  }
  v43 = 0LL;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2915/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
    v42 = 0;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v28, v29, v30);
    Minutes = 0;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v32, v33, v34);
    Seconds = 0;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v36, v37, v38);
    v24 = System_String__Format_61399576(v27, v31, v35, v39, 0LL);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v24, 0LL);
      goto LABEL_18;
    }
LABEL_21:
    sub_1B64C5C(v24, v25);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2915/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
  v42 = v10;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v12, v13, v14);
  v45.fields._ticks = (int64_t)&v43;
  Minutes = System_TimeSpan__get_Minutes(v45, 0LL);
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v16, v17, v18);
  v46.fields._ticks = (int64_t)&v43;
  Seconds = System_TimeSpan__get_Seconds(v46, 0LL);
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v20, v21, v22);
  v24 = System_String__Format_61399576(v11, v15, v19, v23, 0LL);
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
  int64_t Time_38166364; // x21
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
  if ( (byte_4A019C1 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventRaidMaster___, data);
    sub_1B64A00(&System_DateTime_TypeInfo, v5);
    sub_1B64A00(&NetworkManager_TypeInfo, v6);
    this = (BattlePerformanceInfoComponent_o *)sub_1B64A00(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v7);
    byte_4A019C1 = 1;
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
  this = (BattlePerformanceInfoComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_75;
  this = (BattlePerformanceInfoComponent_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
      v26.fields._dateData = NetworkManager__getDateTime_38078128(endedAt, 0LL).fields._dateData;
      Time_38166364 = NetworkManager__getTime_38166364(v26, 0LL);
      v4->fields.remaingTimeSeconds = Time_38166364 - NetworkManager__getTime(0LL);
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
  if ( !byte_49F9821 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, data);
    byte_49F9821 = 1;
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
  if ( !byte_49F9821 )
  {
    this = (BattlePerformanceInfoComponent_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, data);
    byte_49F9821 = 1;
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
    sub_1B64C5C(this, data);
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

  if ( (byte_4A019C3 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&state);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_2867/*"BATTLE_ELAPSED_TURN"*/, v9);
    sub_1B64A00(&StringLiteral_2980/*"BATTLE_TOTALELAPSED_TURN"*/, v10);
    byte_4A019C3 = 1;
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
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2980/*"BATTLE_TOTALELAPSED_TURN"*/, 0LL);
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
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2867/*"BATTLE_ELAPSED_TURN"*/, 0LL);
      v19 = &v22;
      v22 = now;
    }
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v19, v15, v16, v17);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v18, v20, 0LL);
    if ( !nokoriTurnLabel )
LABEL_22:
      sub_1B64C5C(nokoriTimeObject, v12);
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

  if ( (byte_4A019C2 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, *(_QWORD *)&now);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&StringLiteral_2983/*"BATTLE_WARBOARD_REMAINING"*/, v10);
    sub_1B64A00(&StringLiteral_2916/*"BATTLE_RAID_REMAINING_TURN"*/, v11);
    byte_4A019C2 = 1;
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
        v19 = &StringLiteral_2983/*"BATTLE_WARBOARD_REMAINING"*/;
        goto LABEL_18;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v18 )
        goto LABEL_15;
    }
    v19 = &StringLiteral_2916/*"BATTLE_RAID_REMAINING_TURN"*/;
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
    sub_1B64C5C(nokoriTimeObject, v13);
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
    sub_1B64C5C(this, bdata);
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

  if ( (byte_4A019C7 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&now);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&StringLiteral_24870/*"{0:D}"*/, v10);
    byte_4A019C7 = 1;
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
    v13 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_24870/*"{0:D}"*/, v18, 0LL);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, (System_String_o *)v13, 0LL),
          maxWaveLabel = this->fields.maxWaveLabel,
          v25 = max + 1,
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v20, v21, v22),
          v13 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_24870/*"{0:D}"*/, v23, 0LL),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, (System_String_o *)v13, 0LL), !data) )
    {
LABEL_13:
      sub_1B64C5C(v13, v12);
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

  if ( (byte_4A019C9 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&index);
    sub_1B64A00(&StringLiteral_20060/*"icon_drop_item_0"*/, v7);
    byte_4A019C9 = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        (stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        stockSprite = this->fields.stockSprite,
        v16 = index / 3 + 1,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v10, v11, v12),
        stockPSrpite = (UnityEngine_Behaviour_o *)System_String__Concat((Il2CppObject *)StringLiteral_20060/*"icon_drop_item_0"*/, v13, 0LL),
        !stockSprite) )
  {
LABEL_16:
    sub_1B64C5C(stockPSrpite, *(_QWORD *)&index);
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
  void *Instance; // x0
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x21
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  int v28; // w29
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x25
  int32_t stockIndex; // w22
  System_Collections_Generic_List_object__o *v31; // x24
  int32_t v32; // w26
  System_Collections_Generic_List_object__o *v33; // x8
  __int64 v34; // x27
  __int64 v35; // x8
  int v36; // w8
  const MethodInfo *v37; // x2
  __int64 v38; // x8
  __int64 v39; // x8
  BattleItemData_o *v40; // x27
  System_Collections_Generic_List_object__o *v41; // x8
  int32_t v42; // w28
  __int64 v43; // x8
  __int64 v44; // x8
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass *v50; // x1
  Il2CppClass **v51; // x0
  __int64 v52; // x27
  System_Collections_Generic_List_object__o *v53; // x8
  __int64 v54; // x27
  __int64 v55; // x8
  int32_t v56; // w8
  signed int monitor_high; // w27
  struct System_Int32_array *raritylist; // x8
  int v59; // w9
  int32_t v60; // w27
  System_Action_object__o *v61; // x25
  __int64 v62; // x8
  UILabel_o *stockLabel; // x21
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  UILabel_o *v66; // x19
  bool v67; // [xsp+Ch] [xbp-84h]
  Il2CppObject *entity; // [xsp+20h] [xbp-70h] BYREF
  int v69; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A019C8 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_BattleDropItem__TypeInfo, bData);
    sub_1B64A00(&BattlePerformanceInfoComponent_TypeInfo, v7);
    sub_1B64A00(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_1B64A00(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleDropItem__Add__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleDropItem__ForEach__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v14);
    sub_1B64A00(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v15);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B64A00(&Method_SingletonTemplate_BattleItemData__get_Instance__, v17);
    sub_1B64A00(&Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__, v18);
    sub_1B64A00(&BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo, v19);
    byte_4A019C8 = 1;
  }
  v69 = 0;
  entity = 0LL;
  v20 = sub_1B64C4C(BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_106;
  *(_QWORD *)(v20 + 16) = bData;
  v25 = v20 + 16;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)bData, v23, v24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_QWORD *)v25 )
    goto LABEL_106;
  v27 = *(_QWORD *)(*(_QWORD *)v25 + 528LL);
  if ( !v27 )
    goto LABEL_106;
  v28 = *(_DWORD *)(v27 + 24);
  if ( v28 )
  {
    v67 = isPlayChangeEffect;
    v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    stockIndex = this->fields.stockIndex;
    v31 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_BattleDropItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    if ( v28 >= 1 )
    {
      v32 = 0;
      while ( *(_QWORD *)v25 )
      {
        Instance = *(void **)(*(_QWORD *)v25 + 528LL);
        if ( !Instance )
          break;
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v32,
                     (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
        if ( !Instance || !v29 )
          break;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               v29,
               &entity,
               *((_DWORD *)Instance + 6),
               (const MethodInfo_30D67EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = entity;
          if ( !entity )
            break;
          if ( LODWORD(entity[3].klass) != 35 )
          {
            if ( !*(_QWORD *)v25 )
              break;
            Instance = *(void **)(*(_QWORD *)v25 + 528LL);
            if ( !Instance )
              break;
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Instance,
                         v32,
                         (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance )
              break;
            if ( *((int *)Instance + 15) < 1000 )
              goto LABEL_25;
            if ( !*(_QWORD *)v25 )
              break;
            Instance = *(void **)(*(_QWORD *)v25 + 528LL);
            if ( !Instance )
              break;
            Instance = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)Instance,
                         v32,
                         (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
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
              if ( monitor_high >= (signed int)raritylist->max_length )
              {
                v36 = 0;
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
                v59 = HIDWORD(entity[2].monitor) - 1;
                if ( v59 >= raritylist->max_length )
LABEL_107:
                  sub_1B64C64(Instance, v22);
                if ( !*(_QWORD *)v25 )
                  break;
                Instance = *(void **)(*(_QWORD *)v25 + 528LL);
                if ( !Instance )
                  break;
                v60 = raritylist->m_Items[v59 + 1];
                Instance = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)Instance,
                             v32,
                             (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
                if ( !Instance )
                  break;
                v36 = v60 + *((_DWORD *)Instance + 15) - 1000;
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
              if ( !*(_QWORD *)v25 )
                break;
              v33 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v25 + 528LL);
              if ( !v33 )
                break;
              v34 = **((_QWORD **)Instance + 23);
              Instance = System_Collections_Generic_List_object___get_Item(
                           v33,
                           v32,
                           (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance || !v34 )
                break;
              v35 = *((int *)Instance + 15);
              if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 24) )
                goto LABEL_107;
              v36 = *(_DWORD *)(v34 + 4 * v35 + 32);
            }
            Instance = entity;
            if ( stockIndex < v36 )
              stockIndex = v36;
            if ( !entity )
              break;
          }
          Instance = (void *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)Instance, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( !*(_QWORD *)v25 )
              break;
            v38 = *(_QWORD *)(*(_QWORD *)v25 + 64LL);
            if ( !v38 )
              break;
            v39 = *(_QWORD *)(v38 + 264);
            if ( !v39 )
              break;
            v22 = (const MethodInfo *)(unsigned int)Instance;
            Instance = *(void **)(v39 + 72);
            if ( !Instance )
              break;
            BattlePerformanceMaster__StartBattleGetEffect((BattlePerformanceMaster_o *)Instance, (int32_t)v22, v37);
            if ( !entity )
              break;
            if ( LODWORD(entity[3].klass) == 35 )
            {
              Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
              if ( !*(_QWORD *)v25 )
                break;
              v40 = (BattleItemData_o *)Instance;
              Instance = *(void **)(*(_QWORD *)v25 + 528LL);
              if ( !Instance )
                break;
              Instance = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)Instance,
                           v32,
                           (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !*(_QWORD *)v25 )
                break;
              v41 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v25 + 528LL);
              if ( !v41 )
                break;
              v42 = *((_DWORD *)Instance + 6);
              Instance = System_Collections_Generic_List_object___get_Item(
                           v41,
                           v32,
                           (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !Instance )
                break;
              if ( !v40 )
                break;
              BattleItemData__AddItemCountWithIdCheck(v40, v42, *((_DWORD *)Instance + 11), 0LL);
              if ( !*(_QWORD *)v25 )
                break;
              v43 = *(_QWORD *)(*(_QWORD *)v25 + 64LL);
              if ( !v43 )
                break;
              v44 = *(_QWORD *)(v43 + 264);
              if ( !v44 )
                break;
              Instance = *(void **)(v44 + 72);
              if ( !Instance )
                break;
              BattlePerformanceMaster__UpdateBattleItemUi((BattlePerformanceMaster_o *)Instance, v22);
              if ( !*(_QWORD *)v25 )
                break;
              Instance = *(void **)(*(_QWORD *)v25 + 528LL);
              if ( !Instance )
                break;
              Instance = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)Instance,
                           v32,
                           (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
              if ( !v31 )
                break;
              items = v31->fields._items;
              v48 = Method_System_Collections_Generic_List_BattleDropItem__Add__;
              ++v31->fields._version;
              if ( !items )
                break;
              size = v31->fields._size;
              v50 = (Il2CppClass *)Instance;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v31,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
              }
              else
              {
                v51 = &items->obj.klass + size;
                v31->fields._size = size + 1;
                v51[4] = v50;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v50, v45, v46);
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
          v52 = **((_QWORD **)Instance + 23);
          if ( !v52 )
            break;
          if ( !*(_QWORD *)v25 )
            break;
          Instance = *(void **)(*(_QWORD *)v25 + 528LL);
          if ( !Instance )
            break;
          Instance = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)Instance,
                       v32,
                       (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
          if ( !Instance )
            break;
          if ( *((_DWORD *)Instance + 15) < *(_DWORD *)(v52 + 24) )
          {
            Instance = BattlePerformanceInfoComponent_TypeInfo;
            if ( !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
              Instance = BattlePerformanceInfoComponent_TypeInfo;
            }
            if ( !*(_QWORD *)v25 )
              break;
            v53 = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)v25 + 528LL);
            if ( !v53 )
              break;
            v54 = **((_QWORD **)Instance + 23);
            Instance = System_Collections_Generic_List_object___get_Item(
                         v53,
                         v32,
                         (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
            if ( !Instance || !v54 )
              break;
            v55 = *((int *)Instance + 15);
            if ( (unsigned int)v55 >= *(_DWORD *)(v54 + 24) )
              goto LABEL_107;
            v56 = *(_DWORD *)(v54 + 4 * v55 + 32);
            if ( stockIndex < v56 )
              stockIndex = v56;
          }
        }
        if ( v28 == ++v32 )
          goto LABEL_95;
      }
LABEL_106:
      sub_1B64C5C(Instance, v22);
    }
LABEL_95:
    v61 = (System_Action_object__o *)sub_1B64C4C(System_Action_BattleDropItem__TypeInfo);
    System_Action_object____ctor(
      v61,
      (Il2CppObject *)v20,
      Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__,
      0LL);
    if ( !v31 )
      goto LABEL_106;
    System_Collections_Generic_List_object___ForEach(
      v31,
      (System_Action_T__o *)v61,
      (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    if ( !*(_QWORD *)v25 )
      goto LABEL_106;
    v62 = *(_QWORD *)(*(_QWORD *)v25 + 528LL);
    if ( !v62 )
      goto LABEL_106;
    stockLabel = this->fields.stockLabel;
    v69 = *(_DWORD *)(v62 + 24);
    Instance = System_Int32__ToString((int32_t)&v69, 0LL);
    if ( !stockLabel )
      goto LABEL_106;
    UILabel__set_text(stockLabel, (System_String_o *)Instance, 0LL);
    if ( stockIndex != this->fields.stockIndex )
    {
      this->fields.stockIndex = stockIndex;
      BattlePerformanceInfoComponent__setStockSprite(this, stockIndex, v67, v64);
    }
  }
  else
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, isPlayChangeEffect, v26);
    if ( !*(_QWORD *)v25 )
      goto LABEL_106;
    v65 = *(_QWORD *)(*(_QWORD *)v25 + 528LL);
    if ( !v65 )
      goto LABEL_106;
    v66 = this->fields.stockLabel;
    v69 = *(_DWORD *)(v65 + 24);
    Instance = System_Int32__ToString((int32_t)&v69, 0LL);
    if ( !v66 )
      goto LABEL_106;
    UILabel__set_text(v66, (System_String_o *)Instance, 0LL);
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
  if ( (byte_4A019C6 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, bData);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_2983/*"BATTLE_WARBOARD_REMAINING"*/, v6);
    sub_1B64A00(&StringLiteral_2911/*"BATTLE_NOKORIENEMY"*/, v7);
    this = (BattlePerformanceInfoComponent_o *)sub_1B64A00(&StringLiteral_25283/*"残り{0:#,0}体"*/, v8);
    byte_4A019C6 = 1;
  }
  if ( !bData )
    goto LABEL_25;
  this = (BattlePerformanceInfoComponent_o *)BattleData__getEnemyServantList(bData, 0LL);
  EnemyCountStartValue_k__BackingField = bData->fields._EnemyCountStartValue_k__BackingField;
  v25 = EnemyCountStartValue_k__BackingField;
  if ( !this )
    goto LABEL_25;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v11 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= m_CancellationTokenSource )
        sub_1B64C64(this, bData);
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
LABEL_25:
    sub_1B64C5C(this, bData);
  }
LABEL_12:
  if ( BattleData__IsWarBoard(bData, 0LL) )
  {
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_WARBOARD_REMAINING"*/, 0LL);
    v15 = System_Int32__ToString((int32_t)&v25, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_2911/*"BATTLE_NOKORIENEMY"*/;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BattlePerformanceInfoComponent_o *)LocalizationManager__Get(v16, 0LL);
    if ( !this )
      goto LABEL_25;
    v14 = (System_String_o *)this;
    v17 = System_String__Equals_61393452((System_String_o *)this, v16, 0LL);
    nokoriEnemyCountLabel = v4->fields.nokoriEnemyCountLabel;
    if ( v17 )
    {
      v23 = EnemyCountStartValue_k__BackingField;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v18, v19, v20);
      v22 = (System_String_o *)StringLiteral_25283/*"残り{0:#,0}体"*/;
      goto LABEL_23;
    }
    v24 = EnemyCountStartValue_k__BackingField;
    v15 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v18, v19, v20);
  }
  v21 = (Il2CppObject *)v15;
  v22 = v14;
LABEL_23:
  this = (BattlePerformanceInfoComponent_o *)System_String__Format(v22, v21, 0LL);
  if ( !nokoriEnemyCountLabel )
    goto LABEL_25;
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

  if ( (byte_4A019C4 & 1) == 0 )
  {
    sub_1B64A00(&System_DateTime_TypeInfo, method);
    sub_1B64A00(&System_TimeSpan_TypeInfo, v3);
    byte_4A019C4 = 1;
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
  if ( (byte_4A019CB & 1) == 0 )
  {
    this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)sub_1B64A00(
                                                                       &Method_System_Collections_Generic_List_BattleDropItem__Remove__,
                                                                       x);
    byte_4A019CB = 1;
  }
  bData = v4->fields.bData;
  if ( !bData || (this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)bData->fields.droplist) == 0LL )
    sub_1B64C5C(this, x);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)this,
    (Il2CppObject *)x,
    (const MethodInfo_34B1590 *)Method_System_Collections_Generic_List_BattleDropItem__Remove__);
}