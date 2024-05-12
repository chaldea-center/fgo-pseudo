void __fastcall BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_438B3BD & 1) == 0 )
  {
    sub_B775C4(&BattlePerformanceInfoComponent_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338);
    byte_438B3BD = 1;
  }
  v1 = (System_Array_o *)sub_B775DC(int___TypeInfo, 9LL);
  v9.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v1, v9, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(0LL, v3);
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

  if ( (byte_438B3B3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B3B3 = 1;
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
    v7 = *(float *)&localPosition;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_33;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)transform,
                                            0LL);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_33;
    v9 = v8;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_33;
    v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    this->fields.timeDefPos.fields.x = v7;
    this->fields.timeDefPos.fields.y = v9;
    this->fields.timeDefPos.fields.z = v14.fields.z;
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
    sub_B7769C(transform, v4);
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
    sub_B7769C(nowWaveLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowWaveLabel, this->fields.isWaveCountInfinity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__drawTime(
        BattlePerformanceInfoComponent_o *this,
        int64_t showTimeSeconds,
        const MethodInfo *method)
{
  double TotalHours; // d0
  UILabel_o *v6; // x20
  int v7; // w24
  System_String_o *v8; // x21
  __int64 v9; // x2
  Il2CppObject *v10; // x22
  __int64 v11; // x2
  Il2CppObject *v12; // x23
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  UILabel_o *nokoriTimeLabel; // x20
  System_String_o *v18; // x21
  __int64 v19; // x2
  Il2CppObject *v20; // x22
  __int64 v21; // x2
  Il2CppObject *v22; // x23
  __int64 v23; // x2
  Il2CppObject *v24; // x0
  UIWidget_o *v25; // x19
  int v26; // s0
  int32_t Seconds; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Minutes; // [xsp+8h] [xbp-48h] BYREF
  int v32; // [xsp+Ch] [xbp-44h] BYREF
  int64_t v33; // [xsp+18h] [xbp-38h] BYREF
  System_TimeSpan_o v34; // 0:x0.8
  System_TimeSpan_o v35; // 0:x0.8
  System_TimeSpan_o v36; // 0:x0.8

  if ( (byte_438B3B8 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_2576/*"BATTLE_RAID_REMAINING_TIME"*/);
    byte_438B3B8 = 1;
  }
  v33 = 0LL;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2576/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
    v32 = 0;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v19);
    Minutes = 0;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v21);
    Seconds = 0;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v23);
    v15 = System_String__Format_44903000(v18, v20, v22, v24, 0LL);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v15, 0LL);
      goto LABEL_17;
    }
LABEL_20:
    sub_B7769C(v15, v16);
  }
  v34.fields._ticks = (int64_t)&v33;
  v33 = 10000000 * showTimeSeconds;
  TotalHours = System_TimeSpan__get_TotalHours(v34, 0LL);
  v6 = this->fields.nokoriTimeLabel;
  if ( TotalHours == INFINITY )
    TotalHours = -TotalHours;
  v7 = (int)TotalHours;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2576/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
  v32 = v7;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v9);
  v35.fields._ticks = (int64_t)&v33;
  Minutes = System_TimeSpan__get_Minutes(v35, 0LL);
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes, v11);
  v36.fields._ticks = (int64_t)&v33;
  Seconds = System_TimeSpan__get_Seconds(v36, 0LL);
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v13);
  v15 = System_String__Format_44903000(v8, v10, v12, v14, 0LL);
  if ( !v6 )
    goto LABEL_20;
  UILabel__set_text(v6, v15, 0LL);
  if ( v7 > 0 )
    return;
