void __fastcall BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_4215170 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceInfoComponent_TypeInfo, v1);
    sub_B0D8A4(&int___TypeInfo, v2);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338,
      v3);
    byte_4215170 = 1;
  }
  v4 = (System_Array_o *)sub_B0D8BC(int___TypeInfo, 9LL);
  v12.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v4, v12, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B0D840(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__Initialize(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nokoriTimeObject; // x20
  UnityEngine_GameObject_o *transform; // x0
  unsigned int localPosition; // s0
  float v6; // s8
  float v7; // s1
  float v8; // s9
  UnityEngine_Object_o *nokoriTurnObject; // x20
  UnityEngine_Object_o *waveShowObject; // x20
  UnityEngine_Object_o *stockSprite; // x20
  const MethodInfo *v12; // x3
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4215166 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215166 = 1;
  }
  nokoriTimeObject = (UnityEngine_Object_o *)this->fields.nokoriTimeObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nokoriTimeObject, 0LL, 0LL) )
  {
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_33;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_33;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_33;
    v6 = *(float *)&localPosition;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_33;
    *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)transform,
                                            0LL);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_33;
    v8 = v7;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_33;
    v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    this->fields.timeDefPos.fields.x = v6;
    this->fields.timeDefPos.fields.y = v8;
    this->fields.timeDefPos.fields.z = v13.fields.z;
  }
  nokoriTurnObject = (UnityEngine_Object_o *)this->fields.nokoriTurnObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nokoriTurnObject, 0LL, 0LL) )
  {
    transform = this->fields.nokoriTurnObject;
    if ( !transform )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(transform, 0, 0LL);
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0LL, 0LL) )
  {
    transform = this->fields.waveShowObject;
    if ( transform )
    {
      UnityEngine_GameObject__SetActive(transform, 0, 0LL);
      goto LABEL_27;
    }
LABEL_33:
    sub_B0D97C(transform);
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
    BattlePerformanceInfoComponent__setStockSprite(this, 0, 0, v12);
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
    sub_B0D97C(nowWaveLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowWaveLabel, this->fields.isWaveCountInfinity, 0LL);
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
  UIWidget_o *v20; // x19
  int v21; // s0
  int32_t Seconds; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Minutes; // [xsp+8h] [xbp-48h] BYREF
  int v27; // [xsp+Ch] [xbp-44h] BYREF
  int64_t v28; // [xsp+18h] [xbp-38h] BYREF
  System_TimeSpan_o v29; // 0:x0.8
  System_TimeSpan_o v30; // 0:x0.8
  System_TimeSpan_o v31; // 0:x0.8

  if ( (byte_421516B & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, showTimeSeconds);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_2481/*"BATTLE_RAID_REMAINING_TIME"*/, v6);
    byte_421516B = 1;
  }
  v28 = 0LL;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2481/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
    v27 = 0;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    Minutes = 0;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
    Seconds = 0;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v14 = System_String__Format_43850968(v16, v17, v18, v19, 0LL);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v14, 0LL);
      goto LABEL_17;
    }
LABEL_20:
    sub_B0D97C(v14);
  }
  v29.fields._ticks = (int64_t)&v28;
  v28 = 10000000 * showTimeSeconds;
  TotalHours = System_TimeSpan__get_TotalHours(v29, 0LL);
  v8 = this->fields.nokoriTimeLabel;
  if ( TotalHours == INFINITY )
    TotalHours = -TotalHours;
  v9 = (int)TotalHours;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2481/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
  v27 = v9;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v30.fields._ticks = (int64_t)&v28;
  Minutes = System_TimeSpan__get_Minutes(v30, 0LL);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v31.fields._ticks = (int64_t)&v28;
  Seconds = System_TimeSpan__get_Seconds(v31, 0LL);
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  v14 = System_String__Format_43850968(v10, v11, v12, v13, 0LL);
  if ( !v8 )
    goto LABEL_20;
  UILabel__set_text(v8, v14, 0LL);
  if ( v9 > 0 )
    return;
