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
  __int64 v5; // x1
  struct BattleBuffData_o *buffData; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleBuffData_o *v13; // x0
  struct BattleBuffData_SaveData_o *SaveData; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x9
  int size; // w21
  BattleSkillInfoData_o *v23; // x9
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v24; // x22
  BattleSkillInfoData_o *v25; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v26; // x20
  BattleSkillInfoData_o *v27; // x8

  if ( (byte_40FA90F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, servantData);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v5);
    byte_40FA90F = 1;
  }
  if ( !servantData )
    goto LABEL_21;
  this->fields.currentHp = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))servantData->klass->vtable._9_get_hp.method)(
                             servantData,
                             servantData->klass->vtable._10_set_hp.methodPtr,
                             method);
  this->fields.currentNp = servantData->fields.np;
  this->fields.nextNpTurn = servantData->fields.nexttpturn;
  buffData = servantData->fields.buffData;
  this->fields.buffData = buffData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.buffData,
    (System_Int32_array **)buffData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = this->fields.buffData;
  if ( v13 )
  {
    SaveData = BattleBuffData__getSaveData(v13, 0LL);
    this->fields.buffDataSave = SaveData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.buffDataSave,
      (System_Int32_array **)SaveData,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  this->fields.transformIndex = servantData->fields.transformIndex;
  this->fields.transformLimitCount = servantData->fields.transformLimitCount;
  this->fields.isSleepWaitMode = servantData->fields.isSleepWaitMode;
  *(_QWORD *)&this->fields.skill1Ct = 0LL;
  this->fields.skill3Ct = 0;
  skillInfoList = servantData->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_21;
  size = skillInfoList->fields._size;
  if ( size < 1 )
    return;
  v23 = skillInfoList->fields._items->m_Items[0];
  if ( !v23 )
    goto LABEL_21;
  this->fields.skill1Ct = v23->fields.chargeTurn;
  if ( size < 2 )
    return;
  v24 = servantData->fields.skillInfoList;
  if ( !v24 )
    goto LABEL_21;
  if ( v24->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v25 = v24->fields._items->m_Items[1];
  if ( !v25 )
    goto LABEL_21;
  this->fields.skill2Ct = v25->fields.chargeTurn;
  if ( size < 3 )
    return;
  v26 = servantData->fields.skillInfoList;
  if ( !v26 )
    goto LABEL_21;
  if ( v26->fields._size <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v27 = v26->fields._items->m_Items[2];
  if ( !v27 )
LABEL_21:
    sub_B170D4();
  this->fields.skill3Ct = v27->fields.chargeTurn;
}


WarBoardUserServantData_o *__fastcall WarBoardUserServantData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  TerminalPramsManager_ClearData_o *v9; // x19
  BattleBuffData_o *v10; // x21
  BattleBuffData_o **v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleBuffData_o *klass; // x0

  if ( (byte_40FA912 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_TypeInfo, method);
    sub_B16FFC(&Method_JsonManager_Deserialize_WarBoardUserServantData___, v3);
    sub_B16FFC(&JsonManager_TypeInfo, v4);
    byte_40FA912 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
         (Il2CppObject *)json,
         (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_WarBoardUserServantData___);
  if ( v9 )
  {
    v10 = (BattleBuffData_o *)sub_B170CC(BattleBuffData_TypeInfo, v5, v6, v7, v8);
    BattleBuffData___ctor(v10, 0LL);
    v11 = (BattleBuffData_o **)&v9[3];
    v9[3].klass = (TerminalPramsManager_ClearData_c *)v10;
    sub_B16F98((BattleServantConfConponent_o *)&v9[3], (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
    klass = (BattleBuffData_o *)v9[3].klass;
    if ( !klass || (BattleBuffData__Initialize(klass, 0LL), !*v11) || (BattleBuffData__clearAuraBuff(*v11, 0LL), !*v11) )
      sub_B170D4();
    BattleBuffData__setSaveData(*v11, *(BattleBuffData_SaveData_o **)&v9[2].fields.EventActivityPointEffectState, 0LL);
  }
  return (WarBoardUserServantData_o *)v9;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Int32_array *breakHp; // x8
  int max_length; // w11
  int v13; // w9
  struct BattleBuffData_SaveData_o *buffDataSave; // x8
  BattleBuffData_o *buffData; // x0
  BattleBuffData_o *v16; // x0
  BattleBuffData_o *v17; // x0
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x8
  int size; // w21
  BattleSkillInfoData_o *v20; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v21; // x22
  BattleSkillInfoData_o *v22; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v23; // x21
  BattleSkillInfoData_o *v24; // x8
  int32_t transformIndex; // w8
  WebViewManager_o *Instance; // x0
  __int64 v27; // x2
  System_Int32_array *v28; // x1

  if ( (byte_40FA910 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, servantData);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_40FA910 = 1;
  }
  if ( !servantData )
    goto LABEL_35;
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))servantData->klass->vtable._10_set_hp.method)(
    servantData,
    (unsigned int)this->fields.currentHp,
    servantData->klass->vtable._11_get_reducedhp.methodPtr);
  if ( this->fields.maxDefeatPoint > this->fields.defeatPoint )
  {
    IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.breakHp, 0LL);
    if ( !IsNullOrEmpty )
    {
      breakHp = this->fields.breakHp;
      if ( !breakHp )
        goto LABEL_35;
      max_length = breakHp->max_length;
      v13 = this->fields.maxDefeatPoint + ~this->fields.defeatPoint;
      if ( v13 < max_length )
      {
        if ( v13 >= (unsigned int)max_length )
        {
          sub_B17100(IsNullOrEmpty, v9, v10);
          sub_B170A0();
        }
        servantData->fields.maxhp = breakHp->m_Items[v13 + 1];
      }
    }
  }
  servantData->fields.np = this->fields.currentNp;
  servantData->fields.nexttpturn = this->fields.nextNpTurn;
  buffDataSave = this->fields.buffDataSave;
  if ( buffDataSave && buffDataSave->fields.passive && buffDataSave->fields.active )
  {
    buffData = servantData->fields.buffData;
    if ( !buffData )
      goto LABEL_35;
    BattleBuffData__Initialize(buffData, 0LL);
    v16 = servantData->fields.buffData;
    if ( !v16 )
      goto LABEL_35;
    BattleBuffData__clearAuraBuff(v16, 0LL);
    v17 = servantData->fields.buffData;
    if ( !v17 )
      goto LABEL_35;
    BattleBuffData__setSaveData(v17, this->fields.buffDataSave, 0LL);
  }
  skillInfoList = servantData->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_35;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v20 = skillInfoList->fields._items->m_Items[0];
    if ( !v20 )
      goto LABEL_35;
    v20->fields.chargeTurn = this->fields.skill1Ct;
    if ( size >= 2 )
    {
      v21 = servantData->fields.skillInfoList;
      if ( !v21 )
        goto LABEL_35;
      if ( v21->fields._size <= 1u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v22 = v21->fields._items->m_Items[1];
      if ( !v22 )
        goto LABEL_35;
      v22->fields.chargeTurn = this->fields.skill2Ct;
      if ( size >= 3 )
      {
        v23 = servantData->fields.skillInfoList;
        if ( !v23 )
          goto LABEL_35;
        if ( v23->fields._size <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v24 = v23->fields._items->m_Items[2];
        if ( !v24 )
          goto LABEL_35;
        v24->fields.chargeTurn = this->fields.skill3Ct;
      }
    }
  }
  transformIndex = this->fields.transformIndex;
  if ( servantData->fields.transformIndex != transformIndex )
  {
    servantData->fields.transformIndex = transformIndex;
    servantData->fields.transformLimitCount = this->fields.transformLimitCount;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance )
    {
      BattleServantData__setTransformServant(
        servantData,
        (BattleData_o *)Instance[5].fields.webViewScreen,
        this->fields.transformIndex,
        this->fields.transformLimitCount,
        1,
        0LL);
      BattleServantData__changeTransformServant(servantData, 0LL);
      goto LABEL_34;
    }
LABEL_35:
    sub_B170D4();
  }
LABEL_34:
  servantData->fields.isSleepWaitMode = this->fields.isSleepWaitMode;
  BattleServantData__updateResultState(servantData, 0LL);
  v28 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v27);
  BattleServantData__updateConditionsBuff(servantData, v28, 0LL, 0LL);
}


