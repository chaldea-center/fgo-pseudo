void __fastcall BattleCommandData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B69724 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleCommandData_TypeInfo, v1);
    byte_4B69724 = 1;
  }
  BattleCommandData_TypeInfo->static_fields->PASS_STAR_DENOMINATOR = 100;
}


void __fastcall BattleCommandData___ctor(BattleCommandData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B69715 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo, v3);
    byte_4B69715 = 1;
  }
  this->fields._loadsvtLimit = -1;
  this->fields.userCommandCodeId = -1LL;
  this->fields.commandCodeId = -1;
  this->fields.servantCardIdsIndex = -1;
  this->fields.commandAssistId = -1;
  *(_QWORD *)&this->fields.selectedType = -1LL;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
  this->fields.criticalStoreDict = (struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.criticalStoreDict, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandData___ctor_44329868(
        BattleCommandData_o *this,
        int32_t type,
        int32_t svtId,
        int32_t limitCount,
        int32_t imageSvtId,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_int__object__o *v15; // x25
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleDataDefine_c *v22; // x0
  int32_t CRITICAL_HIT_RANDOM_MAX; // w8

  if ( (byte_4B69716 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDataDefine_TypeInfo, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo, v14);
    byte_4B69716 = 1;
  }
  this->fields._loadsvtLimit = -1;
  this->fields.userCommandCodeId = -1LL;
  this->fields.commandCodeId = -1;
  this->fields.servantCardIdsIndex = -1;
  this->fields.commandAssistId = -1;
  *(_QWORD *)&this->fields.selectedType = -1LL;
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
  this->fields.criticalStoreDict = (struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *)v15;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.criticalStoreDict, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._type = type;
  this->fields.svtId = svtId;
  this->fields.imageSvtId = imageSvtId;
  this->fields.svtlimit = limitCount;
  this->fields.attri = 0;
  this->fields.starcount = 0;
  this->fields.critical = 0;
  this->fields.userCommandCodeId = -1LL;
  *(_QWORD *)&this->fields.commandAssistId = 0LL;
  *(_OWORD *)&this->fields._loadsvtLimit = xmmword_BE1C90;
  this->fields.commandCardParam = 0;
  v22 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v22 = BattleDataDefine_TypeInfo;
  }
  CRITICAL_HIT_RANDOM_MAX = v22->static_fields->CRITICAL_HIT_RANDOM_MAX;
  this->fields.servantCardIdsIndex = cardIndex;
  this->fields.criticalHitValue = CRITICAL_HIT_RANDOM_MAX;
}


