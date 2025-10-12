void WarBoardUserServantData___ctor(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  this->fields.transformIndex = -1;
  BattleUserServantData___ctor((BattleUserServantData_o *)this, 0);
}


void WarBoardUserServantData__FromBattleServantData(
        WarBoardUserServantData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  WarBoardUserServantData_o *v4; // x20
  struct BattleBuffData_o *buffData; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattleBuffData_o *v10; // x0
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int hiddenValue; // w22
  struct ChangeModelData_o *ChangeModelData_k__BackingField; // x1

  v4 = this;
  if ( (byte_4C3558F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    this = (WarBoardUserServantData_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    byte_4C3558F = 1;
  }
  if ( !servantData )
    goto LABEL_17;
  v4->fields.currentHp = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, const MethodInfo *))servantData->klass->vtable._9_get_hp.methodPtr)(
                           servantData,
                           servantData->klass->vtable._9_get_hp.method,
                           method);
  v4->fields.currentNp = servantData->fields.np;
  v4->fields.nextNpTurn = servantData->fields.nexttpturn;
  buffData = servantData->fields.buffData;
  v4->fields.buffData = buffData;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.buffData, (int32_t)buffData, v6, v7);
  v10 = v4->fields.buffData;
  if ( v10 )
  {
    SaveData = BattleBuffData__getSaveData(v10, 0);
    v4->fields.buffDataSave = SaveData;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.buffDataSave, (int32_t)SaveData, v12, v13);
  }
  *(_QWORD *)&v4->fields.transformIndex = *(_QWORD *)&servantData->fields.transformIndex;
  v4->fields.isSleepWaitMode = servantData->fields.isSleepWaitMode;
  *(_QWORD *)&v4->fields.skill1Ct = 0;
  v4->fields.skill3Ct = 0;
  this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
  if ( !this )
    goto LABEL_17;
  hiddenValue = this->fields.id.fields.hiddenValue;
  if ( hiddenValue >= 1 )
  {
    this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          0,
                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( !this )
      goto LABEL_17;
    v4->fields.skill1Ct = ((__int64 (__fastcall *)(WarBoardUserServantData_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
                            this,
                            this->klass->vtable._6_getSkillLevelList.method);
    if ( hiddenValue >= 2 )
    {
      this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
      if ( !this )
        goto LABEL_17;
      this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            1,
                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this )
        goto LABEL_17;
      v4->fields.skill2Ct = ((__int64 (__fastcall *)(WarBoardUserServantData_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
                              this,
                              this->klass->vtable._6_getSkillLevelList.method);
      if ( hiddenValue >= 3 )
      {
        this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
        if ( this )
        {
          this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                2,
                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
          if ( this )
          {
            v4->fields.skill3Ct = ((__int64 (__fastcall *)(WarBoardUserServantData_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
                                    this,
                                    this->klass->vtable._6_getSkillLevelList.method);
            goto LABEL_16;
          }
        }
LABEL_17:
        sub_1C32E7C(this);
      }
    }
  }
LABEL_16:
  ChangeModelData_k__BackingField = servantData->fields._ChangeModelData_k__BackingField;
  v4->fields.changeModelData = ChangeModelData_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.changeModelData, (int32_t)ChangeModelData_k__BackingField, v8, v9);
}


WarBoardUserServantData_o *WarBoardUserServantData__FromJson(System_String_o *json, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  BattleBuffData_o *v4; // x21
  BattleBuffData_o **p_monitor; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  BattleBuffData_o *monitor; // x0

  if ( (byte_4C35592 & 1) == 0 )
  {
    sub_1C32C20(&BattleBuffData_TypeInfo);
    sub_1C32C20(&Method_JsonManager_Deserialize_WarBoardUserServantData___);
    sub_1C32C20(&JsonManager_TypeInfo);
    byte_4C35592 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__Deserialize_object_(
         (Il2CppObject *)json,
         (const MethodInfo_314C70C *)Method_JsonManager_Deserialize_WarBoardUserServantData___);
  if ( v3 )
  {
    v4 = (BattleBuffData_o *)sub_1C32E6C(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v4, 0);
    p_monitor = (BattleBuffData_o **)&v3[42].monitor;
    v3[42].monitor = v4;
    sub_1C32BC4((CGThumbnailListItem_o *)&v3[42].monitor, (int32_t)v4, v6, v7);
    monitor = (BattleBuffData_o *)v3[42].monitor;
    if ( !monitor
      || (BattleBuffData__Initialize(monitor, 0), (monitor = *p_monitor) == 0)
      || (BattleBuffData__clearAuraBuff(monitor, 0), (monitor = *p_monitor) == 0) )
    {
      sub_1C32E7C(monitor);
    }
    BattleBuffData__setSaveData(monitor, (BattleBuffData_SaveData_o *)v3[39].monitor, 0);
  }
  return (WarBoardUserServantData_o *)v3;
}


bool WarBoardUserServantData__IsAlive(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  return this->fields.defeatPoint > 0 || this->fields.currentHp > 0;
}


bool WarBoardUserServantData__IsBoss(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  return this->fields.stageBossIdx > 0;
}


void WarBoardUserServantData__SetBattleServantData(
        WarBoardUserServantData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  WarBoardUserServantData_o *v4; // x20
  struct System_Int32_array *breakHp; // x8
  int max_length; // w11
  int v7; // w9
  struct BattleBuffData_SaveData_o *buffDataSave; // x8
  int hiddenValue; // w22
  int32_t transformIndex; // w8
  System_Int32_array *v11; // x0
  int32_t subBaseHp; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C35590 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    this = (WarBoardUserServantData_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35590 = 1;
  }
  subBaseHp = 0;
  if ( !servantData )
    goto LABEL_31;
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, const MethodInfo *))servantData->klass->vtable._10_set_hp.methodPtr)(
    servantData,
    (unsigned int)v4->fields.currentHp,
    servantData->klass->vtable._10_set_hp.method);
  if ( v4->fields.maxDefeatPoint > v4->fields.defeatPoint )
  {
    this = (WarBoardUserServantData_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)v4->fields.breakHp,
                                          0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      breakHp = v4->fields.breakHp;
      if ( !breakHp )
        goto LABEL_31;
      max_length = breakHp->max_length;
      v7 = v4->fields.maxDefeatPoint + ~v4->fields.defeatPoint;
      if ( v7 < max_length )
      {
        if ( v7 >= (unsigned int)max_length )
          sub_1C32E84(this);
        servantData->fields.maxhp = breakHp->m_Items[v7];
      }
    }
  }
  servantData->fields.np = v4->fields.currentNp;
  servantData->fields.nexttpturn = v4->fields.nextNpTurn;
  buffDataSave = v4->fields.buffDataSave;
  if ( buffDataSave && buffDataSave->fields.passive && buffDataSave->fields.active )
  {
    this = (WarBoardUserServantData_o *)servantData->fields.buffData;
    if ( !this )
      goto LABEL_31;
    BattleBuffData__Initialize((BattleBuffData_o *)this, 0);
    this = (WarBoardUserServantData_o *)servantData->fields.buffData;
    if ( !this )
      goto LABEL_31;
    BattleBuffData__clearAuraBuff((BattleBuffData_o *)this, 0);
    this = (WarBoardUserServantData_o *)servantData->fields.buffData;
    if ( !this )
      goto LABEL_31;
    BattleBuffData__setSaveData((BattleBuffData_o *)this, v4->fields.buffDataSave, 0);
    BattleServantData__CalculateTotalBaseHp(servantData, &subBaseHp, 1, 0);
  }
  this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
  if ( !this )
    goto LABEL_31;
  hiddenValue = this->fields.id.fields.hiddenValue;
  if ( hiddenValue >= 1 )
  {
    this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          0,
                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( !this )
      goto LABEL_31;
    ((void (__fastcall *)(WarBoardUserServantData_o *, _QWORD, void *))this->klass[1]._1.image)(
      this,
      (unsigned int)v4->fields.skill1Ct,
      this->klass[1]._1.gc_desc);
    if ( hiddenValue >= 2 )
    {
      this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
      if ( !this )
        goto LABEL_31;
      this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            1,
                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this )
        goto LABEL_31;
      ((void (__fastcall *)(WarBoardUserServantData_o *, _QWORD, void *))this->klass[1]._1.image)(
        this,
        (unsigned int)v4->fields.skill2Ct,
        this->klass[1]._1.gc_desc);
      if ( hiddenValue >= 3 )
      {
        this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
        if ( !this )
          goto LABEL_31;
        this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              2,
                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !this )
          goto LABEL_31;
        ((void (__fastcall *)(WarBoardUserServantData_o *, _QWORD, void *))this->klass[1]._1.image)(
          this,
          (unsigned int)v4->fields.skill3Ct,
          this->klass[1]._1.gc_desc);
      }
    }
  }
  transformIndex = v4->fields.transformIndex;
  if ( servantData->fields.transformIndex != transformIndex )
  {
    servantData->fields.transformIndex = transformIndex;
    servantData->fields.transformLimitCount = v4->fields.transformLimitCount;
    this = (WarBoardUserServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      BattleServantData__setTransformServant(
        servantData,
        *(BattleData_o **)&this->fields.isAfterTransformKey,
        v4->fields.transformIndex,
        v4->fields.transformLimitCount,
        1,
        0,
        0);
      goto LABEL_30;
    }
LABEL_31:
    sub_1C32E7C(this);
  }
