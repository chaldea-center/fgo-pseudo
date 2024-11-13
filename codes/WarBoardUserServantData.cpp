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
  __int64 v6; // x2
  struct BattleBuffData_o *buffData; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  BattleBuffData_o *v14; // x0
  BattleBuffData_SaveData_o *SaveData; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int hiddenValue; // w22

  v4 = this;
  if ( (byte_4B13FB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, servantData, method);
    this = (WarBoardUserServantData_o *)sub_1BCA7E0(
                                          &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                          v5,
                                          v6);
    byte_4B13FB4 = 1;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.buffData, (int64_t)buffData, v8, v9, v10, v11, v12, v13);
  v14 = v4->fields.buffData;
  if ( v14 )
  {
    SaveData = BattleBuffData__getSaveData(v14, 0LL);
    v4->fields.buffDataSave = SaveData;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.buffDataSave, (int64_t)SaveData, v16, v17, v18, v19, v20, v21);
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
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(this, servantData);
  }
  v4->fields.skill3Ct = *(_DWORD *)&this->fields.id.fields.inited;
}


WarBoardUserServantData_o *__fastcall WarBoardUserServantData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  Il2CppObject *v11; // x19
  BattleBuffData_o *v12; // x21
  BattleBuffData_o **v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  BattleBuffData_o *klass; // x0

  if ( (byte_4B13FB7 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBuffData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_JsonManager_Deserialize_WarBoardUserServantData___, v4, v5);
    sub_1BCA7E0(&JsonManager_TypeInfo, v6, v7);
    byte_4B13FB7 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  v11 = JsonManager__Deserialize_object_(
          (Il2CppObject *)json,
          (const MethodInfo_2F79634 *)Method_JsonManager_Deserialize_WarBoardUserServantData___);
  if ( v11 )
  {
    v12 = (BattleBuffData_o *)sub_1BCAA2C(BattleBuffData_TypeInfo, v8, v9, v10);
    BattleBuffData___ctor(v12, 0LL);
    v13 = (BattleBuffData_o **)&v11[39];
    v11[39].klass = (Il2CppClass *)v12;
    sub_1BCA784((PartyOrganizationUtility_o *)&v11[39], (int64_t)v12, v14, v15, v16, v17, v18, v19);
    klass = (BattleBuffData_o *)v11[39].klass;
    if ( !klass
      || (BattleBuffData__Initialize(klass, 0LL), (klass = *v13) == 0LL)
      || (BattleBuffData__clearAuraBuff(klass, 0LL), (klass = *v13) == 0LL) )
    {
      sub_1BCAA3C(klass, v20);
    }
    BattleBuffData__setSaveData(klass, (BattleBuffData_SaveData_o *)v11[36].klass, 0LL);
  }
  return (WarBoardUserServantData_o *)v11;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Int32_array *breakHp; // x8
  int max_length; // w11
  int v13; // w9
  struct BattleBuffData_SaveData_o *buffDataSave; // x8
  int hiddenValue; // w22
  int32_t transformIndex; // w8
  System_Int32_array *v17; // x1

  v4 = this;
  if ( (byte_4B13FB5 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, servantData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v7, v8);
    this = (WarBoardUserServantData_o *)sub_1BCA7E0(
                                          &Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
                                          v9,
                                          v10);
    byte_4B13FB5 = 1;
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
      v13 = v4->fields.maxDefeatPoint + ~v4->fields.defeatPoint;
      if ( v13 < max_length )
      {
        if ( v13 >= (unsigned int)max_length )
          sub_1BCAA44(this, servantData);
        servantData->fields.maxhp = breakHp->m_Items[v13 + 1];
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
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
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
    this = (WarBoardUserServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1BCAA3C(this, servantData);
  }
LABEL_30:
  servantData->fields.isSleepWaitMode = v4->fields.isSleepWaitMode;
  BattleServantData__updateResultState(servantData, 0LL);
  v17 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  BattleServantData__updateConditionsBuff(servantData, v17, 0LL, 0LL);
}


void __fastcall WarBoardUserServantData__SetSaveData(
        WarBoardUserServantData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleBuffData_SaveData_o *buffSave; // x1

  if ( !saveData )
    sub_1BCAA3C(this, 0LL);
  *(_QWORD *)&this->fields.squareIndex = *(_QWORD *)&saveData->fields.squareIndex;
  buffSave = saveData->fields.buffSave;
  this->fields.buffDataSave = buffSave;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.buffDataSave,
    (int64_t)buffSave,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.attackCount = saveData->fields.attackCount;
  *(_QWORD *)&this->fields.currentHp = *(_QWORD *)&saveData->fields.hp;
  this->fields.nextNpTurn = saveData->fields.tdTurn;
  this->fields.criticalStars = saveData->fields.criticalStars;
  this->fields.currentPieceActionPoint = saveData->fields.currentActionPoint;
  this->fields.defeatPoint = saveData->fields.breakPoint;
}


System_String_o *__fastcall WarBoardUserServantData__ToJson(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_SaveData_o *SaveData; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B13FB6 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, method, v2);
    byte_4B13FB6 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    SaveData = BattleBuffData__getSaveData(buffData, 0LL);
    this->fields.buffDataSave = SaveData;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.buffDataSave, (int64_t)SaveData, v6, v7, v8, v9, v10, v11);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}