void __fastcall BattleCommandData___ctor_44330188(
        BattleCommandData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1
  int32_t loadsvtLimit; // w8

  if ( (byte_4B69717 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__, command);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo, v5);
    byte_4B69717 = 1;
  }
  this->fields._loadsvtLimit = -1;
  this->fields.userCommandCodeId = -1LL;
  this->fields.commandCodeId = -1;
  this->fields.servantCardIdsIndex = -1;
  this->fields.commandAssistId = -1;
  *(_QWORD *)&this->fields.selectedType = -1LL;
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_324FE94 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus___ctor__);
  this->fields.criticalStoreDict = (struct System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__o *)v6;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.criticalStoreDict, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( command )
  {
    this->fields._type = BattleCommandData__get_type(command, v13);
    this->fields.imageSvtId = command->fields.imageSvtId;
    *(_QWORD *)&this->fields.svtId = *(_QWORD *)&command->fields.svtId;
    loadsvtLimit = command->fields._loadsvtLimit;
    if ( loadsvtLimit == -1 )
      loadsvtLimit = command->fields.svtlimit;
    this->fields._loadsvtLimit = loadsvtLimit;
    *(_QWORD *)&this->fields.uniqueId = *(_QWORD *)&command->fields.uniqueId;
    this->fields.treasureDvc = command->fields.treasureDvc;
    this->fields.starcount = command->fields.starcount;
    this->fields.flgEventJoin = command->fields.flgEventJoin;
    *(_QWORD *)&this->fields.attri = *(_QWORD *)&command->fields.attri;
    this->fields.userCommandCodeId = command->fields.userCommandCodeId;
    this->fields.commandAssistId = command->fields.commandAssistId;
    *(_QWORD *)&this->fields.commandCodeId = *(_QWORD *)&command->fields.commandCodeId;
    this->fields.servantCardIdsIndex = command->fields.servantCardIdsIndex;
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


int32_t __fastcall BattleCommandData__GetChangeTypeByTransform(BattleCommandData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x8
  int32_t svtId; // w20
  int32_t v7; // w21
  int32_t LimitImageIndex; // w20
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1

  if ( (byte_4B6971D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantTransformMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v4);
    byte_4B6971D = 1;
  }
  if ( this->fields._loadsvtLimit == -1 )
    v5 = 24LL;
  else
    v5 = 36LL;
  svtId = this->fields.svtId;
  v7 = *(_DWORD *)((char *)&this->klass + v5);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  LimitImageIndex = ServantAssetLoadManager__GetLimitImageIndex(svtId, v7, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantTransformMaster___);
  if ( !Master_object )
    sub_1BE4D28(0LL, v10);
  return ServantTransformMaster__GetCommandCardTypeChange(
           (ServantTransformMaster_o *)Master_object,
           this->fields.svtId,
           LimitImageIndex,
           this->fields.servantCardIdsIndex,
           0LL);
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
  __int64 v2; // x8

  v2 = 92LL;
  if ( this->fields.imageSvtId <= 0 )
    v2 = 20LL;
  return *(_DWORD *)((char *)&this->klass + v2);
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


int32_t __fastcall BattleCommandData__GetOverwriteSvtCardType(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.overwriteSvtCardType;
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


bool __fastcall BattleCommandData__IsForceAttackFunctionTargetAll(BattleCommandData_o *this, const MethodInfo *method)
{
  ServantCardAddEntity_o *ServantCardAddEntity; // x0

  ServantCardAddEntity = BattleCommandData__get_ServantCardAddEntity(this, method);
  if ( ServantCardAddEntity )
    LOBYTE(ServantCardAddEntity) = ServantCardAddEntity__IsForceAttackFunctionTargetAll(ServantCardAddEntity, 0LL);
  return (char)ServantCardAddEntity;
}


bool __fastcall BattleCommandData__LotteryPlayerSideCritical(BattleCommandData_o *this, const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  bool result; // w0

  if ( (byte_4B6971E & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDataDefine_TypeInfo, method);
    byte_4B6971E = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4B69722 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__Clear__, method);
    byte_4B69722 = 1;
  }
  criticalStoreDict = this->fields.criticalStoreDict;
  if ( !criticalStoreDict )
    sub_1BE4D28(0LL, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)criticalStoreDict,
    (const MethodInfo_32509F0 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__Clear__);
}


void __fastcall BattleCommandData__ResetNotRelatedParamsOnExtraAttack(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  this->fields.commandAssistId = 0;
  this->fields.userCommandCodeId = -1LL;
  *(_QWORD *)&this->fields.commandCodeId = 0xFFFFFFFFLL;
  this->fields.servantCardIdsIndex = -1;
}


void __fastcall BattleCommandData__ResetOverwriteSvtCardType(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.overwriteSvtCardType = -1;
}


void __fastcall BattleCommandData__ResetPassStar(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.passStarCount = 0;
}


void __fastcall BattleCommandData__ResetSelectedType(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.selectedType = -1;
}


void __fastcall BattleCommandData__ResetServantCardIdsIndex(BattleCommandData_o *this, const MethodInfo *method)
{
  this->fields.servantCardIdsIndex = -1;
}


void __fastcall BattleCommandData__SetBattleBuffData(
        BattleCommandData_o *this,
        BattleBuffData_o *setData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.battleBuffData = setData;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.battleBuffData,
    (int64_t)setData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleCommandData__SetCommandCardParam(
        BattleCommandData_o *this,
        System_Int32_array *commandCodeParams,
        int32_t index,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // w8
  int32_t v5; // w8

  if ( commandCodeParams && (max_length = commandCodeParams->max_length, (int)max_length > index) )
  {
    if ( max_length <= index )
      sub_1BE4D30(this, commandCodeParams);
    v5 = commandCodeParams->m_Items[index + 1];
  }
  else
  {
    v5 = 0;
  }
  this->fields.commandCardParam = v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandData__SetCriticalDecisionType(
        BattleCommandData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  BattleDataDefine_c *v5; // x0

  if ( (byte_4B69721 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDataDefine_TypeInfo, *(_QWORD *)&type);
    byte_4B69721 = 1;
  }
  this->fields.execCriticalDecisionType = type;
  v5 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v5 = BattleDataDefine_TypeInfo;
  }
  this->fields.criticalHitValue = BattleRandom__getNext(v5->static_fields->CRITICAL_HIT_RANDOM_MAX, 0LL);
}


void __fastcall BattleCommandData__SetOverwriteSvtCardType(
        BattleCommandData_o *this,
        int32_t setType,
        const MethodInfo *method)
{
  if ( this->fields.treasureDvc <= 0 )
    this->fields.overwriteSvtCardType = setType;
}


void __fastcall BattleCommandData__SetSelectedType(BattleCommandData_o *this, const MethodInfo *method)
{
  if ( this->fields.treasureDvc <= 0 )
    this->fields.selectedType = BattleCommandData__get_type(this, method);
}


void __fastcall BattleCommandData__UpdateCommandType(
        BattleCommandData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 type; // x0
  __int64 v6; // x1

  if ( this->fields.execCriticalDecisionType )
  {
    type = BattleCommandData__get_type(this, (const MethodInfo *)svtData);
    if ( (_DWORD)type == 10 && this->fields.critical )
      this->fields._type = 11;
    if ( !svtData )
      sub_1BE4D28(type, v6);
    if ( svtData->fields.isEnemy )
      BattleServantData__SetOverwriteSvtCardType(svtData, this, 0LL);
  }
}


void __fastcall BattleCommandData__UpdateCritical(
        BattleCommandData_o *this,
        BattleServantData_o *actSvt,
        BattleServantData_o *optSvt,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleCommandData_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t uniqueId; // w20
  System_Collections_Generic_Dictionary_int__object__o *criticalStoreDict; // x24
  char type; // w8
  Il2CppObject *v15; // x25
  int32_t criticalRate; // w21
  int32_t v17; // w0
  int32_t criticalHitValue; // w8
  bool v19; // w8
  Il2CppObject *Item; // x20
  const MethodInfo *v21; // x1

  v8 = this;
  if ( (byte_4B69723 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleCommandData_CriticalStatus_TypeInfo, actSvt);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__ContainsKey__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__, v10);
    this = (BattleCommandData_o *)sub_1BE4ACC(
                                    &Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__set_Item__,
                                    v11);
    byte_4B69723 = 1;
  }
  if ( !optSvt )
    goto LABEL_37;
  this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
  if ( !this )
    goto LABEL_37;
  uniqueId = optSvt->fields.uniqueId;
  this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_int__object__o *)this,
                                  uniqueId,
                                  (const MethodInfo_3250A5C *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__ContainsKey__);
  criticalStoreDict = (System_Collections_Generic_Dictionary_int__object__o *)v8->fields.criticalStoreDict;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( criticalStoreDict )
    {
      this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                      (System_Collections_Generic_Dictionary_int__object__o *)v8->fields.criticalStoreDict,
                                      uniqueId,
                                      (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
      if ( this )
      {
        type = this->fields._type;
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        v8->fields.critical = type;
        if ( this )
        {
          this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)this,
                                          uniqueId,
                                          (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
          if ( this )
          {
            v8->fields.isCriticalMiss = BYTE1(this->fields._type);
            return;
          }
        }
      }
    }
LABEL_37:
    sub_1BE4D28(this, actSvt);
  }
  v15 = (Il2CppObject *)sub_1BE4D18(BattleCommandData_CriticalStatus_TypeInfo);
  System_Object___ctor(v15, 0LL);
  if ( !criticalStoreDict )
    goto LABEL_37;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    criticalStoreDict,
    uniqueId,
    v15,
    (const MethodInfo_3250854 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__set_Item__);
  if ( !actSvt )
    goto LABEL_37;
  if ( actSvt->fields.isEnemy )
  {
    switch ( v8->fields.execCriticalDecisionType )
    {
      case 0:
        return;
      case 1:
        criticalRate = actSvt->fields.criticalRate;
        v17 = BattleServantData__getCriticalRate(actSvt, v8, optSvt, 0LL);
        criticalHitValue = v8->fields.criticalHitValue;
        v8->fields.critical = criticalHitValue < v17;
        if ( criticalHitValue < criticalRate && v17 < criticalRate && criticalHitValue >= v17 )
          v8->fields.isCriticalMiss = 1;
        goto LABEL_28;
      case 2:
        v8->fields.critical = 1;
        goto LABEL_28;
      case 3:
        v8->fields.critical = 0;
        goto LABEL_28;
      default:
LABEL_28:
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        if ( !this )
          goto LABEL_37;
        this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)this,
                                        uniqueId,
                                        (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
        if ( !this )
          goto LABEL_37;
        LOBYTE(this->fields._type) = v8->fields.critical;
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        if ( !this )
          goto LABEL_37;
        this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                        (System_Collections_Generic_Dictionary_int__object__o *)this,
                                        uniqueId,
                                        (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
        if ( !this )
          goto LABEL_37;
        BYTE1(this->fields._type) = v8->fields.isCriticalMiss;
        break;
    }
  }
  else
  {
    this = (BattleCommandData_o *)BattleCommandData__isAddAttack(v8, (const MethodInfo *)actSvt);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !data )
        goto LABEL_37;
      if ( BattleData__isTutorial(data, 0LL) )
      {
        if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
        {
          this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
          if ( !this )
            goto LABEL_37;
          this = (BattleCommandData_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                          (System_Collections_Generic_Dictionary_int__object__o *)this,
                                          uniqueId,
                                          (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
          v19 = v8->fields.starcount > 0;
          v8->fields.critical = v19;
          if ( !this )
            goto LABEL_37;
          LOBYTE(this->fields._type) = v19;
        }
      }
      else
      {
        this = (BattleCommandData_o *)v8->fields.criticalStoreDict;
        if ( !this )
          goto LABEL_37;
        Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                 (System_Collections_Generic_Dictionary_int__object__o *)this,
                 uniqueId,
                 (const MethodInfo_32507C8 *)Method_System_Collections_Generic_Dictionary_int__BattleCommandData_CriticalStatus__get_Item__);
        this = (BattleCommandData_o *)BattleCommandData__LotteryPlayerSideCritical(v8, v21);
        if ( !Item )
          goto LABEL_37;
        LOBYTE(Item[1].klass) = (unsigned __int8)this & 1;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandData__addCriticalPoint(
        BattleCommandData_o *this,
        int32_t count,
        bool addToPassStar,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t starcount; // w22
  int32_t v9; // w8
  int32_t v10; // w23
  int32_t v11; // w8

  if ( (byte_4B69720 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_10527/*"PER_SAME_COMMAND"*/, *(_QWORD *)&count);
    sub_1BE4ACC(&StringLiteral_5920/*"EXTRA_CRITICAL_RATE"*/, v7);
    byte_4B69720 = 1;
  }
  starcount = this->fields.starcount;
  ++this->fields.starBonus;
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_10527/*"PER_SAME_COMMAND"*/, 0LL) <= this->fields.starBonus )
  {
    this->fields.starBonus = 0;
    v10 = this->fields.starcount;
    v9 = ConstantMaster__getValue((System_String_o *)StringLiteral_5920/*"EXTRA_CRITICAL_RATE"*/, 0LL) + v10;
  }
  else
  {
    v9 = this->fields.starcount;
  }
  v11 = v9 + count;
  if ( v11 >= 1000 )
    v11 = 1000;
  this->fields.starcount = v11;
  if ( addToPassStar )
    this->fields.passStarCount += v11 - starcount;
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


bool __fastcall BattleCommandData__checkCriticalRate_44332168(
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
  return BattleCommandData__isAddAttack(this, method)
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
  BattleCommandData_c *v3; // x0
  int32_t passStarCount; // w19

  if ( (byte_4B6971F & 1) == 0 )
  {
    sub_1BE4ACC(&BattleCommandData_TypeInfo, method);
    byte_4B6971F = 1;
  }
  v3 = BattleCommandData_TypeInfo;
  passStarCount = this->fields.passStarCount;
  if ( !BattleCommandData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCommandData_TypeInfo);
    v3 = BattleCommandData_TypeInfo;
  }
  return passStarCount / v3->static_fields->PASS_STAR_DENOMINATOR;
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
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  const MethodInfo *v5; // x1
  int32_t overwriteSvtCardType; // w3
  int32_t svtId; // w20
  ServantCardAddMaster_o *v8; // x21
  ServantCardAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B69714 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantCardAddMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    byte_4B69714 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantCardAddMaster___);
  overwriteSvtCardType = this->fields.overwriteSvtCardType;
  svtId = this->fields.svtId;
  v8 = (ServantCardAddMaster_o *)Master_object;
  if ( overwriteSvtCardType == -1 )
  {
    Master_object = (Il2CppObject *)BattleCommandData__get_type(this, v5);
    overwriteSvtCardType = (int)Master_object;
  }
  if ( !v8 )
    sub_1BE4D28(Master_object, v5);
  if ( ServantCardAddMaster__TryGetEntity(v8, &entity, svtId, overwriteSvtCardType, 0LL) )
    return entity;
  else
    return 0LL;
}


ServantCardEntity_o *__fastcall BattleCommandData__get_ServantCardEntity(
        BattleCommandData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  const MethodInfo *v5; // x1
  int32_t overwriteSvtCardType; // w3
  int32_t svtId; // w20
  ServantCardMaster_o *v8; // x21
  ServantCardEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B69713 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantCardMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    byte_4B69713 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantCardMaster___);
  overwriteSvtCardType = this->fields.overwriteSvtCardType;
  svtId = this->fields.svtId;
  v8 = (ServantCardMaster_o *)Master_object;
  if ( overwriteSvtCardType == -1 )
  {
    Master_object = (Il2CppObject *)BattleCommandData__get_type(this, v5);
    overwriteSvtCardType = (int)Master_object;
  }
  if ( !v8 )
    sub_1BE4D28(Master_object, v5);
  if ( ServantCardMaster__TryGetEntity(v8, &entity, svtId, overwriteSvtCardType, 0LL) )
    return entity;
  else
    return 0LL;
}


int32_t __fastcall BattleCommandData__get_loadSvtLimit(BattleCommandData_o *this, const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 24LL;
  if ( this->fields._loadsvtLimit != -1 )
    v2 = 36LL;
  return *(_DWORD *)((char *)&this->klass + v2);
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
  int32_t type; // w19

  if ( (byte_4B6971B & 1) == 0 )
  {
    sub_1BE4ACC(&BattleCommand_TypeInfo, method);
    byte_4B6971B = 1;
  }
  type = BattleCommandData__get_type(this, method);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isADDATTACK(type, 0LL);
}


bool __fastcall BattleCommandData__isArts(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4B69718 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleCommand_TypeInfo, method);
    byte_4B69718 = 1;
  }
  type = BattleCommandData__get_type(this, method);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isARTS(type, 0LL);
}


