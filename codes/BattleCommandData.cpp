void __fastcall BattleCommandData___cctor(const MethodInfo *method)
{
  if ( (byte_434E79C & 1) == 0 )
  {
    sub_B70694(&BattleCommandData_TypeInfo);
    byte_434E79C = 1;
  }
  BattleCommandData_TypeInfo->static_fields->PASS_STAR_DENOMINATOR = 100;
}


void __fastcall BattleCommandData___ctor(BattleCommandData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20

  if ( (byte_434E793 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
    byte_434E793 = 1;
  }
  this->fields._loadsvtLimit = -1;
  this->fields.userCommandCodeId = -1LL;
  this->fields.commandCodeId = -1;
  this->fields.servantCardIdsIndex = -1;
  this->fields.commandAssistId = -1;
  this->fields.selectedType = -1;
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
  this->fields.criticalStoreDict = (struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *)v3;
  sub_B70630(&this->fields.criticalStoreDict);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCommandData___ctor_18919852(
        BattleCommandData_o *this,
        int32_t type,
        int32_t svtId,
        int32_t limitCount,
        int32_t imageSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x24
  BattleDataDefine_c *v12; // x0

  if ( (byte_434E794 & 1) == 0 )
  {
    sub_B70694(&BattleDataDefine_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
    byte_434E794 = 1;
  }
  this->fields._loadsvtLimit = -1;
  this->fields.userCommandCodeId = -1LL;
  this->fields.commandCodeId = -1;
  this->fields.servantCardIdsIndex = -1;
  this->fields.commandAssistId = -1;
  this->fields.selectedType = -1;
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
  this->fields.criticalStoreDict = (struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *)v11;
  sub_B70630(&this->fields.criticalStoreDict);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._type = type;
  this->fields.svtId = svtId;
  this->fields.svtlimit = limitCount;
  this->fields.attri = 0;
  this->fields.starcount = 0;
  this->fields.critical = 0;
  this->fields.userCommandCodeId = -1LL;
  this->fields.commandCardParam = 0;
  *(_QWORD *)&this->fields.commandAssistId = 0LL;
  this->fields.imageSvtId = imageSvtId;
  *(_OWORD *)&this->fields._loadsvtLimit = xmmword_32E7030;
  v12 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v12 = BattleDataDefine_TypeInfo;
  }
  this->fields.criticalHitValue = v12->static_fields->CRITICAL_HIT_RANDOM_MAX;
}


void __fastcall BattleCommandData___ctor_18955368(
        BattleCommandData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x21
  const MethodInfo *v6; // x1
  int32_t loadsvtLimit; // w8

  if ( (byte_434E795 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
    byte_434E795 = 1;
  }
  this->fields._loadsvtLimit = -1;
  this->fields.userCommandCodeId = -1LL;
  this->fields.commandCodeId = -1;
  this->fields.servantCardIdsIndex = -1;
  this->fields.commandAssistId = -1;
  this->fields.selectedType = -1;
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
  this->fields.criticalStoreDict = (struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *)v5;
  sub_B70630(&this->fields.criticalStoreDict);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( command )
  {
    this->fields._type = BattleCommandData__get_type(command, v6);
    this->fields.svtId = command->fields.svtId;
    this->fields.imageSvtId = command->fields.imageSvtId;
    this->fields.svtlimit = command->fields.svtlimit;
    loadsvtLimit = command->fields._loadsvtLimit;
    if ( loadsvtLimit == -1 )
      loadsvtLimit = command->fields.svtlimit;
    this->fields._loadsvtLimit = loadsvtLimit;
    this->fields.attri = command->fields.attri;
    this->fields.uniqueId = command->fields.uniqueId;
    this->fields.markindex = command->fields.markindex;
    this->fields.treasureDvc = command->fields.treasureDvc;
    this->fields.starcount = command->fields.starcount;
    this->fields.flgEventJoin = command->fields.flgEventJoin;
    this->fields.follower = command->fields.follower;
    this->fields.userCommandCodeId = command->fields.userCommandCodeId;
    this->fields.commandCodeId = command->fields.commandCodeId;
    this->fields.commandAssistId = command->fields.commandAssistId;
    this->fields.commandCardParam = command->fields.commandCardParam;
  }
}


void __fastcall BattleCommandData__ClearCommandCode(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.userCommandCodeId = -1LL;
  this->fields.commandCodeId = -1;
}


float __fastcall BattleCommandData__GetAttackNpRate(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( ServantCardAddEntity )
    return ServantCardAddEntity__GetAttackNpRate(ServantCardAddEntity, 0LL);
  else
    return 1.0;
}


BattleBuffData_BuffData_o *__fastcall BattleCommandData__GetCommandCardTypeChangeBuff(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *result; // x0

  result = (BattleBuffData_BuffData_o *)this->fields.battleBuffData;
  if ( result )
    return BattleBuffData__GetCommandCardTypeChangeBuff((BattleBuffData_o *)result, 0LL);
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleCommandData__GetCommandCodeBuffArray(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *result; // x0

  result = (BattleBuffData_BuffData_array *)this->fields.battleBuffData;
  if ( result )
    return BattleBuffData__GetAllConnectedCommandCardBuff((BattleBuffData_o *)result, 0LL);
  return result;
}


float __fastcall BattleCommandData__GetDefenseNpRate(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( ServantCardAddEntity )
    return ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity, 0LL);
  else
    return 1.0;
}


float __fastcall BattleCommandData__GetDropStarRate(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( ServantCardAddEntity )
    return ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity, 0LL);
  else
    return 1.0;
}


int32_t __fastcall BattleCommandData__GetImageServantId(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.imageSvtId;
  if ( result <= 0 )
    return this->fields.svtId;
  return result;
}


float __fastcall BattleCommandData__GetNormalAttackDamageRate(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( ServantCardAddEntity )
    return ServantCardAddEntity__GetDamageRate(ServantCardAddEntity, 0LL);
  else
    return 1.0;
}


int32_t __fastcall BattleCommandData__GetOriginalType(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields._type;
}


bool __fastcall BattleCommandData__IsAllAttack(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardEntity_o *ServantCardEntity; // x0

  ServantCardEntity = BattleCommandData__get_ServantCardEntity(this, method);
  if ( ServantCardEntity )
    LOBYTE(ServantCardEntity) = ServantCardEntity__IsAttackType(ServantCardEntity, 2, 0LL);
  return (char)ServantCardEntity;
}


bool __fastcall BattleCommandData__IsCommandCardTypeChanged(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( this->fields.treasureDvc > 0 )
    return 0;
  type = this->fields._type;
  return type != BattleCommandData__get_type(this, method);
}


bool __fastcall BattleCommandData__IsEnableCommandAssist(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.commandAssistId > 0;
}


bool __fastcall BattleCommandData__IsEnableCommandCode(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.userCommandCodeId > 0;
}


bool __fastcall BattleCommandData__LotteryPlayerSideCritical(BattleCommandData_o *this, const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  bool result; // w0

  if ( (byte_434E796 & 1) == 0 )
  {
    sub_B70694(&BattleDataDefine_TypeInfo);
    byte_434E796 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  result = this->fields.starcount > BattleRandom__getNext(v3->static_fields->CRITICAL_HIT_RANDOM_MAX, 0LL);
  this->fields.critical = result;
  return result;
}


void __fastcall BattleCommandData__ResetCriticalStoreDict(BattleCommandData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *criticalStoreDict; // x0

  if ( (byte_434E79A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__Clear__);
    byte_434E79A = 1;
  }
  criticalStoreDict = this->fields.criticalStoreDict;
  if ( !criticalStoreDict )
    sub_B7076C(0LL, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)criticalStoreDict,
    (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__Clear__);
}


void __fastcall BattleCommandData__ResetNotRelatedParamsOnExtraAttack(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  this->fields.commandAssistId = 0;
  this->fields.userCommandCodeId = -1LL;
  *(_QWORD *)&this->fields.commandCodeId = 0xFFFFFFFFLL;
}


void __fastcall BattleCommandData__ResetPassStar(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.passStarCount = 0;
}


void __fastcall BattleCommandData__ResetSelectedType(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.selectedType = -1;
}


void __fastcall BattleCommandData__SetBattleBuffData(
        BattleCommandData_o *this,
        BattleBuffData_o *setData,
        const MethodInfo *method)
{
  this->fields.battleBuffData = setData;
  sub_B70630(&this->fields.battleBuffData);
}


void __fastcall BattleCommandData__SetCommandCardParam(
        BattleCommandData_o *this,
        System_Int32_array *commandCodeParams,
        int32_t index,
        const MethodInfo *method)
{
  int32_t max_length; // w8
  int32_t v5; // w8
  __int64 v6; // x0

  if ( commandCodeParams && (max_length = commandCodeParams->max_length, max_length > index) )
  {
    if ( max_length <= (unsigned int)index )
    {
      v6 = sub_B70798(this);
      sub_B70738(v6, 0LL);
    }
    v5 = commandCodeParams->m_Items[index + 1];
  }
  else
  {
    v5 = 0;
  }
  this->fields.commandCardParam = v5;
}


void __fastcall BattleCommandData__SetCriticalDecisionType(
        BattleCommandData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  BattleDataDefine_c *v5; // x0

  if ( (byte_434E799 & 1) == 0 )
  {
    sub_B70694(&BattleDataDefine_TypeInfo);
    byte_434E799 = 1;
  }
  this->fields.execCriticalDecisionType = type;
  v5 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v5 = BattleDataDefine_TypeInfo;
  }
  this->fields.criticalHitValue = BattleRandom__getNext(v5->static_fields->CRITICAL_HIT_RANDOM_MAX, 0LL);
}


void __fastcall BattleCommandData__SetSelectedType(BattleCommandData_o *this, const MethodInfo *method)
{
  if ( this->fields.treasureDvc <= 0 )
    this->fields.selectedType = BattleCommandData__get_type(this, method);
}


void __fastcall BattleCommandData__UpdateCommandType(BattleCommandData_o *this, const MethodInfo *method)
{
  if ( this->fields.execCriticalDecisionType && BattleCommandData__get_type(this, method) == 10 && this->fields.critical )
    this->fields._type = 11;
}


void __fastcall BattleCommandData__UpdateCritical(
        BattleCommandData_o *this,
        BattleServantData_o *actSvt,
        BattleServantData_o *optSvt,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleCommandData_o *v8; // x19
  int32_t uniqueId; // w20
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *criticalStoreDict; // x24
  char type; // w8
  BattleCommandData_CriticalStatus_o *v12; // x25
  int32_t criticalRate; // w21
  int32_t v14; // w0
  int32_t criticalHitValue; // w8
  int32_t tutorialId; // w8
  bool v17; // w8
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x20
  const MethodInfo *v19; // x1

  v8 = this;
  if ( (byte_434E79B & 1) == 0 )
  {
    sub_B70694(&BattleCommandData_CriticalStatus_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
    this = (BattleCommandData_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__set_Item__);
    byte_434E79B = 1;
  }
  if ( !optSvt )
    goto LABEL_38;
  this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
  if ( !this )
    goto LABEL_38;
  uniqueId = optSvt->fields.uniqueId;
  this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                  uniqueId,
                                  (const MethodInfo_2FC67DC *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__ContainsKey__);
  criticalStoreDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v8->fields.criticalStoreDict;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( criticalStoreDict )
    {
      this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v8->fields.criticalStoreDict,
                                      uniqueId,
                                      (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
      if ( this )
      {
        type = this->fields._type;
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        v8->fields.critical = type;
        if ( this )
        {
          this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                          uniqueId,
                                          (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
          if ( this )
          {
            v8->fields.isCriticalMiss = BYTE1(this->fields._type);
            return;
          }
        }
      }
    }
LABEL_38:
    sub_B7076C(this, actSvt);
  }
  v12 = (BattleCommandData_CriticalStatus_o *)sub_B70764(BattleCommandData_CriticalStatus_TypeInfo);
  BattleCommandData_CriticalStatus___ctor(v12, 0LL);
  if ( !criticalStoreDict )
    goto LABEL_38;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    criticalStoreDict,
    uniqueId,
    (WarBoardAIRoute_RouteData_o *)v12,
    (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__set_Item__);
  if ( !actSvt )
    goto LABEL_38;
  if ( actSvt->fields.isEnemy )
  {
    switch ( v8->fields.execCriticalDecisionType )
    {
      case 0:
        return;
      case 1:
        criticalRate = actSvt->fields.criticalRate;
        v14 = BattleServantData__getCriticalRate(actSvt, v8, optSvt, 0LL);
        criticalHitValue = v8->fields.criticalHitValue;
        v8->fields.critical = criticalHitValue < v14;
        if ( criticalHitValue < criticalRate && v14 < criticalRate && criticalHitValue >= v14 )
          v8->fields.isCriticalMiss = 1;
        goto LABEL_29;
      case 2:
        v8->fields.critical = 1;
        goto LABEL_29;
      case 3:
        v8->fields.critical = 0;
        goto LABEL_29;
      default:
LABEL_29:
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        if ( !this )
          goto LABEL_38;
        this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                        uniqueId,
                                        (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
        if ( !this )
          goto LABEL_38;
        LOBYTE(this->fields._type) = v8->fields.critical;
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        if ( !this )
          goto LABEL_38;
        this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                        uniqueId,
                                        (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
        if ( !this )
          goto LABEL_38;
        BYTE1(this->fields._type) = v8->fields.isCriticalMiss;
        break;
    }
  }
  else
  {
    this = (BattleCommandData_o *)BattleCommandData__get_type(v8, (const MethodInfo *)actSvt);
    if ( (_DWORD)this != 4 )
    {
      if ( !data )
        goto LABEL_38;
      tutorialId = data->fields.tutorialId;
      if ( tutorialId == -1 )
      {
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        if ( !this )
          goto LABEL_38;
        Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                 uniqueId,
                 (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
        this = (BattleCommandData_o *)BattleCommandData__LotteryPlayerSideCritical(v8, v19);
        if ( !Item )
          goto LABEL_38;
        LOBYTE(Item->fields.squareData) = (unsigned __int8)this & 1;
      }
      else if ( tutorialId != 1 || data->fields.turnCount >= 3 )
      {
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        if ( !this )
          goto LABEL_38;
        this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                        uniqueId,
                                        (const MethodInfo_2FC64A4 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
        v17 = v8->fields.starcount > 0;
        v8->fields.critical = v17;
        if ( !this )
          goto LABEL_38;
        LOBYTE(this->fields._type) = v17;
      }
    }
  }
}


void __fastcall BattleCommandData__addCriticalPoint(
        BattleCommandData_o *this,
        int32_t count,
        bool addToPassStar,
        const MethodInfo *method)
{
  int32_t starcount; // w22
  int32_t v8; // w8
  int32_t v9; // w23
  int32_t v10; // w8

  if ( (byte_434E798 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_10564/*"PER_SAME_COMMAND"*/);
    sub_B70694(&StringLiteral_5888/*"EXTRA_CRITICAL_RATE"*/);
    byte_434E798 = 1;
  }
  starcount = this->fields.starcount;
  ++this->fields.starBonus;
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_10564/*"PER_SAME_COMMAND"*/, 0LL) <= this->fields.starBonus )
  {
    this->fields.starBonus = 0;
    v9 = this->fields.starcount;
    v8 = ConstantMaster__getValue((System_String_o *)StringLiteral_5888/*"EXTRA_CRITICAL_RATE"*/, 0LL) + v9;
    this->fields.starcount = v8;
  }
  else
  {
    v8 = this->fields.starcount;
  }
  v10 = v8 + count;
  if ( v10 >= 1000 )
    v10 = 1000;
  this->fields.starcount = v10;
  if ( addToPassStar )
    this->fields.passStarCount = this->fields.passStarCount - starcount + v10;
}


bool __fastcall BattleCommandData__checkCriticalMax(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.starcount > 999;
}


bool __fastcall BattleCommandData__checkCriticalRate(
        BattleCommandData_o *this,
        int32_t count,
        const MethodInfo *method)
{
  bool v3; // w8

  v3 = this->fields.starcount > count;
  this->fields.critical = v3;
  return v3;
}


bool __fastcall BattleCommandData__checkCriticalRate_18956656(
        BattleCommandData_o *this,
        int32_t rate,
        int32_t count,
        const MethodInfo *method)
{
  this->fields.critical = count < rate;
  return count < rate;
}


bool __fastcall BattleCommandData__checkCriticalZero(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.starcount < 1;
}


bool __fastcall BattleCommandData__checkLastAttack(BattleCommandData_o *this, const MethodInfo *method)
{
  return BattleCommandData__get_type(this, method) == 4
      || this->fields.actionIndex == 2 && (!this->fields.sameflg || this->fields.samecount != 3);
}


int32_t __fastcall BattleCommandData__getAttri(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.attri;
}


int32_t __fastcall BattleCommandData__getChainBonus(BattleCommandData_o *this, const MethodInfo *method)
{
  return 100 * this->fields.chainCount;
}


int32_t __fastcall BattleCommandData__getCriticalPoint(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.starcount / 10;
}


int32_t __fastcall BattleCommandData__getFollowerType(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.follower;
}


System_Int32_array *__fastcall BattleCommandData__getIndividualities(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  int32_t type; // w0

  type = BattleCommandData__get_type(this, method);
  return CardMaster__getIndividualities(type, this->fields.actionIndex, 0LL);
}


int32_t __fastcall BattleCommandData__getPassStarCount(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t passStarCount; // w19
  BattleCommandData_c *v4; // x0

  if ( (byte_434E797 & 1) == 0 )
  {
    sub_B70694(&BattleCommandData_TypeInfo);
    byte_434E797 = 1;
  }
  passStarCount = this->fields.passStarCount;
  v4 = BattleCommandData_TypeInfo;
  if ( (BYTE3(BattleCommandData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleCommandData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandData_TypeInfo);
    v4 = BattleCommandData_TypeInfo;
  }
  return passStarCount / v4->static_fields->PASS_STAR_DENOMINATOR;
}


int32_t __fastcall BattleCommandData__getServantId(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t __fastcall BattleCommandData__getServantLimitCount(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.svtlimit;
}


int32_t __fastcall BattleCommandData__getUniqueId(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.uniqueId;
}


int32_t __fastcall BattleCommandData__get_ActionIndex(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.actionIndex;
}


int32_t __fastcall BattleCommandData__get_AddAtk(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.addAtk;
}


int32_t __fastcall BattleCommandData__get_AddCritical(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.addCritical;
}


int32_t __fastcall BattleCommandData__get_AddTdGauge(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.addTdGauge;
}


int32_t __fastcall BattleCommandData__get_ChainCount(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.chainCount;
}


ServantCardAddEntity_o *__fastcall BattleCommandData__get_ServantCardAddEntity(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t svtId; // w20
  ServantCardAddMaster_o *v5; // x21
  const MethodInfo *v6; // x1
  __int64 type; // x0
  __int64 v8; // x1
  ServantCardAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434E792 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantCardAddMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_434E792 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantCardAddMaster___);
  svtId = this->fields.svtId;
  v5 = (ServantCardAddMaster_o *)Master_WarQuestSelectionMaster;
  type = BattleCommandData__get_type(this, v6);
  if ( !v5 )
    sub_B7076C(type, v8);
  if ( ServantCardAddMaster__TryGetEntity(v5, &entity, svtId, type, 0LL) )
    return entity;
  else
    return 0LL;
}


ServantCardEntity_o *__fastcall BattleCommandData__get_ServantCardEntity(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t svtId; // w20
  ServantCardMaster_o *v5; // x21
  const MethodInfo *v6; // x1
  __int64 type; // x0
  __int64 v8; // x1
  ServantCardEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434E791 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantCardMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_434E791 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantCardMaster___);
  svtId = this->fields.svtId;
  v5 = (ServantCardMaster_o *)Master_WarQuestSelectionMaster;
  type = BattleCommandData__get_type(this, v6);
  if ( !v5 )
    sub_B7076C(type, v8);
  if ( ServantCardMaster__TryGetEntity(v5, &entity, svtId, type, 0LL) )
    return entity;
  else
    return 0LL;
}


int32_t __fastcall BattleCommandData__get_loadSvtLimit(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields._loadsvtLimit;
  if ( result == -1 )
    return this->fields.svtlimit;
  return result;
}


int32_t __fastcall BattleCommandData__get_type(BattleCommandData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *battleBuffData; // x0
  BattleBuffData_BuffData_o *v4; // x0
  int32_t result; // w0

  battleBuffData = this->fields.battleBuffData;
  if ( battleBuffData )
  {
    if ( this->fields.treasureDvc > 0 )
      return this->fields._type;
    v4 = BattleBuffData__GetCommandCardTypeChangeBuff(battleBuffData, 0LL);
    if ( v4 )
      return v4->fields.param;
    result = this->fields.selectedType;
    if ( result == -1 )
      return this->fields._type;
  }
  else
  {
    result = this->fields.selectedType;
    if ( result == -1 || this->fields.treasureDvc >= 1 )
      return this->fields._type;
  }
  return result;
}


bool __fastcall BattleCommandData__isAddAttack(BattleCommandData_o *this, const MethodInfo *method)
{
  return BattleCommandData__get_type(this, method) == 4;
}


bool __fastcall BattleCommandData__isArts(BattleCommandData_o *this, const MethodInfo *method)
{
  return BattleCommandData__get_type(this, method) == 1;
}


bool __fastcall BattleCommandData__isBlank(BattleCommandData_o *this, const MethodInfo *method)
{
  return BattleCommandData__get_type(this, method) == 5;
}


bool __fastcall BattleCommandData__isBuster(BattleCommandData_o *this, const MethodInfo *method)
{
  return BattleCommandData__get_type(this, method) == 2;
}


bool __fastcall BattleCommandData__isBusterChain(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.flash && BattleCommandData__get_type(this, method) == 2;
}


bool __fastcall BattleCommandData__isCritical(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.critical;
}


bool __fastcall BattleCommandData__isFlash(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.flash;
}


bool __fastcall BattleCommandData__isGrand(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.sameflg && this->fields.samecount == 3 && this->fields.flash;
}


bool __fastcall BattleCommandData__isPair(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.sameflg && this->fields.samecount == 2;
}


bool __fastcall BattleCommandData__isQuick(BattleCommandData_o *this, const MethodInfo *method)
{
  return BattleCommandData__get_type(this, method) == 3;
}


bool __fastcall BattleCommandData__isSingle(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.sameflg && this->fields.samecount == 3 && !this->fields.flash;
}


bool __fastcall BattleCommandData__isThree(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.sameflg && this->fields.samecount == 3;
}


bool __fastcall BattleCommandData__isTreasureDvc(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.treasureDvc > 0;
}


void __fastcall BattleCommandData__removeCriticalPoint(
        BattleCommandData_o *this,
        int32_t count,
        const MethodInfo *method)
{
  this->fields.starcount = (this->fields.starcount - count) & ~((this->fields.starcount - count) >> 31);
}


void __fastcall BattleCommandData__resetCriticalPoint(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.starcount = 0;
}


void __fastcall BattleCommandData__setCombo(
        BattleCommandData_o *this,
        BattleComboData_o *combo,
        int32_t index,
        const MethodInfo *method)
{
  bool flash; // w8
  struct System_Boolean_array *sameflg; // x8
  int32_t max_length; // w9
  int32_t treasureDvc; // w8
  __int64 v8; // x0

  if ( !combo
    || (flash = combo->fields.flash,
        this->fields.actionIndex = index,
        this->fields.flash = flash,
        (sameflg = combo->fields.sameflg) == 0LL) )
  {
    sub_B7076C(this, combo);
  }
  max_length = sameflg->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
    {
      v8 = sub_B70798(this);
      sub_B70738(v8, 0LL);
    }
    this->fields.sameflg = sameflg->m_Items[index + 4];
  }
  this->fields.samecount = combo->fields.samecount;
  this->fields.addAtk = combo->fields.addAtk;
  this->fields.addCritical = combo->fields.addCritical;
  this->fields.addTdGauge = combo->fields.addTdGauge;
  treasureDvc = this->fields.treasureDvc;
  this->fields.chainCount = combo->fields.tdChain;
  if ( treasureDvc <= 0 )
    BattleCommandData__addCriticalPoint(this, combo->fields.addCriticalRate, 0, method);
}


void __fastcall BattleCommandData__setFollowerType(BattleCommandData_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.follower = type;
}


void __fastcall BattleCommandData__setTypeAddAttack(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.treasureDvc = 0;
  this->fields.starcount = 0;
  this->fields._type = 4;
}


void __fastcall BattleCommandData__set_ActionIndex(BattleCommandData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.actionIndex = value;
}


void __fastcall BattleCommandData__set_ChainCount(BattleCommandData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.chainCount = value;
}


void __fastcall BattleCommandData__set_loadSvtLimit(BattleCommandData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._loadsvtLimit = value;
}


void __fastcall BattleCommandData__set_type(BattleCommandData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._type = value;
}


void __fastcall BattleCommandData_CriticalStatus___ctor(
        BattleCommandData_CriticalStatus_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCommandData_CriticalStatus__get_Critical(
        BattleCommandData_CriticalStatus_o *this,
        const MethodInfo *method)
{
  return this->fields._Critical_k__BackingField;
}


bool __fastcall BattleCommandData_CriticalStatus__get_IsCriticalMiss(
        BattleCommandData_CriticalStatus_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCriticalMiss_k__BackingField;
}


void __fastcall BattleCommandData_CriticalStatus__set_Critical(
        BattleCommandData_CriticalStatus_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._Critical_k__BackingField = value;
}


void __fastcall BattleCommandData_CriticalStatus__set_IsCriticalMiss(
        BattleCommandData_CriticalStatus_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCriticalMiss_k__BackingField = value;
}