void __fastcall WarBoardUserServantData__SetSaveData(
        WarBoardUserServantData_o *this,
        WarBoardPieceData_SaveData_o *saveData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleBuffData_SaveData_o *buffSave; // x1

  if ( !saveData )
    sub_B170D4();
  this->fields.currentActionPoint = saveData->fields.actionCount;
  this->fields.squareIndex = saveData->fields.squareIndex;
  buffSave = saveData->fields.buffSave;
  this->fields.buffDataSave = buffSave;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.buffDataSave,
    (System_Int32_array **)buffSave,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.attackCount = saveData->fields.attackCount;
  this->fields.currentHp = saveData->fields.hp;
  this->fields.currentNp = saveData->fields.np;
  this->fields.nextNpTurn = saveData->fields.tdTurn;
  this->fields.criticalStars = saveData->fields.criticalStars;
  this->fields.currentPieceActionPoint = saveData->fields.currentActionPoint;
  this->fields.defeatPoint = saveData->fields.breakPoint;
}


System_String_o *__fastcall WarBoardUserServantData__ToJson(WarBoardUserServantData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_SaveData_o *SaveData; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FA911 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, method);
    byte_40FA911 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    SaveData = BattleBuffData__getSaveData(buffData, 0LL);
    this->fields.buffDataSave = SaveData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.buffDataSave,
      (System_Int32_array **)SaveData,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}