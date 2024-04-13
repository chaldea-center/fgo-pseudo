void __fastcall BattlePerformanceInfoComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Array_o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_RuntimeFieldHandle_o v18; // 0:w1.4

  if ( (byte_42E9572 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceInfoComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338,
      v7,
      v8,
      v9);
    byte_42E9572 = 1;
  }
  v10 = (System_Array_o *)sub_B5D5DC(int___TypeInfo, 9LL);
  v18.fields.value = Field__PrivateImplementationDetails__7FE090A7202239ABA37D689BDD40DA5989CD1B122E5053040BF248BC9CB83338;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v10, v18, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceInfoComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
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
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__Initialize(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *nokoriTimeObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *transform; // x0
  unsigned int localPosition; // s0
  float v9; // s8
  float v10; // s1
  float v11; // s9
  UnityEngine_Object_o *nokoriTurnObject; // x20
  UnityEngine_Object_o *waveShowObject; // x20
  UnityEngine_Object_o *stockSprite; // x20
  const MethodInfo *v15; // x3
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9568 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9568 = 1;
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
    v9 = *(float *)&localPosition;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_33;
    *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)transform,
                                             0LL);
    transform = this->fields.nokoriTimeObject;
    if ( !transform )
      goto LABEL_33;
    v11 = v10;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_33;
    v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    this->fields.timeDefPos.fields.x = v9;
    this->fields.timeDefPos.fields.y = v11;
    this->fields.timeDefPos.fields.z = v16.fields.z;
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
    sub_B5D69C(transform, v6);
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
    BattlePerformanceInfoComponent__setStockSprite(this, 0, 0, v15);
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
    sub_B5D69C(nowWaveLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowWaveLabel, this->fields.isWaveCountInfinity, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__drawTime(
        BattlePerformanceInfoComponent_o *this,
        int64_t showTimeSeconds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  double TotalHours; // d0
  UILabel_o *v13; // x20
  int v14; // w24
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
  UIWidget_o *v26; // x19
  int v27; // s0
  int32_t Seconds; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Minutes; // [xsp+8h] [xbp-48h] BYREF
  int v33; // [xsp+Ch] [xbp-44h] BYREF
  int64_t v34; // [xsp+18h] [xbp-38h] BYREF
  System_TimeSpan_o v35; // 0:x0.8
  System_TimeSpan_o v36; // 0:x0.8
  System_TimeSpan_o v37; // 0:x0.8

  if ( (byte_42E956D & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, showTimeSeconds, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_2523/*"BATTLE_RAID_REMAINING_TIME"*/, v9, v10, v11);
    byte_42E956D = 1;
  }
  v34 = 0LL;
  if ( showTimeSeconds < 1 )
  {
    nokoriTimeLabel = this->fields.nokoriTimeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2523/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
    v33 = 0;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    Minutes = 0;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
    Seconds = 0;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v19 = System_String__Format_44578852(v22, v23, v24, v25, 0LL);
    if ( nokoriTimeLabel )
    {
      UILabel__set_text(nokoriTimeLabel, v19, 0LL);
      goto LABEL_17;
    }
LABEL_20:
    sub_B5D69C(v19, v20);
  }
  v35.fields._ticks = (int64_t)&v34;
  v34 = 10000000 * showTimeSeconds;
  TotalHours = System_TimeSpan__get_TotalHours(v35, 0LL);
  v13 = this->fields.nokoriTimeLabel;
  if ( TotalHours == INFINITY )
    TotalHours = -TotalHours;
  v14 = (int)TotalHours;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2523/*"BATTLE_RAID_REMAINING_TIME"*/, 0LL);
  v33 = v14;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  v36.fields._ticks = (int64_t)&v34;
  Minutes = System_TimeSpan__get_Minutes(v36, 0LL);
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Minutes);
  v37.fields._ticks = (int64_t)&v34;
  Seconds = System_TimeSpan__get_Seconds(v37, 0LL);
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
  v19 = System_String__Format_44578852(v15, v16, v17, v18, 0LL);
  if ( !v13 )
    goto LABEL_20;
  UILabel__set_text(v13, v19, 0LL);
  if ( v14 > 0 )
    return;
