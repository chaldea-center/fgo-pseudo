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
  WarBoardUserServantData_o *v4; // x19
  int32_t v5; // w0
  int32_t np; // w8
  int32_t nexttpturn; // w9
  struct BattleBuffData_o *buffData; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  BattleBuffData_o *v21; // x0
  BattleBuffData_SaveData_o *SaveData; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // d0
  bool isSleepWaitMode; // w8
  int hiddenValue; // w22
  struct ChangeModelData_o *ChangeModelData_k__BackingField; // x1

  v4 = this;
  if ( (byte_596E2DF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    this = (WarBoardUserServantData_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    byte_596E2DF = 1;
  }
  if ( !servantData )
    goto LABEL_17;
  v5 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, const MethodInfo *))servantData->klass->vtable._9_get_hp.methodPtr)(
         servantData,
         servantData->klass->vtable._9_get_hp.method,
         method);
  np = servantData->fields.np;
  nexttpturn = servantData->fields.nexttpturn;
  buffData = servantData->fields.buffData;
  v4->fields.currentHp = v5;
  v4->fields.currentNp = np;
  v4->fields.nextNpTurn = nexttpturn;
  v4->fields.buffData = buffData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.buffData, (int32_t)buffData, v9, v10, v11, v12, v13, v14);
  v21 = v4->fields.buffData;
  if ( v21 )
  {
    SaveData = BattleBuffData__getSaveData(v21, 0);
    v4->fields.buffDataSave = SaveData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.buffDataSave,
      (int32_t)SaveData,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = *(_QWORD *)&servantData->fields.transformIndex;
  isSleepWaitMode = servantData->fields.isSleepWaitMode;
  this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
  v4->fields.skill3Ct = 0;
  *(_QWORD *)&v4->fields.transformIndex = v29;
  v4->fields.isSleepWaitMode = isSleepWaitMode;
  *(_QWORD *)&v4->fields.skill1Ct = 0;
  if ( !this )
    goto LABEL_17;
  hiddenValue = this->fields.id.fields.hiddenValue;
  if ( hiddenValue >= 1 )
  {
    this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)this,
                                          0,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( !this )
      goto LABEL_17;
    v4->fields.skill1Ct = ((__int64 (__fastcall *)(WarBoardUserServantData_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
                            this,
                            this->klass->vtable._6_getSkillLevelList.method);
    if ( hiddenValue != 1 )
    {
      this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
      if ( !this )
        goto LABEL_17;
      this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            1,
                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this )
        goto LABEL_17;
      v4->fields.skill2Ct = ((__int64 (__fastcall *)(WarBoardUserServantData_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
                              this,
                              this->klass->vtable._6_getSkillLevelList.method);
      if ( hiddenValue != 2 )
      {
        this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
        if ( this )
        {
          this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                2,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
          if ( this )
          {
            v4->fields.skill3Ct = ((__int64 (__fastcall *)(WarBoardUserServantData_o *, const MethodInfo *))this->klass->vtable._6_getSkillLevelList.methodPtr)(
                                    this,
                                    this->klass->vtable._6_getSkillLevelList.method);
            goto LABEL_16;
          }
        }
LABEL_17:
        sub_2213CDC(this, servantData);
      }
    }
  }
LABEL_16:
  ChangeModelData_k__BackingField = servantData->fields._ChangeModelData_k__BackingField;
  v4->fields.changeModelData = ChangeModelData_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.changeModelData,
    (int32_t)ChangeModelData_k__BackingField,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


WarBoardUserServantData_o *WarBoardUserServantData__FromJson(System_String_o *json, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x19
  BattleBuffData_o *v5; // x21
  BattleBuffData_o **v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  BattleBuffData_o *klass; // x0

  if ( (byte_596E2E2 & 1) == 0 )
  {
    sub_2213A60(&BattleBuffData_TypeInfo);
    sub_2213A60(&Method_JsonManager_Deserialize_WarBoardUserServantData___);
    sub_2213A60(&JsonManager_TypeInfo);
    byte_596E2E2 = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method, v2);
  v4 = JsonManager__Deserialize_object_(
         (Il2CppObject *)json,
         (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_WarBoardUserServantData___);
  if ( v4 )
  {
    v5 = (BattleBuffData_o *)sub_2213CCC(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v5, 0);
    v6 = (BattleBuffData_o **)&v4[53];
    v4[53].klass = (Il2CppClass *)v5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4[53], (int32_t)v5, v7, v8, v9, v10, v11, v12);
    klass = (BattleBuffData_o *)v4[53].klass;
    if ( !klass
      || (BattleBuffData__Initialize(klass, 0), (klass = *v6) == 0)
      || (BattleBuffData__clearAuraBuff(klass, 0), (klass = *v6) == 0) )
    {
      sub_2213CDC(klass, v13);
    }
    BattleBuffData__setSaveData(klass, (BattleBuffData_SaveData_o *)v4[50].klass, 0);
  }
  return (WarBoardUserServantData_o *)v4;
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
  int32_t nextNpTurn; // w10
  struct BattleBuffData_SaveData_o *buffDataSave; // x8
  int hiddenValue; // w22
  int32_t transformIndex; // w8
  int32_t transformLimitCount; // w10
  const MethodInfo_47A29F8 *v13; // x0
  System_Int32_array *v14; // x0
  int32_t subBaseHp; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_596E2E0 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    this = (WarBoardUserServantData_o *)sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E2E0 = 1;
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
          sub_2213CE4(this);
        servantData->fields.maxhp = breakHp->m_Items[v7];
      }
    }
  }
  nextNpTurn = v4->fields.nextNpTurn;
  buffDataSave = v4->fields.buffDataSave;
  servantData->fields.np = v4->fields.currentNp;
  servantData->fields.nexttpturn = nextNpTurn;
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
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( !this )
      goto LABEL_31;
    ((void (__fastcall *)(WarBoardUserServantData_o *, _QWORD, void *))this->klass[1]._1.image)(
      this,
      (unsigned int)v4->fields.skill1Ct,
      this->klass[1]._1.gc_desc);
    if ( hiddenValue != 1 )
    {
      this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
      if ( !this )
        goto LABEL_31;
      this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            1,
                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this )
        goto LABEL_31;
      ((void (__fastcall *)(WarBoardUserServantData_o *, _QWORD, void *))this->klass[1]._1.image)(
        this,
        (unsigned int)v4->fields.skill2Ct,
        this->klass[1]._1.gc_desc);
      if ( hiddenValue != 2 )
      {
        this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
        if ( !this )
          goto LABEL_31;
        this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              2,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
    transformLimitCount = v4->fields.transformLimitCount;
    v13 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
    servantData->fields.transformIndex = transformIndex;
    servantData->fields.transformLimitCount = transformLimitCount;
    this = (WarBoardUserServantData_o *)SingletonMonoBehaviour_object___get_Instance(v13);
    if ( this )
    {
      BattleServantData__setTransformServant(
        servantData,
        (BattleData_o *)this->fields.individuality,
        v4->fields.transformIndex,
        v4->fields.transformLimitCount,
        1,
        0,
        0);
      goto LABEL_30;
    }
LABEL_31:
    sub_2213CDC(this, servantData);
  }
LABEL_30:
  servantData->fields.isSleepWaitMode = v4->fields.isSleepWaitMode;
  BattleServantData__updateResultState(servantData, 0);
  v14 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  BattleServantData__updateConditionsBuff(servantData, v14, 0, 0, 0, 0, 0);
  BattleServantData__SetChangeModelData(servantData, v4->fields.changeModelData, 0);
}