LABEL_17:
  v25 = (UIWidget_o *)this->fields.nokoriTimeLabel;
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_red(0LL);
  if ( !v25 )
    goto LABEL_20;
  UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__setQuest(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v4; // x19
  struct BattleEntity_o *battle_ent; // x21
  struct BattleInfoData_o *battle_info; // x8
  struct BattleRaidInfo_array *raidInfo; // x8
  bool v8; // w1
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  UnityEngine_Transform_o *v18; // x20
  int32_t eventId; // w21
  EventRaidMaster_o *v20; // x22
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v22; // x21
  int64_t endedAt; // x21
  int64_t Time_26206600; // x21
  int64_t Ticks; // x0
  int64_t remaingTimeSeconds; // x1
  const MethodInfo *v27; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_438B3B4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B775C4(&System_DateTime_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    this = (BattlePerformanceInfoComponent_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B3B4 = 1;
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
    v8 = 0;
LABEL_13:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0LL);
    goto LABEL_14;
  }
  this = (BattlePerformanceInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v4->fields.isUpdateTimer = 1;
  if ( !data->fields.battle_info )
    goto LABEL_73;
  eventId = battle_ent->fields.eventId;
  v20 = (EventRaidMaster_o *)this;
  this = (BattlePerformanceInfoComponent_o *)BattleInfoData__getRaidId(data->fields.battle_info, 0LL);
  if ( !v20 )
    goto LABEL_73;
  Entity = EventRaidMaster__GetEntity(v20, eventId, (int32_t)this, 0LL);
  if ( Entity )
  {
    v22 = Entity;
    if ( BattleData__isRaidConnection(data, 0LL) )
    {
      endedAt = v22->fields.endedAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v29.fields.dateData = NetworkManager__getDateTime_26207384(endedAt, 0LL).fields.dateData;
      Time_26206600 = NetworkManager__getTime_26206600(v29, 0LL);
      v4->fields.remaingTimeSeconds = Time_26206600 - NetworkManager__getTime(0LL);
      if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_DateTime_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      }
      dateData = System_DateTime__get_Now(0LL).fields.dateData;
      v30.fields.dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v30, 0LL);
      remaingTimeSeconds = v4->fields.remaingTimeSeconds;
      v4->fields.lastCheckTime = Ticks;
      BattlePerformanceInfoComponent__drawTime(v4, remaingTimeSeconds, v27);
      this = (BattlePerformanceInfoComponent_o *)v4->fields.nokoriTimeObject;
      if ( !this )
        goto LABEL_73;
      v8 = 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( !BattleData__IsWarBoard(data, 0LL) )
    return;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_73;
  v31.fields.x = 316.0;
  v31.fields.y = 158.0;
  v31.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v31, 0LL);
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
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v4->fields.enemyRoot )
    goto LABEL_73;
  v13 = (UnityEngine_Transform_o *)this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.enemyRoot, 0LL);
  if ( !v13 )
    goto LABEL_73;
  UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemySpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v32.fields.x = -66.0;
  v32.fields.y = 0.0;
  v32.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v32, 0LL);
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
  v33.fields.x = 4.0;
  v33.fields.y = -9.0;
  v33.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v33, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.enemyLabel;
  if ( !this )
    goto LABEL_73;
  UILabel__set_fontSize((UILabel_o *)this, 17, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnRoot;
  if ( !this )
    goto LABEL_73;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v14 )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v4->fields.turnRoot )
    goto LABEL_73;
  v18 = (UnityEngine_Transform_o *)this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v4->fields.turnRoot, 0LL);
  if ( !v18 )
    goto LABEL_73;
  UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnSpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v34.fields.x = 6.0;
  v34.fields.y = 0.0;
  v34.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v34, 0LL);
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
  v35.fields.x = 70.0;
  v35.fields.y = -9.0;
  v35.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v35, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v4->fields.turnLabel;
  if ( !this
    || (UILabel__set_fontSize((UILabel_o *)this, 17, 0LL),
        (this = (BattlePerformanceInfoComponent_o *)v4->fields.itemRoot) == 0LL)
    || (this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_73:
    sub_B7769C(this, data);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__setShowElapsedTurn(
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
  System_String_o *v12; // x20
  int32_t *v13; // x1
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B3B6 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2535/*"BATTLE_ELAPSED_TURN"*/);
    sub_B775C4(&StringLiteral_2642/*"BATTLE_TOTALELAPSED_TURN"*/);
    byte_438B3B6 = 1;
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
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2642/*"BATTLE_TOTALELAPSED_TURN"*/, 0LL);
      v15 = now;
      v13 = &v15;
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
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2535/*"BATTLE_ELAPSED_TURN"*/, 0LL);
      v13 = &v16;
      v16 = now;
    }
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v13, v11);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v12, v14, 0LL);
    if ( !nokoriTurnLabel )