LABEL_17:
  v26 = (UIWidget_o *)this->fields.nokoriTimeLabel;
  *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_red(0LL);
  if ( !v26 )
    goto LABEL_20;
  UIWidget__set_color(v26, *(UnityEngine_Color_o *)&v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__setQuest(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceInfoComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct BattleEntity_o *battle_ent; // x21
  struct BattleInfoData_o *battle_info; // x8
  struct BattleRaidInfo_array *raidInfo; // x8
  bool v18; // w1
  UnityEngine_Transform_o *transform; // x20
  int v20; // s0
  UnityEngine_Transform_o *v23; // x20
  UnityEngine_Transform_o *v24; // x20
  int v25; // s0
  UnityEngine_Transform_o *v28; // x20
  int32_t eventId; // w21
  EventRaidMaster_o *v30; // x22
  EventRaidEntity_o *Entity; // x0
  EventRaidEntity_o *v32; // x21
  int64_t endedAt; // x21
  int64_t Time_26076684; // x21
  int64_t Ticks; // x0
  int64_t remaingTimeSeconds; // x1
  const MethodInfo *v37; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  System_DateTime_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x0.8
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E9569 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&System_DateTime_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    this = (BattlePerformanceInfoComponent_o *)sub_B5D5C4(
                                                 &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                 v12,
                                                 v13,
                                                 v14);
    byte_42E9569 = 1;
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
  v5->fields.isWaveCountInfinity = (unsigned __int8)this & 1;
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
    this = (BattlePerformanceInfoComponent_o *)v5->fields.nokoriTimeObject;
    v5->fields.isUpdateTimer = 0;
    if ( !this )
      goto LABEL_73;
    v18 = 0;
LABEL_13:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v18, 0LL);
    goto LABEL_14;
  }
  this = (BattlePerformanceInfoComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v5->fields.isUpdateTimer = 1;
  if ( !data->fields.battle_info )
    goto LABEL_73;
  eventId = battle_ent->fields.eventId;
  v30 = (EventRaidMaster_o *)this;
  this = (BattlePerformanceInfoComponent_o *)BattleInfoData__getRaidId(data->fields.battle_info, 0LL);
  if ( !v30 )
    goto LABEL_73;
  Entity = EventRaidMaster__GetEntity(v30, eventId, (int32_t)this, 0LL);
  if ( Entity )
  {
    v32 = Entity;
    if ( BattleData__isRaidConnection(data, 0LL) )
    {
      endedAt = v32->fields.endedAt;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v39.fields.dateData = NetworkManager__getDateTime_26077468(endedAt, 0LL).fields.dateData;
      Time_26076684 = NetworkManager__getTime_26076684(v39, 0LL);
      v5->fields.remaingTimeSeconds = Time_26076684 - NetworkManager__getTime(0LL);
      if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_DateTime_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      }
      dateData = System_DateTime__get_Now(0LL).fields.dateData;
      v40.fields.dateData = (uint64_t)&dateData;
      Ticks = System_DateTime__get_Ticks(v40, 0LL);
      remaingTimeSeconds = v5->fields.remaingTimeSeconds;
      v5->fields.lastCheckTime = Ticks;
      BattlePerformanceInfoComponent__drawTime(v5, remaingTimeSeconds, v37);
      this = (BattlePerformanceInfoComponent_o *)v5->fields.nokoriTimeObject;
      if ( !this )
        goto LABEL_73;
      v18 = 1;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( !BattleData__IsWarBoard(data, 0LL) )
    return;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v5, 0LL);
  if ( !this )
    goto LABEL_73;
  v41.fields.x = 316.0;
  v41.fields.y = 158.0;
  v41.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v41, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.waveShowObject;
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.nowWaveLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.maxWaveLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.slashLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.infinityLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.battleBackGround;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_depth((UIWidget_o *)this, -1, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.battleBackGround;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_width((UIWidget_o *)this, 218, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.battleBackGround;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_height((UIWidget_o *)this, 24, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.battleSpr;
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.enemyRoot;
  if ( !this )
    goto LABEL_73;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v20, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.enemySpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v5->fields.enemyRoot )
    goto LABEL_73;
  v23 = (UnityEngine_Transform_o *)this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v5->fields.enemyRoot, 0LL);
  if ( !v23 )
    goto LABEL_73;
  UnityEngine_Transform__set_parent(v23, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.enemySpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v42.fields.x = -66.0;
  v42.fields.y = 0.0;
  v42.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v42, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.enemySpr;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_width((UIWidget_o *)this, 42, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.enemySpr;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_height((UIWidget_o *)this, 18, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.enemyBackGround;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.enemyLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v43.fields.x = 4.0;
  v43.fields.y = -9.0;
  v43.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v43, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.enemyLabel;
  if ( !this )
    goto LABEL_73;
  UILabel__set_fontSize((UILabel_o *)this, 17, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.turnRoot;
  if ( !this )
    goto LABEL_73;
  v24 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v24 )
    goto LABEL_73;
  UnityEngine_Transform__set_localPosition(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.turnSpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v5->fields.turnRoot )
    goto LABEL_73;
  v28 = (UnityEngine_Transform_o *)this;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_transform(v5->fields.turnRoot, 0LL);
  if ( !v28 )
    goto LABEL_73;
  UnityEngine_Transform__set_parent(v28, (UnityEngine_Transform_o *)this, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.turnSpr;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v44.fields.x = 6.0;
  v44.fields.y = 0.0;
  v44.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v44, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.turnSpr;
  if ( !this )
    goto LABEL_73;
  UIWidget__set_width((UIWidget_o *)this, 36, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.turnBackGround;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.turnLabel;
  if ( !this )
    goto LABEL_73;
  this = (BattlePerformanceInfoComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v45.fields.x = 70.0;
  v45.fields.y = -9.0;
  v45.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v45, 0LL);
  this = (BattlePerformanceInfoComponent_o *)v5->fields.turnLabel;
  if ( !this
    || (UILabel__set_fontSize((UILabel_o *)this, 17, 0LL),
        (this = (BattlePerformanceInfoComponent_o *)v5->fields.itemRoot) == 0LL)
    || (this = (BattlePerformanceInfoComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_73:
    sub_B5D69C(this, data);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__setShowElapsedTurn(
        BattlePerformanceInfoComponent_o *this,
        int32_t state,
        int32_t now,
        const MethodInfo *method)
{
  int32_t v4; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_Object_o *nokoriTurnObject; // x22
  __int64 v20; // x1
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  UILabel_o *nokoriTurnLabel; // x19
  System_String_o *v23; // x20
  int *v24; // x1
  Il2CppObject *v25; // x0
  int32_t v26; // [xsp+8h] [xbp-28h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-24h] BYREF

  v4 = now;
  if ( (byte_42E956B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, state, now, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_2482/*"BATTLE_ELAPSED_TURN"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_2588/*"BATTLE_TOTALELAPSED_TURN"*/, v16, v17, v18);
    byte_42E956B = 1;
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
    if ( v4 <= 1 )
      v4 = 1;
    if ( state == 2 )
    {
      nokoriTurnLabel = this->fields.nokoriTurnLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2588/*"BATTLE_TOTALELAPSED_TURN"*/, 0LL);
      v26 = v4;
      v24 = &v26;
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
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2482/*"BATTLE_ELAPSED_TURN"*/, 0LL);
      v24 = &v27;
      v27 = v4;
    }
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v24);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v23, v25, 0LL);
    if ( !nokoriTurnLabel )
LABEL_25:
      sub_B5D69C(nokoriTimeObject, v20);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_Object_o *nokoriTurnObject; // x23
  __int64 v19; // x1
  UnityEngine_GameObject_o *nokoriTimeObject; // x0
  int v21; // w8
  bool IsWarBoard; // w0
  UILabel_o *nokoriTurnLabel; // x19
  __int64 *v24; // x8
  System_String_o *v25; // x20
  Il2CppObject *v26; // x0
  int v27; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E956A & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, now, limit, bdata);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2591/*"BATTLE_WARBOARD_REMAINING"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2524/*"BATTLE_RAID_REMAINING_TURN"*/, v15, v16, v17);
    byte_42E956A = 1;
  }
  v27 = 0;
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
    v21 = now <= 1 ? 1 : now;
    v27 = (limit - v21 + 1) & ~((limit - v21 + 1) >> 31);
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
      v24 = &StringLiteral_2591/*"BATTLE_WARBOARD_REMAINING"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_2524/*"BATTLE_RAID_REMAINING_TURN"*/;
    }
    v25 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
    v26 = (Il2CppObject *)System_Int32__ToString((int32_t)&v27, 0LL);
    nokoriTimeObject = (UnityEngine_GameObject_o *)System_String__Format(v25, v26, 0LL);
    if ( !nokoriTurnLabel )
LABEL_26:
      sub_B5D69C(nokoriTimeObject, v19);
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
    sub_B5D69C(this, bdata);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Object_o *waveShowObject; // x23
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x0
  UILabel_o *nowWaveLabel; // x23
  Il2CppObject *v19; // x0
  UILabel_o *maxWaveLabel; // x22
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x1
  int v23; // [xsp+8h] [xbp-38h] BYREF
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E956F & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, now, max, data);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23833/*"{0:D}"*/, v12, v13, v14);
    byte_42E956F = 1;
  }
  waveShowObject = (UnityEngine_Object_o *)this->fields.waveShowObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(waveShowObject, 0LL, 0LL) )
  {
    v17 = this->fields.waveShowObject;
    if ( !v17 )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(v17, 1, 0LL);
    nowWaveLabel = this->fields.nowWaveLabel;
    v24 = now + 1;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v17 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_23833/*"{0:D}"*/, v19, 0LL);
    if ( !nowWaveLabel
      || (UILabel__set_text(nowWaveLabel, (System_String_o *)v17, 0LL),
          maxWaveLabel = this->fields.maxWaveLabel,
          v23 = max + 1,
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23),
          v17 = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_23833/*"{0:D}"*/, v21, 0LL),
          !maxWaveLabel)
      || (UILabel__set_text(maxWaveLabel, (System_String_o *)v17, 0LL), !data) )
    {
LABEL_14:
      sub_B5D69C(v17, v16);
    }
    if ( !BattleData__IsWarBoard(data, 0LL) )
      BattlePerformanceInfoComponent__UpdateWaveDisplay(this, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceInfoComponent__setStockSprite(
        BattlePerformanceInfoComponent_o *this,
        int32_t index,
        bool isPlayChangeEffect,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Behaviour_o *stockPSrpite; // x0
  UISprite_o *stockSprite; // x22
  Il2CppObject *v12; // x0
  UnityEngine_GameObject_o *stockEffectPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9571 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, index, isPlayChangeEffect, method);
    sub_B5D5C4(&StringLiteral_19571/*"icon_drop_item_0"*/, v7, v8, v9);
    byte_42E9571 = 1;
  }
  stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPSrpite;
  if ( !stockPSrpite
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        (stockPSrpite = (UnityEngine_Behaviour_o *)this->fields.stockPPSrpite) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(stockPSrpite, 0, 0LL),
        stockSprite = this->fields.stockSprite,
        v15 = index / 3 + 1,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15),
        stockPSrpite = (UnityEngine_Behaviour_o *)System_String__Concat((Il2CppObject *)StringLiteral_19571/*"icon_drop_item_0"*/, v12, 0LL),
        !stockSprite) )
  {
LABEL_16:
    sub_B5D69C(stockPSrpite, *(_QWORD *)&index);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  __int64 v52; // x19
  void *Instance; // x0
  const MethodInfo *v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x21
  const MethodInfo *v62; // x3
  __int64 v63; // x8
  int v64; // w28
  int32_t stockIndex; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *v66; // x25
  __int64 v67; // x20
  signed int longName_high; // w26
  struct System_Int32_array *raritylist; // x8
  int v70; // w9
  __int64 v71; // x26
  int32_t v72; // w19
  __int64 v73; // x8
  int v74; // w8
  __int64 v75; // x26
  unsigned int v76; // w24
  __int64 v77; // x8
  __int64 v78; // x19
  __int64 v79; // x8
  __int64 v80; // x19
  __int64 v81; // x8
  __int64 v82; // x27
  __int64 v83; // x26
  __int64 v84; // x8
  __int64 v85; // x8
  const MethodInfo *v86; // x2
  __int64 v87; // x8
  __int64 v88; // x8
  __int64 v89; // x19
  __int64 v90; // x8
  __int64 v91; // x19
  int32_t v92; // w27
  __int64 v93; // x8
  __int64 v94; // x8
  __int64 v95; // x8
  __int64 v96; // x26
  __int64 v97; // x26
  __int64 v98; // x19
  __int64 v99; // x8
  __int64 v100; // x27
  __int64 v101; // x26
  __int64 v102; // x8
  __int64 v103; // x8
  int32_t v104; // w8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v105; // x25
  __int64 v106; // x8
  UILabel_o *stockLabel; // x21
  const MethodInfo *v108; // x3
  __int64 v109; // x8
  UILabel_o *v110; // x19
  __int64 v111; // x0
  BattlePerformanceInfoComponent_o *v112; // [xsp+8h] [xbp-78h]
  Il2CppObject *object; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v114; // [xsp+18h] [xbp-68h]
  WarEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  int v116; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42E9570 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleDropItem___ctor__, (_DWORD)bData, isPlayChangeEffect, method);
    sub_B5D5C4(&System_Action_BattleDropItem__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&BattlePerformanceInfoComponent_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__ForEach__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem___ctor__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Count__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleDropItem__get_Item__, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_List_BattleDropItem__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonTemplate_BattleItemData__get_Instance__, v40, v41, v42);
    sub_B5D5C4(&SingletonTemplate_BattleItemData__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__, v46, v47, v48);
    sub_B5D5C4(&BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo, v49, v50, v51);
    byte_42E9570 = 1;
  }
  v116 = 0;
  entity = 0LL;
  v52 = sub_B5D694(BattlePerformanceInfoComponent___c__DisplayClass49_0_TypeInfo);
  BattlePerformanceInfoComponent___c__DisplayClass49_0___ctor(
    (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)v52,
    0LL);
  if ( !v52 )
    goto LABEL_128;
  *(_QWORD *)(v52 + 16) = bData;
  v61 = v52 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v52 + 16), (System_Int32_array **)bData, v55, v56, v57, v58, v59, v60);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_128;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !*(_QWORD *)v61 )
    goto LABEL_128;
  v63 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
  object = (Il2CppObject *)v52;
  if ( !v63 )
    goto LABEL_128;
  v64 = *(_DWORD *)(v63 + 24);
  if ( v64 )
  {
    v112 = this;
    stockIndex = this->fields.stockIndex;
    v66 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    v114 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleDropItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v114,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleDropItem___ctor__);
    if ( v64 >= 1 )
    {
      v67 = 4LL;
      while ( *(_QWORD *)v61 )
      {
        v75 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
        if ( !v75 )
          break;
        v76 = v67 - 4;
        if ( *(_DWORD *)(v75 + 24) <= (unsigned int)(v67 - 4) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v77 = *(_QWORD *)(*(_QWORD *)(v75 + 16) + 8 * v67);
        if ( !v77 || !v66 )
          break;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v66,
               &entity,
               *(_DWORD *)(v77 + 24),
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          Instance = entity;
          if ( !entity )
            break;
          if ( entity->fields.bannerId != 35 )
          {
            if ( !*(_QWORD *)v61 )
              break;
            v78 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
            if ( !v78 )
              break;
            if ( *(_DWORD *)(v78 + 24) <= v76 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v79 = *(_QWORD *)(*(_QWORD *)(v78 + 16) + 8 * v67);
            if ( !v79 )
              break;
            if ( *(int *)(v79 + 60) < 1000 )
              goto LABEL_49;
            if ( !*(_QWORD *)v61 )
              break;
            v80 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
            if ( !v80 )
              break;
            if ( *(_DWORD *)(v80 + 24) <= v76 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v81 = *(_QWORD *)(*(_QWORD *)(v80 + 16) + 8 * v67);
            if ( !v81 )
              break;
            if ( *(int *)(v81 + 60) <= 1002 )
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
                v74 = 0;
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
                v70 = HIDWORD(entity->fields.longName) - 1;
                if ( v70 >= raritylist->max_length )
                  goto LABEL_129;
                if ( !*(_QWORD *)v61 )
                  break;
                v71 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
                if ( !v71 )
                  break;
                v72 = raritylist->m_Items[v70 + 1];
                if ( *(_DWORD *)(v71 + 24) <= v76 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                v73 = *(_QWORD *)(*(_QWORD *)(v71 + 16) + 8 * v67);
                if ( !v73 )
                  break;
                v74 = v72 + *(_DWORD *)(v73 + 60) - 1000;
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
              if ( !*(_QWORD *)v61 )
                break;
              v82 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
              if ( !v82 )
                break;
              v83 = **((_QWORD **)Instance + 23);
              if ( *(_DWORD *)(v82 + 24) <= v76 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v84 = *(_QWORD *)(*(_QWORD *)(v82 + 16) + 8 * v67);
              if ( !v84 || !v83 )
                break;
              v85 = *(int *)(v84 + 60);
              if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
                goto LABEL_129;
              v74 = *(_DWORD *)(v83 + 4 * v85 + 32);
            }
            Instance = entity;
            if ( stockIndex < v74 )
              stockIndex = v74;
            if ( !entity )
              break;
          }
          Instance = (void *)ItemEntity__GetBattleGetEffect((ItemEntity_o *)Instance, 0LL);
          if ( (int)Instance >= 1 )
          {
            if ( !*(_QWORD *)v61 )
              break;
            v87 = *(_QWORD *)(*(_QWORD *)v61 + 56LL);
            if ( !v87 )
              break;
            v88 = *(_QWORD *)(v87 + 224);
            if ( !v88 )
              break;
            v54 = (const MethodInfo *)(unsigned int)Instance;
            Instance = *(void **)(v88 + 64);
            if ( !Instance )
              break;
            BattlePerformanceMaster__StartBattleGetEffect((BattlePerformanceMaster_o *)Instance, (int32_t)v54, v86);
            if ( !entity )
              break;
            if ( entity->fields.bannerId == 35 )
            {
              if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
              }
              Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
              if ( !*(_QWORD *)v61 )
                break;
              v89 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
              if ( !v89 )
                break;
              if ( *(_DWORD *)(v89 + 24) <= v76 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v90 = *(_QWORD *)(*(_QWORD *)(v89 + 16) + 8 * v67);
              if ( !v90 )
                break;
              if ( !*(_QWORD *)v61 )
                break;
              v91 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
              if ( !v91 )
                break;
              v92 = *(_DWORD *)(v90 + 24);
              if ( *(_DWORD *)(v91 + 24) <= v76 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v93 = *(_QWORD *)(*(_QWORD *)(v91 + 16) + 8 * v67);
              if ( !v93 )
                break;
              if ( !Instance )
                break;
              BattleItemData__AddItemCountWithIdCheck((BattleItemData_o *)Instance, v92, *(_DWORD *)(v93 + 44), 0LL);
              if ( !*(_QWORD *)v61 )
                break;
              v94 = *(_QWORD *)(*(_QWORD *)v61 + 56LL);
              if ( !v94 )
                break;
              v95 = *(_QWORD *)(v94 + 224);
              if ( !v95 )
                break;
              Instance = *(void **)(v95 + 64);
              if ( !Instance )
                break;
              BattlePerformanceMaster__UpdateBattleItemUi((BattlePerformanceMaster_o *)Instance, v54);
              if ( !*(_QWORD *)v61 )
                break;
              v96 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
              Instance = v114;
              if ( !v96 )
                break;
              if ( *(_DWORD *)(v96 + 24) <= v76 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              if ( !v114 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v114,
                *(EventMissionProgressRequest_Argument_ProgressData_o **)(*(_QWORD *)(v96 + 16) + 8 * v67),
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleDropItem__Add__);
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
          v97 = **((_QWORD **)Instance + 23);
          if ( !v97 )
            break;
          if ( !*(_QWORD *)v61 )
            break;
          v98 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
          if ( !v98 )
            break;
          if ( *(_DWORD *)(v98 + 24) <= v76 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v99 = *(_QWORD *)(*(_QWORD *)(v98 + 16) + 8 * v67);
          if ( !v99 )
            break;
          if ( *(_DWORD *)(v99 + 60) > *(_DWORD *)(v97 + 24) )
          {
            Instance = BattlePerformanceInfoComponent_TypeInfo;
            if ( (BYTE3(BattlePerformanceInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattlePerformanceInfoComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattlePerformanceInfoComponent_TypeInfo);
              Instance = BattlePerformanceInfoComponent_TypeInfo;
            }
            if ( !*(_QWORD *)v61 )
              break;
            v100 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
            if ( !v100 )
              break;
            v101 = **((_QWORD **)Instance + 23);
            if ( *(_DWORD *)(v100 + 24) <= v76 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v102 = *(_QWORD *)(*(_QWORD *)(v100 + 16) + 8 * v67);
            if ( !v102 || !v101 )
              break;
            v103 = *(int *)(v102 + 60);
            if ( (unsigned int)v103 >= *(_DWORD *)(v101 + 24) )
            {
LABEL_129:
              v111 = sub_B5D6C8(Instance);
              sub_B5D668(v111, 0LL);
            }
            v104 = *(_DWORD *)(v101 + 4 * v103 + 32);
            if ( stockIndex < v104 )
              stockIndex = v104;
          }
        }
        if ( (int)++v67 - 4 >= v64 )
          goto LABEL_117;
      }
LABEL_128:
      sub_B5D69C(Instance, v54);
    }
LABEL_117:
    v105 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleDropItem__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v105,
      object,
      Method_BattlePerformanceInfoComponent___c__DisplayClass49_0__updateDropItemCount_b__0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleDropItem___ctor__);
    Instance = v114;
    if ( !v114 )
      goto LABEL_128;
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v114,
      (System_Action_T__o *)v105,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleDropItem__ForEach__);
    if ( !*(_QWORD *)v61 )
      goto LABEL_128;
    v106 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
    if ( !v106 )
      goto LABEL_128;
    stockLabel = v112->fields.stockLabel;
    v116 = *(_DWORD *)(v106 + 24);
    Instance = System_Int32__ToString((int32_t)&v116, 0LL);
    if ( !stockLabel )
      goto LABEL_128;
    UILabel__set_text(stockLabel, (System_String_o *)Instance, 0LL);
    if ( stockIndex != v112->fields.stockIndex )
    {
      v112->fields.stockIndex = stockIndex;
      BattlePerformanceInfoComponent__setStockSprite(v112, stockIndex, isPlayChangeEffect, v108);
    }
  }
  else
  {
    this->fields.stockIndex = 0;
    BattlePerformanceInfoComponent__setStockSprite(this, 0, isPlayChangeEffect, v62);
    if ( !*(_QWORD *)v61 )
      goto LABEL_128;
    v109 = *(_QWORD *)(*(_QWORD *)v61 + 520LL);
    if ( !v109 )
      goto LABEL_128;
    v110 = this->fields.stockLabel;
    v116 = *(_DWORD *)(v109 + 24);
    Instance = System_Int32__ToString((int32_t)&v116, 0LL);
    if ( !v110 )
      goto LABEL_128;
    UILabel__set_text(v110, (System_String_o *)Instance, 0LL);
  }
}


void __fastcall BattlePerformanceInfoComponent__updateNokoriEnemyCount(
        BattlePerformanceInfoComponent_o *this,
        BattleData_o *bData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceInfoComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t EnemyCountStartValue_k__BackingField; // w22
  int nokoriEnemyCountLabel; // w8
  BattlePerformanceInfoComponent_o *v20; // x21
  unsigned int v21; // w23
  UILabel_o *v22; // x19
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x21
  bool v26; // w0
  Il2CppObject *v27; // x1
  System_String_o *v28; // x0
  __int64 v29; // x0
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v31; // [xsp+18h] [xbp-28h] BYREF
  int32_t v32; // [xsp+1Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_42E956E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)bData, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_2591/*"BATTLE_WARBOARD_REMAINING"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2519/*"BATTLE_NOKORIENEMY"*/, v12, v13, v14);
    this = (BattlePerformanceInfoComponent_o *)sub_B5D5C4(&StringLiteral_24204/*"残り{0:#,0}体"*/, v15, v16, v17);
    byte_42E956E = 1;
  }
  v32 = 0;
  if ( !bData )
    goto LABEL_27;
  this = (BattlePerformanceInfoComponent_o *)BattleData__getEnemyServantList(bData, 0LL);
  EnemyCountStartValue_k__BackingField = bData->fields._EnemyCountStartValue_k__BackingField;
  v32 = EnemyCountStartValue_k__BackingField;
  if ( !this )
    goto LABEL_27;
  nokoriEnemyCountLabel = (int)this->fields.nokoriEnemyCountLabel;
  v20 = this;
  if ( nokoriEnemyCountLabel >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= nokoriEnemyCountLabel )
      {
        v29 = sub_B5D6C8(this);
        sub_B5D668(v29, 0LL);
      }
      this = (BattlePerformanceInfoComponent_o *)*((_QWORD *)&v20->fields.stockPSrpite + (int)v21);
      if ( !this )
        break;
      this = (BattlePerformanceInfoComponent_o *)BattleServantData__isAlive((BattleServantData_o *)this, 0, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        v32 = ++EnemyCountStartValue_k__BackingField;
      nokoriEnemyCountLabel = (int)v20->fields.nokoriEnemyCountLabel;
      if ( (int)++v21 >= nokoriEnemyCountLabel )
        goto LABEL_12;
    }
LABEL_27:
    sub_B5D69C(this, bData);
  }
LABEL_12:
  if ( BattleData__IsWarBoard(bData, 0LL) )
  {
    v22 = v5->fields.nokoriEnemyCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2591/*"BATTLE_WARBOARD_REMAINING"*/, 0LL);
    v24 = System_Int32__ToString((int32_t)&v32, 0LL);
  }
  else
  {
    v25 = (System_String_o *)StringLiteral_2519/*"BATTLE_NOKORIENEMY"*/;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BattlePerformanceInfoComponent_o *)LocalizationManager__Get(v25, 0LL);
    if ( !this )
      goto LABEL_27;
    v23 = (System_String_o *)this;
    v26 = System_String__Equals_44565128((System_String_o *)this, v25, 0LL);
    v22 = v5->fields.nokoriEnemyCountLabel;
    if ( v26 )
    {
      v30 = EnemyCountStartValue_k__BackingField;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
      v28 = (System_String_o *)StringLiteral_24204/*"残り{0:#,0}体"*/;
      goto LABEL_25;
    }
    v31 = EnemyCountStartValue_k__BackingField;
    v24 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  }
  v27 = (Il2CppObject *)v24;
  v28 = v23;
LABEL_25:
  this = (BattlePerformanceInfoComponent_o *)System_String__Format(v28, v27, 0LL);
  if ( !v22 )
    goto LABEL_27;
  UILabel__set_text(v22, (System_String_o *)this, 0LL);
}


void __fastcall BattlePerformanceInfoComponent__updateTime(
        BattlePerformanceInfoComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t v5; // x8
  double TotalSeconds; // d0
  int v7; // w21
  int64_t Ticks; // x0
  int64_t v9; // x1
  const MethodInfo *v10; // x2
  uint64_t dateData; // [xsp+8h] [xbp-28h] BYREF
  int64_t v12; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v13; // 0:x0.8
  System_TimeSpan_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8

  if ( (byte_42E956C & 1) == 0 )
  {
    sub_B5D5C4(&System_DateTime_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E956C = 1;
  }
  v12 = 0LL;
  dateData = 0LL;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  dateData = System_DateTime__get_Now(0LL).fields.dateData;
  v13.fields.dateData = (uint64_t)&dateData;
  v5 = System_DateTime__get_Ticks(v13, 0LL) - this->fields.lastCheckTime;
  v14.fields._ticks = (int64_t)&v12;
  v12 = v5;
  TotalSeconds = System_TimeSpan__get_TotalSeconds(v14, 0LL);
  if ( TotalSeconds == INFINITY )
    TotalSeconds = -TotalSeconds;
  v7 = (int)TotalSeconds;
  if ( (int)TotalSeconds >= 1 && this->fields.remaingTimeSeconds >= 1 )
  {
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    dateData = System_DateTime__get_Now(0LL).fields.dateData;
    v15.fields.dateData = (uint64_t)&dateData;
    Ticks = System_DateTime__get_Ticks(v15, 0LL);
    v9 = this->fields.remaingTimeSeconds - v7;
    this->fields.remaingTimeSeconds = v9;
    this->fields.lastCheckTime = Ticks;
    BattlePerformanceInfoComponent__drawTime(this, v9, v10);
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
  __int64 v3; // x3
  BattlePerformanceInfoComponent___c__DisplayClass49_0_o *v5; // x20
  struct BattleData_o *bData; // x8

  v5 = this;
  if ( (byte_42E6097 & 1) == 0 )
  {
    this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)sub_B5D5C4(
                                                                       &Method_System_Collections_Generic_List_BattleDropItem__Remove__,
                                                                       (_DWORD)x,
                                                                       (_DWORD)method,
                                                                       v3);
    byte_42E6097 = 1;
  }
  bData = v5->fields.bData;
  if ( !bData || (this = (BattlePerformanceInfoComponent___c__DisplayClass49_0_o *)bData->fields.droplist) == 0LL )
    sub_B5D69C(this, x);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
    (WarBoardManager_TaskList_o *)x,
    (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleDropItem__Remove__);
}