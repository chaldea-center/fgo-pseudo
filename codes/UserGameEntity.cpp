void __fastcall UserGameEntity___ctor(UserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEF5D & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_long___ctor__);
    byte_42AEF5D = 1;
  }
  this->fields.mainSupportDeckId = 1;
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23E21DC *)Method_DataEntityBase_long___ctor__);
}


bool __fastcall UserGameEntity__CheckHasQp(UserGameEntity_o *this, int32_t needQp, const MethodInfo *method)
{
  return this->fields.qp < needQp;
}


int64_t __fastcall UserGameEntity__CreatePrimaryKey(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


int32_t __fastcall UserGameEntity__GetFriendPoint(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  void *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_42AEF55 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42AEF55 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AEB684(v4);
  MasterData_WarQuestSelectionMaster = **(void ***)(v4 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TblUserMaster___)) == 0LL
    || (MasterData_WarQuestSelectionMaster = TblUserMaster__getUserData(
                                               (TblUserMaster_o *)MasterData_WarQuestSelectionMaster,
                                               this->fields.userId,
                                               0LL)) == 0LL )
  {
    sub_B52A5C(MasterData_WarQuestSelectionMaster, method);
  }
  return *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
}


int32_t __fastcall UserGameEntity__GetSpellImageId(int32_t genderType, int64_t equipId, const MethodInfo *method)
{
  int32_t v3; // w20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_c *klass; // x19
  void *writeMasterDataThreadException; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v3 = equipId;
  if ( (byte_42AEF58 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B52984(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEF58 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v3,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  if ( genderType == 2 )
  {
    writeMasterDataThreadException = Instance->fields.writeMasterDataThreadException;
    klass = Instance[1].klass;
  }
  else
  {
    writeMasterDataThreadException = Instance->fields.writeMasterDataThread;
    klass = *(DataManager_c **)&Instance->fields.writeMasterDataThreadEnd;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = writeMasterDataThreadException;
  *(_QWORD *)&v10.fields.fakeValue = klass;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v10, 0LL);
}


bool __fastcall UserGameEntity__HasFlag(UserGameEntity_o *this, int32_t userStatusFlagMask, const MethodInfo *method)
{
  return (this->fields.flag & userStatusFlagMask) != 0;
}


bool __fastcall UserGameEntity__IsAccountDelete(UserGameEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 0xC00000) != 0;
}


bool __fastcall UserGameEntity__IsMale(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.genderType == 1;
}


bool __fastcall UserGameEntity__IsNeedRecoverAct(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t actRecoverAt; // x19

  if ( (byte_42AEF4C & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF4C = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return actRecoverAt - NetworkManager__getTime(0LL) > 0;
}


bool __fastcall UserGameEntity__IsNeedRecoverRp(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t rpRecoverAt; // x19

  if ( (byte_42AEF51 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF51 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return rpRecoverAt - NetworkManager__getTime(0LL) > 0;
}


int32_t __fastcall UserGameEntity__getAct(UserGameEntity_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = UserGameEntity__getBaseAct(this, method);
  if ( result == this->fields.actMax )
    result += this->fields.carryOverActPoint;
  return result;
}


int64_t __fastcall UserGameEntity__getActAllRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t actRecoverAt; // x19
  int64_t Time; // x0

  if ( (byte_42AEF4A & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF4A = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return (actRecoverAt - Time) & ~((actRecoverAt - Time) >> 63);
}


int32_t __fastcall UserGameEntity__getActMax(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.actMax;
}


int64_t __fastcall UserGameEntity__getActNextRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t actRecoverAt; // x19
  __int64 v4; // x20
  BalanceConfig_c *v5; // x0
  int64_t UerGameActRecoverCost; // x8

  if ( (byte_42AEF4B & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF4B = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v4 = actRecoverAt - NetworkManager__getTime(0LL);
  if ( v4 < 1 )
    return 0LL;
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  UerGameActRecoverCost = v4 % v5->static_fields->UerGameActRecoverCost;
  if ( UerGameActRecoverCost <= 0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      UerGameActRecoverCost = v5->static_fields->UerGameActRecoverCost;
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        return BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost;
      }
    }
    else
    {
      return v5->static_fields->UerGameActRecoverCost;
    }
  }
  return UerGameActRecoverCost;
}


int64_t __fastcall UserGameEntity__getActiveUserEquipId(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v4; // x1
  __int64 v5; // x8

  if ( (byte_42AEF5B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B52984(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEF5B = 1;
  }
  result = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)result,
                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result,
                      this->fields.activeDeckId,
                      (const MethodInfo_23E2500 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !result )
    return result;
  v5 = *(_QWORD *)(result + 48);
  if ( !v5 )
LABEL_9:
    sub_B52A5C(result, v4);
  return *(_QWORD *)(v5 + 24);
}


int32_t __fastcall UserGameEntity__getBaseAct(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t actRecoverAt; // x20
  __int64 v4; // x20
  BalanceConfig_c *v5; // x0
  __int64 UerGameActRecoverCost; // x9
  __int64 actMax; // x8
  __int64 v8; // x9

  if ( (byte_42AEF49 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF49 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v4 = actRecoverAt - NetworkManager__getTime(0LL);
  if ( v4 < 1 )
    return this->fields.actMax;
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  UerGameActRecoverCost = v5->static_fields->UerGameActRecoverCost;
  actMax = this->fields.actMax;
  v8 = (v4 + UerGameActRecoverCost - 1) / UerGameActRecoverCost;
  if ( v8 >= actMax )
    return 0;
  else
    return actMax - v8;
}


int32_t __fastcall UserGameEntity__getBaseRp(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t rpRecoverAt; // x20
  int64_t Time; // x19
  __int64 v5; // x20
  BalanceConfig_c *v6; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t UerGameRpMax; // w19
  __int64 v9; // x8

  if ( (byte_42AEF4D & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF4D = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !byte_42AC29F )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42AC29F = 1;
  }
  v5 = rpRecoverAt - Time;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  static_fields = v6->static_fields;
  UerGameRpMax = static_fields->UerGameRpMax;
  if ( v5 >= 1 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v9 = (v5 + static_fields->UerGameRpRecoverCost - 1) / static_fields->UerGameRpRecoverCost;
    if ( v9 >= UerGameRpMax )
      return 0;
    else
      UerGameRpMax -= v9;
  }
  return UerGameRpMax;
}


int32_t __fastcall UserGameEntity__getCarryOverAct(UserGameEntity_o *this, const MethodInfo *method)
{
  if ( UserGameEntity__IsNeedRecoverAct(this, method) )
    return 0;
  else
    return this->fields.carryOverActPoint;
}


int32_t __fastcall UserGameEntity__getCarryOverRp(UserGameEntity_o *this, const MethodInfo *method)
{
  if ( UserGameEntity__IsNeedRecoverRp(this, method) )
    return 0;
  else
    return this->fields.carryOverRaidPoint;
}


bool __fastcall UserGameEntity__getCmdSpellInfo(
        UserGameEntity_o *this,
        int32_t *count,
        int64_t *recoverTime,
        const MethodInfo *method)
{
  int64_t commandSpellRecoverAt; // x21
  __int64 v8; // x21
  BalanceConfig_c *v9; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t CommandSpellMax; // w8
  __int64 CommandSpellRecoverCost; // x9
  __int64 v13; // x10
  __int64 v14; // x11
  int32_t v15; // w8

  if ( (byte_42AEF53 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF53 = 1;
  }
  commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v8 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  static_fields = v9->static_fields;
  CommandSpellMax = static_fields->CommandSpellMax;
  if ( v8 < 1 )
  {
    CommandSpellRecoverCost = 0LL;
    *count = CommandSpellMax;
  }
  else
  {
    CommandSpellRecoverCost = static_fields->CommandSpellRecoverCost;
    v13 = CommandSpellMax;
    v14 = (v8 + CommandSpellRecoverCost - 1) / CommandSpellRecoverCost;
    v15 = CommandSpellMax - v14;
    if ( v14 >= v13 )
      v15 = 0;
    *count = v15;
    if ( v8 % CommandSpellRecoverCost > 0 )
      CommandSpellRecoverCost = v8 % CommandSpellRecoverCost;
  }
  *recoverTime = CommandSpellRecoverCost;
  return 1;
}


int32_t __fastcall UserGameEntity__getCommandSpell(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t commandSpellRecoverAt; // x19
  __int64 v4; // x20
  int32_t Value; // w19
  int32_t v6; // w0
  __int64 v7; // x8

  if ( (byte_42AEF52 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_9806/*"ONE_COMMAND_SPELL"*/);
    sub_B52984(&StringLiteral_8739/*"MAX_COMMAND_SPELL"*/);
    byte_42AEF52 = 1;
  }
  commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v4 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8739/*"MAX_COMMAND_SPELL"*/, 0LL);
  if ( v4 >= 1 )
  {
    v6 = ConstantMaster__getValue((System_String_o *)StringLiteral_9806/*"ONE_COMMAND_SPELL"*/, 0LL);
    v7 = (v4 + v6 - 1) / v6;
    if ( v7 >= Value )
      return 0;
    else
      Value -= v7;
  }
  return Value;
}


bool __fastcall UserGameEntity__getExpInfo(
        UserGameEntity_o *this,
        int64_t *exp,
        int64_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  int32_t lv; // w23
  BalanceConfig_c *v10; // x0
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x23
  struct DataMasterBase_array *datalist; // x24
  bool result; // w0
  float v17; // s0
  struct DataMasterBase_array *v18; // x8

  if ( (byte_42AEF54 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserExpMaster___);
    sub_B52984(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEF54 = 1;
  }
  lv = this->fields.lv;
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( lv < v10->static_fields->UserLevelMax )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserExpMaster___);
    v13 = this->fields.lv;
    v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( v13 >= 2 )
    {
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    v13 - 1,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_18;
      datalist = Instance->fields.datalist;
    }
    else
    {
      if ( !Instance )
        goto LABEL_18;
      datalist = 0LL;
    }
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v14,
                                  this->fields.lv,
                                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    *exp = this->fields.exp - (_QWORD)datalist;
    if ( Instance )
    {
      *lateExp = (int64_t)Instance->fields.datalist - this->fields.exp;
      v18 = Instance->fields.datalist;
      result = 1;
      v17 = (double)*exp / (double)((char *)v18 - (char *)datalist);
      goto LABEL_17;
    }
LABEL_18:
    sub_B52A5C(Instance, v12);
  }
  result = 0;
  v17 = 1.0;
  *exp = 0LL;
  *lateExp = 0LL;
LABEL_17:
  *barExp = v17;
  return result;
}


int32_t __fastcall UserGameEntity__getLv(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


int32_t __fastcall UserGameEntity__getRp(UserGameEntity_o *this, const MethodInfo *method)
{
  int32_t BaseRp; // w20
  BalanceConfig_c *v4; // x0

  BaseRp = UserGameEntity__getBaseRp(this, method);
  if ( !byte_42AC29F )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42AC29F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  if ( BaseRp == v4->static_fields->UerGameRpMax )
    BaseRp += this->fields.carryOverRaidPoint;
  return BaseRp;
}


int64_t __fastcall UserGameEntity__getRpAllRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t rpRecoverAt; // x19
  int64_t Time; // x0

  if ( (byte_42AEF4F & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF4F = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return (rpRecoverAt - Time) & ~((rpRecoverAt - Time) >> 63);
}


int32_t __fastcall UserGameEntity__getRpMax(UserGameEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0

  if ( (byte_42AEF4E & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42AEF4E = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return v2->static_fields->UerGameRpMax;
}


int64_t __fastcall UserGameEntity__getRpNextRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t rpRecoverAt; // x19
  __int64 v4; // x20
  BalanceConfig_c *v5; // x0
  int64_t UerGameRpRecoverCost; // x8

  if ( (byte_42AEF50 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AEF50 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v4 = rpRecoverAt - NetworkManager__getTime(0LL);
  if ( v4 < 1 )
    return 0LL;
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  UerGameRpRecoverCost = v4 % v5->static_fields->UerGameRpRecoverCost;
  if ( UerGameRpRecoverCost <= 0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      UerGameRpRecoverCost = v5->static_fields->UerGameRpRecoverCost;
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        return BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost;
      }
    }
    else
    {
      return v5->static_fields->UerGameRpRecoverCost;
    }
  }
  return UerGameRpRecoverCost;
}


bool __fastcall UserGameEntity__getTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_42AEF59 & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42AEF59 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29218144(this, flagId, 0LL);
}


int64_t __fastcall UserGameEntity__getUserId(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.userId;
}


System_String_o *__fastcall UserGameEntity__getUsername(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


int32_t __fastcall UserGameEntity__get_CommandCodeKeep(UserGameEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0

  if ( (byte_42AEF5C & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42AEF5C = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return v2->static_fields->CommandCodeFrameMax;
}


int32_t __fastcall UserGameEntity__get_SpellImageId(UserGameEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1
  UserServantEntity_o *Entity; // x0
  int32_t genderType; // w19
  __int64 v9; // x20
  int64_t fakeValue; // x21
  int64_t v11; // x1
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42AEF56 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B52984(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEF56 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEquipMaster___),
        Instance = (DataManager_o *)UserGameEntity__getActiveUserEquipId(this, v6),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B52A5C(Instance, v4);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             (int64_t)Instance,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( Entity )
  {
    genderType = this->fields.genderType;
    fakeValue = Entity->fields.id.fields.fakeValue;
    v9 = *(_QWORD *)&Entity->fields.id.fields.inited;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v14.fields.currentCryptoKey = fakeValue;
    *(_QWORD *)&v14.fields.fakeValue = v9;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
    LODWORD(Entity) = UserGameEntity__GetSpellImageId(genderType, v11, v12);
  }
  return (int)Entity;
}


int32_t __fastcall UserGameEntity__get_SpellImageIdBattle(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1
  UserServantEntity_o *Entity; // x19
  __int64 v8; // x8
  __int64 v9; // x11
  __int64 v10; // x20
  int32_t result; // w0
  __int64 v12; // x8
  int32_t v13; // w21
  __int64 v14; // x19
  int64_t fakeValue; // x22
  int32_t v16; // w0
  const MethodInfo *v17; // x2
  int32_t v18; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42AEF57 & 1) == 0 )
  {
    sub_B52984(&BattleRootComponent_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B52984(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEF57 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  Instance = UserGameEntity__getActiveUserEquipId(this, v6);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             Instance,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v8 = *(_QWORD *)(Instance + 24);
  if ( v8
    && (v9 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v8 + 300LL) >= (unsigned int)v9) )
  {
    if ( *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v8 + 200LL) + 8 * v9 - 8) == BattleRootComponent_TypeInfo )
      v10 = *(_QWORD *)(Instance + 24);
    else
      v10 = 0LL;
    if ( !Entity )
      return 0;
  }
  else
  {
    v10 = 0LL;
    if ( !Entity )
      return 0;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
    return 0;
  if ( !v10 )
    goto LABEL_28;
  v12 = *(_QWORD *)(v10 + 56);
  if ( !v12 )
    goto LABEL_28;
  v13 = *(_DWORD *)(v12 + 392);
  fakeValue = Entity->fields.id.fields.fakeValue;
  v14 = *(_QWORD *)&Entity->fields.id.fields.inited;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = fakeValue;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v19, 0LL);
  Instance = UserGameEntity__GetSpellImageId(v13, v16, v17);
  if ( !*(_QWORD *)(v10 + 56) )
LABEL_28:
    sub_B52A5C(Instance, v4);
  v18 = Instance;
  result = BattleData__GetOverwriteCommandSpellIcon(*(BattleData_o **)(v10 + 56), 0LL);
  if ( !result )
    return v18;
  return result;
}


void __fastcall UserGameEntity__setTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_42AEF5A & 1) == 0 )
  {
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42AEF5A = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_29218776(this, flagId, 0LL);
}