LABEL_17:
  v20 = (UIWidget_o *)this->fields.nokoriTimeLabel;
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_red(0LL);
  if ( !v20 )
    goto LABEL_20;
  UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_Transform_o *transform; // x20
  int v13; // s0
  UnityEngine_Transform_o *v16; // x20
  UnityEngine_Transform_o *v17; // x20
  int v18; // s0
  UnityEngine_Transform_o *v21; // x20
  int32_t eventId; // w21
  EventRaidMaster_o *v23; // x22
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v25; // x21
  int64_t endedAt; // x21
  int64_t Time_25503776; // x21
  int64_t Ticks; // x0
  int64_t remaingTimeSeconds; // x1
  const MethodInfo *v30; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4215167 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, data);
    sub_B0D8A4(&System_DateTime_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    this = (BattlePerformanceInfoComponent_o *)sub_B0D8A4(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v7);
    byte_4215167 = 1;
  }
  dateData = 0LL;
  if ( !data )
    goto LABEL_73;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)BattleEntity__GetQuestPhaseEntity(data->fields.battle_ent, 0LL);
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)QuestPhaseEntity__IsWaveCountInfinity((QuestPhaseEntity_o *)this, 0LL);
  v4->fields.isWaveCountInfinity = (unsigned __int8)this & 1;
  battle_info = data->fields.battle_info;
  if ( !battle_info )
    goto LABEL_73;
  raidInfo = battle_info->fields.raidInfo;
  if ( !raidInfo || !*(_QWORD *)&raidInfo->max_length )
    goto LABEL_11;
  this = (BattlePerformanceInfoComponent_o *)data->fields.quest_ent;
  if ( !this )
    goto LABEL_73;
  if ( QuestEntity__HasFlag((QuestEntity_o *)this, 0x2000000LL, 0LL) )
  {
LABEL_11:
    this = (BattlePerformanceInfoComponent_o *)v4->fields.nokoriTimeObject;
    v4->fields.isUpdateTimer = 0;
    if ( !this )
      goto LABEL_73;
    v11 = 0;
LABEL_13:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v11, 0LL);
    goto LABEL_14;
  }
  this = (BattlePerformanceInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v4->fields.isUpdateTimer = 1;
  if ( !data->fields.battle_info )
    goto LABEL_73;
  eventId = battle_ent->fields.eventId;
  v23 = (EventRaidMaster_o *)this;
  this = (BattlePerformanceInfoComponent_o *)BattleInfoData__getRaidId(data->fields.battle_info, 0LL);
  if ( !v23 )
    goto LABEL_73;
  Entity = EventRaidMaster__GetEntity(v23, eventId, (int32_t)this, 0LL);
  if ( Entity )
  {
    v25 = Entity;
    if ( BattleData__isRaidConnection(data, 0LL) )
    {
      endedAt = v25->fields.endedAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v32.fields.dateData = NetworkManager__getDateTime_25504560(endedAt, 0LL).fields.dateData;
      Time_25503776 = NetworkManager__getTime_25503776(v32, 0LL);
      v4->fields.remaingTimeSeconds = Time_25503776 - NetworkManager__getTime(0LL);
      if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_DateTime_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      }
      dateData = System_DateTime__get_Now(0LL).fields.dateData;
      v33.fields.dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v33, 0LL);
      remaingTimeSeconds = v4->fields.remaingTimeSeconds;
      v4->fields.lastCheckTime = Ticks;
      BattlePerformanceInfoComponent__drawTime(v4, remaingTimeSeconds, v30);
      this = (BattlePerformanceInfoComponent_o *)v4->fields.nokoriTimeObject;
      if ( !this )
        goto LABEL_73;
      v11 = 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( !BattleData__IsWarBoard(data, 0LL) )
    return;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_73;
  v34.fields.x = 316.0;
  v34.fields.y = 158.0;
  v34.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v34, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.waveShowObject;
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.nowWaveLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.maxWaveLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.slashLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.infinityLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleBackGround;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_depth((UIWidget_o *)this, -1, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleBackGround;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_width((UIWidget_o *)this, 218, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleBackGround;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_height((UIWidget_o *)this, 24, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.battleSpr;
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyRoot;
  if ( !this )
    goto LABEL_73;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v13, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v4->fields.enemyRoot )
    goto LABEL_73;
  v16 = (UnityEngine_Transform_o *)this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.enemyRoot, 0LL);
  if ( !v16 )
    goto LABEL_73;
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v35.fields.x = -66.0;
  v35.fields.y = 0.0;
  v35.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v35, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_width((UIWidget_o *)this, 42, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_height((UIWidget_o *)this, 18, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyBackGround;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v36.fields.x = 4.0;
  v36.fields.y = -9.0;
  v36.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v36, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyLabel;
  if ( !this )
    goto LABEL_73;
  UILabel__set_fontSize((UILabel_o *)this, 17, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnRoot;
  if ( !this )
    goto LABEL_73;
  v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v17 )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v4->fields.turnRoot )
    goto LABEL_73;
  v21 = (UnityEngine_Transform_o *)this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.turnRoot, 0LL);
  if ( !v21 )
    goto LABEL_73;
  UnityEngine_Transform__set_parent(v21, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v37.fields.x = 6.0;
  v37.fields.y = 0.0;
  v37.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v37, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_width((UIWidget_o *)this, 36, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnBackGround;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v38.fields.x = 70.0;
  v38.fields.y = -9.0;
  v38.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v38, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnLabel;
  if ( !this
    || (UILabel__set_fontSize((UILabel_o *)this, 17, 0LL),
        (this = (BattlePerformanceInfoComponent_o *)v4->fields.itemRoot) == 0LL)
    || (this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_73:
    sub_B0D97C(this);
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
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  UILabel_o *nokoriTurnLabel; // x19
  System_String_o *v14; // x20
  int32_t *v15; // x1
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4215169 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&state);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_2452/*"BATTLE_ELAPSED_TURN"*/, v9);
    sub_B0D8A4(&StringLiteral_2545/*"BATTLE_TOTALELAPSED_TURN"*/, v10);
    byte_4215169 = 1;
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
    nokoriTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nokoriTimeObject, 0LL);
    if ( !nokoriTimeObject )
      goto LABEL_25;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)nokoriTimeObject, this->fields.timeDefPos, 0LL);
    nokoriTimeObject = this->fields.nokoriTurnObject;
    if ( !nokoriTimeObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(nokoriTimeObject, 1, 0LL);
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
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2545/*"BATTLE_TOTALELAPSED_TURN"*/, 0LL);
      v17 = now;
      v15 = &v17;
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
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2452/*"BATTLE_ELAPSED_TURN"*/, 0LL);
      v15 = &v18;
      v18 = now;
    }
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v15);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v14, v16, 0LL);
    if ( !nokoriTurnLabel )