LABEL_25:
      sub_B7769C(nokoriTimeObject, v8);
    UILabel__set_text(nokoriTurnLabel, (System_String_o *)nokoriTimeObject, 0LL);
  }
}


void __fastcall BattlePerformanceInfoComponent__setShowLimitTurn(
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
  __int64 *v15; // x8
  System_String_o *v16; // x20
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B3B5 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_2645/*"BATTLE_WARBOARD_REMAINING"*/);
    sub_B775C4(&StringLiteral_2577/*"BATTLE_RAID_REMAINING_TURN"*/);
    byte_438B3B5 = 1;
  }
  v18 = 0;
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
    v12 = now <= 1 ? 1 : now;
    v18 = (limit - v12 + 1) & ~((limit - v12 + 1) >> 31);
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
      v15 = &StringLiteral_2645/*"BATTLE_WARBOARD_REMAINING"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v15 = &StringLiteral_2577/*"BATTLE_RAID_REMAINING_TURN"*/;
    }
    v16 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
    v17 = (Il2CppObject *)System_Int32__ToString((int32_t)&v18, 0LL);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v16, v17, 0LL);
    if ( !nokoriTurnLabel )
LABEL_26:
      sub_B7769C(nokoriTimeObject, v10);
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
    sub_B7769C(this, bdata);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__setShowWave(
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
  Il2CppObject *v14; // x0
  UILabel_o *maxWaveLabel; // x22
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x1
  int v19; // [xsp+8h] [xbp-38h] BYREF
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438B3BA & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_24008/*"{0:D}"*/);
    byte_438B3BA = 1;
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0LL, 0LL) )
  {
    v11 = this->fields.waveShowObject;
    if ( !v11 )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(v11, 1, 0LL);
    nowWaveLabel = this->fields.nowWaveLabel;
    v20 = now + 1;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v13);
    v11 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_24008/*"{0:D}"*/, v14, 0LL);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, (System_String_o *)v11, 0LL),
          maxWaveLabel = this->fields.maxWaveLabel,
          v19 = max + 1,
          v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v16),
          v11 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_24008/*"{0:D}"*/, v17, 0LL),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, (System_String_o *)v11, 0LL), !data) )
    {
LABEL_14:
      sub_B7769C(v11, v10);
    }
    if ( !BattleData__IsWarBoard(data, 0LL) )
      BattlePerformanceInfoComponent__UpdateWaveDisplay(this, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__setStockSprite(
        BattlePerformanceInfoComponent_o *this,
        int32_t index,
        bool isPlayChangeEffect,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *stockPSrpite; // x0
  UISprite_o *stockSprite; // x22
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  UnityEngine_GameObject_o *stockEffectPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438B3BC & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_19719/*"icon_drop_item_0"*/);
    byte_438B3BC = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        (stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        stockSprite = this->fields.stockSprite,
        v13 = index / 3 + 1,
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v9),
        stockPSrpite = (UnityEngine_Behaviour_o *)System_String__Concat((Il2CppObject *)StringLiteral_19719/*"icon_drop_item_0"*/, v10, 0LL),
        !stockSprite) )
  {
LABEL_16:
    sub_B7769C(stockPSrpite, *(_QWORD *)&index);
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
  __int64 v7; // x19
  void *Instance; // x0
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x21
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  int v19; // w28
  int32_t stockIndex; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x25
  __int64 v22; // x20
  signed int longName_high; // w26
  struct System_Int32_array *raritylist; // x8
  int v25; // w9
  __int64 v26; // x26
  int32_t v27; // w19
  __int64 v28; // x8
  int v29; // w8
  __int64 v30; // x26
  unsigned int v31; // w24
  __int64 v32; // x8
  __int64 v33; // x19
  __int64 v34; // x8
  __int64 v35; // x19
  __int64 v36; // x8
  __int64 v37; // x27
  __int64 v38; // x26
  __int64 v39; // x8
  __int64 v40; // x8
  const MethodInfo *v41; // x2
  __int64 v42; // x8
  __int64 v43; // x8
  __int64 v44; // x19
  __int64 v45; // x8
  __int64 v46; // x19
  int32_t v47; // w27
  __int64 v48; // x8
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x26
  __int64 v52; // x26
  __int64 v53; // x19
  __int64 v54; // x8
  __int64 v55; // x27
  __int64 v56; // x26
  __int64 v57; // x8
  __int64 v58; // x8
  int32_t v59; // w8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v60; // x25
  __int64 v61; // x8
  UILabel_o *stockLabel; // x21
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  UILabel_o *v65; // x19
  __int64 v66; // x0
  BattlePerformanceInfoComponent_o *v67; // [xsp+8h] [xbp-78h]
  Il2CppObject *object; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // [xsp+18h] [xbp-68h]
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int v71; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_438B3BB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleDropItem___ctor__);
    sub_B775C4(&System_Action_BattleDropItem__TypeInfo);
    sub_B775C4(&BattlePerformanceInfoComponent_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleDropItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_BattleDropItem__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_B775C4(&SingletonTemplate_BattleItemData__TypeInfo);
    sub_B775C4(&Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__);
    sub_B775C4(&BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
    byte_438B3BB = 1;
  }
  v71 = 0;
  entity = 0LL;
  v7 = sub_B77694(BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
  BattlePerformanceInfoComponent___c__DisplayClass49_0___ctor(
    (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_128;
  *(_QWORD *)(v7 + 16) = bData;
  v16 = v7 + 16;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)bData, v10, v11, v12, v13, v14, v15);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_128;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_QWORD *)v16 )
    goto LABEL_128;
  v18 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
  object = (Il2CppObject *)v7;
  if ( !v18 )
    goto LABEL_128;
  v19 = *(_DWORD *)(v18 + 24);
  if ( v19 )
  {
    v67 = this;
    stockIndex = this->fields.stockIndex;
    v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleDropItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v69,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    if ( v19 >= 1 )
    {
      v22 = 4LL;
      while ( *(_QWORD *)v16 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
        if ( !v30 )
          break;
        v31 = v22 - 4;
        if ( *(_DWORD *)(v30 + 24) <= (unsigned int)(v22 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v32 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 8 * v22);
        if ( !v32 || !v21 )
          break;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v21,
               &entity,
               *(_DWORD *)(v32 + 24),
               (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = entity;
          if ( !entity )
            break;
          if ( entity->fields.bannerId != 35 )
          {
            if ( !*(_QWORD *)v16 )
              break;
            v33 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
            if ( !v33 )
              break;
            if ( *(_DWORD *)(v33 + 24) <= v31 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v34 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 8 * v22);
            if ( !v34 )
              break;
            if ( *(int *)(v34 + 60) < 1000 )
              goto LABEL_49;
            if ( !*(_QWORD *)v16 )
              break;
            v35 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
            if ( !v35 )
              break;
            if ( *(_DWORD *)(v35 + 24) <= v31 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v36 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 8 * v22);
            if ( !v36 )
              break;
            if ( *(int *)(v36 + 60) <= 1002 )
            {
              Instance = BattlePerformanceInfoComponent_TypeInfo;
              longName_high = HIDWORD(entity->fields.longName);
              if ( (BYTE3(BattlePerformanceInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
                Instance = BattlePerformanceInfoComponent_TypeInfo;
              }
              raritylist = (struct System_Int32_array *)**((_QWORD **)Instance + 23);
              if ( !raritylist )
                break;
              if ( longName_high >= (signed int)raritylist->max_length )
              {
                v29 = 0;
              }
              else
              {
                if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
                {
                  j_il2cpp_runtime_class_init_0(Instance);
                  raritylist = BattlePerformanceInfoComponent_TypeInfo->static_fields->raritylist;
                }
                if ( !entity || !raritylist )
                  break;
                v25 = HIDWORD(entity->fields.longName) - 1;
                if ( v25 >= raritylist->max_length )
                  goto LABEL_129;
                if ( !*(_QWORD *)v16 )
                  break;
                v26 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
                if ( !v26 )
                  break;
                v27 = raritylist->m_Items[v25 + 1];
                if ( *(_DWORD *)(v26 + 24) <= v31 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                v28 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 8 * v22);
                if ( !v28 )
                  break;
                v29 = v27 + *(_DWORD *)(v28 + 60) - 1000;
              }
            }
            else
            {
LABEL_49:
              Instance = BattlePerformanceInfoComponent_TypeInfo;
              if ( (BYTE3(BattlePerformanceInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
                Instance = BattlePerformanceInfoComponent_TypeInfo;
              }
              if ( !*(_QWORD *)v16 )
                break;
              v37 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
              if ( !v37 )
                break;
              v38 = **((_QWORD **)Instance + 23);
              if ( *(_DWORD *)(v37 + 24) <= v31 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              v39 = *(_QWORD *)(*(_QWORD *)(v37 + 16) + 8 * v22);
              if ( !v39 || !v38 )
                break;
              v40 = *(int *)(v39 + 60);
              if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
                goto LABEL_129;
              v29 = *(_DWORD *)(v38 + 4 * v40 + 32);
            }
            Instance = entity;
            if ( stockIndex < v29 )
              stockIndex = v29;
            if ( !entity )
              break;
          }
          Instance = (void *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)Instance, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( !*(_QWORD *)v16 )
              break;
            v42 = *(_QWORD *)(*(_QWORD *)v16 + 56LL);
            if ( !v42 )
              break;
            v43 = *(_QWORD *)(v42 + 256);
            if ( !v43 )
              break;
            v9 = (const MethodInfo *)(unsigned int)Instance;
            Instance = *(void **)(v43 + 64);
            if ( !Instance )
              break;
            BattlePerformanceMaster__StartBattleGetEffect((BattlePerformanceMaster_o *)Instance, (int32_t)v9, v41);
            if ( !entity )
              break;
            if ( entity->fields.bannerId == 35 )
            {
              if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
              }
              Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
              if ( !*(_QWORD *)v16 )
                break;
              v44 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
              if ( !v44 )
                break;
              if ( *(_DWORD *)(v44 + 24) <= v31 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              v45 = *(_QWORD *)(*(_QWORD *)(v44 + 16) + 8 * v22);
              if ( !v45 )
                break;
              if ( !*(_QWORD *)v16 )
                break;
              v46 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
              if ( !v46 )
                break;
              v47 = *(_DWORD *)(v45 + 24);
              if ( *(_DWORD *)(v46 + 24) <= v31 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              v48 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 8 * v22);
              if ( !v48 )
                break;
              if ( !Instance )
                break;
              BattleItemData__AddItemCountWithIdCheck((BattleItemData_o *)Instance, v47, *(_DWORD *)(v48 + 44), 0LL);
              if ( !*(_QWORD *)v16 )
                break;
              v49 = *(_QWORD *)(*(_QWORD *)v16 + 56LL);
              if ( !v49 )
                break;
              v50 = *(_QWORD *)(v49 + 256);
              if ( !v50 )
                break;
              Instance = *(void **)(v50 + 64);
              if ( !Instance )
                break;
              BattlePerformanceMaster__UpdateBattleItemUi((BattlePerformanceMaster_o *)Instance, v9);
              if ( !*(_QWORD *)v16 )
                break;
              v51 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
              Instance = v69;
              if ( !v51 )
                break;
              if ( *(_DWORD *)(v51 + 24) <= v31 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              if ( !v69 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v69,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)(v51 + 16) + 8 * v22),
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleDropItem__Add__);
            }
          }
        }
        else
        {
          Instance = BattlePerformanceInfoComponent_TypeInfo;
          if ( (BYTE3(BattlePerformanceInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
            Instance = BattlePerformanceInfoComponent_TypeInfo;
          }
          v52 = **((_QWORD **)Instance + 23);
          if ( !v52 )
            break;
          if ( !*(_QWORD *)v16 )
            break;
          v53 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
          if ( !v53 )
            break;
          if ( *(_DWORD *)(v53 + 24) <= v31 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v54 = *(_QWORD *)(*(_QWORD *)(v53 + 16) + 8 * v22);
          if ( !v54 )
            break;
          if ( *(_DWORD *)(v54 + 60) < *(_DWORD *)(v52 + 24) )
          {
            Instance = BattlePerformanceInfoComponent_TypeInfo;
            if ( (BYTE3(BattlePerformanceInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
              Instance = BattlePerformanceInfoComponent_TypeInfo;
            }
            if ( !*(_QWORD *)v16 )
              break;
            v55 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
            if ( !v55 )
              break;
            v56 = **((_QWORD **)Instance + 23);
            if ( *(_DWORD *)(v55 + 24) <= v31 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v57 = *(_QWORD *)(*(_QWORD *)(v55 + 16) + 8 * v22);
            if ( !v57 || !v56 )
              break;
            v58 = *(int *)(v57 + 60);
            if ( (unsigned int)v58 >= *(_DWORD *)(v56 + 24) )
            {
LABEL_129:
              v66 = sub_B776C8(Instance);
              sub_B77668(v66, 0LL);
            }
            v59 = *(_DWORD *)(v56 + 4 * v58 + 32);
            if ( stockIndex < v59 )
              stockIndex = v59;
          }
        }
        if ( (int)++v22 - 4 >= v19 )
          goto LABEL_117;
      }
LABEL_128:
      sub_B7769C(Instance, v9);
    }
LABEL_117:
    v60 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleDropItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v60,
      object,
      Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__,
      (const MethodInfo_26A0868 *)Method_System_Action_BattleDropItem___ctor__);
    Instance = v69;
    if ( !v69 )
      goto LABEL_128;
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v69,
      (System_Action_T__o *)v60,
      (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    if ( !*(_QWORD *)v16 )
      goto LABEL_128;
    v61 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
    if ( !v61 )
      goto LABEL_128;
    stockLabel = v67->fields.stockLabel;
    v71 = *(_DWORD *)(v61 + 24);
    Instance = System_Int32__ToString((int32_t)&v71, 0LL);
    if ( !stockLabel )
      goto LABEL_128;
    UILabel__set_text(stockLabel, (System_String_o *)Instance, 0LL);
    if ( stockIndex != v67->fields.stockIndex )
    {
      v67->fields.stockIndex = stockIndex;
      BattlePerformanceInfoComponent__setStockSprite(v67, stockIndex, isPlayChangeEffect, v63);
    }
  }
  else
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, isPlayChangeEffect, v17);
    if ( !*(_QWORD *)v16 )
      goto LABEL_128;
    v64 = *(_QWORD *)(*(_QWORD *)v16 + 520LL);
    if ( !v64 )
      goto LABEL_128;
    v65 = this->fields.stockLabel;
    v71 = *(_DWORD *)(v64 + 24);
    Instance = System_Int32__ToString((int32_t)&v71, 0LL);
    if ( !v65 )
      goto LABEL_128;
    UILabel__set_text(v65, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall BattlePerformanceInfoComponent__updateNokoriEnemyCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *v4; // x19
  int32_t EnemyCountStartValue_k__BackingField; // w22
  int nokoriEnemyCountLabel; // w8
  BattlePerformanceInfoComponent_o *v7; // x21
  unsigned int v8; // w23
  UILabel_o *v9; // x19
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x21
  bool v13; // w0
  __int64 v14; // x2
  Il2CppObject *v15; // x1
  System_String_o *v16; // x0
  __int64 v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v19; // [xsp+18h] [xbp-28h] BYREF
  int32_t v20; // [xsp+1Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_438B3B9 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_2645/*"BATTLE_WARBOARD_REMAINING"*/);
    sub_B775C4(&StringLiteral_2572/*"BATTLE_NOKORIENEMY"*/);
    this = (BattlePerformanceInfoComponent_o *)sub_B775C4(&StringLiteral_24385/*"残り{0:#,0}体"*/);
    byte_438B3B9 = 1;
  }
  v20 = 0;
  if ( !bData )
    goto LABEL_27;
  this = (BattlePerformanceInfoComponent_o *)BattleData__getEnemyServantList(bData, 0LL);
  EnemyCountStartValue_k__BackingField = bData->fields._EnemyCountStartValue_k__BackingField;
  v20 = EnemyCountStartValue_k__BackingField;
  if ( !this )
    goto LABEL_27;
  nokoriEnemyCountLabel = (int)this->fields.nokoriEnemyCountLabel;
  v7 = this;
  if ( nokoriEnemyCountLabel >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= nokoriEnemyCountLabel )
      {
        v17 = sub_B776C8(this);
        sub_B77668(v17, 0LL);
      }
      this = (BattlePerformanceInfoComponent_o *)*((_QWORD *)&v7->fields.stockPSrpite + (int)v8);
      if ( !this )
        break;
      this = (BattlePerformanceInfoComponent_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        v20 = ++EnemyCountStartValue_k__BackingField;
      nokoriEnemyCountLabel = (int)v7->fields.nokoriEnemyCountLabel;
      if ( (int)++v8 >= nokoriEnemyCountLabel )
        goto LABEL_12;
    }
LABEL_27:
    sub_B7769C(this, bData);
  }
LABEL_12:
  if ( BattleData__IsWarBoard(bData, 0LL) )
  {
    v9 = v4->fields.nokoriEnemyCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2645/*"BATTLE_WARBOARD_REMAINING"*/, 0LL);
    v11 = System_Int32__ToString((int32_t)&v20, 0LL);
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_2572/*"BATTLE_NOKORIENEMY"*/;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BattlePerformanceInfoComponent_o *)LocalizationManager__Get(v12, 0LL);
    if ( !this )
      goto LABEL_27;
    v10 = (System_String_o *)this;
    v13 = System_String__Equals_44889276((System_String_o *)this, v12, 0LL);
    v9 = v4->fields.nokoriEnemyCountLabel;
    if ( v13 )
    {
      v18 = EnemyCountStartValue_k__BackingField;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v14);
      v16 = (System_String_o *)StringLiteral_24385/*"残り{0:#,0}体"*/;
      goto LABEL_25;
    }
    v19 = EnemyCountStartValue_k__BackingField;
    v11 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v14);
  }
  v15 = (Il2CppObject *)v11;
  v16 = v10;
LABEL_25:
  this = (BattlePerformanceInfoComponent_o *)System_String__Format(v16, v15, 0LL);
  if ( !v9 )
    goto LABEL_27;
  UILabel__set_text(v9, (System_String_o *)this, 0LL);
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

  if ( (byte_438B3B7 & 1) == 0 )
  {
    sub_B775C4(&System_DateTime_TypeInfo);
    byte_438B3B7 = 1;
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
  if ( (byte_4388DF3 & 1) == 0 )
  {
    this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)sub_B775C4(&Method_System_Collections_Generic_List_BattleDropItem__Remove__);
    byte_4388DF3 = 1;
  }
  bData = v4->fields.bData;
  if ( !bData || (this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)bData->fields.droplist) == 0LL )
    sub_B7769C(this, x);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
    (WarBoardManager_TaskList_o *)x,
    (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_BattleDropItem__Remove__);
}