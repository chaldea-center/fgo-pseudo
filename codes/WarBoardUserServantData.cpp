void __fastcall WarBoardUserServantData___ctor(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  this->fields.transformIndex = -1;
  BattleUserServantData___ctor((BattleUserServantData_o *)this, 0LL);
}


void __fastcall WarBoardUserServantData__FromBattleServantData(
        WarBoardUserServantData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  WarBoardUserServantData_o *v4; // x20
  __int64 v5; // x1
  struct BattleBuffData_o *buffData; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleBuffData_o *v11; // x0
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int hiddenValue; // w22
  struct ChangeModelData_o *ChangeModelData_k__BackingField; // x1

  v4 = this;
  if ( (byte_4B1A136 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, servantData);
    this = (WarBoardUserServantData_o *)sub_1BCAFF8(
                                          &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                          v5);
    byte_4B1A136 = 1;
  }
  if ( !servantData )
    goto LABEL_17;
  v4->fields.currentHp = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))servantData->klass->vtable._9_get_hp.method)(
                           servantData,
                           servantData->klass->vtable._10_set_hp.methodPtr,
                           method);
  v4->fields.currentNp = servantData->fields.np;
  v4->fields.nextNpTurn = servantData->fields.nexttpturn;
  buffData = servantData->fields.buffData;
  v4->fields.buffData = buffData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.buffData, (int32_t)buffData, v7, v8);
  v11 = v4->fields.buffData;
  if ( v11 )
  {
    SaveData = BattleBuffData__getSaveData(v11, 0LL);
    v4->fields.buffDataSave = SaveData;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.buffDataSave, (int32_t)SaveData, v13, v14);
  }
  *(_QWORD *)&v4->fields.transformIndex = *(_QWORD *)&servantData->fields.transformIndex;
  v4->fields.isSleepWaitMode = servantData->fields.isSleepWaitMode;
  *(_QWORD *)&v4->fields.skill1Ct = 0LL;
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
                                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( !this )
      goto LABEL_17;
    v4->fields.skill1Ct = *(_DWORD *)&this->fields.id.fields.inited;
    if ( hiddenValue >= 2 )
    {
      this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
      if ( !this )
        goto LABEL_17;
      this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            1,
                                            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this )
        goto LABEL_17;
      v4->fields.skill2Ct = *(_DWORD *)&this->fields.id.fields.inited;
      if ( hiddenValue >= 3 )
      {
        this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
        if ( this )
        {
          this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)this,
                                                2,
                                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
          if ( this )
          {
            v4->fields.skill3Ct = *(_DWORD *)&this->fields.id.fields.inited;
            goto LABEL_16;
          }
        }
LABEL_17:
        sub_1BCB254(this, servantData);
      }
    }
  }
LABEL_16:
  ChangeModelData_k__BackingField = servantData->fields._ChangeModelData_k__BackingField;
  v4->fields.changeModelData = ChangeModelData_k__BackingField;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.changeModelData, (int32_t)ChangeModelData_k__BackingField, v9, v10);
}


WarBoardUserServantData_o *__fastcall WarBoardUserServantData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  BattleBuffData_o *v6; // x21
  BattleBuffData_o **p_monitor; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  BattleBuffData_o *monitor; // x0

  if ( (byte_4B1A139 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleBuffData_TypeInfo, method);
    sub_1BCAFF8(&Method_JsonManager_Deserialize_WarBoardUserServantData___, v3);
    sub_1BCAFF8(&JsonManager_TypeInfo, v4);
    byte_4B1A139 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__Deserialize_object_(
         (Il2CppObject *)json,
         (const MethodInfo_3086544 *)Method_JsonManager_Deserialize_WarBoardUserServantData___);
  if ( v5 )
  {
    v6 = (BattleBuffData_o *)sub_1BCB244(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v6, 0LL);
    p_monitor = (BattleBuffData_o **)&v5[42].monitor;
    v5[42].monitor = v6;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v5[42].monitor, (int32_t)v6, v8, v9);
    monitor = (BattleBuffData_o *)v5[42].monitor;
    if ( !monitor
      || (BattleBuffData__Initialize(monitor, 0LL), (monitor = *p_monitor) == 0LL)
      || (BattleBuffData__clearAuraBuff(monitor, 0LL), (monitor = *p_monitor) == 0LL) )
    {
      sub_1BCB254(monitor, v10);
    }
    BattleBuffData__setSaveData(monitor, (BattleBuffData_SaveData_o *)v5[39].monitor, 0LL);
  }
  return (WarBoardUserServantData_o *)v5;
}


bool __fastcall WarBoardUserServantData__IsAlive(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  return this->fields.defeatPoint > 0 || this->fields.currentHp > 0;
}


bool __fastcall WarBoardUserServantData__IsBoss(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  return this->fields.stageBossIdx > 0;
}