LABEL_25:
      sub_B0D97C(nokoriTimeObject);
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
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  int v14; // w8
  bool IsWarBoard; // w0
  UILabel_o *nokoriTurnLabel; // x19
  __int64 *v17; // x8
  System_String_o *v18; // x20
  Il2CppObject *v19; // x0
  int v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4215168 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&now);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_2548/*"BATTLE_WARBOARD_REMAINING"*/, v10);
    sub_B0D8A4(&StringLiteral_2482/*"BATTLE_RAID_REMAINING_TURN"*/, v11);
    byte_4215168 = 1;
  }
  v20 = 0;
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
    nokoriTimeObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(nokoriTimeObject, 0LL);
    if ( !nokoriTimeObject )
      goto LABEL_26;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)nokoriTimeObject, this->fields.timeDefPos, 0LL);
    nokoriTimeObject = this->fields.nokoriTurnObject;
    if ( !nokoriTimeObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(nokoriTimeObject, 1, 0LL);
    v14 = now <= 1 ? 1 : now;
    v20 = (limit - v14 + 1) & ~((limit - v14 + 1) >> 31);
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
      v17 = &StringLiteral_2548/*"BATTLE_WARBOARD_REMAINING"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = &StringLiteral_2482/*"BATTLE_RAID_REMAINING_TURN"*/;
    }
    v18 = LocalizationManager__Get((System_String_o *)*v17, 0LL);
    v19 = (Il2CppObject *)System_Int32__ToString((int32_t)&v20, 0LL);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v18, v19, 0LL);
    if ( !nokoriTurnLabel )