LABEL_30:
  servantData->fields.isSleepWaitMode = v4->fields.isSleepWaitMode;
  BattleServantData__updateResultState(servantData, 0);
  v11 = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  BattleServantData__updateConditionsBuff(servantData, v11, 0, 0, 0);
  BattleServantData__SetChangeModelData(servantData, v4->fields.changeModelData, 0);
}


void WarBoardUserServantData__SetSaveData(
        WarBoardUserServantData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattleBuffData_SaveData_o *buffSave; // x1

  if ( !saveData )
    sub_1C32E7C(this);
  *(_QWORD *)&this->fields.squareIndex = *(_QWORD *)&saveData->fields.squareIndex;
  buffSave = saveData->fields.buffSave;
  this->fields.buffDataSave = buffSave;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buffDataSave, (int32_t)buffSave, (int32_t)method, v3);
  this->fields.attackCount = saveData->fields.attackCount;
  *(_QWORD *)&this->fields.currentHp = *(_QWORD *)&saveData->fields.hp;
  this->fields.nextNpTurn = saveData->fields.tdTurn;
  this->fields.criticalStars = saveData->fields.criticalStars;
  this->fields.currentPieceActionPoint = saveData->fields.currentActionPoint;
  this->fields.defeatPoint = saveData->fields.breakPoint;
}


System_String_o *WarBoardUserServantData__ToJson(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C35591 & 1) == 0 )
  {
    sub_1C32C20(&JsonManager_TypeInfo);
    byte_4C35591 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    SaveData = BattleBuffData__getSaveData(buffData, 0);
    this->fields.buffDataSave = SaveData;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buffDataSave, (int32_t)SaveData, v5, v6);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}