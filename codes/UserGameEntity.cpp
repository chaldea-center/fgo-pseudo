void __fastcall UserGameEntity___ctor(UserGameEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4213741 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_long___ctor__, method);
    byte_4213741 = 1;
  }
  this->fields.mainSupportDeckId = 1;
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_2669AD8 *)Method_DataEntityBase_long___ctor__);
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
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x20
  void *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_4213739 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblUserMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v3);
    byte_4213739 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v5 = **(_QWORD **)(v4 + 192);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AA65A4(v5);
  MasterData_WarQuestSelectionMaster = **(void ***)(v5 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblUserMaster___)) == 0LL
    || (MasterData_WarQuestSelectionMaster = TblUserMaster__getUserData(
                                               (TblUserMaster_o *)MasterData_WarQuestSelectionMaster,
                                               this->fields.userId,
                                               0LL)) == 0LL )
  {
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  return *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
}


int32_t __fastcall UserGameEntity__GetSpellImageId(int32_t genderType, int64_t equipId, const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  void *writeMasterDataThreadException; // x19
  struct System_Threading_SynchronizationContext_o *context; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v3 = equipId;
  if ( (byte_421373C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipMaster___, equipId);
    sub_B0D8A4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421373C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v3,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  if ( genderType == 2 )
  {
    context = *(struct System_Threading_SynchronizationContext_o **)&Instance->fields.writeMasterDataThreadEnd;
    writeMasterDataThreadException = Instance->fields.writeMasterDataThreadException;
  }
  else
  {
    context = Instance->fields.context;
    writeMasterDataThreadException = Instance->fields.writeMasterDataThread;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = context;
  *(_QWORD *)&v12.fields.fakeValue = writeMasterDataThreadException;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12, 0LL);
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

  if ( (byte_4213730 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4213730 = 1;
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

  if ( (byte_4213735 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4213735 = 1;
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

  if ( (byte_421372E & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_421372E = 1;
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
  __int64 v3; // x1
  int64_t actRecoverAt; // x19
  __int64 v5; // x20
  BalanceConfig_c *v6; // x0
  int64_t UerGameActRecoverCost; // x8

  if ( (byte_421372F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    byte_421372F = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v5 = actRecoverAt - NetworkManager__getTime(0LL);
  if ( v5 < 1 )
    return 0LL;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UerGameActRecoverCost = v5 % v6->static_fields->UerGameActRecoverCost;
  if ( UerGameActRecoverCost <= 0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      UerGameActRecoverCost = v6->static_fields->UerGameActRecoverCost;
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        return BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost;
      }
    }
    else
    {
      return v6->static_fields->UerGameActRecoverCost;
    }
  }
  return UerGameActRecoverCost;
}


int64_t __fastcall UserGameEntity__getActiveUserEquipId(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t result; // x0
  __int64 v6; // x8

  if ( (byte_421373F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserDeckMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421373F = 1;
  }
  result = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)result,
                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result,
                      this->fields.activeDeckId,
                      (const MethodInfo_2669DFC *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !result )
    return result;
  v6 = *(_QWORD *)(result + 48);
  if ( !v6 )
LABEL_9:
    sub_B0D97C(result);
  return *(_QWORD *)(v6 + 24);
}


int32_t __fastcall UserGameEntity__getBaseAct(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t actRecoverAt; // x20
  __int64 v5; // x20
  BalanceConfig_c *v6; // x0
  __int64 UerGameActRecoverCost; // x9
  __int64 actMax; // x8
  __int64 v9; // x9

  if ( (byte_421372D & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    byte_421372D = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v5 = actRecoverAt - NetworkManager__getTime(0LL);
  if ( v5 < 1 )
    return this->fields.actMax;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UerGameActRecoverCost = v6->static_fields->UerGameActRecoverCost;
  actMax = this->fields.actMax;
  v9 = (v5 + UerGameActRecoverCost - 1) / UerGameActRecoverCost;
  if ( v9 >= actMax )
    return 0;
  else
    return actMax - v9;
}


int32_t __fastcall UserGameEntity__getBaseRp(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t rpRecoverAt; // x20
  __int64 v5; // x1
  int64_t Time; // x19
  __int64 v7; // x20
  BalanceConfig_c *v8; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t UerGameRpMax; // w19
  __int64 v11; // x8

  if ( (byte_4213731 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    byte_4213731 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !byte_421083C )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v5);
    byte_421083C = 1;
  }
  v7 = rpRecoverAt - Time;
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  UerGameRpMax = static_fields->UerGameRpMax;
  if ( v7 >= 1 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v11 = (v7 + static_fields->UerGameRpRecoverCost - 1) / static_fields->UerGameRpRecoverCost;
    if ( v11 >= UerGameRpMax )
      return 0;
    else
      UerGameRpMax -= v11;
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
  __int64 v7; // x1
  int64_t commandSpellRecoverAt; // x21
  __int64 v9; // x21
  BalanceConfig_c *v10; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t CommandSpellMax; // w8
  __int64 CommandSpellRecoverCost; // x9
  __int64 v14; // x10
  __int64 v15; // x11
  int32_t v16; // w8

  if ( (byte_4213737 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, count);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    byte_4213737 = 1;
  }
  commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v9 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  static_fields = v10->static_fields;
  CommandSpellMax = static_fields->CommandSpellMax;
  if ( v9 < 1 )
  {
    CommandSpellRecoverCost = 0LL;
    *count = CommandSpellMax;
  }
  else
  {
    CommandSpellRecoverCost = static_fields->CommandSpellRecoverCost;
    v14 = CommandSpellMax;
    v15 = (v9 + CommandSpellRecoverCost - 1) / CommandSpellRecoverCost;
    v16 = CommandSpellMax - v15;
    if ( v15 >= v14 )
      v16 = 0;
    *count = v16;
    if ( v9 % CommandSpellRecoverCost > 0 )
      CommandSpellRecoverCost = v9 % CommandSpellRecoverCost;
  }
  *recoverTime = CommandSpellRecoverCost;
  return 1;
}


int32_t __fastcall UserGameEntity__getCommandSpell(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t commandSpellRecoverAt; // x19
  __int64 v6; // x20
  int32_t Value; // w19
  int32_t v8; // w0
  __int64 v9; // x8

  if ( (byte_4213736 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9772/*"ONE_COMMAND_SPELL"*/, v3);
    sub_B0D8A4(&StringLiteral_8708/*"MAX_COMMAND_SPELL"*/, v4);
    byte_4213736 = 1;
  }
  commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v6 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8708/*"MAX_COMMAND_SPELL"*/, 0LL);
  if ( v6 >= 1 )
  {
    v8 = ConstantMaster__getValue((System_String_o *)StringLiteral_9772/*"ONE_COMMAND_SPELL"*/, 0LL);
    v9 = (v6 + v8 - 1) / v8;
    if ( v9 >= Value )
      return 0;
    else
      Value -= v9;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t lv; // w23
  BalanceConfig_c *v13; // x0
  DataManager_o *Instance; // x0
  int32_t v15; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x23
  struct DataMasterBase_array *datalist; // x24
  bool result; // w0
  float v19; // s0
  struct DataMasterBase_array *v20; // x8

  if ( (byte_4213738 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, exp);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserExpMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4213738 = 1;
  }
  lv = this->fields.lv;
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( lv < v13->static_fields->UserLevelMax )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserExpMaster___);
    v15 = this->fields.lv;
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( v15 >= 2 )
    {
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    v15 - 1,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
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
                                  v16,
                                  this->fields.lv,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    *exp = this->fields.exp - (_QWORD)datalist;
    if ( Instance )
    {
      *lateExp = (int64_t)Instance->fields.datalist - this->fields.exp;
      v20 = Instance->fields.datalist;
      result = 1;
      v19 = (double)*exp / (double)((char *)v20 - (char *)datalist);
      goto LABEL_17;
    }
LABEL_18:
    sub_B0D97C(Instance);
  }
  result = 0;
  v19 = 1.0;
  *exp = 0LL;
  *lateExp = 0LL;
LABEL_17:
  *barExp = v19;
  return result;
}


int32_t __fastcall UserGameEntity__getLv(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


int32_t __fastcall UserGameEntity__getRp(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t BaseRp; // w20
  BalanceConfig_c *v5; // x0

  BaseRp = UserGameEntity__getBaseRp(this, method);
  if ( !byte_421083C )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v3);
    byte_421083C = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( BaseRp == v5->static_fields->UerGameRpMax )
    BaseRp += this->fields.carryOverRaidPoint;
  return BaseRp;
}


int64_t __fastcall UserGameEntity__getRpAllRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int64_t rpRecoverAt; // x19
  int64_t Time; // x0

  if ( (byte_4213733 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4213733 = 1;
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

  if ( (byte_4213732 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4213732 = 1;
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
  __int64 v3; // x1
  int64_t rpRecoverAt; // x19
  __int64 v5; // x20
  BalanceConfig_c *v6; // x0
  int64_t UerGameRpRecoverCost; // x8

  if ( (byte_4213734 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    byte_4213734 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v5 = rpRecoverAt - NetworkManager__getTime(0LL);
  if ( v5 < 1 )
    return 0LL;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  UerGameRpRecoverCost = v5 % v6->static_fields->UerGameRpRecoverCost;
  if ( UerGameRpRecoverCost <= 0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      UerGameRpRecoverCost = v6->static_fields->UerGameRpRecoverCost;
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        return BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost;
      }
    }
    else
    {
      return v6->static_fields->UerGameRpRecoverCost;
    }
  }
  return UerGameRpRecoverCost;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserGameEntity__getTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_421373D & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, *(_QWORD *)&flagId);
    byte_421373D = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_28088696(this, flagId, 0LL);
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

  if ( (byte_4213740 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4213740 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v8; // x1
  UserServantEntity_o *Entity; // x0
  int32_t genderType; // w19
  __int64 v11; // x20
  int64_t fakeValue; // x21
  int64_t v13; // x1
  const MethodInfo *v14; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_421373A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEquipMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421373A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEquipMaster___),
        Instance = (DataManager_o *)UserGameEntity__getActiveUserEquipId(this, v8),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B0D97C(Instance);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             (int64_t)Instance,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( Entity )
  {
    genderType = this->fields.genderType;
    fakeValue = Entity->fields.id.fields.fakeValue;
    v11 = *(_QWORD *)&Entity->fields.id.fields.inited;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = fakeValue;
    *(_QWORD *)&v16.fields.fakeValue = v11;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
    LODWORD(Entity) = UserGameEntity__GetSpellImageId(genderType, v13, v14);
  }
  return (int)Entity;
}


int32_t __fastcall UserGameEntity__get_SpellImageIdBattle(UserGameEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v11; // x1
  UserServantEntity_o *Entity; // x19
  __int64 v13; // x8
  __int64 v14; // x11
  __int64 v15; // x20
  int32_t result; // w0
  __int64 v17; // x8
  int32_t v18; // w21
  __int64 v19; // x19
  int64_t fakeValue; // x22
  int32_t v21; // w0
  const MethodInfo *v22; // x2
  int32_t v23; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_421373B & 1) == 0 )
  {
    sub_B0D8A4(&BattleRootComponent_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEquipMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421373B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  Instance = UserGameEntity__getActiveUserEquipId(this, v11);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             Instance,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v13 = *(_QWORD *)(Instance + 24);
  if ( v13
    && (v14 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v13 + 300LL) >= (unsigned int)v14) )
  {
    if ( *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v13 + 200LL) + 8 * v14 - 8) == BattleRootComponent_TypeInfo )
      v15 = *(_QWORD *)(Instance + 24);
    else
      v15 = 0LL;
    if ( !Entity )
      return 0;
  }
  else
  {
    v15 = 0LL;
    if ( !Entity )
      return 0;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
    return 0;
  if ( !v15 )
    goto LABEL_28;
  v17 = *(_QWORD *)(v15 + 56);
  if ( !v17 )
    goto LABEL_28;
  v18 = *(_DWORD *)(v17 + 392);
  fakeValue = Entity->fields.id.fields.fakeValue;
  v19 = *(_QWORD *)&Entity->fields.id.fields.inited;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v24.fields.currentCryptoKey = fakeValue;
  *(_QWORD *)&v24.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v24, 0LL);
  Instance = UserGameEntity__GetSpellImageId(v18, v21, v22);
  if ( !*(_QWORD *)(v15 + 56) )
LABEL_28:
    sub_B0D97C(Instance);
  v23 = Instance;
  result = BattleData__GetOverwriteCommandSpellIcon(*(BattleData_o **)(v15 + 56), 0LL);
  if ( !result )
    return v23;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameEntity__setTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  if ( (byte_421373E & 1) == 0 )
  {
    sub_B0D8A4(&TutorialFlag_TypeInfo, *(_QWORD *)&flagId);
    byte_421373E = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_28089328(this, flagId, 0LL);
}