LABEL_26:
      sub_B0D97C(nokoriTimeObject);
    UILabel__set_text(nokoriTurnLabel, (System_String_o *)nokoriTimeObject, 0LL);
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
    || (v9.fields.x = v5->fields.timeDefPos.fields.x + 0.0,
        v9.fields.y = v5->fields.timeDefPos.fields.y + v5->fields.AdjustY,
        v9.fields.z = v5->fields.timeDefPos.fields.z + 0.0,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL),
        (this = (BattlePerformanceInfoComponent_o *)v5->fields.nokoriTurnObject) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(this);
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
  UnityEngine_GameObject_o *v12; // x0
  UILabel_o *nowWaveLabel; // x23
  Il2CppObject *v14; // x0
  UILabel_o *maxWaveLabel; // x22
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x1
  int v18; // [xsp+8h] [xbp-38h] BYREF
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421516D & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&now);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_23600/*"{0:D}"*/, v10);
    byte_421516D = 1;
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
    v19 = now + 1;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v12 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_23600/*"{0:D}"*/, v14, 0LL);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, (System_String_o *)v12, 0LL),
          maxWaveLabel = this->fields.maxWaveLabel,
          v18 = max + 1,
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18),
          v12 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_23600/*"{0:D}"*/, v16, 0LL),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, (System_String_o *)v12, 0LL), !data) )
    {
LABEL_14:
      sub_B0D97C(v12);
    }
    if ( !BattleData__IsWarBoard(data, 0LL) )
      BattlePerformanceInfoComponent__UpdateWaveDisplay(this, v17);
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
  Il2CppObject *v10; // x0
  UnityEngine_GameObject_o *stockEffectPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421516F & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&StringLiteral_19388/*"icon_drop_item_0"*/, v7);
    byte_421516F = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        (stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        stockSprite = this->fields.stockSprite,
        v13 = index / 3 + 1,
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13),
        stockPSrpite = (UnityEngine_Behaviour_o *)System_String__Concat((Il2CppObject *)StringLiteral_19388/*"icon_drop_item_0"*/, v10, 0LL),
        !stockSprite) )
  {
LABEL_16:
    sub_B0D97C(stockPSrpite);
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
  void *Instance; // x0
  struct System_Collections_Generic_List_BattleDropItem__o *droplist; // x8
  UILabel_o *stockLabel; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x22
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_BattleDropItem__o *v17; // x19
  int v18; // w25
  int32_t stockIndex; // w23
  int v20; // w26
  unsigned int v21; // w28
  BattleDropItem_o *v22; // x8
  struct System_Collections_Generic_List_BattleDropItem__o *v23; // x20
  BattleDropItem_o *v24; // x8
  struct System_Collections_Generic_List_BattleDropItem__o *v25; // x20
  __int64 v26; // x24
  BattleDropItem_o *v27; // x8
  __int64 rarity; // x8
  int v29; // w8
  struct System_Collections_Generic_List_BattleDropItem__o *v30; // x20
  BattleDropItem_o *v31; // x8
  _DWORD *v32; // x24
  signed int v33; // w20
  struct System_Int32_array *raritylist; // x8
  int v35; // w9
  struct System_Collections_Generic_List_BattleDropItem__o *v36; // x24
  int32_t v37; // w20
  BattleDropItem_o *v38; // x8
  BattlePerformanceInfoComponent_o *v39; // x0
  bool v40; // w2
  int32_t v41; // w1
  __int64 v42; // x0
  BattlePerformanceInfoComponent_o *v43; // [xsp+0h] [xbp-60h]
  bool v44; // [xsp+8h] [xbp-58h]
  int32_t size; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_421516E & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceInfoComponent_TypeInfo, bData);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_421516E = 1;
  }
  size = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !bData
    || (droplist = bData->fields.droplist) == 0LL
    || (stockLabel = this->fields.stockLabel,
        v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        size = droplist->fields._size,
        Instance = System_Int32__ToString((int32_t)&size, 0LL),
        !stockLabel)
    || (UILabel__set_text(stockLabel, (System_String_o *)Instance, 0LL), (v17 = bData->fields.droplist) == 0LL) )
  {
LABEL_61:
    sub_B0D97C(Instance);
  }
  v18 = v17->fields._size;
  if ( !v18 )
  {
    this->fields.stockIndex = 0;
    v40 = isPlayChangeEffect;
    v39 = this;
    v41 = 0;
    goto LABEL_59;
  }
  if ( v18 >= 1 )
  {
    v44 = isPlayChangeEffect;
    v43 = this;
    stockIndex = this->fields.stockIndex;
    v20 = 1;
    while ( 1 )
    {
      v21 = v20 - 1;
      if ( v17->fields._size <= (unsigned int)(v20 - 1) )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v22 = v17->fields._items->m_Items[v21];
      if ( !v22 )
        goto LABEL_61;
      if ( v22->fields.rarity < 1000 )
        goto LABEL_20;
      v23 = bData->fields.droplist;
      if ( !v23 )
        goto LABEL_61;
      if ( v23->fields._size <= v21 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v24 = v23->fields._items->m_Items[v21];
      if ( !v24 )
        goto LABEL_61;
      if ( v24->fields.rarity <= 1002 )
      {
        v30 = bData->fields.droplist;
        if ( !v30 )
          goto LABEL_61;
        if ( v30->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v31 = v30->fields._items->m_Items[v21];
        if ( !v31 )
          goto LABEL_61;
        if ( !v15 )
          goto LABEL_61;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v15,
                     v31->fields.objectId,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_61;
        v32 = Instance;
        Instance = BattlePerformanceInfoComponent_TypeInfo;
        v33 = v32[11];
        if ( (BYTE3(BattlePerformanceInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
          Instance = BattlePerformanceInfoComponent_TypeInfo;
        }
        raritylist = (struct System_Int32_array *)**((_QWORD **)Instance + 23);
        if ( !raritylist )
          goto LABEL_61;
        if ( v33 >= (signed int)raritylist->max_length )
        {
          v29 = 0;
        }
        else
        {
          if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            raritylist = BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist;
            if ( !raritylist )
              goto LABEL_61;
          }
          v35 = v32[11] - 1;
          if ( v35 >= raritylist->max_length )
          {
LABEL_62:
            v42 = sub_B0D9A8(Instance);
            sub_B0D948(v42, 0LL);
          }
          v36 = bData->fields.droplist;
          if ( !v36 )
            goto LABEL_61;
          v37 = raritylist->m_Items[v35 + 1];
          if ( v36->fields._size <= v21 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v38 = v36->fields._items->m_Items[v21];
          if ( !v38 )
            goto LABEL_61;
          v29 = v37 + v38->fields.rarity - 1000;
        }
      }
      else
      {
LABEL_20:
        Instance = BattlePerformanceInfoComponent_TypeInfo;
        if ( (BYTE3(BattlePerformanceInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
          Instance = BattlePerformanceInfoComponent_TypeInfo;
        }
        v25 = bData->fields.droplist;
        if ( !v25 )
          goto LABEL_61;
        v26 = **((_QWORD **)Instance + 23);
        if ( v25->fields._size <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v27 = v25->fields._items->m_Items[v21];
        if ( !v27 || !v26 )
          goto LABEL_61;
        rarity = v27->fields.rarity;
        if ( (unsigned int)rarity >= *(_DWORD *)(v26 + 24) )
          goto LABEL_62;
        v29 = *(_DWORD *)(v26 + 4 * rarity + 32);
      }
      if ( stockIndex < v29 )
        stockIndex = v29;
      if ( v20 >= v18 )
        break;
      v17 = bData->fields.droplist;
      ++v20;
      if ( !v17 )
        goto LABEL_61;
    }
    v39 = v43;
    if ( stockIndex != v43->fields.stockIndex )
    {
      v40 = v44;
      v41 = stockIndex;
      v43->fields.stockIndex = stockIndex;
LABEL_59:
      BattlePerformanceInfoComponent__setStockSprite(v39, v41, v40, v16);
    }
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
  int nokoriEnemyCountLabel; // w8
  BattlePerformanceInfoComponent_o *v11; // x21
  unsigned int v12; // w23
  UILabel_o *v13; // x19
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x21
  bool v17; // w0
  Il2CppObject *v18; // x1
  System_String_o *v19; // x0
  __int64 v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v22; // [xsp+18h] [xbp-28h] BYREF
  int32_t v23; // [xsp+1Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_421516C & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, bData);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_2548/*"BATTLE_WARBOARD_REMAINING"*/, v6);
    sub_B0D8A4(&StringLiteral_2477/*"BATTLE_NOKORIENEMY"*/, v7);
    this = (BattlePerformanceInfoComponent_o *)sub_B0D8A4(&StringLiteral_23964/*"残り{0:#,0}体"*/, v8);
    byte_421516C = 1;
  }
  v23 = 0;
  if ( !bData )
    goto LABEL_27;
  this = (BattlePerformanceInfoComponent_o *)BattleData__getEnemyServantList(bData, 0LL);
  EnemyCountStartValue_k__BackingField = bData->fields._EnemyCountStartValue_k__BackingField;
  v23 = EnemyCountStartValue_k__BackingField;
  if ( !this )
    goto LABEL_27;
  nokoriEnemyCountLabel = (int)this->fields.nokoriEnemyCountLabel;
  v11 = this;
  if ( nokoriEnemyCountLabel >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= nokoriEnemyCountLabel )
      {
        v20 = sub_B0D9A8(this);
        sub_B0D948(v20, 0LL);
      }
      this = (BattlePerformanceInfoComponent_o *)*((_QWORD *)&v11->fields.stockPSrpite + (int)v12);
      if ( !this )
        break;
      this = (BattlePerformanceInfoComponent_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        v23 = ++EnemyCountStartValue_k__BackingField;
      nokoriEnemyCountLabel = (int)v11->fields.nokoriEnemyCountLabel;
      if ( (int)++v12 >= nokoriEnemyCountLabel )
        goto LABEL_12;
    }
LABEL_27:
    sub_B0D97C(this);
  }
LABEL_12:
  if ( BattleData__IsWarBoard(bData, 0LL) )
  {
    v13 = v4->fields.nokoriEnemyCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2548/*"BATTLE_WARBOARD_REMAINING"*/, 0LL);
    v15 = System_Int32__ToString((int32_t)&v23, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_2477/*"BATTLE_NOKORIENEMY"*/;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BattlePerformanceInfoComponent_o *)LocalizationManager__Get(v16, 0LL);
    if ( !this )
      goto LABEL_27;
    v14 = (System_String_o *)this;
    v17 = System_String__Equals_43837244((System_String_o *)this, v16, 0LL);
    v13 = v4->fields.nokoriEnemyCountLabel;
    if ( v17 )
    {
      v21 = EnemyCountStartValue_k__BackingField;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v19 = (System_String_o *)StringLiteral_23964/*"残り{0:#,0}体"*/;
      goto LABEL_25;
    }
    v22 = EnemyCountStartValue_k__BackingField;
    v15 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  }
  v18 = (Il2CppObject *)v15;
  v19 = v14;
LABEL_25:
  this = (BattlePerformanceInfoComponent_o *)System_String__Format(v19, v18, 0LL);
  if ( !v13 )
    goto LABEL_27;
  UILabel__set_text(v13, (System_String_o *)this, 0LL);
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

  if ( (byte_421516A & 1) == 0 )
  {
    sub_B0D8A4(&System_DateTime_TypeInfo, method);
    byte_421516A = 1;
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