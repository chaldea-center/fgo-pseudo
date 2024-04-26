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
  System_Int32_array **buffData; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **SaveData; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x9
  int size; // w21
  BattleSkillInfoData_o *v21; // x9
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v22; // x22
  BattleSkillInfoData_o *v23; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v24; // x20
  BattleSkillInfoData_o *v25; // x8

  v4 = this;
  if ( (byte_4352670 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    this = (WarBoardUserServantData_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    byte_4352670 = 1;
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
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.buffData, buffData, v6, v7, v8, v9, v10, v11);
  this = (WarBoardUserServantData_o *)v4->fields.buffData;
  if ( this )
  {
    SaveData = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)this, 0LL);
    v4->fields.buffDataSave = (struct BattleBuffData_SaveData_o *)SaveData;
    sub_B70630((BattleServantConfConponent_o *)&v4->fields.buffDataSave, SaveData, v13, v14, v15, v16, v17, v18);
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
  v21 = skillInfoList->fields._items->m_Items[0];
  if ( !v21 )
    goto LABEL_21;
  v4->fields.skill1Ct = v21->fields.chargeTurn;
  if ( size < 2 )
    return;
  v22 = servantData->fields.skillInfoList;
  if ( !v22 )
    goto LABEL_21;
  if ( v22->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v23 = v22->fields._items->m_Items[1];
  if ( !v23 )
    goto LABEL_21;
  v4->fields.skill2Ct = v23->fields.chargeTurn;
  if ( size < 3 )
    return;
  v24 = servantData->fields.skillInfoList;
  if ( !v24 )
    goto LABEL_21;
  if ( v24->fields._size <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v25 = v24->fields._items->m_Items[2];
  if ( !v25 )
LABEL_21:
    sub_B7076C(this, servantData);
  v4->fields.skill3Ct = v25->fields.chargeTurn;
}


WarBoardUserServantData_o *__fastcall WarBoardUserServantData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  TerminalPramsManager_ClearData_o *v3; // x19
  BattleBuffData_o *v4; // x21
  BattleBuffData_o **v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  BattleBuffData_o *klass; // x0

  if ( (byte_4352673 & 1) == 0 )
  {
    sub_B70694(&BattleBuffData_TypeInfo);
    sub_B70694(&Method_JsonManager_Deserialize_WarBoardUserServantData___);
    sub_B70694(&JsonManager_TypeInfo);
    byte_4352673 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
         (Il2CppObject *)json,
         (const MethodInfo_1D504B8 *)Method_JsonManager_Deserialize_WarBoardUserServantData___);
  if ( v3 )
  {
    v4 = (BattleBuffData_o *)sub_B70764(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v4, 0LL);
    v5 = (BattleBuffData_o **)&v3[3];
    v3[3].klass = (TerminalPramsManager_ClearData_c *)v4;
    sub_B70630((BattleServantConfConponent_o *)&v3[3], (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
    klass = (BattleBuffData_o *)v3[3].klass;
    if ( !klass
      || (BattleBuffData__Initialize(klass, 0LL), (klass = *v5) == 0LL)
      || (BattleBuffData__clearAuraBuff(klass, 0LL), (klass = *v5) == 0LL) )
    {
      sub_B7076C(klass, v12);
    }
    BattleBuffData__setSaveData(klass, *(BattleBuffData_SaveData_o **)&v3[2].fields.EventActivityPointEffectState, 0LL);
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
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x8
  int size; // w21
  BattleSkillInfoData_o *v11; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v12; // x22
  BattleSkillInfoData_o *v13; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v14; // x21
  BattleSkillInfoData_o *v15; // x8
  int32_t transformIndex; // w8
  System_Int32_array *v17; // x1
  __int64 v18; // x0

  v4 = this;
  if ( (byte_4352671 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    this = (WarBoardUserServantData_o *)sub_B70694(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4352671 = 1;
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
      v7 = v4->fields.maxDefeatPoint + ~v4->fields.defeatPoint;
      if ( v7 < max_length )
      {
        if ( v7 >= (unsigned int)max_length )
        {
          v18 = sub_B70798(this);
          sub_B70738(v18, 0LL);
        }
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
    v11 = skillInfoList->fields._items->m_Items[0];
    if ( !v11 )
      goto LABEL_35;
    v11->fields.chargeTurn = v4->fields.skill1Ct;
    if ( size >= 2 )
    {
      v12 = servantData->fields.skillInfoList;
      if ( !v12 )
        goto LABEL_35;
      if ( v12->fields._size <= 1u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v13 = v12->fields._items->m_Items[1];
      if ( !v13 )
        goto LABEL_35;
      v13->fields.chargeTurn = v4->fields.skill2Ct;
      if ( size >= 3 )
      {
        v14 = servantData->fields.skillInfoList;
        if ( !v14 )
          goto LABEL_35;
        if ( v14->fields._size <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v15 = v14->fields._items->m_Items[2];
        if ( !v15 )
          goto LABEL_35;
        v15->fields.chargeTurn = v4->fields.skill3Ct;
      }
    }
  }
  transformIndex = v4->fields.transformIndex;
  if ( servantData->fields.transformIndex != transformIndex )
  {
    servantData->fields.transformIndex = transformIndex;
    servantData->fields.transformLimitCount = v4->fields.transformLimitCount;
    this = (WarBoardUserServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      BattleServantData__setTransformServant(
        servantData,
        (BattleData_o *)this->fields.buffDataSave,
        v4->fields.transformIndex,
        v4->fields.transformLimitCount,
        1,
        0LL,
        0LL);
      goto LABEL_34;
    }
LABEL_35:
    sub_B7076C(this, servantData);
  }
LABEL_34:
  servantData->fields.isSleepWaitMode = v4->fields.isSleepWaitMode;
  BattleServantData__updateResultState(servantData, 0LL);
  v17 = (System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  BattleServantData__updateConditionsBuff(servantData, v17, 0LL, 0LL);
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
    sub_B7076C(this, 0LL);
  this->fields.currentActionPoint = saveData->fields.actionCount;
  this->fields.squareIndex = saveData->fields.squareIndex;
  buffSave = saveData->fields.buffSave;
  this->fields.buffDataSave = buffSave;
  sub_B70630(
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

  if ( (byte_4352672 & 1) == 0 )
  {
    sub_B70694(&JsonManager_TypeInfo);
    byte_4352672 = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    SaveData = BattleBuffData__getSaveData(buffData, 0LL);
    this->fields.buffDataSave = SaveData;
    sub_B70630(
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