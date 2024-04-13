void __fastcall UserGameEntity___ctor(UserGameEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7155 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42E7155 = 1;
  }
  this->fields.mainSupportDeckId = 1;
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x20
  void *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_42E714D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblUserMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5, v6, v7);
    byte_42E714D = 1;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AF52C4(v9);
  MasterData_WarQuestSelectionMaster = **(void ***)(v9 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblUserMaster___)) == 0LL
    || (MasterData_WarQuestSelectionMaster = TblUserMaster__getUserData(
                                               (TblUserMaster_o *)MasterData_WarQuestSelectionMaster,
                                               this->fields.userId,
                                               0LL)) == 0LL )
  {
    sub_B5D69C(MasterData_WarQuestSelectionMaster, method);
  }
  return *((_DWORD *)MasterData_WarQuestSelectionMaster + 6);
}


int32_t __fastcall UserGameEntity__GetSpellImageId(int32_t genderType, int64_t equipId, const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  DataManager_c *klass; // x19
  void *writeMasterDataThreadException; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = equipId;
  if ( (byte_42E7150 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, equipId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E7150 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v4,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v16);
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
  *(_QWORD *)&v20.fields.currentCryptoKey = writeMasterDataThreadException;
  *(_QWORD *)&v20.fields.fakeValue = klass;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v20, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int64_t actRecoverAt; // x19

  if ( (byte_42E7144 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7144 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int64_t rpRecoverAt; // x19

  if ( (byte_42E7149 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7149 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int64_t actRecoverAt; // x19
  int64_t Time; // x0

  if ( (byte_42E7142 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7142 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t actRecoverAt; // x19
  __int64 v9; // x20
  BalanceConfig_c *v10; // x0
  int64_t UerGameActRecoverCost; // x8

  if ( (byte_42E7143 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E7143 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v9 = actRecoverAt - NetworkManager__getTime(0LL);
  if ( v9 < 1 )
    return 0LL;
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  UerGameActRecoverCost = v9 % v10->static_fields->UerGameActRecoverCost;
  if ( UerGameActRecoverCost <= 0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      UerGameActRecoverCost = v10->static_fields->UerGameActRecoverCost;
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        return BalanceConfig_TypeInfo->static_fields->UerGameActRecoverCost;
      }
    }
    else
    {
      return v10->static_fields->UerGameActRecoverCost;
    }
  }
  return UerGameActRecoverCost;
}


int64_t __fastcall UserGameEntity__getActiveUserEquipId(UserGameEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t result; // x0
  __int64 v12; // x1
  __int64 v13; // x8

  if ( (byte_42E7153 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E7153 = 1;
  }
  result = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)result,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !result )
    goto LABEL_9;
  result = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                      (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result,
                      this->fields.activeDeckId,
                      (const MethodInfo_23FB038 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__GetEntity__);
  if ( !result )
    return result;
  v13 = *(_QWORD *)(result + 48);
  if ( !v13 )
LABEL_9:
    sub_B5D69C(result, v12);
  return *(_QWORD *)(v13 + 24);
}


int32_t __fastcall UserGameEntity__getBaseAct(UserGameEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t actRecoverAt; // x20
  __int64 v9; // x20
  BalanceConfig_c *v10; // x0
  __int64 UerGameActRecoverCost; // x9
  __int64 actMax; // x8
  __int64 v13; // x9

  if ( (byte_42E7141 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E7141 = 1;
  }
  actRecoverAt = this->fields.actRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v9 = actRecoverAt - NetworkManager__getTime(0LL);
  if ( v9 < 1 )
    return this->fields.actMax;
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  UerGameActRecoverCost = v10->static_fields->UerGameActRecoverCost;
  actMax = this->fields.actMax;
  v13 = (v9 + UerGameActRecoverCost - 1) / UerGameActRecoverCost;
  if ( v13 >= actMax )
    return 0;
  else
    return actMax - v13;
}


int32_t __fastcall UserGameEntity__getBaseRp(UserGameEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t rpRecoverAt; // x20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int64_t Time; // x19
  __int64 v13; // x20
  BalanceConfig_c *v14; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t UerGameRpMax; // w19
  __int64 v17; // x8

  if ( (byte_42E7145 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E7145 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !byte_42E4B1D )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v9, v10, v11);
    byte_42E4B1D = 1;
  }
  v13 = rpRecoverAt - Time;
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  static_fields = v14->static_fields;
  UerGameRpMax = static_fields->UerGameRpMax;
  if ( v13 >= 1 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v17 = (v13 + static_fields->UerGameRpRecoverCost - 1) / static_fields->UerGameRpRecoverCost;
    if ( v17 >= UerGameRpMax )
      return 0;
    else
      UerGameRpMax -= v17;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int64_t commandSpellRecoverAt; // x21
  __int64 v11; // x21
  BalanceConfig_c *v12; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int32_t CommandSpellMax; // w8
  __int64 CommandSpellRecoverCost; // x9
  __int64 v16; // x10
  __int64 v17; // x11
  int32_t v18; // w8

  if ( (byte_42E714B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)count, (_DWORD)recoverTime, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    byte_42E714B = 1;
  }
  commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v11 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  static_fields = v12->static_fields;
  CommandSpellMax = static_fields->CommandSpellMax;
  if ( v11 < 1 )
  {
    CommandSpellRecoverCost = 0LL;
    *count = CommandSpellMax;
  }
  else
  {
    CommandSpellRecoverCost = static_fields->CommandSpellRecoverCost;
    v16 = CommandSpellMax;
    v17 = (v11 + CommandSpellRecoverCost - 1) / CommandSpellRecoverCost;
    v18 = CommandSpellMax - v17;
    if ( v17 >= v16 )
      v18 = 0;
    *count = v18;
    if ( v11 % CommandSpellRecoverCost > 0 )
      CommandSpellRecoverCost = v11 % CommandSpellRecoverCost;
  }
  *recoverTime = CommandSpellRecoverCost;
  return 1;
}


int32_t __fastcall UserGameEntity__getCommandSpell(UserGameEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t commandSpellRecoverAt; // x19
  __int64 v12; // x20
  int32_t Value; // w19
  int32_t v14; // w0
  __int64 v15; // x8

  if ( (byte_42E714A & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9846/*"ONE_COMMAND_SPELL"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8776/*"MAX_COMMAND_SPELL"*/, v8, v9, v10);
    byte_42E714A = 1;
  }
  commandSpellRecoverAt = this->fields.commandSpellRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v12 = commandSpellRecoverAt - NetworkManager__getTime(0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8776/*"MAX_COMMAND_SPELL"*/, 0LL);
  if ( v12 >= 1 )
  {
    v14 = ConstantMaster__getValue((System_String_o *)StringLiteral_9846/*"ONE_COMMAND_SPELL"*/, 0LL);
    v15 = (v12 + v14 - 1) / v14;
    if ( v15 >= Value )
      return 0;
    else
      Value -= v15;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t lv; // w23
  BalanceConfig_c *v19; // x0
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  int32_t v22; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x23
  struct DataMasterBase_array *datalist; // x24
  bool result; // w0
  float v26; // s0
  struct DataMasterBase_array *v27; // x8

  if ( (byte_42E714C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)exp, (_DWORD)lateExp, barExp);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserExpMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E714C = 1;
  }
  lv = this->fields.lv;
  v19 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  if ( lv < v19->static_fields->UserLevelMax )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserExpMaster___);
    v22 = this->fields.lv;
    v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( v22 >= 2 )
    {
      if ( !Instance )
        goto LABEL_18;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    v22 - 1,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
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
                                  v23,
                                  this->fields.lv,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    *exp = this->fields.exp - (_QWORD)datalist;
    if ( Instance )
    {
      *lateExp = (int64_t)Instance->fields.datalist - this->fields.exp;
      v27 = Instance->fields.datalist;
      result = 1;
      v26 = (double)*exp / (double)((char *)v27 - (char *)datalist);
      goto LABEL_17;
    }
LABEL_18:
    sub_B5D69C(Instance, v21);
  }
  result = 0;
  v26 = 1.0;
  *exp = 0LL;
  *lateExp = 0LL;
LABEL_17:
  *barExp = v26;
  return result;
}


int32_t __fastcall UserGameEntity__getLv(UserGameEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


int32_t __fastcall UserGameEntity__getRp(UserGameEntity_o *this, const MethodInfo *method)
{
  int v3; // w1
  int v4; // w2
  __int64 v5; // x3
  int32_t BaseRp; // w20
  BalanceConfig_c *v7; // x0

  BaseRp = UserGameEntity__getBaseRp(this, method);
  if ( !byte_42E4B1D )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v3, v4, v5);
    byte_42E4B1D = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  if ( BaseRp == v7->static_fields->UerGameRpMax )
    BaseRp += this->fields.carryOverRaidPoint;
  return BaseRp;
}


int64_t __fastcall UserGameEntity__getRpAllRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t rpRecoverAt; // x19
  int64_t Time; // x0

  if ( (byte_42E7147 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7147 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_42E7146 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7146 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return v4->static_fields->UerGameRpMax;
}


int64_t __fastcall UserGameEntity__getRpNextRecoverTime(UserGameEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t rpRecoverAt; // x19
  __int64 v9; // x20
  BalanceConfig_c *v10; // x0
  int64_t UerGameRpRecoverCost; // x8

  if ( (byte_42E7148 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E7148 = 1;
  }
  rpRecoverAt = this->fields.rpRecoverAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v9 = rpRecoverAt - NetworkManager__getTime(0LL);
  if ( v9 < 1 )
    return 0LL;
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  UerGameRpRecoverCost = v9 % v10->static_fields->UerGameRpRecoverCost;
  if ( UerGameRpRecoverCost <= 0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      UerGameRpRecoverCost = v10->static_fields->UerGameRpRecoverCost;
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        return BalanceConfig_TypeInfo->static_fields->UerGameRpRecoverCost;
      }
    }
    else
    {
      return v10->static_fields->UerGameRpRecoverCost;
    }
  }
  return UerGameRpRecoverCost;
}


bool __fastcall UserGameEntity__getTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E7151 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, flagId, (_DWORD)method, v3);
    byte_42E7151 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  return TutorialFlag__Get_29296076(this, flagId, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  BalanceConfig_c *v4; // x0

  if ( (byte_42E7154 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7154 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return v4->static_fields->CommandCodeFrameMax;
}


int32_t __fastcall UserGameEntity__get_SpellImageId(UserGameEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v17; // x1
  UserServantEntity_o *Entity; // x0
  int32_t genderType; // w19
  __int64 v20; // x20
  int64_t fakeValue; // x21
  int64_t v22; // x1
  const MethodInfo *v23; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42E714E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E714E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___),
        Instance = (DataManager_o *)UserGameEntity__getActiveUserEquipId(this, v17),
        !MasterData_WarQuestSelectionMaster) )
  {
    sub_B5D69C(Instance, v15);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             (int64_t)Instance,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( Entity )
  {
    genderType = this->fields.genderType;
    fakeValue = Entity->fields.id.fields.fakeValue;
    v20 = *(_QWORD *)&Entity->fields.id.fields.inited;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v25.fields.currentCryptoKey = fakeValue;
    *(_QWORD *)&v25.fields.fakeValue = v20;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL);
    LODWORD(Entity) = UserGameEntity__GetSpellImageId(genderType, v22, v23);
  }
  return (int)Entity;
}


int32_t __fastcall UserGameEntity__get_SpellImageIdBattle(UserGameEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int64_t Instance; // x0
  __int64 v24; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v26; // x1
  UserServantEntity_o *Entity; // x19
  __int64 v28; // x8
  __int64 v29; // x11
  __int64 v30; // x20
  int32_t result; // w0
  __int64 v32; // x8
  int32_t v33; // w21
  __int64 v34; // x19
  int64_t fakeValue; // x22
  int32_t v36; // w0
  const MethodInfo *v37; // x2
  int32_t v38; // w19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42E714F & 1) == 0 )
  {
    sub_B5D5C4(&BattleRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E714F = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  Instance = UserGameEntity__getActiveUserEquipId(this, v26);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             Instance,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v28 = *(_QWORD *)(Instance + 24);
  if ( v28
    && (v29 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
        *(unsigned __int8 *)(*(_QWORD *)v28 + 300LL) >= (unsigned int)v29) )
  {
    if ( *(BattleRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v28 + 200LL) + 8 * v29 - 8) == BattleRootComponent_TypeInfo )
      v30 = *(_QWORD *)(Instance + 24);
    else
      v30 = 0LL;
    if ( !Entity )
      return 0;
  }
  else
  {
    v30 = 0LL;
    if ( !Entity )
      return 0;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v30, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
    return 0;
  if ( !v30 )
    goto LABEL_28;
  v32 = *(_QWORD *)(v30 + 56);
  if ( !v32 )
    goto LABEL_28;
  v33 = *(_DWORD *)(v32 + 392);
  fakeValue = Entity->fields.id.fields.fakeValue;
  v34 = *(_QWORD *)&Entity->fields.id.fields.inited;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v39.fields.currentCryptoKey = fakeValue;
  *(_QWORD *)&v39.fields.fakeValue = v34;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v39, 0LL);
  Instance = UserGameEntity__GetSpellImageId(v33, v36, v37);
  if ( !*(_QWORD *)(v30 + 56) )
LABEL_28:
    sub_B5D69C(Instance, v24);
  v38 = Instance;
  result = BattleData__GetOverwriteCommandSpellIcon(*(BattleData_o **)(v30 + 56), 0LL);
  if ( !result )
    return v38;
  return result;
}


void __fastcall UserGameEntity__setTutorialFlag(UserGameEntity_o *this, int32_t flagId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E7152 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_TypeInfo, flagId, (_DWORD)method, v3);
    byte_42E7152 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  TutorialFlag__Set_29296708(this, flagId, 0LL);
}