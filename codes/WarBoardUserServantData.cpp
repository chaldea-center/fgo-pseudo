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
  __int64 v3; // x3
  WarBoardUserServantData_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Int32_array **buffData; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **SaveData; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x9
  int size; // w21
  BattleSkillInfoData_o *v25; // x9
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v26; // x22
  BattleSkillInfoData_o *v27; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v28; // x20
  BattleSkillInfoData_o *v29; // x8

  v5 = this;
  if ( (byte_42E9349 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__,
      (_DWORD)servantData,
      (_DWORD)method,
      v3);
    this = (WarBoardUserServantData_o *)sub_B5D5C4(
                                          &Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__,
                                          v6,
                                          v7,
                                          v8);
    byte_42E9349 = 1;
  }
  if ( !servantData )
    goto LABEL_21;
  v5->fields.currentHp = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))servantData->klass->vtable._9_get_hp.method)(
                           servantData,
                           servantData->klass->vtable._10_set_hp.methodPtr,
                           method);
  v5->fields.currentNp = servantData->fields.np;
  v5->fields.nextNpTurn = servantData->fields.nexttpturn;
  buffData = (System_Int32_array **)servantData->fields.buffData;
  v5->fields.buffData = (struct BattleBuffData_o *)buffData;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.buffData, buffData, v10, v11, v12, v13, v14, v15);
  this = (WarBoardUserServantData_o *)v5->fields.buffData;
  if ( this )
  {
    SaveData = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)this, 0LL);
    v5->fields.buffDataSave = (struct BattleBuffData_SaveData_o *)SaveData;
    sub_B5D560((BattleServantConfConponent_o *)&v5->fields.buffDataSave, SaveData, v17, v18, v19, v20, v21, v22);
  }
  v5->fields.transformIndex = servantData->fields.transformIndex;
  v5->fields.transformLimitCount = servantData->fields.transformLimitCount;
  v5->fields.isSleepWaitMode = servantData->fields.isSleepWaitMode;
  *(_QWORD *)&v5->fields.skill1Ct = 0LL;
  v5->fields.skill3Ct = 0;
  skillInfoList = servantData->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_21;
  size = skillInfoList->fields._size;
  if ( size < 1 )
    return;
  v25 = skillInfoList->fields._items->m_Items[0];
  if ( !v25 )
    goto LABEL_21;
  v5->fields.skill1Ct = v25->fields.chargeTurn;
  if ( size < 2 )
    return;
  v26 = servantData->fields.skillInfoList;
  if ( !v26 )
    goto LABEL_21;
  if ( v26->fields._size <= 1u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v27 = v26->fields._items->m_Items[1];
  if ( !v27 )
    goto LABEL_21;
  v5->fields.skill2Ct = v27->fields.chargeTurn;
  if ( size < 3 )
    return;
  v28 = servantData->fields.skillInfoList;
  if ( !v28 )
    goto LABEL_21;
  if ( v28->fields._size <= 2u )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v29 = v28->fields._items->m_Items[2];
  if ( !v29 )
LABEL_21:
    sub_B5D69C(this, servantData);
  v5->fields.skill3Ct = v29->fields.chargeTurn;
}