void __fastcall WarBoardUserServantData__SetBattleServantData(
        WarBoardUserServantData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  WarBoardUserServantData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *breakHp; // x8
  int max_length; // w11
  int v11; // w9
  struct BattleBuffData_SaveData_o *buffDataSave; // x8
  int hiddenValue; // w22
  int32_t transformIndex; // w8
  System_Int32_array *v15; // x0

  v4 = this;
  if ( (byte_4B1A137 & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, servantData);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v6);
    this = (WarBoardUserServantData_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_4B1A137 = 1;
  }
  if ( !servantData )
    goto LABEL_31;
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))servantData->klass->vtable._10_set_hp.method)(
    servantData,
    (unsigned int)v4->fields.currentHp,
    servantData->klass->vtable._11_get_reducedhp.methodPtr);
  if ( v4->fields.maxDefeatPoint > v4->fields.defeatPoint )
  {
    this = (WarBoardUserServantData_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)v4->fields.breakHp,
                                          0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      breakHp = v4->fields.breakHp;
      if ( !breakHp )
        goto LABEL_31;
      max_length = breakHp->max_length;
      v11 = v4->fields.maxDefeatPoint + ~v4->fields.defeatPoint;
      if ( v11 < max_length )
      {
        if ( v11 >= (unsigned int)max_length )
          sub_1BCB25C(this, servantData, v8);
        servantData->fields.maxhp = breakHp->m_Items[v11 + 1];
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
    BattleBuffData__Initialize((BattleBuffData_o *)this, 0LL);
    this = (WarBoardUserServantData_o *)servantData->fields.buffData;
    if ( !this )
      goto LABEL_31;
    BattleBuffData__clearAuraBuff((BattleBuffData_o *)this, 0LL);
    this = (WarBoardUserServantData_o *)servantData->fields.buffData;
    if ( !this )
      goto LABEL_31;
    BattleBuffData__setSaveData((BattleBuffData_o *)this, v4->fields.buffDataSave, 0LL);
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
                                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    if ( !this )
      goto LABEL_31;
    *(_DWORD *)&this->fields.id.fields.inited = v4->fields.skill1Ct;
    if ( hiddenValue >= 2 )
    {
      this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
      if ( !this )
        goto LABEL_31;
      this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)this,
                                            1,
                                            (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !this )
        goto LABEL_31;
      *(_DWORD *)&this->fields.id.fields.inited = v4->fields.skill2Ct;
      if ( hiddenValue >= 3 )
      {
        this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
        if ( !this )
          goto LABEL_31;
        this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              2,
                                              (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
        if ( !this )
          goto LABEL_31;
        *(_DWORD *)&this->fields.id.fields.inited = v4->fields.skill3Ct;
      }
    }
  }
  transformIndex = v4->fields.transformIndex;
  if ( servantData->fields.transformIndex != transformIndex )
  {
    servantData->fields.transformIndex = transformIndex;
    servantData->fields.transformLimitCount = v4->fields.transformLimitCount;
    this = (WarBoardUserServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      BattleServantData__setTransformServant(
        servantData,
        *(BattleData_o **)&this->fields.isAfterTransformKey,
        v4->fields.transformIndex,
        v4->fields.transformLimitCount,
        1,
        0LL,
        0LL);
      goto LABEL_30;
    }
LABEL_31:
    sub_1BCB254(this, servantData);
  }
LABEL_30:
  servantData->fields.isSleepWaitMode = v4->fields.isSleepWaitMode;
  BattleServantData__updateResultState(servantData, 0LL);
  v15 = (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 0LL);
  BattleServantData__updateConditionsBuff(servantData, v15, 0LL, 0LL, 0LL);
  BattleServantData__SetChangeModelData(servantData, v4->fields.changeModelData, 0LL);
}


void __fastcall WarBoardUserServantData__SetSaveData(
        WarBoardUserServantData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattleBuffData_SaveData_o *buffSave; // x1

  if ( !saveData )
    sub_1BCB254(this, 0LL);
  *(_QWORD *)&this->fields.squareIndex = *(_QWORD *)&saveData->fields.squareIndex;
  buffSave = saveData->fields.buffSave;
  this->fields.buffDataSave = buffSave;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.buffDataSave, (int32_t)buffSave, (int32_t)method, v3);
  this->fields.attackCount = saveData->fields.attackCount;
  *(_QWORD *)&this->fields.currentHp = *(_QWORD *)&saveData->fields.hp;
  this->fields.nextNpTurn = saveData->fields.tdTurn;
  this->fields.criticalStars = saveData->fields.criticalStars;
  this->fields.currentPieceActionPoint = saveData->fields.currentActionPoint;
  this->fields.defeatPoint = saveData->fields.breakPoint;
}


System_String_o *__fastcall WarBoardUserServantData__ToJson(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1A138 & 1) == 0 )
  {
    sub_1BCAFF8(&JsonManager_TypeInfo, method);
    byte_4B1A138 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    SaveData = BattleBuffData__getSaveData(buffData, 0LL);
    this->fields.buffDataSave = SaveData;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.buffDataSave, (int32_t)SaveData, v5, v6);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}