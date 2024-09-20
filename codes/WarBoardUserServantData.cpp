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
  WarBoardUserServantData_o *v4; // x19
  struct BattleBuffData_o *buffData; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  BattleBuffData_o *v8; // x0
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int hiddenValue; // w22

  v4 = this;
  if ( (byte_4A58F83 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    this = (WarBoardUserServantData_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    byte_4A58F83 = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.buffData, (int32_t)buffData, v6, v7);
  v8 = v4->fields.buffData;
  if ( v8 )
  {
    SaveData = BattleBuffData__getSaveData(v8, 0LL);
    v4->fields.buffDataSave = SaveData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.buffDataSave, (int32_t)SaveData, v10, v11);
  }
  *(_QWORD *)&v4->fields.transformIndex = *(_QWORD *)&servantData->fields.transformIndex;
  v4->fields.isSleepWaitMode = servantData->fields.isSleepWaitMode;
  *(_QWORD *)&v4->fields.skill1Ct = 0LL;
  v4->fields.skill3Ct = 0;
  this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
  if ( !this )
    goto LABEL_17;
  hiddenValue = this->fields.id.fields.hiddenValue;
  if ( hiddenValue < 1 )
    return;
  this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        0,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
  if ( !this )
    goto LABEL_17;
  v4->fields.skill1Ct = *(_DWORD *)&this->fields.id.fields.inited;
  if ( hiddenValue < 2 )
    return;
  this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
  if ( !this )
    goto LABEL_17;
  this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)this,
                                        1,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
  if ( !this )
    goto LABEL_17;
  v4->fields.skill2Ct = *(_DWORD *)&this->fields.id.fields.inited;
  if ( hiddenValue < 3 )
    return;
  this = (WarBoardUserServantData_o *)servantData->fields.skillInfoList;
  if ( !this
    || (this = (WarBoardUserServantData_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)this,
                                              2,
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__)) == 0LL )
  {
LABEL_17:
    sub_1B8880C(this, servantData);
  }
  v4->fields.skill3Ct = *(_DWORD *)&this->fields.id.fields.inited;
}


WarBoardUserServantData_o *__fastcall WarBoardUserServantData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  BattleBuffData_o *v4; // x21
  BattleBuffData_o **v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  BattleBuffData_o *klass; // x0

  if ( (byte_4A58F86 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_TypeInfo);
    sub_1B885B0(&Method_JsonManager_Deserialize_WarBoardUserServantData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    byte_4A58F86 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__Deserialize_object_(
         (Il2CppObject *)json,
         (const MethodInfo_2EE5DF0 *)Method_JsonManager_Deserialize_WarBoardUserServantData___);
  if ( v3 )
  {
    v4 = (BattleBuffData_o *)sub_1B887FC(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v4, 0LL);
    v5 = (BattleBuffData_o **)&v3[39];
    v3[39].klass = (Il2CppClass *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3[39], (int32_t)v4, v6, v7);
    klass = (BattleBuffData_o *)v3[39].klass;
    if ( !klass
      || (BattleBuffData__Initialize(klass, 0LL), (klass = *v5) == 0LL)
      || (BattleBuffData__clearAuraBuff(klass, 0LL), (klass = *v5) == 0LL) )
    {
      sub_1B8880C(klass, v8);
    }
    BattleBuffData__setSaveData(klass, (BattleBuffData_SaveData_o *)v3[36].klass, 0LL);
  }
  return (WarBoardUserServantData_o *)v3;
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
  struct System_Int32_array *breakHp; // x8
  int max_length; // w11
  int v7; // w9
  struct BattleBuffData_SaveData_o *buffDataSave; // x8
  int hiddenValue; // w22
  int32_t transformIndex; // w8
  System_Int32_array *v11; // x1

  v4 = this;
  if ( (byte_4A58F84 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    this = (WarBoardUserServantData_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58F84 = 1;
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
      v7 = v4->fields.maxDefeatPoint + ~v4->fields.defeatPoint;
      if ( v7 < max_length )
      {
        if ( v7 >= (unsigned int)max_length )
          sub_1B88814(this, servantData);
        servantData->fields.maxhp = breakHp->m_Items[v7 + 1];
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
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
    this = (WarBoardUserServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      BattleServantData__setTransformServant(
        servantData,
        *(BattleData_o **)&this->fields.forceId,
        v4->fields.transformIndex,
        v4->fields.transformLimitCount,
        1,
        0LL,
        0LL);
      goto LABEL_30;
    }
LABEL_31:
    sub_1B8880C(this, servantData);
  }
LABEL_30:
  servantData->fields.isSleepWaitMode = v4->fields.isSleepWaitMode;
  BattleServantData__updateResultState(servantData, 0LL);
  v11 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  BattleServantData__updateConditionsBuff(servantData, v11, 0LL, 0LL);
}


void __fastcall WarBoardUserServantData__SetSaveData(
        WarBoardUserServantData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct BattleBuffData_SaveData_o *buffSave; // x1

  if ( !saveData )
    sub_1B8880C(this, 0LL);
  *(_QWORD *)&this->fields.squareIndex = *(_QWORD *)&saveData->fields.squareIndex;
  buffSave = saveData->fields.buffSave;
  this->fields.buffDataSave = buffSave;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buffDataSave, (int32_t)buffSave, (int32_t)method, v3);
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
  int32_t v6; // w3

  if ( (byte_4A58F85 & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    byte_4A58F85 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    SaveData = BattleBuffData__getSaveData(buffData, 0LL);
    this->fields.buffDataSave = SaveData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buffDataSave, (int32_t)SaveData, v5, v6);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}