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
  __int64 v5; // x1
  struct BattleBuffData_o *buffData; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  BattleBuffData_o *v9; // x0
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int hiddenValue; // w22

  v4 = this;
  if ( (byte_49FA26B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, servantData);
    this = (WarBoardUserServantData_o *)sub_1B640C8(
                                          &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                          v5);
    byte_49FA26B = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.buffData, (int32_t)buffData, v7, v8);
  v9 = v4->fields.buffData;
  if ( v9 )
  {
    SaveData = BattleBuffData__getSaveData(v9, 0LL);
    v4->fields.buffDataSave = SaveData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.buffDataSave, (int32_t)SaveData, v11, v12);
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
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__)) == 0LL )
  {
LABEL_17:
    sub_1B64324(this);
  }
  v4->fields.skill3Ct = *(_DWORD *)&this->fields.id.fields.inited;
}


WarBoardUserServantData_o *__fastcall WarBoardUserServantData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x19
  BattleBuffData_o *v8; // x21
  BattleBuffData_o **v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  BattleBuffData_o *klass; // x0

  if ( (byte_49FA26E & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_TypeInfo, method);
    sub_1B640C8(&Method_JsonManager_Deserialize_WarBoardUserServantData___, v3);
    sub_1B640C8(&JsonManager_TypeInfo, v4);
    byte_49FA26E = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__Deserialize_object_(
         (Il2CppObject *)json,
         (const MethodInfo_2E9ED70 *)Method_JsonManager_Deserialize_WarBoardUserServantData___);
  if ( v7 )
  {
    v8 = (BattleBuffData_o *)sub_1B64314(BattleBuffData_TypeInfo, v5, v6);
    BattleBuffData___ctor(v8, 0LL);
    v9 = (BattleBuffData_o **)&v7[39];
    v7[39].klass = (Il2CppClass *)v8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7[39], (int32_t)v8, v10, v11);
    klass = (BattleBuffData_o *)v7[39].klass;
    if ( !klass
      || (BattleBuffData__Initialize(klass, 0LL), (klass = *v9) == 0LL)
      || (BattleBuffData__clearAuraBuff(klass, 0LL), (klass = *v9) == 0LL) )
    {
      sub_1B64324(klass);
    }
    BattleBuffData__setSaveData(klass, (BattleBuffData_SaveData_o *)v7[36].klass, 0LL);
  }
  return (WarBoardUserServantData_o *)v7;
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
  __int64 v8; // x1
  struct System_Int32_array *breakHp; // x8
  int max_length; // w11
  int v11; // w9
  struct BattleBuffData_SaveData_o *buffDataSave; // x8
  int hiddenValue; // w22
  int32_t transformIndex; // w8
  System_Int32_array *v15; // x1

  v4 = this;
  if ( (byte_49FA26C & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, servantData);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v6);
    this = (WarBoardUserServantData_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_49FA26C = 1;
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
          sub_1B6432C(this, v8);
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
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
    this = (WarBoardUserServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B64324(this);
  }
LABEL_30:
  servantData->fields.isSleepWaitMode = v4->fields.isSleepWaitMode;
  BattleServantData__updateResultState(servantData, 0LL);
  v15 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  BattleServantData__updateConditionsBuff(servantData, v15, 0LL, 0LL);
}


void __fastcall WarBoardUserServantData__SetSaveData(
        WarBoardUserServantData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct BattleBuffData_SaveData_o *buffSave; // x1

  if ( !saveData )
    sub_1B64324(this);
  *(_QWORD *)&this->fields.squareIndex = *(_QWORD *)&saveData->fields.squareIndex;
  buffSave = saveData->fields.buffSave;
  this->fields.buffDataSave = buffSave;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buffDataSave, (int32_t)buffSave, (int32_t)method, v3);
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

  if ( (byte_49FA26D & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, method);
    byte_49FA26D = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    SaveData = BattleBuffData__getSaveData(buffData, 0LL);
    this->fields.buffDataSave = SaveData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buffDataSave, (int32_t)SaveData, v5, v6);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}