bool __fastcall BattleCommandData__isBlank(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4B6971C & 1) == 0 )
  {
    sub_1BE4ACC(&BattleCommand_TypeInfo, method);
    byte_4B6971C = 1;
  }
  type = BattleCommandData__get_type(this, method);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isBLANK(type, 0LL);
}


bool __fastcall BattleCommandData__isBuster(BattleCommandData_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4B69719 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleCommand_TypeInfo, method);
    byte_4B69719 = 1;
  }
  type = BattleCommandData__get_type(this, method);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isBUSTER(type, 0LL);
}


bool __fastcall BattleCommandData__isBusterChain(BattleCommandData_o *this, const MethodInfo *method)
{
  return this->fields.flash && BattleCommandData__isBuster(this, method);
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
  int32_t type; // w19

  if ( (byte_4B6971A & 1) == 0 )
  {
    sub_1BE4ACC(&BattleCommand_TypeInfo, method);
    byte_4B6971A = 1;
  }
  type = BattleCommandData__get_type(this, method);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return BattleCommand__isQUICK(type, 0LL);
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

  if ( !combo
    || (flash = combo->fields.flash,
        this->fields.actionIndex = index,
        this->fields.flash = flash,
        (sameflg = combo->fields.sameflg) == 0LL) )
  {
    sub_1BE4D28(this, combo);
  }
  max_length = sameflg->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1BE4D30(this, combo);
    this->fields.sameflg = sameflg->m_Items[index + 4];
  }
  this->fields.samecount = combo->fields.samecount;
  this->fields.addAtk = combo->fields.addAtk;
  treasureDvc = this->fields.treasureDvc;
  *(int32x2_t *)&this->fields.addCritical = vrev64_s32(*(int32x2_t *)&combo->fields.addTdGauge);
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