void WarBoardUserServantData__SetSaveData(
        WarBoardUserServantData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // d0
  struct BattleBuffData_SaveData_o *buffSave; // x1
  int32_t criticalStars; // w9
  int32_t currentActionPoint; // w10
  int32_t breakPoint; // w8

  if ( !saveData )
    sub_2213CDC(this, 0);
  v9 = *(_QWORD *)&saveData->fields.squareIndex;
  buffSave = saveData->fields.buffSave;
  *(_QWORD *)&this->fields.squareIndex = v9;
  this->fields.buffDataSave = buffSave;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.buffDataSave,
    (int32_t)buffSave,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.attackCount = saveData->fields.attackCount;
  *(_QWORD *)&this->fields.currentHp = *(_QWORD *)&saveData->fields.hp;
  criticalStars = saveData->fields.criticalStars;
  currentActionPoint = saveData->fields.currentActionPoint;
  this->fields.nextNpTurn = saveData->fields.tdTurn;
  breakPoint = saveData->fields.breakPoint;
  this->fields.criticalStars = criticalStars;
  this->fields.currentPieceActionPoint = currentActionPoint;
  this->fields.defeatPoint = breakPoint;
}


System_String_o *WarBoardUserServantData__ToJson(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_SaveData_o *SaveData; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596E2E1 & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    byte_596E2E1 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    SaveData = BattleBuffData__getSaveData(buffData, 0);
    this->fields.buffDataSave = SaveData;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.buffDataSave,
      (int32_t)SaveData,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method, v2);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0);
}