WarBoardUserServantData_o *__fastcall WarBoardUserServantData__FromJson(
        System_String_o *json,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  TerminalPramsManager_ClearData_o *v11; // x19
  BattleBuffData_o *v12; // x21
  BattleBuffData_o **v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  BattleBuffData_o *klass; // x0

  if ( (byte_42E934C & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_JsonManager_Deserialize_WarBoardUserServantData___, v5, v6, v7);
    sub_B5D5C4(&JsonManager_TypeInfo, v8, v9, v10);
    byte_42E934C = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v11 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
          (Il2CppObject *)json,
          (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_WarBoardUserServantData___);
  if ( v11 )
  {
    v12 = (BattleBuffData_o *)sub_B5D694(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v12, 0LL);
    v13 = (BattleBuffData_o **)&v11[3];
    v11[3].klass = (TerminalPramsManager_ClearData_c *)v12;
    sub_B5D560((BattleServantConfConponent_o *)&v11[3], (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
    klass = (BattleBuffData_o *)v11[3].klass;
    if ( !klass
      || (BattleBuffData__Initialize(klass, 0LL), (klass = *v13) == 0LL)
      || (BattleBuffData__clearAuraBuff(klass, 0LL), (klass = *v13) == 0LL) )
    {
      sub_B5D69C(klass, v20);
    }
    BattleBuffData__setSaveData(klass, *(BattleBuffData_SaveData_o **)&v11[2].fields.EventActivityPointEffectState, 0LL);
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
  __int64 v3; // x3
  WarBoardUserServantData_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Int32_array *breakHp; // x8
  int max_length; // w11
  int v17; // w9
  struct BattleBuffData_SaveData_o *buffDataSave; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *skillInfoList; // x8
  int size; // w21
  BattleSkillInfoData_o *v21; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v22; // x22
  BattleSkillInfoData_o *v23; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v24; // x21
  BattleSkillInfoData_o *v25; // x8
  int32_t transformIndex; // w8
  System_Int32_array *v27; // x1
  __int64 v28; // x0

  v5 = this;
  if ( (byte_42E934A & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)servantData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v9, v10, v11);
    this = (WarBoardUserServantData_o *)sub_B5D5C4(
                                          &Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
                                          v12,
                                          v13,
                                          v14);
    byte_42E934A = 1;
  }
  if ( !servantData )
    goto LABEL_35;
  this = (WarBoardUserServantData_o *)((__int64 (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))servantData->klass->vtable._10_set_hp.method)(
                                        servantData,
                                        (unsigned int)v5->fields.currentHp,
                                        servantData->klass->vtable._11_get_reducedhp.methodPtr);
  if ( v5->fields.maxDefeatPoint > v5->fields.defeatPoint )
  {
    this = (WarBoardUserServantData_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)v5->fields.breakHp,
                                          0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      breakHp = v5->fields.breakHp;
      if ( !breakHp )
        goto LABEL_35;
      max_length = breakHp->max_length;
      v17 = v5->fields.maxDefeatPoint + ~v5->fields.defeatPoint;
      if ( v17 < max_length )
      {
        if ( v17 >= (unsigned int)max_length )
        {
          v28 = sub_B5D6C8(this);
          sub_B5D668(v28, 0LL);
        }
        servantData->fields.maxhp = breakHp->m_Items[v17 + 1];
      }
    }
  }
  servantData->fields.np = v5->fields.currentNp;
  servantData->fields.nexttpturn = v5->fields.nextNpTurn;
  buffDataSave = v5->fields.buffDataSave;
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
    BattleBuffData__setSaveData((BattleBuffData_o *)this, v5->fields.buffDataSave, 0LL);
  }
  skillInfoList = servantData->fields.skillInfoList;
  if ( !skillInfoList )
    goto LABEL_35;
  size = skillInfoList->fields._size;
  if ( size >= 1 )
  {
    v21 = skillInfoList->fields._items->m_Items[0];
    if ( !v21 )
      goto LABEL_35;
    v21->fields.chargeTurn = v5->fields.skill1Ct;
    if ( size >= 2 )
    {
      v22 = servantData->fields.skillInfoList;
      if ( !v22 )
        goto LABEL_35;
      if ( v22->fields._size <= 1u )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v23 = v22->fields._items->m_Items[1];
      if ( !v23 )
        goto LABEL_35;
      v23->fields.chargeTurn = v5->fields.skill2Ct;
      if ( size >= 3 )
      {
        v24 = servantData->fields.skillInfoList;
        if ( !v24 )
          goto LABEL_35;
        if ( v24->fields._size <= 2u )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v25 = v24->fields._items->m_Items[2];
        if ( !v25 )
          goto LABEL_35;
        v25->fields.chargeTurn = v5->fields.skill3Ct;
      }
    }
  }
  transformIndex = v5->fields.transformIndex;
  if ( servantData->fields.transformIndex != transformIndex )
  {
    servantData->fields.transformIndex = transformIndex;
    servantData->fields.transformLimitCount = v5->fields.transformLimitCount;
    this = (WarBoardUserServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( this )
    {
      BattleServantData__setTransformServant(
        servantData,
        (BattleData_o *)this->fields.buffDataSave,
        v5->fields.transformIndex,
        v5->fields.transformLimitCount,
        1,
        0LL);
      BattleServantData__changeTransformServant(servantData, 0LL);
      goto LABEL_34;
    }
LABEL_35:
    sub_B5D69C(this, servantData);
  }
LABEL_34:
  servantData->fields.isSleepWaitMode = v5->fields.isSleepWaitMode;
  BattleServantData__updateResultState(servantData, 0LL);
  v27 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  BattleServantData__updateConditionsBuff(servantData, v27, 0LL, 0LL);
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
    sub_B5D69C(this, 0LL);
  this->fields.currentActionPoint = saveData->fields.actionCount;
  this->fields.squareIndex = saveData->fields.squareIndex;
  buffSave = saveData->fields.buffSave;
  this->fields.buffDataSave = buffSave;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_SaveData_o *SaveData; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42E934B & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E934B = 1;
  }
  buffData = this->fields.buffData;
  if ( buffData )
  {
    SaveData = BattleBuffData__getSaveData(buffData, 0LL);
    this->fields.buffDataSave = SaveData;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.buffDataSave,
      (System_Int32_array **)SaveData,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson((Il2CppObject *)this, 0, 0, 0LL);
}