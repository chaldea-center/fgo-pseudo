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
  System_Int32_array **buffData; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **SaveData; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x9
  int size; // w21
  BattleSkillInfoData_o *v22; // x9
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v23; // x22
  BattleSkillInfoData_o *v24; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v25; // x20
  BattleSkillInfoData_o *v26; // x8

  v4 = this;
  if ( (byte_4215658 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, servantData);
    this = (WarBoardUserServantData_o *)sub_B0D8A4(
                                          &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                          v5);
    byte_4215658 = 1;
  }
  if ( !servantData )
    goto LABEL_21;
  v4->fields.currentHp = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))servantData->klass->vtable._9_get_hp.method)(
                           servantData,
                           servantData->klass->vtable._10_set_hp.methodPtr,
                           method);
  v4->fields.currentNp = servantData->fields.np;
  v4->fields.nextNpTurn = servantData->fields.nexttpturn;
  buffData = (System_Int32_array **)servantData->fields.buffData;
  v4->fields.buffData = (struct BattleBuffData_o *)buffData;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.buffData, buffData, v7, v8, v9, v10, v11, v12);
  this = (WarBoardUserServantData_o *)v4->fields.buffData;
  if ( this )
  {
    SaveData = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)this, 0LL);
    v4->fields.buffDataSave = (struct BattleBuffData_SaveData_o *)SaveData;
    sub_B0D840((BattleServantConfConponent_o *)&v4->fields.buffDataSave, SaveData, v14, v15, v16, v17, v18, v19);
  }
  v4->fields.transformIndex = servantData->fields.transformIndex;
  v4->fields.transformLimitCount = servantData->fields.transformLimitCount;
  v4->fields.isSleepWaitMode = servantData->fields.isSleepWaitMode;
  *(_QWORD *)&v4->fields.skill1Ct = 0LL;
  v4->fields.skill3Ct = 0;
  skillInfoList = servantData->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_21;
  size = skillInfoList->fields._size;
  if ( size < 1 )
    return;
  v22 = skillInfoList->fields._items->m_Items[0];
  if ( !v22 )
    goto LABEL_21;
  v4->fields.skill1Ct = v22->fields.chargeTurn;
  if ( size < 2 )
    return;
  v23 = servantData->fields.skillInfoList;
  if ( !v23 )
    goto LABEL_21;
  if ( v23->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v24 = v23->fields._items->m_Items[1];
  if ( !v24 )
    goto LABEL_21;
  v4->fields.skill2Ct = v24->fields.chargeTurn;
  if ( size < 3 )
    return;
  v25 = servantData->fields.skillInfoList;
  if ( !v25 )
    goto LABEL_21;
  if ( v25->fields._size <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v26 = v25->fields._items->m_Items[2];
  if ( !v26 )
LABEL_21:
    sub_B0D97C(this);
  v4->fields.skill3Ct = v26->fields.chargeTurn;
}


WarBoardUserServantData_o *__fastcall WarBoardUserServantData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_ClearData_o *v7; // x19
  BattleBuffData_o *v8; // x21
  BattleBuffData_o **v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleBuffData_o *klass; // x0

  if ( (byte_421565B & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_TypeInfo, method);
    sub_B0D8A4(&Method_JsonManager_Deserialize_WarBoardUserServantData___, v3);
    sub_B0D8A4(&JsonManager_TypeInfo, v4);
    byte_421565B = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
         (Il2CppObject *)json,
         (const MethodInfo_1B68238 *)Method_JsonManager_Deserialize_WarBoardUserServantData___);
  if ( v7 )
  {
    v8 = (BattleBuffData_o *)sub_B0D974(BattleBuffData_TypeInfo, v5, v6);
    BattleBuffData___ctor(v8, 0LL);
    v9 = (BattleBuffData_o **)&v7[3];
    v7[3].klass = (TerminalPramsManager_ClearData_c *)v8;
    sub_B0D840((BattleServantConfConponent_o *)&v7[3], (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
    klass = (BattleBuffData_o *)v7[3].klass;
    if ( !klass
      || (BattleBuffData__Initialize(klass, 0LL), (klass = *v9) == 0LL)
      || (BattleBuffData__clearAuraBuff(klass, 0LL), (klass = *v9) == 0LL) )
    {
      sub_B0D97C(klass);
    }
    BattleBuffData__setSaveData(klass, *(BattleBuffData_SaveData_o **)&v7[2].fields.EventActivityPointEffectState, 0LL);
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
  struct System_Int32_array *breakHp; // x8
  int max_length; // w11
  int v10; // w9
  struct BattleBuffData_SaveData_o *buffDataSave; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x8
  int size; // w21
  BattleSkillInfoData_o *v14; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v15; // x22
  BattleSkillInfoData_o *v16; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v17; // x21
  BattleSkillInfoData_o *v18; // x8
  int32_t transformIndex; // w8
  System_Int32_array *v20; // x1
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4215659 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, servantData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v6);
    this = (WarBoardUserServantData_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    byte_4215659 = 1;
  }
  if ( !servantData )
    goto LABEL_35;
  this = (WarBoardUserServantData_o *)((__int64 (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))servantData->klass->vtable._10_set_hp.method)(
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
        goto LABEL_35;
      max_length = breakHp->max_length;
      v10 = v4->fields.maxDefeatPoint + ~v4->fields.defeatPoint;
      if ( v10 < max_length )
      {
        if ( v10 >= (unsigned int)max_length )
        {
          v21 = sub_B0D9A8(this);
          sub_B0D948(v21, 0LL);
        }
        servantData->fields.maxhp = breakHp->m_Items[v10 + 1];
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
      goto LABEL_35;
    BattleBuffData__Initialize((BattleBuffData_o *)this, 0LL);
    this = (WarBoardUserServantData_o *)servantData->fields.buffData;
    if ( !this )
      goto LABEL_35;
    BattleBuffData__clearAuraBuff((BattleBuffData_o *)this, 0LL);
    this = (WarBoardUserServantData_o *)servantData->fields.buffData;
    if ( !this )
      goto LABEL_35;
    BattleBuffData__setSaveData((BattleBuffData_o *)this, v4->fields.buffDataSave, 0LL);
  }
  skillInfoList = servantData->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_35;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v14 = skillInfoList->fields._items->m_Items[0];
    if ( !v14 )
      goto LABEL_35;
    v14->fields.chargeTurn = v4->fields.skill1Ct;
    if ( size >= 2 )
    {
      v15 = servantData->fields.skillInfoList;
      if ( !v15 )
        goto LABEL_35;
      if ( v15->fields._size <= 1u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v16 = v15->fields._items->m_Items[1];
      if ( !v16 )
        goto LABEL_35;
      v16->fields.chargeTurn = v4->fields.skill2Ct;
      if ( size >= 3 )
      {
        v17 = servantData->fields.skillInfoList;
        if ( !v17 )
          goto LABEL_35;
        if ( v17->fields._size <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v18 = v17->fields._items->m_Items[2];
        if ( !v18 )
          goto LABEL_35;
        v18->fields.chargeTurn = v4->fields.skill3Ct;
      }
    }
  }
  transformIndex = v4->fields.transformIndex;
  if ( servantData->fields.transformIndex != transformIndex )
  {
    servantData->fields.transformIndex = transformIndex;
    servantData->fields.transformLimitCount = v4->fields.transformLimitCount;
    this = (WarBoardUserServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      BattleServantData__setTransformServant(
        servantData,
        (BattleData_o *)this->fields.buffDataSave,
        v4->fields.transformIndex,
        v4->fields.transformLimitCount,
        1,
        0LL);
      BattleServantData__changeTransformServant(servantData, 0LL);
      goto LABEL_34;
    }
LABEL_35:
    sub_B0D97C(this);
  }
LABEL_34:
  servantData->fields.isSleepWaitMode = v4->fields.isSleepWaitMode;
  BattleServantData__updateResultState(servantData, 0LL);
  v20 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  BattleServantData__updateConditionsBuff(servantData, v20, 0LL, 0LL);
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
    sub_B0D97C(this);
  this->fields.currentActionPoint = saveData->fields.actionCount;
  this->fields.squareIndex = saveData->fields.squareIndex;
  buffSave = saveData->fields.buffSave;
  this->fields.buffDataSave = buffSave;
  sub_B0D840(
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

  if ( (byte_421565A & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, method);
    byte_421565A = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    SaveData = BattleBuffData__getSaveData(buffData, 0LL);
    this->fields.buffDataSave = SaveData;
    sub_B0D840(
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